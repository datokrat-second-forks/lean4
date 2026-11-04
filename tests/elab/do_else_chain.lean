import Lean

/-!
Tests that the `else` chains of `if`, `uif` and `bif` in `do` blocks accept each other's links:
`if let … else bif …`, `bif … else if let …`, `uif … else if h : … else bif …` and so on, as
`else if` does for `if`. Also checks the pretty printer for such chains.
-/

def ifLetBif (o : Option Nat) (b : Bool) : Nat := Id.run do
  if let some x := o then
    return x
  else bif b then
    return 100
  else
    return 0

#guard ifLetBif (some 3) true == 3
#guard ifLetBif none true == 100
#guard ifLetBif none false == 0

/--
info: def ifLetBif : Option Nat → Bool → Nat :=
fun o b =>
  (match o with
    | some x => pure x
    | x => bif b then pure 100 else pure 0).run
-/
#guard_msgs in
#print ifLetBif

def bifIfLet (o : Option Nat) (b : Bool) : Nat := Id.run do
  bif b then
    return 100
  else if let some x := o then
    return x
  else
    return 0

#guard bifIfLet (some 3) true == 100
#guard bifIfLet (some 3) false == 3
#guard bifIfLet none false == 0

/--
info: def bifIfLet : Option Nat → Bool → Nat :=
fun o b =>
  (bif b then pure 100
    else
      match o with
      | some x => pure x
      | x => pure 0).run
-/
#guard_msgs in
#print bifIfLet

def mixed (o : Option Nat) (n : Nat) : Nat := Id.run do
  uif n < 3 then
    return 1
  else if let some x := o then
    return x
  else bif n == 5 then
    return 5
  else uif _h : n < 10 then
    return n
  else if n = 11 then
    return 11
  else bif _h : n == 12 then
    return 12
  else
    return 0

#guard [mixed none 1, mixed (some 7) 4, mixed none 5, mixed none 8, mixed none 11, mixed none 12,
  mixed none 13] == [1, 7, 5, 8, 11, 12, 0]

/-- `uif` after `if let ← …` and no final `else`. -/
def noElse (o : Option Nat) (n : Nat) : StateM (List String) Unit := do
  if let some x := o then
    modify (· ++ [s!"some {x}"])
  else uif n < 3 then
    modify (· ++ ["small"])
  else if let some y ← pure (some n) then
    modify (· ++ [s!"y {y}"])

#guard Id.run ((noElse (some 1) 0).run' []) == ()
#guard Id.run ((noElse (some 1) 0).run []).2 == ["some 1"]
#guard Id.run ((noElse none 1).run []).2 == ["small"]
#guard Id.run ((noElse none 5).run []).2 == ["y 5"]

/-- Mutable variables are reassigned across the chain. -/
def reassign (n : Nat) : Nat := Id.run do
  let mut r := 0
  if n = 0 then
    r := 1
  else bif n == 1 then
    r := 2
  else uif n = 2 then
    r := 3
  return r

#guard [reassign 0, reassign 1, reassign 2, reassign 3] == [1, 2, 3, 0]

/-- `break`/`continue` inside a mixed chain. -/
def loopChain (xs : List Nat) : Nat := Id.run do
  let mut s := 0
  for x in xs do
    bif x == 0 then
      continue
    else if x > 10 then
      break
    else uif x = 5 then
      s := s + 50
    else
      s := s + x
  return s

#guard loopChain [1, 0, 5, 2, 11, 3] == 53

open Lean PrettyPrinter in
/--
info: if let some x := o then
  return x
else bif b then
  return 1
else uif c then
  return 2
else if h : d then
  return 3
else
  return 0
-/
#guard_msgs (whitespace := lax) in
#eval show MetaM Unit from do
  let stx ← ofExcept <| Parser.runParserCategory (← getEnv) `doElem
    "if let some x := o then\n  return x\nelse bif b then\n  return 1\nelse uif c then\n  return 2\n\
     else if h : d then\n  return 3\nelse\n  return 0"
  IO.println (← ppCategory `doElem stx).pretty
