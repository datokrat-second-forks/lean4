/-!
Prototype of a data-free `Decidable`, `UDecidable`. Logically it carries no data and `decide` is
defined classically, but the compiler represents an instance by the `Bool` passed to
`UDecidable.mk`, so `UDecidable.decide` compiles to the identity. This test checks that compiled and
interpreted code compute with that `Bool`.
-/

-- The compiler represents `UDecidable p` by a `Bool`, which `intro` does not carry and `casesOn`
-- cannot match on.
noncomputable class UDecidable (p : Prop) : Type where
  private intro ::
  exists_reflects : ∃ b : Bool, b = true ↔ p

namespace UDecidable

unsafe def decideImpl (p : Prop) [i : UDecidable p] : Bool := unsafeCast i

@[irreducible, implemented_by decideImpl] def decide (p : Prop) [i : UDecidable p] : Bool :=
  (Classical.choice (i.exists_reflects.elim fun b h => ⟨⟨b, h⟩⟩) :
    {b : Bool // b = true ↔ p}).val

theorem decide_spec (p : Prop) [UDecidable p] : decide p = true ↔ p := by
  unfold decide
  exact (Classical.choice _ : {b : Bool // b = true ↔ p}).property

@[instance_reducible] unsafe def mkImpl (b : Bool) (_ : b = true ↔ p) : UDecidable p := unsafeCast b

@[irreducible, implemented_by mkImpl] def mk (b : Bool) (h : b = true ↔ p) : UDecidable p := ⟨b, h⟩

@[macro_inline] def ite {α : Sort u} (c : Prop) [UDecidable c] (t e : α) : α :=
  cond (decide c) t e

@[macro_inline] def dite {α : Sort u} (c : Prop) [UDecidable c] (t : c → α) (e : ¬c → α) : α :=
  Bool.dcond (decide c) (fun h => t ((decide_spec c).mp h))
    (fun h => e fun hc => nomatch h.symm.trans ((decide_spec c).mpr hc))

theorem reflects_decide (p : Prop) [UDecidable p] : (decide p).Reflects p := by
  cases h : decide p
  · exact fun hp => nomatch h.symm.trans ((decide_spec p).mpr hp)
  · exact (decide_spec p).mp h

instance (priority := low) ofDecidable (p : Prop) [Decidable p] : UDecidable p :=
  mk (Decidable.decide p) decide_eq_true_iff

def toDecidable (p : Prop) [UDecidable p] : Decidable p :=
  ⟨decide p, reflects_decide p⟩

instance instNatLe (n m : Nat) : UDecidable (n ≤ m) :=
  mk (Nat.ble n m) ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

instance instAnd (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∧ q) :=
  mk (decide p && decide q) (by simp [decide_spec])

instance instNot (p : Prop) [UDecidable p] : UDecidable (¬p) :=
  mk (!decide p) (by
    have := decide_spec p
    revert this
    cases decide p <;> simp)

end UDecidable

@[noinline] def classify (n m : Nat) : String :=
  UDecidable.ite (n ≤ m) "le" "gt"

@[noinline] def between (lo n hi : Nat) : Bool :=
  UDecidable.decide (lo ≤ n ∧ ¬hi ≤ n)

@[noinline] def viaBridge (n m : Nat) : Bool :=
  -- `n = m` only has the `Decidable` instance, so this goes through `ofDecidable`.
  UDecidable.decide (n = m)

@[noinline] def viaToDecidable (n m : Nat) : String :=
  @_root_.ite _ (n ≤ m) (UDecidable.toDecidable _) "le" "gt"

@[noinline] def getOrZero (xs : Array Nat) (i : Nat) : Nat :=
  UDecidable.dite (i < xs.size) (fun h => xs[i]) (fun _ => 0)

@[noinline] def storeAndRead (n m : Nat) : Bool :=
  -- An instance stored in a data structure and read back later.
  let insts : Array (UDecidable (n ≤ m)) := #[inferInstance]
  @UDecidable.decide _ (insts.getD 0 inferInstance)

-- Underapplied `mk` and `decide` in argument position.
@[noinline] def mkFns : List ((b : Bool) → (b = true ↔ True) → UDecidable True) :=
  [@UDecidable.mk _]

@[noinline] def decideFns (n m : Nat) : List (UDecidable (n ≤ m) → Bool) :=
  [@UDecidable.decide _]

def main : IO Unit := do
  for (n, m) in [(1, 2), (2, 2), (3, 2)] do
    IO.println s!"{n} {m}: {classify n m} {viaBridge n m} {viaToDecidable n m} {storeAndRead n m}"
  for n in [0, 1, 5, 9, 10] do
    IO.println s!"between 1 {n} 10: {between 1 n 10}"
  IO.println s!"{getOrZero #[7, 8] 1} {getOrZero #[7, 8] 2}"
  IO.println s!"mk: {mkFns.map fun f => @UDecidable.decide _ (f true (by simp))}"
  IO.println s!"decide: {(decideFns 1 2).map (· inferInstance)} {(decideFns 3 2).map (· inferInstance)}"
