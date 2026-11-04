/-!
Tests that `omega`, `get_elem_tactic`, `decreasing_tactic` and `GuessLex` see through `Bool`
conditions such as `h : (i <ᵇ n) = true` via the `bool_to_prop` simp set
(`Lean.Meta.boolCondToProp?`), and that `simp` reduces `bif` with decided conditions
(`↓reduceCond`/`↓reduceDCond`).
-/

/-! ## `omega` -/

example (i n : Nat) (h : (i <ᵇ n) = true) : i + 1 ≤ n := by omega
example (i n : Nat) (h : (i <ᵇ n) = false) : n ≤ i := by omega
example (a b : Nat) (h : (a ≤ᵇ b) = false) : b < a := by omega
example (a b : Nat) (h : (a ≤ᵇ b) = true) : a < b + 1 := by omega
example (x y : Nat) (h : (x =ᵇ y) = true) : x ≤ y := by omega
example (x y : Nat) (h : (x =ᵇ y) = false) (h' : x ≤ y) : x < y := by omega
example (x y : Nat) (h : (x ≠ᵇ y) = true) (h' : x ≤ y) : x < y := by omega
example (x y : Nat) (h : (x ≠ᵇ y) = false) : x ≤ y := by omega
example (i n j m : Nat) (h : (i <ᵇ n && j <ᵇ m) = true) : i + j + 2 ≤ n + m := by omega
example (i n j m : Nat) (h : (i <ᵇ n && j <ᵇ m) = false) (hi : i < n) : m ≤ j := by omega
example (i n j m : Nat) (h : (i <ᵇ n || j <ᵇ m) = false) : n + m ≤ i + j := by omega
example (i n : Nat) (h : (!(i <ᵇ n)) = true) : n ≤ i := by omega
example (a b : Nat) (h : decide (a < b) = true) : a < b := by omega
example (a b : Nat) (h : decide (a < b) = false) : b ≤ a := by omega
example (a b : Nat) (h : UDecidable.decide (a < b) = true) : a < b := by omega
example (a b : Nat) (h : UDecidable.decide (a < b) = false) : b ≤ a := by omega
example (a b : Nat) (h : (a == b) = true) : a ≤ b := by omega
example (a b : Nat) (h : (a != b) = true) (h' : a ≤ b) : a < b := by omega
example (a b : Int) (h : (a <ᵇ b) = true) : a + 1 ≤ b := by omega
example (a b : Nat) (h : Nat.blt a b = true) : a < b := by omega

-- The goal can be a `Bool` equation as well.
example (i n : Nat) (h : i + 1 ≤ n) : (i <ᵇ n) = true := by omega
example (i n : Nat) (h : n ≤ i) : (i <ᵇ n) = false := by omega

-- Conditions without a `bool_to_prop` translation are ignored.
example (b : Bool) (i n : Nat) (_ : b = true) (h : i < n) : i ≤ n := by omega

/-! ## `get_elem_tactic` -/

def getOrZero (xs : Array Nat) (i : Nat) : Nat :=
  bif h : i <ᵇ xs.size then xs[i] else 0

def getPairOrZero (xs : Array Nat) (i j : Nat) : Nat :=
  bif h : i <ᵇ xs.size && j + 1 <ᵇ xs.size then xs[i] + xs[j] + xs[j+1] else 0

/-! ## `GuessLex` and `decreasing_tactic` -/

def countUp (n i : Nat) : Nat :=
  bif h : i <ᵇ n then countUp n (i + 1) + 1 else 0

def countUp₂ (n m i : Nat) : Nat :=
  bif h : i <ᵇ n && i <ᵇ m then countUp₂ n m (i + 1) + 1 else 0

def sumFrom (xs : Array Nat) (i : Nat) : Nat :=
  bif h : i <ᵇ xs.size then xs[i] + sumFrom xs (i + 1) else 0

def countDown (n i : Nat) : Nat :=
  bif h : i <ᵇ n then countDown n (i + 1) + 1 else 0
termination_by n - i
decreasing_by omega

-- No `termination_by` needed, but check what was guessed:
/--
info: Try this:
  [apply] termination_by n - i
-/
#guard_msgs in
def countUp' (n i : Nat) : Nat :=
  bif h : i <ᵇ n then countUp' n (i + 1) + 1 else 0
termination_by?

/-! ## User-tagged `bool_to_prop` lemmas -/

def inRange (lo hi x : Nat) : Bool := lo ≤ᵇ x && x <ᵇ hi

@[bool_to_prop] theorem inRange_eq_true_iff {lo hi x : Nat} :
    inRange lo hi x = true ↔ lo ≤ x ∧ x < hi := by
  simp [inRange]

example (x : Nat) (h : inRange 3 10 x = true) : 2 < x ∧ x < 11 := by omega

def scan (hi x : Nat) : Nat :=
  bif h : inRange 0 hi x then scan hi (x + 1) + 1 else 0

/-! ## `↓reduceCond` and `↓reduceDCond` -/

example (t e : Nat) : (bif 2 <ᵇ 3 then t else e) = t := by simp
example (t e : Nat) : (bif 3 <ᵇ 2 then t else e) = e := by simp
example (t e : Nat) (n : Nat) : (bif n <ᵇ n + 1 then t else e) = t := by simp
example (b : Bool) (t e : Nat) (hb : b = true) : (bif b then t else e) = t := by simp [hb]
example (b : Bool) (t e : Nat) (hb : b = false) : (bif b then t else e) = e := by simp [hb]

example (xs : Array Nat) (h : 0 < xs.size) :
    (bif _ : 0 <ᵇ xs.size then xs[0] else 1) = xs[0] := by
  simp [h]

example : (bif h : 2 <ᵇ 5 then (⟨2, lt_of_decideLT_eq_true h⟩ : Fin 5) else 0) = 2 := by simp

-- `dsimp` reduces literal conditions.
example (t e : Nat) : (bif true then t else e) = t := by dsimp only [↓dreduceCond]
example (t e : Nat) : (bif false then t else e) = e := by dsimp only [↓dreduceCond]
example (t : true = true → Nat) (e : true = false → Nat) :
    Bool.dcond true t e = t rfl := by dsimp only [↓dreduceDCond]

-- Undecided conditions still turn into `uif`.
example (b : Bool) (t e : Nat) : (bif b then t else e) = (uif b = true then t else e) := by
  simp

-- `simp [f]` on a well-founded `bif h :` function no longer loops when the condition is decided.
example : countUp 3 1 = 2 := by simp [countUp]
example (n : Nat) : countUp n n = 0 := by simp [countUp]
example (n : Nat) : countUp (n + 1) n = 1 := by simp [countUp]
