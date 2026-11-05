/-
Copyright (c) 2026 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Sym.Simp.SimpM
import Lean.Meta.Sym.AlphaShareBuilder
import Lean.Meta.Sym.InferType
import Lean.Meta.Sym.Simp.App
import Lean.Meta.Sym.Simp.Result
import Lean.Meta.Sym.Util
import Lean.Meta.Sym.Reduce
import Lean.Meta.WHNF
import Lean.Meta.AppBuilder
import Init.Sym.Lemmas
namespace Lean.Meta.Sym.Simp
open Lean.Meta.Sym.Internal

/--
Simplifies a non-dependent `if-then-else` expression.
-/
def simpIte : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  bif numArgs <ᵇ 5 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 5) fun e => do
    let_expr f@ite α c inst a b := e | return .rfl
    -- **cd propagation**: `cd` from `simp c` is propagated to ALL branches.
    -- When `cd = true`, `simp c` might produce a different result in another context
    -- (e.g., a conditional rewrite could change `c`). This means the entire `ite`
    -- result might differ — even branches like `isTrueExpr c` that seem ground-determined,
    -- because in another context `simp c` might not return `.rfl` at all.
    match (← simp c) with
    | .rfl _ cd =>
      bif (← isTrueExpr c) then
        return .step a (mkApp4 (mkConst ``ite_true f.constLevels!) α inst a b) (contextDependent := cd)
      else bif (← isFalseExpr  c) then
        return .step b (mkApp4 (mkConst ``ite_false f.constLevels!) α inst a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      bif (← isTrueExpr c') then
        return .step a (mkApp (e.replaceFn ``ite_eq_left_of_eq_true) h) (contextDependent := cd)
      else bif (← isFalseExpr c') then
        return .step b (mkApp (e.replaceFn ``ite_eq_right_of_eq_false) h) (contextDependent := cd)
      else
        let .some inst' ← trySynthInstance (mkApp (mkConst ``Decidable) c') | return .rfl
        let inst' ← shareCommon inst'
        let e' := e.getBoundedAppFn 4
        let e' ← mkAppS₄ e' c' inst' a b
        let h' := mkApp3 (e.replaceFn ``Sym.ite_cond_congr) c' inst' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplifies a dependent `if-then-else` expression.
-/
def simpDIte : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  bif numArgs <ᵇ 5 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 5) fun e => do
    let_expr f@dite α c inst a b := e | return .rfl
    -- See `simpIte` for why `cd` is propagated to all branches.
    match (← simp c) with
    | .rfl _ cd =>
      bif (← isTrueExpr c) then
        let a' ← share <| a.betaRev #[mkConst ``True.intro]
        return .step a' (mkApp4 (mkConst ``dite_true f.constLevels!) α inst a b) (contextDependent := cd)
      else bif (← isFalseExpr c) then
        let b' ← share <| b.betaRev #[mkConst ``not_false]
        return .step b' (mkApp4 (mkConst ``dite_false f.constLevels!) α inst a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      bif (← isTrueExpr c') then
        let h' ← shareCommon <| mkOfEqTrueCore c h
        let a ← share <| a.betaRev #[h']
        return .step a (mkApp (e.replaceFn ``dite_eq_left_of_eq_true) h) (contextDependent := cd)
      else bif (← isFalseExpr c') then
        let h' ← shareCommon <| mkOfEqFalseCore c h
        let b ← share <| b.betaRev #[h']
        return .step b (mkApp (e.replaceFn ``dite_eq_right_of_eq_false) h) (contextDependent := cd)
      else
        let .some inst' ← trySynthInstance (mkApp (mkConst ``Decidable) c') | return .rfl
        let inst' ← shareCommon inst'
        let e' := e.getBoundedAppFn 4
        let h ← shareCommon h
        let a ← share <| mkLambda `h .default c' (a.betaRev #[mkApp4 (mkConst ``Eq.mpr_prop) c c' h (mkBVar 0)])
        let b ← share <| mkLambda `h .default (mkNot c') (b.betaRev #[mkApp4 (mkConst ``Eq.mpr_not) c c' h (mkBVar 0)])
        let e' ← mkAppS₄ e' c' inst' a b
        let h' := mkApp3 (e.replaceFn ``Sym.dite_cond_congr) c' inst' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplifies a `UDecidable.ite` expression. A rewritten condition `c'` gets the instance
`UDecidable.classical c'`, unless `fixUDecidableInsts` is set.
-/
def simpUIte : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  bif numArgs <ᵇ 5 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 5) fun e => do
    let_expr f@UDecidable.ite α c inst a b := e | return .rfl
    -- See `simpIte` for why `cd` is propagated to all branches.
    match (← simp c) with
    | .rfl _ cd =>
      bif (← isTrueExpr c) then
        return .step a (mkApp4 (mkConst ``UDecidable.ite_true f.constLevels!) inst α a b) (contextDependent := cd)
      else bif (← isFalseExpr c) then
        return .step b (mkApp4 (mkConst ``UDecidable.ite_false f.constLevels!) inst α a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      bif (← isTrueExpr c') then
        return .step a (mkApp (e.replaceFn ``UDecidable.ite_eq_left_of_eq_true) h) (contextDependent := cd)
      else bif (← isFalseExpr c') then
        return .step b (mkApp (e.replaceFn ``UDecidable.ite_eq_right_of_eq_false) h) (contextDependent := cd)
      else
        bif (← getConfig).fixUDecidableInsts then return .rfl
        let inst' ← shareCommon (mkApp (mkConst ``UDecidable.classical) c')
        let e' := e.getBoundedAppFn 4
        let e' ← mkAppS₄ e' c' inst' a b
        let h' := mkApp2 (e.replaceFn ``Sym.uite_cond_congr) c' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplifies a `UDecidable.dite` expression. See `simpUIte` for the instance of a rewritten condition.
-/
def simpUDIte : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  bif numArgs <ᵇ 5 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 5) fun e => do
    let_expr f@UDecidable.dite α c inst a b := e | return .rfl
    -- See `simpIte` for why `cd` is propagated to all branches.
    match (← simp c) with
    | .rfl _ cd =>
      bif (← isTrueExpr c) then
        let a' ← share <| a.betaRev #[mkConst ``trivial]
        return .step a' (mkApp4 (mkConst ``UDecidable.dite_true f.constLevels!) inst α a b) (contextDependent := cd)
      else bif (← isFalseExpr c) then
        let b' ← share <| b.betaRev #[mkApp (mkConst ``id [.zero]) (mkConst ``False)]
        return .step b' (mkApp4 (mkConst ``UDecidable.dite_false f.constLevels!) inst α a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      bif (← isTrueExpr c') then
        let h' ← shareCommon <| mkOfEqTrueCore c h
        let a ← share <| a.betaRev #[h']
        return .step a (mkApp (e.replaceFn ``Sym.udite_eq_left_of_eq_true) h) (contextDependent := cd)
      else bif (← isFalseExpr c') then
        let h' ← shareCommon <| mkOfEqFalseCore c h
        let b ← share <| b.betaRev #[h']
        return .step b (mkApp (e.replaceFn ``Sym.udite_eq_right_of_eq_false) h) (contextDependent := cd)
      else
        bif (← getConfig).fixUDecidableInsts then return .rfl
        let inst' ← shareCommon (mkApp (mkConst ``UDecidable.classical) c')
        let e' := e.getBoundedAppFn 4
        let h ← shareCommon h
        let a ← share <| mkLambda `h .default c' (a.betaRev #[mkApp4 (mkConst ``Eq.mpr_prop) c c' h (mkBVar 0)])
        let b ← share <| mkLambda `h .default (mkNot c') (b.betaRev #[mkApp4 (mkConst ``Eq.mpr_not) c c' h (mkBVar 0)])
        let e' ← mkAppS₄ e' c' inst' a b
        let h' := mkApp2 (e.replaceFn ``Sym.udite_cond_congr) c' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplifies a `cond` expression (aka Boolean `if-then-else`).
-/
public def simpCond : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  bif numArgs <ᵇ 4 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 4) fun e => do
    let_expr f@cond α c a b := e | return .rfl
    -- See `simpIte` for why `cd` is propagated to all branches.
    match (← simp c) with
    | .rfl _ cd =>
      bif isSameExpr c (← getBoolTrueExpr) then
        return .step a (mkApp3 (mkConst ``cond_true f.constLevels!) α a b) (contextDependent := cd)
      else bif isSameExpr c (← getBoolFalseExpr) then
        return .step b (mkApp3 (mkConst ``cond_false f.constLevels!) α a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      bif isSameExpr c' (← getBoolTrueExpr) then
        return .step a (mkApp (e.replaceFn ``Sym.cond_cond_eq_true) h) (contextDependent := cd)
      else bif isSameExpr c' (← getBoolFalseExpr) then
        return .step b (mkApp (e.replaceFn ``Sym.cond_cond_eq_false) h) (contextDependent := cd)
      else
        let e' := e.getBoundedAppFn 3
        let e' ← mkAppS₃ e' c' a b
        let h' := mkApp2 (e.replaceFn ``Sym.cond_cond_congr) c' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplifies a `Bool.dcond` expression (aka dependent Boolean `if-then-else`).
-/
public def simpDCond : Simproc := fun e => do
  let numArgs := e.getAppNumArgs
  bif numArgs <ᵇ 4 then return .rfl (done := true)
  propagateOverApplied e (numArgs - 4) fun e => do
    let_expr f@Bool.dcond α c a b := e | return .rfl
    -- See `simpIte` for why `cd` is propagated to all branches.
    let boolTrue ← getBoolTrueExpr
    let boolFalse ← getBoolFalseExpr
    match (← simp c) with
    | .rfl _ cd =>
      bif isSameExpr c boolTrue then
        let a' ← share <| a.betaRev #[mkApp2 (mkConst ``rfl [Level.one]) (mkConst ``Bool) c]
        return .step a' (mkApp3 (mkConst ``Bool.dcond_true f.constLevels!) α a b) (contextDependent := cd)
      else bif isSameExpr c boolFalse then
        let b' ← share <| b.betaRev #[mkApp2 (mkConst ``rfl [Level.one]) (mkConst ``Bool) c]
        return .step b' (mkApp3 (mkConst ``Bool.dcond_false f.constLevels!) α a b) (contextDependent := cd)
      else
        return mkRflResult (done := true) (contextDependent := cd)
    | .step c' h _ cd =>
      bif isSameExpr c' boolTrue then
        let h ← shareCommon h
        let a ← share <| a.betaRev #[h]
        return .step a (mkApp (e.replaceFn ``Sym.dcond_cond_eq_true) h) (contextDependent := cd)
      else bif isSameExpr c' boolFalse then
        let h ← shareCommon h
        let b ← share <| b.betaRev #[h]
        return .step b (mkApp (e.replaceFn ``Sym.dcond_cond_eq_false) h) (contextDependent := cd)
      else
        let e' := e.getBoundedAppFn 3
        let h ← shareCommon h
        let bool := mkConst ``Bool
        let trans (rhs : Expr) := mkApp6 (mkConst ``Eq.trans [Level.one]) bool c c' rhs h (mkBVar 0)
        let a ← share <| mkLambda `h .default (mkApp3 (mkConst ``Eq [Level.one]) bool c' boolTrue)
          (a.betaRev #[trans boolTrue])
        let b ← share <| mkLambda `h .default (mkApp3 (mkConst ``Eq [Level.one]) bool c' boolFalse)
          (b.betaRev #[trans boolFalse])
        let e' ← mkAppS₃ e' c' a b
        let h' := mkApp2 (e.replaceFn ``Sym.dcond_cond_congr) c' h
        return .step e' h' (done := true) (contextDependent := cd)

/--
Simplifies a `match`-expression.
-/
def simpMatch (declName : Name) : Simproc := fun e => do
  if let some e' ← reduceMatcherApp? e then
    return .step e' (← mkEqRefl e')
  let some info ← getMatcherInfo? declName
    | return .rfl
  -- **Note**: Simplify only the discriminants
  let start := info.numParams + 1
  let stop  := start + info.numDiscrs
  let r ← simpAppArgRange e start stop
  match r with
  | .step .. => return r
  | .rfl _ cd => return mkRflResult (done := true) (contextDependent := cd)

/--
Simplifies control-flow expressions such as `if-then-else` and `match` expressions.
It visits only the conditions and discriminants.
-/
public def simpControl : Simproc := fun e => do
  bif !e.isApp then return .rfl
  let .const declName _ := e.getAppFn | return .rfl
  bif declName == ``ite then
    simpIte e
  else bif declName == ``cond then
    simpCond e
  else bif declName == ``Bool.dcond then
    simpDCond e
  else bif declName == ``dite then
    simpDIte e
  else bif declName == ``UDecidable.ite then
    simpUIte e
  else bif declName == ``UDecidable.dite then
    simpUDIte e
  else
    simpMatch declName e

/--
Like `simpControl`, but does not block the simplifier: when the condition or the discriminants
are not decided, the branches are visited too.
-/
public def reduceControl : Simproc := fun e =>
  return (← simpControl e).markAsNotDone

end Lean.Meta.Sym.Simp
