/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Lean.Elab.TraceView
import Init.Data.FloatArray  -- needed for the unboxed dynamic-programming arrays
import Std.Data.HashMap
import Std.Data.HashSet

public section

/-!
# Trace diffing: `#trace_diff`

This module compares two traces stored with `store_trace_as` (see `Lean.Elab.TraceView`).
Instead of producing a textual diff, it computes a *matching*: a partial one-to-one
correspondence between the nodes of the two trace forests. Everything else is derived from the
matching — a matched pair with identical labels is *same*, a matched pair with differing labels
is *changed*, an unmatched node on the left is *removed*, and on the right *added*.

The matcher is a pure function behind a narrow interface
(`TraceDiff.compute : forest → forest → constraints → threshold → result`) so that it can be
replaced by a stronger algorithm without touching anything else. The matching is intended to be
*interactive*: the constraints allow pinning two nodes together (forcing the match) and
force-unmatching a node (forbidding any match), so a user can correct a wrong correspondence
and have the rest re-arrange around it.

The algorithm is a top-down recursive alignment designed to stay interactive on large traces
(~100k nodes), as they appear in performance debugging:
- Every node gets a structural *fingerprint* (a Merkle-style hash of its label and children
  fingerprints). Identical subtrees — the overwhelming bulk when diffing similar traces — are
  matched wholesale without pairwise exploration.
- Child lists are aligned by first trimming the common fingerprint prefix/suffix, then anchoring
  on children whose fingerprint is unique in both lists (in the spirit of patience diff), and
  only running a weighted longest-common-subsequence dynamic program inside the remaining small
  gaps, subject to a cell budget. Over-budget gaps fall back to guarded positional pairing.
- Node similarity blends label similarity with subtree similarity; the subtree part is computed
  by recursive alignment only below a size budget and approximated by a size ratio above it.

Label similarity is token-based: the *name* of a node (for Lean traces: its trace class) is
weighted 70%, the remaining label text 30%, compared by Jaccard overlap of their token sets.

Deliberate limitations: sibling order is preserved (reordered subtrees are not found
automatically; pins handle them manually), heavily repeated near-identical siblings can be tied
arbitrarily, and fingerprint equality assumes no 64-bit hash collisions.

This module only depends on the public API of `Lean.Elab.TraceView`, so that the diff tool can
be bundled into a separate package if desired.
-/

namespace Lean.Widget.TraceDiff
open Lean.TraceView

/-- One node of a trace forest prepared for diffing; see `TraceDiff.compute`. -/
structure DiffNode where
  /--
  The "name" part of the node, weighted more strongly in label similarity.
  For Lean traces, this is the trace class.
  -/
  name : String := ""
  /-- The display label. For Lean traces, the result emoji and head message of the node. -/
  label : String
  children : Array DiffNode := #[]
  deriving Inhabited

/--
User constraints for `TraceDiff.compute`. Nodes are identified by their path id: the
`.`-separated list of child indices from the root list, e.g. `"0.3.2"`.
-/
structure DiffConstraints where
  /-- Pairs `(left, right)` of path ids that must be matched with each other. -/
  pins : Array (String × String) := #[]
  /-- Path ids of left nodes that must not be matched. -/
  unmatchedLeft : Array String := #[]
  /-- Path ids of right nodes that must not be matched. -/
  unmatchedRight : Array String := #[]

/-- The status of a single node, derived from the matching. -/
inductive DiffStatus where
  /-- Matched, with identical name and label. -/
  | same
  /-- Matched, but name or label differ. -/
  | changed
  /-- Unmatched node of the right forest. -/
  | added
  /-- Unmatched node of the left forest. -/
  | removed
  deriving Inhabited, BEq, Repr

/-- The result of `TraceDiff.compute`, with nodes identified by path ids in preorder. -/
structure DiffResult where
  /-- All matched pairs `(left, right)`, in left preorder. -/
  pairs : Array (String × String) := #[]
  /-- The matched pairs whose name or label differ, in left preorder. -/
  changed : Array (String × String) := #[]
  /-- Unmatched left nodes, in preorder. -/
  removed : Array String := #[]
  /-- Unmatched right nodes, in preorder. -/
  added : Array String := #[]
  /-- Number of matched pairs with identical labels. -/
  numSame : Nat := 0
  deriving Inhabited

namespace DiffResult

/-- One-line summary of the matching, e.g. `12 matched (3 changed), 2 added, 1 removed`. -/
def summary (r : DiffResult) : String :=
  s!"{r.pairs.size} matched ({r.changed.size} changed), \
     {r.added.size} added, {r.removed.size} removed"

end DiffResult

/-! ## Internal representation -/

/-- Flattened node; `children` are indices into the side's node array. -/
private structure Node where
  pathId : String
  name : String
  label : String
  /-- Structural fingerprint: hash of name, label, and children fingerprints. -/
  fp : UInt64
  /-- Number of nodes in this subtree. -/
  size : Nat
  /-- Sorted, deduplicated tokens of `name`. -/
  nameToks : Array String
  /-- Sorted, deduplicated tokens of `label`. -/
  labelToks : Array String
  children : Array Nat
  deriving Inhabited

/-- A flattened forest. -/
private structure Side where
  nodes : Array Node := #[]
  roots : Array Nat := #[]

private def tokenize (s : String) : Array String := Id.run do
  let mut toks : Array String := #[]
  let mut cur : String := ""
  for c in s.toList do
    if c.isAlphanum || c == '_' || c == '.' then
      cur := cur.push c.toLower
    else if !cur.isEmpty then
      toks := toks.push cur
      cur := ""
  if !cur.isEmpty then
    toks := toks.push cur
  let sorted := toks.qsort (· < ·)
  let mut out : Array String := #[]
  for t in sorted do
    if out.back? != some t then
      out := out.push t
  return out

/-- Jaccard overlap of two sorted, deduplicated token arrays. -/
private def jaccard (a b : Array String) : Float := Id.run do
  if a.isEmpty && b.isEmpty then
    return 1.0
  let mut i := 0
  let mut j := 0
  let mut inter := 0
  while i < a.size && j < b.size do
    if a[i]! == b[j]! then
      inter := inter + 1; i := i + 1; j := j + 1
    else if a[i]! < b[j]! then
      i := i + 1
    else
      j := j + 1
  let uni := a.size + b.size - inter
  return inter.toFloat / uni.toFloat

private partial def flattenInto (n : DiffNode) (pathId : String) (side : Side) : Side × Nat :=
  -- reserve the index so that parents precede their children (preorder)
  let idx := side.nodes.size
  let side := { side with nodes := side.nodes.push default }
  let (side, childIdxs, fp, size) :=
    n.children.size.fold (init := (side, #[], mixHash (hash n.name) (hash n.label), 1))
      fun i _ (side, childIdxs, fp, size) =>
        let (side, childIdx) := flattenInto n.children[i]! s!"{pathId}.{i}" side
        let child := side.nodes[childIdx]!
        (side, childIdxs.push childIdx, mixHash fp child.fp, size + child.size)
  let node : Node := {
    pathId, fp, size
    name := n.name
    label := n.label
    nameToks := tokenize n.name
    labelToks := tokenize n.label
    children := childIdxs
  }
  ({ side with nodes := side.nodes.set! idx node }, idx)

private def flatten (forest : Array DiffNode) : Side := Id.run do
  let mut side : Side := {}
  for h : i in [0:forest.size] do
    let (side', root) := flattenInto forest[i] (toString i) side
    side := { side' with roots := side'.roots.push root }
  return side

/-! ## The matcher -/

/-- Resolved constraints, as indices into the flattened sides. -/
private structure Ctx where
  left : Side
  right : Side
  threshold : Float
  pinsL : Std.HashMap Nat Nat := {}
  pinsR : Std.HashMap Nat Nat := {}
  unmatchedL : Std.HashSet Nat := {}
  unmatchedR : Std.HashSet Nat := {}

/-- Maximum number of cells of a single weighted-LCS dynamic program. -/
private def dpBudget : Nat := 65536
/-- Maximum size product of two subtrees compared by full recursive alignment. -/
private def simBudget : Nat := 10000

private abbrev M := ReaderT Ctx (StateM (Std.HashMap UInt64 Float))

/-- Label similarity: name tokens weighted 70%, label tokens 30%, capped just below 1. -/
private def labelSim (x y : Node) : Float :=
  if x.name == y.name && x.label == y.label then
    1.0
  else
    let nameS := if x.name == y.name then 1.0 else jaccard x.nameToks y.nameToks
    let argS := jaccard x.labelToks y.labelToks
    min 0.99 (0.7 * nameS + 0.3 * argS)

/-- Whether the constraints allow matching `x` (left) with `y` (right). -/
private def eligible (ctx : Ctx) (x y : Nat) : Bool :=
  !ctx.unmatchedL.contains x && !ctx.unmatchedR.contains y &&
    match ctx.pinsL.get? x, ctx.pinsR.get? y with
    | some y', _       => y' == y
    | none,    some _  => false
    | none,    none    => true

private def isPinnedPair (ctx : Ctx) (x y : Nat) : Bool :=
  ctx.pinsL.get? x == some y

mutual

/--
Similarity of two nodes: 55% label similarity, 45% similarity of the aligned subtrees,
memoized over node pairs. Subtrees above the size budget are approximated by their size ratio.
-/
private partial def sim (x y : Nat) : M Float := do
  let ctx ← read
  let a := ctx.left.nodes[x]!
  let b := ctx.right.nodes[y]!
  if a.fp == b.fp then
    return 1.0
  if a.children.isEmpty && b.children.isEmpty then
    -- fast path: leaf pairs dominate, and their label similarity is cheaper than memoization
    return labelSim a b
  let key := (x.toUInt64 <<< 32) ||| y.toUInt64
  if let some s := (← get).get? key then
    return s
  let ls := labelSim a b
  let s ←
    if a.children.isEmpty || b.children.isEmpty then
      pure (ls * 0.6)
    else if a.size * b.size > simBudget then
      let ratio := (min a.size b.size).toFloat / (max a.size b.size).toFloat
      pure (0.55 * ls + 0.45 * ratio)
    else do
      let pairs ← alignLists a.children b.children
      let mut acc := 0.0
      for (cx, cy) in pairs do
        if let some s ← pairScore cx cy then
          acc := acc + min 1.0 s
      pure (0.55 * ls + 0.45 * acc / (max a.children.size b.children.size).toFloat)
  modify (·.insert key s)
  return s

/--
The weight of matching `x` with `y`: `none` if the constraints or the threshold forbid the
match, effectively infinite for pinned pairs, and the similarity otherwise.
-/
private partial def pairScore (x y : Nat) : M (Option Float) := do
  let ctx ← read
  if !eligible ctx x y then
    return none
  if isPinnedPair ctx x y then
    return some 1e6
  let s ← sim x y
  return if s ≥ ctx.threshold then some s else none

/-- Weighted-LCS dynamic program over two child lists. Quadratic; callers enforce the budget. -/
private partial def alignDP (A B : Array Nat) : M (Array (Nat × Nat)) := do
  let n := A.size
  let m := B.size
  -- precompute the score matrix (`-1.0` marks ineligible pairs), then run the DP itself
  -- without monadic or boxing overhead
  let mut scores : FloatArray := .emptyWithCapacity (n * m)
  for i in [0:n] do
    for j in [0:m] do
      scores := scores.push ((← pairScore A[i]! B[j]!).getD (-1.0))
  return lcsBacktrack n m scores |>.map fun (i, j) => (A[i]!, B[j]!)
where
  /-- Pure weighted LCS over an `n × m` score matrix, returning matched index pairs. -/
  lcsBacktrack (n m : Nat) (scores : FloatArray) : Array (Nat × Nat) := Id.run do
    let w := m + 1
    let mut dp : FloatArray := .emptyWithCapacity ((n + 1) * w)
    for _ in [0:(n + 1) * w] do
      dp := dp.push 0.0
    let mut bk : Array UInt8 := .replicate ((n + 1) * w) 0
    for i in [1:n+1] do
      for j in [1:m+1] do
        let mut best := dp.get! ((i-1) * w + j)
        let mut dir : UInt8 := 1
        let skipB := dp.get! (i * w + (j-1))
        if skipB > best then
          best := skipB
          dir := 2
        let s := scores.get! ((i-1) * m + (j-1))
        if s ≥ 0.0 then
          let diag := dp.get! ((i-1) * w + (j-1)) + s
          if diag > best then
            best := diag
            dir := 3
        dp := dp.set! (i * w + j) best
        bk := bk.set! (i * w + j) dir
    let mut pairs : Array (Nat × Nat) := #[]
    let mut i := n
    let mut j := m
    while i > 0 && j > 0 do
      match bk[i * w + j]! with
      | 3 => pairs := pairs.push (i - 1, j - 1); i := i - 1; j := j - 1
      | 2 => j := j - 1
      | _ => i := i - 1
    return pairs.reverse

/--
Aligns two child lists: trims the common fingerprint prefix/suffix, then either runs the
dynamic program (within budget) or anchors on unique fingerprints and recurses into the gaps.
-/
private partial def alignLists (A B : Array Nat) : M (Array (Nat × Nat)) := do
  let ctx ← read
  if A.isEmpty || B.isEmpty then
    return #[]
  let fpL := fun x => ctx.left.nodes[x]!.fp
  let fpR := fun y => ctx.right.nodes[y]!.fp
  -- trim common prefix/suffix of structurally identical, unconstrained nodes
  let mut lo := 0
  let mut hiA := A.size
  let mut hiB := B.size
  let mut pairs : Array (Nat × Nat) := #[]
  while lo < hiA && lo < hiB && fpL A[lo]! == fpR B[lo]! && eligible ctx A[lo]! B[lo]! do
    pairs := pairs.push (A[lo]!, B[lo]!)
    lo := lo + 1
  let mut suffix : Array (Nat × Nat) := #[]
  while hiA > lo && hiB > lo && fpL A[hiA-1]! == fpR B[hiB-1]! &&
      eligible ctx A[hiA-1]! B[hiB-1]! do
    suffix := suffix.push (A[hiA-1]!, B[hiB-1]!)
    hiA := hiA - 1
    hiB := hiB - 1
  let midA := A.extract lo hiA
  let midB := B.extract lo hiB
  let mid ← alignMiddle midA midB
  return pairs ++ mid ++ suffix.reverse

/-- Aligns two lists with no common prefix/suffix: DP within budget, anchors otherwise. -/
private partial def alignMiddle (A B : Array Nat) : M (Array (Nat × Nat)) := do
  let ctx ← read
  if A.isEmpty || B.isEmpty then
    return #[]
  if A.size * B.size ≤ dpBudget then
    return ← alignDP A B
  -- anchor on fingerprints that occur exactly once in both lists (cf. patience diff)
  let mut countL : Std.HashMap UInt64 Nat := {}
  let mut countR : Std.HashMap UInt64 Nat := {}
  for x in A do
    countL := countL.insert (ctx.left.nodes[x]!.fp) ((countL.getD (ctx.left.nodes[x]!.fp) 0) + 1)
  for y in B do
    countR := countR.insert (ctx.right.nodes[y]!.fp) ((countR.getD (ctx.right.nodes[y]!.fp) 0) + 1)
  let mut posR : Std.HashMap UInt64 Nat := {}
  for h : j in [0:B.size] do
    let fp := ctx.right.nodes[B[j]]!.fp
    if countL.getD fp 0 == 1 && countR.getD fp 0 == 1 then
      posR := posR.insert fp j
  -- candidate anchors in A order, with their B positions
  let mut cands : Array (Nat × Nat) := #[]  -- (A index, B index)
  for h : i in [0:A.size] do
    let fp := ctx.left.nodes[A[i]]!.fp
    if countL.getD fp 0 == 1 then
      if let some j := posR.get? fp then
        if eligible ctx A[i] B[j]! then
          cands := cands.push (i, j)
  -- longest increasing subsequence over the B positions keeps the anchors order-preserving
  let anchors := lis cands
  if anchors.isEmpty then
    -- no anchors: guarded positional fallback
    let mut pairs : Array (Nat × Nat) := #[]
    for h : i in [0:min A.size B.size] do
      if let some _ ← pairScore A[i]! B[i]! then
        pairs := pairs.push (A[i]!, B[i]!)
    return pairs
  -- recurse into the gaps between consecutive anchors
  let mut pairs : Array (Nat × Nat) := #[]
  let mut prevA := 0
  let mut prevB := 0
  for (i, j) in anchors do
    let gap ← alignMiddle (A.extract prevA i) (B.extract prevB j)
    pairs := pairs ++ gap
    pairs := pairs.push (A[i]!, B[j]!)
    prevA := i + 1
    prevB := j + 1
  let gap ← alignMiddle (A.extract prevA A.size) (B.extract prevB B.size)
  return pairs ++ gap
where
  /-- Longest increasing subsequence of `(i, j)` pairs by `j` (the `i`s are already sorted). -/
  lis (cands : Array (Nat × Nat)) : Array (Nat × Nat) := Id.run do
    if cands.isEmpty then
      return #[]
    let mut tails : Array Nat := #[]      -- indices into cands of smallest tail per length
    let mut prev : Array (Option Nat) := .replicate cands.size none
    for h : c in [0:cands.size] do
      let j := cands[c].2
      -- binary search for the first tail with a B position ≥ j
      let mut lo := 0
      let mut hi := tails.size
      while lo < hi do
        let m := (lo + hi) / 2
        if cands[tails[m]!]!.2 < j then lo := m + 1 else hi := m
      if lo > 0 then
        prev := prev.set! c (some tails[lo-1]!)
      if lo == tails.size then
        tails := tails.push c
      else
        tails := tails.set! lo c
    let mut out : Array (Nat × Nat) := #[]
    let mut cur : Option Nat := tails.back?
    while let some c := cur do
      out := out.push cands[c]!
      cur := prev[c]!
    return out.reverse

end

/--
Computes a matching between two trace forests; see the module documentation.
`threshold` is the minimal similarity for an automatic match: lower values match aggressively
and report changes, higher values split differences into additions and removals. Pinned pairs
in `constraints` are always matched; force-unmatched nodes never are.
-/
def compute (left right : Array DiffNode) (constraints : DiffConstraints := {})
    (threshold : Float := 0.55) : DiffResult := Id.run do
  let l := flatten left
  let r := flatten right
  let idxOf := fun (side : Side) (pathId : String) =>
    side.nodes.findIdx? (·.pathId == pathId)
  let mut ctx : Ctx := { left := l, right := r, threshold }
  for (lp, rp) in constraints.pins do
    if let (some x, some y) := (idxOf l lp, idxOf r rp) then
      ctx := { ctx with pinsL := ctx.pinsL.insert x y, pinsR := ctx.pinsR.insert y x }
  for p in constraints.unmatchedLeft do
    if let some x := idxOf l p then
      ctx := { ctx with unmatchedL := ctx.unmatchedL.insert x }
  for p in constraints.unmatchedRight do
    if let some y := idxOf r p then
      ctx := { ctx with unmatchedR := ctx.unmatchedR.insert y }
  -- align the root lists and recurse into matched pairs, depth first
  let go : M (Array (Option Nat) × Array (Option Nat)) := do
    let mut l2r : Array (Option Nat) := .replicate l.nodes.size none
    let mut r2l : Array (Option Nat) := .replicate r.nodes.size none
    let mut stack ← alignLists ctx.left.roots ctx.right.roots
    while let some (x, y) := stack.back? do
      stack := stack.pop
      l2r := l2r.set! x (some y)
      r2l := r2l.set! y (some x)
      stack := stack ++ (← alignLists l.nodes[x]!.children r.nodes[y]!.children)
    return (l2r, r2l)
  let ((l2r, r2l), _) := (go.run ctx).run {}
  let mut l2r := l2r
  let mut r2l := r2l
  -- enforce pins globally (covers pins the hierarchy could not realize)
  for (x, y) in ctx.pinsL.toArray do
    if l2r[x]! == some y then
      continue
    if let some oldY := l2r[x]! then
      r2l := r2l.set! oldY none
    if let some oldX := r2l[y]! then
      l2r := l2r.set! oldX none
    l2r := l2r.set! x (some y)
    r2l := r2l.set! y (some x)
  -- enforce force-unmatched nodes
  for x in ctx.unmatchedL do
    if let some y := l2r[x]! then
      r2l := r2l.set! y none
      l2r := l2r.set! x none
  for y in ctx.unmatchedR do
    if let some x := r2l[y]! then
      l2r := l2r.set! x none
      r2l := r2l.set! y none
  -- derive statuses
  let mut res : DiffResult := {}
  for h : x in [0:l.nodes.size] do
    let a := l.nodes[x]
    match l2r[x]! with
    | none => res := { res with removed := res.removed.push a.pathId }
    | some y =>
      let b := r.nodes[y]!
      res := { res with pairs := res.pairs.push (a.pathId, b.pathId) }
      if a.name == b.name && a.label == b.label then
        res := { res with numSame := res.numSame + 1 }
      else
        res := { res with changed := res.changed.push (a.pathId, b.pathId) }
  for h : y in [0:r.nodes.size] do
    if r2l[y]! == none then
      res := { res with added := res.added.push (r.nodes[y].pathId) }
  return res

/-! ## Reporting and conversion from stored traces -/

private def truncateLabel (s : String) (maxLen : Nat := 60) : String :=
  let s := s.replace "\n" " "
  if s.length > maxLen then (s.take (maxLen - 1)).toString ++ "…" else s

/-- Renders a `DiffResult` as text, looking node labels up in the two forests. -/
def report (left right : Array DiffNode) (res : DiffResult) (maxList : Nat := 10) :
    String := Id.run do
  let l := flatten left
  let r := flatten right
  let labelOf := fun (side : Side) (pathId : String) =>
    match side.nodes.find? (·.pathId == pathId) with
    | some n => s!"[{n.name}] {truncateLabel n.label}"
    | none   => "?"
  let mut out := res.summary
  let cap := fun (n : Nat) (lines : Array String) =>
    if n > lines.size then lines.push s!"  … and {n - lines.size} more" else lines
  unless res.changed.isEmpty do
    let lines := res.changed.take maxList |>.map fun (lp, rp) =>
      s!"  {lp}: {labelOf l lp} ⇒ {labelOf r rp}"
    out := out ++ "\nchanged:\n" ++ "\n".intercalate (cap res.changed.size lines).toList
  unless res.added.isEmpty do
    let lines := res.added.take maxList |>.map fun p => s!"  {p}: {labelOf r p}"
    out := out ++ "\nadded:\n" ++ "\n".intercalate (cap res.added.size lines).toList
  unless res.removed.isEmpty do
    let lines := res.removed.take maxList |>.map fun p => s!"  {p}: {labelOf l p}"
    out := out ++ "\nremoved:\n" ++ "\n".intercalate (cap res.removed.size lines).toList
  return out

/-- Converts a stored trace tree into a `DiffNode` tree. -/
partial def ofTraceTree (t : TraceTree) : BaseIO DiffNode := do
  return {
    name := toString (t.cls?.getD .anonymous)
    label := (← t.headText).replace "\n" " "
    children := ← t.children.mapM ofTraceTree
  }

/-- Converts a stored trace into a `DiffNode` forest. -/
def ofStoredTrace (t : StoredTrace) : BaseIO (Array DiffNode) :=
  t.roots.mapM ofTraceTree

end Lean.Widget.TraceDiff
