/-!
`split`, functional induction and `fun_cases` split `bif` (`cond`) and dependent `bif h :`
(`Bool.dcond`) on the value of the condition. The case hypotheses are the propositional view given
by `bool_to_prop` (`Lean.Meta.boolCondToProp?`), such as `h : i < n` and `h : ¬i < n` for
`i <ᵇ n`. Conditions without a view, such as an opaque `Bool`, keep `h : b = true` and
`h : b = false`.
-/

/-! ## `split` -/

/--
trace: case isTrue
i n : Nat
f : Nat → Nat
h : i < n
⊢ f i = 1

case isFalse
i n : Nat
f : Nat → Nat
h : ¬i < n
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) (f : Nat → Nat) : (bif i <ᵇ n then f i else 0) = 1 := by
  split <;> rename_i h
  trace_state
  all_goals sorry

/--
trace: case isTrue
i n : Nat
f : (i : Nat) → i < n → Nat
h : i < n
⊢ f i h = 1

-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) (f : (i : Nat) → i < n → Nat) :
    (bif h : i <ᵇ n then f i (Nat.blt_eq.mp h) else 0) = 1 := by
  split <;> rename_i h
  · show f i h = 1
    trace_state
    sorry
  · sorry

/-- The hypotheses are usable by `omega` and friends. -/
example (i n : Nat) : (bif _h : i <ᵇ n && 0 <ᵇ i then n - i else 0) < n + 1 := by
  split <;> omega

/-! Compound conditions and the `false` direction. -/

/--
trace: case isTrue
a b c d : Nat
h : a ≤ b ∧ c = d
⊢ 1 = 1

case isFalse
a b c d : Nat
h : ¬(a ≤ b ∧ c = d)
⊢ 2 = 1
-/
#guard_msgs (trace, drop warning) in
example (a b c d : Nat) : (bif a ≤ᵇ b && c == d then 1 else 2) = 1 := by
  split <;> rename_i h
  trace_state
  all_goals sorry

/-! The old `split` semantics (`backward.split false`) gives the same hypotheses. -/

/--
trace: case isTrue
i n : Nat
f : Nat → Nat
h : i < n
⊢ f i = 1

case isFalse
i n : Nat
f : Nat → Nat
h : ¬i < n
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
set_option backward.split false in
example (i n : Nat) (f : Nat → Nat) : (bif h : i <ᵇ n then f i else 0) = 1 := by
  split <;> rename_i h
  trace_state
  all_goals sorry

/-! An opaque `Bool` keeps the `Bool` equation. -/

/--
trace: case isTrue
b : Bool
f : Nat → Nat
h : b = true
⊢ f 1 = 1

case isFalse
b : Bool
f : Nat → Nat
h : b = false
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (b : Bool) (f : Nat → Nat) : (bif b then f 1 else 0) = 1 := by
  split <;> rename_i h
  trace_state
  all_goals sorry

/-! `split at h` -/

/--
trace: case isTrue
i n : Nat
f : Nat → Nat
h✝ : i < n
h : f i = 1
⊢ False

case isFalse
i n : Nat
f : Nat → Nat
h✝ : ¬i < n
h : 0 = 1
⊢ False
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) (f : Nat → Nat) (h : (bif i <ᵇ n then f i else 0) = 1) : False := by
  split at h
  trace_state
  all_goals sorry

/-! `split` picks the outer `bif` before a `match` in its branch, then the `match`. -/

/--
trace: case isTrue
i n : Nat
o : Option Nat
h✝ : i < n
⊢ (match o with
    | some x => x
    | none => 0) =
    1

case isFalse
i n : Nat
o : Option Nat
h✝ : ¬i < n
⊢ 0 = 1
---
trace: case h_1
i n : Nat
h✝ : i < n
o✝ : Option Nat
x✝ : Nat
⊢ x✝ = 1

case h_2
i n : Nat
h✝ : i < n
o✝ : Option Nat
⊢ 0 = 1

case isFalse
i n : Nat
o : Option Nat
h✝ : ¬i < n
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) (o : Option Nat) :
    (bif i <ᵇ n then (match o with | some x => x | none => 0) else 0) = 1 := by
  split
  trace_state
  split
  trace_state
  all_goals sorry

/-! ... and the outer `match` before a `bif` in its alternative. -/

/--
trace: case h_1
i n : Nat
o✝ : Option Nat
x✝ : Nat
⊢ (bif i <ᵇ n then x✝ else 0) = 1

case h_2
i n : Nat
o✝ : Option Nat
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) (o : Option Nat) :
    (match o with | some x => bif i <ᵇ n then x else 0 | none => 0) = 1 := by
  split
  trace_state
  all_goals sorry

/-! A `bif` whose condition contains an `if` splits the `if` first. -/

/--
trace: case isTrue
i n : Nat
p : Prop
inst✝ : Decidable p
h✝ : p
⊢ (bif i <ᵇ n then 1 else 0) = 1

case isFalse
i n : Nat
p : Prop
inst✝ : Decidable p
h✝ : ¬p
⊢ (bif n <ᵇ n then 1 else 0) = 1
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) (p : Prop) [Decidable p] :
    (bif (if p then i else n) <ᵇ n then 1 else 0) = 1 := by
  split
  trace_state
  all_goals sorry

/-! `simp` normalizes `bif b` to `uif b = true`. `split` also gives the propositional view there. -/

/--
trace: case isTrue
i n : Nat
h : i < n
⊢ 1 = 1

case isFalse
i n : Nat
h : ¬i < n
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) : (bif i <ᵇ n then 1 else 0) = 1 := by
  simp only [Bool.cond_eq_ite]
  split <;> rename_i h
  trace_state
  all_goals sorry

/--
trace: case isTrue
b : Bool
h : b = true
⊢ 1 = 1

case isFalse
b : Bool
h : ¬b = true
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (b : Bool) : (bif b then 1 else 0) = 1 := by
  simp only [Bool.cond_eq_ite]
  split <;> rename_i h
  trace_state
  all_goals sorry

/-! A `Decidable` `if` on a `Bool` is unchanged. -/

/--
trace: case isTrue
i n : Nat
h : (i <ᵇ n) = true
⊢ 1 = 1

case isFalse
i n : Nat
h : ¬(i <ᵇ n) = true
⊢ 0 = 1
-/
#guard_msgs (trace, drop warning) in
example (i n : Nat) : (if i <ᵇ n then 1 else 0) = 1 := by
  split <;> rename_i h
  trace_state
  all_goals sorry

/-! ## Functional induction -/

def countDown (n i : Nat) : Nat :=
  bif h : i <ᵇ n then countDown n (i + 1) + 1 else 0
termination_by n - i

/--
info: countDown.induct (n : Nat) (motive : Nat → Prop) (case1 : ∀ (x : Nat), x < n → motive (x + 1) → motive x)
  (case2 : ∀ (x : Nat), ¬x < n → motive x) (i : Nat) : motive i
-/
#guard_msgs in
#check countDown.induct

/--
info: countDown.induct_unfolding (n : Nat) (motive : Nat → Nat → Prop)
  (case1 : ∀ (x : Nat), x < n → motive (x + 1) (countDown n (x + 1)) → motive x (countDown n (x + 1) + 1))
  (case2 : ∀ (x : Nat), ¬x < n → motive x 0) (i : Nat) : motive i (countDown n i)
-/
#guard_msgs in
#check countDown.induct_unfolding

/--
info: countDown.fun_cases (n i : Nat) (motive : Prop) (case1 : i < n → motive) (case2 : ¬i < n → motive) : motive
-/
#guard_msgs in
#check countDown.fun_cases

/-! The equation lemmas are not split, like for `if`. -/

/-- info: countDown.eq_1 (n i : Nat) : countDown n i = bif h : i <ᵇ n then countDown n (i + 1) + 1 else 0 -/
#guard_msgs in
#check countDown.eq_1

theorem countDown_eq (n i : Nat) : countDown n i = n - i := by
  fun_induction countDown <;> omega

/--
trace: case case1
n x✝ : Nat
h✝ : x✝ < n
ih1✝ : countDown n (x✝ + 1) = n - (x✝ + 1)
⊢ countDown n (x✝ + 1) + 1 = n - x✝

case case2
n x✝ : Nat
h✝ : ¬x✝ < n
⊢ 0 = n - x✝
-/
#guard_msgs (trace, drop warning) in
example (n i : Nat) : countDown n i = n - i := by
  fun_induction countDown
  trace_state
  all_goals omega

/-! A non-dependent `bif` in a structurally recursive function. -/

def sumBelow (n : Nat) : Nat → Nat
  | 0 => 0
  | i + 1 => bif i <ᵇ n then sumBelow n i + i else sumBelow n i

/--
info: sumBelow.induct (n : Nat) (motive : Nat → Prop) (case1 : motive 0)
  (case2 : ∀ (i : Nat), i < n → motive i → motive i.succ) (case3 : ∀ (i : Nat), ¬i < n → motive i → motive i.succ)
  (a✝ : Nat) : motive a✝
-/
#guard_msgs in
#check sumBelow.induct

/--
info: sumBelow.eq_2 (n i : Nat) : sumBelow n i.succ = bif i <ᵇ n then sumBelow n i + i else sumBelow n i
-/
#guard_msgs in
#check sumBelow.eq_2

/-! An opaque `Bool` condition keeps the `Bool` equation. -/

def untilFalse (f : Nat → Bool) (n : Nat) : Nat → Nat
  | 0 => 0
  | i + 1 => bif _h : f i then untilFalse f n i + 1 else 0

/--
info: untilFalse.induct (f : Nat → Bool) (motive : Nat → Prop) (case1 : motive 0)
  (case2 : ∀ (i : Nat), f i = true → motive i → motive i.succ) (case3 : ∀ (i : Nat), f i = false → motive i.succ)
  (a✝ : Nat) : motive a✝
-/
#guard_msgs in
#check untilFalse.induct
