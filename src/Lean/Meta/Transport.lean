/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Function
public import Lean.Meta.DiscrTree.Main
public import Lean.Meta.SynthInstance
import Lean.Meta.AppBuilder

public section

/-!
# Transport along equivalences

`@[transport]` collects declarations that conclude in an equivalence `α ≃ β`: plain equivalences such
as the `Foo.equiv : Int ≃ Foo` a `newtype` registers automatically, and congruences such as
`LE.congr : (α ≃ β) → LE α ≃ LE β` whose explicit arguments are themselves equivalences.
`mkTransportEquiv src tgt` assembles `src ≃ tgt` from them the way `congr` assembles an equality:
by unifying conclusions with the goal, solving the equivalence arguments recursively, synthesizing
instance arguments, and chaining through intermediate types with `Equiv.trans`.

Two types are only ever identified by `isDefEq` at `instances` transparency, so unlike
`inferInstanceAs`'s instance wrapping this never depends on unfolding a semireducible or
irreducible definition; a congruence for a lawful class such as `TransOrd` therefore only applies
to the instance obtained by transporting along the same equivalence.
-/

namespace Lean.Meta

builtin_initialize registerTraceClass `Meta.transport

namespace Transport

builtin_initialize transportExt :
    SimpleScopedEnvExtension (Name × Array DiscrTree.Key) (DiscrTree Name) ←
  registerSimpleScopedEnvExtension {
    addEntry := fun dt (n, ks) => dt.insertKeyValue ks n
    initial := {}
  }

/--
Registers `declName` for `mkTransportEquiv`. Its type must be of the form
`∀ …, α ≃ β`, with every explicit argument an equivalence.
-/
def addTransportDecl (declName : Name) (kind : AttributeKind) : MetaM Unit := do
  let type := (← getConstInfo declName).type
  let (xs, bis, concl) ← withReducible <| forallMetaTelescopeReducing type
  unless concl.isAppOfArity ``Equiv 2 do
    throwError "invalid `@[transport]` declaration `{.ofConstName declName}`, its conclusion must \
      be an equivalence `α ≃ β`, but is{indentExpr concl}"
  for x in xs, bi in bis do
    if bi.isExplicit then
      let xDecl ← x.mvarId!.getDecl
      let xType ← instantiateMVars xDecl.type
      unless xType.isAppOfArity ``Equiv 2 do
        throwError "invalid `@[transport]` declaration `{.ofConstName declName}`, its explicit \
          arguments must be equivalences, but `{xDecl.userName}` has type{indentExpr xType}"
  let keys ← withReducible <| DiscrTree.mkPath concl
  transportExt.add (declName, keys) kind

@[builtin_doc]
builtin_initialize registerBuiltinAttribute {
  name := `transport
  descr := "equivalence or congruence usable by `transport`, `inferInstanceAs` and `deriving`"
  add := fun declName _ kind => MetaM.run' <| addTransportDecl declName kind
}

/--
Runs `k` on each candidate, restoring the state after a failed attempt, and returns the first
success. The error of the last attempt is kept as an explanation if all of them fail.
-/
private def firstSuccess (candidates : Array Name) (k : Name → MetaM Expr) :
    MetaM (Except MessageData Expr) := do
  let mut lastError : Option MessageData := none
  for c in candidates do
    let s ← saveState
    try
      return .ok (← k c)
    catch ex =>
      s.restore
      lastError := ex.toMessageData
  return .error (lastError.getD m!"no `@[transport]` declaration applies")

mutual

/--
Instantiates the `@[transport]` declaration `declName` so that it proves `goal : α ≃ β`: its
conclusion is unified with `goal`, then its equivalence arguments are solved by `mkEquiv` and its
instance arguments by `synthInstance`.
-/
private partial def applyDecl (declName : Name) (goal : Expr) (fuel : Nat) : MetaM Expr := do
  let decl ← mkConstWithFreshMVarLevels declName
  let (args, bis, concl) ← withReducible <| forallMetaTelescopeReducing (← inferType decl)
  unless ← withTransparency .instances <| isDefEq concl goal do
    throwError "`{.ofConstName declName}` does not apply"
  for arg in args, bi in bis do
    if ← arg.mvarId!.isAssigned then
      continue
    let argDecl ← arg.mvarId!.getDecl
    let argType ← instantiateMVars argDecl.type
    if bi.isInstImplicit then
      arg.mvarId!.assign (← synthInstance argType)
    else if argType.isAppOfArity ``Equiv 2 then
      arg.mvarId!.assign (← mkEquiv argType.appFn!.appArg! argType.appArg! fuel)
    else
      throwError "cannot infer argument `{argDecl.userName}` of `{.ofConstName declName}`"
  instantiateMVars (mkAppN decl args)

/--
Builds `src ≃ tgt`, trying in order: reflexivity, a direct `@[transport]` match and, with `fuel`
bounding the recursion, a chain through an intermediate `mid` with `mid ≃ tgt` registered.
-/
partial def mkEquiv (src tgt : Expr) (fuel : Nat) : MetaM Expr := do
  let src ← instantiateMVars src
  let tgt ← instantiateMVars tgt
  withTraceNode `Meta.transport (fun _ => return m!"{src} ≃ {tgt}") do
  if ← withTransparency .instances <| isDefEq src tgt then
    return ← mkAppM ``Equiv.refl #[src]
  if fuel == 0 then
    throwError "transport depth exhausted at{indentExpr src}\n≃{indentExpr tgt}"
  let goal ← mkAppM ``Equiv #[src, tgt]
  let dt := transportExt.getState (← getEnv)
  match ← firstSuccess (← dt.getUnify goal) (applyDecl · goal (fuel - 1)) with
  | .ok e => return e
  | .error directError =>
  let mid ← mkFreshExprMVar (mkSort (← mkFreshLevelMVar))
  let midGoal ← mkAppM ``Equiv #[mid, tgt]
  let chained ← firstSuccess (← dt.getUnify midGoal) fun declName => do
    let e₂ ← applyDecl declName midGoal (fuel - 1)
    let mid ← instantiateMVars mid
    if ← withTransparency .instances <| isDefEq mid tgt then
      throwError "`{.ofConstName declName}` does not lead anywhere"
    let e₁ ← mkEquiv src mid (fuel - 1)
    mkAppM ``Equiv.trans #[e₁, e₂]
  match chained with
  | .ok e => return e
  | .error _ =>
    throwError m!"failed to transport{indentExpr src}\nto{indentExpr tgt}" ++ .note directError

end

end Transport

/-- Constructs an equivalence `src ≃ tgt` from the `@[transport]` declarations. -/
def mkTransportEquiv (src tgt : Expr) : MetaM Expr := do
  unless (← getEnv).contains ``Equiv do
    throwError "`Equiv` is not available, transporting requires `Init.Data.Function`"
  Transport.mkEquiv src tgt (fuel := 8)

/-- Moves `e` to type `tgt` along `mkTransportEquiv`. -/
def transport (e tgt : Expr) : MetaM Expr := do
  let equiv ← mkTransportEquiv (← inferType e) tgt
  mkAppM ``Equiv.toFun #[equiv, e]

/--
Moves an instance of `src` to `tgt` along `mkTransportEquiv`. The equivalence is constructed first,
so that metavariables in `src` (such as `_` placeholders in the argument of `inferInstanceAs`) can be
instantiated by unification with the registered declarations before the instance is synthesized.
-/
def transportInstance (src tgt : Expr) : MetaM Expr := do
  let equiv ← mkTransportEquiv src tgt
  let inst ← synthInstance (← instantiateMVars src)
  mkAppM ``Equiv.toFun #[equiv, inst]

end Lean.Meta
