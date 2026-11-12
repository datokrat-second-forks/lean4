/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Util.Recognizers
public import Lean.Util.CollectMVars
public import Lean.Meta.Basic
import Lean.Meta.ExprDefEq
import Lean.Structure
import Lean.Meta.FunInfo
import Lean.Meta.Transform

public section

namespace Lean.Meta

/--
  Data for user-defined theorems marked with the `congr` attribute.

  This type should be confused with `CongrTheorem` which represents different kinds of automatically
  generated congruence theorems. The `simp` tactic also uses some of them.
-/
structure SimpCongrTheorem where
  theoremName   : Name
  funName       : Name
  hypothesesPos : Array Nat
  priority      : Nat
deriving Inhabited, Repr

structure SimpCongrTheorems where
  lemmas : SMap Name (List SimpCongrTheorem) := {}
  deriving Inhabited, Repr

def SimpCongrTheorems.get (d : SimpCongrTheorems) (declName : Name) : List SimpCongrTheorem :=
  match d.lemmas.find? declName with
  | none    => []
  | some cs => cs

def addSimpCongrTheoremEntry (d : SimpCongrTheorems) (e : SimpCongrTheorem) : SimpCongrTheorems :=
  { d with lemmas :=
      match d.lemmas.find? e.funName with
      | none    => d.lemmas.insert e.funName [e]
      | some es => d.lemmas.insert e.funName <| insert es }
where
  insert : List SimpCongrTheorem → List SimpCongrTheorem
    | []     => [e]
    | e'::es => if e.priority ≥ e'.priority then e::e'::es else e' :: insert es

builtin_initialize congrExtension : SimpleScopedEnvExtension SimpCongrTheorem SimpCongrTheorems ←
  registerSimpleScopedEnvExtension {
    initial        := {}
    addEntry       := addSimpCongrTheoremEntry
    finalizeImport := fun s => { s with lemmas := s.lemmas.switch }
  }

/--
If `e` reduces at reducible transparency to an application `S.mk ps fs` of the constructor of a
structure `S` that is not a class, returns the constructor, its universe levels and the arguments
`ps ++ fs`. Such a structure serves as a *pack* in pack hypotheses of congruence theorems.
-/
def packCtorApp? (e : Expr) : MetaM (Option (ConstructorVal × List Level × Array Expr)) := do
  let e ← whnfR e
  let .const c us := e.getAppFn | return none
  let env ← getEnv
  let some (.ctorInfo ci) := env.find? c | return none
  unless isStructure env ci.induct && !isClass env ci.induct do return none
  let args := e.getAppArgs
  unless args.size == ci.numParams + ci.numFields do return none
  return some (ci, us, args)

/--
The fields of the pack value `s : S ps`: the constructor arguments if `s` reduces to a constructor
application, otherwise the projections of `s`.
-/
def packFields (ci : ConstructorVal) (us : List Level) (params : Array Expr) (s : Expr) :
    MetaM (Array Expr) := do
  if let some (ci', _, args) ← packCtorApp? s then
    if ci'.name == ci.name then return args.extract ci.numParams args.size
  let env ← getEnv
  (getStructureFields env ci.induct).mapM fun f => do
    let some projFn := getProjFnForField? env ci.induct f
      | throwError "Structure `{.ofConstName ci.induct}` has no projection for field `{f}`"
    return mkAppN (mkConst projFn us) (params.push s)

/--
Whether every instance argument in `e` has its expected type at `.instances` transparency, treating
the metavariables of `e` as constants.
-/
def instancesConsistent (e : Expr) : MetaM Bool := withNewMCtxDepth do
  let ok ← IO.mkRef true
  discard <| Meta.transform e (post := fun e => do
    if e.isApp then
      let f := e.getAppFn
      let args := e.getAppArgs
      let infos := (← getFunInfoNArgs f args.size).paramInfo
      let fType ← inferType f
      for h : j in [:infos.size] do
        unless infos[j].isInstance do continue
        let .forallE _ d _ _ ← whnf (← instantiateForall fType (args.extract 0 j)) | continue
        unless (← withExactInstancesConfig <| isDefEqGuarded (← inferType args[j]!) d) do
          ok.set false
    return .continue)
  ok.get

/--
Whether the hypothesis type `hType` of a congruence theorem is a pack hypothesis (see
`mkSimpCongrTheorem`).
-/
def isPackHypothesis (hType : Expr) : Bool :=
  let hType := hType.getForallBody
  hType.isEq && !hType.appArg!.getAppFn.isMVar

/--
Checks the congruence theorem `declName`. Besides the hypotheses `a = a'` described at `congr`, it may
have *pack hypotheses* `p = S.mk ps fs'`, where `S` is a structure that is not a class, the parameters
`fs'` are new, and `p` is a value of `S`, typically `S.mk ps fs` for arguments `fs` that depend on
each other. A pack hypothesis of a `dsimp_congr` theorem may be under binders,
`∀ ys, p = S.mk ps (fs' ys)`, for packs of families. If `allowHEq` holds (for `dsimp_congr`), it may also have hypotheses `HEq a a'` for new
parameters `a'`, possibly under binders (`∀ ys, HEq a (a' zs)` for bound variables `zs`), and the
conclusion may be `HEq lhs rhs`.
-/
def mkSimpCongrTheorem (declName : Name) (prio : Nat) (allowHEq := false) :
    MetaM SimpCongrTheorem := withReducible do
  let c ← mkConstWithLevelParams declName
  let (xs, bis, type) ← forallMetaTelescopeReducing (← inferType c)
  let sides? := type.eqOrIff? <|>
    if allowHEq then type.heq?.map fun (_, lhs, _, rhs) => (lhs, rhs) else none
  match sides? with
  | none =>
    if type.isHEq then
      throwError "Invalid `congr` theorem: The conclusion is an `HEq`, which only `dsimp_congr` theorems support{indentExpr type}"
    throwError "Invalid `congr` theorem: Theorem is not an equality or iff{indentExpr type}"
  | some (lhs, rhs) =>
    lhs.withApp fun lhsFn lhsArgs => rhs.withApp fun rhsFn rhsArgs => do
      unless lhsFn.isConst && rhsFn.isConst && lhsFn.constName! == rhsFn.constName! && lhsArgs.size == rhsArgs.size do
        throwError "Invalid `congr` theorem: The left- and right-hand sides of the equality are not applications of the same function{indentExpr type}"
      let mut foundMVars : MVarIdSet := {}
      for lhsArg in lhsArgs do
        for mvarId in (lhsArg.collectMVars {}).result do
          foundMVars := foundMVars.insert mvarId
      let mut i : Nat := 0
      let mut hypothesesPos := #[]
      for x in xs, bi in bis do
        if bi.isExplicit && !foundMVars.contains x.mvarId! then
          let rhsFn? ← forallTelescopeReducing (← inferType x) fun ys xType => do
            if let some (_, xLhs, _, xRhs) := xType.heq? then
              unless allowHEq do
                throwError "Invalid `congr` theorem: Parameter #{i+1} is an `HEq` hypothesis, which only `dsimp_congr` theorems support{indentExpr xType}"
              let xRhsFn := xRhs.getAppFn
              unless onlyMVarsAt xLhs foundMVars && xRhsFn.isMVar &&
                  !foundMVars.contains xRhsFn.mvarId! &&
                  xRhs.getAppArgs.all (fun a => a.isFVar && ys.contains a) &&
                  (← ys.allM fun y => return onlyMVarsAt (← inferType y) foundMVars) do
                throwError "Invalid `congr` theorem: Parameter #{i+1} is not a valid `HEq` hypothesis, which must have the form `HEq a a'` or `∀ ys, HEq a (a' zs)` with a new parameter `a'` and bound variables `zs`{indentExpr xType}"
              return some (#[xRhsFn.mvarId!], true)
            match xType.eqOrIff? with
            | none => pure none -- skip
            | some (xLhs, xRhs) =>
              if xType.isEq && !xRhs.getAppFn.isMVar then
                if let some (ci, _, rArgs) ← packCtorApp? xRhs then
                  let params := rArgs.extract 0 ci.numParams
                  let fields := rArgs.extract ci.numParams rArgs.size
                  -- Under binders `ys` (`dsimp_congr` only), each new parameter is applied to `ys`.
                  let heads := fields.map (·.getAppFn)
                  unless (ys.isEmpty || allowHEq) && fields.all (·.getAppArgs == ys) &&
                      onlyMVarsAt xLhs foundMVars &&
                      params.all (onlyMVarsAt · foundMVars) &&
                      heads.all (fun f => f.isMVar && !foundMVars.contains f.mvarId!) &&
                      (heads.map (·.mvarId!)).toList.eraseDups.length == fields.size do
                    throwError "Invalid `congr` theorem: Parameter #{i+1} is not a valid pack hypothesis, which must have the form `p = S.mk ps fs'` with new parameters `fs'`{indentExpr xType}"
                  return some (heads.map (·.mvarId!), true)
              let mut j : Nat := 0
              for y in ys do
                let yType ← inferType y
                unless onlyMVarsAt yType foundMVars do
                  throwError "Invalid `congr` theorem: Argument #{j+1} of parameter #{i+1} contains unresolved parameter{indentExpr yType}"
                j := j + 1
              unless onlyMVarsAt xLhs foundMVars do
                throwError "Invalid `congr` theorem: Parameter #{i+1} is not a valid hypothesis because its left-hand side contains unresolved parameters{indentExpr xLhs}"
              let xRhsFn := xRhs.getAppFn
              unless xRhsFn.isMVar do
                throwError "Invalid `congr` theorem: Parameter #{i+1} is not a valid hypothesis because its right-hand side head is not a metavariable{indentExpr xRhs}"
              unless !foundMVars.contains xRhsFn.mvarId! do
                throwError "Invalid `congr` theorem: Parameter #{i+1} is not a valid hypothesis because its right-hand side head was already resolved{indentExpr xRhs}"
              for arg in xRhs.getAppArgs do
                unless arg.isFVar do
                  throwError "Invalid `congr` theorem: Parameter #{i+1} is not a valid hypothesis because its right-hand side argument is not a local variable{indentExpr xRhs}"
              pure (some (#[xRhsFn.mvarId!], false))
          match rhsFn? with
          | none       => pure ()
          | some (outs, _) =>
            foundMVars    := outs.foldl (·.insert ·) (foundMVars.insert x.mvarId!)
            hypothesesPos := hypothesesPos.push i
        i := i + 1
      return {
        theoremName   := declName
        funName       := lhsFn.constName!
        hypothesesPos := hypothesesPos
        priority      := prio
      }
where
  /-- Return `true` if `t` contains a metavariable that is not in `mvarSet` -/
  onlyMVarsAt (t : Expr) (mvarSet : MVarIdSet) : Bool :=
    Option.isNone <| t.find? fun e => e.isMVar && !mvarSet.contains e.mvarId!

register_builtin_option debug.simp.congr.allowHEq : Bool := {
    defValue := false
    descr    := "(simp) DEBUG: allow `HEq` hypotheses and conclusions in `congr` theorems"
  }

def addSimpCongrTheorem (declName : Name) (attrKind : AttributeKind) (prio : Nat) : MetaM Unit := do
  let lemma ← mkSimpCongrTheorem declName prio (allowHEq := debug.simp.congr.allowHEq.get (← getOptions))
  congrExtension.add lemma attrKind

/--
Registers `simp` congruence lemmas.

A `simp` congruence lemma should prove the equality of two applications of the same function from
the equality of the individual arguments. They are used by `simp` to visit subexpressions of an
application where the default congruence algorithm fails. This is particularly important for
functions where some parameters depend on previous parameters.

Congruence lemmas should have an equality for every parameter, possibly bounded by foralls, with
the right hand side being an application of a parameter on the right-hand side. When applying
congruence theorems, `simp` will first infer parameters from the right-hand side, then try to
simplify each left-hand side of the parameter equalities and finally infer the right-hand side
parameters from the result.

Example:
```
def Option.pbind (o : Option α) (f : (a : α) → o = some a → Option β) : Option β := ...

@[congr]
theorem Option.pbind_congr
    {o o' : Option α} (ho : o = o') -- equality for first parameter
    {f : (a : α) → o = some a → Option β} {f' : (a : α) → o' = some a → Option β}
    (hf : ∀ (a : α) (h : _), f a (ho.trans h) = f' a h) : -- equality for second parameter
    o.pbind f = o'.pbind f' := -- conclusion: equality of the whole application
  ...
```
-/
@[builtin_doc]
builtin_initialize
  registerBuiltinAttribute {
    name  := `congr
    descr := "congruence theorem"
    add   := fun declName stx attrKind => do
      let prio ← getAttrParamOptPrio stx[1]
      discard <| addSimpCongrTheorem declName attrKind prio |>.run {} {}
  }

def getSimpCongrTheorems : CoreM SimpCongrTheorems :=
  return congrExtension.getState (← getEnv)

builtin_initialize dsimpCongrExtension : SimpleScopedEnvExtension SimpCongrTheorem SimpCongrTheorems ←
  registerSimpleScopedEnvExtension {
    initial        := {}
    addEntry       := addSimpCongrTheoremEntry
    finalizeImport := fun s => { s with lemmas := s.lemmas.switch }
  }

/--
Checks that `declName` is a congruence theorem (see `mkSimpCongrTheorem`) whose hypotheses, except
pack hypotheses, have no binders and whose right-hand side becomes the left-hand side when every hypothesis is instantiated by
reflexivity, that is, when the new parameters are instantiated with the corresponding parts of the
left-hand sides of the hypotheses.
-/
def mkDSimpCongrTheorem (declName : Name) (prio : Nat) : MetaM SimpCongrTheorem := do
  let c ← mkSimpCongrTheorem declName prio (allowHEq := true)
  withReducible do
  let (xs, _, type) ← forallMetaTelescopeReducing (← inferType (← mkConstWithLevelParams declName))
  let some (lhs, rhs) := type.eqOrIff? <|> type.heq?.map fun (_, lhs, _, rhs) => (lhs, rhs)
    | unreachable!
  for i in c.hypothesesPos do
    let hType ← instantiateMVars (← inferType xs[i]!)
    if let some (_, l, _, r) := hType.heq? then
      r.mvarId!.assign l
    else if hType.isForall && hType.getForallBody.isHEq then
      forallTelescope hType fun _ body => do
        let some (_, l, _, r) := body.heq? | unreachable!
        r.getAppFn.mvarId!.assign (← mkLambdaFVars r.getAppArgs l)
    else if hType.isForall && isPackHypothesis hType then
      forallTelescope hType fun ys body => do
        let some (l, r) := body.eqOrIff? | unreachable!
        let some (ci, us, rArgs) ← packCtorApp? r | unreachable!
        let vals ← packFields ci us (rArgs.extract 0 ci.numParams) l
        for m in rArgs.extract ci.numParams rArgs.size, v in vals do
          m.getAppFn.mvarId!.assign (← mkLambdaFVars ys v)
    else if let some (l, r) := hType.eqOrIff? then
      if r.isMVar then
        r.mvarId!.assign l
      else if let some (ci, us, rArgs) ← packCtorApp? r then
        let vals ← packFields ci us (rArgs.extract 0 ci.numParams) l
        for m in rArgs.extract ci.numParams rArgs.size, v in vals do
          m.mvarId!.assign v
      else
        throwError "Invalid `dsimp_congr` theorem: Hypothesis #{i+1} has binders{indentExpr hType}"
    else
      throwError "Invalid `dsimp_congr` theorem: Hypothesis #{i+1} has binders{indentExpr hType}"
  let lhs ← instantiateMVars lhs
  let rhs ← instantiateMVars rhs
  unless rhs.headBeta == lhs.headBeta || (← withNewMCtxDepth <| isDefEq rhs lhs) do
    throwError "Invalid `dsimp_congr` theorem: The right-hand side does not reduce to the left-hand side when the hypotheses are instantiated by reflexivity{indentExpr rhs}"
  return c

/--
Registers a congruence theorem for `dsimp`, in the format of `simp` congruence theorems (see
`congr`). It must be definitional: if the new parameters are instantiated with the corresponding parts
of the left-hand sides of the hypotheses, its right-hand side must reduce to its left-hand side.
`dsimp` then rewrites the left-hand sides of the hypotheses definitionally and rebuilds the
application from the right-hand side, without producing a proof.

Pack hypotheses `S.mk ps fs = S.mk ps fs'` let `dsimp` rewrite arguments that depend on each other
(the fields `fs`) together, as one value of the structure `S`.
-/
@[builtin_doc]
builtin_initialize
  registerBuiltinAttribute {
    name  := `dsimp_congr
    descr := "congruence theorem for dsimp"
    add   := fun declName stx attrKind => do
      let prio ← getAttrParamOptPrio stx[1]
      let c ← (mkDSimpCongrTheorem declName prio).run' {} {}
      dsimpCongrExtension.add c attrKind
  }

def getDSimpCongrTheorems : CoreM SimpCongrTheorems :=
  return dsimpCongrExtension.getState (← getEnv)

end Lean.Meta
