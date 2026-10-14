import Std.WP

/-!
# `coinductive_fixpoint` beside a `vcgen` proof

`Prop` is an assertion lattice, so `Std.WP` carries a `PartialOrder Prop` instance,
re-scoped from `Std.Internal.Order`.

The monotonicity lemmas of `inductive_fixpoint` and `coinductive_fixpoint` state their conclusion
with the cast `ImplicationOrder.ofProp` or `ReverseImplicationOrder.ofProp`, so the solver only
tries the lemmas of the right direction, and a `PartialOrder Prop` in scope does not change that.

This test pins that a coinductive definition, a `vcgen` proof, and mutual blocks that mix
`inductive_fixpoint` and `coinductive_fixpoint` coexist (compare the `mixed3` and `mixed4` cases of
`coinductive_predicates.lean`).
-/

open Std.WP Lean.Order

set_option experimental.vcgen true

/-! ## What works: a coinductive predicate beside a `vcgen` proof -/

def infseq {α} (R : α → α → Prop) : α → Prop :=
  fun x : α => ∃ y, R x y ∧ infseq R y
  coinductive_fixpoint

theorem cycle_infseq {R : α → α → Prop} (x : α) : R x x → infseq R x := by
  apply @infseq.coinduct α R (fun m => R m m)
  intro x _
  exact Exists.intro x (by trivial)

mutual
  def evenLoop : Prop := oddLoop
  coinductive_fixpoint

  def oddLoop : Prop := evenLoop
  coinductive_fixpoint
end

def mySum (l : List Nat) : Nat := Id.run do
  let mut acc := 0
  for x in l do acc := acc + x
  return acc

theorem mySum_correct (l : List Nat) : mySum l = l.sum := by
  generalize h : mySum l = r
  apply Id.of_run_eq_wp h
  vcgen [mySum] invariants
  · fun _pref suff acc => ⌜acc + suff.sum = l.sum⌝
  with finish

/-! ## Mixed mutual blocks over a negation and an implication -/

namespace mixed2
  mutual
    def tick : Prop := ¬tock
    inductive_fixpoint

    def tock : Prop := ¬tick
    coinductive_fixpoint
  end
end mixed2

namespace mixed3
#guard_msgs in
mutual
  def tick : Prop := tock → tick
  coinductive_fixpoint

  def tock : Prop := tick → tock
  inductive_fixpoint
end
end mixed3

namespace mixed4
#guard_msgs in
mutual
  def tick : Prop := tock → tick
  inductive_fixpoint

  def tock : Prop := tick → tock
  coinductive_fixpoint
end
end mixed4
