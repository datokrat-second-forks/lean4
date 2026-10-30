/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Różowski
-/
module

prelude
import Lean.Meta.Sym.Simp.SimpM
import Lean.Meta.Sym.LitValues
import Lean.Meta.Sym.InferType
import Init.CbvSimproc
import Lean.Meta.Tactic.Cbv.CbvSimproc
import Lean.Meta.Tactic.Cbv.Util
import Init.GetElem
import Lean.Meta.AppBuilder

namespace Lean.Meta.Tactic.Cbv

/-- Extract elements from an array literal (`Array.mk` applied to a list literal). -/
def getArrayLitElems? (e : Expr) : Option <| Array Expr :=
  match_expr e with
  | Array.mk _ as => getListLitElems as
  | _ => none

/-- Reduce `#[...][n]` for literal arrays and literal `Nat` indices. -/
builtin_cbv_simproc cbv_eval simpArrayGetElem (@GetElem.getElem (Array _) Nat _ _ _ _ _ _) := fun e => do
  let_expr GetElem.getElem _ _ _ _ _ xs n _ := e | return .rfl
  let some elems := getArrayLitElems? xs | return .rfl
  let some idx := Sym.getNatValue? n | return .rfl
  if h : idx < elems.size then
    let result := elems[idx]
    return .step result (← Sym.mkEqRefl result)
  else
    return .rfl

/-- Reduce `#[...][n]?` for literal arrays and literal `Nat` indices. -/
builtin_cbv_simproc cbv_eval simpArrayGetElem? (@GetElem?.getElem? (Array _) Nat _ _ _ _ _) := fun e => do
  let_expr GetElem?.getElem? coll idxTy α valid inst xs n := e | return .rfl
  let some elems := getArrayLitElems? xs | return .rfl
  let some idx := Sym.getNatValue? n | return .rfl
  let sortLevel ← Sym.getLevel α
  let .succ u := sortLevel | return .rfl
  -- `xs[n]?` does not reduce definitionally, because `Array`'s `getElem?` decides the bound with
  -- `UDecidable`. The bound itself is checked with `Nat.ble`, which the kernel evaluates.
  let size := mkApp2 (mkConst ``Array.size [u]) α xs
  let bleTrue (a b : Expr) : MetaM Expr := do
    mkAppOptM ``Nat.le_of_ble_eq_true #[some a, some b, some (← mkEqRefl (mkConst ``Bool.true))]
  if h : idx < elems.size then
    let hlt ← bleTrue (mkNatAdd n (mkNatLit 1)) size
    let proof ← mkAppOptM ``getElem?_pos
      #[some coll, some idxTy, some α, some valid, some inst, none, some xs, some n, some hlt]
    let result ← Sym.share <| mkApp2 (mkConst ``Option.some [u]) α elems[idx]
    return .step result proof
  else
    let hge ← bleTrue size n
    let hnlt ← mkAppM ``Nat.not_lt_of_le #[hge]
    let proof ← mkAppOptM ``getElem?_neg
      #[some coll, some idxTy, some α, some valid, some inst, none, some xs, some n, some hnlt]
    let result ← Sym.share <| mkApp (mkConst ``Option.none [u]) α
    return .step result proof

end Lean.Meta.Tactic.Cbv
