import Lean

/-!
Tests `@[transport]` and the `transport` tactic, and that `inferInstanceAs` and `deriving` fall
back to transport where their definitional unfolding does not apply, i.e. on `newtype`s, whose
equivalence with the underlying type is registered automatically.
-/

newtype Foo := Int with toInt

/-- info: Foo.equiv : Int ≃ Foo -/
#guard_msgs in #check Foo.equiv

example (a : Int) : Foo.equiv.toFun a = Foo.mk a := rfl
example (x : Foo) : Foo.equiv.invFun x = x.toInt := rfl

/-! Congruences beyond those of `Init.Transport`. -/

/-- A congruence for a type constructor rather than a class. -/
@[transport] protected abbrev Option.congr (e : α ≃ β) : Option α ≃ Option β where
  toFun := Option.map e.toFun
  invFun := Option.map e.invFun
  left_inv
    | none => rfl
    | some a => congrArg some (e.left_inv a)
  right_inv
    | none => rfl
    | some b => congrArg some (e.right_inv b)

class LawfulLE (α : Type) [LE α] : Prop where
  le_refl : ∀ x : α, x ≤ x

/-- The conclusion mentions the transported `LE` instance, so it only applies to that one. -/
@[transport] protected abbrev LawfulLE.congr (e : α ≃ β) [i : LE α] :
    @LawfulLE α i ≃ @LawfulLE β ((LE.congr e).toFun i) where
  toFun h := @LawfulLE.mk β ((LE.congr e).toFun i) fun x => h.le_refl (e.invFun x)
  invFun h := @LawfulLE.mk α i fun x => (e.left_inv x ▸ h.le_refl (e.toFun x) : x ≤ x)
  left_inv _ := rfl
  right_inv _ := rfl

instance : LawfulLE Int := ⟨Int.le_refl⟩

/-! The `transport` tactic. -/

instance : LE Foo := by transport (LE Int)
instance : DecidableLE Foo := by transport (DecidableLE Int)
instance : LawfulLE Foo := by transport (LawfulLE Int)

-- The instance is the congruence applied to the underlying instance, nothing is unfolded.
example : (inferInstance : LE Foo) = (LE.congr Foo.equiv).toFun inferInstance := rfl

example : Foo.mk 1 ≤ Foo.mk 2 := by decide
example : ¬ Foo.mk 2 ≤ Foo.mk 1 := by decide
example (x : Foo) : x ≤ x := LawfulLE.le_refl x

/-! Chaining: through nested `newtype`s with `Equiv.trans`, and through type constructors. -/

newtype Foo2 := Foo with toFoo

instance : LE Foo2 := by transport (LE Int)
instance : DecidableLE Foo2 := by transport (DecidableLE Int)

example : Foo2.mk (Foo.mk 1) ≤ Foo2.mk (Foo.mk 2) := by decide

instance : Inhabited (Option Foo) := by transport (Inhabited (Option Int))

example : (default : Option Foo) = none := rfl

/-! `inferInstanceAs` falls back to transport, also resolving placeholders through it. -/

newtype Wrap (n : Nat) := Fin n with toFin

instance : Inhabited (Wrap 3) := inferInstanceAs (Inhabited (Fin _))
instance : LE (Wrap 3) := inferInstanceAs (LE (Fin _))

example : (default : Wrap 3) = Wrap.mk 0 := rfl

-- For a semireducible alias nothing changes.
def Alias := Int
instance : LE Alias := inferInstanceAs (LE Int)

/-! `deriving` falls back to transport, both as a clause and as a command. -/

newtype Baz := Int with toInt
  deriving LE, Inhabited

deriving instance DecidableLE, LawfulLE for Baz

example : (default : Baz) = Baz.mk 0 := rfl
example : Baz.mk 1 ≤ Baz.mk 2 := by decide

/-!
Families of equivalences: a congruence for a class on a type constructor takes `∀ α, m α ≃ n α`,
which is solved under the binder.
-/

class Pointed (m : Type → Type) where
  point : (α : Type) → α → m α

@[transport] protected abbrev Pointed.congr {m n : Type → Type} (e : ∀ α, m α ≃ n α) :
    Pointed m ≃ Pointed n where
  toFun i := ⟨fun α a => (e α).toFun (i.point α a)⟩
  invFun i := ⟨fun α a => (e α).invFun (i.point α a)⟩
  left_inv i := congrArg Pointed.mk <| funext fun α => funext fun a => (e α).left_inv (i.point α a)
  right_inv i := congrArg Pointed.mk <| funext fun α => funext fun a => (e α).right_inv (i.point α a)

instance : Pointed Option := ⟨fun _ => some⟩

newtype Opt (α : Type) := Option α with toOption

instance : Pointed Opt := inferInstanceAs (Pointed Option)

example : Pointed.point (m := Opt) Nat 1 = Opt.mk (some 1) := rfl

-- The family is `fun α => Opt.equiv`, the equivalence of the parametrized `newtype`.
example : (inferInstance : Pointed Opt) = (Pointed.congr fun α => Opt.equiv (α := α)).toFun inferInstance :=
  rfl

-- Chaining under the binder: `Option α ≃ Opt α ≃ Opt2 α`.
newtype Opt2 (α : Type) := Opt α with toOpt

instance : Pointed Opt2 := by transport (Pointed Option)

example : Pointed.point (m := Opt2) Nat 1 = Opt2.mk (Opt.mk (some 1)) := rfl

-- `MonadLift.congr` transports the target monad of a lift.
instance : MonadLift Id Option := ⟨fun x => some x.run⟩

instance : MonadLift Id Opt := inferInstanceAs (MonadLift Id Option)

example : (monadLift (Id.mk 1) : Opt Nat) = Opt.mk (some 1) := rfl

/-! Failures. -/

newtype Bar := Int with toInt

-- Not the transported order, so the law does not carry over.
instance : LE Bar := ⟨fun x y => y.toInt ≤ x.toInt⟩

/--
error: failed to transport
  LawfulLE Int
to
  LawfulLE Bar

Note: `LawfulLE.congr` does not apply
-/
#guard_msgs in
instance : LawfulLE Bar := by transport (LawfulLE Int)

/--
error: failed to transport
  Hashable Int
to
  Hashable Foo

Note: no `@[transport]` declaration applies
-/
#guard_msgs in
instance : Hashable Foo := by transport (Hashable Int)

/--
error: invalid `@[transport]` declaration `notAnEquiv`, its conclusion must be an equivalence `α ≃ β`, but is
  Nat
-/
#guard_msgs in
@[transport] def notAnEquiv : Nat := 0

/--
error: invalid `@[transport]` declaration `badArg`, its explicit arguments must be equivalences or families of equivalences, but `n` has type
  Nat
-/
#guard_msgs in
@[transport] def badArg (n : Nat) : Fin (n + 1) ≃ Fin (n + 1) := Equiv.refl _
