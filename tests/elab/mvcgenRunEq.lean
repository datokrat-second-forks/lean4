import Std.Tactic.Do

/-!
Tests the `Id`-specialized soundness lemmas `StateM.of_wp_run_eq`, `StateM.of_wp_run'_eq` and
`ReaderM.of_wp_run_eq` with the `generalize h : prog.run s = x` idiom, where `x : Id _`.
-/

open Std.Do

set_option linter.deprecated.syntax false

def inc : StateM Nat Nat := do
  modify (· + 1)
  get

theorem inc_run (s : Nat) : (inc.run s).run = (s + 1, s + 1) := by
  generalize h : inc.run s = x
  apply StateM.of_wp_run_eq h (· = (s + 1, s + 1))
  mvcgen [inc]

theorem inc_run' (s : Nat) : (inc.run' s).run > s := by
  generalize h : inc.run' s = x
  apply StateM.of_wp_run'_eq h
  mvcgen [inc]
  grind

def next : ReaderM Nat Nat := do
  return (← read) + 1

theorem next_run (r : Nat) : (next.run r).run = r + 1 := by
  generalize h : next.run r = x
  apply ReaderM.of_wp_run_eq h (· = r + 1)
  mvcgen [next]
