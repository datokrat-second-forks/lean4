module

/-!
Tests the `newtype` `Id` from an importing module: virtual iota and eta hold by `rfl`, `simp` rewrites
through them inside terms, and `cases` inverts an `Id.mk` index.
-/

example (x : Nat) : Id.run (Id.mk x) = x := rfl
example (x : Id Nat) : Id.mk x.run = x := rfl

example (f : Nat → Nat) (x : Nat) : f (Id.mk x).run = f x := by simp
example (f : Id Nat → Nat) (x : Id Nat) : f (Id.mk x.run) = f x := by simp

inductive IsZero : Id Nat → Prop
  | mk : IsZero (Id.mk 0)

example (n : Nat) (h : IsZero (Id.mk n)) : n = 0 := by
  cases h
  rfl

example (x : Id Nat) (h : IsZero x) : x.run = 0 := by
  induction h
  rfl
