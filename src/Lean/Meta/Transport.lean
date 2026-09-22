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

`@[transport]` collects declarations that conclude in `Lean.CanonicalEquivalence α β`.
A `newtype` registers `Foo.equivDef : Lean.CanonicalEquivalence Int Foo` automatically.
Congruences such as `LE.canonicalCongr` accept canonical equivalences as explicit arguments.
Congruences for type constructors can also accept families
`∀ α, Lean.CanonicalEquivalence (m α) (n α)`.

`mkTransportEquiv src tgt` assembles `Lean.CanonicalEquivalence src tgt` from these declarations.
It unifies conclusions with the goal, solves equivalence arguments recursively (families under
their binders), synthesizes instance arguments, and chains through intermediate types with
`Lean.CanonicalEquivalence.trans`.

Types are identified by `isDefEq` at default transparency, which never unfolds the irreducible
definition a `newtype` is; unlike `inferInstanceAs`'s instance wrapping this never depends on the
kernel unfolding what the elaborator may not. A congruence for a lawful class such as `TransOrd`
concludes at the transported instance of its parent class and therefore only applies to an
instance definitionally equal to it.
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

/-- Whether `type` is a canonical equivalence or a family of canonical equivalences. -/
private def isEquivFamily (type : Expr) : MetaM Bool :=
  withReducible <| forallTelescopeReducing type fun _ body =>
    return body.isAppOfArity ``Lean.CanonicalEquivalence 2

/--
Registers `declName` for `mkTransportEquiv`. Its type must be of the form
`∀ …, Lean.CanonicalEquivalence α β`. Every explicit argument must be a canonical equivalence
or a family of canonical equivalences.
-/
def addTransportDecl (declName : Name) (kind : AttributeKind) : MetaM Unit := do
  let type := (← getConstInfo declName).type
  let (xs, bis, concl) ← withReducible <| forallMetaTelescopeReducing type
  unless concl.isAppOfArity ``Lean.CanonicalEquivalence 2 do
    throwError "invalid `@[transport]` declaration `{.ofConstName declName}`, its conclusion must \
      be an equivalence `Lean.CanonicalEquivalence α β`, but is{indentExpr concl}"
  for x in xs, bi in bis do
    if bi.isExplicit then
      let xDecl ← x.mvarId!.getDecl
      let xType ← instantiateMVars xDecl.type
      unless ← isEquivFamily xType do
        throwError "invalid `@[transport]` declaration `{.ofConstName declName}`, its explicit \
          arguments must be equivalences or families of equivalences, but `{xDecl.userName}` has \
          type{indentExpr xType}"
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
Instantiates the `@[transport]` declaration `declName` to prove a canonical equivalence: its
conclusion is unified with `goal`, then its equivalence arguments are solved by `mkEquiv` (a family
`∀ xs, Lean.CanonicalEquivalence α β` under its binders) and its instance arguments by `synthInstance`.
-/
private partial def applyDecl (declName : Name) (goal : Expr) (fuel : Nat) : MetaM Expr := do
  let decl ← mkConstWithFreshMVarLevels declName
  let (args, bis, concl) ← withReducible <| forallMetaTelescopeReducing (← inferType decl)
  unless ← withDefault <| isDefEq concl goal do
    throwError "`{.ofConstName declName}` does not apply"
  for arg in args, bi in bis do
    if ← arg.mvarId!.isAssigned then
      continue
    let argDecl ← arg.mvarId!.getDecl
    let argType ← instantiateMVars argDecl.type
    if bi.isInstImplicit then
      arg.mvarId!.assign (← synthInstance argType)
    else if ← isEquivFamily argType then
      arg.mvarId!.assign (← forallTelescopeReducing argType fun xs body => do
        mkLambdaFVars xs (← mkEquiv body.appFn!.appArg! body.appArg! fuel))
    else
      throwError "cannot infer argument `{argDecl.userName}` of `{.ofConstName declName}`"
  instantiateMVars (mkAppN decl args)

/--
Builds `Lean.CanonicalEquivalence src tgt`, trying reflexivity, a direct `@[transport]` match,
and a chain through an intermediate `mid` with `Lean.CanonicalEquivalence mid tgt` registered.
The `fuel` parameter bounds recursion.
-/
partial def mkEquiv (src tgt : Expr) (fuel : Nat) : MetaM Expr := do
  let src ← instantiateMVars src
  let tgt ← instantiateMVars tgt
  withTraceNode `Meta.transport (fun _ => return m!"Lean.CanonicalEquivalence {src} {tgt}") do
  if ← withDefault <| isDefEq src tgt then
    return ← mkAppM ``Lean.CanonicalEquivalence.refl #[src]
  if fuel == 0 then
    throwError "transport depth exhausted at{indentExpr src}\nto{indentExpr tgt}"
  let goal ← mkAppM ``Lean.CanonicalEquivalence #[src, tgt]
  let dt := transportExt.getState (← getEnv)
  match ← firstSuccess (← dt.getUnify goal) (applyDecl · goal (fuel - 1)) with
  | .ok e => return e
  | .error directError =>
  let mid ← mkFreshExprMVar (mkSort (← mkFreshLevelMVar))
  let midGoal ← mkAppM ``Lean.CanonicalEquivalence #[mid, tgt]
  let chained ← firstSuccess (← dt.getUnify midGoal) fun declName => do
    let e₂ ← applyDecl declName midGoal (fuel - 1)
    let mid ← instantiateMVars mid
    if ← withDefault <| isDefEq mid tgt then
      throwError "`{.ofConstName declName}` does not lead anywhere"
    let e₁ ← mkEquiv src mid (fuel - 1)
    mkAppM ``Lean.CanonicalEquivalence.trans #[e₁, e₂]
  match chained with
  | .ok e => return e
  | .error _ =>
    throwError m!"failed to transport{indentExpr src}\nto{indentExpr tgt}" ++ .note directError

end

end Transport

/-- Constructs an equivalence `Lean.CanonicalEquivalence src tgt` from the `@[transport]` declarations. -/
def mkTransportEquiv (src tgt : Expr) : MetaM Expr := do
  unless (← getEnv).contains ``Lean.CanonicalEquivalence do
    throwError "`Lean.CanonicalEquivalence` is not available, transporting requires `Init.Data.Function`"
  Transport.mkEquiv src tgt (fuel := 8)

/-- Moves `e` to type `tgt` along `mkTransportEquiv`. -/
def transport (e tgt : Expr) : MetaM Expr := do
  let equiv ← mkTransportEquiv (← inferType e) tgt
  mkAppM ``Lean.CanonicalEquivalence.toFun #[equiv, e]

/--
Moves an instance of `src` to `tgt` along `mkTransportEquiv`. The equivalence is constructed first,
so that metavariables in `src` (such as `_` placeholders in the argument of `inferInstanceAs`) can be
instantiated by unification with the registered declarations before the instance is synthesized.
-/
def transportInstance (src tgt : Expr) : MetaM Expr := do
  let equiv ← mkTransportEquiv src tgt
  let inst ← synthInstance (← instantiateMVars src)
  mkAppM ``Lean.CanonicalEquivalence.toFun #[equiv, inst]

end Lean.Meta
