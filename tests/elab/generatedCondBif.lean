import Lean
/-!
Macros that branch on a `Bool` generate `bif` (`cond`) instead of a `Decidable` `if`: syntax
quotation patterns, `trace[…]` and `assert!` with a `Bool` condition. `assert!` with a
proposition keeps the `Decidable` `if`.
-/
open Lean

syntax "optstx" (ident)? : term
syntax "slicestx" ident* ";" : term

def optPat : Syntax → Bool
  | `(optstx $[$_]?) => true
  | _ => false

/--
info: def optPat : Syntax → Bool :=
fun x =>
  have __discr := x;
  bif __discr.isOfKind `termOptstx_ then
    have __discr_1 := __discr.getArg 0;
    have __discr_2 := __discr.getArg 1;
    have yes := fun x => true;
    bif __discr_2.isNone then yes ()
    else
      have __discr_3 := __discr_2;
      bif __discr_3.matchesNull 1 then
        have __discr := __discr_3.getArg 0;
        yes ()
      else
        have __discr_4 := __discr_2;
        have __discr := __discr.getArg 1;
        false
  else
    have __discr := x;
    false
-/
#guard_msgs in #print optPat

def slicePat : Syntax → Nat
  | `(slicestx $_ $xs* $_ ;) => xs.size
  | _ => 0

/--
info: def slicePat : Syntax → Nat :=
fun x =>
  have __discr := x;
  bif __discr.isOfKind `«termSlicestx_;» then
    have __discr_1 := __discr.getArg 0;
    have __discr_2 := __discr.getArg 1;
    bif 2 ≤ᵇ __discr_2.getNumArgs then
      have __discr_3 := __discr_2.getArg 0;
      have __discr_4 := mkNullNode (__discr_2.getArgs.extract 1 (__discr_2.getNumArgs.sub 1));
      have __discr_5 := __discr_2.getArg (__discr_2.getNumArgs.sub 1);
      have __discr := __discr.getArg 2;
      have xs := TSyntaxArray.mk __discr_4.getArgs;
      Array.size xs
    else
      have __discr_3 := __discr.getArg 1;
      have __discr := __discr.getArg 2;
      0
  else
    have __discr := x;
    0
-/
#guard_msgs in #print slicePat

def traced (b : Bool) : CoreM Unit := do
  trace[Meta.debug] "b = {b}"

/--
info: def traced : Bool → CoreM Unit :=
fun b =>
  have cls := `Meta.debug;
  do
  let __do_lift ← isTracingEnabledFor cls
  bif __do_lift then addTrace cls (toMessageData "b = " ++ toMessageData b) else pure ()
-/
#guard_msgs in #print traced

set_option backward.do.legacy true in
def tracedLegacy (b : Bool) : CoreM Unit := do
  trace[Meta.debug] "b = {b}"
  pure ()

/-- Nested actions in the message only run when the trace class is enabled. -/
def tracedNested (r : IO.Ref Nat) : CoreM Unit := do
  trace[Meta.debug] "{← r.modifyGet fun n => (n, n + 1)}"

/--
info: (0, 1)
---
trace: [Meta.debug] 0
-/
#guard_msgs in
#eval show CoreM (Nat × Nat) from do
  let r ← IO.mkRef 0
  tracedNested r
  let n₁ ← r.get
  withOptions (·.setBool `trace.Meta.debug true) (tracedNested r)
  return (n₁, ← r.get)

def assertBool (b : Bool) : Nat :=
  assert! b
  1

def assertProp (n : Nat) : Nat :=
  assert! n > 0
  1

/--
info: def assertBool : Bool → Nat :=
fun b =>
  bif b then 1 else panicWithPosWithDecl "elab.generatedCondBif" "assertBool" 104 2 ("assertion violation: " ++ "b\n  ")
-/
#guard_msgs in #print assertBool

/--
info: def assertProp : Nat → Nat :=
fun n =>
  if n > 0 then 1
  else panicWithPosWithDecl "elab.generatedCondBif" "assertProp" 108 2 ("assertion violation: " ++ "n > 0\n  ")
-/
#guard_msgs in #print assertProp
