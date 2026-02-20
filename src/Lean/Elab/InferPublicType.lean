/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Lean FRO
-/
module

prelude
public import Lean.Elab.Eval

public section

namespace Lean.Elab.Term

open Meta

mutual

/--
Traverses `e` replacing private constant references with public standalone copies.
For each private constant encountered, creates a public definition if one does not already exist.
-/
private partial def makePublicExpr (e : Expr) : TermElabM Expr := do
  match e with
  | .const n us =>
    if isPrivateName n then
      let publicN ← ensurePublicAlias n
      return .const publicN us
    else
      return e
  | .app f a     => return .app (← makePublicExpr f) (← makePublicExpr a)
  | .forallE n d b bi => return .forallE n (← makePublicExpr d) (← makePublicExpr b) bi
  | .lam n d b bi     => return .lam n (← makePublicExpr d) (← makePublicExpr b) bi
  | .letE n t v b nd  =>
    return .letE n (← makePublicExpr t) (← makePublicExpr v) (← makePublicExpr b) nd
  | .mdata m e   => return .mdata m (← makePublicExpr e)
  | .proj n i e  => return .proj n i (← makePublicExpr e)
  | _            => return e

/--
Given a private constant name `privateN`, ensures a public alias exists and returns the public
name. The alias is placed under the `_public_alias` namespace to avoid normalized-name collisions
with the private declaration.

Only the *type* is processed to replace private sub-declarations with their own aliases. The body
is left as-is: because we call `addDecl` with `forceExpose := false` (the default) inside
`withoutExporting`, the alias is exported to the public kernel environment as an **axiom** (type
only), so the public kernel never needs to check the body. In the private environment, the
original body still type-checks against the public type because each `_public_alias.X` is
definitionally equal to its original `X` there.
-/
private partial def ensurePublicAlias (privateN : Name) : TermElabM Name := do
  let env ← getEnv
  let aliasN := `_public_alias ++ privateToUserName privateN
  if env.contains aliasN then
    return aliasN
  let ci ← getConstInfo privateN
  let levelParams := ci.levelParams
  let publicType ← makePublicExpr ci.type
  let value := ci.value?.getD (.const privateN (levelParams.map Level.param))
  let defval ← mkDefinitionValInferringUnsafe aliasN levelParams publicType value .abbrev
  addDecl (.defnDecl defval)
  return aliasN

end

/--
`infer_public_type% e` elaborates `e`, infers its type, replaces any private declarations
appearing in the type or expression with public standalone copies, and ascribes the resulting
public type to the public expression.

This is useful in a `public section` to give a definition with an elided type a type that is
accessible from other modules, even when Lean has auto-generated private auxiliaries (e.g.,
pattern-match helpers) that would otherwise appear in the inferred type.

Example:
```
public section

def step : Nat × Nat → Nat × Nat
  | (x₁, x₂) => (x₂, x₁ + x₂)

def statesIterator := Iter.repeat (init := (0, 1)) step

def fibIterator := infer_public_type% statesIterator.map (fun (current, _) => current)
```
-/
@[builtin_term_elab inferPublicType]
def elabInferPublicType : TermElab := fun stx _ => do
  -- Elaborate in the private environment so that private auxiliaries (e.g. pattern-match helpers)
  -- generated in elided-type declarations can be referenced without errors.
  let e ← withoutExporting <| withSynthesize (elabTerm stx[1] none)
  let e ← withoutExporting (instantiateMVars e)
  let ty ← withoutExporting (instantiateMVars (← inferType e))
  -- Replace private names in both the expression and its type so that the public kernel
  -- environment can type-check the definition without needing private declarations.
  let e' ← withoutExporting (makePublicExpr e)
  let ty' ← withoutExporting (makePublicExpr ty)
  ensureHasType (some ty') e'

end Lean.Elab.Term
