/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Elab.Tactic.Basic
public import Lean.Meta.VirtualStructure
import Lean.Elab.Tactic.Config

public section

namespace Lean.Elab.Tactic
open Meta

/--
Runs `t` with the declarations `names` treated as having reducibility status `status`. The
combinator underlying the `unsealing_structure` tactic; see its docstring.
-/
def unsealingStructure [Monad m] [MonadEnv m] [MonadFinally m] (names : Array Name)
    (status : ReducibilityStatus := .semireducible) (t : m α) : m α := do
  modifyEnv reducibilityExtraExt.pushScope
  for n in names do
    setLocalReducibilityStatus n status
  try
    t
  finally
    modifyEnv reducibilityExtraExt.popScope

declare_config_elab elabUnsealingStructureConfig Parser.Tactic.UnsealingStructureConfig

def _root_.Lean.Parser.Tactic.UnsealingStructureReducibility.toReducibilityStatus :
    Parser.Tactic.UnsealingStructureReducibility → ReducibilityStatus
  | .reducible => .reducible
  | .instanceReducible => .instanceReducible
  | .implicitReducible => .implicitReducible
  | .semireducible => .semireducible

@[builtin_tactic Lean.Parser.Tactic.unsealingStructure] def evalUnsealingStructure : Tactic :=
  fun stx => do
    let cfg ← elabUnsealingStructureConfig stx[1]
    let typeStx := stx[2]
    let typeName ← resolveGlobalConstNoOverload typeStx
    let some info ← getVirtualStructureInfo? typeName
      | throwErrorAt typeStx "Cannot unseal structure `{.ofConstName typeName}` because it was \
          defined without the `+defeq` option"
    addConstInfo typeStx typeName
    unsealingStructure #[info.typeName, info.ctorName, info.projName]
      cfg.reducibility.toReducibilityStatus (evalTactic stx[4])

end Lean.Elab.Tactic
