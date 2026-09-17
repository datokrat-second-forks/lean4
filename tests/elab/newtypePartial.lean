/-!
Tests that `partial` accepts a definition whose type is a `newtype` around a function type, as a
monad sealed with `newtype` is: the check that a `partial` definition is a function looks through
the irreducible `newtype`.
-/

newtype M (α : Type) := Nat → α with run

instance [Inhabited α] : Inhabited (M α) := ⟨M.mk fun _ => default⟩

partial def loop : M Nat := loop

/--
error: invalid use of `partial`, `notAFunction` is not a function
  Nat
-/
#guard_msgs in
partial def notAFunction : Nat := notAFunction
