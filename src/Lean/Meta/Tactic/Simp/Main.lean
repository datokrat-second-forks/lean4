/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Tactic.Replace
public import Lean.Meta.Tactic.Simp.Rewrite
public import Lean.Meta.Tactic.Simp.Diagnostics
public import Lean.Meta.Tactic.Simp.CongrView
public import Lean.Meta.Match.Value
public import Lean.Meta.MonadSimp
public import Lean.Util.CollectLooseBVars
import Lean.Meta.ExprDefEq
import Lean.Meta.HaveTelescope
import Lean.PrettyPrinter
import Lean.ExtraModUses
public section
namespace Lean.Meta
namespace Simp

register_builtin_option backward.dsimp.proofs : Bool := {
    defValue := false
    descr    := "Let `dsimp` simplify proof terms"
  }


register_builtin_option simp.congrView.markResult : Bool := {
    defValue := true
    descr    := "(simp) record the result of congruence through a `@[congr_view]` view as simplified, \
      so that `simp` does not visit it again unless a post-lemma rewrites it"
  }

register_builtin_option simp.congrView.unifyInstances : Bool := {
    defValue := true
    descr    := "(simp) when matching a `@[congr_view]` view, take its instance parameters from the \
      matched term by unification instead of synthesizing them, and synthesize only those that \
      unification leaves unassigned"
  }

register_builtin_option simp.congrView.enabled : Bool := {
    defValue := true
    descr    := "(simp) DEBUG: use `@[congr_view]` views; when false, terms that a view matches are \
      only traced"
  }

register_builtin_option simp.congrView.skipInstanceCheck : Bool := {
    defValue := true
    descr    := "(simp) do not check the instance arguments of the result of congruence through a \
      `@[congr_view]` view against `backward.dsimp.instanceTypes`; the view rebuilds them from its \
      bundled arguments, so their types match"
  }

register_builtin_option simp.packCongr.strictMatch : Bool := {
    defValue := false
    descr    := "(simp) apply a pack congruence theorem only if matching its left-hand side syntactically \
      by argument positions determines all its parameters; otherwise skip it without unification"
  }

register_builtin_option simp.packCongr.canonicalize : Bool := {
    defValue := false
    descr    := "(simp) when a `dsimp_congr` theorem applies without progress in its hypotheses, still \
      rebuild the term from its right-hand side, which replaces the instance arguments of the term by \
      the canonical ones of the theorem"
  }

register_builtin_option debug.simp.packCongr.fallback : Bool := {
    defValue := true
    descr    := "(simp) DEBUG: after a pack congruence theorem applies without progress, try other \
      congruence theorems and the default congruence"
  }

register_builtin_option debug.simp.packCongr.old : Nat := {
    defValue := 0
    descr    := "(simp) DEBUG: bit mask restoring earlier pack congruence behavior: 1 = no index, \
      2 = no result marking, 4 = no failure cache, 8 = `HEq` progress only with a proof"
  }

def packOld (bit : Nat) : CoreM Bool := do
  return (debug.simp.packCongr.old.get (← getOptions)) &&& bit != 0

register_builtin_option simp.packCongr.ctorOnly : Bool := {
    defValue := true
    descr    := "(simp) accept a rewrite of a pack value only if the result is again an application of \
      the pack constructor (possibly after unfolding reducible definitions)"
  }

register_builtin_option debug.simp.congr.disabled : String := {
    defValue := ""
    descr    := "(simp) DEBUG: name of a `congr` theorem that `simp` does not use"
  }

register_builtin_option debug.simp.packCongr.eta : Bool := {
    defValue := false
    descr    := "(simp) DEBUG: replace a pack value `S.mk ps (S.f₁ ps s) …` by `s` before simplifying it"
  }

/-- DEBUG (`debug.simp.packCongr.eta`): `s` if `e` is `S.mk ps (S.f₁ ps s) … (S.fₙ ps s)`. -/
def packEtaM (e : Expr) : MetaM Expr := do
  unless debug.simp.packCongr.eta.get (← getOptions) do return e
  let some (ci, _, args) ← packCtorApp? e | return e
  let env ← getEnv
  let fields := getStructureFields env ci.induct
  let mut s? : Option Expr := none
  for h : i in [:fields.size] do
    let a := args[ci.numParams + i]!
    let some projFn := getProjFnForField? env ci.induct fields[i] | return e
    unless a.isAppOfArity projFn (ci.numParams + 1) do return e
    let s := a.appArg!
    if let some s₀ := s? then
      unless s₀ == s do return e
    s? := some s
  return s?.getD e

register_builtin_option debug.simp.packStats : Bool := {
    defValue := false
    descr    := "(simp) DEBUG: accumulate heartbeats of pack congruence phases in `Simp.packStatsRef`"
  }

/-- DEBUG: heartbeats of pack congruence phases, see `debug.simp.packStats`. -/
builtin_initialize packStatsRef : IO.Ref (Std.HashMap String (Nat × Nat)) ← IO.mkRef {}

def recordPackStat (key : String) (hb : Nat) : CoreM Unit := do
  if debug.simp.packStats.get (← getOptions) then
    packStatsRef.modify fun m => m.alter key fun
      | some (n, h) => some (n + 1, h + hb)
      | none => some (1, hb)

register_builtin_option debug.simp.check.have : Bool := {
    defValue := false
    descr    := "(simp) enable consistency checks for `have` telescope simplification"
  }

builtin_initialize congrHypothesisExceptionId : InternalExceptionId ←
  registerInternalExceptionId `congrHypothesisFailed

def throwCongrHypothesisFailed : MetaM α :=
  throw <| Exception.internal congrHypothesisExceptionId

/-- Return true if `e` is of the form `ofNat n` where `n` is a kernel Nat literal -/
def isOfNatNatLit (e : Expr) : Bool :=
  e.isAppOf ``OfNat.ofNat && e.getAppNumArgs >= 3 && (e.getArg! 1).isRawNatLit

/--
If `e` is a raw Nat literal and `OfNat.ofNat` is not in the list of declarations to unfold,
return an `OfNat.ofNat`-application.
-/
def foldRawNatLit (e : Expr) : SimpM Expr := do
  match e.rawNatLit? with
  | some n =>
    /- If `OfNat.ofNat` is marked to be unfolded, we do not pack orphan nat literals as `OfNat.ofNat` applications
        to avoid non-termination. See issue #788.  -/
    if (← readThe Simp.Context).isDeclToUnfold ``OfNat.ofNat then
      return e
    else
      return toExpr n
  | none   => return e

/-- Return true if `e` is of the form `ofScientific n b m` where `n` and `m` are kernel Nat literals. -/
def isOfScientificLit (e : Expr) : Bool :=
  e.isAppOfArity ``OfScientific.ofScientific 5 && (e.getArg! 4).isRawNatLit && (e.getArg! 2).isRawNatLit

/-- Return true if `e` is of the form `Char.ofNat n` where `n` is a kernel Nat literals. -/
def isCharLit (e : Expr) : Bool :=
  e.isAppOfArity ``Char.ofNat 1 && e.appArg!.isRawNatLit

/--
Unfold definition even if it is not marked as `@[reducible]`.
Remark: We never unfold irreducible definitions. Mathlib relies on that in the implementation of the
command `irreducible_def`.
-/
private def unfoldDefinitionAny? (e : Expr) : MetaM (Option Expr) := do
  if let .const declName _ := e.getAppFn then
    if (← isIrreducible declName) then
      return none
  unfoldDefinition? e (ignoreTransparency := true)

private def reduceProjFn? (e : Expr) : SimpM (Option Expr) := do
  matchConst e.getAppFn (fun _ => pure none) fun cinfo _ => do
    match (← getProjectionFnInfo? cinfo.name) with
    | none => return none
    | some projInfo =>
      /- Helper function for applying `reduceProj?` to the result of `unfoldDefinition?` -/
      let reduceProjCont? (e? : Option Expr) : SimpM (Option Expr) := do
        match e? with
        | none   => pure none
        | some e =>
          match (← withSimpMetaConfig <| reduceProj? e.getAppFn) with
          | some f => return some (mkAppN f e.getAppArgs)
          | none   => return none
      if projInfo.fromClass then
        -- `class` projection
        if (← getContext).isDeclToUnfold cinfo.name then
          /-
          If user requested `class` projection to be unfolded (e.g., `simp [X.x]`), we set transparency
          mode to `.instances` and invoke `unfoldDefinition?`.
          Recall that `unfoldDefinition?` has support for unfolding this kind of projection when
          transparency mode is `.instances`.

          Note: this unfolds the projection function but may leave a `.proj` node that cannot be further
          reduced. For example, given:
          ```
          def a' := 0; def b' := 0
          class X where x : Nat
          instance instX (n : Nat) : X where x := n
          ```
          `simp [X.x]` on `(instX a').x = (instX b').x` unfolds `X.x` to expose `.proj X 0 (instX a')`,
          but cannot reduce further because `instX a'` is not a constructor application at `.reducible`.
          The resulting goal `(instX a').1 = (instX b').1` is expected and reasonable: the user explicitly
          requested the unfolding, and the projection is stuck because `a'` and `b'` are semireducible.
          -/
          let e? ← withReducibleAndInstances <| unfoldDefinition? e
          if e?.isSome then
            recordSimpTheorem (.decl cinfo.name)
          return e?
        else
          /-
          Recall that class projections are **not** marked with `[reducible]` because we want them to be
          in "reducible canonical form". However, if we have a class projection of the form `Class.projFn (Class.mk ...)`,
          we want to reduce it. See issue #1869 for an example where this is important.
          -/
          unless e.getAppNumArgs > projInfo.numParams do
            return none
          let major := e.getArg! projInfo.numParams
          unless (← isConstructorApp major) do
            return none
          if backward.whnf.reducibleClassField.get (← getOptions) then
            /-
            When `backward.whnf.reducibleClassField` is `true`, `unfoldDefault` (in WHNF.lean)
            already reduces the `.proj` node during `unfoldDefinitionAny?`, so `reduceProjCont?`
            would discard the fully-reduced result because it expects a `.proj` head.
            We return the unfolded result directly; the dsimp traversal will revisit it
            (via `.visit`) and handle any remaining `.proj` nodes naturally.
            -/
            unfoldDefinitionAny? e
          else
            reduceProjCont? (← unfoldDefinitionAny? e)
      else
        -- `structure` projections
        reduceProjCont? (← unfoldDefinition? e)

private def reduceFVar (cfg : Config) (thms : SimpTheoremsArray) (e : Expr) : SimpM Expr := do
  let localDecl ← getFVarLocalDecl e
  if cfg.zetaDelta || thms.isLetDeclToUnfold e.fvarId! || localDecl.isImplementationDetail then
    if !cfg.zetaDelta && thms.isLetDeclToUnfold e.fvarId! then
      recordSimpTheorem (.fvar localDecl.fvarId)
    let some v := localDecl.value? | return e
    return v
  else
    return e

/--
  Return true if `declName` is the name of a definition of the form
  ```
  def declName ... :=
    match ... with
    | ...
  ```
-/
private partial def isMatchDef (declName : Name) : CoreM Bool := do
  let .defnInfo info ← getConstInfo declName | return false
  return go (← getEnv) info.value
where
  go (env : Environment) (e : Expr) : Bool :=
    if e.isLambda then
      go env e.bindingBody!
    else
      let f := e.getAppFn
      f.isConst && isMatcherCore env f.constName!

/--
Try to unfold `e`.
-/
private def unfold? (e : Expr) : SimpM (Option Expr) := do
  let f := e.getAppFn
  if !f.isConst then
    return none
  let fName := f.constName!
  let ctx ← getContext
  let rec unfoldDeclToUnfold? : SimpM (Option Expr) := do
    let options ← getOptions
    let cfg ← getConfig
    -- Support for issue #2042
    if cfg.unfoldPartialApp -- If we are unfolding partial applications, ignore issue #2042
       -- When smart unfolding is enabled, and `f` supports it, we don't need to worry about issue #2042
       || (smartUnfolding.get options && (← getEnv).contains (mkSmartUnfoldingNameFor fName)) then
      unfoldDefinitionAny? e
    else
      -- We are not unfolding partial applications, and `fName` does not have smart unfolding support.
      -- Thus, we must check whether the arity of the function >= number of arguments.
      let some cinfo := (← getEnv).find? fName | return none
      let some value := cinfo.value? | return none
      let arity := value.getNumHeadLambdas
      -- Partially applied function, return `none`. See issue #2042
      if arity > e.getAppNumArgs then return none
      unfoldDefinitionAny? e
  if (← isProjectionFn fName) then
    return none -- should be reduced by `reduceProjFn?`
  else if ctx.config.autoUnfold then
    if ctx.simpTheorems.isErased (.decl fName) then
      return none
    else if hasSmartUnfoldingDecl (← getEnv) fName then
      unfoldDefinitionAny? e
    else if (← isMatchDef fName) then
      let some value ← unfoldDefinitionAny? e | return none
      let .reduced value ← withSimpMetaConfig <| reduceMatcher? value | return none
      return some value
    else
      return none
  else if ctx.isDeclToUnfold fName then
    unfoldDeclToUnfold?
  else
    return none

private def reduceStep (e : Expr) : SimpM Expr := do
  let cfg ← getConfig
  let f := e.getAppFn
  if f.isMVar then
    return (← instantiateMVars e)
  withSimpMetaConfig do
  if cfg.beta then
    if f.isHeadBetaTargetFn false then
      return f.betaRev e.getAppRevArgs
  -- TODO: eta reduction
  if cfg.proj then
    match (← reduceProj? e) with
    | some e => return e
    | none =>
    match (← reduceProjFn? e) with
    | some e => return e
    | none   => pure ()
  if cfg.iota then
    match (← reduceRecMatcher? e) with
    | some e => return e
    | none   => pure ()
  if let .letE _ _ v b nondep := e then
    if cfg.zeta && (!nondep || cfg.zetaHave) then
      return expandLet b #[v] (zetaHave := cfg.zetaHave)
    else if cfg.zetaUnused && !b.hasLooseBVars then
      return consumeUnusedLet b
  match (← unfold? e) with
  | some e' =>
    trace[Meta.Tactic.simp.rewrite] "unfold {.ofConst e.getAppFn}, {e} ==> {e'}"
    recordSimpTheorem (.decl e.getAppFn.constName!)
    return e'
  | none => foldRawNatLit e

private partial def reduce (e : Expr) : SimpM Expr := withIncRecDepth do
  let e' ← reduceStep e
  if e' == e then
    return e'
  else
    trace[Debug.Meta.Tactic.simp] "reduce {e} => {e'}"
    reduce e'

instance : Inhabited (SimpM α) where
  default := fun _ _ _ => default

partial def lambdaTelescopeDSimp (e : Expr) (k : Array Expr → Expr → SimpM α) : SimpM α := do
  go #[] e
where
  go (xs : Array Expr) (e : Expr) : SimpM α := do
    match e with
    | .lam n d b c => withLocalDecl n c (← dsimp d) fun x => go (xs.push x) (b.instantiate1 x)
    | e => k xs e

/--
We use `withNewLemmas` whenever updating the local context.
-/
def withNewLemmas {α} (xs : Array Expr) (f : SimpM α) : SimpM α := do
  if (← getConfig).contextual then
    withFreshCache do
      let mut s ← getSimpTheorems
      let mut updated := false
      let ctx ← getContext
      for x in xs do
        if (← isProof x) then
          s ← s.addTheorem (.fvar x.fvarId!) x (config := ctx.indexConfig)
          updated := true
      if updated then
        withSimpTheorems s f
      else
        f
  else if (← getMethods).wellBehavedDischarge then
    -- See comment at `Methods.wellBehavedDischarge` to understand why
    -- we don't have to reset the cache
    f
  else
    withFreshCache do f

instance : MonadSimp SimpM where
  simp e := do
    let r ← simp e
    if r.expr == e then
      return .rfl
    else
      return .step r.expr (← r.getProof)
  dsimp := dsimp
  withNewLemmas := withNewLemmas

def simpProj (e : Expr) : SimpM Result := do
  match (← withSimpMetaConfig <| reduceProj? e) with
  | some e => return { expr := e }
  | none =>
    let s := e.projExpr!
    let motive? ← withLocalDeclD `s (← inferType s) fun s => do
      let p := e.updateProj! s
      if (← dependsOn (← inferType p) s.fvarId!) then
        return none
      else
        let motive ← mkLambdaFVars #[s] (← mkEq e p)
        if !(← isTypeCorrect motive) then
          return none
        else
          return some motive
    if let some motive := motive? then
      let r ← simp s
      let eNew := e.updateProj! r.expr
      match r.proof? with
      | none => return { expr := eNew }
      | some h =>
        let hNew ← mkEqNDRec motive (← mkEqRefl e) h
        return { expr := eNew, proof? := some hNew }
    else
      return { expr := (← dsimp e) }

def simpConst (e : Expr) : SimpM Result :=
  return { expr := (← reduce e) }

def simpLambda (e : Expr) : SimpM Result :=
  withParent e <| lambdaTelescopeDSimp e fun xs e => withNewLemmas xs do
    let r ← simp e
    r.addLambdas xs

def simpArrow (e : Expr) : SimpM Result := do
  trace[Debug.Meta.Tactic.simp] "arrow {e}"
  let p := e.bindingDomain!
  let q := e.bindingBody!
  let rp ← simp p
  trace[Debug.Meta.Tactic.simp] "arrow [{(← getConfig).contextual}] {p} [{← isProp p}] -> {q} [{← isProp q}]"
  if (← pure (← getConfig).contextual <&&> isProp p <&&> isProp q) then
    trace[Debug.Meta.Tactic.simp] "ctx arrow {rp.expr} -> {q}"
    withLocalDeclD e.bindingName! rp.expr fun h => withNewLemmas #[h] do
      let rq ← simp q
      match rq.proof? with
      | none    => mkImpCongr e rp rq
      | some hq =>
        let hq ← mkLambdaFVars #[h] hq
        /-
          We use the default reducibility setting at `mkImpDepCongrCtx` and `mkImpCongrCtx` because they use the theorems
          ```lean
          @implies_dep_congr_ctx : ∀ {p₁ p₂ q₁ : Prop}, p₁ = p₂ → ∀ {q₂ : p₂ → Prop}, (∀ (h : p₂), q₁ = q₂ h) → (p₁ → q₁) = ∀ (h : p₂), q₂ h
          @implies_congr_ctx : ∀ {p₁ p₂ q₁ q₂ : Prop}, p₁ = p₂ → (p₂ → q₁ = q₂) → (p₁ → q₁) = (p₂ → q₂)
          ```
          And the proofs may be from `rfl` theorems which are now omitted. Moreover, we cannot establish that the two
          terms are definitionally equal using `withReducible`.
          TODO (better solution): provide the problematic implicit arguments explicitly. It is more efficient and avoids this
          problem.
          -/
        if rq.expr.containsFVar h.fvarId! then
          return { expr := (← mkForallFVars #[h] rq.expr), proof? := (← withDefault <| mkImpDepCongrCtx (← rp.getProof) hq) }
        else
          return { expr := e.updateForallE! rp.expr rq.expr, proof? := (← withDefault <| mkImpCongrCtx (← rp.getProof) hq) }
  else
    mkImpCongr e rp (← simp q)

def simpForall (e : Expr) : SimpM Result := withParent e do
  trace[Debug.Meta.Tactic.simp] "forall {e}"
  if e.isArrow then
    simpArrow e
  else if (← isProp e) then
    /- The forall is a proposition. -/
    let domain := e.bindingDomain!
    if (← isProp domain) then
      /-
      The domain of the forall is also a proposition, and we can use `forall_prop_domain_congr`
      IF we can simplify the domain.
      -/
      let rd ← simp domain
      -- A proof of `p₁ = p₁` is dropped. The cast `h₁.substr a` below would otherwise survive inside
      -- proof arguments that `simp` does not visit, so the result would never be equal to the
      -- input and `visitPostContinue` would loop.
      let rd := if rd.expr == domain then { expr := domain } else rd
      if let some h₁ := rd.proof? then
        /- Using
        ```
        theorem forall_prop_domain_congr {p₁ p₂ : Prop} {q₁ : p₁ → Prop} {q₂ : p₂ → Prop}
            (h₁ : p₁ = p₂)
            (h₂ : ∀ a : p₂, q₁ (h₁.substr a) = q₂ a)
            : (∀ a : p₁, q₁ a) = (∀ a : p₂, q₂ a)
        ```
        Remark: we should consider whether we want to add congruence lemma support for arbitrary `forall`-expressions.
        Then, the theorem above can be marked as `@[congr]` and the following code deleted.
        -/
        let p₁ := domain
        let p₂ := rd.expr
        let q₁ := mkLambda e.bindingName! e.bindingInfo! p₁ e.bindingBody!
        let result ← withLocalDecl e.bindingName! e.bindingInfo! p₂ fun a => withNewLemmas #[a] do
          let prop := mkSort Level.zero
          let h₁_substr_a := mkApp6 (mkConst ``Eq.substr [Level.one]) prop (mkLambda `x .default prop (mkBVar 0)) p₂ p₁ h₁ a
          let q_h₁_substr_a := e.bindingBody!.instantiate1 h₁_substr_a
          let rb ← simp q_h₁_substr_a
          let h₂ ← mkLambdaFVars #[a] (← rb.getProof)
          let q₂ ← mkLambdaFVars #[a] rb.expr
          let result ← mkForallFVars #[a] rb.expr
          let proof := mkApp6 (mkConst ``forall_prop_domain_congr) p₁ p₂ q₁ q₂ h₁ h₂
          return { expr := result, proof? := proof }
        return result
    let domain ← dsimp domain
    withLocalDecl e.bindingName! e.bindingInfo! domain fun x => withNewLemmas #[x] do
      let b := e.bindingBody!.instantiate1 x
      let rb ← simp b
      let eNew ← mkForallFVars #[x] rb.expr
      match rb.proof? with
      | none   => return { expr := eNew }
      | some h => return { expr := eNew, proof? := (← mkForallCongr (← mkLambdaFVars #[x] h)) }
  else
    return { expr := (← dsimp e) }

/-- Adapter for `Meta.simpHaveTelescope` -/
def simpHaveTelescope (e : Expr) : SimpM Result := do
  -- **Note**: Eliminating unused-let declarations in a single pass may produce O(n^2) proofs.
  let zetaUnusedMode := if (← getConfig).zetaUnused then .singlePass else .no
  match (← Meta.simpHaveTelescope e zetaUnusedMode) with
  | .rfl => return { expr := e }
  | .step e' h =>
    if debug.simp.check.have.get (← getOptions) then
      check e'
      check h
    return { expr := e', proof? := h }

/--
Routine for simplifying `let` expressions.

If it is a `have`, we use `simpHaveTelescope` to simplify entire telescopes at once, to avoid quadratic behavior
arising from locally nameless expression representations.

We assume that dependent `let`s are dependent,
but if `Config.letToHave` is enabled then we attempt to transform it into a `have`.
If that does not change it, then it is only `dsimp`ed.
-/
def simpLet (e : Expr) : SimpM Result := do
  withTraceNode `Debug.Meta.Tactic.simp (fun _ => return m!"let{indentExpr e}") do
    assert! e.isLet
    /-
    Recall: `simpLet` is called after `reduceStep` is applied, so `simpLet` is not responsible for zeta reduction.
    Hence, the expression is a `let` or `have` that is not reducible in the current configuration.
    -/
    if e.letNondep! then
      simpHaveTelescope e
    else
      /-
      When `cfg.letToHave` is true, we use `letToHave` to decide whether or not this `let` is dependent.
      If it becomes a `have`, then we can jump right into simplifying the `have` telescope.
      -/
      let e ←
        if (← getConfig).letToHave then
          let eNew ← letToHave e
          if eNew.isLet && eNew.letNondep! then
            trace[Debug.Meta.Tactic.simp] "letToHave ==>{indentExpr eNew}"
            return ← simpHaveTelescope eNew
          pure eNew
        else
          pure e
      /-
      The `let` is dependent.
      We fall back to doing only definitional simplification.

      Note that for `let x := v; b`, if we had a rewrite `h : b = b'` given `x := v` in the local context,
      we could abstract `x` to get `(let x := v; h) : (let x := v; b = b')` and then use the fact that
      this type is definitionally equal to `(let x := v; b) = (let x := v; b')`.
      -/
      return { expr := (← dsimp e) }

private def dsimpReduce : DSimproc := fun e => do
  let mut eNew ← reduce e
  if eNew.isFVar then
    eNew ← reduceFVar (← getConfig) (← getSimpTheorems) eNew
  if eNew != e then return .visit eNew else return .done e

/-- Auxiliary `dsimproc` for not visiting proof terms. -/
private def doNotVisitProofs : DSimproc := fun e => do
  if ← isProof e then
    if !backward.dsimp.proofs.get (← getOptions) then
      return .done e
    else
      return .continue e
  else
    return .continue e

/-- Helper `dsimproc` for `doNotVisitOfNat` and `doNotVisitOfScientific` -/
private def doNotVisit (pred : Expr → Bool) (declName : Name) : DSimproc := fun e => do
  if pred e then
    if (← readThe Simp.Context).isDeclToUnfold declName then
      return .continue e
    else
      -- Users may have added a `[simp]` rfl theorem for the literal
      match (← (← getMethods).dpost e) with
      | .continue none => return .done e
      | r => return r
  else
    return .continue e

/--
Auxiliary `dsimproc` for not visiting `OfNat.ofNat` application subterms.
This is the `dsimp` equivalent of the approach used at `visitApp`.
Recall that we fold orphan raw Nat literals.
-/
private def doNotVisitOfNat : DSimproc := doNotVisit isOfNatNatLit ``OfNat.ofNat

/--
Auxiliary `dsimproc` for not visiting `OfScientific.ofScientific` application subterms.
-/
private def doNotVisitOfScientific : DSimproc := doNotVisit isOfScientificLit ``OfScientific.ofScientific

/--
Auxiliary `dsimproc` for not visiting `Char` literal subterms.
-/
private def doNotVisitCharLit : DSimproc := doNotVisit isCharLit ``Char.ofNat

/--
Given the application `new`, obtained from the application `orig` by definitionally rewriting
some of its arguments, reverts the rewrites that make the type of an instance argument differ
from its expected type at `.instances` transparency. See `backward.dsimp.instanceTypes`.
-/
private partial def revertInstanceTypeChanges (orig new : Expr) : MetaM Expr := do
  let origArgs := orig.getAppArgs
  let newArgs := new.getAppArgs
  if origArgs.size != newArgs.size || origArgs == newArgs then
    return new
  let f := new.getAppFn
  let infos := (← getFunInfoNArgs f newArgs.size).paramInfo
  let fType ← inferType f
  let origFType ← inferType orig.getAppFn
  let flags ← getOptionFlags
  let mut args := newArgs
  repeat
    let changed (i : Nat) := args[i]! != origArgs[i]!
    let mut reverts := #[]
    for h : j in *...infos.size do
      let info := infos[j]
      unless info.isInstance && (changed j || info.backDeps.any changed) do continue
      if info.isDecInst && !flags.instanceTypesDecidable || info.isProp && !flags.instanceTypesProp then
        continue
      if (← hasExpectedType fType args j) then continue
      -- Keep rewrites that do not cause the mismatch.
      unless (← hasExpectedType origFType origArgs j) do continue
      reverts := (info.backDeps.push j).filter changed
      if (← isTracingEnabledFor `Meta.Tactic.simp.instanceTypes) then
        let mut msg := m!"reverting the rewrites of the arguments at positions {reverts} of{indentExpr new}"
        for i in reverts do
          msg := msg ++ m!"\nargument {i} of `{f}`:{indentExpr origArgs[i]!}\nwas rewritten to{indentExpr args[i]!}"
        let instType ← inferType args[j]!
        let expected ← instantiateForall fType (args.extract 0 j)
        let expected := (← whnf expected).bindingDomain!
        addTrace `Meta.Tactic.simp.instanceTypes <| msg ++ m!"\nbecause the instance{indentExpr args[j]!}\nof type{indentExpr instType}\ndoes not have the expected type{indentExpr expected}\nat `.instances` transparency"
      break
    if reverts.isEmpty then break
    for i in reverts do
      args := args.set! i origArgs[i]!
  return if args == newArgs then new else mkAppN f args
where
  hasExpectedType (fType : Expr) (args : Array Expr) (j : Nat) : MetaM Bool := do
    let .forallE _ d _ _ ← whnf (← instantiateForall fType (args.extract 0 j)) | return true
    let type ← inferType args[j]!
    withNewMCtxDepth <| withExactInstancesConfig <| isDefEqGuarded type d

/--
Instantiates the congruence theorem `declName` and returns it with its type. The lookup also finds
theorems of privately imported modules while the current context is an exporting one.
-/
def mkCongrTheoremConst (declName : Name) : MetaM (Expr × Expr) := withoutExporting do
  let thm ← mkConstWithFreshMVarLevels declName
  return (thm, ← inferType thm)

/--
Returns the pack congruence theorems among `thms` (those with a pack or `HEq` hypothesis or an
`HEq` conclusion) indexed by their left-hand sides, and their names. Only candidates retrieved
from the index are tried on a term, so that terms that the left-hand side cannot match are rejected
cheaply.
-/
def getPackCongrIndex (fName : Name) (dsimp : Bool) (thms : List SimpCongrTheorem) :
    SimpM (DiscrTree Name × NameSet) := do
  if let some r := (← get).packCongrIndex[(fName, dsimp)]? then return r
  let mut tree := {}
  let mut packs : NameSet := {}
  for c in thms do
    let keys? ← withNewMCtxDepth do
      let (xs, _, type) ← forallMetaTelescopeReducing (← mkCongrTheoremConst c.theoremName).2
      let isPack ← pure type.isHEq <||> c.hypothesesPos.anyM fun i => do
        let t ← inferType xs[i]!
        return isPackHypothesis t || t.isHEq
      unless isPack do return none
      let lhs := if type.isHEq then type.appFn!.appFn!.appArg! else type.appFn!.appArg!
      return some (← withReducible <| DiscrTree.mkPath lhs)
    if let some keys := keys? then
      tree := tree.insertKeyValue keys c.theoremName
      packs := packs.insert c.theoremName
  modify fun s => { s with packCongrIndex := s.packCongrIndex.insert (fName, dsimp) (tree, packs) }
  return (tree, packs)

/-- The congruence theorems among `thms` to try on `e`: pack ones only if the index retrieves them. -/
def congrCandidates (fName : Name) (dsimp : Bool) (thms : List SimpCongrTheorem) (e : Expr) :
    SimpM (List SimpCongrTheorem) := do
  let (tree, packs) ← getPackCongrIndex fName dsimp thms
  if packs.isEmpty || (← packOld 1) then return thms
  let found := (← withSimpIndexConfig <| tree.getMatchWithExtra e).map (·.1)
  return thms.filter fun c => !packs.contains c.theoremName || found.contains c.theoremName

/--
Instantiates the right-hand side `rhs` of a congruence theorem and reduces the beta redexes and the
projections of constructor applications that the instantiation creates, e.g.
`(Bundle.of Nat).carrier` when a parameter `B'` in `B'.carrier` is instantiated with `Bundle.of Nat`.
The values of the parameters `xs` are not visited.
-/
def instantiateCongrRhs (rhs : Expr) (xs : Array Expr) : MetaM Expr := do
  let vals ← xs.mapM instantiateMVars
  let rhs ← instantiateMVars rhs
  Meta.transform rhs
    (pre := fun s => return if vals.contains s then .done s else .continue)
    (post := fun s => do
      if s.isHeadBetaTarget then return .visit s.headBeta
      if let some s' ← reduceProjOfCtor? s then return .visit s'
      return .continue)

/--
Whether rewriting `e` to `e'` keeps the constructor form: if `e` is an application of the constructor
of a pack structure, so must `e'` be (see `simp.packCongr.ctorOnly`).
-/
def keepsPackCtor (e e' : Expr) : MetaM Bool := do
  if (← packCtorApp? e).isNone then return true
  return (← packCtorApp? e').isSome

/--
Runs `x` (the simplification of a pack value) with pre- and post-methods that skip rewrites breaking
the constructor form, e.g. `ModuleCat.of_coe : of R ↑X = X`, while other rewrites still apply.
-/
def withPackCtorGuard (x : SimpM α) : SimpM α := do
  let m ← getMethods
  let guard (proc : Simproc) : Simproc := fun e => do
    match (← proc e) with
    | .done r => return if (← keepsPackCtor e r.expr) then .done r else .done { expr := e }
    | .visit r => return if (← keepsPackCtor e r.expr) then .visit r else .continue
    | .continue (some r) => return if (← keepsPackCtor e r.expr) then .continue (some r) else .continue
    | .continue none => return .continue
  let dguard (proc : DSimproc) : DSimproc := fun e => do
    match (← proc e) with
    | .done e' => return if (← keepsPackCtor e e') then .done e' else .done e
    | .visit e' => return if (← keepsPackCtor e e') then .visit e' else .continue
    | .continue (some e') => return if (← keepsPackCtor e e') then .continue (some e') else .continue
    | .continue none => return .continue
  let m' := if simp.packCongr.ctorOnly.get (← getOptions) then
    { m with pre := guard m.pre, post := guard m.post, dpre := dguard m.dpre, dpost := dguard m.dpost }
    else m
  let saved := (← get).inPackValue
  modify fun s => { s with inPackValue := true }
  try withReader (fun _ => m'.toMethodsRef) x
  finally modify fun s => { s with inPackValue := saved }

/--
Whether a congruence theorem must be skipped for `e`: theorems about applications of a pack
constructor only apply while simplifying a pack value.
-/
def inPackValueOnly (e : Expr) : SimpM Bool := do
  return !(← get).inPackValue && (← packCtorApp? e).isSome

/--
Whether the theorem `c` must be skipped for `e` (see `inPackValueOnly`). Only theorems with an `Eq`
conclusion, which rewrite a pack value as a whole (e.g. `ModuleCat.of k ↑M = ModuleCat.of k ↑M'`), are
restricted; a theorem with an `HEq` conclusion about a structure constructor, e.g. `ContinuousMap.mk`,
is an ordinary congruence.
-/
def packValueOnlyTheorem (c : SimpCongrTheorem) : MetaM Bool := do
  let (_, type) ← mkCongrTheoremConst c.theoremName
  forallTelescopeReducing type fun _ concl => return concl.isEq

/--
Assigns the unassigned metavariables of the pattern `p` that occur as arguments of applications with
the same constant head and arity as in `e`, to the corresponding subterms of `e`. `isDefEq p e` must
validate the result. Unification alone could assign a metavariable from another occurrence, e.g.
`?f := g` (eta-reduced) from `?f b =?= g b`, while `e` has `fun x => g x` at this position.
-/
partial def preMatchCongrPattern (p e : Expr) : MetaM Unit := do
  if p.isMVar then
    unless (← p.mvarId!.isAssigned) || p.hasLooseBVars || e.hasLooseBVars do
      p.mvarId!.assign e
  else if p.isApp && e.isApp then
    let pf := p.getAppFn
    let ef := e.getAppFn
    -- The levels of `pf` are fresh metavariables: unify them, since assigning the arguments below
    -- skips the type checks that would.
    if pf.isConst && pf.constName? == ef.constName? && p.getAppNumArgs == e.getAppNumArgs then
      for lp in pf.constLevels!, le in ef.constLevels! do
        discard <| isLevelDefEq lp le
      for pa in p.getAppArgs, ea in e.getAppArgs do
        preMatchCongrPattern pa ea

/--
Tries to rewrite `e` with the `@[dsimp_congr]` theorem `c`: dsimps the left-hand sides of its
hypotheses and rebuilds `e` from the right-hand side. Returns `e` itself if
the theorem applies without progress.

In `simpMode`, the new parameters of `HEq` hypotheses that are trailing arguments of the right-hand
side are not dsimped but left to `simp`, together with the arguments of `e` beyond the left-hand
side; the second component is the number of these trailing arguments.
-/
private def tryDSimpCongrTheorem? (c : SimpCongrTheorem) (e : Expr) (simpMode := false) :
    SimpM (Option (Expr × Nat)) := withNewMCtxDepth do
  let h0 ← IO.getNumHeartbeats
  let mode := if simpMode then "simp" else "dsimp"
  let thmShort := c.theoremName.getString!
  let (_, thmType) ← mkCongrTheoremConst c.theoremName
  let (xs, bis, type) ← forallMetaTelescopeReducing thmType
  let some (lhs, rhs) := type.eqOrIff? <|> type.heq?.map fun (_, lhs, _, rhs) => (lhs, rhs)
    | return none
  -- The trailing arguments of the right-hand side that are new parameters of `HEq` hypotheses.
  let heqOuts ← c.hypothesesPos.filterMapM fun i => do
    return (← inferType xs[i]!).heq?.bind fun (_, _, _, r) => if r.isMVar then some r.mvarId! else none
  let rhsArgs := rhs.getAppArgs
  let numTrailing := if simpMode then
    (rhsArgs.reverse.toList.takeWhile fun a => a.isMVar && heqOuts.contains a.mvarId!).length else 0
  let trailing := rhsArgs.extract (rhsArgs.size - numTrailing) rhsArgs.size |>.map (·.mvarId!)
  let numArgs := lhs.getAppNumArgs
  let args := e.getAppArgs
  if args.size < numArgs then return none
  let eFn := mkAppN e.getAppFn (args.extract 0 numArgs)
  let extraArgs := args.extract numArgs args.size
  for x in xs, bi in bis do
    if bi.isInstImplicit then x.mvarId!.setKind .syntheticOpaque
  if (← get).packCongrFailures.contains (c.theoremName, eFn) then
    recordPackStat s!"{mode} {thmShort} cachedfail" ((← IO.getNumHeartbeats) - h0)
    return none
  let hInst ← IO.getNumHeartbeats
  preMatchCongrPattern lhs eFn
  let lhs ← instantiateMVars lhs
  let strictFail := simp.packCongr.strictMatch.get (← getOptions) && lhs.hasExprMVar
  unless !strictFail && (← withSimpMetaConfig <| withAssignableSyntheticOpaque <| isDefEq lhs eFn) do
    modify fun s => { s with packCongrFailures := s.packCongrFailures.insert (c.theoremName, eFn) }
    recordPackStat s!"{mode} {thmShort} instantiate" (hInst - h0)
    recordPackStat s!"{mode} {thmShort} matchfail" ((← IO.getNumHeartbeats) - hInst)
    return none
  let h1 ← IO.getNumHeartbeats
  recordPackStat s!"{mode} {thmShort} instantiate" (hInst - h0)
  recordPackStat s!"{mode} {thmShort} match" (h1 - hInst)
  let mut modified := false
  for i in c.hypothesesPos do
    let hType ← instantiateMVars (← inferType xs[i]!)
    if let some (_, l, _, r) := hType.heq? then
      let l ← instantiateMVars l
      let r ← instantiateMVars r
      let l' ← if trailing.contains r.mvarId! then pure l else dsimp l
      r.mvarId!.assign l'
      modified := modified || l' != l
    else if let some (l, r) := hType.eqOrIff? then
      let l ← instantiateMVars l
      let r ← instantiateMVars r
      if r.isMVar then
        let l' ← dsimp l
        r.mvarId!.assign l'
        modified := modified || l' != l
      else
        let some (ci, us, rArgs) ← packCtorApp? r | return none
        let v ← packEtaM l
        let v' ← if simp.packCongr.ctorOnly.get (← getOptions) && (← packCtorApp? v).isSome then
            dsimpPackValue v
          else withPackCtorGuard <| dsimp v
        let vals ← packFields ci us (rArgs.extract 0 ci.numParams) v'
        for m in rArgs.extract ci.numParams rArgs.size, val in vals do
          m.mvarId!.assign val
        modified := modified || v' != v
    else
      return none
  let h2 ← IO.getNumHeartbeats
  recordPackStat s!"{mode} {thmShort} hyps" (h2 - h1)
  -- The hypotheses are not needed: no proof is built.
  let params := (xs.zip bis).zipIdx.filterMap fun (xb, i) =>
    if c.hypothesesPos.contains i then none else some xb
  unless (← withAssignableSyntheticOpaque <|
      synthesizeArgs (.decl c.theoremName) (params.map (·.2)) (params.map (·.1))) do
    return none
  let eNew ← if modified || simp.packCongr.canonicalize.get (← getOptions) then instantiateCongrRhs rhs xs
    else pure eFn
  modified := modified || eNew != eFn
  if (← hasAssignableMVar eNew) then return none
  if modified then
    trace[Meta.Tactic.simp.congr] "dsimp_congr {c.theoremName}{indentExpr e}\n==>{indentExpr eNew}"
  recordPackStat s!"{mode} {thmShort} finish {modified}" ((← IO.getNumHeartbeats) - h2)
  if simpMode then
    return some (mkAppN eNew extraArgs, numTrailing + extraArgs.size)
  return some (mkAppN eNew (← extraArgs.mapM dsimp), 0)

/--
Applies `@[dsimp_congr]` theorems at the head of `e`. A theorem that applies replaces the visit of
the arguments of `e`, so `post` runs right away.
-/
private def dsimpCongr (post : DSimproc) : DSimproc := fun e => do
  let .const fName _ := e.getAppFn | return .continue
  let thms := (← getDSimpCongrTheorems).get fName
  if thms.isEmpty then return .continue
  let ctorOnly ← inPackValueOnly e
  for c in (← congrCandidates fName true thms e) do
    if ctorOnly && (← packValueOnlyTheorem c) then continue
    let hb ← IO.getNumHeartbeats
    let r ← tryDSimpCongrTheorem? c e
    trace[Debug.Meta.Tactic.simp.congrCost] "dsimp {c.theoremName} {(← IO.getNumHeartbeats) - hb} {r.isSome} {r.any (·.1 != e)}"
    if let some (eNew, _) := r then
      -- Without progress, the arguments still need the plain visit, as in `simp`.
      if eNew == e && debug.simp.packCongr.fallback.get (← getOptions) then continue
      return match (← post eNew) with
        | .visit e' => .visit e'
        | .done e' | .continue (some e') => .done e'
        | .continue none => .done eNew
  return .continue

private partial def dsimpImplCore (e : Expr) : SimpM Expr := do
  let cfg ← getConfig
  unless cfg.dsimp do
    return e
  let m ← getMethods
  let post := m.dpost >> dsimpReduce
  let pre := m.dpre >> dsimpCongr post >> doNotVisitOfNat >> doNotVisitOfScientific >> doNotVisitCharLit >> doNotVisitProofs
  let checkInstanceTypes := backward.dsimp.instanceTypes.get (← getOptions)
  withInDSimpWithCache fun cache => do
    transformWithCache e cache
      (usedLetOnly := cfg.zeta || cfg.zetaUnused)
      (skipInstances := !cfg.instances)
      (pre := pre)
      (post := post)
      (postApp := fun orig new =>
        if checkInstanceTypes then revertInstanceTypeChanges orig new else return new)

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_dsimp]
private def dsimpImpl (e : Expr) : SimpM Expr := do
  if (← isTracingEnabledFor `Debug.Meta.Tactic.simp.dsimpCost) then
    let hb ← IO.getNumHeartbeats
    let r ← dsimpImplCore e
    trace[Debug.Meta.Tactic.simp.dsimpCost] "{(← IO.getNumHeartbeats) - hb} {e != r}:{indentExpr e}"
    return r
  dsimpImplCore e

def visitFn (e : Expr) : SimpM Result := do
  let f := e.getAppFn
  let fNew ← simp f
  if fNew.expr == f then
    return { expr := e }
  else
    let args := e.getAppArgs
    let eNew := mkAppN fNew.expr args
    if fNew.proof?.isNone then return { expr := eNew }
    let mut proof ← fNew.getProof
    for arg in args do
      proof ← Meta.mkCongrFun proof arg
    return { expr := eNew, proof? := proof }

def congrDefault (e : Expr) : SimpM Result := do
  if let some result ← tryAutoCongrTheorem? e then
    result.mkEqTrans (← visitFn result.expr)
  else
    withParent e <| simpAppUsingCongr e

/-- Process the given congruence theorem hypothesis. Return true if it made "progress". -/
def processCongrHypothesis (h : Expr) (hType : Expr) : SimpM Bool := do
  forallTelescopeReducing hType fun xs hType => withNewLemmas xs do
    let lhs ← instantiateMVars hType.appFn!.appArg!
    let r ← simp lhs
    let rhs := hType.appArg!
    rhs.withApp fun m zs => do
      let val ← mkLambdaFVars zs r.expr
      unless (← withSimpMetaConfig <| isDefEq m val) do
        throwCongrHypothesisFailed
      let mut proof ← r.getProof
      if hType.isAppOf ``Iff then
        try proof ← mkIffOfEq proof
        catch _ => throwCongrHypothesisFailed
      unless (← isDefEq h (← mkLambdaFVars xs proof)) do
        throwCongrHypothesisFailed
      /- We used to return `false` if `r.proof? = none` (i.e., an implicit `rfl` proof) because we
          assumed `dsimp` would also be able to simplify the term, but this is not true
          for non-trivial user-provided theorems.
          Example:
          ```
          @[congr] theorem image_congr {f g : α → β} {s : Set α} (h : ∀ a, mem a s → f a = g a) : image f s = image g s :=
          ...

          example {Γ: Set Nat}: (image (Nat.succ ∘ Nat.succ) Γ) = (image (fun a => a.succ.succ) Γ) := by
            simp only [Function.comp_apply]
          ```
          `Function.comp_apply` is a `rfl` theorem, but `dsimp` will not apply it because the composition
          is not fully applied. See comment at issue #1113

          Thus, we have an extra check now if `xs.size > 0`. TODO: refine this test.
      -/
      return r.proof?.isSome || (xs.size > 0 && lhs != r.expr)

/--
Records `e` as the result of a pack congruence theorem, so that `simp` does not try the pack
congruence theorems on it again. The post-lemmas still run on `e` wherever it occurs.
-/
def markSimplified (e : Expr) : SimpM Unit := do
  -- Results inside pack values are not results of `simp` on the same terms elsewhere.
  if (← getConfig).memoize && !(← packOld 2) && !(← get).inPackValue then
    modify fun s => { s with packCongrDone := s.packCongrDone.insert e }

/--
Whether every instance argument in the right-hand side of the congruence theorem `declName` has its
expected type at `.instances` transparency, for all values of the parameters.
-/
def packCongrConsistent (declName : Name) : SimpM Bool := do
  if let some b := (← get).packCongrConsistent[declName]? then return b
  let type ← inferType (← mkConstWithLevelParams declName)
  let b ← forallTelescopeReducing type fun _ type => instancesConsistent type.appArg!
  modify fun s => { s with packCongrConsistent := s.packCongrConsistent.insert declName b }
  return b

/--
Processes a hypothesis of a pack congruence theorem (see `mkSimpCongrTheorem`): a pack hypothesis
`p = S.mk ps fs'` or a hypothesis `a = a'` without binders. Returns whether it made progress, also by
a definitional rewrite, or `none` for other hypotheses. A pack hypothesis simplifies the pack value
`p`, keeping it a constructor application (see `simp.packCongr.ctorOnly`).
-/
def processPackCongrHypothesis? (h hType : Expr) (defeq := true) : SimpM (Option Bool) := do
  if let some (_, lhs, _, rhs) := hType.heq? then
    -- DEBUG (`debug.simp.congr.allowHEq`)
    let lhs ← instantiateMVars lhs
    let r ← simp lhs
    let rhs ← instantiateMVars rhs
    unless rhs.isMVar do throwCongrHypothesisFailed
    if defeq then rhs.mvarId!.assign r.expr
    else unless (← withSimpMetaConfig <| isDefEq rhs r.expr) do throwCongrHypothesisFailed
    let proof ← match r.proof? with
      | none   => mkHEqRefl lhs
      | some p => do
        let α ← inferType lhs
        pure <| mkApp4 (mkConst ``heq_of_eq [← getLevel α]) α lhs r.expr p
    h.mvarId!.assign (← mkExpectedTypeHint proof (← instantiateMVars hType))
    if (← packOld 8) then return some r.proof?.isSome
    return some (r.expr != lhs)
  let some (_, lhs, rhs) := hType.eq? | return none
  let rhs ← instantiateMVars rhs
  if rhs.isMVar then
    -- A plain hypothesis `a = a'`: unlike in other congruence theorems, a definitional rewrite
    -- counts as progress, since the default congruence cannot rewrite `a` together with the
    -- arguments that depend on it.
    let lhs ← instantiateMVars lhs
    let r ← simp lhs
    unless (← withSimpMetaConfig <| isDefEq rhs r.expr) do throwCongrHypothesisFailed
    h.mvarId!.assign (← mkExpectedTypeHint (← r.getProof) (← instantiateMVars hType))
    return some (r.expr != lhs)
  if rhs.getAppFn.isMVar then return none
  let some (ci, us, rArgs) ← packCtorApp? rhs | return none
  let v ← packEtaM (← instantiateMVars lhs)
  let r ← if simp.packCongr.ctorOnly.get (← getOptions) && (← packCtorApp? v).isSome then
      simpPackValue v
    else withPackCtorGuard <| simp v
  let vals ← packFields ci us (rArgs.extract 0 ci.numParams) r.expr
  for m in rArgs.extract ci.numParams rArgs.size, val in vals do
    unless (← withSimpMetaConfig <| withAssignableSyntheticOpaque <| isDefEq m val) do
      throwCongrHypothesisFailed
  let proof ← match r.proof? with
    | none   => mkEqRefl v
    | some p => pure p
  h.mvarId!.assign (← mkExpectedTypeHint proof (← instantiateMVars hType))
  return some (r.expr != v)

/-- Try to rewrite `e` children using the given congruence theorem -/
def trySimpCongrTheoremCore? (c : SimpCongrTheorem) (e : Expr) : SimpM (Option Result) := withNewMCtxDepth do withParent e do
  recordCongrTheorem c.theoremName
  trace[Debug.Meta.Tactic.simp.congr] "{c.theoremName}, {e}"
  let (thm, thmType) ← mkCongrTheoremConst c.theoremName
  let thmHasBinderNameHint := thmType.hasBinderNameHint
  let (xs, bis, type) ← forallMetaTelescopeReducing thmType
  if c.hypothesesPos.any (· ≥ xs.size) then
    return none
  let isIff := type.isAppOf ``Iff
  let isHEq := type.isHEq
  let pack ← pure isHEq <||> c.hypothesesPos.anyM fun i => do
    let t ← inferType xs[i]!
    return isPackHypothesis t || t.isHEq
  let lhs := if isHEq then type.appFn!.appFn!.appArg! else type.appFn!.appArg!
  let rhs := type.appArg!
  let numArgs := lhs.getAppNumArgs
  let mut e := e
  let mut extraArgs := #[]
  if e.getAppNumArgs > numArgs then
    let args := e.getAppArgs
    e := mkAppN e.getAppFn args[*...numArgs]
    extraArgs := args[numArgs...*].toArray
  if pack then
    -- Take instances from the term instead of synthesizing them during unification (see
    -- `congrView?`).
    for x in xs, bi in bis do
      if bi.isInstImplicit then x.mvarId!.setKind .syntheticOpaque
  if pack then
    if !(← packOld 4) && (← get).packCongrFailures.contains (c.theoremName, e) then return none
    preMatchCongrPattern lhs e
  -- Instantiated, the pattern is often free of metavariables, so that the defeq cache applies.
  let lhs' ← if pack then instantiateMVars lhs else pure lhs
  if pack && simp.packCongr.strictMatch.get (← getOptions) && lhs'.hasExprMVar then
    modify fun s => { s with packCongrFailures := s.packCongrFailures.insert (c.theoremName, e) }
    return none
  if (← withSimpMetaConfig <| (if pack then withAssignableSyntheticOpaque else id) <| isDefEq lhs' e) then
    let mut modified := false
    let mut defeq := true
    for i in c.hypothesesPos do
      let h := xs[i]!
      let hType ← instantiateMVars (← inferType h)
      let hType ← if thmHasBinderNameHint then hType.resolveBinderNameHint else pure hType
      try
        if let some progress ← (if pack then processPackCongrHypothesis? h hType defeq else pure none) then
          modified := modified || progress
          -- conservatively: any non-`HEq` hypothesis with a proof breaks definitional typing
          unless hType.isHEq do
            if (← instantiateMVars h).isAppOf ``Eq.refl |>.not then pure ()
        else if (← processCongrHypothesis h hType) then
          modified := true
          defeq := false
      catch _ =>
        trace[Meta.Tactic.simp.congr] "processCongrHypothesis {c.theoremName} failed {hType}"
        -- Remark: we don't need to check ex.isMaxRecDepth anymore since `try .. catch ..`
        -- does not catch runtime exceptions by default.
        return none
    unless modified do
      trace[Meta.Tactic.simp.congr] "{c.theoremName} not modified"
      -- Other congruence theorems or the default congruence would only rewrite the parts of the
      -- packs separately.
      if pack && !debug.simp.packCongr.fallback.get (← getOptions) then
        return some (← congrArgs { expr := e } extraArgs)
      return none
    unless (← (if pack then withAssignableSyntheticOpaque else id) <| synthesizeArgs (.decl c.theoremName) bis xs) do
      trace[Meta.Tactic.simp.congr] "{c.theoremName} synthesizeArgs failed"
      return none
    if pack then
      for x in xs do
        unless (← x.mvarId!.isAssigned) do
          trace[Meta.Tactic.simp.congr] "{c.theoremName} has unassigned parameters"
          return none
    let eNew ← if pack then instantiateCongrRhs rhs xs else instantiateMVars rhs
    let mut proof ← instantiateMVars (mkAppN thm xs)
    if isHEq then
      -- DEBUG (`debug.simp.congr.allowHEq`)
      let α ← inferType e
      proof := mkApp4 (mkConst ``eq_of_heq [← getLevel α]) α e eNew proof
    if isIff then
      try proof ← mkAppM ``propext #[proof]
      catch _ => return none
    if (← hasAssignableMVar proof <||> hasAssignableMVar eNew) then
      trace[Meta.Tactic.simp.congr] "{c.theoremName} has unassigned metavariables"
      return none
    let r ← congrArgs { expr := eNew, proof? := proof } extraArgs
    if pack then
      let consistent ← pure extraArgs.isEmpty <&&> packCongrConsistent c.theoremName
      modify fun s => { s with congrResultConsistent := consistent }
      markSimplified r.expr
    return r
  else
    if pack then
      modify fun s => { s with packCongrFailures := s.packCongrFailures.insert (c.theoremName, e) }
    return none

def trySimpCongrTheorem? (c : SimpCongrTheorem) (e : Expr) : SimpM (Option Result) := do
  let hb ← IO.getNumHeartbeats
  let r ← trySimpCongrTheoremCore? c e
  recordPackStat s!"congr {c.theoremName.getString!} {r.isSome}" ((← IO.getNumHeartbeats) - hb)
  trace[Debug.Meta.Tactic.simp.congrCost] "simp {c.theoremName} {(← IO.getNumHeartbeats) - hb} {r.isSome} {r.any (·.expr != e)}"
  return r

/--
Performs congruence on `e` through a `@[congr_view]` view: rewrites `e` to the view, performs
congruence there using `congrCore`, and unfolds the view function again. The flag in the result
says whether its instance arguments need no check against `backward.dsimp.instanceTypes`.
-/
def congrView? (congrCore : Expr → SimpM Result) (e : Expr) : SimpM (Option (Result × Bool)) := do
  let views ← getCongrViews
  if views.root.isEmpty then return none
  let candidates ← withSimpIndexConfig <| views.getMatchWithExtra e
  if candidates.isEmpty then return none
  let args := e.getAppArgs
  unless simp.congrView.enabled.get (← getOptions) do
    let h0 ← IO.getNumHeartbeats
    let r ← congrCore e
    trace[Debug.Meta.Tactic.simp.congrViewCost] "plain congr={(← IO.getNumHeartbeats) - h0} progress={r.expr != e}:{indentExpr e}"
    return some (r, false)
  for (v, numExtra) in candidates do
    let eFn := mkAppN e.getAppFn args[*...(args.size - numExtra)]
    let extraArgs := args[(args.size - numExtra)...*].toArray
    let h0 ← IO.getNumHeartbeats
    let some eView ← instantiateView? v eFn
      | trace[Debug.Meta.Tactic.simp.congrViewCost] "fail match={(← IO.getNumHeartbeats) - h0}:{indentExpr e}"
        continue
    let h1 ← IO.getNumHeartbeats
    let r ← congrCore eView
    let h2 ← IO.getNumHeartbeats
    if r.expr == eView then
      trace[Meta.Tactic.simp.congrView] "{.ofConstName v.theoremName}: no progress on{indentExpr e}"
      let r ← congrArgs { expr := eFn } extraArgs
      trace[Debug.Meta.Tactic.simp.congrViewCost] "view match={h1 - h0} congr={h2 - h1} consistent=0 unfold=0 proof={(← IO.getNumHeartbeats) - h2} progress=false:{indentExpr e}"
      return some (r, false)
    let consistent ← pure v.instancesConsistent <&&>
      (pure !backward.dsimp.instanceTypes.get (← getOptions) <||>
        return (← revertInstanceTypeChanges eView r.expr) == r.expr)
    let h3 ← IO.getNumHeartbeats
    let eNew ← unfoldCongrView v.viewFn r.expr
    let h4 ← IO.getNumHeartbeats
    let proof? ← r.proof?.mapM fun h => do mkExpectedTypeHint h (← mkEq eFn eNew)
    let r ← congrArgs { expr := eNew, proof? } extraArgs
    trace[Debug.Meta.Tactic.simp.congrViewCost] "view match={h1 - h0} congr={h2 - h1} consistent={h3 - h2} unfold={h4 - h3} proof={(← IO.getNumHeartbeats) - h4} progress=true:{indentExpr e}"
    if r.expr == e then
      trace[Meta.Tactic.simp.congrView] "{.ofConstName v.theoremName}: round trip without change on{indentExpr e}"
      return some ({ expr := e }, true)
    trace[Meta.Tactic.simp.congrView] "{.ofConstName v.theoremName}:{indentExpr e}\n==>{indentExpr r.expr}"
    if simp.congrView.markResult.get (← getOptions) && (← getConfig).memoize then
      modify fun s => { s with cache := s.cache.insert r.expr { expr := r.expr } }
    return some (r, consistent && extraArgs.isEmpty)
  return none
where
  /--
  Returns the right-hand side of `v` instantiated so that its left-hand side is defeq to `eFn`.

  Successful matches are cached by the head of `eFn` and its arguments at the non-data positions
  (see `CongrView.dataPos`), provided these contain no metavariables. This is sound: if `eFn'` has
  the same head and the same arguments at the non-data positions, then instantiating the non-data
  parameters as for `eFn` and each data parameter with the argument of `eFn'` at its position
  makes the left-hand side agree with `eFn'` at the non-data positions up to the defeq
  established for `eFn`, and syntactically at the data positions. The data parameters are
  well-typed because their types only depend on non-data parameters, and the types of the
  corresponding arguments of `eFn'` only depend on its non-data arguments.
  -/
  instantiateView? (v : CongrView) (eFn : Expr) : SimpM (Option Expr) := do
    let fnArgs := eFn.getAppArgs
    let key? : Option (Name × Expr × Array Expr) :=
      if v.dataPos.isEmpty then none else
        let nonData := fnArgs.toList.zipIdx.filterMap fun (a, q) =>
          if v.dataPos.any (·.2 == q) then none else some a
        if eFn.getAppFn.hasMVar || nonData.any (·.hasMVar) then none
        else some (v.theoremName, eFn.getAppFn, nonData.toArray)
    if let some key := key? then
      if let some (thm, vals) := (← get).congrViewCache[key]? then
        let mut vals? := vals
        for (i, p) in v.dataPos do
          vals? := vals?.set! i (some fnArgs[p]!)
        let some vals := vals?.mapM id | return none
        let type ← instantiateForall (← withoutExporting <| inferType thm) vals
        let some (_, _, rhs) := type.eq? | return none
        trace[Debug.Meta.Tactic.simp.congrView] "{.ofConstName v.theoremName}: cached instantiation"
        return some rhs
    let some (rhs, thm, vals) ← withNewMCtxDepth do
        let (thm, thmType) ← mkCongrTheoremConst v.theoremName
        let (xs, bis, type) ← forallMetaTelescope thmType
        let some (_, lhs, rhs) := type.eq? | return none
        if simp.congrView.unifyInstances.get (← getOptions) then
          -- `isDefEq` would synthesize stuck instance metavariables (`synthPending`), possibly
          -- choosing a different instance path than the term, which every later comparison then
          -- has to bridge. `synthPending` skips synthetic opaque metavariables.
          let insts := (xs.zip bis).filterMap fun (x, bi) => if bi.isInstImplicit then some x.mvarId! else none
          for m in insts do m.setKind .syntheticOpaque
          unless (← withSimpMetaConfig <| withAssignableSyntheticOpaque <| isDefEq lhs eFn) do return none
          for m in insts do
            unless (← m.isAssigned) do
              let some val ← synthInstance? (← m.getType) | return none
              unless (← withAssignableSyntheticOpaque <| isDefEq (mkMVar m) val) do return none
        else
          unless (← withSimpMetaConfig <| isDefEq lhs eFn) do return none
        let rhs ← instantiateMVars rhs
        if rhs.hasMVar then return none
        let thm ← instantiateMVars thm
        let vals ← xs.mapM fun x => do
          let x ← instantiateMVars x
          return if x.hasMVar then none else some x
        return some (rhs, thm, vals)
      | return none
    if let some key := key? then
      let vals := v.dataPos.foldl (init := vals) fun vals (i, _) => vals.set! i none
      let nonDataOk := (List.range vals.size).all fun i => v.dataPos.any (·.1 == i) || vals[i]!.isSome
      if nonDataOk && !thm.hasMVar then
        modify fun s => { s with congrViewCache := s.congrViewCache.insert key (thm, vals) }
    return some rhs

/--
Applies a `@[dsimp_congr]` theorem in `simp`: rewrites `e` definitionally as `dsimp` would, except
for the trailing arguments that are new parameters of `HEq` hypotheses, which are then simplified by
ordinary congruence (see `tryDSimpCongrTheorem?`). Thus a proof is only needed for these arguments,
and it does not involve `HEq`.
-/
def dsimpCongrInSimp? (e : Expr) (skip : List SimpCongrTheorem) : SimpM (Option Result) := do
  let .const fName _ := e.getAppFn | return none
  let thms := (← getDSimpCongrTheorems).get fName
  if thms.isEmpty then return none
  let ctorOnly ← inPackValueOnly e
  for c in (← congrCandidates fName true thms e) do
    -- `simp` applies theorems that are also `@[congr]` theorems with proofs instead.
    if skip.any (·.theoremName == c.theoremName) then continue
    if ctorOnly && (← packValueOnlyTheorem c) then continue
    let hb ← IO.getNumHeartbeats
    let some (eNew, n) ← tryDSimpCongrTheorem? c e (simpMode := true) | continue
    let args := eNew.getAppArgs
    let k := args.size - n
    let hA ← IO.getNumHeartbeats
    let r ← congrArgs { expr := mkAppN eNew.getAppFn (args.extract 0 k) } (args.extract k args.size)
    recordPackStat s!"simp {c.theoremName.getString!} trailingArgs" ((← IO.getNumHeartbeats) - hA)
    trace[Debug.Meta.Tactic.simp.congrCost] "simp-dsimp_congr {c.theoremName} {(← IO.getNumHeartbeats) - hb} true {r.expr != e}"
    if r.expr == e then
      if debug.simp.packCongr.fallback.get (← getOptions) then return none
      return some { expr := e }
    let consistent ← packCongrConsistent c.theoremName
    modify fun s => { s with congrResultConsistent := consistent }
    markSimplified r.expr
    let proof? ← r.proof?.mapM fun h => do mkExpectedTypeHint h (← mkEq e r.expr)
    return some { r with proof? }
  return none

def congrCore (e : Expr) : SimpM Result := do
  let f := e.getAppFn
  if f.isConst then
    let congrThms ← getSimpCongrTheorems
    let disabled := debug.simp.congr.disabled.get (← getOptions)
    let all := (congrThms.get f.constName!).filter fun c => disabled != c.theoremName.toString
    let cs ← if all.isEmpty then pure all else congrCandidates f.constName! false all e
    -- Pack congruence theorems come first: their index already checked the left-hand side.
    let packs : NameSet := ((← get).packCongrIndex[(f.constName!, false)]?.map (·.2)).getD {}
    let (packCs, otherCs) := cs.partition (packs.contains ·.theoremName)
    unless (← get).packCongrDone.contains e do
      for c in packCs do
        if let some r ← trySimpCongrTheorem? c e then return r
      if let some r ← dsimpCongrInSimp? e all then return r
    for c in otherCs do
      if let some r ← trySimpCongrTheorem? c e then return r
    congrDefault e
  else
    congrDefault e

def congr (e : Expr) : SimpM Result := do
  if let some (r, _) ← congrView? congrCore e then return r
  congrCore e

/-- Whether both sides of the `simp` theorem `thm` are applications of a pack constructor. -/
def isPackCtorTheorem (thm : SimpTheorem) : SimpM Bool := do
  let key := thm.origin.key
  if let some b := (← get).packCtorThms[key]? then return b
  let b ← withNewMCtxDepth do
    forallTelescopeReducing (← inferType (← thm.getValue)) fun _ type => do
      let some (_, lhs, rhs) := type.eq? | return false
      return (← packCtorApp? lhs).isSome && (← packCtorApp? rhs).isSome
  modify fun s => { s with packCtorThms := s.packCtorThms.insert key b }
  return b

/-- Rewrites the pack value `e` at its root by a `simp` theorem whose sides are pack values. -/
def rewritePackRoot? (e : Expr) (rflOnly : Bool) : SimpM (Option Result) := do
  for thms in (← getSimpTheorems) do
    let cands ← withSimpIndexConfig <| thms.post.getMatchWithExtra e
    for (thm, n) in cands.insertionSort (fun a b => a.1.priority > b.1.priority) do
      if thms.erased.contains thm.origin then continue
      if rflOnly && !thm.rfl then continue
      unless (← isPackCtorTheorem thm) do continue
      if let some r ← tryTheoremWithExtraArgs? e thm n then
        if r.expr != e then return some r
  return none

/--
The trailing arguments of `e` that are explicit and that no other argument depends on: they can be
rewritten without the other fields of a pack value, e.g. the iterator in `IterPack.mk α it`.
-/
def independentTrailingArgs (e : Expr) : MetaM Nat := do
  let args := e.getAppArgs
  let infos := (← getFunInfoNArgs e.getAppFn args.size).paramInfo
  let mut k := args.size
  while h : 0 < k ∧ k ≤ infos.size do
    let info := infos[k - 1]
    unless info.binderInfo.isExplicit && !info.hasFwdDeps do break
    k := k - 1
  return args.size - k

/-- Runs `x` while simplifying a pack value (see `State.inPackValue`). -/
def withInPackValue (x : SimpM α) : SimpM α := do
  let saved := (← get).inPackValue
  modify fun s => { s with inPackValue := true }
  try x finally modify fun s => { s with inPackValue := saved }

/--
Rewrites the fields of the pack value `v` one by one, skipping instances, and keeps the rewrites
that preserve the types of the instance fields. This is what `dsimp` does to arguments without a
pack congruence theorem, so a pack that no lens covers is simplified as before.
-/
def plainPackStep? (v : Expr) : SimpM (Option Expr) := do
  let args := v.getAppArgs
  let infos := (← getFunInfoNArgs v.getAppFn args.size).paramInfo
  let mut args' := args
  for h : i in *...args.size do
    if infos[i]?.any (·.isInstance) then continue
    args' := args'.set! i (← dsimp args[i])
  if args' == args then return none
  let mut v' := mkAppN v.getAppFn args'
  if backward.dsimp.instanceTypes.get (← getOptions) then
    v' ← revertInstanceTypeChanges v v'
  return if v' == v then none else some v'

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_simp_pack_value]
partial def simpPackValueImpl (v : Expr) : SimpM Result := do
  if let some r := (← get).packValueCache[v]? then return r
  let r ← withInPackValue <| loop { expr := v } 0
  modify fun s => { s with packValueCache := s.packValueCache.insert v r }
  return r
where
  loop (acc : Result) (i : Nat) : SimpM Result := do
    if i > 64 then return acc
    let v := acc.expr
    let mut step? ← congrStep? v
    if step?.isNone then step? ← fieldsStep? v
    if step?.isNone then step? ← rewritePackRoot? v false
    if step?.isNone then step? ← (·.map ({ expr := · })) <$> plainPackStep? v
    let some r := step? | return acc
    if r.expr == v then return acc
    loop (← acc.mkEqTrans r) (i + 1)
  congrStep? (v : Expr) : SimpM (Option Result) := do
    let .const fName _ := v.getAppFn | return none
    let all := (← getSimpCongrTheorems).get fName
    unless all.isEmpty do
      let cs ← congrCandidates fName false all v
      let packs : NameSet := ((← get).packCongrIndex[(fName, false)]?.map (·.2)).getD {}
      for c in cs do
        unless packs.contains c.theoremName do continue
        if let some r ← trySimpCongrTheorem? c v then
          if r.expr != v then return some r
    if let some r ← dsimpCongrInSimp? v all then
      if r.expr != v then return some r
    return none
  fieldsStep? (v : Expr) : SimpM (Option Result) := do
    let n ← independentTrailingArgs v
    if n == 0 then return none
    let args := v.getAppArgs
    let k := args.size - n
    let r ← congrArgs { expr := mkAppN v.getAppFn (args.extract 0 k) } (args.extract k args.size)
    return if r.expr == v then none else some r

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_dsimp_pack_value]
partial def dsimpPackValueImpl (v : Expr) : SimpM Expr := do
  if let some r := (← get).packValueDCache[v]? then return r
  let r ← withInPackValue <| loop v 0
  modify fun s => { s with packValueDCache := s.packValueDCache.insert v r }
  return r
where
  loop (v : Expr) (i : Nat) : SimpM Expr := do
    if i > 64 then return v
    let mut step? ← congrStep? v
    if step?.isNone then step? ← fieldsStep? v
    if step?.isNone then step? ← (·.map (·.expr)) <$> rewritePackRoot? v true
    if step?.isNone then step? ← plainPackStep? v
    let some v' := step? | return v
    if v' == v then return v
    loop v' (i + 1)
  congrStep? (v : Expr) : SimpM (Option Expr) := do
    let .const fName _ := v.getAppFn | return none
    let thms := (← getDSimpCongrTheorems).get fName
    if thms.isEmpty then return none
    for c in (← congrCandidates fName true thms v) do
      if let some (v', _) ← tryDSimpCongrTheorem? c v then
        if v' != v then return some v'
    return none
  fieldsStep? (v : Expr) : SimpM (Option Expr) := do
    let n ← independentTrailingArgs v
    if n == 0 then return none
    let args := v.getAppArgs
    let k := args.size - n
    let fields ← (args.extract k args.size).mapM dsimp
    let v' := mkAppN v.getAppFn (args.extract 0 k ++ fields)
    return if v' == v then none else some v'

def simpApp (e : Expr) : SimpM Result := do
  if isOfNatNatLit e || isOfScientificLit e || isCharLit e then
    -- Recall that we fold "orphan" kernel Nat literals `n` into `OfNat.ofNat n`
    return { expr := e }
  else
    modify fun s => { s with congrResultConsistent := false }
    let (r, consistent) ← match (← congrView? congrCore e) with
      | some r => pure r
      | none => do
        let r ← congrCore e
        pure (r, (← get).congrResultConsistent)
    unless backward.dsimp.instanceTypes.get (← getOptions) do return r
    if consistent && simp.congrView.skipInstanceCheck.get (← getOptions) then return r
    let hb ← IO.getNumHeartbeats
    let eNew ← revertInstanceTypeChanges e r.expr
    recordPackStat "simpApp check" ((← IO.getNumHeartbeats) - hb)
    trace[Debug.Meta.Tactic.simp.instanceCheckCost] "{(← IO.getNumHeartbeats) - hb} view={consistent} reverted={eNew != r.expr}:{indentExpr e}" 
    if eNew == r.expr then return r
    -- Arguments that instance arguments depend on are only rewritten definitionally, except
    -- possibly by user congruence theorems.
    if r.proof?.isNone || (← withNewMCtxDepth <| withDefault <| isDefEqGuarded eNew r.expr) then
      return { r with expr := eNew }
    return { expr := e }

def simpStep (e : Expr) : SimpM Result := do
  match e with
  | .mdata m e   => let r ← simp e; return { r with expr := mkMData m r.expr }
  | .proj ..     => simpProj e
  | .app ..      => simpApp e
  | .lam ..      => simpLambda e
  | .forallE ..  => simpForall e
  | .letE ..     => simpLet e
  | .const ..    => simpConst e
  | .bvar ..     => unreachable!
  | .sort ..     => return { expr := e }
  | .lit ..      => return { expr := e }
  | .mvar ..     => return { expr := (← instantiateMVars e) }
  | .fvar ..     => return { expr := (← reduceFVar (← getConfig) (← getSimpTheorems) e) }

def cacheResult (e : Expr) (cfg : Config) (r : Result) : SimpM Result := do
  if cfg.memoize && r.cache then
    modify fun s => { s with cache := s.cache.insert e r }
  return r

partial def simpLoop (e : Expr) : SimpM Result := withIncRecDepth do
  let cfg ← getConfig
  if cfg.memoize then
    let cache := (← get).cache
    if let some result := cache.find? e then
      return result
  if (← get).numSteps > cfg.maxSteps then
    throwError "`simp` failed: maximum number of steps exceeded"
  else
    checkSystem "simp"
    modify fun s => { s with numSteps := s.numSteps + 1 }
    match (← pre e) with
    | .done r  => cacheResult e cfg r
    | .visit r => cacheResult e cfg (← r.mkEqTrans (← simpLoop r.expr))
    | .continue none => visitPreContinue cfg { expr := e }
    | .continue (some r) => visitPreContinue cfg r
where
  visitPreContinue (cfg : Config) (r : Result) : SimpM Result := do
    let eNew ← reduceStep r.expr
    if eNew != r.expr then
      trace[Debug.Meta.Tactic.simp] "reduceStep (pre) {e} => {eNew}"
      let r := { r with expr := eNew }
      cacheResult e cfg (← r.mkEqTrans (← simpLoop r.expr))
    else
      let r ← r.mkEqTrans (← simpStep r.expr)
      visitPost cfg r
  visitPost (cfg : Config) (r : Result) : SimpM Result := do
    match (← post r.expr) with
    | .done r' => cacheResult e cfg (← r.mkEqTrans r')
    | .continue none => visitPostContinue cfg r
    | .visit r' | .continue (some r') => visitPostContinue cfg (← r.mkEqTrans r')
  visitPostContinue (cfg : Config) (r : Result) : SimpM Result := do
    let mut r := r
    unless cfg.singlePass || e == r.expr do
      r ← r.mkEqTrans (← simpLoop r.expr)
    cacheResult e cfg r

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_simp]
def simpImpl (e : Expr) : SimpM Result := withIncRecDepth do
  if (← isProof e) then
    return { expr := e }
  trace[Meta.Tactic.simp.heads] "{repr e.toHeadIndex}"
  simpLoop e

@[inline] def withCatchingRuntimeEx (x : SimpM α) : SimpM α := do
  if (← getConfig).catchRuntime then
    tryCatchRuntimeEx x
      fun ex => do
        reportDiag (← get).diag
        if ex.isRuntime then
          throwNestedTacticEx `simp ex
        else
          throw ex
  else
    x

/--
For `rfl` theorems and simprocs, there might not be an explicit reference in the proof term, so
we record (all non-builtin) usages explicitly.
-/
private def recordSimpUses (s : State) : MetaM Unit := do
  for (thm, _) in s.usedTheorems.map do
    if let .decl declName .. := thm then
      if !(← isBuiltinSimproc declName) then
        recordExtraModUseFromDecl (isMeta := false) declName

def mainCore (e : Expr) (ctx : Context) (s : State := {}) (methods : Methods := {}) : MetaM (Result × State) := do
  let (r, s) ← SimpM.run ctx s methods <| withCatchingRuntimeEx <| simp e
  recordSimpUses s
  return (r, s)

def main (e : Expr) (ctx : Context) (stats : Stats := {}) (methods : Methods := {}) : MetaM (Result × Stats) := do
  let (r, s) ← mainCore e ctx { stats with } methods
  return (r, { s with })

def dsimpMainCore (e : Expr) (ctx : Context) (s : State := {}) (methods : Methods := {}) : MetaM (Expr × State) := do
  let (r, s) ← SimpM.run ctx s methods <| withCatchingRuntimeEx <| dsimp e
  recordSimpUses s
  return (r, s)

def dsimpMain (e : Expr) (ctx : Context) (stats : Stats := {}) (methods : Methods := {}) : MetaM (Expr × Stats) := do
  let (r, s) ← dsimpMainCore e ctx { stats with } methods
  return (r, { s with })

end Simp
open Simp (SimprocsArray Stats)

def simpCore (e : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (s : Simp.State := {}) : MetaM (Simp.Result × Simp.State) := do profileitM Exception "simp" (← getOptions) do
  match discharge? with
  | none   => Simp.mainCore e ctx s (methods := Simp.mkDefaultMethodsCore simprocs)
  | some d => Simp.mainCore e ctx s (methods := Simp.mkMethods simprocs d (wellBehavedDischarge := false))

def simp (e : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (stats : Stats := {}) : MetaM (Simp.Result × Stats) := do profileitM Exception "simp" (← getOptions) do
  let (r, s) ← simpCore e ctx simprocs discharge? { stats with }
  return (r, { s with })

def dsimp (e : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[])
    (stats : Stats := {}) : MetaM (Expr × Stats) := do profileitM Exception "dsimp" (← getOptions) do
  Simp.dsimpMain e ctx stats (methods := Simp.mkDefaultMethodsCore simprocs )

/-- See `simpTarget`. This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def simpTargetCore (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option MVarId × Stats) := do
  let target ← instantiateMVars (← mvarId.getType)
  let (r, stats) ← simp target ctx simprocs discharge? stats
  if mayCloseGoal && r.expr.isTrue then
    match r.proof? with
    | some proof => mvarId.assign (← mkOfEqTrue proof)
    | none => mvarId.assign (mkConst ``True.intro)
    return (none, stats)
  else
    return (← applySimpResultToTarget mvarId target r, stats)

/--
  Simplify the given goal target (aka type). Return `none` if the goal was closed. Return `some mvarId'` otherwise,
  where `mvarId'` is the simplified new goal. -/
def simpTarget (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option MVarId × Stats) :=
  mvarId.withContext do
    mvarId.checkNotAssigned `simp
    simpTargetCore mvarId ctx simprocs discharge? mayCloseGoal stats

/--
Applies the result `r` for `type` (which is inhabited by `val`). Returns `none` if the goal was closed. Returns `some (val', type')`
otherwise, where `val' : type'` and `type'` is the simplified `type`.

This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def applySimpResult (mvarId : MVarId) (val : Expr) (type : Expr) (r : Simp.Result) (mayCloseGoal := true) : MetaM (Option (Expr × Expr)) := do
  if mayCloseGoal && r.expr.isFalse then
    match r.proof? with
    | some eqProof => mvarId.assign (← mkFalseElim (← mvarId.getType) (mkApp4 (mkConst ``Eq.mp [Level.zero]) type r.expr eqProof val))
    | none => mvarId.assign (← mkFalseElim (← mvarId.getType) val)
    return none
  else
    match r.proof? with
    | some eqProof =>
      let u ← getLevel type
      return some (mkApp4 (mkConst ``Eq.mp [u]) type r.expr eqProof val, r.expr)
    | none =>
      if r.expr != type then
        return some ((← mkExpectedTypeHint val r.expr), r.expr)
      else
        return some (val, r.expr)

def applySimpResultToFVarId (mvarId : MVarId) (fvarId : FVarId) (r : Simp.Result) (mayCloseGoal : Bool) : MetaM (Option (Expr × Expr)) := do
  let localDecl ← fvarId.getDecl
  applySimpResult mvarId (mkFVar fvarId) localDecl.type r mayCloseGoal

/--
  Simplify `prop` (which is inhabited by `proof`). Return `none` if the goal was closed. Return `some (proof', prop')`
  otherwise, where `proof' : prop'` and `prop'` is the simplified `prop`.

  This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def simpStep (mvarId : MVarId) (proof : Expr) (prop : Expr) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option (Expr × Expr) × Stats) := do
  let (r, stats) ← simp prop ctx simprocs discharge? stats
  return (← applySimpResult mvarId proof prop r (mayCloseGoal := mayCloseGoal), stats)

def applySimpResultToLocalDeclCore (mvarId : MVarId) (fvarId : FVarId) (r : Option (Expr × Expr)) : MetaM (Option (FVarId × MVarId)) := do
  match r with
  | none => return none
  | some (value, type') =>
    let localDecl ← fvarId.getDecl
    if localDecl.type != type' then
      let mvarId ← mvarId.assert localDecl.userName type' value
      let mvarId ← mvarId.tryClear localDecl.fvarId
      let (fvarId, mvarId) ← mvarId.intro1P
      return some (fvarId, mvarId)
    else
      return some (fvarId, mvarId)

/--
  Simplify `simp` result to the given local declaration. Return `none` if the goal was closed.
  This method assumes `mvarId` is not assigned, and we are already using `mvarId`s local context. -/
def applySimpResultToLocalDecl (mvarId : MVarId) (fvarId : FVarId) (r : Simp.Result) (mayCloseGoal : Bool) : MetaM (Option (FVarId × MVarId)) := do
  if r.proof?.isNone then
    -- New result is definitionally equal to input. Thus, we can avoid creating a new variable if there are dependencies
    let mvarId ← mvarId.replaceLocalDeclDefEq fvarId r.expr
    if mayCloseGoal && r.expr.isFalse then
      mvarId.assign (← mkFalseElim (← mvarId.getType) (mkFVar fvarId))
      return none
    else
      return some (fvarId, mvarId)
  else
    applySimpResultToLocalDeclCore mvarId fvarId (← applySimpResultToFVarId mvarId fvarId r mayCloseGoal)

def simpLocalDecl (mvarId : MVarId) (fvarId : FVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (mayCloseGoal := true) (stats : Stats := {}) : MetaM (Option (FVarId × MVarId) × Stats) := do
  mvarId.withContext do
    mvarId.checkNotAssigned `simp
    let type ← instantiateMVars (← fvarId.getType)
    let (r, stats) ← simpStep mvarId (mkFVar fvarId) type ctx simprocs discharge? mayCloseGoal stats
    return (← applySimpResultToLocalDeclCore mvarId fvarId r, stats)

def simpGoal (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (simplifyTarget : Bool := true) (fvarIdsToSimp : Array FVarId := #[])
    (stats : Stats := {}) : MetaM (Option (Array FVarId × MVarId) × Stats) := do
  mvarId.withContext do
    mvarId.checkNotAssigned `simp
    let mut mvarIdNew := mvarId
    let mut toAssert := #[]
    let mut replaced := #[]
    let mut stats := stats
    for fvarId in fvarIdsToSimp do
      let localDecl ← fvarId.getDecl
      let type ← instantiateMVars localDecl.type
      let ctx := ctx.setSimpTheorems <| ctx.simpTheorems.eraseTheorem (.fvar localDecl.fvarId)
      let (r, stats') ← simp type ctx simprocs discharge? stats
      stats := stats'
      match r.proof? with
      | some _ => match (← applySimpResult mvarIdNew (mkFVar fvarId) type r) with
        | none => return (none, stats)
        | some (value, type) => toAssert := toAssert.push { userName := localDecl.userName, type := type, value := value }
      | none =>
        if r.expr.isFalse then
          mvarIdNew.assign (← mkFalseElim (← mvarIdNew.getType) (mkFVar fvarId))
          return (none, stats)
        -- TODO: if there are no forwards dependencies we may consider using the same approach we used when `r.proof?` is a `some ...`
        -- Reason: it introduces a `mkExpectedTypeHint`
        mvarIdNew ← mvarIdNew.replaceLocalDeclDefEq fvarId r.expr
        replaced := replaced.push fvarId
    if simplifyTarget then
      match (← simpTarget mvarIdNew ctx simprocs discharge? (stats := stats)) with
      | (none, stats') => return (none, stats')
      | (some mvarIdNew', stats') => mvarIdNew := mvarIdNew'; stats := stats'
    let (fvarIdsNew, mvarIdNew') ← mvarIdNew.assertHypotheses toAssert
    mvarIdNew := mvarIdNew'
    let toClear := fvarIdsToSimp.filter fun fvarId => !replaced.contains fvarId
    mvarIdNew ← mvarIdNew.tryClearMany toClear
    if ctx.config.failIfUnchanged && mvarId == mvarIdNew then
      throwError "`simp` made no progress"
    return (some (fvarIdsNew, mvarIdNew), stats)

def simpTargetStar (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (discharge? : Option Simp.Discharge := none)
    (stats : Stats := {}) : MetaM (TacticResultCNM × Stats) := mvarId.withContext do
  let mut ctx := ctx
  for h in (← getPropHyps) do
    let localDecl ← h.getDecl
    let proof  := localDecl.toExpr
    let simpTheorems ← ctx.simpTheorems.addTheorem (.fvar h) proof (config := ctx.indexConfig)
    ctx := ctx.setSimpTheorems simpTheorems
  match (← simpTarget mvarId ctx simprocs discharge? (stats := stats)) with
  | (none, stats) => return (TacticResultCNM.closed, stats)
  | (some mvarId', stats') =>
    if (← mvarId.getType) == (← mvarId'.getType) then
      return (TacticResultCNM.noChange, stats)
    else
      return (TacticResultCNM.modified mvarId', stats')

def dsimpGoal (mvarId : MVarId) (ctx : Simp.Context) (simprocs : SimprocsArray := #[]) (simplifyTarget : Bool := true) (fvarIdsToSimp : Array FVarId := #[])
    (stats : Stats := {}) : MetaM (Option MVarId × Stats) := do
   mvarId.withContext do
    mvarId.checkNotAssigned `simp
    let mut mvarIdNew := mvarId
    let mut stats : Stats := stats
    for fvarId in fvarIdsToSimp do
      let type ← instantiateMVars (← fvarId.getType)
      let (typeNew, stats') ← dsimp type ctx simprocs
      stats := stats'
      if typeNew.isFalse then
        mvarIdNew.assign (← mkFalseElim (← mvarIdNew.getType) (mkFVar fvarId))
        return (none, stats)
      if typeNew != type then
        mvarIdNew ← mvarIdNew.replaceLocalDeclDefEq fvarId typeNew
    if simplifyTarget then
      let target ← mvarIdNew.getType
      let (targetNew, stats') ← dsimp target ctx simprocs stats
      stats := stats'
      if targetNew.isTrue then
        mvarIdNew.assign (mkConst ``True.intro)
        return (none, stats)
      if let some (_, lhs, rhs) := targetNew.consumeMData.eq? then
        if (← withReducible <| isDefEq lhs rhs) then
          mvarIdNew.assign (← mkEqRefl lhs)
          return (none, stats)
      if target != targetNew then
        mvarIdNew ← mvarIdNew.replaceTargetDefEq targetNew
      pure () -- FIXME: bug in do notation if this is removed?
    if ctx.config.failIfUnchanged && mvarId == mvarIdNew then
      throwError "`dsimp` made no progress"
    return (some mvarIdNew, stats)

end Lean.Meta
