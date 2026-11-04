import Std
open Std.Do

/-!
Tests that `while c do` and `repeat ... until c` decide `c` with `bif` when `c : Bool` and with
`uif` when `c` is a proposition (also `while h : c do`, which binds `h`), that old-style `Decidable`
conditions still elaborate (through `UDecidable.ofDecidable`), that the legacy `do` elaborator keeps
the `Decidable` `if`, and that `mvcgen`/`vcgen` verify such loops.
-/

/-! ## `Prop` conditions become `uif` -/

def sumBelow (n : Nat) : Nat := Id.run do
  let mut i := 0
  let mut s := 0
  while i < n do
    s := s + i
    i := i + 1
  return s

/--
info: def sumBelow : Nat → Nat :=
fun n =>
  (have i := 0;
    have s := 0;
    do
    let __s ←
      forIn { } (i, s) fun x __s =>
          have i := __s.fst;
          have s := __s.snd;
          uif i < n then
            have s := s + i;
            have i := i + 1;
            pure (ForInStep.yield (i, s))
          else pure (ForInStep.done (i, s))
    have s : Nat := __s.snd
    pure s).run
-/
#guard_msgs in
#print sumBelow

#guard sumBelow 10 == 45

/-! ## `Bool` conditions become `bif` -/

def countTo (n : Nat) : Nat := Id.run do
  let mut i := 0
  while i <ᵇ n do
    i := i + 1
  return i

/--
info: def countTo : Nat → Nat :=
fun n =>
  (have i := 0;
    do
    let __s ←
      forIn { } i fun x __s =>
          have i := __s;
          bif i <ᵇ n then
            have i := i + 1;
            pure (ForInStep.yield i)
          else pure (ForInStep.done i)
    have i : Nat := __s
    pure i).run
-/
#guard_msgs in
#print countTo

#guard countTo 7 == 7

def drain (xs : List Nat) : Nat := Id.run do
  let mut xs := xs
  let mut s := 0
  while !xs.isEmpty do
    s := s + xs.headD 0
    xs := xs.tail
  return s

#guard drain [1, 2, 3] == 6

/-! ## Dependent conditions -/

def sumArr (xs : Array Nat) : Nat := Id.run do
  let mut i := 0
  let mut s := 0
  while h : i < xs.size do
    s := s + xs[i]
    i := i + 1
  return s

/--
info: def sumArr : Array Nat → Nat :=
fun xs =>
  (have i := 0;
    have s := 0;
    do
    let __s ←
      forIn { } (i, s) fun x __s =>
          have i := __s.fst;
          have s := __s.snd;
          uif h : i < xs.size then
            have s := s + xs[i];
            have i := i + 1;
            pure (ForInStep.yield (i, s))
          else pure (ForInStep.done (i, s))
    have s : Nat := __s.snd
    pure s).run
-/
#guard_msgs in
#print sumArr

#guard sumArr #[1, 2, 3] == 6

def sumArrB (xs : Array Nat) : Nat := Id.run do
  let mut i := 0
  let mut s := 0
  while h : i <ᵇ xs.size do
    s := s + xs[i]'(lt_of_decideLT_eq_true h)
    i := i + 1
  return s

/--
info: def sumArrB : Array Nat → Nat :=
fun xs =>
  (have i := 0;
    have s := 0;
    do
    let __s ←
      forIn { } (i, s) fun x __s =>
          let i := __s.fst;
          have s := __s.snd;
          bif h : i <ᵇ xs.size then
            have s := s + xs[i];
            have i := i + 1;
            pure (ForInStep.yield (i, s))
          else pure (ForInStep.done (i, s))
    have s : Nat := __s.snd
    pure s).run
-/
#guard_msgs in
#print sumArrB

#guard sumArrB #[1, 2, 3] == 6

/-! ## `repeat ... until` -/

def untilP (n : Nat) : Nat := Id.run do
  let mut i := 0
  repeat
    i := i + 1
  until i ≥ n
  return i

/--
info: def untilP : Nat → Nat :=
fun n =>
  (have i := 0;
    do
    let __s ←
      forIn { } i fun x __s =>
          have i := __s;
          have i := i + 1;
          uif i ≥ n then pure (ForInStep.done i) else pure (ForInStep.yield i)
    have i : Nat := __s
    pure i).run
-/
#guard_msgs in
#print untilP

#guard untilP 5 == 5

def untilB (n : Nat) : Nat := Id.run do
  let mut i := 0
  repeat
    i := i + 1
  until i ≥ᵇ n
  return i

/--
info: def untilB : Nat → Nat :=
fun n =>
  (have i := 0;
    do
    let __s ←
      forIn { } i fun x __s =>
          have i := __s;
          have i := i + 1;
          bif n ≤ᵇ i then pure (ForInStep.done i) else pure (ForInStep.yield i)
    have i : Nat := __s
    pure i).run
-/
#guard_msgs in
#print untilB

#guard untilB 5 == 5

/-! ## Nested actions in the condition are lifted before the type is inspected -/

def nestedB (n : Nat) : StateM Nat Nat := do
  while (← get) <ᵇ n do
    modify (· + 2)
  get

/--
info: def nestedB : Nat → StateM Nat Nat :=
fun n => do
  forIn { } PUnit.unit fun x __s => do
      let __do_lift ← get
      bif __do_lift <ᵇ n then do
          modify fun x => x + 2
          pure (ForInStep.yield PUnit.unit)
        else pure (ForInStep.done PUnit.unit)
  get
-/
#guard_msgs in
#print nestedB

#guard Id.run ((nestedB 7).run' 0) == 8

def nestedP (n : Nat) : StateM Nat Nat := do
  while (← get) < n do
    modify (· + 2)
  get

#guard Id.run ((nestedP 7).run' 0) == 8

/-! ## `while let` still expands to a `match` -/

def whileLet (xs : List Nat) : Nat := Id.run do
  let mut xs := xs
  let mut s := 0
  while let x :: rest := xs do
    s := s + x
    xs := rest
  return s

#guard whileLet [1, 2, 3] == 6

/-! ## Old-style `Decidable` conditions still elaborate -/

def Small (n : Nat) : Prop := n < 5
instance : DecidablePred Small := fun n => inferInstanceAs (Decidable (n < 5))

def countSmall : Nat := Id.run do
  let mut i := 0
  while Small i do
    i := i + 1
  return i

#guard countSmall == 5

def countSmallUntil : Nat := Id.run do
  let mut i := 0
  repeat
    i := i + 1
  until ¬Small i
  return i

#guard countSmallUntil == 5

/-! ## The legacy `do` elaborator keeps the `Decidable` `if` -/

set_option backward.do.legacy true in
def legacyCount (n : Nat) : Nat := Id.run do
  let mut i := 0
  while i < n do
    i := i + 1
  return i

/--
info: def legacyCount : Nat → Nat :=
fun n =>
  (have i := 0;
    do
    let r ←
      forIn { } i fun x r =>
          have i := r;
          if i < n then
            have i := i + 1;
            do
            pure PUnit.unit
            pure (ForInStep.yield i)
          else pure (ForInStep.done i)
    have i : Nat := r
    pure i).run
-/
#guard_msgs in
#print legacyCount

#guard legacyCount 4 == 4

set_option backward.do.legacy true in
def legacyUntil (n : Nat) : Nat := Id.run do
  let mut i := 0
  repeat
    i := i + 1
  until i ≥ n
  return i

#guard legacyUntil 4 == 4

/-! ## `mvcgen` on a `while` loop with a `Bool` condition -/

set_option linter.deprecated.syntax false

def sqrtB (n : Nat) : Id Nat := do
  if n = 0 then
    return 0
  let mut i := 0
  while i * i ≤ᵇ n do
    i := i + 1
  return i - 1

theorem sqrtB_correct :
    ⦃⌜True⌝⦄ sqrtB n ⦃⇓ res => ⌜res * res ≤ n ∧ n < (res + 1) * (res+1)⌝⦄ := by
  mvcgen [sqrtB]
  invariants
  | inv1 => fun i => ULift.up ((n + 2) - i)
  | inv2 => ⇓ r => match r with
    | .inl i => spred(⌜∀ j, j < i → j * j ≤ n⌝)
    | .inr i => spred(⌜∀ j, j < i → j * j ≤ n⌝ ∧ ⌜n < i * i⌝)
  with (try grind)
  | vc2 r _ hsqr _ _ =>
    have : r ≤ n := Nat.le_trans (Nat.le_mul_self r) hsqr
    grind [→ Nat.mul_self_le_mul_self]
  | vc5 res h =>
    have : res - 1 < res := by grind
    grind

#guard Id.run (sqrtB 15) == 3

/-! ## `vcgen` proves contracts of `while` loops with `Prop`, `Bool` and dependent conditions -/

set_option experimental.vcgen true
set_option experimental.intrinsic true

def countDownP (n : Nat) : Id Nat
    ensures r => r = 0 := do
  let mut i := n
  while i > 0
      invariant exit => if exit then i = 0 else True
      decreasing i
    do
    i := i - 1
  return i

def countDownB (n : Nat) : Id Nat
    ensures r => r = 0 := do
  let mut i := n
  while 0 <ᵇ i
      invariant exit => if exit then i = 0 else True
      decreasing i
    do
    i := i - 1
  return i

def countUpD (xs : Array Nat) : Id Nat
    ensures r => r = xs.size := do
  let mut i := 0
  while _h : i < xs.size
      invariant exit => i ≤ xs.size ∧ (if exit then i = xs.size else True)
      decreasing xs.size - i
    do
    i := i + 1
  return i

/-- info: countDownP.spec : ∀ (n : Nat), ⦃ Lean.Order.top ⦄ countDownP n ⦃ fun r => r = 0 ⦄ -/
#guard_msgs in
#check @countDownP.spec

/-- info: countDownB.spec : ∀ (n : Nat), ⦃ Lean.Order.top ⦄ countDownB n ⦃ fun r => r = 0 ⦄ -/
#guard_msgs in
#check @countDownB.spec

/--
info: countUpD.spec : ∀ (xs : Array Nat), ⦃ Lean.Order.top ⦄ countUpD xs ⦃ fun r => r = xs.size ⦄
-/
#guard_msgs in
#check @countUpD.spec
