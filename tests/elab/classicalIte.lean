/-!
Spec test for classical `ite`, `dite` and `decide`.

They take no `Decidable` argument. `Decidable` serves the kernel through the twins
`Decidable.ite`, `Decidable.dite` and `Decidable.decide`. The compiler implements conditionals by
synthesizing `NativeDecidable` instances. Polymorphic definitions state the instances their compiled
code needs with `@[computability_requirement]`.
-/

/-! ## Logic -/

/-- info: @ite : {α : Sort u_1} → Prop → α → α → α -/
#guard_msgs in #check @ite

/-- info: @dite : {α : Sort u_1} → (c : Prop) → (c → α) → (¬c → α) → α -/
#guard_msgs in #check @dite

/-- info: decide : Prop → Bool -/
#guard_msgs in #check @decide

/-- info: @ite_self : ∀ {α : Sort u_1} {c : Prop} (a : α), (if c then a else a) = a -/
#guard_msgs in #check @ite_self

/-- info: @decide_eq_true_eq : ∀ {p : Prop}, (decide p = true) = p -/
#guard_msgs in #check @decide_eq_true_eq

-- No instance of the old condition is left behind to make the motive ill-typed.
example (p q : Prop) (h : p = q) : decide p = decide q := by rw [h]
example (p q : Prop) (h : p ↔ q) (a b : Nat) : (if p then a else b) = (if q then a else b) := by
  rw [h]

noncomputable def allFixed : Bool := decide (∀ n : Nat, n + 0 = n)

example : allFixed = true := by simp [allFixed]

def collatz (n : Nat) : Nat := if n % 2 = 0 then n / 2 else 3 * n + 1

/-- info: 'collatz' depends on axioms: [propext, Classical.choice, Quot.sound] -/
#guard_msgs in #print axioms collatz

/-! ## Kernel -/

theorem two_lt_three : 2 < 3 := by decide

/-- info: 'two_lt_three' does not depend on any axioms -/
#guard_msgs in #print axioms two_lt_three

example : Decidable.decide (2 < 3) = true := rfl
example : Decidable.ite (2 < 3) 1 0 = 1 := rfl

-- Core arithmetic branches on `Bool`, not on `if`.
example : min 2 3 = 2 := rfl
example : max 2 3 = 3 := by decide

-- `if` is opaque to the kernel.
example : collatz 6 = 3 := by
  fail_if_success decide
  simp [collatz]

inductive Color where
  | red | green | blue
  deriving DecidableEq

example : Color.red ≠ Color.green := by decide

/-! ## Compiler -/

/-- info: 3 -/
#guard_msgs in #eval collatz 6

example : collatz 6 = 3 := by native_decide

def get (xs : Array Nat) (i : Nat) : Nat := if h : i < xs.size then xs[i] else 0

/-- info: 20 -/
#guard_msgs in #eval get #[10, 20] 1

def lazyIf (n : Nat) : Nat := if n = 0 then 0 else dbg_trace "else"; 1

/-- info: 0 -/
#guard_msgs in #eval lazyIf 0

def evensBelow (n : Nat) : IO Unit := do
  for i in [0:n] do
    if i % 2 = 0 then IO.println i

/--
info: 0
2
4
-/
#guard_msgs in #eval evensBelow 5

-- Through the low-priority bridge from `Decidable`.
/-- info: false -/
#guard_msgs in #eval decide (Color.red = Color.green)

/--
error: cannot compile `allFixed₀`: `decide` needs `NativeDecidable (∀ (n : Nat), n + 0 = n)`, which could not be synthesized
-/
#guard_msgs in
def allFixed₀ : Bool := decide (∀ n : Nat, n + 0 = n)

-- A proposition that only the compiler can decide.
def IsEven (n : Nat) : Prop := n % 2 = 0

instance (n : Nat) : NativeDecidable (IsEven n) :=
  .intro (n % 2 == 0) (Bool.Reflects.of_imp (by simp [IsEven]) (by simp [IsEven]))

/-- info: [2, 4] -/
#guard_msgs in #eval [1, 2, 3, 4].filter fun n => decide (IsEven n)

example : IsEven 4 := by
  fail_if_success decide
  native_decide

-- Each reader takes its own instance.
def IsOdd (n : Nat) : Prop := n % 2 = 1

instance (n : Nat) : Decidable (IsOdd n) := inferInstanceAs (Decidable (n % 2 = 1))

instance (n : Nat) : NativeDecidable (IsOdd n) :=
  dbg_trace "native"
  .intro (n % 2 == 1) (Bool.Reflects.of_imp (by simp [IsOdd]) (by simp [IsOdd]))

example : IsOdd 3 := by decide

/--
info: native
---
info: true
-/
#guard_msgs in #eval decide (IsOdd 3)

-- Lets of the body are local instances.
def IsPow2 (n : Nat) : Prop := n ≠ 0 ∧ n &&& (n - 1) = 0

def isPow2 (n : Nat) : Bool :=
  have : NativeDecidable (IsPow2 n) := inferInstanceAs (NativeDecidable (n ≠ 0 ∧ n &&& (n - 1) = 0))
  decide (IsPow2 n)

/-- info: true -/
#guard_msgs in #eval isPow2 8

/-! ## `@[csimp]` with instance binders -/

noncomputable def countIf (p : α → Prop) (xs : List α) : Nat :=
  (xs.filter fun x => decide (p x)).length

def countIfImpl (p : α → Prop) [NativeDecidablePred p] (xs : List α) : Nat :=
  xs.countP fun x => NativeDecidable.decide (p x)

@[csimp] theorem countIf_eq_countIfImpl {p : α → Prop} [NativeDecidablePred p] :
    @countIf α p = @countIfImpl α p _ := by
  funext xs
  simp only [countIf, countIfImpl, List.countP_eq_length_filter, decide_eq_nativeDecide]

/-- info: 2 -/
#guard_msgs in #eval countIf (· < 3) [1, 5, 2]

/-! ## Computability requirements -/

/--
error: cannot compile `maxOfLe₀`: `ite` needs `NativeDecidable (x ≤ y)`, which could not be synthesized

Hint: Add a computability requirement:
  • [apply] @[computability_requirement (NativeDecidableLE α)]
  • [apply] @[computability_requirement (∀ (x y : α), NativeDecidable (x ≤ y))]
-/
#guard_msgs in
@[instance_reducible]
def maxOfLe₀ [LE α] : Max α where
  max x y := if x ≤ y then y else x

@[instance_reducible, computability_requirement (NativeDecidableLE α)]
def maxOfLe' [LE α] : Max α where
  max x y := if x ≤ y then y else x

/-- info: @maxOfLe' : {α : Type u_1} → [LE α] → Max α -/
#guard_msgs in #check @maxOfLe'

/-- info: @maxOfLe'._native : {α : Type u_1} → [LE α] → [NativeDecidableLE α] → Max α -/
#guard_msgs in #check @maxOfLe'._native

/-- info: 5 -/
#guard_msgs in #eval @Max.max Nat maxOfLe' 3 5

-- A callee's requirement is an obligation at the call site.
/--
error: cannot compile `max3₀`: `maxOfLe'` needs `NativeDecidableLE α`, which could not be synthesized

Hint: Add a computability requirement:
  [apply] @[computability_requirement (NativeDecidableLE α)]
-/
#guard_msgs in
def max3₀ [LE α] (x y z : α) : α :=
  let _ : Max α := maxOfLe'
  max x (max y z)

@[computability_requirement (NativeDecidableLE α)]
def max3 [LE α] (x y z : α) : α :=
  let _ : Max α := maxOfLe'
  max x (max y z)

/-- info: 7 -/
#guard_msgs in #eval max3 3 7 5

-- Variables bound in the body are quantified.
/--
error: cannot compile `count₀`: `decide` needs `NativeDecidable (x = a)`, which could not be synthesized

Hint: Add a computability requirement:
  • [apply] @[computability_requirement (NativeDecidableEq α)]
  • [apply] @[computability_requirement (∀ (x : α), NativeDecidable (x = a))]
-/
#guard_msgs in
def count₀ (a : α) (xs : List α) : Nat := (xs.filter fun x => decide (x = a)).length

@[computability_requirement (∀ x, NativeDecidable (x = a))]
def count (a : α) (xs : List α) : Nat := (xs.filter fun x => decide (x = a)).length

/-- info: 2 -/
#guard_msgs in #eval count 2 [1, 2, 3, 2]

/-- warning: unused computability requirement `NativeDecidableEq α` -/
#guard_msgs in
@[computability_requirement (NativeDecidableEq α)]
def first (x _ : α) : α := x

/-! ## Library -/

/-- info: @instBEqOfDecidableEq : {α : Type u_1} → BEq α -/
#guard_msgs in #check @instBEqOfDecidableEq

example : BEq Color := by
  fail_if_success exact inferInstance
  exact instBEqOfDecidableEq

instance : BEq Color := instBEqOfDecidableEq

/-- info: true -/
#guard_msgs in #eval Color.red == Color.red
