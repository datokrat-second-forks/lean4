/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Tactic.Cases
public import Lean.Meta.Tactic.Simp.Rewrite
import Lean.Meta.Tactic.Simp.Main
import Lean.Meta.Tactic.BoolToProp
import Init.UDecidable
public section
namespace Lean.Meta

/--
Returns `true` if `e` is an application of `ite`, `dite`, `UDecidable.ite`, `UDecidable.dite`,
`cond` or `Bool.dcond`. The condition is `e.getArg! 1` in all cases.
-/
def isIteLike (e : Expr) : Bool :=
  e.isIte || e.isDIte || e.isAppOfArity ``UDecidable.ite 5 || e.isAppOfArity ``UDecidable.dite 5
    || e.isAppOfArity ``cond 4 || e.isAppOfArity ``Bool.dcond 4

inductive SplitKind where
  | ite | match | both

def SplitKind.considerIte : SplitKind → Bool
  | .ite | .both => true
  | _ => false

def SplitKind.considerMatch : SplitKind → Bool
  | .match | .both => true
  | _ => false

namespace FindSplitImpl

structure Context where
  exceptionSet : ExprSet := {}
  kind : SplitKind := .both

unsafe abbrev FindM := ReaderT Context $ StateT (PtrSet Expr) MetaM

/--
Checks whether `e` is a candidate for `split`.
Returns `some e'` if a prefix is a candidate.
Example: suppose `e` is `(if b then f else g) x`, then
the result is `some e'` where `e'` is the subterm `(if b then f else g)`
-/
private def isCandidate? (env : Environment) (ctx : Context) (e : Expr) : Option Expr := Id.run do
  let ret (e : Expr) : Option Expr :=
    uif ctx.exceptionSet.contains e then none else some e
  uif ctx.kind.considerIte then
    uif e.isAppOf ``ite || e.isAppOf ``dite || e.isAppOf ``UDecidable.ite
        || e.isAppOf ``UDecidable.dite then
      let numArgs := e.getAppNumArgs
      uif numArgs ≥ 5 ∧ !(e.getArg! 1 5).hasLooseBVars then
        return ret (e.getBoundedAppFn (numArgs - 5))
    uif e.isAppOf ``cond || e.isAppOf ``Bool.dcond then
      let numArgs := e.getAppNumArgs
      uif numArgs ≥ 4 ∧ !(e.getArg! 1).hasLooseBVars then
        return ret (e.getBoundedAppFn (numArgs - 4))
    uif e.isAppOf ``Bool.Internal.matchValue then
      let numArgs := e.getAppNumArgs
      uif numArgs ≥ 6 ∧ !(e.getArg! 1 6).hasLooseBVars ∧ !(e.getArg! 2 6).hasLooseBVars then
        return ret (e.getBoundedAppFn (numArgs - 6))
  uif ctx.kind.considerMatch then
    if let some info := isMatcherAppCore? env e then
      let args := e.getAppArgs
      for i in info.getFirstDiscrPos...(info.getFirstDiscrPos + info.numDiscrs) do
        uif args[i]!.hasLooseBVars then
          return none
      return ret (e.getBoundedAppFn (args.size - info.arity))
  return none

@[inline] unsafe def checkVisited (e : Expr) : OptionT FindM Unit := do
  if (← get).contains e then
    failure
  modify fun s => s.insert e

unsafe def visit (e : Expr) : OptionT FindM Expr := do
  checkVisited e
  if let some e := isCandidate? (← getEnv) (← read) e then
    return e
  else
    -- We do not look for split candidates in proofs.
    unless e.hasLooseBVars do
      if (← isProof e) then
        failure
    match e with
    | .lam _ _ b _ | .proj _ _ b -- We do not look for split candidates in the binder of lambdas.
    | .mdata _ b       => visit b
    | .forallE _ d b _ => visit d <|> visit b -- We want to look for candidates at `A → B`
    | .letE _ _ v b _  => visit v <|> visit b
    | .app ..          => visitApp? e
    | _                => failure
where
  visitApp? (e : Expr) : FindM (Option Expr) :=
    e.withApp fun f args => do
    -- See comment at `Canonicalizer.lean` regarding the case where
    -- `f` has loose bound variables.
    let info ← if f.hasLooseBVars then
      pure {}
    else
      getFunInfo f
    for u : i in *...args.size do
      let arg := args[i]
      if h : i < info.paramInfo.size then
        let info := info.paramInfo[i]
        unless info.isProp do
          if info.isExplicit then
            let some found ← visit arg | pure ()
            return found
      else
        let some found ← visit arg | pure ()
        return found
    visit f

end FindSplitImpl

/-- Return an `if-then-else` or `match-expr` to split. -/
partial def findSplit? (e : Expr) (kind : SplitKind := .both) (exceptionSet : ExprSet := {}) : MetaM (Option Expr) := do
  go (← instantiateMVars e)
where
  go (e : Expr) : MetaM (Option Expr) := do
    if let some target ← find? e then
      uif isIteLike target then
        let cond := target.getArg! 1
        -- Try to find a nested `if` in `cond`
        return (← go cond).getD target
      else
        return some target
    else
      return none

  find? (e : Expr) : MetaM (Option Expr) := do
    let some candidate ← unsafe FindSplitImpl.visit e { kind, exceptionSet } |>.run' mkPtrSet
      | return none
    trace[split.debug] "candidate:{indentExpr candidate}"
    return some candidate

/-- What `split` case-splits on to eliminate an `if`-like expression. -/
private inductive IfToSplit where
  /-- Case split on the proposition `cond` using the instance `dec : Decidable cond`. -/
  | prop (cond dec : Expr)
  /-- Case split on the value of the `Bool` term `b`. -/
  | bool (b : Expr)

/-- Returns the `Bool` `b` if `c` is `b = true` and `b = true` has a propositional view. -/
private def boolEqTrueWithView? (c : Expr) : MetaM (Option Expr) := do
  let_expr Eq α b v := c | return none
  unless α.isConstOf ``Bool && v.isConstOf ``Bool.true do return none
  return uif (← boolCondToProp? b true).isSome then some b else none

/-- Returns what to case split on to eliminate the first `if`-like expression in `e`. -/
private partial def findIfToSplit? (e : Expr) : MetaM (Option IfToSplit) := do
  if let some iteApp ← findSplit? e .ite then
    uif iteApp.isAppOf ``Bool.Internal.matchValue then
      let_expr Bool.Internal.matchValue _ b p h _ _ := iteApp | return none
      return IfToSplit.prop p (mkApp3 (mkConst ``Decidable.intro) p b h)
    let cond := iteApp.getArg! 1
    uif iteApp.isAppOf ``cond || iteApp.isAppOf ``Bool.dcond then
      return IfToSplit.bool cond
    let dec := iteApp.getArg! 2
    uif iteApp.isAppOf ``UDecidable.ite || iteApp.isAppOf ``UDecidable.dite then
      -- `simp` normalizes `bif b` to `uif b = true`; split it like the `bif`.
      if let some b ← boolEqTrueWithView? cond then
        return IfToSplit.bool b
      return IfToSplit.prop cond (mkApp2 (mkConst ``UDecidable.toDecidable) cond dec)
    return IfToSplit.prop cond dec
  else
    return none

register_builtin_option backward.split : Bool := {
  defValue := true
  descr    := "use the old semantics for the `split` tactic where nested `if-then-else` terms could be simplified too"
}

namespace SplitIf
/--
The `Simp.Context` that used to be used with `simpIf` methods. It contains all congruence theorems, but
just the rewriting rules for reducing `if` expressions.
This function is only used when the old `split` tactic behavior is enabled.
-/
def getSimpContext : MetaM Simp.Context := do
  let mut s : SimpTheorems := {}
  s ← s.addConst ``ite_eq_left
  s ← s.addConst ``ite_eq_right
  s ← s.addConst ``dite_eq_left
  s ← s.addConst ``dite_eq_right
  -- Missing in files that do not import `Init.UDecidable`.
  uif (← getEnv).contains ``UDecidable.ite_eq_left then
    s ← s.addConst ``UDecidable.ite_eq_left
    s ← s.addConst ``UDecidable.ite_eq_right
    s ← s.addConst ``UDecidable.dite_eq_left
    s ← s.addConst ``UDecidable.dite_eq_right
  -- Missing in files that do not import `Init.Core`.
  uif (← getEnv).contains ``Bool.dcond_neg then
    s ← s.addConst ``Bool.cond_pos
    s ← s.addConst ``Bool.cond_neg
    s ← s.addConst ``Bool.dcond_pos
    s ← s.addConst ``Bool.dcond_neg
  Simp.mkContext
   (simpTheorems  := #[s])
    (congrTheorems := (← getSimpCongrTheorems))
    (config        := { Simp.neutralConfig with dsimp := false, letToHave := true })

/--
Default `Simp.Context` for `simpIf` methods. It contains all congruence theorems, but
without rewriting rules. We use simprocs to reduce the if-then-else terms -/
private def getSimpContext' : MetaM Simp.Context := do
  Simp.mkContext
    (simpTheorems  := {})
    (congrTheorems := (← getSimpCongrTheorems))
    (config        := { Simp.neutralConfig with dsimp := false, letToHave := true })

/--
  Default `discharge?` function for `simpIf` methods.
  It only uses hypotheses from the local context that have `index < numIndices`.
  It is effective after a case-split.

  Remark: when `simp` goes inside binders it adds new local declarations to the
  local context. We don't want to use these local declarations since the cached result
  would depend on them (see issue #3229). `numIndices` is the size of the local
  context `decls` field before we start the simplifying the expression.

  Remark: this function is now private, and we should use `mkDischarge?`.
-/
private def discharge? (numIndices : Nat) (useDecide : Bool) : Simp.Discharge := fun prop => do
  let prop ← instantiateMVars prop
  trace[Meta.Tactic.splitIf] "discharge? {prop}, {prop.notNot?}"
  uif useDecide then
    let prop ← instantiateMVars prop
    uif !prop.hasFVar && !prop.hasMVar then
      let d ← mkDecide prop
      let r ← withDefault <| whnf d
      uif r.isConstOf ``true then
        return some <| mkApp3 (mkConst ``of_decide_eq_true) prop d.appArg! (← mkEqRefl (mkConst ``true))
  if let some h ← findHyp? prop then
    return some h
  -- After `split` on a `Bool` condition, the hypothesis is the propositional view of `b = v`.
  if let some h ← fromBoolView? prop then
    return some h
  let some p := prop.not? | return none
  let_expr Eq α b v := p | return none
  unless α.isConstOf ``Bool do return none
  uif v.isConstOf ``Bool.true then
    let some h ← fromBoolView? (mkApp3 (mkConst ``Eq [1]) α b (mkConst ``Bool.false)) | return none
    return some (mkApp2 (mkConst ``Bool.ne_true_of_eq_false) b h)
  else uif v.isConstOf ``Bool.false then
    let some h ← fromBoolView? (mkApp3 (mkConst ``Eq [1]) α b (mkConst ``Bool.true)) | return none
    return some (mkApp2 (mkConst ``Bool.ne_false_of_eq_true) b h)
  return none
where
  findHyp? (prop : Expr) : MetaM (Option Expr) := do
    (← getLCtx).findDeclRevM? fun localDecl => do
     uif localDecl.index ≥ numIndices ∨ localDecl.isAuxDecl then
       return none
     else uif (← isDefEq prop localDecl.type) then
       return some localDecl.toExpr
     else match prop.notNot? with
       | none => return none
       | some arg =>
         uif (← isDefEq arg localDecl.type) then
           return some (mkApp2 (mkConst ``not_not_intro) arg localDecl.toExpr)
         else
           return none
  /-- Proves `b = v` from a hypothesis stating its propositional view. -/
  fromBoolView? (prop : Expr) : MetaM (Option Expr) := do
    let_expr Eq α b v := prop | return none
    unless α.isConstOf ``Bool do return none
    let some value := (uif v.isConstOf ``Bool.true then some true
      else uif v.isConstOf ``Bool.false then some false else none) | return none
    let some (p, pr) ← boolCondToProp? b value | return none
    let some h ← findHyp? p | return none
    return some (← mkEqMPR pr h)

private def reduceIte' (numIndices : Nat) (useDecideBool : Bool) : Simp.Simproc := fun e => do
  let_expr f@ite α c i tb eb ← e | return .continue
  let us := f.constLevels!
  if let some h ← discharge? numIndices useDecideBool c then
    let h := mkApp6 (mkConst ``ite_eq_left us) c i h α tb eb
    return .done { expr := tb, proof? := some h }
  else if let some h ← discharge? numIndices useDecideBool (mkNot c) then
    let h := mkApp6 (mkConst ``ite_eq_right us) c i h α tb eb
    return .done { expr := eb, proof? := some h }
  else
    -- `split` may have selected an `if-then-else` nested in `c`.
    let r ← Simp.simp c
    uif r.expr == c then
      return .done { expr := e }
    else
      let c' := r.expr
      let dec := mkApp (mkConst ``Decidable) c'
      let .some i' ← trySynthInstance dec | return .done { expr := e }
      let h := mkApp8 (mkConst ``ite_cond_congr us) α c c' i i' tb eb (← r.getProof)
      let e' := mkApp5 f α c' i' tb eb
      return .done { expr := e', proof? := some h }

private def getBinderName (e : Expr) : MetaM Name := do
  let .lam n _ _ _ := e | mkFreshUserName `h
  return n

private def reduceDIte' (numIndices : Nat) (useDecideBool : Bool) : Simp.Simproc := fun e => do
  let_expr f@dite α c i tb eb ← e | return .continue
  let us := f.constLevels!
  if let some h ← discharge? numIndices useDecideBool c then
    let e' := mkApp tb h |>.headBeta
    let h := mkApp6 (mkConst ``dite_eq_left us) c i h α tb eb
    return .done { expr := e', proof? := some h }
  else if let some h ← discharge? numIndices useDecideBool (mkNot c) then
    let e' := mkApp eb h |>.headBeta
    let h := mkApp6 (mkConst ``dite_eq_right us) c i h α tb eb
    return .done { expr := e', proof? := some h }
  else
    -- `split` may have selected an `if-then-else` nested in `c`.
    let r ← Simp.simp c
    uif r.expr == c then
      return .done { expr := e }
    else
      let c' := r.expr
      let h ← r.getProof
      let dec := mkApp (mkConst ``Decidable) c'
      let .some i' ← trySynthInstance dec | return .done { expr := e }
      let tb' := mkApp tb (mkApp4 (mkConst ``Eq.mpr_prop) c c' h (mkBVar 0)) |>.headBeta
      let tb' := mkLambda (← getBinderName tb) .default c' tb'
      let eb' := mkApp eb (mkApp4 (mkConst ``Eq.mpr_not) c c' h (mkBVar 0)) |>.headBeta
      let eb' := mkLambda (← getBinderName eb) .default (mkNot c') eb'
      let e' := mkApp5 f α c' i' tb' eb'
      let h := mkApp8 (mkConst ``dite_cond_congr us) α c c' i i' tb eb h
      return .done { expr := e', proof? := some h }

/-- Reduces the value tests that the `match` compiler emits, like `reduceDIte'`. -/
private def reduceMatchValue' (numIndices : Nat) (useDecideBool : Bool) :
    Simp.Simproc := fun e => do
  let_expr f@Bool.Internal.matchValue α b p h tb eb ← e | return .continue
  let us := f.constLevels!
  if let some hp ← discharge? numIndices useDecideBool p then
    let e' := mkApp tb hp |>.headBeta
    let h := mkApp7 (mkConst ``Bool.Internal.matchValue_pos us) α b p h tb eb hp
    return .done { expr := e', proof? := some h }
  else if let some hnp ← discharge? numIndices useDecideBool (mkNot p) then
    let e' := mkApp eb hnp |>.headBeta
    let h := mkApp7 (mkConst ``Bool.Internal.matchValue_neg us) α b p h tb eb hnp
    return .done { expr := e', proof? := some h }
  else
    return .done { expr := e }

/-- Reduces `UDecidable.ite` and `UDecidable.dite`, like `reduceIte'` and `reduceDIte'`. -/
private def reduceUIte' (numIndices : Nat) (useDecideBool : Bool) : Simp.Simproc := fun e => do
  let some (dep, f, α, c, i, tb, eb) := match_expr e with
    | f@UDecidable.ite α c i tb eb => some (false, f, α, c, i, tb, eb)
    | f@UDecidable.dite α c i tb eb => some (true, f, α, c, i, tb, eb)
    | _ => none
    | return .continue
  let us := f.constLevels!
  if let some h ← discharge? numIndices useDecideBool c then
    let (e', thm) := uif dep then (mkApp tb h |>.headBeta, ``UDecidable.dite_eq_left)
      else (tb, ``UDecidable.ite_eq_left)
    return .done { expr := e', proof? := some (mkApp6 (mkConst thm us) c i h α tb eb) }
  else if let some h ← discharge? numIndices useDecideBool (mkNot c) then
    let (e', thm) := uif dep then (mkApp eb h |>.headBeta, ``UDecidable.dite_eq_right)
      else (eb, ``UDecidable.ite_eq_right)
    return .done { expr := e', proof? := some (mkApp6 (mkConst thm us) c i h α tb eb) }
  else
    -- `split` may have selected an `if-then-else` nested in `c`.
    let r ← Simp.simp c
    uif r.expr == c then
      return .done { expr := e }
    let c' := r.expr
    let h ← r.getProof
    let .some i' ← trySynthInstance (mkApp (mkConst ``UDecidable) c') | return .done { expr := e }
    uif dep then
      let tb' := mkApp tb (mkApp4 (mkConst ``Eq.mpr_prop) c c' h (mkBVar 0)) |>.headBeta
      let tb' := mkLambda (← getBinderName tb) .default c' tb'
      let eb' := mkApp eb (mkApp4 (mkConst ``Eq.mpr_not) c c' h (mkBVar 0)) |>.headBeta
      let eb' := mkLambda (← getBinderName eb) .default (mkNot c') eb'
      let pr := mkApp8 (mkConst ``UDecidable.dite_cond_congr us) α c c' i i' tb eb h
      return .done { expr := mkApp5 f α c' i' tb' eb', proof? := some pr }
    else
      let pr := mkApp8 (mkConst ``UDecidable.ite_cond_congr us) α c c' i i' tb eb h
      return .done { expr := mkApp5 f α c' i' tb eb, proof? := some pr }

/-- Reduces `cond` and `Bool.dcond`, like `reduceIte'` and `reduceDIte'`. -/
private def reduceCond' (numIndices : Nat) (useDecideBool : Bool) : Simp.Simproc := fun e => do
  let some (dep, f, α, b, tb, eb) := match_expr e with
    | f@cond α b tb eb => some (false, f, α, b, tb, eb)
    | f@Bool.dcond α b tb eb => some (true, f, α, b, tb, eb)
    | _ => none
    | return .continue
  let us := f.constLevels!
  let mkEqBool (v : Name) := mkApp3 (mkConst ``Eq [1]) (mkConst ``Bool) b (mkConst v)
  if let some h ← discharge? numIndices useDecideBool (mkEqBool ``Bool.true) then
    let (e', thm) := uif dep then (mkApp tb h |>.headBeta, ``Bool.dcond_pos)
      else (tb, ``Bool.cond_pos)
    return .done { expr := e', proof? := some (mkApp5 (mkConst thm us) α b tb eb h) }
  else if let some h ← discharge? numIndices useDecideBool (mkEqBool ``Bool.false) then
    let (e', thm) := uif dep then (mkApp eb h |>.headBeta, ``Bool.dcond_neg)
      else (eb, ``Bool.cond_neg)
    return .done { expr := e', proof? := some (mkApp5 (mkConst thm us) α b tb eb h) }
  else
    -- `split` may have selected an `if-then-else` nested in `b`.
    let r ← Simp.simp b
    uif r.expr == b then
      return .done { expr := e }
    let b' := r.expr
    let h ← r.getProof
    uif dep then
      unless (← getEnv).contains ``Bool.dcond_congr do return .done { expr := e }
      let mkBranch (v : Name) (br : Expr) : MetaM (Expr × Expr) := do
        withLocalDeclD (← getBinderName br) (← mkEq b' (mkConst v)) fun hb => do
          let body := mkApp br (← mkEqTrans h hb) |>.headBeta
          return (← mkLambdaFVars #[hb] body, ← mkLambdaFVars #[hb] (← mkEqRefl body))
      let (tb', ht) ← mkBranch ``Bool.true tb
      let (eb', he) ← mkBranch ``Bool.false eb
      let pr := mkAppN (mkConst ``Bool.dcond_congr us) #[α, b, b', tb, tb', eb, eb', h, ht, he]
      return .done { expr := mkApp4 f α b' tb' eb', proof? := some pr }
    else
      let pr ← mkCongrFun (← mkCongrFun (← mkCongrArg (mkApp f α) h) tb) eb
      return .done { expr := mkApp4 f α b' tb eb, proof? := some pr }

private def getSimprocs (numIndices : Nat) (useDecide : Bool) : MetaM (Array Simprocs) := do
  let s : Simprocs := {}
  let s := s.addCore #[.const ``ite 5, .star, .star, .star, .star, .star] ``reduceIte' (post := false) (.inl <| reduceIte' numIndices useDecide)
  let s := s.addCore #[.const ``dite 5, .star, .star, .star, .star, .star] ``reduceDIte' (post := false) (.inl <| reduceDIte' numIndices useDecide)
  let s := s.addCore #[.const ``UDecidable.ite 5, .star, .star, .star, .star, .star] ``reduceUIte' (post := false) (.inl <| reduceUIte' numIndices useDecide)
  let s := s.addCore #[.const ``UDecidable.dite 5, .star, .star, .star, .star, .star] ``reduceUIte' (post := false) (.inl <| reduceUIte' numIndices useDecide)
  let s := s.addCore #[.const ``cond 4, .star, .star, .star, .star] ``reduceCond' (post := false) (.inl <| reduceCond' numIndices useDecide)
  let s := s.addCore #[.const ``Bool.dcond 4, .star, .star, .star, .star] ``reduceCond' (post := false) (.inl <| reduceCond' numIndices useDecide)
  let s := s.addCore #[.const ``Bool.Internal.matchValue 6, .star, .star, .star, .star, .star, .star] ``reduceMatchValue' (post := false) (.inl <| reduceMatchValue' numIndices useDecide)
  return #[s]

def mkDischarge? (useDecide := false) : MetaM Simp.Discharge :=
  return discharge? (← getLCtx).numIndices useDecide

private def mkByCasesSubgoal (p : Expr) (hName : Name) (goalType : Expr) (tag : Name) :
    MetaM (Expr × ByCasesSubgoal) := do
  withLocalDeclD hName p fun hyp => do
    let newGoal ← mkFreshExprSyntheticOpaqueMVar goalType tag
    return (← mkLambdaFVars #[hyp] newGoal, ⟨newGoal.mvarId!, hyp.fvarId!⟩)

/--
Splits the goal on the value of the `Bool` term `b`, using `Bool.dcond`. The hypothesis in each
subgoal is the propositional view of `b = true` (resp. `b = false`) computed by `boolCondToProp?`,
or the equation itself if there is none.
-/
def _root_.Lean.MVarId.byCasesBool (mvarId : MVarId) (b : Expr) (hName : Name := `h) :
    MetaM (ByCasesSubgoal × ByCasesSubgoal) := mvarId.withContext do
  let goalType ← mvarId.getType
  let goalTag ← mvarId.getTag
  let goalLevel ← getLevel goalType
  let mkCase (value : Bool) (tag : Name) : MetaM (Expr × ByCasesSubgoal) := do
    let eq ← mkEq b (toExpr value)
    let some (p, pr) ← boolCondToProp? b value | mkByCasesSubgoal eq hName goalType tag
    let (part, subgoal) ← mkByCasesSubgoal p hName goalType tag
    let part ← withLocalDeclD hName eq fun h => do
      mkLambdaFVars #[h] (part.beta #[← mkEqMP pr h])
    return (part, subgoal)
  let (thenPart, thenSubgoal) ← mkCase true (goalTag ++ `isTrue)
  let (elsePart, elseSubgoal) ← mkCase false (goalTag ++ `isFalse)
  mvarId.assign <| mkApp4 (.const ``Bool.dcond [goalLevel]) goalType b thenPart elsePart
  return (thenSubgoal, elseSubgoal)

def splitIfAt? (mvarId : MVarId) (e : Expr) (hName? : Option Name) : MetaM (Option (ByCasesSubgoal × ByCasesSubgoal)) := mvarId.withContext do
  let e ← instantiateMVars e
  if let some toSplit ← findIfToSplit? e then
    let hName ← match hName? with
      | none       => mkFreshUserName `h
      | some hName => pure hName
    match toSplit with
    | .prop cond decInst =>
      trace[Meta.Tactic.splitIf] "splitting on {decInst}"
      return some (← mvarId.byCasesDec cond decInst hName)
    | .bool b =>
      trace[Meta.Tactic.splitIf] "splitting on the value of {b}"
      return some (← mvarId.byCasesBool b hName)
  else
    trace[Meta.Tactic.splitIf] "could not find if to split:{indentExpr e}"
    return none

end SplitIf

open SplitIf

private def getNumIndices (mvarId : MVarId) : MetaM Nat :=
  mvarId.withContext do return (← getLCtx).numIndices

/--
Simplify the `if-then-else` targeted by the `split` tactic. If `useNewSemantics` is `true`, the flag
`backward.split` is ignored.
-/
def simpIfTarget (mvarId : MVarId) (useDecide := false) (useNewSemantics := false) : MetaM MVarId := do
  uif useNewSemantics || !backward.split.get (← getOptions) then
    let ctx ← getSimpContext'
    let numIndices ← getNumIndices mvarId
    let s ← getSimprocs numIndices useDecide
    let (some mvarId', _) ← simpTarget mvarId ctx s (mayCloseGoal := false) | unreachable!
    return mvarId'
  else
    let mut ctx ← getSimpContext
    let (some mvarId', _) ← simpTarget mvarId ctx {} (← mvarId.withContext <| mkDischarge? useDecide) (mayCloseGoal := false) | unreachable!
    return mvarId'

/--
Simplify the `if-then-else` targeted by the `split` tactic. If `useNewSemantics` is `true`, the flag
`backward.split` is ignored.
-/
def simpIfLocalDecl (mvarId : MVarId) (fvarId : FVarId) (useNewSemantics := false) : MetaM MVarId := do
  uif useNewSemantics || !backward.split.get (← getOptions) then
    let ctx ← getSimpContext'
    let numIndices ← getNumIndices mvarId
    let s ← getSimprocs numIndices (useDecide := false)
    let (some (_, mvarId'), _) ← simpLocalDecl mvarId fvarId ctx s (mayCloseGoal := false) | unreachable!
    return mvarId'
  else
    let mut ctx ← getSimpContext
    let (some (_, mvarId'), _) ← simpLocalDecl mvarId fvarId ctx {} (← mvarId.withContext <| mkDischarge?) (mayCloseGoal := false) | unreachable!
    return mvarId'

/--
Split an `if-then-else` in the goal target.
If `useNewSemantics` is `true`, the flag `backward.split` is ignored.
-/
def splitIfTarget? (mvarId : MVarId) (hName? : Option Name := none) (useNewSemantics := false) : MetaM (Option (ByCasesSubgoal × ByCasesSubgoal)) := commitWhenSome? do
  let some (s₁, s₂) ← splitIfAt? mvarId (← mvarId.getType) hName? | return none
  let mvarId₁ ← simpIfTarget s₁.mvarId (useNewSemantics := useNewSemantics)
  let mvarId₂ ← simpIfTarget s₂.mvarId (useNewSemantics := useNewSemantics)
  uif s₁.mvarId == mvarId₁ && s₂.mvarId == mvarId₂ then
    trace[split.failure] "`split` tactic failed to simplify target using new hypotheses Goals:\n{mvarId₁}\n{mvarId₂}"
    return none
  else
    return some ({ s₁ with mvarId := mvarId₁ }, { s₂ with mvarId := mvarId₂ })

/--
Split an `if-then-else` in the hypothesis `fvarId`.
-/
def splitIfLocalDecl? (mvarId : MVarId) (fvarId : FVarId) (hName? : Option Name := none) : MetaM (Option (MVarId × MVarId)) := commitWhenSome? do
  mvarId.withContext do
    let some (s₁, s₂) ← splitIfAt? mvarId (← inferType (mkFVar fvarId)) hName? | return none
    let mvarId₁ ← simpIfLocalDecl s₁.mvarId fvarId
    let mvarId₂ ← simpIfLocalDecl s₂.mvarId fvarId
    uif s₁.mvarId == mvarId₁ && s₂.mvarId == mvarId₂ then
      trace[split.failure] "`split` tactic failed to simplify target using new hypotheses Goals:\n{mvarId₁}\n{mvarId₂}"
      return none
    else
      return some (mvarId₁, mvarId₂)

builtin_initialize registerTraceClass `Meta.Tactic.splitIf

end Lean.Meta
