/-!
Checks that the mathematical support code in `Init` that was moved from `Decidable` `if` to
`bif`/`bif h :` still reduces in the kernel (`Rat`, `Dyadic`, `omega` constraints, `compare`,
the reflection code of `grind`'s `ac`, `ring` and `linarith` solvers), and that the arithmetic
tactics whose reflection proofs evaluate this code still work.
-/

/-! `Rat` arithmetic, comparisons and conversions on literals -/

example : (1/2 : Rat) + 1/3 = 5/6 := by decide +kernel
example : (1/2 : Rat) - 1/3 = 1/6 := by decide +kernel
example : (2/3 : Rat) * (3/4) = 1/2 := by decide +kernel
example : (2/3 : Rat) / (4/9) = 3/2 := by decide +kernel
example : (-2/3 : Rat)⁻¹ = -3/2 := by decide +kernel
example : (2/3 : Rat)⁻¹ = 3/2 := by decide +kernel
example : (0 : Rat)⁻¹ = 0 := by decide +kernel
example : (1/2 : Rat) < 2/3 := by decide +kernel
example : ¬ (2/3 : Rat) < 1/2 := by decide +kernel
example : (1/2 : Rat) ≤ 1/2 := by decide +kernel
example : min (1/2 : Rat) (1/3) = 1/3 := by decide +kernel
example : max (1/2 : Rat) (1/3) = 1/2 := by decide +kernel
example : mkRat 4 6 = 2/3 := by decide +kernel
example : mkRat 4 0 = 0 := by decide +kernel
example : Rat.divInt 4 (-6) = -2/3 := by decide +kernel
example : (7/2 : Rat).floor = 3 := by decide +kernel
example : (7/2 : Rat).ceil = 4 := by decide +kernel
example : (-7/2 : Rat).floor = -4 := by decide +kernel
example : (3 : Rat).ceil = 3 := by decide +kernel
example : (-7/2 : Rat).abs = 7/2 := by decide +kernel
example : (7/2 : Rat).abs = 7/2 := by decide +kernel
example : (1.5 : Rat) = 3/2 := by decide +kernel
example : (15e-1 : Rat) = 3/2 := by decide +kernel
example : (1e2 : Rat) = 100 := by decide +kernel
example : (2/3 : Rat) ^ (-2 : Int) = 9/4 := by decide +kernel
example : toString (1/2 : Rat) = "1/2" := by decide +kernel
example : toString (3 : Rat) = "3" := by decide +kernel
example : (100/7 : Rat) + 200/11 - 1/77 < 33 := by decide +kernel
example : (1/2 : Rat) + 1/3 = 5/6 := by with_unfolding_all decide
example : mkRat 4 6 = 2/3 := by with_unfolding_all rfl
example : (-7/2 : Rat).abs = 7/2 := by with_unfolding_all rfl

/-! `Dyadic` -/

example : Int.trailingZeros 12 = 2 := by decide +kernel
example : Int.trailingZeros 0 = 0 := by decide +kernel
example : Int.trailingZeros (-40) = 3 := by decide +kernel
example : (Dyadic.ofInt 12).toRat = 12 := by decide +kernel
example : (Dyadic.ofIntWithPrec 3 2).toRat = 3/4 := by decide +kernel

/-! `omega`'s constraint normalization -/

open Lean.Omega in
example : Constraint.scale 0 ⟨some 1, some 3⟩ = ⟨some 0, some 0⟩ := by decide
open Lean.Omega in
example : Constraint.scale (-2) ⟨some 1, some 3⟩ = ⟨some (-6), some (-2)⟩ := by decide
open Lean.Omega in
example : normalize? (⟨some 2, some 4⟩, [2, 4]) = some (⟨some 1, some 2⟩, [1, 2]) := by decide
open Lean.Omega in
example : normalize? (⟨some 2, some 4⟩, [1, 4]) = none := by decide
open Lean.Omega in
example : positivize? (⟨some 2, some 4⟩, [-1, 4]) = some (⟨some (-4), some (-2)⟩, [1, -4]) := by
  decide

/-! `compare` built from `compareOfLessAndEq`, `Array.compareLex` -/

example : compare (3 : Nat) 5 = .lt := by decide
example : compare (5 : Int) (-5) = .gt := by decide
example : compare (3 : UInt8) 3 = .eq := by decide
example : compare (3 : Int8) 4 = .lt := by decide
example : compareOfLessAndEq (3 : Nat) 5 = .lt := by decide
example : compareOfLessAndBEq (5 : Nat) 3 = .gt := by decide
example : compareOfLessAndEq (3 : Nat) 5 = .lt := rfl
example : compare (3 : UInt64) 5 = .lt := by decide +kernel

/-- `compareOfLessAndEq` takes `DecidableLT` and compares with `<ᵇ` (ADR-68). -/
example {α} [LT α] [DecidableLT α] [DecidableEq α] (x y : α) :
    compareOfLessAndEq x y = bif x <ᵇ y then .lt else bif x =ᵇ y then .eq else .gt := rfl
example : compare #[1, 2, 3] #[1, 2, 4] = .lt := by decide
example : compare #[1, 2] #[1, 2] = .eq := by decide
example : compare #[1, 2, 3] #[1, 2] = .gt := by decide

/-! `grind`'s reflection code -/

example : (Lean.Grind.AC.Seq.cons 0 (.var 1)).erase0 = .var 1 := rfl
example : (Lean.Grind.AC.Seq.var 3).insert 1 = .cons 1 (.var 3) := rfl
example : (Lean.Grind.AC.Seq.cons 2 (.cons 2 (.var 3))).eraseDup = .cons 2 (.var 3) := rfl
example : Lean.Grind.CommRing.PPoly.coeff 1 (.add 3 1 1 (.num 5)) = 3 := by decide
example : Lean.Grind.CommRing.PPoly.coeff 0 (.add 3 1 1 (.num 5)) = 5 := by decide
example : Lean.Grind.CommRing.PPoly.dsum 10 123 = 6 := by decide +kernel

/-! Tactics whose reflection proofs evaluate the converted code -/

example (a b c : Int) : (a + b) * c - c * b = a * c := by grind
example (a b : Rat) (h : a ≠ 0) : a * b / a = b := by grind
example (a b : Rat) (h : b ≠ 0) (h' : a / b = 2) : a = 2 * b := by grind
example (x y : Rat) (h₁ : x ≤ y) (h₂ : 2 * y < 3 * x - 1/2) : 1/2 < x := by grind
example (x y : Int) (h : 3 * x + 2 * y = 7) (h' : x ≥ 4) : y < 0 := by lia
example (x y : Nat) (h : 2 * x + 3 * y = 12) (h' : y > 3) : x = 0 := by omega
example (x : Int) (h : 6 ∣ 4 * x + 2) : x % 3 = 1 := by omega
example (x y : Nat) : x + 2 * y + 1 > y + x := by simp +arith
example (x y : Nat) (h : x + y + 3 = y + 5) : x = 2 := by simp +arith at h; exact h
example (a b c : Nat) (op : Nat → Nat → Nat) [Std.Associative op] [Std.Commutative op] :
    op a (op b c) = op c (op b a) := by ac_rfl
example (a b c : Nat) : a * (b * c) = c * (a * b) := by grind
example (x : Int) : x.sign = 1 → x > 0 := by grind
example (x : Rat) (h : x = 1.5) : 2 * x = 3 := by grind
