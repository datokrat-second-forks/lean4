import Lean

/-!
Tests `@[transport]` and the `transport` tactic, and that `inferInstanceAs` and `deriving` fall
back to transport where their definitional unfolding does not apply, i.e. on `newtype`s, whose
equivalence with the underlying type is registered automatically.
-/

newtype Foo where
  toInt : Int

/-- info: Foo.equivDef : Lean.CanonicalEquivalence Foo Int -/
#guard_msgs in #check Foo.equivDef

example (x : Foo) : Foo.equivDef.toFun x = x.toInt := rfl
example (a : Int) : Foo.equivDef.invFun a = Foo.mk a := rfl

/-! Congruences beyond those of `Init.Transport`. -/

/-- A congruence for a type constructor rather than a class. -/
@[transport] protected abbrev Option.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Option α) (Option β) where
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

/-- Applies to any `LE` instance definitionally equal to the transported one, as `hi` states. -/
@[transport] protected abbrev LawfulLE.canonicalCongr (e : Lean.CanonicalEquivalence α β) [i : LE β]
    {i' : LE α} (hi : i' = (LE.canonicalCongr e).invFun i) :
    Lean.CanonicalEquivalence (@LawfulLE α i') (@LawfulLE β i) where
  toFun h := by
    subst hi
    exact @LawfulLE.mk β i fun x => (e.right_inv x ▸ h.le_refl (e.invFun x) : x ≤ x)
  invFun h := by
    subst hi
    exact @LawfulLE.mk α ((LE.canonicalCongr e).invFun i) fun x => h.le_refl (e.toFun x)
  left_inv _ := rfl
  right_inv _ := rfl

instance : LawfulLE Int := ⟨Int.le_refl⟩

/-! The `transport` tactic. -/

instance : LE Foo := by transport (LE Int)
instance : DecidableLE Foo := by transport (DecidableLE Int)
instance : LawfulLE Foo := by transport (LawfulLE Int)

-- The instance is the congruence applied to the underlying instance, nothing is unfolded.
example : (inferInstance : LE Foo) = (LE.canonicalCongr Foo.equivDef).invFun inferInstance := rfl

example : Foo.mk 1 ≤ Foo.mk 2 := by decide
example : ¬ Foo.mk 2 ≤ Foo.mk 1 := by decide
example (x : Foo) : x ≤ x := LawfulLE.le_refl x

/-! Chaining: through nested `newtype`s with `Lean.CanonicalEquivalence.trans`, and through type constructors. -/

newtype Foo2 where
  toFoo : Foo

instance : LE Foo2 := by transport (LE Int)
instance : DecidableLE Foo2 := by transport (DecidableLE Int)

example : Foo2.mk (Foo.mk 1) ≤ Foo2.mk (Foo.mk 2) := by decide

instance : Inhabited (Option Foo) := by transport (Inhabited (Option Int))

example : (default : Option Foo) = none := rfl

instance : Nonempty Foo := by transport (Nonempty Int)

/-! `inferInstanceAs` falls back to transport, also resolving placeholders through it. -/

newtype Wrap (n : Nat) where
  toFin : Fin n

instance : Inhabited (Wrap 3) := inferInstanceAs (Inhabited (Fin _))
instance : LE (Wrap 3) := inferInstanceAs (LE (Fin _))

example : (default : Wrap 3) = Wrap.mk 0 := rfl

-- For a semireducible alias nothing changes.
def Alias := Int
instance : LE Alias := inferInstanceAs (LE Int)

/-! `deriving` falls back to transport, both as a clause and as a command. -/

newtype Baz where
  toInt : Int
  deriving LE, Inhabited

deriving instance DecidableLE, LawfulLE for Baz

example : (default : Baz) = Baz.mk 0 := rfl
example : Baz.mk 1 ≤ Baz.mk 2 := by decide

/-! Arithmetic: a transported operation rewraps the underlying result, so it reduces. -/

newtype Num where
  toInt : Int
deriving Add, Sub, Mul, Div, Neg

example : Num.mk 2 + Num.mk 3 = Num.mk 5 := rfl
example : Num.mk 7 / Num.mk 2 - Num.mk 1 * Num.mk 3 = Num.mk 0 := rfl
example : -Num.mk 2 = Num.mk (-2) := rfl

instance : SMul Int Num := inferInstanceAs (SMul Int Int)

example : (3 : Int) • Num.mk 2 = Num.mk 6 := rfl

/-!
Families of equivalences: a congruence for a class on a type constructor takes `∀ α, Lean.CanonicalEquivalence (m α) (n α)`,
which is solved under the binder.
-/

class Pointed (m : Type → Type) where
  point : (α : Type) → α → m α

@[transport] protected abbrev Pointed.canonicalCongr {m n : Type → Type} (e : ∀ α, Lean.CanonicalEquivalence (m α) (n α)) :
    Lean.CanonicalEquivalence (Pointed m) (Pointed n) where
  toFun i := ⟨fun α a => (e α).toFun (i.point α a)⟩
  invFun i := ⟨fun α a => (e α).invFun (i.point α a)⟩
  left_inv i := congrArg Pointed.mk <| funext fun α => funext fun a => (e α).left_inv (i.point α a)
  right_inv i := congrArg Pointed.mk <| funext fun α => funext fun a => (e α).right_inv (i.point α a)

instance : Pointed Option := ⟨fun _ => some⟩

newtype Opt (α : Type) where
  toOption : Option α

instance : Pointed Opt := inferInstanceAs (Pointed Option)

example : Pointed.point (m := Opt) Nat 1 = Opt.mk (some 1) := rfl

-- The family is `fun α => Opt.equivDef`, the equivalence of the parametrized `newtype`.
example : (inferInstance : Pointed Opt) =
    (Pointed.canonicalCongr fun α => Opt.equivDef (α := α)).invFun inferInstance :=
  rfl

-- Chaining under the binder: `Opt2 α` unfolds to `Opt α`, which unfolds to `Option α`.
newtype Opt2 (α : Type) where
  toOpt : Opt α

instance : Pointed Opt2 := by transport (Pointed Option)

example : Pointed.point (m := Opt2) Nat 1 = Opt2.mk (Opt.mk (some 1)) := rfl

-- `MonadLift.canonicalCongr` transports the target monad of a lift.
instance : MonadLift Id Option := ⟨fun x => some x.run⟩

instance : MonadLift Id Opt := inferInstanceAs (MonadLift Id Option)

example : (monadLift (Id.mk 1) : Opt Nat) = Opt.mk (some 1) := rfl

/-!
Decidability classes are Π-types of `Decidable`s: they transport through `Pi.canonicalCongr` and
`Decidable.canonicalCongr`, needing only propositions that agree up to defeq, or equations, which
`Eq.canonicalCongr` relates by `rfl` side conditions.
-/

newtype Qux where
  toInt : Int

-- Written by hand, but pointwise definitionally equal to the transported order.
instance : LE Qux := ⟨fun x y => x.toInt ≤ y.toInt⟩
instance : DecidableLE Qux := by transport (DecidableLE Int)
instance : DecidableEq Qux := by transport (DecidableEq Int)

example : Qux.mk 1 ≤ Qux.mk 2 := by decide
example : ¬ Qux.mk 2 ≤ Qux.mk 1 := by decide
example : Qux.mk 1 ≠ Qux.mk 2 := by decide
instance : LawfulLE Qux := by transport (LawfulLE Int)

example : Decidable (Foo.mk 3 = Foo.mk 4) := by transport Decidable ((3 : Int) = 4)

/-! Failures. -/

newtype Bar where
  toInt : Int

-- Not the transported order, so the law does not carry over.
instance : LE Bar := ⟨fun x y => y.toInt ≤ x.toInt⟩

/--
error: failed to transport
  LawfulLE Int
to
  LawfulLE Bar

Note: `LawfulLE.canonicalCongr` does not apply, its argument `hi` does not hold by `rfl`:
  instLEBar = (LE.canonicalCongr Bar.equivDef).invFun Int.instLEInt
-/
#guard_msgs in
instance : LawfulLE Bar := by transport (LawfulLE Int)

-- `DecidableLE` is a Π-type of `Decidable`s, whose propositions must agree up to defeq.
/--
error: failed to transport
  DecidableLE Int
to
  DecidableLE Bar

Note: failed to transport
  (b : Int) → Decidable (Bar.equivDef.toFun a ≤ b)
to
  (b : Bar) → Decidable (a ≤ b)

Note: failed to transport
  Decidable (Bar.equivDef.toFun a✝ ≤ Bar.equivDef.toFun a)
to
  Decidable (a✝ ≤ a)

Note: failed to transport
  Bar.equivDef.toFun a✝ ≤ Bar.equivDef.toFun a
to
  a✝ ≤ a

Note: no `@[transport]` declaration applies
-/
#guard_msgs in
instance : DecidableLE Bar := by transport (DecidableLE Int)

@[irreducible] def Sealed' := Int

unseal Sealed' in
instance : LE Sealed' := inferInstanceAs (LE Int)

-- Without an equivalence the domain of the Π-type cannot be transported.
/--
error: failed to transport
  DecidableLE Int
to
  DecidableLE Sealed'

Note: failed to transport
  Int
to
  Sealed'

Note: no `@[transport]` declaration applies
-/
#guard_msgs in
instance : DecidableLE Sealed' := by transport (DecidableLE Int)

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
error: failed to transport
  Decidable (3 = 4)
to
  Decidable (Foo.mk 3 = Foo.mk 5)

Note: failed to transport
  3 = 4
to
  Foo.mk 3 = Foo.mk 5

Note: `Eq.canonicalCongr` does not apply, its argument `hb` does not hold by `rfl`:
  Foo.equivDef.toFun (Foo.mk 5) = 4
-/
#guard_msgs in
example : Decidable (Foo.mk 3 = Foo.mk 5) := by transport Decidable ((3 : Int) = 4)

/--
error: invalid `@[transport]` declaration `notAnEquiv`, its conclusion must be an equivalence `Lean.CanonicalEquivalence α β`, but is
  Nat
-/
#guard_msgs in
@[transport] def notAnEquiv : Nat := 0

/--
error: invalid `@[transport]` declaration `badArg`, its explicit arguments must be equivalences, families of equivalences or equations, but `n` has type
  Nat
-/
#guard_msgs in
@[transport] def badArg (n : Nat) : Lean.CanonicalEquivalence (Fin (n + 1)) (Fin (n + 1)) := Lean.CanonicalEquivalence.refl _

/--
error: invalid `@[transport]` declaration `mentionsEquiv`, its conclusion mentions the equivalence `e`; state terms built from it as implicit arguments determined by the conclusion, with equations, as `Eq.canonicalCongr` does
-/
#guard_msgs in
@[transport] def mentionsEquiv (e : Lean.CanonicalEquivalence Nat Int) :
    Lean.CanonicalEquivalence (e.toFun 0 = 0) (e.toFun 0 = 0) := Lean.CanonicalEquivalence.refl _

/-! Library-owned equivalences, notation, and names coexist with canonical transport. -/

structure Equiv (α β : Type) where
  toFun : α → β
  invFun : β → α

infixl:25 " ≃ " => Equiv

def Foo.equiv : Int ≃ Foo := ⟨Foo.mk, Foo.toInt⟩
def LE.congr : Nat := 7

newtype Independent where
  toInt : Int
deriving LE, Inhabited

example : Independent.mk 1 ≤ Independent.mk 2 := by decide
example : (default : Independent) = Independent.mk 0 := rfl
example : Lean.CanonicalEquivalence Independent Int := Independent.equivDef
example (x : Int) : Foo.equiv.toFun x = Foo.equivDef.invFun x := rfl
example : LE.congr = 7 := rfl

/-!
An irreducible definition seals its type like a `newtype`, but registers no equivalence, so neither
`inferInstanceAs` nor `deriving` can cross it.
-/

@[irreducible] def Sealed := Int

/--
error: `inferInstanceAs` failed, the source type
  LE Int
is not definitionally equal to the expected type
  LE Sealed
and cannot be transported to it:
  failed to transport
    LE Int
  to
    LE Sealed
  
  Note: failed to transport
    Int
  to
    Sealed
  
  Note: no `@[transport]` declaration applies

Hint: The types are only equal by unfolding irreducible definitions, which seal them. Instances cross such a seal only along `@[transport]` declarations, which `newtype` provides for its underlying type.
-/
#guard_msgs in
instance : LE Sealed := inferInstanceAs (LE Int)

/--
error: failed to transport
  LE Int
to
  LE Sealed

Note: failed to transport
  Int
to
  Sealed

Note: no `@[transport]` declaration applies

Hint: `Sealed` is an irreducible definition, which seals it. Declare it with `newtype` instead, which registers an equivalence with its underlying type.
-/
#guard_msgs in
deriving instance LE for Sealed

/-! Equivalences are only used in their stated direction, so there is none between siblings. -/

newtype SibA where
  toInt : Int
newtype SibB where
  toInt : Int

instance : LE SibA := by transport (LE Int)

/--
error: failed to transport
  LE SibA
to
  LE SibB

Note: failed to transport
  SibA
to
  SibB

Note: no `@[transport]` declaration applies
-/
#guard_msgs in
instance : LE SibB := by transport (LE SibA)

/-! A cycle of `@[transport]` declarations exhausts the search. -/

structure CycA where x : Nat
structure CycB where x : Nat

@[transport] abbrev CycA.toB : Lean.CanonicalEquivalence CycA CycB where
  toFun a := ⟨a.x⟩
  invFun b := ⟨b.x⟩
  left_inv _ := rfl
  right_inv _ := rfl

@[transport] abbrev CycB.toA : Lean.CanonicalEquivalence CycB CycA where
  toFun b := ⟨b.x⟩
  invFun a := ⟨a.x⟩
  left_inv _ := rfl
  right_inv _ := rfl

/--
error: failed to transport
  Inhabited Nat
to
  Inhabited CycB
because the search exceeded its depth; the `@[transport]` declarations may form a cycle
-/
#guard_msgs in
instance : Inhabited CycB := by transport (Inhabited Nat)

/-!
A congruence for a lawful class on a type constructor, taking the instance of its parent class
with an equation stating that it is the transported one, as `LawfulMonad` does.
-/

class LawfulPointed (m : Type → Type) [Pointed m] : Prop where
  point_inj : ∀ α (a b : α), Pointed.point (m := m) α a = Pointed.point α b → a = b

@[transport] protected abbrev LawfulPointed.canonicalCongr {m n : Type → Type}
    (e : ∀ α, Lean.CanonicalEquivalence (m α) (n α)) [i : Pointed n] {i' : Pointed m}
    (hi : i' = (Pointed.canonicalCongr e).invFun i) :
    Lean.CanonicalEquivalence (@LawfulPointed m i') (@LawfulPointed n i) where
  toFun h := by
    subst hi
    exact @LawfulPointed.mk n i fun α a b hab =>
      h.point_inj α a b (congrArg (e α).invFun hab)
  invFun h := by
    subst hi
    exact @LawfulPointed.mk m ((Pointed.canonicalCongr e).invFun i) fun α a b hab =>
      h.point_inj α a b <| by
        have := congrArg (e α).toFun hab
        change (e α).toFun ((e α).invFun (i.point α a)) = (e α).toFun ((e α).invFun (i.point α b)) at this
        rwa [(e α).right_inv, (e α).right_inv] at this
  left_inv _ := rfl
  right_inv _ := rfl

instance : LawfulPointed Option := ⟨fun _ _ _ h => Option.some.inj h⟩

instance : LawfulPointed Opt := inferInstanceAs (LawfulPointed Option)
instance : LawfulPointed Opt2 := by transport (LawfulPointed Option)

/-! Deriving the core order classes on a `newtype`. -/

newtype Ordered where
  toInt : Int
deriving DecidableEq, Ord, Std.TransOrd, Std.LawfulEqOrd

example : Ordered.mk 1 ≠ Ordered.mk 2 := by decide
example : compare (Ordered.mk 1) (Ordered.mk 2) = .lt := by decide
example (a b c : Ordered) (h₁ : (compare a b).isLE) (h₂ : (compare b c).isLE) :
    (compare a c).isLE := Std.TransOrd.isLE_trans h₁ h₂
example (a b : Ordered) (h : compare a b = .eq) : a = b := Std.LawfulEqOrd.eq_of_compare h

/-! The core congruences for `Alternative`, `MonadRef` and `MonadControl`. -/

newtype OptM (α : Type) where
  toStateT : StateT Nat (OptionT (ReaderT Lean.Syntax Id)) α

instance : Lean.MonadRef (ReaderT Lean.Syntax Id) where
  getRef := read
  withRef ref x := withReader (fun _ => ref) x

instance : Monad OptM := inferInstanceAs (Monad (StateT _ _))
instance : Alternative OptM := inferInstanceAs (Alternative (StateT _ _))
instance : Lean.MonadRef OptM := inferInstanceAs (Lean.MonadRef (StateT _ _))
instance : MonadControl (OptionT (ReaderT Lean.Syntax Id)) OptM :=
  inferInstanceAs (MonadControl _ (StateT _ _))

def OptM.run (x : OptM α) : Option (α × Nat) := x.toStateT.run 0 |>.run |>.run .missing |>.run

/-- info: some (2, 0) -/
#guard_msgs in #eval (failure <|> pure 2 : OptM Nat).run

/-- info: some (true, 0) -/
#guard_msgs in
#eval (Lean.MonadRef.withRef (.atom .none "x") do return (← Lean.getRef).isAtom : OptM Bool).run

/-- info: some (3, 0) -/
#guard_msgs in #eval (controlAt (OptionT (ReaderT Lean.Syntax Id)) fun run => run (pure 3) : OptM Nat).run

/-! The core congruences for `MonadFunctor` and the `MonadAttach` laws. -/

newtype RM (α : Type) where
  toReaderT : ReaderT Nat Id α

instance : Monad RM := inferInstanceAs (Monad (ReaderT Nat Id))
instance : LawfulMonad RM := inferInstanceAs (LawfulMonad (ReaderT Nat Id))
instance : MonadFunctor Id RM := inferInstanceAs (MonadFunctor Id (ReaderT Nat Id))
instance : MonadAttach RM := inferInstanceAs (MonadAttach (ReaderT Nat Id))
instance : WeaklyLawfulMonadAttach RM := inferInstanceAs (WeaklyLawfulMonadAttach (ReaderT Nat Id))
instance : LawfulMonadAttach RM := inferInstanceAs (LawfulMonadAttach (ReaderT Nat Id))

example : (monadMap (m := Id) (fun x => x) (pure 1 : RM Nat)).toReaderT.run 0 = Id.mk 1 := rfl

/-! `MonadLift` and `LawfulMonadLift` along equivalences of both monads. -/

newtype IdN (α : Type) where
  toId : Id α

instance : Monad IdN := inferInstanceAs (Monad Id)
instance : MonadLift IdN RM := inferInstanceAs (MonadLift Id (ReaderT Nat Id))
instance : LawfulMonadLift IdN RM := inferInstanceAs (LawfulMonadLift Id (ReaderT Nat Id))

example : (monadLift (IdN.mk (Id.mk 1)) : RM Nat).toReaderT.run 0 = Id.mk 1 := rfl

instance {ε σ : Type} : LawfulMonadLift (ST σ) (EST ε σ) where
  monadLift_pure _ := rfl
  monadLift_bind _ _ := rfl

instance : LawfulMonadLift BaseIO (EIO ε) :=
  inferInstanceAs (LawfulMonadLift (ST IO.RealWorld) (EST ε IO.RealWorld))
/-!
A congruence whose data does not reduce to a constructor application leaves the transported
instance folded, with a warning.
-/

class Point (α : Type) where
  point : α

def backward (e : Lean.CanonicalEquivalence α β) (b : β) : α := e.invFun b

@[transport] protected abbrev Point.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Point α) (Point β) where
  toFun i := ⟨e.toFun i.point⟩
  invFun i := ⟨backward e i.point⟩
  left_inv i := congrArg Point.mk (e.left_inv i.point)
  right_inv i := congrArg Point.mk (e.right_inv i.point)

instance : Point Nat := ⟨0⟩

newtype Pt where
  toNat : Nat

/--
warning: the transported value is not unfolded, since its data still contains an equivalence:
  { point := backward { toFun := Pt.toNat, invFun := Pt.mk, left_inv := ⋯, right_inv := ⋯ } Point.point }
The data of `@[transport]` declarations must reduce to constructor applications by unfolding reducible definitions, without casts.

Note: This linter can be disabled with `set_option linter.transport.unfold false`
-/
#guard_msgs in
instance : Point Pt := inferInstanceAs (Point Nat)

#guard_msgs in
set_option linter.transport.unfold false in
instance : Point Pt := inferInstanceAs (Point Nat)
