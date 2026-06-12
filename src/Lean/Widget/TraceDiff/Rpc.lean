/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Widget.TraceDiff.Protocol
meta import Lean.Widget.TraceDiff.Protocol
public import Lean.Server.Rpc.RequestHandling
meta import Lean.Server.Rpc.RequestHandling
meta import Lean.Server.Requests
public import Lean.Widget.UserWidget
meta import Lean.Widget.UserWidget

public section

/-!
# RPC interface of the trace diff widget

The widget shown by `#trace_diff` fetches its data through two RPC methods:
- `Lean.Widget.TraceDiff.getTraceDiffData` returns the two trace forests (labels only) for
  display, truncated to a node budget;
- `Lean.Widget.TraceDiff.computeTraceDiff` runs the matcher (`TraceDiff.compute`) over the
  *full* forests with the current user constraints and threshold and returns the matching.

Nodes are identified by their path id (`"0.3.2"`, the child indices from the root list), which
the client derives from the tree structure, so the matching stays valid across re-renders.
-/

namespace Lean.Widget.TraceDiff
open Lean.TraceView Server RequestM

/-- Returns the two stored trace forests for the given environment. -/
private meta def getForests (env : Environment) (left right : String) :
    RequestM (Array DiffNode × Array DiffNode) := do
  let find := fun (n : String) => do
    match findStoredTrace? env n.toName with
    | some t => ofStoredTrace t
    | none   => throw (RequestError.invalidParams s!"unknown stored trace `{n}`; \
        the trace data of stored traces is only available in the file that stored them")
  return (← find left, ← find right)

@[server_rpc_method]
meta def getTraceDiffData (params : GetTraceDiffDataParams) :
    RequestM (RequestTask TraceDiffData) :=
  withWaitFindSnapAtPos params.pos fun snap => do
    let (l, r) ← getForests snap.cmdState.env params.left params.right
    let (left, truncL) := truncateForest l displayBudget
    let (right, truncR) := truncateForest r displayBudget
    return { left, right, truncated := truncL || truncR }

@[server_rpc_method]
meta def computeTraceDiff (params : ComputeTraceDiffParams) :
    RequestM (RequestTask ComputeTraceDiffResult) :=
  withWaitFindSnapAtPos params.pos fun snap => do
    let (l, r) ← getForests snap.cmdState.env params.left params.right
    let res := compute l r {
      pins := params.pins.map fun p => (p.l, p.r)
      unmatchedLeft := params.unmatchedLeft
      unmatchedRight := params.unmatchedRight
    } params.threshold
    return {
      pairs := res.pairs.map fun (l, r) => { l, r }
      changed := res.changed.map fun (l, r) => { l, r }
      added := res.added
      removed := res.removed
      numSame := res.numSame
    }

/-- The trace diff widget; shown by the `#trace_diff` command. -/
@[widget_module]
def traceDiffWidget : Module where
  javascript := include_str "traceDiff.js"

end Lean.Widget.TraceDiff
