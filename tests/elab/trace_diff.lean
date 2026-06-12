import Lean

/-!
Tests for `#trace_diff` and the trace matching algorithm in `Lean.Widget.TraceDiff`:
similarity-based matching, pins, force-unmatching, thresholds, fingerprint anchors, and
diffing of traces stored with `store_trace_as`.
-/

open Lean.Widget.TraceDiff

private def n (name label : String) (kids : Array DiffNode := #[]) : DiffNode :=
  { name, label, children := kids }

private def show' (l r : Array DiffNode) (c : DiffConstraints := {}) (t : Float := 0.55) :
    IO Unit :=
  IO.println (report l r (compute l r c t))

-- Identical forests match completely.
/-- info: 3 matched (0 changed), 0 added, 0 removed -/
#guard_msgs in
#eval show' #[n "f" "x" #[n "g" "1", n "g" "2"]] #[n "f" "x" #[n "g" "1", n "g" "2"]]

-- A changed argument matches as *changed* instead of splitting into add/remove.
/--
info: 1 matched (1 changed), 0 added, 0 removed
changed:
  0: [f] execute rows=0 ⇒ [f] execute rows=1
-/
#guard_msgs in
#eval show' #[n "f" "execute rows=0"] #[n "f" "execute rows=1"]

-- Unmatched nodes are reported as added/removed.
/--
info: 2 matched (0 changed), 1 added, 0 removed
added:
  0.1: [h] 2
-/
#guard_msgs in
#eval show' #[n "f" "x" #[n "g" "1"]] #[n "f" "x" #[n "g" "1", n "h" "2"]]

-- Nodes too dissimilar for the threshold split into an addition and a removal.
/--
info: 0 matched (0 changed), 1 added, 1 removed
added:
  0: [omega] nothing in common
removed:
  0: [alpha] completely different
-/
#guard_msgs in
#eval show' #[n "alpha" "completely different"] #[n "omega" "nothing in common"]

-- A pin forces a match and evicts the partners the algorithm would have chosen.
/--
info: 2 matched (1 changed), 1 added, 1 removed
changed:
  0.0: [g] 1 ⇒ [g] 2
added:
  0.0: [g] 1
removed:
  0.1: [g] 2
-/
#guard_msgs in
#eval show' #[n "f" "x" #[n "g" "1", n "g" "2"]] #[n "f" "x" #[n "g" "1", n "g" "2"]]
  { pins := #[("0.0", "0.1")] }

-- A force-unmatched node never matches.
/--
info: 1 matched (0 changed), 1 added, 1 removed
added:
  0.0: [g] 1
removed:
  0.0: [g] 1
-/
#guard_msgs in
#eval show' #[n "f" "x" #[n "g" "1"]] #[n "f" "x" #[n "g" "1"]]
  { unmatchedLeft := #["0.0"] }

-- A high threshold turns a near-match into add/remove; a low threshold matches it.
/--
info: 0 matched (0 changed), 1 added, 1 removed
added:
  0: [f] execute rows=1
removed:
  0: [f] execute rows=0
-/
#guard_msgs in
#eval show' #[n "f" "execute rows=0"] #[n "f" "execute rows=1"] (t := 0.999)

-- Long repetitive sibling lists are aligned via unique-fingerprint anchors (the size of this
-- example is over the dynamic-programming budget, exercising the anchor path).
/-- info: 802 matched (0 changed), 1 added, 0 removed -/
#guard_msgs in
#eval do
  let mk := fun (k : Nat) => (Array.range k).map fun i => n "step" s!"iteration {i % 7}"
  let body := (mk 400).push (n "unique" "anchor A") ++ mk 400
  let L := #[n "loop" "run" body]
  let R := #[n "loop" "run" (body.push (n "extra" "tail"))]
  IO.println (compute L R).summary

-- Large, mostly identical forests are matched wholesale via structural fingerprints.
/-- info: 20200 matched (4 changed), 0 added, 0 removed -/
#guard_msgs in
#eval do
  let big := fun (tweak : Bool) => (Array.range 200).map fun r =>
    n s!"phase{r % 13}" s!"root {r}" <|
      (Array.range 100).map fun c =>
        if tweak && r == 100 && c % 33 == 0 then
          n "step" s!"child {c} CHANGED"
        else
          n "step" s!"child {c} of {r % 13}"
  IO.println (compute (big false) (big true)).summary

/-! Diffing stored traces. -/

set_option trace.Meta.synthInstance true in
/--
trace: [Meta.synthInstance] ✅️ Inhabited (List Nat)
  [Meta.synthInstance] ✅️ new goal Inhabited (List Nat)
    [Meta.synthInstance.instances] #[@instInhabitedOfMonad, @instInhabitedList]
  [Meta.synthInstance.apply] ✅️ apply @instInhabitedList to Inhabited (List Nat)
    [Meta.synthInstance.tryResolve] ✅️ Inhabited (List Nat) ≟ Inhabited (List Nat)
    [Meta.synthInstance.answer] ✅️ Inhabited (List Nat)
  [Meta.synthInstance] result instInhabitedList
-/
#guard_msgs in
store_trace_as listTrace in
example : Inhabited (List Nat) := inferInstance

set_option trace.Meta.synthInstance true in
/--
trace: [Meta.synthInstance] ✅️ Inhabited (Option Nat)
  [Meta.synthInstance] ✅️ new goal Inhabited (Option Nat)
    [Meta.synthInstance.instances] #[@instInhabitedOfMonad, @instInhabitedOption]
  [Meta.synthInstance.apply] ✅️ apply @instInhabitedOption to Inhabited (Option Nat)
    [Meta.synthInstance.tryResolve] ✅️ Inhabited (Option Nat) ≟ Inhabited (Option Nat)
    [Meta.synthInstance.answer] ✅️ Inhabited (Option Nat)
  [Meta.synthInstance] result instInhabitedOption
-/
#guard_msgs in
store_trace_as optionTrace in
example : Inhabited (Option Nat) := inferInstance

-- A trace diffed against itself is entirely unchanged.
/-- info: trace diff `listTrace` ⇒ `listTrace`: 7 matched (0 changed), 0 added, 0 removed -/
#guard_msgs in
#trace_diff listTrace listTrace

-- Structurally parallel instance searches match up node by node as *changed*.
/--
info: trace diff `listTrace` ⇒ `optionTrace`: 7 matched (7 changed), 0 added, 0 removed
changed:
  0: [Meta.synthInstance] ✅️ Inhabited (List Nat) ⇒ [Meta.synthInstance] ✅️ Inhabited (Option Nat)
  0.0: [Meta.synthInstance] ✅️ new goal Inhabited (List Nat) ⇒ [Meta.synthInstance] ✅️ new goal Inhabited (Option Nat)
  0.0.0: [Meta.synthInstance.instances] #[@instInhabitedOfMonad, @instInhabitedList] ⇒ [Meta.synthInstance.instances] #[@instInhabitedOfMonad, @instInhabitedOption]
  0.1: [Meta.synthInstance.apply] ✅️ apply @instInhabitedList to Inhabited (List Nat) ⇒ [Meta.synthInstance.apply] ✅️ apply @instInhabitedOption to Inhabited (Option Nat)
  0.1.0: [Meta.synthInstance.tryResolve] ✅️ Inhabited (List Nat) ≟ Inhabited (List Nat) ⇒ [Meta.synthInstance.tryResolve] ✅️ Inhabited (Option Nat) ≟ Inhabited (Option Nat)
  0.1.1: [Meta.synthInstance.answer] ✅️ Inhabited (List Nat) ⇒ [Meta.synthInstance.answer] ✅️ Inhabited (Option Nat)
  0.2: [Meta.synthInstance] result instInhabitedList ⇒ [Meta.synthInstance] result instInhabitedOption
-/
#guard_msgs in
#trace_diff listTrace optionTrace

/--
error: unknown stored trace `nope` (stored traces: `listTrace`, `optionTrace`); store one using `store_trace_as nope in <command>`
-/
#guard_msgs in
#trace_diff nope listTrace
