/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Meta.Transport
public import Lean.Elab.Tactic.ElabTerm

public section

namespace Lean.Elab.Tactic

@[builtin_tactic Lean.Parser.Tactic.transport]
def evalTransport : Tactic := fun stx =>
  match stx with
  | `(tactic| transport $src:term) => do
    let goal ← getMainGoal
    goal.withContext do
      let srcType ← Term.withSynthesize <| Term.elabType src
      let inst ← Meta.transportInstance srcType (← goal.getType)
      closeMainGoal `transport inst
  | _ => throwUnsupportedSyntax

end Lean.Elab.Tactic
