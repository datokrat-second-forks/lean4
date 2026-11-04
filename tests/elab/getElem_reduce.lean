import Std.Data.ByteSlice

/-!
Checks that `xs[i]?` and `xs[i]!` reduce on literals for the concrete containers whose `GetElem?`
instances decide the bound with a `Bool` (`bif h : i <ᵇ xs.size`), and that `simp` still states
them with `uif` through `getElem?_def` and the `getElem?_pos`/`getElem?_neg` lemmas.
-/

/-! ### Reduction with `rfl`, `decide` and `decide +kernel` -/

example : #[1, 2, 3][2]? = some 3 := rfl
example : #[1, 2, 3][2]? = some 3 := by decide
example : #[1, 2, 3][2]? = some 3 := by decide +kernel
example : #[1, 2, 3][5]? = none := rfl
example : #[1, 2, 3][5]? = none := by decide
example : #[1, 2, 3][2]! = 3 := by decide
example : #[1, 2, 3][5]! = 0 := by decide
example : #[1, 2, 3][(2 : Fin 4)]? = some 3 := by decide
example : #[1, 2, 3][(3 : Fin 4)]? = none := by decide +kernel

example : [1, 2, 3][2]? = some 3 := by decide
example : [1, 2, 3][5]? = none := rfl
example : [1, 2, 3][2]! = 3 := by decide

example : (#v[1, 2, 3] : Vector Nat 3)[2]? = some 3 := rfl
example : (#v[1, 2, 3] : Vector Nat 3)[5]? = none := by decide
example : (#v[1, 2, 3] : Vector Nat 3)[2]! = 3 := by decide +kernel

example : (#[1, 2, 3, 4].toSubarray 1 3)[1]? = some 3 := rfl
example : (#[1, 2, 3, 4].toSubarray 1 3)[2]? = none := by decide
example : (#[1, 2, 3, 4].toSubarray 1 3)[1]! = 3 := by decide +kernel

example : (5#4)[0]? = some true := rfl
example : (5#4)[7]? = none := by decide
example : (5#4)[1]! = false := by decide +kernel
example : (5#4).getLsb? 0 = some true := rfl
example : (5#4).getLsb? 7 = none := by decide
example : (5#4).getMsb? 0 = some false := by decide

example : (ByteArray.mk #[1, 2, 3])[2]? = some 3 := rfl
example : (ByteArray.mk #[1, 2, 3])[5]? = none := by decide
example : (ByteArray.mk #[1, 2, 3])[2]! = 3 := by decide +kernel

example : ((FloatArray.mk #[1, 2, 3])[1]?).isSome = true := rfl
example : ((FloatArray.mk #[1, 2, 3])[5]?).isNone = true := by decide

example : ((ByteArray.mk #[1, 2, 3]).toByteSlice)[2]? = some 3 := rfl
example : ((ByteArray.mk #[1, 2, 3]).toByteSlice)[5]? = none := by decide
example : ((ByteArray.mk #[1, 2, 3]).toByteSlice)[2]! = 3 := by decide +kernel

example : (Lean.RArray.branch 1 (.leaf 3) (.leaf 4))[1]? = some 4 := rfl
example : (Lean.RArray.leaf 3)[0]! = 3 := by decide

/-! ### `cbv` -/

example : #[1, 2, 3][2]? = some 3 := by cbv
example : #[1, 2, 3][5]? = none := by cbv
example : (#v[1, 2, 3] : Vector Nat 3)[1]? = some 2 := by cbv

/-! ### `simp` keeps the `uif` statements -/

example (xs : Array Nat) (i : Nat) : xs[i]? = uif h : i < xs.size then some xs[i] else none := by
  rw [getElem?_def]

example (xs : Vector Nat n) (i : Nat) : xs[i]? = uif h : i < n then some xs[i] else none := by
  simp only [getElem?_def]

example (xs : Subarray Nat) (i : Nat) :
    xs[i]? = uif h : i < xs.size then some xs[i] else none := by
  simp only [getElem?_def]

example (x : BitVec w) (i : Nat) : x[i]? = uif h : i < w then some x[i] else none := by
  simp only [getElem?_def]

example (xs : ByteArray) (i : Nat) : xs[i]? = uif h : i < xs.size then some xs[i] else none := by
  simp only [getElem?_def]

example (xs : FloatArray) (i : Nat) :
    xs[i]? = uif h : i < xs.size then some xs[i] else none := by
  simp only [getElem?_def]

example (xs : ByteSlice) (i : Nat) : xs[i]? = uif h : i < xs.size then some xs[i] else none := by
  simp only [getElem?_def]

example (xs : Lean.RArray Nat) (i : Nat) : xs[i]? = some xs[i] := by
  simp

example (xs : Array Nat) (i : Nat) (h : i < xs.size) : xs[i]? = some xs[i] := by simp [h]
example (xs : Array Nat) (i : Nat) (h : xs.size ≤ i) : xs[i]? = none := by simp [h]
example (xs : Vector Nat n) (i : Nat) (h : n ≤ i) : xs[i]! = default := by simp [h]
example (xs : ByteArray) (i : Nat) (h : i < xs.size) : xs[i]! = xs[i] := by simp [h]
example (x : BitVec w) (i : Nat) (h : w ≤ i) : x.getLsb? i = none := by simp [h]

/-- Unfolding `getElem?` shows the `bif`, which `simp` turns into `uif`. -/
example (xs : Array Nat) (i : Nat) : xs[i]? = uif h : i < xs.size then some xs[i] else none := by
  simp [getElem?]
