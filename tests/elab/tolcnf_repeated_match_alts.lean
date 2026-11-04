import Lean

/-!
Tests that nested `match`es (or `cond`s/`bif`s) whose alternatives are syntactically identical across
the nesting levels do not lambda-lift these alternatives. `toLCNF` used to share one local function
between them through its cache; used from two local functions, it was lambda-lifted, and the loop
allocated its `ForInStep`/`EST.Out` results on every iteration.
-/

@[noinline] def addDec (x : Nat) (k : List Nat) : IO (List Nat) := return x :: k

def viaCond (args : Array Nat) (k : List Nat) : IO (List Nat) := do
  forIn (0...args.size) k fun i k =>
    cond (args[i]! == 2) (pure (ForInStep.yield k))
      (cond (args[i]! == 3) (do let x ← addDec args[i]! k; pure (ForInStep.yield x))
        (pure (ForInStep.yield k)))

def viaMatch (args : Array Nat) (k : List Nat) : IO (List Nat) := do
  forIn (0...args.size) k fun i k =>
    match args[i]! == 2 with
    | true => pure (ForInStep.yield k)
    | false =>
      match args[i]! == 3 with
      | true => do let x ← addDec args[i]! k; pure (ForInStep.yield x)
      | false => pure (ForInStep.yield k)

def viaDoBif (args : Array Nat) (k : List Nat) : IO (List Nat) := do
  let mut k := k
  for i in 0...args.size do
    bif args[i]! == 2 then
      pure ()
    else
      bif args[i]! == 3 then k ← addDec args[i]! k
  return k

open Lean in
/-- The IR declarations of the current module whose name contains a lambda-lifted `_lam_` part. -/
def liftedLambdas : CoreM (List Name) := do
  let decls := IR.getDecls (← getEnv)
  -- Sanity check: the IR of the definitions above is visible.
  unless decls.any (·.name.toString.startsWith "WellFounded.opaqueFix₃._at_.viaCond") do
    throwError "IR of `viaCond` not found"
  return decls.map (·.name) |>.filter (·.components.any (·.toString.startsWith "_lam_"))

/-- info: [] -/
#guard_msgs in
#eval liftedLambdas

/-- info: ([3, 3], [3, 3], [3, 3]) -/
#guard_msgs in
#eval return (← viaCond #[1, 2, 3, 3] [], ← viaMatch #[1, 2, 3, 3] [], ← viaDoBif #[1, 2, 3, 3] [])
