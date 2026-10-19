/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Meta.WHNF
import Lean.AddDecl
import Lean.Meta.AppBuilder
import Lean.ReducibilityAttrs
import Lean.ReservedNameAction

public section

/-!
Generates the casts `D.castFold`, `D.castUnfold` and `T.castCongr` on first use (see "Generated
casts" in `Lean.Meta.WHNF`).
-/

namespace Lean.Meta

/-- Returns `D.castFold`, or `D.castUnfold` if `unfold`, generating it if necessary. -/
def realizeCastFold (D : Name) (unfold : Bool) : MetaM Name := do
  let name := D.str (if unfold then castUnfoldSuffix else castFoldSuffix)
  let fail {α} (msg : MessageData) : MetaM α :=
    throwError "cannot generate the casts of `{.ofConstName D}`: {msg}"
  let some (.defnInfo info) := (← getEnv).find? D | fail "it is not a definition"
  unless (← getReducibilityStatus D) matches .semireducible do
    fail "it is not a semireducible definition"
  unless (← forallTelescope info.type fun _ b => return (← whnfD b).isSort) do
    fail "its value is not a type"
  realizeConst D name do
    let lvls := info.levelParams.map mkLevelParam
    let (type, value) ← forallTelescope info.type fun xs s => do
      let .sort u ← whnfD s | unreachable!
      let lhs := mkAppN (mkConst D lvls) xs
      let rhs := info.value.beta xs
      let (src, tgt) := if unfold then (lhs, rhs) else (rhs, lhs)
      let proof := mkApp2 (mkConst ``Eq.refl [u.succ]) (mkSort u) src
      withNewBinderInfos (xs.map (·.fvarId!, .implicit)) do
        return (← mkForallFVars xs (mkApp2 (mkConst ``Cast [u]) src tgt),
          ← mkLambdaFVars xs (mkApp3 (mkConst ``Cast.mk [u]) src tgt proof))
    addDecl <| .defnDecl {
      name, type, value, levelParams := info.levelParams, hints := .abbrev, safety := .safe }
    setReducibilityStatus name .implicitReducible
    modifyEnv (castConstsExt.insert · name (if unfold then .unfold else .fold))
  return name

private def withCastCongrBindersAux (ps : Array Expr) (kinds : Array Bool)
    (k : Array Expr → CastSubst → Array Expr → MetaM α) (i : Nat) (binders casts : Array Expr)
    (s : CastSubst) : MetaM α := do
  if h : i < ps.size then
    let p := ps[i]
    if kinds[i]! then
      let type ← inferType p
      let .sort u := type | throwError "unexpected type of a type parameter{indentExpr type}"
      let n ← p.fvarId!.getUserName
      withLocalDecl (n.appendAfter "'") .implicit type fun p' =>
      withLocalDecl (n.appendBefore "c") .default (mkApp2 (mkConst ``Cast [u]) p p') fun c =>
        withCastCongrBindersAux ps kinds k (i + 1) (binders.push p |>.push p') (casts.push c)
          (s.push p p p' c)
    else
      withCastCongrBindersAux ps kinds k (i + 1) (binders.push p) casts (s.push p p p)
  else
    withNewBinderInfos (ps.map (·.fvarId!, .implicit)) do
      k binders s casts
termination_by ps.size - i

/--
Opens the binders of `T.castCongr`: the parameters of `T`, with a target for each type parameter,
and a cast for each type parameter. Calls `k` with the binders, the substitution of the parameters,
and the casts.
-/
private def withCastCongrBinders (T : Name) (k : Array Expr → CastSubst → Array Expr → MetaM α) :
    MetaM α := do
  let info ← getConstInfoInduct T
  let kinds ← castCongrTypeParams T
  forallBoundedTelescope info.type info.numParams fun ps _ =>
    withCastCongrBindersAux ps kinds k 0 #[] #[] {}

/-- Returns `T.castCongr`, generating it if necessary. -/
partial def realizeCastCongr (T : Name) : MetaM Name := do
  let name := T.str castCongrSuffix
  let fail {α} (msg : MessageData) : MetaM α :=
    throwError "cannot generate the congruence of `{.ofConstName T}`: {msg}"
  let some (.inductInfo info) := (← getEnv).find? T | fail "it is not an inductive type"
  if (← forallTelescope info.type fun _ b => return (← whnfD b).isProp) then
    fail "propositions are cast with `cast`"
  unless info.numIndices == 0 do fail "it has indices"
  unless info.all.length == 1 do fail "mutual inductive types are not supported"
  unless (← castCongrTypeParams T).contains true do fail "it has no type parameters"
  forallBoundedTelescope info.type info.numParams fun ps _ => do
    for p in ps do
      if (← inferType p).hasAnyFVar (fun f => ps.contains (.fvar f)) then
        fail m!"the type of parameter `{← p.fvarId!.getUserName}` depends on another parameter"
  -- Every field of every constructor needs a cast composed from its type.
  let congrAvailable (S : Name) : MetaM Bool := do
    if S == T then return true
    try
      discard <| realizeCastCongr S
      return true
    catch _ => return false
  withCastCongrBinders T fun _ s _ => do
    for ctorName in info.ctors do
      let ctorVal ← getConstInfoCtor ctorName
      let ctorType ← instantiateForall ctorVal.type (s.params.extract 0 info.numParams)
      forallTelescope ctorType fun fs _ => do
        let mut s := s
        for f in fs do
          let τ ← inferType f
          if (← isProp τ) then
            s := s.push f f f
            continue
          let c? ← tryCatch (composeCast s congrAvailable τ) fun _ => do
            fail m!"cannot compose a cast for field `{← f.fvarId!.getUserName}` of type{indentExpr τ}"
          s := s.push f f f
          if c?.isSome then s := { s with blocked := s.blocked.insert f.fvarId! }
  realizeConst T name do
    let lvls := info.levelParams.map mkLevelParam
    let (type, value) ← withCastCongrBinders T fun binders s casts => do
      let params := s.params.extract 0 info.numParams
      let src := mkAppN (mkConst T lvls) params
      let tgt := mkAppN (mkConst T lvls) (params.map (·.replaceFVars s.params s.tgt))
      let u ← getLevel src
      let mut proof ← mkEqRefl (mkConst T lvls)
      for p in params do
        if let some c := s.casts.get? p.fvarId! then
          proof ← mkCongr proof (← mkAppM ``Cast.eq #[c])
        else
          proof ← mkCongrFun proof p
      return (← mkForallFVars (binders ++ casts) (mkApp2 (mkConst ``Cast [u]) src tgt),
        ← mkLambdaFVars (binders ++ casts) (mkApp3 (mkConst ``Cast.mk [u]) src tgt proof))
    addDecl <| .defnDecl {
      name, type, value, levelParams := info.levelParams, hints := .abbrev, safety := .safe }
    setReducibilityStatus name .implicitReducible
    modifyEnv (castConstsExt.insert · name (.congr ((← castCongrTypeParams T).filter id).size))
  return name

builtin_initialize registerReservedNamePredicate fun env n =>
  match n with
  | .str p s =>
    (s == castCongrSuffix && (env.find? p).any (·.isInductive)) ||
      ((s == castFoldSuffix || s == castUnfoldSuffix) && (env.find? p).any (·.isDefinition))
  | _ => false

builtin_initialize registerReservedNameAction fun name => do
  let .str p s := name | return false
  let some info := (← getEnv).find? p | return false
  if s == castCongrSuffix && info.isInductive then
    discard <| MetaM.run' <| realizeCastCongr p
    return true
  else if (s == castFoldSuffix || s == castUnfoldSuffix) && info.isDefinition then
    discard <| MetaM.run' <| realizeCastFold p (unfold := s == castUnfoldSuffix)
    return true
  else
    return false

end Lean.Meta
