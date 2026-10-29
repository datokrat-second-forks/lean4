/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.UDecidable
public import Init.Data.UInt.Basic
public import Init.Data.Char.Basic
public import Init.Data.Array.DecidableEq
public import Init.Data.Nat.Lemmas

set_option linter.missingDocs true

/-!
# `UDecidable` instances

`UDecidable` instances that need more of the library than `Init.UDecidable` imports.
-/

public section

namespace UDecidable

instance instBoolForall (p : Bool → Prop) [UDecidablePred p] : UDecidable (∀ b, p b) :=
  ofIff (p true ∧ p false) ⟨fun ⟨ht, hf⟩ b => match b with | true => ht | false => hf,
    fun h => ⟨h true, h false⟩⟩

instance instBoolExists (p : Bool → Prop) [UDecidablePred p] : UDecidable (∃ b, p b) :=
  ofIff (p true ∨ p false)
    ⟨fun h => h.elim (⟨true, ·⟩) (⟨false, ·⟩), fun ⟨b, h⟩ => match b, h with
      | true, h => .inl h
      | false, h => .inr h⟩

instance instArrayEq [UDecidableEq α] : UDecidableEq (Array α) := fun xs ys =>
  mk (xs.isEqv ys (fun a b => decide (a = b)))
    ⟨fun h =>
      let ⟨hs, w⟩ := Array.isEqv_iff_rel.mp h
      Array.ext hs (fun i h₁ _ => (decide_spec _).mp (w i h₁)),
    fun h => h ▸ Array.isEqv_iff_rel.mpr ⟨rfl, fun _ _ => decide_eq_true rfl⟩⟩

instance instForallNatLt (n : Nat) (p : ∀ k, k < n → Prop) [∀ k h, UDecidable (p k h)] :
    UDecidable (∀ k h, p k h) :=
  mk (Nat.allLTTR n (fun k h => decide (p k h))) (by
    rw [Nat.allLTTR_eq_true]
    exact ⟨fun w k h => (decide_spec _).mp (w k h), fun w k h => decide_eq_true (w k h)⟩)

instance instForallNatLe (n : Nat) (p : ∀ k, k ≤ n → Prop) [∀ k h, UDecidable (p k h)] :
    UDecidable (∀ k h, p k h) :=
  ofIff (∀ (k) (h : k < n + 1), p k (Nat.le_of_lt_succ h))
    ⟨fun w k h => w k (Nat.lt_succ_of_le h), fun w k _ => w k _⟩

instance instForallFin (p : Fin n → Prop) [UDecidablePred p] : UDecidable (∀ i, p i) :=
  ofIff (∀ k h, p ⟨k, h⟩) ⟨fun w ⟨k, h⟩ => w k h, fun w k h => w ⟨k, h⟩⟩

instance instExistsNatLt' {p : (k : Nat) → k < n → Prop} [∀ k h, UDecidable (p k h)] :
    UDecidable (∃ k, ∃ h : k < n, p k h) :=
  mk (Nat.anyLTTR n (fun k h => decide (p k h))) (by
    rw [Nat.anyLTTR_eq_true]
    exact ⟨fun ⟨k, h, w⟩ => ⟨k, h, (decide_spec _).mp w⟩,
      fun ⟨k, h, w⟩ => ⟨k, h, decide_eq_true w⟩⟩)

instance instExistsNatLe' {p : (k : Nat) → k ≤ n → Prop} [∀ k h, UDecidable (p k h)] :
    UDecidable (∃ k, ∃ h : k ≤ n, p k h) :=
  ofIff (∃ k, ∃ h : k < n + 1, p k (Nat.le_of_lt_succ h))
    ⟨fun ⟨k, h, w⟩ => ⟨k, Nat.le_of_lt_succ h, w⟩, fun ⟨k, h, w⟩ => ⟨k, Nat.lt_succ_of_le h, w⟩⟩

instance instExistsNatLt {p : Nat → Prop} [UDecidablePred p] :
    UDecidablePred fun n => ∃ k, k < n ∧ p k :=
  fun _ => ofIff (∃ k, ∃ _ : k < _, p k)
    ⟨fun ⟨k, h, w⟩ => ⟨k, h, w⟩, fun ⟨k, h, w⟩ => ⟨k, h, w⟩⟩

instance instExistsNatLe {p : Nat → Prop} [UDecidablePred p] :
    UDecidablePred fun n => ∃ k, k ≤ n ∧ p k :=
  fun _ => ofIff (∃ k, ∃ _ : k ≤ _, p k)
    ⟨fun ⟨k, h, w⟩ => ⟨k, h, w⟩, fun ⟨k, h, w⟩ => ⟨k, h, w⟩⟩

instance instExistsFin (p : Fin n → Prop) [UDecidablePred p] : UDecidable (∃ i, p i) :=
  ofIff (∃ k, ∃ h : k < n, p ⟨k, h⟩) ⟨fun ⟨k, h, w⟩ => ⟨⟨k, h⟩, w⟩, fun ⟨⟨k, h⟩, w⟩ => ⟨k, h, w⟩⟩

end UDecidable
