/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Core

set_option linter.missingDocs true

/-!
# Data-free decidability

`UDecidable p` is a prototype of a `Decidable` class whose instances carry no data in the logic, so
that any two instances are definitionally equal. In compiled code, an instance is represented by
the `Bool` that was passed to `UDecidable.mk`, and `UDecidable.decide` returns that `Bool`.
Logically, `UDecidable.decide` is defined classically, so it does not reduce.

This file only imports `Init.Core`, so that `Init.SimpLemmas` and therefore almost all of the
library can import it. It contains the class, the `uif` notation, the coercion to `Bool` and the
instances for the types of the prelude. The rest is in `Init.UDecidable`.
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
  exists_reflects : Exists fun b : Bool => b = true ↔ p

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

/-! Specifications of the `Bool` comparisons of the prelude -/

@[simp] theorem UInt8.Internal.ble_iff (a b : UInt8) : UInt8.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

@[simp] theorem UInt8.Internal.ble_eq_false_iff (a b : UInt8) : UInt8.Internal.ble a b = false ↔ ¬a ≤ b := by
  have := UInt8.Internal.ble_iff a b
  revert this
  cases UInt8.Internal.ble a b with
  | true => exact fun this => ⟨Bool.noConfusion, fun h => absurd (this.mp rfl) h⟩
  | false => exact fun this => ⟨fun _ h => Bool.noConfusion (this.mpr h), fun _ => rfl⟩

@[simp] theorem UInt8.Internal.blt_iff (a b : UInt8) : UInt8.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

@[simp] theorem UInt8.Internal.blt_eq_false_iff (a b : UInt8) : UInt8.Internal.blt a b = false ↔ ¬a < b := by
  have := UInt8.Internal.blt_iff a b
  revert this
  cases UInt8.Internal.blt a b with
  | true => exact fun this => ⟨Bool.noConfusion, fun h => absurd (this.mp rfl) h⟩
  | false => exact fun this => ⟨fun _ h => Bool.noConfusion (this.mpr h), fun _ => rfl⟩

@[simp] theorem UInt32.Internal.ble_iff (a b : UInt32) : UInt32.Internal.ble a b = true ↔ a ≤ b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

@[simp] theorem UInt32.Internal.ble_eq_false_iff (a b : UInt32) : UInt32.Internal.ble a b = false ↔ ¬a ≤ b := by
  have := UInt32.Internal.ble_iff a b
  revert this
  cases UInt32.Internal.ble a b with
  | true => exact fun this => ⟨Bool.noConfusion, fun h => absurd (this.mp rfl) h⟩
  | false => exact fun this => ⟨fun _ h => Bool.noConfusion (this.mpr h), fun _ => rfl⟩

@[simp] theorem UInt32.Internal.blt_iff (a b : UInt32) : UInt32.Internal.blt a b = true ↔ a < b :=
  ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

@[simp] theorem UInt32.Internal.blt_eq_false_iff (a b : UInt32) : UInt32.Internal.blt a b = false ↔ ¬a < b := by
  have := UInt32.Internal.blt_iff a b
  revert this
  cases UInt32.Internal.blt a b with
  | true => exact fun this => ⟨Bool.noConfusion, fun h => absurd (this.mp rfl) h⟩
  | false => exact fun this => ⟨fun _ h => Bool.noConfusion (this.mpr h), fun _ => rfl⟩

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

theorem decide_eq_true {p : Prop} [UDecidable p] (hp : p) : decide p = true :=
  (decide_spec p).mpr hp

theorem decide_eq_false {p : Prop} [UDecidable p] (hnp : ¬p) : decide p = false :=
  match h : decide p with
  | false => rfl
  | true => absurd ((decide_spec p).mp h) hnp

theorem of_decide_eq_true {p : Prop} [UDecidable p] (h : decide p = true) : p :=
  (decide_spec p).mp h

theorem of_decide_eq_false {p : Prop} [UDecidable p] (h : decide p = false) : ¬p :=
  fun hp => Bool.noConfusion (h.symm.trans (decide_eq_true hp))

@[simp] theorem decide_eq_false_iff_not {p : Prop} [UDecidable p] : decide p = false ↔ ¬p :=
  ⟨of_decide_eq_false, decide_eq_false⟩

@[bool_to_prop] theorem decide_eq_true_iff {p : Prop} [UDecidable p] : decide p = true ↔ p :=
  decide_spec p

@[simp] theorem true_eq_decide_iff {p : Prop} [UDecidable p] : true = decide p ↔ p :=
  ⟨fun h => of_decide_eq_true h.symm, fun h => (decide_eq_true h).symm⟩

@[simp] theorem false_eq_decide_iff {p : Prop} [UDecidable p] : false = decide p ↔ ¬p :=
  ⟨fun h => of_decide_eq_false h.symm, fun h => (decide_eq_false h).symm⟩

@[simp] theorem decide_true {_ : UDecidable True} : decide True = true :=
  decide_eq_true trivial

@[simp] theorem decide_false {_ : UDecidable False} : decide False = false :=
  decide_eq_false id

/-- Coerces `p` to `decide p`. -/
instance instCoeDepBool (p : Prop) [UDecidable p] : CoeDep Prop p Bool where
  coe := decide p

@[instance_reducible] private unsafe def mkImpl (b : Bool) (_ : b = true ↔ p) : UDecidable p :=
  unsafeCast b

/-- Proves that `p` is decidable by providing a `Bool` that is `true` exactly if `p` holds. -/
@[irreducible, cbv_opaque, implemented_by mkImpl] def mk (b : Bool) (h : b = true ↔ p) : UDecidable p :=
  ⟨b, h⟩

theorem decide_mk (b : Bool) (h : b = true ↔ p) : @decide p (mk b h) = b := by
  cases b with
  | true => exact @decide_eq_true p (mk true h) (h.mp rfl)
  | false => exact @decide_eq_false p (mk false h) fun hp => Bool.noConfusion (h.mpr hp)

theorem reflects_decide (p : Prop) [UDecidable p] : (decide p).Reflects p :=
  match h : decide p with
  | false => of_decide_eq_false h
  | true => of_decide_eq_true h

theorem em (p : Prop) [UDecidable p] : p ∨ ¬p :=
  match h : decide p with
  | false => Or.inr (of_decide_eq_false h)
  | true => Or.inl (of_decide_eq_true h)

@[simp, bool_to_prop] theorem decide_eq_decide {p q : Prop} {_ : UDecidable p} {_ : UDecidable q} :
    decide p = decide q ↔ (p ↔ q) := by
  cases em p with
  | inl hp =>
    rw [decide_eq_true hp]
    exact ⟨fun h => iff_of_true hp (of_decide_eq_true h.symm), fun h => (decide_eq_true (h.mp hp)).symm⟩
  | inr hp =>
    rw [decide_eq_false hp]
    exact ⟨fun h => iff_of_false hp (of_decide_eq_false h.symm),
      fun h => (decide_eq_false (mt h.mpr hp)).symm⟩

instance (p : Prop) : Subsingleton (UDecidable p) := ⟨fun _ _ => rfl⟩

/--
The noncomputable instance of `UDecidable p` from the law of the excluded middle.

`simp` and `split` use it for conditions that they rewrite. Since it depends only on `p`, it never
embeds proofs about the old condition, unlike a cast of the old instance.
-/
@[instance_reducible, cbv_opaque] noncomputable def classical (p : Prop) : UDecidable p :=
  ⟨(Classical.em p).elim (fun h => ⟨true, iff_of_true rfl h⟩)
    (fun h => ⟨false, iff_of_false Bool.noConfusion h⟩)⟩

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
    (uif c then t else e) = t :=
  (congrArg (fun b => cond b t e) (decide_eq_true hc)).trans rfl

theorem ite_eq_right {c : Prop} [UDecidable c] (hnc : ¬c) {α : Sort u} {t e : α} :
    (uif c then t else e) = e :=
  (congrArg (fun b => cond b t e) (decide_eq_false hnc)).trans rfl

private theorem dcond_eq_left {α : Sort u} {b : Bool} (h : b = true) {t : b = true → α}
    {e : b = false → α} : Bool.dcond b t e = t h := by
  cases b with
  | false => exact Bool.noConfusion h
  | true => rfl

private theorem dcond_eq_right {α : Sort u} {b : Bool} (h : b = false) {t : b = true → α}
    {e : b = false → α} : Bool.dcond b t e = e h := by
  cases b with
  | false => rfl
  | true => exact Bool.noConfusion h

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

theorem apply_ite {α : Sort u} {β : Sort v} (f : α → β) {c : Prop} {_ : UDecidable c} {a b : α} :
    f (uif c then a else b) = uif c then f a else f b := by
  cases em c with
  | inl hc => rw [ite_eq_left hc, ite_eq_left hc]
  | inr hc => rw [ite_eq_right hc, ite_eq_right hc]

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

/-! Constructing instances -/

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

/-! Bridges to `Decidable` -/

/-- Every `Decidable` proposition is `UDecidable`. Compiled code represents both by the same `Bool`. -/
instance (priority := low) ofDecidable (p : Prop) [Decidable p] : UDecidable p :=
  mk (Decidable.decide p) ⟨_root_.of_decide_eq_true, _root_.decide_eq_true⟩

/-- Every `UDecidable` proposition is `Decidable`. Compiled code represents both by the same `Bool`. -/
@[expose, instance_reducible] def toDecidable (p : Prop) [UDecidable p] : Decidable p :=
  ⟨decide p, reflects_decide p⟩

/-! Logical connectives -/

instance instTrue : UDecidable True := isTrue trivial

instance instFalse : UDecidable False := isFalse id

/-- The implementation of `instNot` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instNotImpl (p : Prop) [UDecidable p] : UDecidable (¬p) :=
  mk (!decide p) (by
    cases em p with
    | inl hp => rw [decide_eq_true hp]; exact ⟨Bool.noConfusion, fun h => absurd hp h⟩
    | inr hp => rw [decide_eq_false hp]; exact ⟨fun _ => hp, fun _ => rfl⟩)

noncomputable instance instNot (p : Prop) [UDecidable p] : UDecidable (¬p) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instNot_csimp : @instNot = @instNotImpl := rfl

@[simp] theorem decide_not (p : Prop) [UDecidable p] [UDecidable (¬p)] :
    decide (¬p) = !decide p := by
  cases em p with
  | inl hp => rw [decide_eq_false (not_not_intro hp), decide_eq_true hp]; rfl
  | inr hp => rw [decide_eq_true hp, decide_eq_false hp]; rfl

theorem not_decide_eq_true {p : Prop} [UDecidable p] : ((!decide p) = true) = ¬p :=
  propext ⟨fun h hp => by rw [decide_eq_true hp] at h; exact Bool.noConfusion h,
    fun hnp => by rw [decide_eq_false hnp]; rfl⟩

/-- The implementation of `instAnd` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instAndImpl (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∧ q) :=
  mk (decide p && decide q) (by
    cases em p with
    | inl hp =>
      rw [decide_eq_true hp]
      exact ⟨fun h => ⟨hp, (decide_spec q).mp h⟩, fun h => (decide_spec q).mpr h.2⟩
    | inr hp =>
      rw [decide_eq_false hp]
      exact ⟨Bool.noConfusion, fun h => absurd h.1 hp⟩)

noncomputable instance instAnd (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∧ q) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instAnd_csimp : @instAnd = @instAndImpl := rfl

/-- The implementation of `instOr` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instOrImpl (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∨ q) :=
  mk (decide p || decide q) (by
    cases em p with
    | inl hp =>
      rw [decide_eq_true hp]
      exact ⟨fun _ => Or.inl hp, fun _ => rfl⟩
    | inr hp =>
      rw [decide_eq_false hp]
      exact ⟨fun h => Or.inr ((decide_spec q).mp h),
        fun h => (decide_spec q).mpr (h.elim (fun h' => absurd h' hp) id)⟩)

noncomputable instance instOr (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ∨ q) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instOr_csimp : @instOr = @instOrImpl := rfl

@[simp] theorem decide_and (p q : Prop) [UDecidable p] [UDecidable q] {_ : UDecidable (p ∧ q)} :
    decide (p ∧ q) = (decide p && decide q) := by
  cases em p with
  | inl hp =>
    rw [decide_eq_true hp]
    cases em q with
    | inl hq => rw [decide_eq_true hq]; exact decide_eq_true (And.intro hp hq)
    | inr hq => rw [decide_eq_false hq]; exact decide_eq_false fun h => hq h.2
  | inr hp => rw [decide_eq_false hp]; exact decide_eq_false fun h => hp h.1

@[simp] theorem decide_or (p q : Prop) [UDecidable p] [UDecidable q] {_ : UDecidable (p ∨ q)} :
    decide (p ∨ q) = (decide p || decide q) := by
  cases em p with
  | inl hp => rw [decide_eq_true hp]; exact decide_eq_true (Or.inl hp)
  | inr hp =>
    rw [decide_eq_false hp]
    cases em q with
    | inl hq => rw [decide_eq_true hq]; exact decide_eq_true (Or.inr hq)
    | inr hq =>
      rw [decide_eq_false hq]; exact decide_eq_false fun h => h.elim hp hq

@[bool_to_prop] theorem decide_beq_decide (p q : Prop) [UDecidable p] [UDecidable q]
    {_ : UDecidable (p ↔ q)} : (decide p == decide q) = decide (p ↔ q) := by
  cases em p with
  | inl hp =>
    cases em q with
    | inl hq => rw [decide_eq_true hp, decide_eq_true hq, decide_eq_true (iff_of_true hp hq)]; rfl
    | inr hq =>
      rw [decide_eq_true hp, decide_eq_false hq, decide_eq_false fun h => hq (h.mp hp)]; rfl
  | inr hp =>
    cases em q with
    | inl hq =>
      rw [decide_eq_false hp, decide_eq_true hq, decide_eq_false fun h => hp (h.mpr hq)]; rfl
    | inr hq => rw [decide_eq_false hp, decide_eq_false hq, decide_eq_true (iff_of_false hp hq)]; rfl

@[simp] theorem decide_iff_dist (p q : Prop) [UDecidable p] [UDecidable q]
    {_ : UDecidable (p ↔ q)} : decide (p ↔ q) = (decide p == decide q) :=
  (decide_beq_decide p q).symm

/-- The implementation of `instImp` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instImpImpl (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p → q) :=
  mk (!decide p || decide q) (by
    cases em p with
    | inl hp =>
      rw [decide_eq_true hp]
      exact ⟨fun h _ => (decide_spec q).mp h, fun h => (decide_spec q).mpr (h hp)⟩
    | inr hp =>
      rw [decide_eq_false hp]
      exact ⟨fun _ h => absurd h hp, fun _ => rfl⟩)

noncomputable instance instImp (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p → q) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instImp_csimp : @instImp = @instImpImpl := rfl

/-- The implementation of `instIff` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instIffImpl (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ↔ q) :=
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

noncomputable instance instIff (p q : Prop) [UDecidable p] [UDecidable q] : UDecidable (p ↔ q) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instIff_csimp : @instIff = @instIffImpl := rfl

/-! Instances for the types of the prelude -/

/-- The implementation of `instNatEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instNatEqImpl (n m : Nat) : UDecidable (n = m) :=
  ofReflects (Nat.beq n m) (match h : Nat.beq n m with
    | true => Nat.eq_of_beq_eq_true h
    | false => Nat.ne_of_beq_eq_false h)

noncomputable instance instNatEq (n m : Nat) : UDecidable (n = m) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instNatEq_csimp : @instNatEq = @instNatEqImpl := rfl

/-- The implementation of `instNatLe` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instNatLeImpl (n m : Nat) : UDecidable (n ≤ m) :=
  mk (Nat.ble n m) ⟨Nat.le_of_ble_eq_true, Nat.ble_eq_true_of_le⟩

noncomputable instance instNatLe (n m : Nat) : UDecidable (n ≤ m) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instNatLe_csimp : @instNatLe = @instNatLeImpl := rfl

instance instNatLt (n m : Nat) : UDecidable (n < m) :=
  instNatLe (n + 1) m

/-- The implementation of `instBoolEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instBoolEqImpl : UDecidableEq Bool
  | true, true => isTrue rfl
  | false, false => isTrue rfl
  | true, false => isFalse Bool.noConfusion
  | false, true => isFalse Bool.noConfusion

noncomputable instance instBoolEq : UDecidableEq Bool := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instBoolEq_csimp : @instBoolEq = @instBoolEqImpl := rfl

instance instPUnitEq : UDecidableEq PUnit.{u} := fun _ _ => isTrue rfl

@[simp] theorem decide_bool_eq_true (b : Bool) : decide (b = true) = b := by
  cases b with
  | false => exact decide_eq_false Bool.noConfusion
  | true => exact decide_eq_true rfl

@[simp] theorem decide_bool_eq_false (b : Bool) : decide (b = false) = !b := by
  cases b with
  | false => exact decide_eq_true rfl
  | true => exact decide_eq_false Bool.noConfusion

/-- The implementation of `instFinEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instFinEqImpl (i j : Fin n) : UDecidable (i = j) :=
  ofReflects (Nat.beq i.val j.val) (Fin.reflects_beq_val i j)

noncomputable instance instFinEq (i j : Fin n) : UDecidable (i = j) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instFinEq_csimp : @instFinEq = @instFinEqImpl := rfl

instance instFinLe (i j : Fin n) : UDecidable (i ≤ j) := instNatLe i.val j.val

instance instFinLt (i j : Fin n) : UDecidable (i < j) := instNatLt i.val j.val

/-- The implementation of `instBitVecEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instBitVecEqImpl (x y : BitVec w) : UDecidable (x = y) :=
  ofReflects (x == y) (BitVec.reflects_beq_val x y)

noncomputable instance instBitVecEq (x y : BitVec w) : UDecidable (x = y) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instBitVecEq_csimp : @instBitVecEq = @instBitVecEqImpl := rfl

/-- The implementation of `instUInt8Eq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt8EqImpl (a b : UInt8) : UDecidable (a = b) :=
  ofReflects (UInt8.Internal.beq a b) (UInt8.Internal.reflects_beq a b)

noncomputable instance instUInt8Eq (a b : UInt8) : UDecidable (a = b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt8Eq_csimp : @instUInt8Eq = @instUInt8EqImpl := rfl

/-- The implementation of `instUInt16Eq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt16EqImpl (a b : UInt16) : UDecidable (a = b) :=
  ofReflects (UInt16.Internal.beq a b) (UInt16.Internal.reflects_beq a b)

noncomputable instance instUInt16Eq (a b : UInt16) : UDecidable (a = b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt16Eq_csimp : @instUInt16Eq = @instUInt16EqImpl := rfl

/-- The implementation of `instUInt32Eq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt32EqImpl (a b : UInt32) : UDecidable (a = b) :=
  ofReflects (UInt32.Internal.beq a b) (UInt32.Internal.reflects_beq a b)

noncomputable instance instUInt32Eq (a b : UInt32) : UDecidable (a = b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt32Eq_csimp : @instUInt32Eq = @instUInt32EqImpl := rfl

/-- The implementation of `instUInt64Eq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt64EqImpl (a b : UInt64) : UDecidable (a = b) :=
  ofReflects (UInt64.Internal.beq a b) (UInt64.Internal.reflects_beq a b)

noncomputable instance instUInt64Eq (a b : UInt64) : UDecidable (a = b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt64Eq_csimp : @instUInt64Eq = @instUInt64EqImpl := rfl

/-- The implementation of `instUSizeEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUSizeEqImpl (a b : USize) : UDecidable (a = b) :=
  ofReflects (USize.Internal.beq a b) (USize.Internal.reflects_beq a b)

noncomputable instance instUSizeEq (a b : USize) : UDecidable (a = b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUSizeEq_csimp : @instUSizeEq = @instUSizeEqImpl := rfl

/-- The implementation of `instCharEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instCharEqImpl (c d : Char) : UDecidable (c = d) :=
  ofReflects (Char.Internal.beq c d) (Char.Internal.reflects_beq c d)

noncomputable instance instCharEq (c d : Char) : UDecidable (c = d) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instCharEq_csimp : @instCharEq = @instCharEqImpl := rfl

/-- The implementation of `instUInt8Le` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt8LeImpl (a b : UInt8) : UDecidable (a ≤ b) :=
  mk (UInt8.Internal.ble a b) (UInt8.Internal.ble_iff a b)

noncomputable instance instUInt8Le (a b : UInt8) : UDecidable (a ≤ b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt8Le_csimp : @instUInt8Le = @instUInt8LeImpl := rfl

/-- The implementation of `instUInt8Lt` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt8LtImpl (a b : UInt8) : UDecidable (a < b) :=
  mk (UInt8.Internal.blt a b) (UInt8.Internal.blt_iff a b)

noncomputable instance instUInt8Lt (a b : UInt8) : UDecidable (a < b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt8Lt_csimp : @instUInt8Lt = @instUInt8LtImpl := rfl

/-- The implementation of `instUInt32Le` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt32LeImpl (a b : UInt32) : UDecidable (a ≤ b) :=
  mk (UInt32.Internal.ble a b) (UInt32.Internal.ble_iff a b)

noncomputable instance instUInt32Le (a b : UInt32) : UDecidable (a ≤ b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt32Le_csimp : @instUInt32Le = @instUInt32LeImpl := rfl

/-- The implementation of `instUInt32Lt` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instUInt32LtImpl (a b : UInt32) : UDecidable (a < b) :=
  mk (UInt32.Internal.blt a b) (UInt32.Internal.blt_iff a b)

noncomputable instance instUInt32Lt (a b : UInt32) : UDecidable (a < b) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instUInt32Lt_csimp : @instUInt32Lt = @instUInt32LtImpl := rfl

/-- The implementation of `instStringEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instStringEqImpl (s₁ s₂ : String) : UDecidable (s₁ = s₂) :=
  ofReflects (String.Internal.beq s₁ s₂) (String.Internal.reflects_beq s₁ s₂)

noncomputable instance instStringEq (s₁ s₂ : String) : UDecidable (s₁ = s₂) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instStringEq_csimp : @instStringEq = @instStringEqImpl := rfl

/-- The implementation of `instOptionEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instOptionEqImpl [UDecidableEq α] : UDecidableEq (Option α)
  | none, none => isTrue rfl
  | none, some _ => isFalse nofun
  | some _, none => isFalse nofun
  | some a, some b => ofIff (a = b) ⟨congrArg some, Option.some.inj⟩

noncomputable instance instOptionEq [UDecidableEq α] : UDecidableEq (Option α) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instOptionEq_csimp : @instOptionEq = @instOptionEqImpl := rfl

/-- The implementation of `instForallOptionEqSome` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instForallOptionEqSomeImpl {o : Option α} {p : α → Prop} [UDecidablePred p] :
    UDecidable (∀ a, o = some a → p a) :=
  match o with
  | none => isTrue nofun
  | some b => ofIff (p b) ⟨fun h _ e => Option.some.inj e ▸ h, fun h => h b rfl⟩

noncomputable instance instForallOptionEqSome {o : Option α} {p : α → Prop} [UDecidablePred p] :
    UDecidable (∀ a, o = some a → p a) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instForallOptionEqSome_csimp : @instForallOptionEqSome = @instForallOptionEqSomeImpl := rfl

/-- The implementation of `instProdEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instProdEqImpl [UDecidableEq α] [UDecidableEq β] : UDecidableEq (α × β)
  | (a₁, a₂), (b₁, b₂) =>
    ofIff (a₁ = b₁ ∧ a₂ = b₂)
      ⟨fun ⟨h₁, h₂⟩ => h₁ ▸ h₂ ▸ rfl, fun h => ⟨congrArg Prod.fst h, congrArg Prod.snd h⟩⟩

noncomputable instance instProdEq [UDecidableEq α] [UDecidableEq β] : UDecidableEq (α × β) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instProdEq_csimp : @instProdEq = @instProdEqImpl := rfl

/-- The implementation of `instSumEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instSumEqImpl [UDecidableEq α] [UDecidableEq β] : UDecidableEq (Sum α β)
  | .inl a, .inl b => ofIff (a = b) ⟨congrArg Sum.inl, Sum.inl.inj⟩
  | .inr a, .inr b => ofIff (a = b) ⟨congrArg Sum.inr, Sum.inr.inj⟩
  | .inl _, .inr _ => isFalse nofun
  | .inr _, .inl _ => isFalse nofun

noncomputable instance instSumEq [UDecidableEq α] [UDecidableEq β] : UDecidableEq (Sum α β) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instSumEq_csimp : @instSumEq = @instSumEqImpl := rfl

/-- The implementation of `instSubtypeEq` in compiled code and `cbv`. -/
@[expose, instance_reducible] def instSubtypeEqImpl {p : α → Prop} [UDecidableEq α] : UDecidableEq (Subtype p) :=
  fun a b => ofIff (a.val = b.val) ⟨Subtype.ext, congrArg Subtype.val⟩

noncomputable instance instSubtypeEq {p : α → Prop} [UDecidableEq α] : UDecidableEq (Subtype p) := by
  repeat intro
  exact UDecidable.classical _

@[csimp] theorem instSubtypeEq_csimp : @instSubtypeEq = @instSubtypeEqImpl := rfl

end UDecidable
