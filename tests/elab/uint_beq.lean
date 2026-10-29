/-!
`UInt8`, `UInt16`, `UInt32`, `UInt64` and `USize` have `BEq` instances of their own instead of the
one derived from `DecidableEq`. They reduce by themselves, are lawful, and agree with `DecidableEq`.
-/

example : (inferInstance : BEq UInt8) = ⟨UInt8.Internal.beq⟩ := rfl
example : (inferInstance : BEq UInt16) = ⟨UInt16.Internal.beq⟩ := rfl
example : (inferInstance : BEq UInt32) = ⟨UInt32.Internal.beq⟩ := rfl
example : (inferInstance : BEq UInt64) = ⟨UInt64.Internal.beq⟩ := rfl
example : (inferInstance : BEq USize) = ⟨USize.Internal.beq⟩ := rfl

example : ((3 : UInt8) == 3) = true := rfl
example : ((3 : UInt16) == 4) = false := rfl
example : ((3 : UInt32) == 3) = true := by decide
example : ((3 : UInt64) == 4) = false := by decide

example (a b : UInt8) (h : (a == b) = true) : a = b := eq_of_beq h
example (a : USize) : (a == a) = true := beq_self_eq_true a
example (a b : UInt32) : (a == b) = decide (a = b) := rfl
example (a b : UInt64) : (a == b) = true ↔ a = b := beq_iff_eq

example : ("abc" == "abc") = true := by decide
example : ("abc" == "abd") = false := by decide

/-! Compiled code uses the native comparison. -/

/--
trace: [Compiler.IR] [result]
    def beqUInt8 (x_1 : u8) (x_2 : u8) : u8 :=
      let x_3 : u8 := UInt8.Internal.beq x_1 x_2;
      ret x_3
    def beqUInt8._boxed (x_1 : tagged) (x_2 : tagged) : tagged :=
      let x_3 : u8 := unbox x_1;
      let x_4 : u8 := unbox x_2;
      let x_5 : u8 := beqUInt8 x_3 x_4;
      let x_6 : tagged := box x_5;
      ret x_6
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def beqUInt8 (a b : UInt8) : Bool := a == b

/-- info: [true, false, true, false, true, false] -/
#guard_msgs in
#eval [(3 : UInt8) == 3, (3 : UInt16) == 4, (3 : UInt32) == 3, (3 : UInt64) == 4,
  (3 : USize) == 3, "abc" == "abd"]
