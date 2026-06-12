/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Widget.TraceDiff.Basic
public import Lean.Data.Lsp.Basic

public section

/-!
# Data types of the trace diff widget RPC interface

See `Lean.Widget.TraceDiff.Rpc` for the RPC methods themselves. This module is separate so
that the (non-`meta`) data types and their JSON instances can be `meta import`ed by the RPC
methods.
-/

namespace Lean.Widget.TraceDiff

/-- A node of a trace forest as sent to the trace diff widget. -/
structure DiffTreeNode where
  /-- The trace class. -/
  name : String
  /-- The head message of the node. -/
  label : String
  children : Array DiffTreeNode
  deriving Inhabited

partial def DiffTreeNode.toJsonImpl (n : DiffTreeNode) : Json :=
  Json.mkObj [
    ("name", Json.str n.name),
    ("label", Json.str n.label),
    ("children", Json.arr (n.children.map toJsonImpl))
  ]

partial def DiffTreeNode.fromJsonImpl (j : Json) : Except String DiffTreeNode := do
  let children ← (← j.getObjVal? "children").getArr?
  return {
    name := ← (← j.getObjVal? "name").getStr?
    label := ← (← j.getObjVal? "label").getStr?
    children := ← children.mapM fromJsonImpl
  }

instance : ToJson DiffTreeNode := ⟨DiffTreeNode.toJsonImpl⟩
instance : FromJson DiffTreeNode := ⟨DiffTreeNode.fromJsonImpl⟩

/-- A pair of path ids, the left one belonging to the left forest, the right one to the right. -/
structure PathPair where
  l : String
  r : String
  deriving FromJson, ToJson

structure GetTraceDiffDataParams where
  /-- The position of the `#trace_diff` command, used to find the right environment. -/
  pos : Lsp.Position
  /-- The declaration names of the two stored traces being compared. -/
  left : String
  right : String
  deriving FromJson, ToJson

structure TraceDiffData where
  left : Array DiffTreeNode
  right : Array DiffTreeNode
  /-- Whether nodes were dropped because a forest exceeded the node budget. -/
  truncated : Bool
  deriving FromJson, ToJson

structure ComputeTraceDiffParams where
  pos : Lsp.Position
  left : String
  right : String
  /-- Pairs of nodes that must be matched with each other. -/
  pins : Array PathPair := #[]
  /-- Left nodes that must not be matched. -/
  unmatchedLeft : Array String := #[]
  /-- Right nodes that must not be matched. -/
  unmatchedRight : Array String := #[]
  threshold : Float := 0.55
  deriving FromJson, ToJson

structure ComputeTraceDiffResult where
  /-- All matched pairs, including changed ones. -/
  pairs : Array PathPair
  /-- The matched pairs whose name or label differ. -/
  changed : Array PathPair
  added : Array String
  removed : Array String
  numSame : Nat
  deriving FromJson, ToJson

/-- Node budget per side for the data sent to the widget; see `getTraceDiffData`. -/
def displayBudget : Nat := 20000

/-- Converts a forest for display, dropping subtrees once the node budget is exhausted. -/
partial def truncateForest (forest : Array DiffNode) (budget : Nat) :
    Array DiffTreeNode × Bool := Id.run do
  let mut out := #[]
  let mut budget := budget
  let mut truncated := false
  for n in forest do
    if budget == 0 then
      truncated := true
      break
    let (n', budget') := go n budget
    out := out.push n'
    budget := budget'
  return (out, truncated || budget == 0)
where
  go (n : DiffNode) (budget : Nat) : DiffTreeNode × Nat := Id.run do
    let mut budget := budget - 1
    let mut children := #[]
    for c in n.children do
      if budget == 0 then
        break
      let (c', budget') := go c budget
      children := children.push c'
      budget := budget'
    return ({ name := n.name, label := n.label, children }, budget)

end Lean.Widget.TraceDiff
