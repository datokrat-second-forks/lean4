/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Meta.Tactic.Simp.Attr
public import Lean.Meta.Tactic.Simp.Main

public section

namespace Lean

builtin_initialize bool_to_prop : Lean.Meta.SimpExtension ←
  Lean.Meta.registerSimpAttr `bool_to_prop
    "simp lemmas converting boolean expressions in terms of `decide` into propositional statements"

namespace Meta

/--
Computes the propositional view of the `Bool` condition `c` being equal to `value`.

Returns `some (p, h)` with `h : (c = value) = p` if `simp only [bool_to_prop]` (the lemmas tagged
`@[bool_to_prop]` and nothing else, no simprocs) rewrites `c = value` to a different
proposition `p`, and `none` otherwise. For example, `(i <ᵇ n) = true` becomes `i < n`,
`(a ≤ᵇ b && c == d) = true` becomes `a ≤ b ∧ c = d`, and `(i <ᵇ n) = false` becomes `¬i < n`.
Users can extend the translation by tagging their own lemmas with `@[bool_to_prop]`.

As a cheap pre-filter, `simp` only runs if some `bool_to_prop` lemma's left-hand side matches
`c = value` or `c` itself at the root (the lemmas are either of the form `f .. = b ↔ …` or rewrite a
`Bool` term such as `a && b`). Conditions whose head symbol only becomes rewritable after
rewriting a strict subterm are therefore not translated.
-/
def boolCondToProp? (c : Expr) (value : Bool) : MetaM (Option (Expr × Expr)) := do
  let c ← instantiateMVars c
  let e := mkApp3 (mkConst ``Eq [1]) (mkConst ``Bool) c (toExpr value)
  let thms ← bool_to_prop.getTheorems
  let ctx ← Simp.mkContext (config := { maxSteps := 2000 }) (simpTheorems := #[thms])
    (congrTheorems := ← getSimpCongrTheorems)
  let hasCandidate ← withConfigWithKey ctx.indexConfig do
    for t in [e, c] do
      unless (← thms.pre.getMatch t).isEmpty && (← thms.post.getMatch t).isEmpty do
        return true
    return false
  unless hasCandidate do return none
  let r ← try
      pure (← simp e ctx).1
    catch _ =>
      return none
  bif r.expr == e then return none
  return some (r.expr, ← r.getProof)

/--
If the target of `mvarId` is `∀ h : c = value, T` for `value` a `Bool` literal and `c = value`
has the propositional view `p` (see `boolCondToProp?`), replaces it by `∀ h : p, T'`, where `T'`
transports `h` back to `c = value`. Returns `none` otherwise.
-/
def _root_.Lean.MVarId.boolCondBinderToProp? (mvarId : MVarId) (c : Expr) :
    MetaM (Option MVarId) := mvarId.withContext do
  let .forallE n d body bi ← instantiateMVars (← mvarId.getType) | return none
  let_expr Eq α c' v := d | return none
  unless α.isConstOf ``Bool && c' == c do return none
  let some value := (bif v.isConstOf ``Bool.true then some true
    else bif v.isConstOf ``Bool.false then some false else none) | return none
  let some (p, pr) ← boolCondToProp? c value | return none
  let newTarget ← withLocalDecl n bi p fun hp => do
    mkForallFVars #[hp] (body.instantiate1 (← mkEqMPR pr hp))
  let newGoal ← mkFreshExprSyntheticOpaqueMVar newTarget (← mvarId.getTag)
  mvarId.assign (← withLocalDecl n bi d fun h => do
    mkLambdaFVars #[h] (mkApp newGoal (← mkEqMP pr h)))
  return some newGoal.mvarId!

end Meta

end Lean
