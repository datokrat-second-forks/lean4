import Lean

/-!
`@[implemented_by (early := true) f]` replaces a declaration by its implementation already while
translating to LCNF; plain `@[implemented_by f]` (and `early := false`) keeps the replacement in the
base-phase `simp` pass. An early implementation must not be private.
-/

def implLate (n : Nat) : Nat := n + 1
@[implemented_by implLate] def late (n : Nat) : Nat := n

def implEarly (n : Nat) : Nat := n + 2
@[implemented_by (early := true) implEarly] def early (n : Nat) : Nat := n

def implNotEarly (n : Nat) : Nat := n + 3
@[implemented_by (early := false) implNotEarly] def notEarly (n : Nat) : Nat := n

open Lean Compiler in
#eval show CoreM Unit from do
  let env ← getEnv
  assert! !isEarlyImplementedBy env ``late
  assert! isEarlyImplementedBy env ``early
  assert! !isEarlyImplementedBy env ``notEarly
  assert! getImplementedBy? env ``early == some ``implEarly

-- The initial LCNF already calls `implEarly`, but still `late` and `notEarly`.
set_option trace.Compiler.init true in
/--
trace: [Compiler.init] size: 8
    def useAll n : Nat :=
      let _x.1 := instAddNat;
      let _x.2 := @instHAdd _ _x.1;
      let _x.3 := _x.2 # 0;
      let _x.4 := late n;
      let _x.5 := implEarly n;
      let _x.6 := _x.3 _x.4 _x.5;
      let _x.7 := notEarly n;
      let _x.8 := _x.3 _x.6 _x.7;
      return _x.8
-/
#guard_msgs in
def useAll (n : Nat) : Nat := late n + early n + notEarly n

/-- info: 9 -/
#guard_msgs in
#eval useAll 1

-- Partial applications are replaced as well.
/-- info: [3, 4] -/
#guard_msgs in
#eval [1, 2].map early

private def implPrivate (n : Nat) : Nat := n + 4

/--
error: Invalid `implemented_by (early := true)` argument `implPrivate`: The implementation must not be private, since it becomes part of the compiled code of importing modules
-/
#guard_msgs in
@[implemented_by (early := true) implPrivate] def earlyPrivate (n : Nat) : Nat := n

-- A private implementation is fine without `early`.
@[implemented_by implPrivate] def latePrivate (n : Nat) : Nat := n

/-- info: 5 -/
#guard_msgs in
#eval latePrivate 1

/--
error: Invalid `implemented_by` argument `implLate`: `implLate` has type
  Nat → Nat
but `wrongType` has type
  Nat → Bool
-/
#guard_msgs in
@[implemented_by (early := true) implLate] def wrongType (_ : Nat) : Bool := true
