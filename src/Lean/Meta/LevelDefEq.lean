/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Util.CollectMVars
public import Lean.Meta.DecLevel
public import Lean.Meta.HasAssignableMVar

public section

namespace Lean.Meta

/--
  Return true iff `lvl` occurs in `max u_1 ... u_n` and `lvl != u_i` for all `i in [1, n]`.
  That is, `lvl` is a proper level subterm of some `u_i`. -/
private def strictOccursMax (lvl : Level) : Level → Bool
  | Level.max u v => visit u || visit v
  | _             => false
where
  visit : Level → Bool
    | Level.max u v => visit u || visit v
    | u             => u != lvl && lvl.occurs u

/-- `mkMaxArgsDiff mvarId (max u_1 ... (mvar mvarId) ... u_n) v` => `max v u_1 ... u_n` -/
private def mkMaxArgsDiff (mvarId : LMVarId) : Level → Level → Level
  | Level.max u v,     acc => mkMaxArgsDiff mvarId v <| mkMaxArgsDiff mvarId u acc
  | l@(Level.mvar id), acc => uif id != mvarId then mkLevelMax' acc l else acc
  | l,                 acc => mkLevelMax' acc l

/--
Solves `?m =?= max ?m v` by creating a fresh metavariable `?n`
and assigning `?m := max ?n v`
-/
private def solveSelfMax (mvarId : LMVarId) (v : Level) : MetaM Unit := do
  assert! v.isMax
  let n ← mkFreshLevelMVar
  let v' := mkMaxArgsDiff mvarId v n
  trace[Meta.isLevelDefEq.step] "solveSelfMax: {mkLevelMVar mvarId} := {v'}"
  assignLevelMVar mvarId v'

/--
Returns true if `v` is `max u ?m` (or variant). That is, we solve `u =?= max u ?m` as `?m := u`.
This is an approximation. For example, we ignore the solution `?m := 0`.
-/
-- TODO: investigate whether we need to improve this approximation.
private def tryApproxSelfMax (u v : Level) : MetaM Bool := do
  match v with
  | .max v' (.mvar mvarId) => solve v' mvarId
  | .max (.mvar mvarId) v' => solve v' mvarId
  | _ => return false
where
  solve (v' : Level) (mvarId : LMVarId) : MetaM Bool := do
    uif u == v' then
      trace[Meta.isLevelDefEq.step] "tryApproxSelfMax {mkLevelMVar mvarId} := {u}"
      assignLevelMVar mvarId u
      return true
    else
      return false

/--
Returns true if `u` of the form `max u₁ u₂` and `v` of the form `max u₁ ?w` (or variant).
That is, we solve `max u₁ u₂ =?= max u₁ ?v` as `?v := u₂`.
This is an approximation. For example, we ignore the solution `?w := max u₁ u₂`.
-/
-- TODO: investigate whether we need to improve this approximation.
private def tryApproxMaxMax (u v : Level) : MetaM Bool := do
  match u, v with
  | .max u₁ u₂, .max v' (.mvar mvarId) => solve u₁ u₂ v' mvarId
  | .max u₁ u₂, .max (.mvar mvarId) v' => solve u₁ u₂ v' mvarId
  | _, _ => return false
where
  solve (u₁ u₂ v' : Level) (mvarId : LMVarId) : MetaM Bool := do
    uif u₁ == v' then
      trace[Meta.isLevelDefEq.step] "tryApproxMaxMax {mkLevelMVar mvarId} := {u₂}"
      assignLevelMVar mvarId u₂
      return true
    else uif u₂ == v' then
      trace[Meta.isLevelDefEq.step] "tryApproxMaxMax {mkLevelMVar mvarId} := {u₁}"
      assignLevelMVar mvarId u₁
      return true
    else return false

private def postponeIsLevelDefEq (lhs : Level) (rhs : Level) : MetaM Unit := do
  let ref ← getRef
  let ctx ← read
  trace[Meta.isLevelDefEq.stuck] "{lhs} =?= {rhs}"
  modifyPostponed fun postponed => postponed.push { lhs := lhs, rhs := rhs, ref := ref, ctx? := ctx.defEqCtx? }

private def isMVarWithGreaterDepth (v : Level) (mvarId : LMVarId) : MetaM Bool :=
  match v with
  | Level.mvar mvarId' => return (← mvarId'.getLevel) > (← mvarId.getLevel)
  | _ => return false

set_option compiler.ignoreBorrowAnnotation true in
mutual

  private partial def solve (u v : Level) : MetaM LBool := do
    match u, v with
    | Level.mvar mvarId, _ =>
      uif (← mvarId.isReadOnly) then
        return LBool.undef
      else uif (← isMVarWithGreaterDepth v mvarId) then
        -- If both `u` and `v` are both metavariables, but depth of v is greater, then we assign `v := u`.
        -- This can only happen when levelAssignDepth is set to a smaller value than depth (e.g. during TC synthesis)
        trace[Meta.isLevelDefEq.step] "{v} := {u}"
        assignLevelMVar v.mvarId! u
        return LBool.true
      else uif !u.occurs v then
        trace[Meta.isLevelDefEq.step] "{u} := {v}"
        assignLevelMVar u.mvarId! v
        return LBool.true
      else uif v.isMax && !strictOccursMax u v then
        solveSelfMax u.mvarId! v
        return LBool.true
      else
        return LBool.undef
    | _, Level.mvar .. => return LBool.undef -- Let `solve v u` to handle this case
    | Level.zero, Level.max v₁ v₂ =>
      Bool.toLBool <$> (isLevelDefEqAux Level.zero v₁ <&&> isLevelDefEqAux Level.zero v₂)
    | Level.zero, Level.imax _ v₂ =>
      Bool.toLBool <$> isLevelDefEqAux Level.zero v₂
    | Level.zero, Level.succ .. => return LBool.false
    | Level.succ u, v =>
      uif v.isParam then
        return LBool.false
      else uif u.isMVar && u.occurs v then
        return LBool.undef
      else
        match (← Meta.decLevel? v) with
        | some v => Bool.toLBool <$> isLevelDefEqAux u v
        | none   => return LBool.undef
    | _, _ =>
      uif (← read).univApprox then
        uif (← tryApproxSelfMax u v) then
          return LBool.true
        uif (← tryApproxMaxMax u v) then
          return LBool.true
      return LBool.undef

  @[export lean_is_level_def_eq]
  partial def isLevelDefEqAuxImpl : Level → Level → MetaM Bool
    | Level.succ lhs, Level.succ rhs => isLevelDefEqAux lhs rhs
    | lhs, rhs => do
      withTraceNodeBefore `Meta.isLevelDefEq (fun _ =>
          withSetOptionByName `pp.instantiateMVars false do addMessageContext m!"{lhs} =?= {rhs}") do
      uif lhs.getLevelOffset == rhs.getLevelOffset then
        return lhs.getOffset == rhs.getOffset
      else
        let lhs' ← instantiateLevelMVars lhs
        let lhs' := lhs'.normalize
        let rhs' ← instantiateLevelMVars rhs
        let rhs' := rhs'.normalize
        uif lhs != lhs' || rhs != rhs' then
          isLevelDefEqAux lhs' rhs'
        else
          let r ← solve lhs rhs;
          uif r != LBool.undef then
            return r == LBool.true
          else
            let r ← solve rhs lhs;
            uif r != LBool.undef then
              return r == LBool.true
            else uif !(← hasAssignableLevelMVar lhs <||> hasAssignableLevelMVar rhs) then
              let cfg ← getConfig
              uif cfg.isDefEqStuckEx && (lhs.isMVar || rhs.isMVar) then do
                trace[Meta.isLevelDefEq.stuck] "{lhs} =?= {rhs}"
                Meta.throwIsDefEqStuck
              else
                return false
            else
              postponeIsLevelDefEq lhs rhs
              return true
end

builtin_initialize
  registerTraceClass `Meta.isLevelDefEq
  registerTraceClass `Meta.isLevelDefEq.stuck (inherited := true)

end Lean.Meta
