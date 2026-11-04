/-!
Checks that simple `Nat`, `Int` and `Char` operations still reduce in the kernel and in the
elaborator after their definitions moved from `Decidable` `if` to `bif`/`uif` (`Nat.div`/`mod`,
`Nat.gcd`, `Nat.toDigits`, `Char.ofNat`, `Char.toUpper`, `Int.bmod`, …), also on large literals for
the kernel-accelerated functions, and spot-checks the restated `uif` lemmas with `simp`, `omega`
and `grind`.
-/

/-! Kernel-accelerated functions on large literals. -/

example : (2^200 + 7) / 2^100 = 2^100 := by decide
example : (2^200 + 7) % 2^100 = 7 := by decide
example : Nat.gcd (2^200 * 3) (2^150 * 9) = 2^150 * 3 := by decide
example : (2^200 + 7) / 2^100 = 2^100 := rfl
example : (2^200 + 7) % 2^100 = 7 := rfl
example : Nat.gcd (2^200 * 3) (2^150 * 9) = 2^150 * 3 := rfl
example : (2^100000 : Nat) % (2^99999) = 0 := by decide +kernel
example : (2^100000 : Nat) / (2^99999) = 2 := by decide +kernel
example : Nat.gcd (2^100000) (3^1000) = 1 := by decide +kernel
example : Nat.log2 (2^10000) = 10000 := by decide +kernel
example : (2^100 ||| 1) &&& 3 = 1 := by decide
example : Nat.powMod 7 (2^64) 13 = 9 := by decide +kernel

/-! Small `Nat` operations, including the definitional reductions of `Nat.mod` on open terms. -/

example : 17 / 5 = 3 := by decide
example : 17 % 5 = 2 := by decide
example (n : Nat) : 0 % n = 0 := rfl
example (m : Nat) : 5 % (m + 6) = 5 := rfl
example (n : Nat) : (0 : Fin (n + 1)).val = 0 := rfl
example : (5 : Fin 3) = 2 := rfl
example : Nat.gcd 12 18 = 6 := by decide
example : Nat.lcm 4 6 = 12 := by decide
example : Nat.powMod 3 4 5 = 1 := by decide
example : Nat.bitwise and 12 10 = 8 := by decide +kernel
example : Nat.testBit 5 2 = true := by decide
example : (2^64 : Nat).log2 = 64 := rfl

/-! Digits and `repr`. -/

example : Nat.digitChar 12 = 'c' := rfl
example : Nat.toDigits 10 1234 = ['1', '2', '3', '4'] := rfl
example : Nat.toDigits 16 0xcafe = ['c', 'a', 'f', 'e'] := by decide
example : Nat.repr 1234 = "1234" := rfl
example : toString (1234 : Nat) = "1234" := by decide
example : toString (-1234 : Int) = "-1234" := by decide
example : (-12 : Int).repr = "-12" := by decide

/-! `Char` operations. -/

example : Char.ofNat 65 = 'A' := rfl
example : (Char.ofNat 0x10FFFF).val = 0x10FFFF := rfl
example : Char.ofNat 0xd800 = '\x00' := by decide
example : Char.ofNat 0x110000 = '\x00' := rfl
example : 'a'.utf8Size = 1 := rfl
example : 'λ'.utf8Size = 2 := rfl
example : '😀'.utf8Size = 4 := rfl
example : 'a'.toUpper = 'A' := rfl
example : 'q'.toLower = 'q' := rfl
example : 'Z'.toLower = 'z' := rfl
example : 'a'.toUpper = 'A' := by decide
example : '5'.isDigit = true := rfl
example : 'a'.isUpper = false := rfl
example : 'f'.isHexDigit = true := by decide
example : 'a'.ordinal.val = 97 := rfl
example : Char.ofOrdinal ⟨98, by decide⟩ = 'b' := rfl
example : Char.succ? 'a' = some 'b' := rfl
example : (Char.succ? (Char.ofNat 0xD7FF)).map Char.toNat = some 0xE000 := by decide

/-! `Int` operations. -/

example : (-7 : Int) / 2 = -4 := by decide
example : (-7 : Int) % 2 = 1 := by decide
example : (-(2^100) : Int) / 2^50 = -(2^50) := by decide
example : (-7 : Int).tdiv 2 = -3 := by decide
example : (-7 : Int).fdiv 2 = -4 := by decide
example : (-12 : Int).bmod 7 = 2 := by decide
example : (-12 : Int).bdiv 7 = -2 := by decide
example : (-7 : Int).bmod 4 = 1 := rfl
example : (-7 : Int).bdiv 4 = -2 := rfl
example : (-3 : Int) ^ 3 = -27 := rfl
example : (-3 : Int) ^ 4 = 81 := by decide
example : Int.gcd (-12) 18 = 6 := by decide
example : max (3 : Int) (-5) = 3 := by decide
example : compare (3 : Int) 5 = .lt := by decide

/-! Restated lemmas: `simp` normal form is `uif` with propositional conditions. -/

example (x y : Nat) : x / y = uif 0 < y ∧ y ≤ x then (x - y) / y + 1 else 0 := Nat.div_eq_ite x y
example (x y : Nat) : x % y = uif 0 < y ∧ y ≤ x then (x - y) % y else x := Nat.mod_eq_ite x y
example (x y : Nat) : Nat.gcd x y = uif x = 0 then y else Nat.gcd (y % x) x := Nat.gcd_def x y
example (n : Nat) : n.log2 = uif 2 ≤ n then (n / 2).log2 + 1 else 0 := Nat.log2_def n

example (x y : Nat) (h : y ≤ x) (hy : 0 < y) : x / y = (x - y) / y + 1 := by
  simp [Nat.div_eq_ite x y, h, hy]

example (n : Nat) (h : 2 ≤ n) : n.log2 = (n / 2).log2 + 1 := by
  simp [Nat.log2_def n, h]

example (m n : Nat) (h : m % 3 + n % 3 < 3) : (m + n) % 3 = m % 3 + n % 3 := by
  simp [Nat.add_mod_eq_ite, Nat.not_le.2 h]

example (a : Nat) : 1 - a ≤ 1 := by
  rw [Nat.one_sub]
  split <;> omega

example (x : Int) (m : Nat) (h : x % m < (m + 1) / 2) : x.bmod m = x % m := by
  simp [Int.bmod_def, h]

example (x : Int) (m : Nat) : x.bmod m = x % m ∨ x.bmod m = x % m - m := by
  rw [Int.bmod_def]
  split <;> omega

example (a b : Int) (h : 0 ≤ a) : a.tdiv b = a / b := by
  simp [Int.tdiv_eq_ediv, h]

example (a b : Nat) (h : a < b) : compare a b = .lt := by
  simp [Nat.compare_eq_ite_lt, h]

example : Nat.toDigits 10 5 = [Nat.digitChar 5] := by
  rw [Nat.toDigits_eq_ite (by decide)]
  simp

example (c : Char) (h : c.val < 0xd800) : (c.ordinal : Nat) = c.val.toNat := by
  simp [Char.coe_ordinal, h]

example (x y : Nat) (hy : 0 < y) (h : y ≤ x) : x / y = (x - y) / y + 1 := by
  grind [Nat.div_eq_ite]

example (x : Nat) (h : 0 < x) : (1 - x) = 0 := by
  grind [Nat.one_sub]

/-! `bif` definitions in proofs: `split` and `simp` see the propositional conditions. -/

example (c : Char) (h : 'a'.val ≤ c.val ∧ c.val ≤ 'z'.val) : c.toUpper.val = c.val + ('A'.val - 'a'.val) := by
  unfold Char.toUpper
  split
  · rfl
  · simp_all

example (x : Int) (m : Nat) (h : ¬x % m < (m + 1) / 2) : x.bmod m = x % m - m := by
  simp [Int.bmod, h]
