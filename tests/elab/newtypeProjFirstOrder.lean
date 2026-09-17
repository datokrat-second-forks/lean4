/-!
Tests that a constraint between two virtual projections is solved first-order, the way it is for a
real single-field structure: `N.run ?m =?= N.run a` must assign `?m := a`, not `?m := N.mk a.run`.

Both assignments are definitionally equal, but the eta-expanded one is syntactically larger, so a
congruence step over `N.run` grows its goal by an `mk`/`run` layer instead of stripping the
projection, and `congr` then descends without bound.

Eta-expanding is still the right answer when the other side is not the same projection applied;
that case is `newtypeProjMVar.lean`.
-/

newtype N (type : Type) := type with run

structure Box (α : Type) where mk :: run : α

-- A congruence step over the projection strips it, as it does for a real structure.
example (a b : Box Nat) (h : a = b) : a.run = b.run := by
  apply congrArg Box.run
  guard_target =ₛ a = b
  exact h

example (a b : N Nat) (h : a = b) : a.run = b.run := by
  apply congrArg N.run
  guard_target =ₛ a = b
  exact h

-- Same, when the projection appears in the hypothesis of a lemma being applied.
theorem Box.elim {α} {a : Box α} {x : α} (_ : a.run = x) : a = a := rfl
theorem N.elim {α} {a : N α} {x : α} (_ : a.run = x) : a = a := rfl

example (a : Box Nat) (x : Nat) (h : a.run = x) : True := by
  have := Box.elim h
  guard_hyp this :ₛ a = a
  trivial

example (a : N Nat) (x : Nat) (h : a.run = x) : True := by
  have := N.elim h
  guard_hyp this :ₛ a = a
  trivial

-- Same, for a rewrite: the result must not pick up an `mk`/`run` pair.
theorem Box.mk_run (a : Box α) : Box.mk a.run = a := rfl
theorem N.mk_run (a : N α) : N.mk a.run = a := rfl

example (a : Box Nat) (h : Box.mk a.run = Box.mk 3) : a = Box.mk 3 := by
  rw [Box.mk_run] at h
  guard_hyp h :ₛ a = Box.mk 3
  exact h

example (a : N Nat) (h : N.mk a.run = N.mk 3) : a = N.mk 3 := by
  rw [N.mk_run] at h
  guard_hyp h :ₛ a = N.mk 3
  exact h

-- The consequence, at a `newtype` monad: `congr` reaches the two loop bodies instead of adding a
-- layer per level and running until it exhausts the heartbeat budget.
instance : Monad N where
  pure a := .mk a
  bind x f := f x.run
  map f x := .mk (f x.run)

set_option maxHeartbeats 20000 in
example (l : List Nat) (init : Nat) (g : Nat → Nat → Nat) :
    N.run (forIn' l init fun a _ acc => pure (.yield (g acc a)))
      = N.run (forIn l init fun a acc => pure (.yield (g acc a))) := by
  congr <;> simp only [forIn'_eq_forIn]
