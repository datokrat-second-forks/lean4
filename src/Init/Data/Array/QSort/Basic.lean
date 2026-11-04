/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Data.Vector.Basic
public import Init.Data.Ord.Basic
import Init.Omega
import Init.WFTactics

public section

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
-- We do not enable `linter.indexVariables` because it is helpful to name index variables `lo`, `mid`, `hi`, etc.


namespace Array

/--
Internal implementation of `Array.qsort`.

`qpartition as lt lo hi hlo hhi` returns a pair `(⟨m, h₁, h₂⟩, as')` where
`as'` is a permutation of `as` and `m` is a number such that:
- `lo ≤ m`
- `m < n`
- `∀ i, lo ≤ i → i < m → lt as[i] as[m]`
- `∀ j, m < j → j < hi → !lt as[j] as[m]`

It does so by first swapping the elements at indices `lo`, `mid := (lo + hi) / 2`, and `hi`
if necessary so that the middle (pivot) element is at index `hi`.
We then iterate from `k = lo` to `k = hi`, with a pointer `i` starting at `lo`, and
swapping each element which is less than the pivot to position `i`, and then incrementing `i`.
-/
@[inline]
def qpartition {n} (as : Vector α n) (lt : α → α → Bool) (lo hi : Nat) (w : lo ≤ hi := by omega)
    (hlo : lo < n := by omega) (hhi : hi < n := by omega) : {m : Nat // lo ≤ m ∧ m ≤ hi} × Vector α n :=
  let mid := (lo + hi) / 2
  let as  := bif lt as[mid] as[lo] then as.swap lo mid else as
  let as  := bif lt as[hi]  as[lo] then as.swap lo hi  else as
  let as  := bif lt as[mid] as[hi] then as.swap mid hi else as
  let pivot := as[hi]
  -- During this loop, elements below in `[lo, i)` are less than `pivot`,
  -- elements in `[i, k)` are greater than or equal to `pivot`,
  -- elements in `[k, hi)` are unexamined,
  -- while `as[hi]` is (by definition) the pivot.
  let rec @[specialize] loop (as : Vector α n) (i k : Nat)
      (ilo : lo ≤ i := by omega) (ik : i ≤ k := by omega) (w : k ≤ hi := by omega) :=
    bif h : k <ᵇ hi then
      have h := lt_of_decideLT_eq_true h
      bif lt as[k] pivot then
        loop (as.swap i k) (i+1) (k+1)
      else
        loop as i (k+1)
    else
      have h := not_lt_of_decideLT_eq_false h
      (⟨i, ilo, by omega⟩, as.swap i hi)
  termination_by hi - k
  loop as lo lo

/--
In-place quicksort.

`qsort as lt lo hi` sorts the subarray `as[lo...=hi]` in-place using `lt` to compare elements.
-/
@[inline] def qsort (as : Array α) (lt : α → α → Bool := by exact (· < ·))
    (lo := 0) (hi := as.size - 1) : Array α :=
  let rec @[specialize] sort {n} (as : Vector α n) (lo hi : Nat) (w : lo ≤ hi := by omega)
      (hlo : lo < n := by omega) (hhi : hi < n := by omega) :=
    bif h₁ : lo <ᵇ hi then
      have h₁ := lt_of_decideLT_eq_true h₁
      let ⟨⟨mid, hmid⟩, as⟩ := qpartition as lt lo hi
      bif h₂ : hi ≤ᵇ mid then
        -- This only occurs when `hi ≤ lo`,
        -- and thus `as[lo...(hi+1)]` is trivially already sorted.
        as
      else
        -- Otherwise, we recursively sort the two subarrays.
        have h₂ := not_le_of_decideLE_eq_false h₂
        sort (sort as lo mid) (mid+1) hi
    else as
  termination_by hi - lo
  bif h : as.size =ᵇ 0 then
    as
  else
    have h := ne_of_decideEq_eq_false h
    let lo := min lo (as.size - 1)
    let hi := max lo (min hi (as.size - 1))
    sort as.toVector lo hi |>.toArray

set_option linter.unusedVariables.funArgs false in
/--
Sort an array using `compare` to compare elements.
-/
def qsortOrd [ord : Ord α] (xs : Array α) : Array α :=
  xs.qsort fun x y => compare x y |>.isLT

end Array
