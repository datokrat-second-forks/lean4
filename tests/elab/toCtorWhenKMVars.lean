import Lean

/-!
K-like reduction of a recursor whose major premise's type contains metavariables: it applies if the
type agrees with the constructor's type without assigning them, and a comparison stuck on them
leaves the recursor stuck, also under `isDefEqStuckEx := true` (as in type class resolution).
-/

open Lean Meta

def Syn (α : Type) := α

/-- `whnf (cast h a)` for an opaque `h : α = β`, and whether the metavariables got assigned. -/
def whnfCast (α β : Expr) (stuckEx := false) : MetaM Unit := do
  let mvars ← getMVars (← mkEq α β)
  withLocalDeclD `h (← mkEq α β) fun h =>
  withLocalDeclD `a α fun a => do
    let r ← withConfig ({ · with isDefEqStuckEx := stuckEx }) <|
      whnf (mkApp4 (mkConst ``cast [Level.one]) α β h a)
    logInfo m!"{r}; assigned: {← mvars.anyM (·.isAssigned)}"

/-- info: a; assigned: false -/
#guard_msgs in
#eval do
  let α ← mkAppM ``List #[← mkFreshExprMVar (mkSort Level.one)]
  whnfCast α (mkApp (mkConst ``Syn) α)

/-- info: a; assigned: false -/
#guard_msgs in
#eval do
  let α ← mkAppM ``List #[← mkFreshExprMVar (mkSort Level.one)]
  whnfCast α (mkApp (mkConst ``Syn) α) (stuckEx := true)

/-- info: h ▸ a; assigned: false -/
#guard_msgs in
#eval do
  let α ← mkFreshExprMVar (mkSort Level.one)
  whnfCast α (mkConst ``Nat) (stuckEx := true)

/-- info: h ▸ a; assigned: false -/
#guard_msgs in
#eval do
  let β ← mkFreshExprMVar (mkSort Level.one)
  whnfCast (mkConst ``Nat) β (stuckEx := true)

/-- info: h ▸ a; assigned: false -/
#guard_msgs in
#eval do
  let α ← mkFreshExprMVar (mkSort Level.one)
  let β ← mkFreshExprMVar (mkSort Level.one)
  whnfCast α β (stuckEx := true)
