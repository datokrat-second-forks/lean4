import Lean

/-!
The `match` compiler tests value patterns (`Nat`, `Int`, `Fin`, `BitVec`, `UIntN`, `Char` and
`String` literals, and array sizes) with `Bool`-valued functions that reduce by themselves, instead
of branching on a `DecidableEq` instance with `dite`. The matchers keep reducing by `rfl`, `decide`
and `simp only`, and their equation lemmas are still generated.
-/

open Lean Meta in
/-- Fails if the matcher's definition branches on a `Decidable` instance. -/
def checkBoolTests (matcher : Name) : MetaM Unit := do
  let some value := (← getConstInfo matcher).value? | throwError "{matcher} has no value"
  if value.find? (·.isConstOf ``dite) |>.isSome then
    throwError "{matcher} uses `dite`"
  unless value.find? (·.isConstOf ``Bool.Internal.matchValue) |>.isSome do
    throwError "{matcher} does not use `Bool.Internal.matchValue`"

def fNat : Nat → Nat
  | 5 => 1
  | 7 => 2
  | _ => 3

run_meta checkBoolTests ``fNat.match_1
example : fNat 5 = 1 := rfl
example : fNat 7 = 2 := by decide
example : fNat 8 = 3 := by simp [fNat]
example (x : Nat) (h₁ : x ≠ 5) (h₂ : x ≠ 7) : fNat x = 3 := by simp [fNat, h₁, h₂]
example : (match 7 with | 5 => 1 | 7 => 2 | _ => 3 : Nat) = 2 := by simp only

def fInt : Int → Nat
  | -3 => 1
  | 4 => 2
  | _ => 3

run_meta checkBoolTests ``fInt.match_1
example : fInt (-3) = 1 := rfl
example : fInt 4 = 2 := by decide
example : fInt 5 = 3 := by simp [fInt]
example (x : Int) (h₁ : x ≠ -3) (h₂ : x ≠ 4) : fInt x = 3 := by simp [fInt, h₁, h₂]
example : (match (4 : Int) with | -3 => 1 | 4 => 2 | _ => 3 : Nat) = 2 := by simp only

def fFin : Fin 10 → Nat
  | 2 => 1
  | 9 => 2
  | _ => 3

run_meta checkBoolTests ``fFin.match_1
example : fFin 2 = 1 := rfl
example : fFin 9 = 2 := by decide
example : fFin 3 = 3 := by simp [fFin]
example (x : Fin 10) (h₁ : x ≠ 2) (h₂ : x ≠ 9) : fFin x = 3 := by simp [fFin, h₁, h₂]
example : (match (9 : Fin 10) with | 2 => 1 | 9 => 2 | _ => 3 : Nat) = 2 := by simp only

def fBitVec : BitVec 8 → Nat
  | 2#8 => 1
  | 255#8 => 2
  | _ => 3

run_meta checkBoolTests ``fBitVec.match_1
example : fBitVec 2#8 = 1 := rfl
example : fBitVec 255#8 = 2 := by decide
example : fBitVec 3#8 = 3 := by simp [fBitVec]
example (x : BitVec 8) (h₁ : x ≠ 2#8) (h₂ : x ≠ 255#8) : fBitVec x = 3 := by
  simp [fBitVec, h₁, h₂]
example : (match 255#8 with | 2#8 => 1 | 255#8 => 2 | _ => 3 : Nat) = 2 := by simp only

def fUInt8 : UInt8 → Nat
  | 2 => 1
  | 255 => 2
  | _ => 3

run_meta checkBoolTests ``fUInt8.match_1
example : fUInt8 2 = 1 := rfl
example : fUInt8 255 = 2 := by decide
example : fUInt8 3 = 3 := by simp [fUInt8]
example (x : UInt8) (h₁ : x ≠ 2) (h₂ : x ≠ 255) : fUInt8 x = 3 := by simp [fUInt8, h₁, h₂]
example : (match (255 : UInt8) with | 2 => 1 | 255 => 2 | _ => 3 : Nat) = 2 := by simp only

def fUInt16 : UInt16 → Nat
  | 2 => 1
  | 65535 => 2
  | _ => 3

run_meta checkBoolTests ``fUInt16.match_1
example : fUInt16 2 = 1 := rfl
example : fUInt16 65535 = 2 := by decide
example : fUInt16 3 = 3 := by simp [fUInt16]
example (x : UInt16) (h₁ : x ≠ 2) (h₂ : x ≠ 65535) : fUInt16 x = 3 := by
  simp [fUInt16, h₁, h₂]
example : (match (65535 : UInt16) with | 2 => 1 | 65535 => 2 | _ => 3 : Nat) = 2 := by simp only

def fUInt32 : UInt32 → Nat
  | 2 => 1
  | 4294967295 => 2
  | _ => 3

run_meta checkBoolTests ``fUInt32.match_1
example : fUInt32 2 = 1 := rfl
example : fUInt32 4294967295 = 2 := by decide
example : fUInt32 3 = 3 := by simp [fUInt32]
example (x : UInt32) (h₁ : x ≠ 2) (h₂ : x ≠ 4294967295) : fUInt32 x = 3 := by
  simp [fUInt32, h₁, h₂]
example : (match (4294967295 : UInt32) with | 2 => 1 | 4294967295 => 2 | _ => 3 : Nat) = 2 := by
  simp only

def fUInt64 : UInt64 → Nat
  | 2 => 1
  | 18446744073709551615 => 2
  | _ => 3

run_meta checkBoolTests ``fUInt64.match_1
example : fUInt64 2 = 1 := rfl
example : fUInt64 18446744073709551615 = 2 := by decide
example : fUInt64 3 = 3 := by simp [fUInt64]
example (x : UInt64) (h₁ : x ≠ 2) (h₂ : x ≠ 18446744073709551615) : fUInt64 x = 3 := by
  simp [fUInt64, h₁, h₂]
example :
    (match (18446744073709551615 : UInt64) with | 2 => 1 | 18446744073709551615 => 2 | _ => 3 : Nat)
      = 2 := by
  simp only

def fChar : Char → Nat
  | 'a' => 1
  | 'z' => 2
  | _ => 3

run_meta checkBoolTests ``fChar.match_1
example : fChar 'a' = 1 := rfl
example : fChar 'z' = 2 := by decide
example : fChar 'b' = 3 := by simp [fChar]
example (x : Char) (h₁ : x ≠ 'a') (h₂ : x ≠ 'z') : fChar x = 3 := by simp [fChar, h₁, h₂]
example : (match 'z' with | 'a' => 1 | 'z' => 2 | _ => 3 : Nat) = 2 := by simp only

/-! With several discriminants, generating equation lemmas needs to split on value tests. -/

def fPair : Nat → Nat → Nat
  | 0, 0 => 1
  | _, _ => 2

run_meta checkBoolTests ``fPair.match_1
example : fPair 0 0 = 1 := by simp [fPair]
example : fPair 0 1 = 2 := by simp [fPair]
example (x y : Nat) (h : y ≠ 0) : fPair x y = 2 := by simp [fPair, h]

/-! Array literal patterns test the array size. -/

def fArray : Array Nat → Nat
  | #[] => 0
  | #[a] => a
  | #[a, b] => a + b
  | _ => 42

run_meta checkBoolTests ``fArray.match_1
example : fArray #[3, 4] = 7 := rfl
example : fArray #[1, 2, 3] = 42 := by decide

def fString : String → Nat
  | "a" => 1
  | "bc" => 2
  | _ => 3

run_meta checkBoolTests ``fString.match_1
example : fString "a" = 1 := rfl
example : fString "bc" = 2 := by decide
example : fString "b" = 3 := by simp [fString]
example (x : String) (h₁ : x ≠ "a") (h₂ : x ≠ "bc") : fString x = 3 := by simp [fString, h₁, h₂]
example : (match "bc" with | "a" => 1 | "bc" => 2 | _ => 3 : Nat) = 2 := by simp only

/-! Compiled code compares the native values directly. -/

/--
trace: [Compiler.IR] [result]
    def gUInt8 (x_1 : u8) : tobj :=
      let x_2 : u8 := 2;
      let x_3 : u8 := UInt8.decEq x_1 x_2;
      case x_3 : u8 of
      Bool.false →
        let x_4 : tagged := 3;
        ret x_4
      Bool.true →
        let x_5 : tagged := 1;
        ret x_5
    def gUInt8._boxed (x_1 : tagged) : tobj :=
      let x_2 : u8 := unbox x_1;
      let x_3 : tobj := gUInt8 x_2;
      ret x_3
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def gUInt8 : UInt8 → Nat
  | 2 => 1
  | _ => 3

/--
trace: [Compiler.IR] [result]
    def gChar (x_1 : u32) : tobj :=
      let x_2 : u32 := 97;
      let x_3 : u8 := Char.Internal.beq x_1 x_2;
      case x_3 : u8 of
      Bool.false →
        let x_4 : tagged := 3;
        ret x_4
      Bool.true →
        let x_5 : tagged := 1;
        ret x_5
    def gChar._boxed (x_1 : tobj) : tobj :=
      let x_2 : u32 := unbox x_1;
      dec x_1;
      let x_3 : tobj := gChar x_2;
      ret x_3
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def gChar : Char → Nat
  | 'a' => 1
  | _ => 3

/--
trace: [Compiler.IR] [result]
    def gString (x_1 : @& obj) : tobj :=
      let x_2 : obj := fString._closed_0;
      let x_3 : u8 := String.decEq x_1 x_2;
      case x_3 : u8 of
      Bool.false →
        let x_4 : tagged := 3;
        ret x_4
      Bool.true →
        let x_5 : tagged := 1;
        ret x_5
    def gString._boxed (x_1 : obj) : tobj :=
      let x_2 : tobj := gString x_1;
      dec x_1;
      ret x_2
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def gString : String → Nat
  | "a" => 1
  | _ => 3


/-- info: [1, 2, 3, 1, 2, 3, 1, 2, 3, 0, 1, 3, 42, 1, 2, 3] -/
#guard_msgs in
#eval [fNat 5, fNat 7, fNat 8, fInt (-3), fInt 4, fInt 0, fChar 'a', fChar 'z', fChar 'x',
  fArray #[], fArray #[1], fArray #[1, 2], fArray #[1, 2, 3], fString "a", fString "bc",
  fString "b"]
