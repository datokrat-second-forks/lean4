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
public import Lean.Widget.TraceDiff.Rpc
meta import Lean.Widget.TraceDiff.Rpc

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
`Lean.Widget.TraceDiff.Basic` for the algorithm.

In an editor, the command additionally shows an interactive side-by-side widget in the
infoview: changed, added, and removed nodes are color-coded, hovering a node highlights its
partner, and a wrong correspondence can be corrected manually by selecting a node and clicking
a node on the opposite side, which pins the two together and recomputes the matching around it.
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
    -- Log a single message that renders as the interactive diff widget in the infoview and as
    -- the textual report everywhere else (command line, `#guard_msgs`, …).
    let pos := (← getRef).getPos?.getD 0
    let props := Json.mkObj [
      ("pos", toJson ((← getFileMap).utf8PosToLspPos pos)),
      ("left", Json.str (toString (← liftCoreM <| realizeGlobalConstNoOverloadWithInfo a))),
      ("right", Json.str (toString (← liftCoreM <| realizeGlobalConstNoOverloadWithInfo b)))
    ]
    let wi : Widget.WidgetInstance := {
      id := ``traceDiffWidget
      javascriptHash := traceDiffWidget.javascriptHash
      props := pure props
    }
    logInfo <| .ofWidget wi m!"trace diff `{a.getId}` ⇒ `{b.getId}`: {report left right res}"
  | _ => throwUnsupportedSyntax

end Lean.Widget.TraceDiff
