/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Elab.Command
public import Lean.Widget.TraceDiff.Basic
meta import Lean.Widget.TraceDiff.Basic

public section

/-!
# The `#trace_diff` command

Compares two traces stored with `store_trace_as`; see `Lean.Widget.TraceDiff.Basic` for the
matching algorithm.
-/

namespace Lean.Widget.TraceDiff
open Lean.TraceView

open Elab Command in
/-- Resolves the name of a stored trace; see `Lean.Elab.TraceView`. -/
private meta def resolveStoredTrace (id : Ident) : CommandElabM StoredTrace := do
  let unknown : CommandElabM Name := do
    let available := allStoredTraces (← getEnv) |>.map (m!"`{·.1}`")
    let hint := if available.isEmpty then
        m!"no traces have been stored in this file"
      else
        m!"stored traces: {MessageData.joinSep available ", "}"
    throwErrorAt id "unknown stored trace `{id.getId}` ({hint}); \
      store one using `store_trace_as {id.getId} in <command>`"
  let declName ←
    try
      liftCoreM <| realizeGlobalConstNoOverloadWithInfo id
    catch _ =>
      unknown
  let some t := findStoredTrace? (← getEnv) declName
    | discard unknown; unreachable!
  return t

/--
`#trace_diff t1 t2` compares two traces stored with `store_trace_as` and reports a summary of
the matching: how many trace nodes are unchanged, changed, added, or removed; see
`Lean.Widget.TraceDiff` for the algorithm.
-/
syntax (name := traceDiffCmd) "#trace_diff " ident ppSpace ident : command

open Elab Command in
@[command_elab traceDiffCmd] meta def elabTraceDiff : CommandElab
  | `(command| #trace_diff $a $b) => do
    let ta ← resolveStoredTrace a
    let tb ← resolveStoredTrace b
    let left ← ofStoredTrace ta
    let right ← ofStoredTrace tb
    let res := compute left right
    logInfo m!"trace diff `{a.getId}` ⇒ `{b.getId}`: {report left right res}"
  | _ => throwUnsupportedSyntax

end Lean.Widget.TraceDiff
