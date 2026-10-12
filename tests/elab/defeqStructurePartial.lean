/-!
Tests that `partial` accepts a definition whose type is a `+defeq` structure around a function
type, as a monad sealed with `structure +defeq` is: the check that a `partial` definition is a
function looks through the irreducible `+defeq` structure.
-/

structure +defeq M (α : Type) where
  run : Nat → α

instance [Inhabited α] : Inhabited (M α) := ⟨M.mk fun _ => default⟩

partial def loop : M Nat := loop

/--
error: invalid use of `partial`, `notAFunction` is not a function
  Nat
-/
#guard_msgs in
partial def notAFunction : Nat := notAFunction
