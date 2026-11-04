/-!
Tests well-founded recursion through non-dependent `bif` and `uif`: the WF preprocessing turns
`cond b t e` into `Bool.dcond` (`Bool.cond_eq_dcond`) and `uif` into `uif h :`
(`UDecidable.ite_eq_dite`), so the recursive calls see the condition. Covers `GuessLex` without
`termination_by`, `decreasing_by`, the equation lemmas, `.induct` and `fun_induction`.

Also tests that instance search handles `bif`/`uif` in types (`Fin (bif b then 61 else 60)`)
through the `NeZero` instances for `cond` and `UDecidable.ite`.
-/

/-! ## `bif` with an explicit measure -/

def countUp (i n : Nat) : Nat :=
  bif i <ᵇ n then countUp (i + 1) n else i
termination_by n - i

#guard countUp 3 10 == 10
#guard countUp 12 10 == 12

/-! ## `GuessLex` finds the measure from the `Bool` hypothesis -/

def countUpG (i n : Nat) : Nat :=
  bif i <ᵇ n then countUpG (i + 1) n else i

#guard countUpG 3 10 == 10

def countUpU (i n : Nat) : Nat :=
  uif i < n then countUpU (i + 1) n else i

#guard countUpU 3 10 == 10

/-- A compound condition. -/
def walk (xs : Array Nat) (i acc : Nat) : Nat :=
  bif i <ᵇ xs.size && acc <ᵇ 100 then walk xs (i + 1) (acc + xs[i]!) else acc

#guard walk #[1, 2, 3] 0 0 == 6
#guard walk #[60, 50, 3] 0 0 == 110

/-- The recursive call is in the `false` branch. -/
def countDown (i n : Nat) : Nat :=
  bif n ≤ᵇ i then i else countDown (i + 1) n

#guard countDown 3 10 == 10

/-! ## `decreasing_by` sees the hypothesis -/

def countUpD (i n : Nat) : Nat :=
  bif i <ᵇ n then countUpD (i + 1) n else i
termination_by n - i
decreasing_by
  have : i < n := lt_of_decideLT_eq_true ‹_›
  omega

/-! ## Equation lemmas keep `bif` -/

/-- info: countUpG.eq_1 (i n : Nat) : countUpG i n = bif i <ᵇ n then countUpG (i + 1) n else i -/
#guard_msgs in
#check countUpG.eq_1

example : countUpG 2 5 = 5 := by
  simp [countUpG]

/-! ## Functional induction gets the propositional view of the condition -/

/--
info: countUpG.induct (n : Nat) (motive : Nat → Prop) (case1 : ∀ (x : Nat), x < n → motive (x + 1) → motive x)
  (case2 : ∀ (x : Nat), ¬x < n → motive x) (i : Nat) : motive i
-/
#guard_msgs in
#check countUpG.induct

/--
info: countDown.induct (n : Nat) (motive : Nat → Prop) (case1 : ∀ (x : Nat), n ≤ x → motive x)
  (case2 : ∀ (x : Nat), ¬n ≤ x → motive (x + 1) → motive x) (i : Nat) : motive i
-/
#guard_msgs in
#check countDown.induct

theorem countUpG_eq (i n : Nat) (h : i ≤ n) : countUpG i n = n := by
  fun_induction countUpG <;> omega

theorem countUpG_ge (i n : Nat) : n ≤ countUpG i n ∨ n < i := by
  fun_induction countUpG i n with
  | case1 i h ih => omega
  | case2 i h => omega

theorem countUpU_eq (i n : Nat) (h : i ≤ n) : countUpU i n = n := by
  fun_induction countUpU <;> omega

theorem countDown_eq (i n : Nat) (h : i ≤ n) : countDown i n = n := by
  fun_induction countDown <;> omega

/-! ## `bif`/`uif` in types: `NeZero` instances for numerals in `Fin` -/

example (leap : Bool) : Fin (bif leap then 61 else 60) := 0
example : Fin (bif true then 61 else 60) := 59
example (p : Prop) [UDecidable p] : Fin (uif p then 61 else 60) := 0
example (leap : Bool) : (5 : Fin (bif leap then 61 else 60)).val = 5 := by
  cases leap <;> rfl
