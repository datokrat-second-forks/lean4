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

/-- The implementation of `instBoolForall` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instBoolForallImpl (p : Bool → Prop) [UDecidablePred p] : UDecidable (∀ b, p b) :=
  ofIff (p true ∧ p false) ⟨fun ⟨ht, hf⟩ b => match b with | true => ht | false => hf,
    fun h => ⟨h true, h false⟩⟩

noncomputable instance instBoolForall (p : Bool → Prop) [UDecidablePred p] : UDecidable (∀ b, p b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instBoolForall_csimp : @instBoolForall = @instBoolForallImpl := rfl

/-- The implementation of `instBoolExists` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instBoolExistsImpl (p : Bool → Prop) [UDecidablePred p] : UDecidable (∃ b, p b) :=
  ofIff (p true ∨ p false)
    ⟨fun h => h.elim (⟨true, ·⟩) (⟨false, ·⟩), fun ⟨b, h⟩ => match b, h with
      | true, h => .inl h
      | false, h => .inr h⟩

noncomputable instance instBoolExists (p : Bool → Prop) [UDecidablePred p] : UDecidable (∃ b, p b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instBoolExists_csimp : @instBoolExists = @instBoolExistsImpl := rfl

/-- The implementation of `instArrayEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instArrayEqImpl [UDecidableEq α] : UDecidableEq (Array α) := fun xs ys =>
  mk (xs.isEqv ys (fun a b => decide (a = b)))
    ⟨fun h =>
      let ⟨hs, w⟩ := Array.isEqv_iff_rel.mp h
      Array.ext hs (fun i h₁ _ => (decide_spec _).mp (w i h₁)),
    fun h => h ▸ Array.isEqv_iff_rel.mpr ⟨rfl, fun _ _ => decide_eq_true rfl⟩⟩

noncomputable instance instArrayEq [UDecidableEq α] : UDecidableEq (Array α) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instArrayEq_csimp : @instArrayEq = @instArrayEqImpl := rfl

end UDecidable
