import Lean

/-!
`Nat.sqrt` and `Nat.nextPowerOfTwo` branch with `uif`, i.e. on `UDecidable` instances. Compiled
code still computes them, and their lemmas still apply. They no longer reduce in the kernel.
-/

open Lean Meta in
/-- Fails unless the definition of `declName` branches on `UDecidable` and not on `Decidable`. -/
def checkUDecidable (declName : Name) : MetaM Unit := do
  let some value := (← getConstInfo declName).value? | throwError "{declName} has no value"
  if value.find? (fun e => e.isConstOf ``ite || e.isConstOf ``dite) |>.isSome then
    throwError "{declName} uses `ite` or `dite`"
  unless value.find? (fun e => e.isConstOf ``UDecidable.ite || e.isConstOf ``UDecidable.dite)
      |>.isSome do
    throwError "{declName} does not use `UDecidable`"

run_meta checkUDecidable ``Nat.sqrt

/-- info: [0, 1, 1, 2, 3, 4, 100] -/
#guard_msgs in
#eval [0, 1, 3, 4, 15, 16, 10000].map Nat.sqrt

/-- info: [1, 1, 2, 4, 8, 1024] -/
#guard_msgs in
#eval [0, 1, 2, 3, 5, 1000].map Nat.nextPowerOfTwo

example (n : Nat) : Nat.sqrt n * Nat.sqrt n ≤ n := Nat.sqrt_le n
example (n : Nat) : n ≤ n.nextPowerOfTwo := Nat.le_nextPowerOfTwo n
example (n : Nat) : n.nextPowerOfTwo.isPowerOfTwo := Nat.isPowerOfTwo_nextPowerOfTwo n

/-! The kernel cannot evaluate them anymore. -/

/--
error: Tactic `decide` failed to reduce
  @decide (Nat.sqrt 16 = 4) (instDecidableEqNat (Nat.sqrt 16) 4)
to `true` or `false`.

After unfolding the instances `instDecidableEqNat` and `Nat.decEq`, reduction got stuck at
  (Nat.sqrt 16).beq 4
-/
#guard_msgs in
example : Nat.sqrt 16 = 4 := by decide
