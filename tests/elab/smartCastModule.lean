module

/-!
Smart casts under the module system: an exported cast is checked in the public scope, so it cannot
cast along a definition that is not exposed; a cast in a body that is not exposed is checked in the
private scope. The cast's proof is abstracted.
-/

set_option elaborator.implicitTransparency true

public section

def Mem (xs : List Nat) (x : Nat) : Prop := x ∈ xs

/--
error: cannot cast
  Decidable (x ∈ xs)
to
  Decidable (Mem xs x)
in the public scope because the types are definitionally equal at `default` transparency only in the private scope

Hint: Expose the definitions that need to be unfolded, or make the declaration `private` if it is only used in this module.
-/
#guard_msgs in
instance instDecidableMemExposed {xs : List Nat} {x : Nat} : Decidable (Mem xs x) :=
  inferInstanceAs (Decidable (x ∈ xs))

@[no_expose] instance {xs : List Nat} {x : Nat} : Decidable (Mem xs x) :=
  inferInstanceAs (Decidable (x ∈ xs))

/--
info: @[instance_reducible] def instDecidableMem : {xs : List Nat} → {x : Nat} → Decidable (Mem xs x) :=
fun {xs} {x} => smartCast (Decidable (x ∈ xs)) (Decidable (Mem xs x)) ⋯ (List.instDecidableMemOfLawfulBEq x xs)
-/
#guard_msgs in
#print instDecidableMem

/-- info: instDecidableMem._proof_1 {xs : List Nat} {x : Nat} : Decidable (x ∈ xs) = Decidable (Mem xs x) -/
#guard_msgs in
#check instDecidableMem._proof_1

example : Mem [1, 2] 2 := by decide

theorem decidable_mem_eq {xs : List Nat} {x : Nat} : Decidable (x ∈ xs) = Decidable (Mem xs x) := by
  with_semireducible rfl

/-! `addDecl` checks a cast in an exposed body in the public scope, and otherwise in the private one. -/

/--
error: cannot cast
  Decidable (x ∈ xs)
to
  Decidable (Mem xs x)
in the public scope because the types are definitionally equal at `default` transparency only in the private scope

Hint: Expose the definitions that need to be unfolded, or make the declaration `private` if it is only used in this module.
-/
#guard_msgs in
@[expose] def decMemExposed (xs : List Nat) (x : Nat) : Decidable (Mem xs x) :=
  smartCast (Decidable (x ∈ xs)) (Decidable (Mem xs x)) decidable_mem_eq inferInstance

def decMem (xs : List Nat) (x : Nat) : Decidable (Mem xs x) :=
  smartCast (Decidable (x ∈ xs)) (Decidable (Mem xs x)) decidable_mem_eq inferInstance

/-! Declared casts are checked in the scope of their bodies. -/

def NatList := List Nat

/--
error: cannot cast
  List Nat
to
  NatList
in the public scope because the types are definitionally equal at `default` transparency only in the private scope

Hint: Expose the definitions that need to be unfolded, or make the declaration `private` if it is only used in this module.
-/
#guard_msgs in
@[expose] noncomputable def NatList.ofListExposed (xs : List Nat) : NatList := smartCast

noncomputable def NatList.ofList (xs : List Nat) : NatList := smartCast

/-! Along an exposed definition, the cast may be exported. -/

@[expose] def Mem' (xs : List Nat) (x : Nat) : Prop := x ∈ xs

instance instDecidableMem' {xs : List Nat} {x : Nat} : Decidable (Mem' xs x) :=
  inferInstanceAs (Decidable (x ∈ xs))

/--
info: @[instance_reducible, expose] def instDecidableMem' : {xs : List Nat} → {x : Nat} → Decidable (Mem' xs x) :=
fun {xs} {x} => smartCast (Decidable (x ∈ xs)) (Decidable (Mem' xs x)) ⋯ (List.instDecidableMemOfLawfulBEq x xs)
-/
#guard_msgs in
#print instDecidableMem'

/-! A derived instance of a definition that is not exposed is not exposed either. -/

def Small (n : Nat) : Prop := n < 10

deriving instance Decidable for Small

/--
info: @[instance_reducible] def instDecidableSmall : (n : Nat) → Decidable (Small n) :=
fun n => smartCast (Decidable (n < 10)) (Decidable (Small n)) ⋯ (n.decLt 10)
-/
#guard_msgs in
#print instDecidableSmall

example : Small 3 := by decide

end
