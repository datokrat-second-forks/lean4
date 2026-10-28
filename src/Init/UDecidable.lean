/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Nat.Basic
public import Init.PropLemmas
import Init.Data.Bool

set_option linter.missingDocs true

/-!
# Data-free decidability

`UDecidable p` is a prototype of a `Decidable` class whose instances carry no data in the logic, so
that any two instances are definitionally equal. In compiled code, an instance is represented by
the `Bool` that was passed to `UDecidable.mk`, and `UDecidable.decide` returns that `Bool`.
Logically, `UDecidable.decide` is defined classically, so it does not reduce.
-/

public section

/--
A data-free witness that `p` is decidable. Any two instances of `UDecidable p` are definitionally
equal.

Instances are created with `UDecidable.mk`, and `UDecidable.decide` returns the `Bool` that
corresponds to `p`. The compiler represents an instance by this `Bool`, so compiled code can
neither use the constructor `UDecidable.intro`, which does not provide it, nor match on an instance.
-/
noncomputable class UDecidable (p : Prop) : Type where
  private intro ::
  /-- There is a `Bool` that is `true` exactly if `p` holds. -/
  exists_reflects : ∃ b : Bool, b = true ↔ p

namespace UDecidable

private unsafe def decideImpl (p : Prop) [i : UDecidable p] : Bool := unsafeCast i

/--
The `Bool` that is `true` exactly if `p` holds.

This function is defined classically and does not reduce. Compiled code returns the `Bool` that was
passed to `UDecidable.mk` when creating the instance.
-/
@[irreducible, implemented_by decideImpl] def decide (p : Prop) [i : UDecidable p] : Bool :=
  (Classical.choice (i.exists_reflects.elim fun b h => ⟨⟨b, h⟩⟩) :
    {b : Bool // b = true ↔ p}).val

theorem decide_spec (p : Prop) [UDecidable p] : decide p = true ↔ p := by
  unfold decide
  exact (Classical.choice _ : {b : Bool // b = true ↔ p}).property

@[instance_reducible] private unsafe def mkImpl (b : Bool) (_ : b = true ↔ p) : UDecidable p :=
  unsafeCast b

/-- Proves that `p` is decidable by providing a `Bool` that is `true` exactly if `p` holds. -/
@[irreducible, implemented_by mkImpl] def mk (b : Bool) (h : b = true ↔ p) : UDecidable p :=
  ⟨b, h⟩

theorem decide_mk (b : Bool) (h : b = true ↔ p) : @decide p (mk b h) = b :=
  Bool.eq_iff_iff.mpr ((@decide_spec p (mk b h)).trans h.symm)

theorem reflects_decide (p : Prop) [UDecidable p] : (decide p).Reflects p := by
  cases h : decide p
  · exact fun hp => nomatch h.symm.trans ((decide_spec p).mpr hp)
  · exact (decide_spec p).mp h

/-- `UDecidable.ite c t e` is `t` if `c` holds and `e` otherwise. -/
@[expose, macro_inline] def ite {α : Sort u} (c : Prop) [UDecidable c] (t e : α) : α :=
  cond (decide c) t e

/--
`UDecidable.dite c t e` is `t h` if `c` holds, with `h : c`, and `e h` otherwise, with `h : ¬c`.
-/
@[expose, macro_inline] def dite {α : Sort u} (c : Prop) [UDecidable c] (t : c → α) (e : ¬c → α) :
    α :=
  Bool.dcond (decide c) (fun h => t ((decide_spec c).mp h))
    (fun h => e fun hc => nomatch h.symm.trans ((decide_spec c).mpr hc))

/-- Every `Decidable` proposition is `UDecidable`. Compiled code represents both by the same `Bool`. -/
instance (priority := low) ofDecidable (p : Prop) [Decidable p] : UDecidable p :=
  mk (Decidable.decide p) decide_eq_true_iff

/-- Every `UDecidable` proposition is `Decidable`. Compiled code represents both by the same `Bool`. -/
@[expose, instance_reducible] def toDecidable (p : Prop) [UDecidable p] : Decidable p :=
  ⟨decide p, reflects_decide p⟩

instance instAnd (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∧ q) :=
  mk (decide p && decide q) (by simp [decide_spec])

instance instOr (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∨ q) :=
  mk (decide p || decide q) (by simp [decide_spec])

instance instNot (p : Prop) [UDecidable p] : UDecidable (¬p) :=
  mk (!decide p) ⟨fun h hp => by simp [(decide_spec p).mpr hp] at h, fun hnp => by
    cases hd : decide p
    · rfl
    · exact absurd ((decide_spec p).mp hd) hnp⟩

instance instNatEq (n m : Nat) : UDecidable (n = m) :=
  mk (Nat.beq n m) ⟨Nat.eq_of_beq_eq_true, fun h => h ▸ Nat.beq_refl n⟩

instance instNatLe (n m : Nat) : UDecidable (n ≤ m) :=
  mk (Nat.ble n m) ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

instance instNatLt (n m : Nat) : UDecidable (n < m) :=
  instNatLe (n + 1) m

end UDecidable
