/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Meta.Basic
public import Lean.Meta.VirtualStructure
import Lean.Meta.WHNF
import Lean.Structure
import Lean.ProjFns

public section

namespace Lean.Meta.OneFieldStructure

inductive OneFieldStructureInfo where
  | realStructure : ConstructorVal → OneFieldStructureInfo
  | virtualStructure : VirtualStructureInfo → OneFieldStructureInfo

/--
A one-field-structure or newtype constructor or projection, together with
a choice of parameters and universe levels for the underlying structure.
-/
structure Bijection where
  isCtor : Bool
  structureInfo : OneFieldStructureInfo
  us : List Level
  params : Array Expr

def Bijection.inv (b : Bijection) : Bijection :=
  { b with isCtor := !b.isCtor }

protected def Bijection.mkApp (b : Bijection) (e : Expr) : MetaM Expr :=
  match b.isCtor, b.structureInfo with
  | true, .realStructure ctorVal =>
    return mkApp (mkAppN (mkConst ctorVal.name b.us) b.params) e
  | false, .realStructure ctorVal =>
    mkProjFn ctorVal b.us b.params 0 e
  | true, .virtualStructure structureInfo =>
    return mkApp (mkAppN (mkConst structureInfo.ctorName b.us) b.params) e
  | false, .virtualStructure structureInfo =>
    return mkApp (mkAppN (mkConst structureInfo.projName b.us) b.params) e

/--
Given a bijection `b` and an expression `e`, return `x` if `e` syntactically matches `b x`.
Returns none if the bijection's parameters don't match syntactically.

If `e` is a `.proj` expression, we WHNF its inferred type, to expose the structure's parameters,
and only then do we compare them syntactically.
We might want to make the check less syntactical in the future, but this seems
fine for now. A definitional equality check might be too lenient, so that
`Bijection.mkAppAndSimplify` would cancel too much, and it is more expensive.
-/
private def Bijection.unapply? (b : Bijection) (e : Expr) : MetaM (Option Expr) := do
  if e.isApp then
    let x := e.appArg!
    return if (← b.mkApp x) == e then some x else none
  else if let .proj structName 0 x := e then
    let .realStructure ctorVal := b.structureInfo
      | return none
    if !b.isCtor && structName == ctorVal.induct then
      let xType ← whnfD (← inferType x)
      if xType == mkAppN (mkConst ctorVal.induct b.us) b.params then
        return some x
    return none
  else
    return none

/-- Apply `b` to `e`, and if the result is `b (b⁻¹ x)`, simplify it to `x`. -/
protected def Bijection.mkAppAndSimplify (b : Bijection) (e : Expr) : MetaM Expr := do
  if let some x ← b.inv.unapply? e then return x
  b.mkApp e

private def buildOneFieldStructureBijection? (isCtor : Bool) (structName : Name) (us : List Level)
    (params : Array Expr) :
    MetaM (Option Bijection) := do
  let env ← getEnv
  if let some ctorVal := getNonRecStructureCtor? env structName then
    if ctorVal.numFields ≠ 1 then return none
    return some { isCtor, structureInfo := .realStructure ctorVal, us, params }
  else
    return none

structure BijectionWrappedFVar where
  fvarId : FVarId
  bijectionsInsideOut : List Bijection

/--
Parses a tower of one-field-structure constructor and projection applications around an fvar
into a `BijectionWrappedFVar` object or returns `none` if parsing fails.
-/
partial def bijectionWrappedFVar? (e : Expr) (outer : List Bijection := []) :
    MetaM (Option BijectionWrappedFVar) := do
  let e := e.consumeMData
  match e with
  | .fvar x =>
    return some ⟨x, outer⟩
  | .proj structName 0 x =>
    let xType ← whnfD (← inferType x)
    let .const _ us := xType.getAppFn | return none
    let some b ← buildOneFieldStructureBijection? (isCtor := false) structName us xType.getAppArgs
      | return none
    bijectionWrappedFVar? x (b :: outer)
  | .app .. =>
    let .const declName us := e.getAppFn | return none
    let args := e.getAppArgs
    let env ← getEnv
    if let some projInfo := env.getProjectionFnInfo? declName then
      let some ctorVal ← isCtor? projInfo.ctorName | return none
      if args.size ≠ ctorVal.numParams + 1 then return none
      let params := args.extract 0 ctorVal.numParams
      let x := args[ctorVal.numParams]!
      let some b ← buildOneFieldStructureBijection? (isCtor := false) ctorVal.induct us params
        | return none
      bijectionWrappedFVar? x (b :: outer)
    else if let some ctorVal ← isCtor? declName then
      if args.size ≠ ctorVal.numParams + 1 then return none
      let params := args.extract 0 ctorVal.numParams
      let x := args[ctorVal.numParams]!
      let some b ← buildOneFieldStructureBijection? (isCtor := true) ctorVal.induct us params
        | return none
      bijectionWrappedFVar? x (b :: outer)
    else if let some info := env.getVirtualProjInfo? declName then
      if args.size ≠ info.numParams + 1 then return none
      let params := args.extract 0 info.numParams
      let x := args[info.numParams]!
      let b := { isCtor := false, structureInfo := .virtualStructure info, us := us, params := params }
      bijectionWrappedFVar? x (b :: outer)
    else if let some info := env.getVirtualCtorInfo? declName then
      if args.size ≠ info.numParams + 1 then return none
      let params := args.extract 0 info.numParams
      let x := args[info.numParams]!
      let b := { isCtor := true, structureInfo := .virtualStructure info, us := us, params := params }
      bijectionWrappedFVar? x (b :: outer)
    else
      return none
  | _ =>
    return none

end Lean.Meta.OneFieldStructure
