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
import Init.Classical
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

/-- A predicate `p` is `UDecidablePred` if `p a` is `UDecidable` for every `a`. -/
abbrev UDecidablePred {α : Sort u} (p : α → Prop) := (a : α) → UDecidable (p a)

/-- A relation `r` is `UDecidableRel` if `r a b` is `UDecidable` for all `a` and `b`. -/
abbrev UDecidableRel {α : Sort u} {β : Sort v} (r : α → β → Prop) :=
  (a : α) → (b : β) → UDecidable (r a b)

/-- A type `α` has `UDecidableEq` if equality of its elements is `UDecidable`. -/
abbrev UDecidableEq (α : Sort u) := (a b : α) → UDecidable (a = b)

/-- Abbreviation for `UDecidableRel (· ≤ · : α → α → Prop)`. -/
abbrev UDecidableLE (α : Type u) [LE α] := UDecidableRel (LE.le : α → α → Prop)

/-- Abbreviation for `UDecidableRel (· < · : α → α → Prop)`. -/
abbrev UDecidableLT (α : Type u) [LT α] := UDecidableRel (LT.lt : α → α → Prop)

/-! Boolean comparisons that implement the `UDecidable` instances below in compiled code. -/

namespace Int.Internal

/-- Whether an integer is nonnegative. -/
@[expose] def isNonneg : Int → Bool
  | ofNat _ => true
  | -[_ +1] => false

theorem reflects_isNonneg : (m : Int) → (isNonneg m).Reflects (NonNeg m)
  | ofNat m => NonNeg.mk m
  | -[_ +1] => fun h => nomatch h

/-- Boolean `≤` on integers. -/
@[expose, extern "lean_int_dec_le"] def ble (a b : @& Int) : Bool := isNonneg (b - a)

/-- Boolean `<` on integers. -/
@[expose, extern "lean_int_dec_lt"] def blt (a b : @& Int) : Bool := isNonneg (b - (a + 1))

theorem reflects_ble (a b : Int) : (ble a b).Reflects (a ≤ b) := reflects_isNonneg (b - a)

theorem reflects_blt (a b : Int) : (blt a b).Reflects (a < b) := reflects_isNonneg (b - (a + 1))

end Int.Internal

namespace UDecidable

private unsafe def decideImpl (p : Prop) [i : UDecidable p] : Bool := unsafeCast i

/--
The `Bool` that is `true` exactly if `p` holds.

This function is defined classically and does not reduce. Compiled code returns the `Bool` that was
passed to `UDecidable.mk` when creating the instance.
-/
@[irreducible, cbv_opaque, implemented_by decideImpl] def decide (p : Prop) [i : UDecidable p] : Bool :=
  (Classical.choice (i.exists_reflects.elim fun b h => ⟨⟨b, h⟩⟩) :
    {b : Bool // b = true ↔ p}).val

theorem decide_spec (p : Prop) [UDecidable p] : decide p = true ↔ p := by
  unfold decide
  exact (Classical.choice _ : {b : Bool // b = true ↔ p}).property

@[simp] theorem decide_eq_true_eq {p : Prop} [UDecidable p] : (decide p = true) = p :=
  propext (decide_spec p)

@[simp] theorem decide_true {_ : UDecidable True} : decide True = true :=
  (decide_spec True).mpr trivial

@[simp] theorem decide_false {_ : UDecidable False} : decide False = false := by
  cases h : decide False
  · rfl
  · exact ((decide_spec False).mp h).elim

/-- Coerces `p` to `decide p`. It applies only when `p` has no `Decidable` instance. -/
instance (priority := low) instCoeDepBool (p : Prop) [UDecidable p] : CoeDep Prop p Bool where
  coe := decide p

@[instance_reducible] private unsafe def mkImpl (b : Bool) (_ : b = true ↔ p) : UDecidable p :=
  unsafeCast b

/-- Proves that `p` is decidable by providing a `Bool` that is `true` exactly if `p` holds. -/
@[irreducible, cbv_opaque, implemented_by mkImpl] def mk (b : Bool) (h : b = true ↔ p) : UDecidable p :=
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

/--
The noncomputable instance of `UDecidable p` from the law of the excluded middle.

`simp` and `split` use it for conditions that they rewrite. Since it depends only on `p`, it never
embeds proofs about the old condition, unlike a cast of the old instance.
-/
@[instance_reducible] noncomputable def classical (p : Prop) : UDecidable p :=
  ⟨(Classical.em p).elim (fun h => ⟨true, iff_of_true rfl h⟩)
    (fun h => ⟨false, iff_of_false Bool.false_ne_true h⟩)⟩

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

theorem of_decide_eq_true {p : Prop} [UDecidable p] (h : decide p = true) : p :=
  (decide_spec p).mp h

theorem of_decide_eq_false {p : Prop} [UDecidable p] (h : decide p = false) : ¬p :=
  fun hp => Bool.false_ne_true (h.symm.trans (decide_eq_true hp))

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

@[simp] theorem ite_self {α : Sort u} {c : Prop} {_ : UDecidable c} (a : α) :
    (uif c then a else a) = a := by
  cases em c with
  | inl hc => exact ite_eq_left hc
  | inr hc => exact ite_eq_right hc

@[simp] theorem dite_eq_ite {α : Sort u} {c : Prop} {_ : UDecidable c} {t e : α} :
    (dite c (fun _ => t) (fun _ => e)) = uif c then t else e := by
  cases em c with
  | inl hc => rw [dite_eq_left hc, ite_eq_left hc]
  | inr hc => rw [dite_eq_right hc, ite_eq_right hc]

@[simp] theorem ite_eq_left_iff {α : Sort u} {p : Prop} {_ : UDecidable p} {x y : α} :
    (uif p then x else y) = x ↔ ¬p → y = x := by
  cases em p with
  | inl hp => rw [ite_eq_left hp]; exact ⟨fun _ h => absurd hp h, fun _ => rfl⟩
  | inr hp => rw [ite_eq_right hp]; exact ⟨fun e _ => e, fun f => f hp⟩

@[simp] theorem ite_eq_right_iff {α : Sort u} {p : Prop} {_ : UDecidable p} {x y : α} :
    (uif p then x else y) = y ↔ p → x = y := by
  cases em p with
  | inl hp => rw [ite_eq_left hp]; exact ⟨fun e _ => e, fun f => f hp⟩
  | inr hp => rw [ite_eq_right hp]; exact ⟨fun _ h => absurd h hp, fun _ => rfl⟩

@[simp] theorem left_eq_ite_iff {α : Sort u} {p : Prop} {_ : UDecidable p} {x y : α} :
    x = (uif p then x else y) ↔ ¬p → x = y := by
  cases em p with
  | inl hp => rw [ite_eq_left hp]; exact ⟨fun _ h => absurd hp h, fun _ => rfl⟩
  | inr hp => rw [ite_eq_right hp]; exact ⟨fun e _ => e, fun f => f hp⟩

@[simp] theorem right_eq_ite_iff {α : Sort u} {p : Prop} {_ : UDecidable p} {x y : α} :
    y = (uif p then x else y) ↔ p → y = x := by
  cases em p with
  | inl hp => rw [ite_eq_left hp]; exact ⟨fun e _ => e, fun f => f hp⟩
  | inr hp => rw [ite_eq_right hp]; exact ⟨fun _ h => absurd h hp, fun _ => rfl⟩

@[simp] theorem dite_eq_left_iff {α : Sort u} {p : Prop} {_ : UDecidable p} {x : α}
    {y : ¬p → α} : (uif h : p then x else y h) = x ↔ ∀ h : ¬p, y h = x := by
  cases em p with
  | inl hp => rw [dite_eq_left hp]; exact ⟨fun _ h => absurd hp h, fun _ => rfl⟩
  | inr hp => rw [dite_eq_right hp]; exact ⟨fun e _ => e, fun f => f hp⟩

@[simp] theorem dite_eq_right_iff {α : Sort u} {p : Prop} {_ : UDecidable p} {x : p → α}
    {y : α} : (uif h : p then x h else y) = y ↔ ∀ h : p, x h = y := by
  cases em p with
  | inl hp => rw [dite_eq_left hp]; exact ⟨fun e _ => e, fun f => f hp⟩
  | inr hp => rw [dite_eq_right hp]; exact ⟨fun _ h => absurd h hp, fun _ => rfl⟩

@[simp] theorem ite_not {α : Sort u} {p : Prop} {_ : UDecidable (¬p)} {x y : α} :
    (uif ¬p then x else y) = @ite α p (classical p) y x := by
  cases Classical.em p with
  | inl hp => rw [ite_eq_right (not_not_intro hp), @ite_eq_left p (classical p) hp]
  | inr hp => rw [ite_eq_left hp, @ite_eq_right p (classical p) hp]

theorem apply_ite {α : Sort u} {β : Sort v} (f : α → β) {c : Prop} {_ : UDecidable c} {a b : α} :
    f (uif c then a else b) = uif c then f a else f b := by
  cases em c with
  | inl hc => rw [ite_eq_left hc, ite_eq_left hc]
  | inr hc => rw [ite_eq_right hc, ite_eq_right hc]

theorem ite_eq_left_of_eq_true {α : Sort u} {c : Prop} {_ : UDecidable c} (t e : α)
    (h : c = True) : (uif c then t else e) = t :=
  ite_eq_left (of_eq_true h)

theorem ite_eq_right_of_eq_false {α : Sort u} {c : Prop} {_ : UDecidable c} (t e : α)
    (h : c = False) : (uif c then t else e) = e :=
  ite_eq_right (of_eq_false h)

theorem ite_eq_left_of_decide_eq_true {α : Sort u} {c : Prop} {_ : UDecidable c} (t e : α)
    (h : decide c = true) : (uif c then t else e) = t :=
  ite_eq_left (of_decide_eq_true h)

theorem ite_eq_right_of_decide_eq_false {α : Sort u} {c : Prop} {_ : UDecidable c} (t e : α)
    (h : decide c = false) : (uif c then t else e) = e :=
  ite_eq_right (of_decide_eq_false h)

theorem dite_eq_left_of_decide_eq_true {α : Sort u} {c : Prop} {_ : UDecidable c} {t : c → α}
    {e : ¬c → α} (h : decide c = true) : dite c t e = t (of_decide_eq_true h) :=
  dite_eq_left (of_decide_eq_true h)

theorem dite_eq_right_of_decide_eq_false {α : Sort u} {c : Prop} {_ : UDecidable c} {t : c → α}
    {e : ¬c → α} (h : decide c = false) : dite c t e = e (of_decide_eq_false h) :=
  dite_eq_right (of_decide_eq_false h)

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

/-
The congruence lemmas use `UDecidable.classical` for the new condition instead of synthesizing an
instance, which is possible because all instances are definitionally equal.
-/

@[congr]
theorem ite_congr {b c : Prop} {inst : UDecidable b} {α : Sort u} {x y u v : α}
    (h₁ : b = c) (h₂ : c → x = u) (h₃ : ¬c → y = v) :
    @ite α b inst x y = @ite α c (classical c) u v := by
  subst h₁
  cases em b with
  | inl hc => rw [ite_eq_left hc, ite_eq_left hc, h₂ hc]
  | inr hc => rw [ite_eq_right hc, ite_eq_right hc, h₃ hc]

@[congr]
theorem dite_congr {b c : Prop} {inst : UDecidable b} {α : Sort u}
    {x : b → α} {u : c → α} {y : ¬b → α} {v : ¬c → α} (h₁ : b = c)
    (h₂ : (h : c) → x (h₁.mpr_prop h) = u h) (h₃ : (h : ¬c) → y (h₁.mpr_not h) = v h) :
    @dite α b inst x y = @dite α c (classical c) u v := by
  subst h₁
  cases em b with
  | inl hc => rw [dite_eq_left hc, dite_eq_left hc, h₂ hc]
  | inr hc => rw [dite_eq_right hc, dite_eq_right hc, h₃ hc]

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

/-- Decides `p` by deciding the equivalent proposition `q`. -/
@[inline, instance_reducible] def ofIff {p : Prop} (q : Prop) [UDecidable q] (h : q ↔ p) :
    UDecidable p :=
  mk (decide q) ((decide_spec q).trans h)

/-- Decides `p` by a `Bool` that reflects it. -/
@[inline, instance_reducible] def ofReflects {p : Prop} (b : Bool) (h : b.Reflects p) :
    UDecidable p :=
  mk b (match b, h with
    | true, h => ⟨fun _ => h, fun _ => rfl⟩
    | false, h => ⟨fun h' => Bool.noConfusion h', fun hp => absurd hp h⟩)

/-- Decides a proposition that holds. -/
@[inline, instance_reducible] def isTrue {p : Prop} (h : p) : UDecidable p :=
  ofReflects true h

/-- Decides a proposition that does not hold. -/
@[inline, instance_reducible] def isFalse {p : Prop} (h : ¬p) : UDecidable p :=
  ofReflects false h

/-- Every `Decidable` proposition is `UDecidable`. Compiled code represents both by the same `Bool`. -/
instance (priority := low) ofDecidable (p : Prop) [Decidable p] : UDecidable p :=
  mk (Decidable.decide p) decide_eq_true_iff

/-- Every `UDecidable` proposition is `Decidable`. Compiled code represents both by the same `Bool`. -/
@[expose, instance_reducible] def toDecidable (p : Prop) [UDecidable p] : Decidable p :=
  ⟨decide p, reflects_decide p⟩

instance instAnd (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∧ q) :=
  mk (decide p && decide q) (by simp)

instance instOr (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∨ q) :=
  mk (decide p || decide q) (by simp)

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

instance instTrue : UDecidable True := isTrue trivial

instance instFalse : UDecidable False := isFalse id

instance instImp (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p → q) :=
  mk (!decide p || decide q) (by
    cases em p with
    | inl hp =>
      rw [decide_eq_true hp]
      exact ⟨fun h _ => (decide_spec q).mp h, fun h => (decide_spec q).mpr (h hp)⟩
    | inr hp =>
      rw [decide_eq_false hp]
      exact ⟨fun _ h => absurd h hp, fun _ => rfl⟩)

instance instIff (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ↔ q) :=
  mk (cond (decide p) (decide q) (!decide q)) (by
    cases em p with
    | inl hp =>
      cases em q with
      | inl hq =>
        rw [decide_eq_true hp, decide_eq_true hq]
        exact ⟨fun _ => ⟨fun _ => hq, fun _ => hp⟩, fun _ => rfl⟩
      | inr hq =>
        rw [decide_eq_true hp, decide_eq_false hq]
        exact ⟨Bool.noConfusion, fun h => absurd (h.mp hp) hq⟩
    | inr hp =>
      cases em q with
      | inl hq =>
        rw [decide_eq_false hp, decide_eq_true hq]
        exact ⟨Bool.noConfusion, fun h => absurd (h.mpr hq) hp⟩
      | inr hq =>
        rw [decide_eq_false hp, decide_eq_false hq]
        exact ⟨fun _ => ⟨fun h => absurd h hp, fun h => absurd h hq⟩, fun _ => rfl⟩)

instance instBoolEq : UDecidableEq Bool
  | true, true => isTrue rfl
  | false, false => isTrue rfl
  | true, false => isFalse Bool.noConfusion
  | false, true => isFalse Bool.noConfusion

instance instPUnitEq : UDecidableEq PUnit.{u} := fun _ _ => isTrue rfl

instance instIntEq (a b : Int) : UDecidable (a = b) :=
  ofReflects (Int.Internal.beq a b) (Int.Internal.reflects_beq a b)

instance instIntLe (a b : Int) : UDecidable (a ≤ b) :=
  ofReflects (Int.Internal.ble a b) (Int.Internal.reflects_ble a b)

instance instIntLt (a b : Int) : UDecidable (a < b) :=
  ofReflects (Int.Internal.blt a b) (Int.Internal.reflects_blt a b)

instance instFinEq (i j : Fin n) : UDecidable (i = j) :=
  ofReflects (Nat.beq i.val j.val) (Fin.reflects_beq_val i j)

instance instFinLe (i j : Fin n) : UDecidable (i ≤ j) := instNatLe i.val j.val

instance instFinLt (i j : Fin n) : UDecidable (i < j) := instNatLt i.val j.val

instance instUInt8Eq (a b : UInt8) : UDecidable (a = b) :=
  ofReflects (UInt8.Internal.beq a b) (UInt8.Internal.reflects_beq a b)

instance instUInt16Eq (a b : UInt16) : UDecidable (a = b) :=
  ofReflects (UInt16.Internal.beq a b) (UInt16.Internal.reflects_beq a b)

instance instUInt32Eq (a b : UInt32) : UDecidable (a = b) :=
  ofReflects (UInt32.Internal.beq a b) (UInt32.Internal.reflects_beq a b)

instance instUInt64Eq (a b : UInt64) : UDecidable (a = b) :=
  ofReflects (UInt64.Internal.beq a b) (UInt64.Internal.reflects_beq a b)

instance instUSizeEq (a b : USize) : UDecidable (a = b) :=
  ofReflects (USize.Internal.beq a b) (USize.Internal.reflects_beq a b)

instance instCharEq (c d : Char) : UDecidable (c = d) :=
  ofReflects (Char.Internal.beq c d) (Char.Internal.reflects_beq c d)

instance instStringEq (s₁ s₂ : String) : UDecidable (s₁ = s₂) :=
  ofReflects (String.Internal.beq s₁ s₂) (String.Internal.reflects_beq s₁ s₂)

instance instOptionEq [UDecidableEq α] : UDecidableEq (Option α)
  | none, none => isTrue rfl
  | none, some _ => isFalse nofun
  | some _, none => isFalse nofun
  | some a, some b => ofIff (a = b) ⟨congrArg some, Option.some.inj⟩

instance instForallOptionEqSome {o : Option α} {p : α → Prop} [UDecidablePred p] :
    UDecidable (∀ a, o = some a → p a) :=
  match o with
  | none => isTrue nofun
  | some b => ofIff (p b) ⟨fun h _ e => Option.some.inj e ▸ h, fun h => h b rfl⟩

instance instProdEq [UDecidableEq α] [UDecidableEq β] : UDecidableEq (α × β)
  | (a₁, a₂), (b₁, b₂) =>
    ofIff (a₁ = b₁ ∧ a₂ = b₂)
      ⟨fun ⟨h₁, h₂⟩ => h₁ ▸ h₂ ▸ rfl, fun h => ⟨congrArg Prod.fst h, congrArg Prod.snd h⟩⟩

instance instSumEq [UDecidableEq α] [UDecidableEq β] : UDecidableEq (α ⊕ β)
  | .inl a, .inl b => ofIff (a = b) ⟨congrArg Sum.inl, Sum.inl.inj⟩
  | .inr a, .inr b => ofIff (a = b) ⟨congrArg Sum.inr, Sum.inr.inj⟩
  | .inl _, .inr _ => isFalse nofun
  | .inr _, .inl _ => isFalse nofun

instance instSubtypeEq {p : α → Prop} [UDecidableEq α] : UDecidableEq (Subtype p) :=
  fun a b => ofIff (a.val = b.val) ⟨Subtype.ext, congrArg Subtype.val⟩

instance instListEqNil (l : List α) : UDecidable (l = []) :=
  match l with
  | [] => isTrue rfl
  | _ :: _ => isFalse nofun

instance instListNilEq (l : List α) : UDecidable ([] = l) :=
  match l with
  | [] => isTrue rfl
  | _ :: _ => isFalse nofun

instance instListEq [UDecidableEq α] : UDecidableEq (List α)
  | [], [] => isTrue rfl
  | [], _ :: _ => isFalse nofun
  | _ :: _, [] => isFalse nofun
  | a :: as, b :: bs =>
    have := instListEq as bs
    ofIff (a = b ∧ as = bs)
      ⟨fun ⟨h₁, h₂⟩ => h₁ ▸ h₂ ▸ rfl, List.cons.inj⟩

end UDecidable
