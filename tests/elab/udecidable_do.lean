/-!
`uif` and `bif` as `do` elements, and the `Bool` comparison notation `<ᵇ`, `≤ᵇ`, `=ᵇ`, `≠ᵇ`.

In `do` blocks, `uif` and `bif` behave like `if`: their branches are `do` sequences that can
`return`, `break`, `continue` and reassign mutable variables. `uif` produces `UDecidable.ite`
or `UDecidable.dite` and `bif` produces `cond`.
-/

/-! ## `uif` -/

/-- Early `return` from a branch inside a loop. -/
def firstAbove (n : Nat) (xs : List Nat) : Id (Option Nat) := do
  for x in xs do
    uif x > n then return some x
  return none

/-- info: (some 5, none) -/
#guard_msgs in
#eval (firstAbove 2 [1, 5, 7], firstAbove 9 [1, 5, 7])

/-- Mutable variables, `else uif` chains and `continue`/`break`. -/
def classify (xs : List Nat) : Id (Nat × Nat × Nat) := do
  let mut small := 0
  let mut mid := 0
  let mut large := 0
  for x in xs do
    uif x = 0 then continue
    else uif x < 10 then small := small + 1
    else uif x < 100 then mid := mid + 1
    else
      large := large + 1
      uif large ≥ 2 then break
  return (small, mid, large)

/-- info: (2, 1, 2) -/
#guard_msgs in
#eval classify [0, 1, 50, 2, 500, 600, 3]

/-- The dependent form binds the condition. -/
def safeGet (xs : Array Nat) (i : Nat) : Id Nat := do
  uif h : i < xs.size then
    return xs[i]'h
  else
    return 0

/-- info: (20, 0) -/
#guard_msgs in
#eval (safeGet #[10, 20] 1, safeGet #[10, 20] 5)

/-- A hole as binder in the dependent form. -/
def dependentHole (b : Bool) : Id Nat := do
  uif _ : b = true then pure 1 else pure 2

/-- info: 1 -/
#guard_msgs in
#eval dependentHole true

/-- `uif` elaborates to `UDecidable.ite`, not to `ite`. -/
example (c : Prop) [UDecidable c] (a b : Nat) :
    (do uif c then pure a else pure b : Id Nat) = UDecidable.ite c (pure a) (pure b) := by
  with_reducible rfl

/-- `uif` needs only a `UDecidable` instance. -/
example (c : Prop) [UDecidable c] : Id Nat := do
  let mut x := 0
  uif c then x := 1
  return x

/-! ## `bif` -/

/-- `bif` takes a `Bool`, including a lifted monadic action. -/
def countTrue (p : Nat → IO Bool) (xs : List Nat) : IO Nat := do
  let mut n := 0
  for x in xs do
    bif (← p x) then n := n + 1
  return n

/-- info: 2 -/
#guard_msgs in
#eval countTrue (fun x => pure (x % 2 == 0)) [1, 2, 3, 4]

/-- `else bif` chains. -/
def sign (i : Int) : Id String := do
  bif i == 0 then return "zero"
  else bif i <ᵇ 0 then return "negative"
  else return "positive"

/-- info: ["negative", "zero", "positive"] -/
#guard_msgs in
#eval [-3, 0, 4].map sign

/-- `bif` elaborates to `cond`, which reduces in the kernel. -/
example (a b : Nat) : (do bif true then pure a else pure b : Id Nat) = pure a := rfl

example : sign 0 = "zero" := rfl

/-- `split` cannot split `cond`, but `simp` turns it into `uif`. -/
example (b : Bool) (a c : Nat) :
    (do bif b then pure a else pure c : Id Nat) = (uif b then pure a else pure c) := by
  simp

/-! ## Term-level `uif` and `bif` in `do` blocks -/

/-- In term positions, `uif` and `bif` are still the term notations. -/
def termPositions (b : Bool) (c : Prop) [UDecidable c] : Id Nat := do
  let x := uif c then 1 else 2
  let y := bif b then 10 else 20
  pure (x + y)

/-- info: 11 -/
#guard_msgs in
#eval termPositions true True

/-! ## `Bool` comparisons -/

example : (3 <ᵇ 5) = true := rfl
example : (5 <ᵇ 5) = false := rfl
example : (5 ≤ᵇ 5) = true := rfl
example : ("a" =ᵇ "a") = true := rfl
example : ('a' ≠ᵇ 'b') = true := rfl
example : (bif 3 <ᵇ 5 then "yes" else "no") = "yes" := by decide

/-- info: [true, false, true, true] -/
#guard_msgs in
#eval [1 <ᵇ 2, 2 ≤ᵇ 1, [1] =ᵇ [1], 1 ≠ᵇ 2]

-- The notation is printed back.
/-- info: fun a b => a <ᵇ b && b ≤ᵇ a || a =ᵇ b && a ≠ᵇ b : Nat → Nat → Bool -/
#guard_msgs in
#check fun a b : Nat => (a <ᵇ b && b ≤ᵇ a) || (a =ᵇ b && a ≠ᵇ b)

/-- `simp` rewrites the comparisons to `UDecidable.decide`, and `bif` on them to `uif`. -/
example (a b : Nat) (x y : String) :
    (bif a <ᵇ b then x else y) = (uif a < b then x else y) := by
  simp

example (a b : Nat) (h : a ≤ b) : (a ≤ᵇ b) = true := by
  simp [h]

example (a b : Nat) (h : a ≠ b) : (a =ᵇ b) = false := by
  simp [h]

example (a b : Nat) : (a ≠ᵇ b) = !(a =ᵇ b) := by
  simp
