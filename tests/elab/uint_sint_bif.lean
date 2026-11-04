import Std.Tactic.BVDecide

/-!
Checks that the fixed-width integer types (`UInt8`…`UInt64`, `USize`, `Int8`…`Int64`, `ISize`) still
reduce in the kernel and in the elaborator after `Bool.toUIntN`/`Bool.toIntN` moved to `bif` and
`IntN.ofIntClamp` to the dependent `bif`, spot-checks the lemmas restated with `uif` (`div_self`) or
reproved against the new definitions (`ofIntLE_eq_ofIntClamp`), and checks that `bv_decide` handles
goals with the converted definitions.
-/

/-! Reduction by `rfl`, `decide` and `decide +kernel`. -/

example : true.toUInt8 = 1 := rfl
example : false.toUInt8 = 0 := rfl
example : true.toUInt8 = 1 := by decide
example : (5 : UInt8) + 3 = 8 := by decide
example : (17 : UInt8) / 5 = 3 := by decide +kernel
example : (17 : UInt8) % 0 = 17 := by decide +kernel
example : (5 : UInt8) < 7 := by decide
example : (5 : UInt8) ≤ 7 := by decide +kernel
example : max (3 : UInt8) 5 = 5 := by decide
example : min (3 : UInt8) 5 = 3 := by decide +kernel
example : ((5 : UInt8) == 5) = true := rfl
example : true.toUInt16 = 1 := rfl
example : false.toUInt16 = 0 := rfl
example : true.toUInt16 = 1 := by decide
example : (5 : UInt16) + 3 = 8 := by decide
example : (17 : UInt16) / 5 = 3 := by decide +kernel
example : (17 : UInt16) % 0 = 17 := by decide +kernel
example : (5 : UInt16) < 7 := by decide
example : (5 : UInt16) ≤ 7 := by decide +kernel
example : max (3 : UInt16) 5 = 5 := by decide
example : min (3 : UInt16) 5 = 3 := by decide +kernel
example : ((5 : UInt16) == 5) = true := rfl
example : true.toUInt32 = 1 := rfl
example : false.toUInt32 = 0 := rfl
example : true.toUInt32 = 1 := by decide
example : (5 : UInt32) + 3 = 8 := by decide
example : (17 : UInt32) / 5 = 3 := by decide +kernel
example : (17 : UInt32) % 0 = 17 := by decide +kernel
example : (5 : UInt32) < 7 := by decide
example : (5 : UInt32) ≤ 7 := by decide +kernel
example : max (3 : UInt32) 5 = 5 := by decide
example : min (3 : UInt32) 5 = 3 := by decide +kernel
example : ((5 : UInt32) == 5) = true := rfl
example : true.toUInt64 = 1 := rfl
example : false.toUInt64 = 0 := rfl
example : true.toUInt64 = 1 := by decide
example : (5 : UInt64) + 3 = 8 := by decide
example : (17 : UInt64) / 5 = 3 := by decide +kernel
example : (17 : UInt64) % 0 = 17 := by decide +kernel
example : (5 : UInt64) < 7 := by decide
example : (5 : UInt64) ≤ 7 := by decide +kernel
example : max (3 : UInt64) 5 = 5 := by decide
example : min (3 : UInt64) 5 = 3 := by decide +kernel
example : ((5 : UInt64) == 5) = true := rfl
example : true.toInt8 = 1 := rfl
example : false.toInt8 = 0 := rfl
example : true.toInt8 = 1 := by decide
example : (5 : Int8) + 3 = 8 := by decide
example : (17 : Int8) / 5 = 3 := by decide +kernel
example : (17 : Int8) % 0 = 17 := by decide +kernel
example : (5 : Int8) < 7 := by decide
example : (5 : Int8) ≤ 7 := by decide +kernel
example : max (3 : Int8) 5 = 5 := by decide
example : min (3 : Int8) 5 = 3 := by decide +kernel
example : ((5 : Int8) == 5) = true := rfl
example : true.toInt16 = 1 := rfl
example : false.toInt16 = 0 := rfl
example : true.toInt16 = 1 := by decide
example : (5 : Int16) + 3 = 8 := by decide
example : (17 : Int16) / 5 = 3 := by decide +kernel
example : (17 : Int16) % 0 = 17 := by decide +kernel
example : (5 : Int16) < 7 := by decide
example : (5 : Int16) ≤ 7 := by decide +kernel
example : max (3 : Int16) 5 = 5 := by decide
example : min (3 : Int16) 5 = 3 := by decide +kernel
example : ((5 : Int16) == 5) = true := rfl
example : true.toInt32 = 1 := rfl
example : false.toInt32 = 0 := rfl
example : true.toInt32 = 1 := by decide
example : (5 : Int32) + 3 = 8 := by decide
example : (17 : Int32) / 5 = 3 := by decide +kernel
example : (17 : Int32) % 0 = 17 := by decide +kernel
example : (5 : Int32) < 7 := by decide
example : (5 : Int32) ≤ 7 := by decide +kernel
example : max (3 : Int32) 5 = 5 := by decide
example : min (3 : Int32) 5 = 3 := by decide +kernel
example : ((5 : Int32) == 5) = true := rfl
example : true.toInt64 = 1 := rfl
example : false.toInt64 = 0 := rfl
example : true.toInt64 = 1 := by decide
example : (5 : Int64) + 3 = 8 := by decide
example : (17 : Int64) / 5 = 3 := by decide +kernel
example : (17 : Int64) % 0 = 17 := by decide +kernel
example : (5 : Int64) < 7 := by decide
example : (5 : Int64) ≤ 7 := by decide +kernel
example : max (3 : Int64) 5 = 5 := by decide
example : min (3 : Int64) 5 = 3 := by decide +kernel
example : ((5 : Int64) == 5) = true := rfl
example : (UInt8.ofNatClamp 100000000000000000000).toNat = UInt8.size - 1 := by decide
example : (UInt8.ofNat 300).toNat = 300 % UInt8.size := by decide +kernel
example : (UInt16.ofNatClamp 100000000000000000000).toNat = UInt16.size - 1 := by decide
example : (UInt16.ofNat 300).toNat = 300 % UInt16.size := by decide +kernel
example : (UInt32.ofNatClamp 100000000000000000000).toNat = UInt32.size - 1 := by decide
example : (UInt32.ofNat 300).toNat = 300 % UInt32.size := by decide +kernel
example : (UInt64.ofNatClamp 100000000000000000000).toNat = UInt64.size - 1 := by decide
example : (UInt64.ofNat 300).toNat = 300 % UInt64.size := by decide +kernel
example : Int8.ofIntClamp 100000000000000000000 = Int8.maxValue := rfl
example : Int8.ofIntClamp (-100000000000000000000) = Int8.minValue := by decide
example : Int8.ofIntClamp (-3) = -3 := by decide +kernel
example : (-5 : Int8).toInt = -5 := by decide
example : (-5 : Int8).toNatClampNeg = 0 := by decide +kernel
example : (-17 : Int8) / 5 = -3 := by decide
example : (-5 : Int8).abs = 5 := by decide +kernel
example : Int16.ofIntClamp 100000000000000000000 = Int16.maxValue := rfl
example : Int16.ofIntClamp (-100000000000000000000) = Int16.minValue := by decide
example : Int16.ofIntClamp (-3) = -3 := by decide +kernel
example : (-5 : Int16).toInt = -5 := by decide
example : (-5 : Int16).toNatClampNeg = 0 := by decide +kernel
example : (-17 : Int16) / 5 = -3 := by decide
example : (-5 : Int16).abs = 5 := by decide +kernel
example : Int32.ofIntClamp 100000000000000000000 = Int32.maxValue := rfl
example : Int32.ofIntClamp (-100000000000000000000) = Int32.minValue := by decide
example : Int32.ofIntClamp (-3) = -3 := by decide +kernel
example : (-5 : Int32).toInt = -5 := by decide
example : (-5 : Int32).toNatClampNeg = 0 := by decide +kernel
example : (-17 : Int32) / 5 = -3 := by decide
example : (-5 : Int32).abs = 5 := by decide +kernel
example : Int64.ofIntClamp 100000000000000000000 = Int64.maxValue := rfl
example : Int64.ofIntClamp (-100000000000000000000) = Int64.minValue := by decide
example : Int64.ofIntClamp (-3) = -3 := by decide +kernel
example : (-5 : Int64).toInt = -5 := by decide
example : (-5 : Int64).toNatClampNeg = 0 := by decide +kernel
example : (-17 : Int64) / 5 = -3 := by decide
example : (-5 : Int64).abs = 5 := by decide +kernel
example : Bool.toUInt8 (decide ((3 : Nat) < 5)) + 1 = 2 := by decide +kernel

/-! Restated lemmas. -/

example (a : UInt8) : a / a = uif a = 0 then 0 else 1 := UInt8.div_self
example (a : UInt16) : a / a = uif a = 0 then 0 else 1 := UInt16.div_self
example (a : UInt32) : a / a = uif a = 0 then 0 else 1 := UInt32.div_self
example (a : UInt64) : a / a = uif a = 0 then 0 else 1 := UInt64.div_self
example (a : USize) : a / a = uif a = 0 then 0 else 1 := USize.div_self
example (a : Int8) : a / a = uif a = 0 then 0 else 1 := Int8.div_self
example (a : Int16) : a / a = uif a = 0 then 0 else 1 := Int16.div_self
example (a : Int32) : a / a = uif a = 0 then 0 else 1 := Int32.div_self
example (a : Int64) : a / a = uif a = 0 then 0 else 1 := Int64.div_self
example (a : ISize) : a / a = uif a = 0 then 0 else 1 := ISize.div_self

example (a : UInt8) (h : a ≠ 0) : a / a = 1 := by simp [UInt8.div_self, h]
example (a : Int8) (h : a ≠ 0) : a / a = 1 := by rw [Int8.div_self]; simp [h]
example : (0 : UInt16) / 0 = 0 := by simp [UInt16.div_self]
example (x : Int) (h₁ : Int8.minValue.toInt ≤ x) (h₂ : x ≤ Int8.maxValue.toInt) :
    Int8.ofIntLE x h₁ h₂ = Int8.ofIntClamp x :=
  Int8.ofIntLE_eq_ofIntClamp
example (x : Int) (h₁ : Int16.minValue.toInt ≤ x) (h₂ : x ≤ Int16.maxValue.toInt) :
    Int16.ofIntLE x h₁ h₂ = Int16.ofIntClamp x :=
  Int16.ofIntLE_eq_ofIntClamp
example (x : Int) (h₁ : Int32.minValue.toInt ≤ x) (h₂ : x ≤ Int32.maxValue.toInt) :
    Int32.ofIntLE x h₁ h₂ = Int32.ofIntClamp x :=
  Int32.ofIntLE_eq_ofIntClamp
example (x : Int) (h₁ : Int64.minValue.toInt ≤ x) (h₂ : x ≤ Int64.maxValue.toInt) :
    Int64.ofIntLE x h₁ h₂ = Int64.ofIntClamp x :=
  Int64.ofIntLE_eq_ofIntClamp
example (x : Int) (h₁ : ISize.minValue.toInt ≤ x) (h₂ : x ≤ ISize.maxValue.toInt) :
    ISize.ofIntLE x h₁ h₂ = ISize.ofIntClamp x :=
  ISize.ofIntLE_eq_ofIntClamp
example (x : Int) (h : x < 2 ^ 7) : (Int8.ofIntClamp x).toNatClampNeg = x.toNat :=
  Int8.toNatClampNeg_ofIntClamp_of_lt h
example (x : Int8) : Int8.ofIntClamp x.toInt = x := by simp
example (b : Bool) : b.toUInt8.toNat = b.toNat := by cases b <;> rfl
example (b : Bool) : b.toInt8.toInt = b.toInt := by cases b <;> rfl

/-! `bv_decide` on goals with the converted definitions. -/

example (b : Bool) : b.toUInt8 ≤ 1 := by bv_decide
example (b : Bool) : b.toUInt16 ≤ 1 := by bv_decide
example (b : Bool) : b.toUInt32 ≤ 1 := by bv_decide
example (b : Bool) : b.toUInt64 ≤ 1 := by bv_decide
example (b : Bool) : 0 ≤ b.toInt8 := by bv_decide
example (b : Bool) : 0 ≤ b.toInt16 := by bv_decide
example (b : Bool) : 0 ≤ b.toInt32 := by bv_decide
example (b : Bool) : 0 ≤ b.toInt64 := by bv_decide
example (a : UInt8) (h : a ≠ 0) : a / a = 1 := by bv_decide
example (a : Int16) (h : a ≠ 0) (h' : a ≠ -1) : a / a = 1 := by bv_decide
example (a b : UInt32) : max a b ≥ min a b := by bv_decide
example (a b : Int32) : max a b ≥ min a b := by bv_decide
example (b c : Bool) : (b && c).toUInt8 = b.toUInt8 &&& c.toUInt8 := by bv_decide
example (b : Bool) : (!b).toInt64 = 1 - b.toInt64 := by bv_decide
