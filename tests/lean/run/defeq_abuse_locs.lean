import Lean

open Lean Meta Elab Tactic

/-! # `defeq_abuse_locs` tactic

For each function application in the goal's target expression, determines the
*expected type* (parameter type from the function) and the *inferred type*
(actual type of the argument). Then checks at which transparency modes these
are definitionally equal.

Collects all (argument, expected, inferred) triples that require more than
`reducible` transparency, grouped by the minimum transparency level needed.
Logs them from most abusive (`all`) down to least (`instances`).
-/

/-- A single location where defeq abuse occurs. -/
structure AbusePoint where
  arg      : Expr   -- the argument expression
  expected : Expr   -- parameter type (what the function expects)
  inferred : Expr   -- actual type of the argument
  deriving Inhabited

/-- Determine the minimum transparency level at which `expected` and `inferred`
    are definitionally equal. Returns the score (0-3), or 4 if not even `all` works. -/
private def abuseLevel (expected inferred : Expr) : MetaM Nat := do
  let modes := #[
    (TransparencyMode.reducible, 0),
    (TransparencyMode.instances, 1),
    (TransparencyMode.default,   2),
    (TransparencyMode.all,       3)
  ]
  for (mode, score) in modes do
    let ok ← withoutModifyingState <| withTransparency mode <| isDefEqGuarded expected inferred
    if ok then return score
  return 4

/-- Name for a transparency level. -/
private def modeName : Nat → String
  | 1 => "instances"
  | 2 => "default"
  | 3 => "all"
  | _ => "unknown"

/-- Walk an expression, collecting all abuse points from function applications.
    Uses `all` transparency for type inference / whnf so we can always see
    the forall structure, then tests `isDefEq` at each transparency level. -/
private partial def collectAbuse (e : Expr) :
    MonadCacheT ExprStructEq Unit (StateT (Array (Nat × AbusePoint)) MetaM) Unit :=
  checkCache { val := e : ExprStructEq } fun _ => do
    match e with
    | .app f a =>
      collectAbuse f
      collectAbuse a
      -- Check this specific application site
      let fType ← withTransparency .all <| inferType f
      let fType ← withTransparency .all <| whnf fType
      match fType with
      | .forallE _ d _ _ =>
        let aType ← withTransparency .all <| inferType a
        let level ← abuseLevel d aType
        if level > 0 then
          modify fun s => s.push (level, { arg := a, expected := d, inferred := aType })
      | _ => pure ()
    | .lam .. | .letE .. =>
      lambdaLetTelescope e fun xs b => do
        for x in xs do
          let xDecl ← getFVarLocalDecl x
          match xDecl with
          | .cdecl (type := t) .. => collectAbuse t
          | .ldecl (type := t) (value := v) .. =>
            collectAbuse t
            collectAbuse v
        collectAbuse b
    | .forallE .. =>
      forallTelescope e fun xs b => do
        for x in xs do
          let xDecl ← getFVarLocalDecl x
          collectAbuse xDecl.type
        collectAbuse b
    | .mdata _ e => collectAbuse e
    | .proj _ _ e => collectAbuse e
    | _ => return ()

/-- Run abuse analysis on an expression and return abuse points grouped by level,
    sorted from highest (most abusive) to lowest. -/
def findDefeqAbuse (e : Expr) : MetaM (Array (Nat × AbusePoint)) := do
  let (_, points) ← (collectAbuse e |>.run).run #[]
  return points

/-- The `defeq_abuse_locs` tactic. Reports where defeq abuse occurs in the goal. -/
elab "defeq_abuse_locs" : tactic => do
  let target ← getMainTarget
  let points ← findDefeqAbuse target
  if points.isEmpty then
    logInfo "no defeq abuse found"
    return
  -- Group by level, sorted from highest to lowest
  let mut byLevel : Array (Nat × Array AbusePoint) := #[]
  for level in #[3, 2, 1] do
    let matching := points.filter (·.1 == level) |>.map (·.2)
    if !matching.isEmpty then
      byLevel := byLevel.push (level, matching)
  -- Build message
  let mut msg : MessageData := .nil
  for (level, pts) in byLevel do
    msg := msg ++ m!"requires `{modeName level}` transparency:"
    for pt in pts do
      msg := msg ++ m!"\n  {pt.arg} : {pt.inferred.consumeMData} =?= {pt.expected.consumeMData}"
    msg := msg ++ "\n"
  logInfo msg

-- ===================================================================
-- Test: No abuse
-- ===================================================================

/--
info: no defeq abuse found
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : (0 : Nat) = 0 := by
  defeq_abuse_locs
  sorry

-- ===================================================================
-- Test: Single abuse point at `instances` level
-- ===================================================================

def InstNat := Nat
def instVal : InstNat := Nat.zero
attribute [instance_reducible] InstNat

/--
info: requires `instances` transparency:
  instVal : InstNat =?= Nat
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : @Eq Nat instVal 0 := by
  defeq_abuse_locs
  sorry

-- ===================================================================
-- Test: Single abuse point at `default` level
-- ===================================================================

def SemiNat := Nat
def semiVal : SemiNat := Nat.zero

/--
info: requires `default` transparency:
  semiVal : SemiNat =?= Nat
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : @Eq Nat semiVal 0 := by
  defeq_abuse_locs
  sorry

-- ===================================================================
-- Test: Abuse at `all` level (programmatic)
-- ===================================================================

def IrredNat := Nat
def irredVal : IrredNat := Nat.zero
attribute [irreducible] IrredNat

/--
info: requires `all` transparency:
  irredVal : IrredNat =?= Nat
-/
#guard_msgs in
#eval show MetaM Unit from do
  let e := mkApp3 (mkConst ``Eq [.succ .zero]) (mkConst ``Nat) (mkConst ``irredVal) (mkNatLit 0)
  let points ← findDefeqAbuse e
  if points.isEmpty then
    IO.println "no defeq abuse found"
    return
  let mut byLevel : Array (Nat × Array AbusePoint) := #[]
  for level in #[3, 2, 1] do
    let matching := points.filter (·.1 == level) |>.map (·.2)
    if !matching.isEmpty then
      byLevel := byLevel.push (level, matching)
  for (level, pts) in byLevel do
    IO.print s!"requires `{modeName level}` transparency:"
    for pt in pts do
      IO.println s!"\n  {pt.arg} : {pt.inferred.consumeMData} =?= {pt.expected.consumeMData}"

-- ===================================================================
-- Test: Multiple abuse points at different levels
-- ===================================================================

-- semiVal : SemiNat (needs default) and instVal : InstNat (needs instances)
-- Construct: @Eq Nat (Nat.add semiVal instVal) 0
-- This has two abuse points:
--   semiVal passed to Nat.add (expects Nat, got SemiNat → needs default)
--   instVal passed to Nat.add (expects Nat, got InstNat → needs instances)
-- Plus the result of Nat.add semiVal instVal passed to @Eq Nat (expects Nat, got Nat → ok)

/--
info: requires `default` transparency:
  semiVal : SemiNat =?= Nat
requires `instances` transparency:
  instVal : InstNat =?= Nat
-/
#guard_msgs in
#eval show MetaM Unit from do
  -- @Eq Nat (Nat.add semiVal instVal) 0
  let add := mkApp2 (mkConst ``Nat.add) (mkConst ``semiVal) (mkConst ``instVal)
  let e := mkApp3 (mkConst ``Eq [.succ .zero]) (mkConst ``Nat) add (mkNatLit 0)
  let points ← findDefeqAbuse e
  let mut byLevel : Array (Nat × Array AbusePoint) := #[]
  for level in #[3, 2, 1] do
    let matching := points.filter (·.1 == level) |>.map (·.2)
    if !matching.isEmpty then
      byLevel := byLevel.push (level, matching)
  for (level, pts) in byLevel do
    IO.print s!"requires `{modeName level}` transparency:"
    for pt in pts do
      IO.println s!"\n  {pt.arg} : {pt.inferred.consumeMData} =?= {pt.expected.consumeMData}"

-- ===================================================================
-- Test: No abuse on a complex but well-typed goal
-- ===================================================================

/--
info: no defeq abuse found
---
warning: declaration uses `sorry`
-/
#guard_msgs in
example : ∀ (n : Nat), n + 0 = n := by
  defeq_abuse_locs
  sorry
