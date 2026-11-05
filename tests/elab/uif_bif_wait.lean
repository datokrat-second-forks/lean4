import Lean
import Std.Tactic.BVDecide

/-!
Tests that `uif`/`uif h :` (terms and `do` elements) wait until the type of their condition is
known, like `if` (ADR-50, ADR-53): a condition whose type is still a metavariable (a `fun` binder
typed by a later argument) no longer fails with `failed to synthesize UDecidable`. `bif`/`bif h :`
don't wait, since the expected type `Bool` fixes such a condition; they must not leave `save_info`
annotations in statements with auto-bound conditions (`bv_decide` rewrites them with `Sym.simp`).
Also checks the coercions of the condition (`Bool` to `Prop` for `uif`, `Prop` to `Bool` for `bif`).
-/

/-! ## Terms -/

def uifLate (xs : List Bool) : List Nat :=
  xs.map fun b => uif b then 1 else 0

#guard uifLate [true, false] == [1, 0]

def uifDepLate (xs : List Bool) : List Nat :=
  xs.map fun b => uif h : b then (have : b = true := h; 1) else 0

#guard uifDepLate [true, false] == [1, 0]

def bifLate (xs : List Bool) : List Nat :=
  xs.map fun b => bif b then 1 else 0

#guard bifLate [true, false] == [1, 0]

def bifDepLate (xs : List Bool) : List Nat :=
  xs.map fun b => bif h : b then (have : b = true := h; 1) else 0

#guard bifDepLate [true, false] == [1, 0]

/-! ## `do` elements -/

def doUifLate (xs : List Bool) : IO Nat := do
  let rs ← xs.mapM fun b => do
    uif b then
      return 1
    return 0
  return rs.sum

/-- info: 2 -/
#guard_msgs in
#eval doUifLate [true, false, true]

def doUifDepLate (xs : List Bool) : IO Nat := do
  let rs ← xs.mapM fun b => do
    uif h : b then
      have : b = true := h
      return 1
    return 0
  return rs.sum

/-- info: 1 -/
#guard_msgs in
#eval doUifDepLate [true, false]

def doBifLate (xs : List Bool) : IO Nat := do
  let rs ← xs.mapM fun b => do
    bif b then
      return 1
    else bif !b then
      return 0
    return 2
  return rs.sum

/-- info: 2 -/
#guard_msgs in
#eval doBifLate [true, false, true]

def doBifDepLate (xs : List Bool) : IO Nat := do
  let rs ← xs.mapM fun b => do
    bif h : b then
      have : b = true := h
      return 1
    return 0
  return rs.sum

/-- info: 1 -/
#guard_msgs in
#eval doBifDepLate [true, false]

/-! ## Coercions of the condition -/

/-- `bif` on a proposition coerces it through `UDecidable.decide`. -/
def bifProp (n : Nat) : Nat := bif n < 3 then 1 else 0

/--
info: def bifProp : Nat → Nat :=
fun n => bif UDecidable.decide (n < 3) then 1 else 0
-/
#guard_msgs in
#print bifProp

#guard bifProp 2 == 1 && bifProp 5 == 0

/-- `uif` on a `Bool` coerces it to `b = true`. -/
def uifBool (b : Bool) : Nat := uif b then 1 else 0

/--
info: def uifBool : Bool → Nat :=
fun b => uif b = true then 1 else 0
-/
#guard_msgs in
#print uifBool

/-- `bif h :` on a proposition: `h : decide p = true`. -/
def bifDepProp (n : Nat) : Nat := bif h : n < 3 then (have : UDecidable.decide (n < 3) = true := h; 1) else 0

#guard bifDepProp 1 == 1

/-- `bif` in `do` with a nested action. -/
def doBifLift (p : Nat → IO Bool) : IO Nat := do
  bif (← p 1) then return 1
  return 0

/-- info: 1 -/
#guard_msgs in
#eval doBifLift fun _ => pure true

/-! ## Expected type of the branches -/

def bifBranches (b : Bool) : Option Nat := bif b then .some 1 else .none

#guard bifBranches true == some 1

/-! ## Dot notation in the condition -/

def bifDot : Nat := bif .true then 1 else 0

#guard bifDot == 1

/-! ## No `save_info` annotations in statements with auto-bound conditions -/

theorem toBitVec_bif : UInt16.toBitVec (bif c then t else e) = bif c then t.toBitVec else e.toBitVec := by
  cases c <;> rfl

open Lean Meta Elab Term in
#eval show MetaM Unit from do
  let ty := (← getConstInfo ``toBitVec_bif).type
  unless (ty.find? fun e => (isSaveInfoAnnotation? e).isSome).isNone do
    throwError "`save_info` annotation in {ty}"

example (c : Bool) (a b d : UInt16) (h : a < d) (h2 : b < d) : (bif c then a else b) < d := by
  bv_decide
