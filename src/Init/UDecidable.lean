/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.UDecidable.Basic
public import Init.Data.Int.Basic
public import Init.BinderNameHint
import Init.Data.Bool
import Init.Classical
public import Init.PropLemmas

set_option linter.missingDocs true

/-!
# Data-free decidability: classical instances and `Decidable`

The parts of `UDecidable` that need the law of the excluded middle or relate it to `Decidable`. The
class itself and the basic instances are in `Init.UDecidable.Basic`.
-/

public section

namespace UDecidable

@[simp] theorem ite_not {α : Sort u} {p : Prop} {_ : UDecidable (¬p)} {x y : α} :
    (uif ¬p then x else y) = @ite α p (classical p) y x := by
  cases Classical.em p with
  | inl hp => rw [ite_eq_right (not_not_intro hp), @ite_eq_left p (classical p) hp]
  | inr hp => rw [ite_eq_left hp, @ite_eq_right p (classical p) hp]

theorem ite_cond_congr {α : Sort u} {b c : Prop} {_ : UDecidable b} [UDecidable c] {x y : α}
    (h : b = c) : (uif b then x else y) = (uif c then x else y) := by
  subst h
  rfl

theorem dite_cond_congr {α : Sort u} {b c : Prop} {_ : UDecidable b} [UDecidable c] {x : b → α}
    {y : ¬b → α} (h : b = c) :
    dite b x y = dite c (fun hc => x (h.mpr_prop hc)) (fun hc => y (h.mpr_not hc)) := by
  subst h
  rfl

/--
Used by the well-founded definition preprocessor to extend the context of a termination proof
inside `uif c then t else e` with the condition.
-/
@[wf_preprocess] theorem ite_eq_dite {α : Sort u} {c : Prop} [UDecidable c] {t e : α} :
    (uif c then t else e) =
      dite c (fun h => binderNameHint h () t) (fun h => binderNameHint h () e) := by
  cases em c with
  | inl hc => rw [ite_eq_left hc, dite_eq_left hc]; rfl
  | inr hc => rw [ite_eq_right hc, dite_eq_right hc]; rfl

/-- `uif` agrees with `if` for any pair of instances. -/
theorem ite_eq_ite {α : Sort u} {c : Prop} [UDecidable c] [Decidable c] {t e : α} :
    (uif c then t else e) = (if c then t else e) := by
  cases em c with
  | inl hc => rw [ite_eq_left hc, _root_.ite_eq_left hc]
  | inr hc => rw [ite_eq_right hc, _root_.ite_eq_right hc]

/-- `uif h :` agrees with `if h :` for any pair of instances. -/
theorem dite_eq_dite {α : Sort u} {c : Prop} [UDecidable c] [Decidable c] {t : c → α}
    {e : ¬c → α} : dite c t e = _root_.dite c t e := by
  cases em c with
  | inl hc => rw [dite_eq_left hc, _root_.dite_eq_left hc]
  | inr hc => rw [dite_eq_right hc, _root_.dite_eq_right hc]

/-- `UDecidable.decide` agrees with `Decidable.decide`. -/
theorem decide_eq_decidable_decide {p : Prop} [UDecidable p] [Decidable p] :
    decide p = Decidable.decide p :=
  Bool.eq_iff_iff.mpr ((decide_spec p).trans _root_.decide_eq_true_iff.symm)

end UDecidable
