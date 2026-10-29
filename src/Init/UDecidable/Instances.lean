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

/-- Boolean `≤` on `UInt8`. -/
@[expose, extern "lean_uint8_dec_le"] def UInt8.Internal.ble (a b : UInt8) : Bool :=
  Nat.ble a.toBitVec.toFin.val b.toBitVec.toFin.val

/-- Boolean `<` on `UInt8`. -/
@[expose, extern "lean_uint8_dec_lt"] def UInt8.Internal.blt (a b : UInt8) : Bool :=
  Nat.blt a.toBitVec.toFin.val b.toBitVec.toFin.val

theorem UInt8.Internal.ble_iff (a b : UInt8) : UInt8.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

theorem UInt8.Internal.blt_iff (a b : UInt8) : UInt8.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

/-- Boolean `≤` on `UInt16`. -/
@[expose, extern "lean_uint16_dec_le"] def UInt16.Internal.ble (a b : UInt16) : Bool :=
  Nat.ble a.toBitVec.toFin.val b.toBitVec.toFin.val

/-- Boolean `<` on `UInt16`. -/
@[expose, extern "lean_uint16_dec_lt"] def UInt16.Internal.blt (a b : UInt16) : Bool :=
  Nat.blt a.toBitVec.toFin.val b.toBitVec.toFin.val

theorem UInt16.Internal.ble_iff (a b : UInt16) : UInt16.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

theorem UInt16.Internal.blt_iff (a b : UInt16) : UInt16.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

/-- Boolean `≤` on `UInt32`. -/
@[expose, extern "lean_uint32_dec_le"] def UInt32.Internal.ble (a b : UInt32) : Bool :=
  Nat.ble a.toBitVec.toFin.val b.toBitVec.toFin.val

/-- Boolean `<` on `UInt32`. -/
@[expose, extern "lean_uint32_dec_lt"] def UInt32.Internal.blt (a b : UInt32) : Bool :=
  Nat.blt a.toBitVec.toFin.val b.toBitVec.toFin.val

theorem UInt32.Internal.ble_iff (a b : UInt32) : UInt32.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

theorem UInt32.Internal.blt_iff (a b : UInt32) : UInt32.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

/-- Boolean `≤` on `UInt64`. -/
@[expose, extern "lean_uint64_dec_le"] def UInt64.Internal.ble (a b : UInt64) : Bool :=
  Nat.ble a.toBitVec.toFin.val b.toBitVec.toFin.val

/-- Boolean `<` on `UInt64`. -/
@[expose, extern "lean_uint64_dec_lt"] def UInt64.Internal.blt (a b : UInt64) : Bool :=
  Nat.blt a.toBitVec.toFin.val b.toBitVec.toFin.val

theorem UInt64.Internal.ble_iff (a b : UInt64) : UInt64.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

theorem UInt64.Internal.blt_iff (a b : UInt64) : UInt64.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

/-- Boolean `≤` on `USize`. -/
@[expose, extern "lean_usize_dec_le"] def USize.Internal.ble (a b : USize) : Bool :=
  Nat.ble a.toBitVec.toFin.val b.toBitVec.toFin.val

/-- Boolean `<` on `USize`. -/
@[expose, extern "lean_usize_dec_lt"] def USize.Internal.blt (a b : USize) : Bool :=
  Nat.blt a.toBitVec.toFin.val b.toBitVec.toFin.val

theorem USize.Internal.ble_iff (a b : USize) : USize.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

theorem USize.Internal.blt_iff (a b : USize) : USize.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

namespace UDecidable

instance instUInt8Le (a b : UInt8) : UDecidable (a ≤ b) :=
  mk (UInt8.Internal.ble a b) (UInt8.Internal.ble_iff a b)

instance instUInt8Lt (a b : UInt8) : UDecidable (a < b) :=
  mk (UInt8.Internal.blt a b) (UInt8.Internal.blt_iff a b)

instance instUInt16Le (a b : UInt16) : UDecidable (a ≤ b) :=
  mk (UInt16.Internal.ble a b) (UInt16.Internal.ble_iff a b)

instance instUInt16Lt (a b : UInt16) : UDecidable (a < b) :=
  mk (UInt16.Internal.blt a b) (UInt16.Internal.blt_iff a b)

instance instUInt32Le (a b : UInt32) : UDecidable (a ≤ b) :=
  mk (UInt32.Internal.ble a b) (UInt32.Internal.ble_iff a b)

instance instUInt32Lt (a b : UInt32) : UDecidable (a < b) :=
  mk (UInt32.Internal.blt a b) (UInt32.Internal.blt_iff a b)

instance instUInt64Le (a b : UInt64) : UDecidable (a ≤ b) :=
  mk (UInt64.Internal.ble a b) (UInt64.Internal.ble_iff a b)

instance instUInt64Lt (a b : UInt64) : UDecidable (a < b) :=
  mk (UInt64.Internal.blt a b) (UInt64.Internal.blt_iff a b)

instance instUSizeLe (a b : USize) : UDecidable (a ≤ b) :=
  mk (USize.Internal.ble a b) (USize.Internal.ble_iff a b)

instance instUSizeLt (a b : USize) : UDecidable (a < b) :=
  mk (USize.Internal.blt a b) (USize.Internal.blt_iff a b)

instance instCharLe (c d : Char) : UDecidable (c ≤ d) := instUInt32Le c.val d.val

instance instCharLt (c d : Char) : UDecidable (c < d) := instUInt32Lt c.val d.val

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
