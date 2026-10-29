/-!
Notation and tactic support for `UDecidable.ite` and `UDecidable.dite`: the `uif` notation, `rw`
and `simp` with the `ite`/`dite` lemmas, `simp` rewriting conditions, `split`, and recursion with
`uif h : c`.
-/

set_option linter.unusedVariables false

def f (n : Nat) : Nat := uif n ≤ 3 then 0 else n

def g (n : Nat) : Nat := uif h : n = 0 then 0 else n - 1

/-! Pretty printing -/

/-- info: fun n => uif n ≤ 3 then 0 else n : Nat → Nat -/
#guard_msgs in #check fun n => uif n ≤ 3 then 0 else n

/-- info: fun n => uif h : n = 0 then 0 else n - 1 : Nat → Nat -/
#guard_msgs in #check fun n => uif h : n = 0 then 0 else n - 1

/-! Any two instances are equal, and the condition can be rewritten. -/

example (p : Prop) (i j : UDecidable p) : i = j := Subsingleton.elim i j

/-! `rw` with the branch lemmas -/

example : f 2 = 0 := by rw [f, UDecidable.ite_eq_left (by decide)]
example : f 5 = 5 := by rw [f, UDecidable.ite_eq_right (by decide)]
example : g 0 = 0 := by rw [g, UDecidable.dite_eq_left rfl]
example : g 5 = 4 := by rw [g, UDecidable.dite_eq_right (by decide)]

/-! `simp` decides ground conditions and uses hypotheses. -/

example : f 2 = 0 := by simp [f]
example : f 5 = 5 := by simp [f]
example (n : Nat) (h : n ≤ 3) : f n = 0 := by simp [f, h]
example (n : Nat) (h : ¬n ≤ 3) : f n = n := by simp [f, h]
example : g 0 = 0 := by simp [g]
example (n : Nat) (h : n ≠ 0) : g n = n - 1 := by simp [g, h]
example (n : Nat) : (uif n + 0 ≤ 3 then 1 else 2) = (uif n ≤ 3 then 1 else 2) := by simp

/-! `split` -/

example (n : Nat) : f n ≤ n := by
  unfold f
  split <;> omega

example (n : Nat) : g n ≤ n := by
  unfold g
  split
  · omega
  · omega

example (n : Nat) (h : f n = 7) : n = 7 := by
  unfold f at h
  split at h <;> omega

example (n m : Nat) : (uif n ≤ m then m else n) ≥ n := by
  split <;> omega

set_option backward.split false in
example (n : Nat) : g n ≤ n := by
  unfold g
  split <;> omega

/-! `split` splits an `if` nested in the condition of another one first. -/

example (a : Bool) (n : Nat) : (uif (uif a then n else 0) ≤ n then 1 else 2) = 1 := by
  split <;> simp

set_option backward.split false in
example (a : Bool) (n : Nat) : (uif (uif a then n else 0) ≤ n then 1 else 2) = 1 := by
  split <;> simp

set_option backward.split false in
example (a : Bool) (n : Nat) :
    (uif h : (uif a then n else 0) ≤ n then 1 else 2) = 1 := by
  split <;> simp

/-! Well-founded recursion that uses the hypothesis of `uif h : c`. -/

def sumTo (n : Nat) : Nat := uif h : n = 0 then 0 else n + sumTo (n - 1)
termination_by n
decreasing_by omega

example : sumTo 0 = 0 := by simp [sumTo]
example (n : Nat) : sumTo (n + 1) = n + 1 + sumTo n := by
  rw [sumTo]
  simp

/-! A non-dependent `uif` also provides its condition to termination proofs. -/

def double (n power : Nat) (h : power > 0) : Nat :=
  uif power < n then double n (power * 2) (Nat.mul_pos h (by decide)) else power
termination_by n - power
decreasing_by omega

/-! Functional induction splits on `uif`. -/

example (n p h) : double n p h ≥ p := by
  fun_induction double with
  | case1 => omega
  | case2 => omega

example (n : Nat) : sumTo n ≥ n := by
  fun_induction sumTo with
  | case1 => omega
  | case2 => omega

/-! Compiled code -/

/-- info: [0, 5, 0, 4, 10, 8] -/
#guard_msgs in
#eval [f 2, f 5, g 0, g 5, sumTo 4, double 5 1 (by decide)]

/-!
Unfolding a definition with `simp` leaves the instance of an outer `uif` in its unfolded form.
Rewriting the condition afterwards casts that instance to the new condition.
-/

def minOn' [LE β] [UDecidableLE β] (f : α → β) (x y : α) :=
  uif f x ≤ f y then x else y

example [LE β] [UDecidableLE β] {f : α → β} {x y z : α} (h : f x ≤ f y) :
    minOn' f (minOn' f x y) z = uif f x ≤ f z then x else z := by
  simp only [minOn']
  simp only [UDecidable.ite_eq_left h]

example [LE β] [UDecidableLE β] {f : α → β} {x y z : α} (h : f x ≤ f z) :
    minOn' f (minOn' f x y) z = minOn' f x (minOn' f y z) ∨ True := by
  simp only [minOn']
  split
  · split <;> simp
  · simp

/-!
After `simp` rewrites a condition, the instance must not mention the old condition, or a later `rw`
of a subterm of the new condition fails with "motive is not type correct".
-/

example [LE β] [UDecidableLE β] {f : α → β} {x y z : α} {b : β} (h : f x ≤ f y) (hb : f x = b) :
    minOn' f (minOn' f x y) z = uif b ≤ f z then x else z := by
  simp only [minOn']
  simp only [UDecidable.ite_eq_left h]
  rw [hb]

/-! The replaced instance can also be a family of instances, such as `UDecidableRel r`. -/

def minBy (r : α → α → Prop) [UDecidableRel r] (x y : α) : α :=
  uif r x y then x else y

example {r s : α → α → Prop} [UDecidableRel r] [UDecidableRel s] (h : r = s) (x y : α) :
    minBy r x y = minBy s x y := by
  simp only [h]

/-! `cbv` evaluates only the branch that the condition selects. -/

def countdown (n : Nat) : List Nat :=
  uif h : 0 < n then n :: countdown (n - 1) else []
termination_by n
decreasing_by omega

example : countdown 2 = [2, 1] := by cbv

example : (uif 2 ≤ 1 then 0 else 1) = 1 := by cbv
