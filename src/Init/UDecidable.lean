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
public import Init.BinderNameHint

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

instance (p : Prop) : Subsingleton (UDecidable p) := ⟨fun _ _ => rfl⟩

theorem em (p : Prop) [UDecidable p] : p ∨ ¬p := by
  have h := reflects_decide p
  revert h
  cases decide p
  · exact Or.inr
  · exact Or.inl

theorem decide_eq_true {p : Prop} [UDecidable p] (hp : p) : decide p = true :=
  (decide_spec p).mpr hp

theorem decide_eq_false {p : Prop} [UDecidable p] (hnp : ¬p) : decide p = false := by
  cases h : decide p
  · rfl
  · exact absurd ((decide_spec p).mp h) hnp

/-! `uif c then t else e` and `uif h : c then t else e` are the notations for `ite` and `dite`. -/

@[inherit_doc dite] syntax (name := termDepUIfThenElse)
  ppRealGroup(ppRealFill(ppIndent("uif " Lean.binderIdent " : " term " then") ppSpace term)
    ppDedent(ppSpace) ppRealFill("else " term)) : term

macro_rules
  | `(uif $h:ident : $c then $t else $e) =>
    `(UDecidable.dite $c (fun $h:ident => $t) (fun $h:ident => $e))
  | `(uif _%$h : $c then $t else $e) =>
    `(UDecidable.dite $c (fun _%$h => $t) (fun _%$h => $e))

@[inherit_doc ite] syntax (name := termUIfThenElse)
  ppRealGroup(ppRealFill(ppIndent("uif " term " then") ppSpace term)
    ppDedent(ppSpace) ppRealFill("else " term)) : term

macro_rules
  | `(uif $c then $t else $e) => `(UDecidable.ite $c $t $e)

theorem ite_eq_left {c : Prop} [UDecidable c] (hc : c) {α : Sort u} {t e : α} :
    (uif c then t else e) = t := by
  simp only [ite, decide_eq_true hc, Bool.cond_true]

theorem ite_eq_right {c : Prop} [UDecidable c] (hnc : ¬c) {α : Sort u} {t e : α} :
    (uif c then t else e) = e := by
  simp only [ite, decide_eq_false hnc, Bool.cond_false]

private theorem dcond_eq_left {α : Sort u} {b : Bool} (h : b = true) {t : b = true → α}
    {e : b = false → α} : Bool.dcond b t e = t h := by
  cases b
  · contradiction
  · rfl

private theorem dcond_eq_right {α : Sort u} {b : Bool} (h : b = false) {t : b = true → α}
    {e : b = false → α} : Bool.dcond b t e = e h := by
  cases b
  · rfl
  · contradiction

theorem dite_eq_left {c : Prop} [UDecidable c] (hc : c) {α : Sort u} {t : c → α} {e : ¬c → α} :
    dite c t e = t hc :=
  dcond_eq_left (decide_eq_true hc)

theorem dite_eq_right {c : Prop} [UDecidable c] (hnc : ¬c) {α : Sort u} {t : c → α}
    {e : ¬c → α} : dite c t e = e hnc :=
  dcond_eq_right (decide_eq_false hnc)

@[simp] theorem ite_true {_ : UDecidable True} {α : Sort u} (t e : α) :
    (uif True then t else e) = t :=
  ite_eq_left trivial

@[simp] theorem ite_false {_ : UDecidable False} {α : Sort u} (t e : α) :
    (uif False then t else e) = e :=
  ite_eq_right id

@[simp] theorem dite_true {_ : UDecidable True} {α : Sort u} {t : True → α} {e : ¬True → α} :
    dite True t e = t trivial :=
  dite_eq_left trivial

@[simp] theorem dite_false {_ : UDecidable False} {α : Sort u} {t : False → α} {e : ¬False → α} :
    dite False t e = e id :=
  dite_eq_right id

theorem ite_eq_left_of_eq_true {α : Sort u} {c : Prop} {_ : UDecidable c} (t e : α)
    (h : c = True) : (uif c then t else e) = t :=
  ite_eq_left (of_eq_true h)

theorem ite_eq_right_of_eq_false {α : Sort u} {c : Prop} {_ : UDecidable c} (t e : α)
    (h : c = False) : (uif c then t else e) = e :=
  ite_eq_right (of_eq_false h)

theorem dite_eq_left_of_eq_true {α : Sort u} {c : Prop} {_ : UDecidable c} {t : c → α}
    {e : ¬c → α} (h : c = True) : dite c t e = t (of_eq_true h) :=
  dite_eq_left (of_eq_true h)

theorem dite_eq_right_of_eq_false {α : Sort u} {c : Prop} {_ : UDecidable c} {t : c → α}
    {e : ¬c → α} (h : c = False) : dite c t e = e (of_eq_false h) :=
  dite_eq_right (of_eq_false h)

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

@[congr]
theorem ite_congr {b c : Prop} {_ : UDecidable b} [UDecidable c] {α : Sort u} {x y u v : α}
    (h₁ : b = c) (h₂ : c → x = u) (h₃ : ¬c → y = v) :
    (uif b then x else y) = (uif c then u else v) := by
  subst h₁
  cases em b with
  | inl hc => rw [ite_eq_left hc, ite_eq_left hc, h₂ hc]
  | inr hc => rw [ite_eq_right hc, ite_eq_right hc, h₃ hc]

@[congr]
theorem dite_congr {b c : Prop} {_ : UDecidable b} [UDecidable c] {α : Sort u}
    {x : b → α} {u : c → α} {y : ¬b → α} {v : ¬c → α} (h₁ : b = c)
    (h₂ : (h : c) → x (h₁.mpr_prop h) = u h) (h₃ : (h : ¬c) → y (h₁.mpr_not h) = v h) :
    dite b x y = dite c u v := by
  subst h₁
  cases em b with
  | inl hc => rw [dite_eq_left hc, dite_eq_left hc, h₂ hc]
  | inr hc => rw [dite_eq_right hc, dite_eq_right hc, h₃ hc]

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
