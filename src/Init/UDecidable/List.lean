/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.UDecidable
public import Init.Data.List.Basic

set_option linter.missingDocs true

/-!
# `UDecidable` instances for lists

The recursive calls are made inside `uif` branches so that compiled code stops as soon as the
result is known.
-/

public section

namespace List

open UDecidable (isTrue isFalse ofIff)

instance instUDecidableMem [UDecidableEq α] (a : α) : (as : List α) → UDecidable (a ∈ as)
  | [] => isFalse nofun
  | b :: bs =>
    uif h : a = b then
      isTrue (h ▸ .head _)
    else
      haveI := instUDecidableMem a bs
      ofIff (a ∈ bs) ⟨.tail _, fun | .head _ => absurd rfl h | .tail _ h' => h'⟩

instance instUDecidableLex [UDecidableEq α] (r : α → α → Prop) [UDecidableRel r] :
    (l₁ l₂ : List α) → UDecidable (Lex r l₁ l₂)
  | [], [] => isFalse nofun
  | [], _ :: _ => isTrue Lex.nil
  | _ :: _, [] => isFalse nofun
  | a :: as, b :: bs =>
    uif h₁ : r a b then
      isTrue (Lex.rel h₁)
    else uif h₂ : a = b then
      haveI := instUDecidableLex r as bs
      ofIff (Lex r as bs) ⟨fun h => h₂ ▸ Lex.cons h, fun
        | Lex.rel h => absurd h h₁
        | Lex.cons h => h⟩
    else
      isFalse fun
        | Lex.rel h => h₁ h
        | Lex.cons _ => h₂ rfl

instance instUDecidableLT [UDecidableEq α] [LT α] [UDecidableLT α] (l₁ l₂ : List α) :
    UDecidable (l₁ < l₂) :=
  instUDecidableLex (· < ·) l₁ l₂

instance instUDecidableLE [UDecidableEq α] [LT α] [UDecidableLT α] (l₁ l₂ : List α) :
    UDecidable (l₁ ≤ l₂) :=
  inferInstanceAs (UDecidable (Not _))

instance instUDecidableBEx (p : α → Prop) [UDecidablePred p] :
    ∀ l : List α, UDecidable (Exists fun x => x ∈ l ∧ p x)
  | [] => isFalse nofun
  | x :: xs =>
    uif h₁ : p x then
      isTrue ⟨x, .head .., h₁⟩
    else
      haveI := instUDecidableBEx p xs
      ofIff (Exists fun y => y ∈ xs ∧ p y) ⟨fun ⟨y, hm, hp⟩ => ⟨y, .tail _ hm, hp⟩, fun
        | ⟨y, .tail _ h, hp⟩ => ⟨y, h, hp⟩
        | ⟨_, .head .., hp⟩ => absurd hp h₁⟩

instance instUDecidableBAll (p : α → Prop) [UDecidablePred p] :
    ∀ l : List α, UDecidable (∀ x, x ∈ l → p x)
  | [] => isTrue nofun
  | x :: xs =>
    uif h₁ : p x then
      haveI := instUDecidableBAll p xs
      ofIff (∀ y, y ∈ xs → p y) ⟨fun h₂ => fun
        | y, .tail _ h => h₂ y h
        | _, .head .. => h₁, fun H y hm => H y (.tail _ hm)⟩
    else
      isFalse fun H => h₁ <| H x (.head ..)

instance instUDecidableSubset [UDecidableEq α] :
    UDecidableRel (Subset : List α → List α → Prop) :=
  fun _ _ => instUDecidableBAll _ _

instance instUDecidablePairwise {R : α → α → Prop} [UDecidableRel R] :
    (l : List α) → UDecidable (Pairwise R l)
  | [] => isTrue .nil
  | hd :: tl =>
    uif h : ∀ a', a' ∈ tl → R hd a' then
      haveI := instUDecidablePairwise (R := R) tl
      ofIff (Pairwise R tl) ⟨fun ht => pairwise_cons.mpr ⟨h, ht⟩, fun h' => (pairwise_cons.mp h').2⟩
    else
      isFalse fun h' => h (pairwise_cons.mp h').1

instance instUDecidableNodup [UDecidableEq α] : (l : List α) → UDecidable (Nodup l) :=
  instUDecidablePairwise

end List
