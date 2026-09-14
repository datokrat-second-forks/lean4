abbrev MyId (α : Type) := α
variable (x : MyId Nat) (h : x = x)

theorem MyId_def : MyId α = α := rfl

theorem bar : x = x.succ := by
  rw [MyId_def] at x
  -- rw should not expose the auxdecl `bar`:
  fail_if_success assumption
  sorry
