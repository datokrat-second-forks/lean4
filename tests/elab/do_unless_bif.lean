import Std
open Std.Do

/-!
Tests that `unless c do s` decides `c` with `bif` when `c : Bool` and with `uif` when `c` is a
proposition, like `while` and `repeat ... until`: nested actions in `c` are lifted first, the body
can use `return`/`break`/`continue` and reassign mutable variables, old-style `Decidable` conditions
still elaborate, the legacy `do` elaborator keeps the `Decidable` `if`, and `mvcgen` verifies such
code.
-/

/-! ## `Bool` conditions become `bif` -/

def logOdd (xs : List Nat) : IO Unit := do
  for x in xs do
    unless x % 2 == 0 do
      IO.println x

/--
info: def logOdd : List Nat → IO Unit :=
fun xs => do
  forIn xs PUnit.unit fun x __s =>
      bif x % 2 == 0 then pure (ForInStep.yield PUnit.unit)
      else do
        IO.println x
        pure (ForInStep.yield PUnit.unit)
  pure ()
-/
#guard_msgs in
#print logOdd

/--
info: 1
3
-/
#guard_msgs in
#eval logOdd [1, 2, 3]

/-! ## `Prop` conditions become `uif` -/

def sumBig (xs : List Nat) : Nat := Id.run do
  let mut s := 0
  for x in xs do
    unless x < 3 do
      s := s + x
  return s

/--
info: def sumBig : List Nat → Nat :=
fun xs =>
  (have s := 0;
    do
    let __s ←
      forIn xs s fun x __s =>
          have s := __s;
          uif x < 3 then pure (ForInStep.yield s)
          else
            have s := s + x;
            pure (ForInStep.yield s)
    have s : Nat := __s
    pure s).run
-/
#guard_msgs in
#print sumBig

#guard sumBig [1, 2, 3, 4] == 7

/-! ## Control flow in the body -/

def firstNonZero (xs : List Nat) : Option Nat := Id.run do
  for x in xs do
    unless x == 0 do
      return some x
  return none

#guard firstNonZero [0, 0, 5, 6] == some 5
#guard firstNonZero [0, 0] == none

def countUntilBig (xs : List Nat) : Nat := Id.run do
  let mut n := 0
  for x in xs do
    unless x <ᵇ 10 do
      break
    n := n + 1
  return n

#guard countUntilBig [1, 2, 30, 4] == 2

/-! ## Nested actions in the condition are lifted before the type is inspected -/

def checkAll (xs : List Nat) (p : Nat → IO Bool) : IO Nat := do
  let mut bad := 0
  for x in xs do
    unless (← p x) do
      bad := bad + 1
  return bad

/--
info: def checkAll : List Nat → (Nat → IO Bool) → IO Nat :=
fun xs p =>
  have bad := 0;
  do
  let __s ←
    forIn xs bad fun x __s =>
        have bad := __s;
        do
        let __do_lift ← p x
        bif __do_lift then pure (ForInStep.yield bad)
          else
            have bad := bad + 1;
            pure (ForInStep.yield bad)
  have bad : Nat := __s
  pure bad
-/
#guard_msgs in
#print checkAll

/-- info: 2 -/
#guard_msgs in
#eval checkAll [1, 2, 3, 4] (fun x => pure (x % 2 == 0))

/-! ## `unless` as a term -/

def warnIfEmpty (xs : List Nat) : IO Unit :=
  unless !xs.isEmpty do IO.println "empty"

/-- info: empty -/
#guard_msgs in
#eval warnIfEmpty []

/-! ## Old-style `Decidable` conditions still elaborate -/

def Small (n : Nat) : Prop := n < 5
instance : DecidablePred Small := fun n => inferInstanceAs (Decidable (n < 5))

def countLarge (xs : List Nat) : Nat := Id.run do
  let mut n := 0
  for x in xs do
    unless Small x do
      n := n + 1
  return n

#guard countLarge [1, 7, 3, 9] == 2

/-! ## The legacy `do` elaborator keeps the `Decidable` `if` -/

set_option backward.do.legacy true in
def legacyCountLarge (xs : List Nat) : Nat := Id.run do
  let mut n := 0
  for x in xs do
    unless x < 5 do
      n := n + 1
  return n

/--
info: def legacyCountLarge : List Nat → Nat :=
fun xs =>
  (have n := 0;
    do
    let r ←
      forIn xs n fun x r =>
          have n := r;
          if x < 5 then do
            pure PUnit.unit
            pure (ForInStep.yield n)
          else
            have n := n + 1;
            do
            pure PUnit.unit
            pure (ForInStep.yield n)
    have n : Nat := r
    pure n).run
-/
#guard_msgs in
#print legacyCountLarge

#guard legacyCountLarge [1, 7, 3, 9] == 2

/-! ## `mvcgen` on `unless` with a `Bool` condition -/

def clampB (n m : Nat) : Id Nat := do
  let mut r := n
  unless r ≤ᵇ m do
    r := m
  return r

theorem clampB_le : ⦃⌜True⌝⦄ clampB n m ⦃⇓ r => ⌜r ≤ m⌝⦄ := by
  mvcgen [clampB] <;> simp_all <;> omega
