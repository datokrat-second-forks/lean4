/-
Copyright (c) 2023 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kim Morrison
-/
module

prelude
public import Init.Grind.Tactics
public import Init.UDecidable.Basic
import Init.PropLemmas

public section
/-!
# Specializations of basic logic lemmas

These are useful for `omega` while constructing proofs, but not considered generally useful
so are hidden in the `Lean.Omega` namespace.

If you find yourself needing them elsewhere, please move them first to another file.
-/

namespace Lean.Omega

theorem and_not_not_of_not_or (h : ¬ (p ∨ q)) : ¬ p ∧ ¬ q := not_or.mp h

theorem Decidable.or_not_not_of_not_and [Decidable p] [Decidable q]
    (h : ¬ (p ∧ q)) : ¬ p ∨ ¬ q :=
  Decidable.not_and_iff_or_not.mp h

theorem Decidable.and_or_not_and_not_of_iff {p q : Prop} [Decidable q] (h : p ↔ q) :
    (p ∧ q) ∨ (¬p ∧ ¬q) := Decidable.iff_iff_and_or_not_and_not.mp h

theorem Decidable.not_iff_iff_and_not_or_not_and [Decidable a] [Decidable b] :
    (¬ (a ↔ b)) ↔ (a ∧ ¬ b) ∨ ((¬ a) ∧ b) :=
  ⟨fun e => if hb : b then
    .inr ⟨fun ha => e ⟨fun _ => hb, fun _ => ha⟩, hb⟩
  else
    .inl ⟨if ha : a then ha else False.elim (e ⟨fun ha' => absurd ha' ha, fun hb' => absurd hb' hb⟩), hb⟩,
  Or.rec (And.rec fun ha nb w => nb (w.mp ha)) (And.rec fun na hb w => na (w.mpr hb))⟩

theorem Decidable.and_not_or_not_and_of_not_iff [Decidable a] [Decidable b]
    (h : ¬ (a ↔ b)) : a ∧ ¬b ∨ ¬a ∧ b :=
  Decidable.not_iff_iff_and_not_or_not_and.mp h

theorem Decidable.and_not_of_not_imp [Decidable a] (h : ¬(a → b)) : a ∧ ¬b :=
  Decidable.not_imp_iff_and_not.mp h

theorem ite_disjunction {α : Type u} {P : Prop} [Decidable P] {a b : α} :
    (P ∧ (if P then a else b) = a) ∨ (¬ P ∧ (if P then a else b) = b) :=
  if h : P then
    .inl ⟨h, ite_eq_left h⟩
  else
    .inr ⟨h, ite_eq_right h⟩

theorem uite_disjunction {α : Type u} {P : Prop} [UDecidable P] {a b : α} :
    (P ∧ (uif P then a else b) = a) ∨ (¬ P ∧ (uif P then a else b) = b) :=
  (Classical.em P).elim (fun h => .inl ⟨h, UDecidable.ite_eq_left h⟩)
    (fun h => .inr ⟨h, UDecidable.ite_eq_right h⟩)

theorem cond_disjunction {α : Type u} {b : Bool} {a a' : α} :
    (b = true ∧ cond b a a' = a) ∨ (b = false ∧ cond b a a' = a') := by
  cases b
  · exact .inr ⟨rfl, rfl⟩
  · exact .inl ⟨rfl, rfl⟩

/-- The existentials keep the branches applicable to a proof when they depend on the condition. -/
theorem dcond_disjunction {α : Type u} {b : Bool} {t : b = true → α} {e : b = false → α} :
    (b = true ∧ ∃ h : b = true, Bool.dcond b t e = t h) ∨
      (b = false ∧ ∃ h : b = false, Bool.dcond b t e = e h) := by
  cases b
  · exact .inr ⟨rfl, rfl, rfl⟩
  · exact .inl ⟨rfl, rfl, rfl⟩

end Lean.Omega
