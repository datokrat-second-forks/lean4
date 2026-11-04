/-
Copyright (c) 2026 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Array.Subarray.Split
public import Init.Data.Slice.Array
import Init.Omega

public section

private def Array.MergeSort.Internal.merge (xs ys : Array α) (le : α → α → Bool := by exact (· ≤ ·)) :
    Array α :=
  bif hxs : 0 <ᵇ xs.size then
    bif hys : 0 <ᵇ ys.size then
      go xs[*...*] ys[*...*] (by simpa only [Array.size_mkSlice_rii] using lt_of_decideLT_eq_true hxs)
        (by simpa only [Array.size_mkSlice_rii] using lt_of_decideLT_eq_true hys)
        (Array.emptyWithCapacity (xs.size + ys.size))
    else
      xs
  else
    ys
where
  go (xs ys : Subarray α) (hxs : 0 < xs.size) (hys : 0 < ys.size) (acc : Array α) : Array α :=
    let x := xs[0]
    let y := ys[0]
    bif le x y then
      bif hi : 1 <ᵇ xs.size then
        go (xs.drop 1) ys (by have := lt_of_decideLT_eq_true hi; simp only [Subarray.size_drop]; omega)
          hys (acc.push x)
      else
        ys.foldl (init := acc.push x) (fun acc y => acc.push y)
    else
      bif hj : 1 <ᵇ ys.size then
        go xs (ys.drop 1) hxs
          (by have := lt_of_decideLT_eq_true hj; simp only [Subarray.size_drop]; omega) (acc.push y)
      else
        xs.foldl (init := acc.push y) (fun acc x => acc.push x)
  termination_by xs.size + ys.size

def Subarray.mergeSort (xs : Subarray α) (le : α → α → Bool := by exact (· ≤ ·)) : Array α :=
    bif h : 1 <ᵇ xs.size then
      let splitIdx := (xs.size + 1) / 2 -- We follow the same splitting convention as `List.mergeSort`
      let left := xs[*...splitIdx]
      let right := xs[splitIdx...*]
      Array.MergeSort.Internal.merge (mergeSort left le) (mergeSort right le) le
    else
      xs.toArray
termination_by xs.size
decreasing_by
  · have := lt_of_decideLT_eq_true h; simp only [Subarray.size_mkSlice_rio]; omega
  · have := lt_of_decideLT_eq_true h; simp only [Subarray.size_mkSlice_rci]; omega

@[inline]
def Array.mergeSort (xs : Array α) (le : α → α → Bool := by exact (· ≤ ·)) : Array α :=
    xs[*...*].mergeSort le
