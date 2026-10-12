/-!
Tests the `unsealing_structure` tactic combinator: it is the escape hatch for a `+defeq`
structure, temporarily relaxing `N`/`N.mk`/`N.toNat` from `[irreducible]` to `[semireducible]` for
the duration of the tactic block (e.g. to prove `N = Nat`, which requires unfolding `N`'s
definition), and restores the original `[irreducible]` status afterward.
-/

structure +defeq N where
  toNat : Nat

-- Inside the block, `N` unfolds to `Nat`.
example : N = Nat := by unsealing_structure N => rfl

-- Also inside a named theorem, whose proof is elaborated asynchronously in a separate environment
-- branch (which must not modify the global reducibility status).
theorem foo : N = Nat := by unsealing_structure N => rfl

-- `N` is only `[semireducible]`, so it does not unfold at reducible transparency.
theorem foo' : N = Nat := by
  unsealing_structure N =>
    fail_if_success with_reducible rfl
    rfl

-- The reducibility status can be chosen via the `reducibility` option.
example : N = Nat := by
  unsealing_structure (reducibility := .reducible) N => with_reducible rfl
example : N = Nat := by
  unsealing_structure (reducibility := .instanceReducible) N =>
    fail_if_success with_reducible rfl
    with_reducible_and_instances rfl
example : N = Nat := by
  unsealing_structure (reducibility := .implicitReducible) N =>
    fail_if_success with_reducible_and_instances rfl
    with_implicit rfl
example : N = Nat := by
  unsealing_structure (reducibility := .semireducible) N =>
    fail_if_success with_reducible rfl
    rfl

-- `simp`/`unfold` may unfold the definitions inside the block.
example (n : Nat) : N.toNat (N.mk n) = n := by
  unsealing_structure N => simp only [N.toNat, N.mk]
example (x : N) : N.mk x.toNat = x := by
  unsealing_structure N =>
    unfold N.toNat N.mk
    rfl

-- After the block, the status is restored even within the same proof.
example : N = Nat ∧ N = Nat := by
  constructor
  · unsealing_structure N => rfl
  · fail_if_success rfl
    unsealing_structure N => rfl

/-- error: Cannot unseal structure `Nat` because it was defined without the `+defeq` option -/
#guard_msgs in
example : Nat = Nat := by unsealing_structure Nat => rfl

-- Outside the block, `N` is irreducible again: this still fails.
/-- but is expected to have type
  N = Nat -/
#guard_msgs (substring := true) in
example : N = Nat := rfl
