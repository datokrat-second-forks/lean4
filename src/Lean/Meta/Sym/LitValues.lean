/-
Copyright (c) 2026 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Expr
public import Init.Data.Rat
public section
namespace Lean.Meta.Sym
/-!
Pure functions for extracting values. They are pure (`Option`) rather than monadic (`MetaM`).
This is possible because `Sym` assumes terms are in canonical form, no `whnf` or
reduction is needed to recognize literals.
-/
def getNatValue? (e : Expr) : Option Nat := do
  let_expr OfNat.ofNat _ n _ := e | failure
  let .lit (.natVal n) := n | failure
  return n

def getIntValue? (e : Expr) : Option Int := do
  let_expr Neg.neg _ _ a := e | getNatValue? e
  let v : Int ← getNatValue? a
  return -v

def getRatValue? (e : Expr) : Option Rat := do
  let_expr HDiv.hDiv _ _ _ _ n d := e | getIntValue? e
  let n : Rat ← getIntValue? n
  let d : Rat ← getNatValue? d
  return n / d

structure BitVecValue where
  n : Nat
  val : BitVec n

def getBitVecValue? (e : Expr) : Option BitVecValue :=
  match_expr e with
  | BitVec.ofNat nExpr vExpr => do
    let n ← getNatValue? nExpr
    let v ← getNatValue? vExpr
    return ⟨n, BitVec.ofNat n v⟩
  | BitVec.ofNatLT nExpr vExpr _ => do
    let n ← getNatValue? nExpr
    let v ← getNatValue? vExpr
    return ⟨n, BitVec.ofNat n v⟩
  | OfNat.ofNat α v _ => do
    let_expr BitVec n := α | failure
    let n ← getNatValue? n
    let .lit (.natVal v) := v | failure
    return ⟨n, BitVec.ofNat n v⟩
  | _ => failure

def getUInt8Value? (e : Expr) : Option UInt8 := return UInt8.ofNat (← getNatValue? e)
def getUInt16Value? (e : Expr) : Option UInt16 := return UInt16.ofNat (← getNatValue? e)
def getUInt32Value? (e : Expr) : Option UInt32 := return UInt32.ofNat (← getNatValue? e)
def getUInt64Value? (e : Expr) : Option UInt64 := return UInt64.ofNat (← getNatValue? e)
def getInt8Value? (e : Expr) : Option Int8 := return Int8.ofInt (← getIntValue? e)
def getInt16Value? (e : Expr) : Option Int16 := return Int16.ofInt (← getIntValue? e)
def getInt32Value? (e : Expr) : Option Int32 := return Int32.ofInt (← getIntValue? e)
def getInt64Value? (e : Expr) : Option Int64 := return Int64.ofInt (← getIntValue? e)

structure FinValue where
  n : Nat
  val : Fin n

def getFinValue? (e : Expr) : Option FinValue := do
  let_expr OfNat.ofNat α v _ := e | failure
  let_expr Fin n := α | failure
  let n ← getNatValue? n
  let .lit (.natVal v) := v | failure
  if h : n = 0 then failure else
  let : NeZero n := ⟨h⟩
  return { n, val := Fin.ofNat n v }

def getCharValue? (e : Expr) : Option Char := do
  let_expr Char.ofNat n := e | failure
  let .lit (.natVal n) := n | failure
  return Char.ofNat n

def getStringValue? (e : Expr) : Option String :=
  match e with
  | .lit (.strVal s) => some s
  | _ => none

def getBoolValue? (e : Expr) : Option Bool := do
  match e with
  | .const ``Bool.true [] => return Bool.true
  | .const ``Bool.false [] => return Bool.false
  | _ => failure

end Lean.Meta.Sym
