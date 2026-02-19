import Lean

open Lean Meta Elab Tactic

/-! # `defeq_abuse_score` tactic

Checks at which transparency level the current goal's target expression type-checks.
Reports a numeric "defeq abuse score":

- 0: typechecks at `reducible` (no defeq abuse)
- 1: typechecks at `instances` (mild — needs instance unfolding)
- 2: typechecks at `default` (moderate — needs default unfolding)
- 3: typechecks at `all` (heavy defeq abuse)

Uses the same checking logic as `Lean.Meta.check` (verifying all applications
have matching parameter/argument types via `isDefEq`) but at a caller-specified
transparency instead of hardcoded `.all`.
-/

/-- Walk an expression and verify all applications and projections type-check.
    This replicates the logic of `Lean.Meta.check` (which is hardcoded to `.all`)
    but respects the current transparency mode. -/
private partial def checkExpr (e : Expr) : MonadCacheT ExprStructEq Unit MetaM Unit :=
  checkCache { val := e : ExprStructEq } fun _ => do
    match e with
    | .app f a =>
      checkExpr f
      checkExpr a
      Lean.Meta.checkApp f a
    | .lam .. | .letE .. =>
      lambdaLetTelescope e fun xs b => do
        for x in xs do
          let xDecl ← getFVarLocalDecl x
          match xDecl with
          | .cdecl (type := t) .. =>
            checkExpr t
          | .ldecl (type := t) (value := v) .. =>
            checkExpr t
            let vType ← inferType v
            unless (← isDefEq t vType) do
              throwError "let type mismatch"
            checkExpr v
        checkExpr b
    | .forallE .. =>
      forallTelescope e fun xs b => do
        for x in xs do
          let xDecl ← getFVarLocalDecl x
          checkExpr xDecl.type
        checkExpr b
    | .mdata _ e => checkExpr e
    | .proj s i e =>
      checkExpr e
      Lean.Meta.checkProj s i e
    | _ => return ()

/-- Returns the defeq abuse score for an expression by running `checkExpr`
    at increasingly permissive transparency levels. -/
def defeqAbuseScore (e : Expr) : MetaM Nat := do
  let modes := #[
    (TransparencyMode.reducible, 0),
    (TransparencyMode.instances, 1),
    (TransparencyMode.default,   2),
    (TransparencyMode.all,       3)
  ]
  for (mode, score) in modes do
    let ok ← withoutModifyingState do
      withTransparency mode do
        try
          checkExpr e |>.run
          pure true
        catch _ =>
          pure false
    if ok then return score
  throwError "expression does not typecheck even at TransparencyMode.all"

/-- The `defeq_abuse_score` tactic. Reports the defeq abuse score of the current goal. -/
elab "defeq_abuse_score" : tactic => do
  let target ← getMainTarget
  let score ← defeqAbuseScore target
  logInfo m!"defeq abuse score: {score}"

-- ===================================================================
-- Test: Score 0 — goal typechecks at reducible (no defeq abuse)
-- ===================================================================

/--
info: defeq abuse score: 0
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : (0 : Nat) = 0 := by
  defeq_abuse_score
  sorry

-- ===================================================================
-- Test: Score 1 — needs instance transparency
-- ===================================================================

def InstNat := Nat
def instVal : InstNat := Nat.zero
attribute [instance_reducible] InstNat

/--
info: defeq abuse score: 1
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : @Eq Nat instVal 0 := by
  defeq_abuse_score
  sorry

-- ===================================================================
-- Test: Score 2 — needs default transparency
-- ===================================================================

def SemiNat := Nat
def semiVal : SemiNat := Nat.zero

/--
info: defeq abuse score: 2
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : @Eq Nat semiVal 0 := by
  defeq_abuse_score
  sorry

-- ===================================================================
-- Test: Score 3 — needs all transparency
-- ===================================================================

-- Define the statement before making IrredNat irreducible, then unfold
-- in the tactic block to get a goal that only typechecks at .all
def IrredNat := Nat
def irredVal : IrredNat := (0 : Nat)
def IrredStatement := irredVal = (0 : Nat)
attribute [irreducible] IrredNat

/--
info: defeq abuse score: 3
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : IrredStatement := by
  unfold IrredStatement
  defeq_abuse_score
  sorry

-- ===================================================================
-- Test: Score 0 on a more complex but well-typed goal
-- ===================================================================

/--
info: defeq abuse score: 0
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : ∀ (n : Nat), n + 0 = n := by
  defeq_abuse_score
  sorry

-- ===================================================================
-- Test: The tactic does not close the goal
-- ===================================================================

/--
info: defeq abuse score: 0
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : True := by
  defeq_abuse_score
  exact sorry
