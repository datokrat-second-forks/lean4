/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Meta.DiscrTree.Main
public import Lean.Meta.Basic
import Lean.Util.CollectMVars
import Lean.Meta.Tactic.Delta
import Lean.Meta.Transform
import Lean.ProjFns
import Lean.Meta.WHNF
import Lean.Meta.ExprDefEq
import Lean.Meta.FunInfo

public section

namespace Lean.Meta

/--
A view for `simp` congruence: a definitional equation `lhs = viewFn args` that groups arguments of
`lhs` whose types depend on each other into fewer, less dependent arguments of `viewFn`.
-/
structure CongrView where
  theoremName : Name
  /-- The head of the right-hand side. `simp` unfolds it after congruence. -/
  viewFn      : Name
  keys        : Array DiscrTree.Key
  /--
  Pairs `(i, p)` of a data parameter `i` of the theorem and the position `p` of the left-hand side
  where it occurs. A data parameter occurs in the left-hand side only as the `p`-th argument, no
  other parameter's type mentions it, its type does not mention other data parameters, and the
  type of the `p`-th parameter of the head does not depend on the other data positions. Matches
  are cached modulo the data positions (see `Simp.congrView?`).
  -/
  dataPos     : Array (Nat × Nat)
  /--
  Whether every instance argument in the body of `viewFn` has its expected type at `.instances`
  transparency. Then, if the instance arguments of an application of `viewFn` have their expected
  types, so do the instance arguments of its unfolding, and `simp` checks the former instead of the
  latter (see `backward.dsimp.instanceTypes`).
  -/
  instancesConsistent : Bool
  deriving Inhabited

instance : BEq CongrView := ⟨(·.theoremName == ·.theoremName)⟩

abbrev CongrViews := DiscrTree CongrView

def CongrViews.addEntry (s : CongrViews) (v : CongrView) : CongrViews :=
  s.insertKeyValue v.keys v

builtin_initialize congrViewExtension : SimpleScopedEnvExtension CongrView CongrViews ←
  registerSimpleScopedEnvExtension {
    initial  := {}
    addEntry := CongrViews.addEntry
  }

def mkCongrView (declName : Name) : MetaM CongrView := withReducible do
  let c ← mkConstWithLevelParams declName
  let (xs, _, type) ← forallMetaTelescope (← inferType c)
  let some (_, lhs, rhs) := type.eq? |
    throwError "Invalid `congr_view` theorem: Expected an equality{indentExpr type}"
  let .const viewFn _ := rhs.getAppFn |
    throwError "Invalid `congr_view` theorem: The right-hand side must be an application of a constant{indentExpr rhs}"
  unless lhs.getAppFn.isConst do
    throwError "Invalid `congr_view` theorem: The left-hand side must be an application of a constant{indentExpr lhs}"
  unless (← getConstInfo viewFn).hasValue do
    throwError "Invalid `congr_view` theorem: `{.ofConstName viewFn}` must be a definition"
  let lhsMVars := (lhs.collectMVars {}).result
  for x in xs do
    unless lhsMVars.contains x.mvarId! do
      throwError "Invalid `congr_view` theorem: Parameter `{x}` does not occur in the left-hand side"
  unless (← withDefault <| isDefEq lhs rhs) do
    throwError "Invalid `congr_view` theorem: The sides are not definitionally equal{indentExpr type}"
  return { theoremName := declName, viewFn, keys := ← DiscrTree.mkPath lhs,
           dataPos := ← computeDataPos xs lhs,
           instancesConsistent := ← withDefault <| checkInstancesConsistent viewFn }
where
  checkInstancesConsistent (viewFn : Name) : MetaM Bool := do
    let some value := (← getConstInfo viewFn).value? | return false
    lambdaTelescope value fun xs body => do
      let ok ← IO.mkRef true
      discard <| Meta.transform body (post := fun e => do
        if e.isApp then
          let f := e.getAppFn
          let args := e.getAppArgs
          let infos := (← getFunInfoNArgs f args.size).paramInfo
          let fType ← inferType f
          for h : j in [:infos.size] do
            unless infos[j].isInstance do continue
            let .forallE _ d _ _ ← whnf (← instantiateForall fType (args.extract 0 j)) | continue
            unless (← withNewMCtxDepth <| withExactInstancesConfig <| isDefEqGuarded (← inferType args[j]!) d) do
              ok.set false
        return .continue)
      ok.get
  computeDataPos (xs : Array Expr) (lhs : Expr) : MetaM (Array (Nat × Nat)) := do
    let lhsArgs := lhs.getAppArgs
    let types ← xs.mapM fun x => do instantiateMVars (← inferType x)
    let occursIn (x e : Expr) : Bool := (e.find? (· == x)).isSome
    -- (a) and (b)
    let mut cands : Array (Nat × Nat) := #[]
    for h : i in [:xs.size] do
      let x := xs[i]
      let ps := (List.range lhsArgs.size).filter (lhsArgs[·]! == x)
      let [p] := ps | continue
      unless (lhsArgs.toList.zipIdx.all fun (a, q) => q == p || !occursIn x a) do continue
      unless lhs.getAppFn.isConst do continue
      unless ((List.range xs.size).all fun j => j == i || !occursIn x types[j]!) do continue
      cands := cands.push (i, p)
    -- (c), as a fixpoint
    let mut changed := true
    while changed do
      changed := false
      for c in cands do
        if cands.any fun d => d.1 != c.1 && occursIn xs[d.1]! types[c.1]! then
          cands := cands.erase c
          changed := true
    -- (d)
    let headType ← inferType lhs.getAppFn
    forallBoundedTelescope headType lhsArgs.size fun ys _ => do
      if ys.size < lhsArgs.size then return #[]
      let mut result := #[]
      for (i, p) in cands do
        let pType ← inferType ys[p]!
        unless cands.any (fun (_, q) => q != p && occursIn ys[q]! pType) do
          result := result.push (i, p)
      return result

/--
Registers a view for `simp` congruence. A view is a definitional equation `f as = g bs`,
where `g` is a definition, typically taking structured objects that bundle arguments of `f` whose
types or instances depend on each other. When `simp` visits an application of `f`, it performs
congruence on `g bs` instead, unfolds `g` and continues with the result.

Example: viewing a linear map application through bundled modules lets `simp` rewrite the
carrier of a bundled module together with its instances.
```
def coe (M N : ModuleCat k) (f : M →ₗ[k] N) (x : M) : N := f x

@[congr_view] theorem coe_view (f : M →ₗ[k] N) (x : M) :
    f x = coe (.of k M) (.of k N) f x := rfl
```
-/
@[builtin_doc]
builtin_initialize
  registerBuiltinAttribute {
    name  := `congr_view
    descr := "view for simp congruence"
    add   := fun declName _ attrKind => do
      let v ← (mkCongrView declName).run' {} {}
      congrViewExtension.add v attrKind
  }

def getCongrViews : CoreM CongrViews :=
  return congrViewExtension.getState (← getEnv)

register_builtin_option simp.congrView.reduceProj : Bool := {
    defValue := true
    descr    := "(simp) DEBUG: after unfolding a `@[congr_view]` view function, reduce projections of \
      constructor applications that the substitution creates"
  }

/-- Reduces `p s`, where `p` is a projection of a non-class structure and `s` reduces to a constructor
application at reducible transparency. -/
def reduceProjOfCtor? (e : Expr) : MetaM (Option Expr) := do
  let .const fn _ := e.getAppFn | return none
  let some info ← getProjectionFnInfo? fn | return none
  if info.fromClass then return none
  let args := e.getAppArgs
  unless args.size > info.numParams do return none
  let s ← whnfR args[info.numParams]!
  unless s.isAppOf info.ctorName do return none
  let some field := s.getAppArgs[info.numParams + info.i]? | return none
  return mkAppN field args[(info.numParams + 1)...*]

/--
Unfolds the view function `viewFn` at the head of `e`, then reduces the beta redexes and the
projections of constructor applications (e.g. `(ModuleCat.of k M).carrier`) that the substitution
creates. The arguments of `e` are not visited.
-/
def unfoldCongrView (viewFn : Name) (e : Expr) : MetaM Expr := do
  let args := e.getAppArgs
  let some body ← delta? e (· == viewFn) | return e
  Meta.transform body
    (pre := fun s => return if args.contains s then .done s else .continue)
    (post := fun s => do
      if s.isHeadBetaTarget then return .visit s.headBeta
      if simp.congrView.reduceProj.get (← getOptions) then
        if let some s' ← reduceProjOfCtor? s then return .visit s'
      return .continue)

end Lean.Meta
