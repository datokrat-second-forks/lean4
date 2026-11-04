/-!
Tests that `omega` handles `bif` (`cond`) and `bif h :` (`Bool.dcond`) atoms on `Int` and `Nat`
like `if`/`uif` atoms, using the `Bool` condition through `bool_to_prop`. Also covers `if`/`uif`
atoms on `Nat`.
-/

/-! ## `cond` -/

example (i n : Nat) : (bif i <ᵇ n then i else n) ≤ n := by omega
example (i n : Int) : (bif i <ᵇ n then i else n) ≤ n := by omega
example (i n : Nat) : (bif i ≤ᵇ n then n - i else 0) + min i n ≤ n := by omega
example (a b c : Nat) (h : a < b) : (bif a <ᵇ b then c else c + 1) = c := by omega
example (a b c : Nat) (h : (a <ᵇ b) = false) : (bif a <ᵇ b then c else c + 1) = c + 1 := by omega
example (a b : Nat) (c : Int) : (bif a == b then c else c + 1) ≤ c + 1 := by omega
example (a b : Nat) (c : Int) (h : a ≠ b) : (bif a == b then c else c + 1) = c + 1 := by omega
example (a : Int) (c : Bool) : (bif c then a else a + 1) ≥ a := by omega
example (i j n : Nat) : (bif i <ᵇ n && j <ᵇ n then i + j else 0) < 2 * n ∨ n = 0 := by omega

/-! ## `Bool.dcond` -/

example (i n : Nat) : (bif _h : i <ᵇ n then i else n) ≤ n := by omega
example (i n : Int) : (bif _h : i ≤ᵇ n then i else n) ≤ n := by omega
example (i n : Nat) :
    (bif h : i <ᵇ n then (⟨i, lt_of_decideLT_eq_true h⟩ : Fin n).val else 0) < n ∨ n = 0 := by
  omega
example (i n : Nat) (h : n ≤ i) :
    (bif h : i <ᵇ n then (⟨i, lt_of_decideLT_eq_true h⟩ : Fin n).val else 7) = 7 := by
  omega

/-! ## `BitVec.toInt` unfolded to `bif` -/

example (w : Nat) (x : BitVec w) : x.toInt < (2 ^ w : Nat) := by
  unfold BitVec.toInt
  omega
example (w : Nat) (x : BitVec w) : -((2 ^ w : Nat) : Int) ≤ x.toInt := by
  unfold BitVec.toInt
  omega
example (w : Nat) (x : BitVec w) (h : 2 * x.toNat < 2 ^ w) : x.toInt = x.toNat := by
  unfold BitVec.toInt
  omega

/-! ## `if` and `uif` on `Nat` -/

example (a b c : Nat) (h : a < b) : (if a < b then c else c + 1) = c := by omega
example (a b c : Nat) (h : a < b) : (uif a < b then c else c + 1) = c := by omega
example (a b : Nat) (p : Prop) [UDecidable p] : (uif p then a else b) ≤ max a b := by omega

/-! ## Limitations -/

/-- `omega` doesn't model `Bool` variables, so it can't use `c = true` here. -/
example (c : Bool) (a : Nat) (h : c = true) : (bif c then a else a + 1) = a := by
  fail_if_success omega
  simp [h]
