/-!
The dependent `bif h : c then t else e` (`Bool.dcond`): term and `do` notation, pretty printing,
reduction, `simp` normalization to `uif h :`, the bridge lemmas from `<ᵇ` etc. to propositions, and
the support for `Bool.dcond` in `grind` and `cbv`. `Sym.simp` is tested in `sym_simp_dcond.lean`.
-/

/-! ## Term notation -/

def getOr (xs : Array Nat) (i : Nat) : Nat :=
  bif h : i <ᵇ xs.size then xs[i]'(lt_of_decideLT_eq_true h) else 0

/-- info: (20, 0) -/
#guard_msgs in
#eval (getOr #[10, 20] 1, getOr #[10, 20] 5)

example : getOr #[10, 20] 1 = 20 := rfl
example : getOr #[10, 20] 5 = 0 := by decide

/-- The `else` branch gets `h : c = false`. -/
def predOr (n : Nat) : Nat :=
  bif h : n =ᵇ 0 then 0 else
    have : n ≠ 0 := ne_of_decideEq_eq_false h
    n - 1

example : predOr 5 = 4 := rfl

example (b : Bool) (t e : Nat) : (bif _ : b then t else e) = Bool.dcond b (fun _ => t) (fun _ => e) :=
  rfl

/-- The non-dependent form still elaborates to `cond`. -/
example (b : Bool) (t e : Nat) : (bif b then t else e) = cond b t e := rfl

/-! ## Pretty printing -/

/-- info: fun xs i => bif h : i <ᵇ xs.size then xs[i] else 0 : Array Nat → Nat → Nat -/
#guard_msgs in
#check fun (xs : Array Nat) (i : Nat) => bif h : i <ᵇ xs.size then xs[i]'(lt_of_decideLT_eq_true h) else 0

/-- info: fun b => bif x : b then 1 else 2 : Bool → Nat -/
#guard_msgs in
#check fun (b : Bool) => bif _ : b then 1 else 2

/-- info: fun b => bif b then 1 else 2 : Bool → Nat -/
#guard_msgs in
#check fun (b : Bool) => bif b then 1 else 2

/-- info: true.dcond (fun x => 1) fun x => 2 : Nat -/
#guard_msgs in
set_option pp.notation false in
#check bif _ : true then 1 else 2

/-! ## `do` notation -/

def safeGet (xs : Array Nat) (i : Nat) : Id Nat := do
  bif h : i <ᵇ xs.size then
    return xs[i]'(lt_of_decideLT_eq_true h)
  else
    return 0

/-- info: (20, 0) -/
#guard_msgs in
#eval (safeGet #[10, 20] 1, safeGet #[10, 20] 5)

/-- `else bif` chains mix dependent and non-dependent conditions and `return` from loops. -/
def firstSmallIdx (xs : Array Nat) (n : Nat) : Id Nat := do
  for i in [0:10] do
    bif h : i <ᵇ xs.size then
      bif xs[i]'(lt_of_decideLT_eq_true h) <ᵇ n then return i
    else bif _ : i =ᵇ 9 then return 100
  return 0

/-- info: (1, 100) -/
#guard_msgs in
#eval (firstSmallIdx #[5, 1, 7] 3, firstSmallIdx #[5, 7] 3)

/-- Mutable variables, with a missing `else`. -/
def countBelow (xs : Array Nat) (n : Nat) : Id Nat := do
  let mut c := 0
  for i in [0:xs.size] do
    bif h : i <ᵇ xs.size then
      bif xs[i]'(lt_of_decideLT_eq_true h) <ᵇ n then c := c + 1
  return c

/-- info: 2 -/
#guard_msgs in
#eval countBelow #[1, 5, 2, 7] 3

/-- The dependent `do` form elaborates to `Bool.dcond`. -/
example (b : Bool) (x y : Nat) :
    (do bif _ : b then pure x else pure y : Id Nat) = Bool.dcond b (fun _ => pure x) (fun _ => pure y) :=
  rfl

/-! ## `simp` -/

example (b : Bool) (t : b = true → Nat) (e : b = false → Nat) :
    Bool.dcond b t e = uif h : b = true then t h else e (Bool.eq_false_iff.mpr h) := by
  simp only [Bool.dcond_eq_udite]

example (t : true = true → Nat) (e : true = false → Nat) : Bool.dcond true t e = t rfl := by
  dsimp only [Bool.dcond_true]

example (t : false = true → Nat) (e : false = false → Nat) : Bool.dcond false t e = e rfl := by
  simp

/-- `simp` rewrites `<ᵇ` to `UDecidable.decide` and the `Bool.dcond` to `uif h :` on the proposition. -/
example (xs : Array Nat) (i : Nat) :
    getOr xs i = uif h : i < xs.size then xs[i] else 0 := by
  simp [getOr]

example (p : Prop) [UDecidable p] (t : UDecidable.decide p = true → Nat)
    (e : UDecidable.decide p = false → Nat) :
    Bool.dcond (UDecidable.decide p) t e =
      uif h : p then t (UDecidable.decide_eq_true h) else e (UDecidable.decide_eq_false h) := by
  simp only [Bool.dcond_udecide]

/-- `simp` rewrites the condition of `Bool.dcond` by congruence. -/
example (xs : Array Nat) (i : Nat) :
    getOr xs i = Bool.dcond (UDecidable.decide (i < xs.size)) (fun h => xs[i]'(UDecidable.of_decide_eq_true h)) (fun _ => 0) := by
  simp only [getOr, decideLT_eq_udecide]

/-- `split` after `simp` gives the propositional hypotheses. -/
example (xs : Array Nat) (i : Nat) : getOr xs i = xs[i]?.getD 0 := by
  simp only [getOr, Bool.dcond_eq_udite]
  split
  next h => simp [h]
  next h => simp [h]

/-- `split` without `simp`. -/
example (xs : Array Nat) (i : Nat) : getOr xs i = xs[i]?.getD 0 := by
  simp only [getOr]
  split
  next h => simp [h]
  next h => simp [h]

example (xs : Array Nat) (i : Nat) : getOr xs i = xs[i]?.getD 0 := by
  simp only [getOr]
  simp
  split
  next h => simp [h]
  next h => simp [h]

/-! ## Bridge lemmas -/

example (a b : Nat) (h : (a <ᵇ b) = true) : a < b := lt_of_decideLT_eq_true h
example (a b : Nat) (h : (a <ᵇ b) = false) : ¬a < b := not_lt_of_decideLT_eq_false h
example (a b : Nat) (h : (a ≤ᵇ b) = true) : a ≤ b := le_of_decideLE_eq_true h
example (a b : Nat) (h : (a ≤ᵇ b) = false) : ¬a ≤ b := not_le_of_decideLE_eq_false h
example (a b : Nat) (h : (a =ᵇ b) = true) : a = b := eq_of_decideEq_eq_true h
example (a b : Nat) (h : (a =ᵇ b) = false) : a ≠ b := ne_of_decideEq_eq_false h
example (a b : Nat) (h : (a ≠ᵇ b) = true) : a ≠ b := ne_of_decideNe_eq_true h
example (a b : Nat) (h : (a ≠ᵇ b) = false) : a = b := eq_of_decideNe_eq_false h
example (a b : Nat) : (a <ᵇ b) = true ↔ a < b := decideLT_eq_true_iff
example (a b : Nat) : (a ≠ᵇ b) = false ↔ a = b := decideNe_eq_false_iff

/-! ## Well-founded recursion -/

/-- The termination proof uses the hypothesis of the dependent `bif`. -/
def sumFrom (xs : Array Nat) (i : Nat) : Nat :=
  bif h : i <ᵇ xs.size then xs[i]'(lt_of_decideLT_eq_true h) + sumFrom xs (i + 1) else 0
termination_by xs.size - i
decreasing_by have := lt_of_decideLT_eq_true h; omega

/-- info: 6 -/
#guard_msgs in
#eval sumFrom #[1, 2, 3] 0

/-- A loop on `Nat` with `≤ᵇ`, whose termination proof uses the negated hypothesis. -/
def countDown (n : Nat) : Nat :=
  bif h : n ≤ᵇ 0 then 0 else
    have := not_le_of_decideLE_eq_false h
    countDown (n - 1) + 1
termination_by n
decreasing_by omega

example : countDown 3 = 3 := by decide +kernel

theorem sumFrom_eq (xs : Array Nat) (i : Nat) :
    sumFrom xs i = uif h : i < xs.size then xs[i] + sumFrom xs (i + 1) else 0 := by
  rw [sumFrom]
  simp

theorem countDown_eq (n : Nat) : countDown n = n := by
  induction n with
  | zero => rw [countDown]; rfl
  | succ n ih =>
    rw [countDown]
    simp only [Bool.dcond_eq_udite]
    split
    next h => omega
    next => simp [ih]

/-- Functional induction splits on the dependent `bif`. -/
theorem countDown_eq' (n : Nat) : countDown n = n := by
  fun_induction countDown with
  | case1 n h => omega
  | case2 n _ _ ih => omega

/-! ## `grind` -/

example (b : Bool) (t : b = true → Nat) (e : b = false → Nat) (h : b = true) :
    Bool.dcond b t e = t h := by
  grind

example (xs : Array Nat) (i : Nat) (h : i < xs.size) : getOr xs i = xs[i] := by
  grind [getOr]

example (xs : Array Nat) (i : Nat) (h : xs.size ≤ i) : getOr xs i = 0 := by
  grind [getOr]

/-! ## `cbv` -/

example : getOr #[10, 20] 1 = 20 := by cbv
example : getOr #[10, 20] 5 = 0 := by cbv

/-- `cbv` evaluates only the selected branch, otherwise the recursion would not stop. -/
example : sumFrom #[1, 2, 3] 0 = 6 := by cbv
example : countDown 2 = 2 := by cbv
