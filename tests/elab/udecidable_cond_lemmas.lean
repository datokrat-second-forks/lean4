/-!
Tests the `rw`-friendly lemmas `Bool.cond_decideLT_pos`/`Bool.dcond_decideLT_pos` etc., which take
the proposition behind a `Bool` comparison, and the `uif` mirrors of `ite` simp lemmas such as
`ite_self_left` (`uif p then p else ¬p`).
-/

/-! ## `rw` with `Bool.(d)cond_decide*_pos/neg` -/

def f (i n : Nat) : Nat :=
  bif h : i <ᵇ n then (⟨i, lt_of_decideLT_eq_true h⟩ : Fin n).val + 1 else 0

example (i n : Nat) (h : i < n) : f i n = i + 1 := by rw [f, Bool.dcond_decideLT_pos h]
example (i n : Nat) (h : ¬i < n) : f i n = 0 := by rw [f, Bool.dcond_decideLT_neg h]
example (i n : Nat) (h : i < n) : (bif i <ᵇ n then 1 else 2) = 1 := by
  rw [Bool.cond_decideLT_pos h]
example (i n : Nat) (h : ¬i < n) : (bif i <ᵇ n then 1 else 2) = 2 := by
  rw [Bool.cond_decideLT_neg h]
example (i n : Int) (h : i ≤ n) : (bif i ≤ᵇ n then 1 else 2) = 1 := by
  rw [Bool.cond_decideLE_pos h]
example (i n : Int) (h : ¬i ≤ n) : (bif i ≤ᵇ n then 1 else 2) = 2 := by
  rw [Bool.cond_decideLE_neg h]
example (i n : Int) (h : i ≤ n) : (bif _h : i ≤ᵇ n then 1 else 2) = 1 := by
  rw [Bool.dcond_decideLE_pos h]
example (i n : Int) (h : ¬i ≤ n) : (bif _h : i ≤ᵇ n then 1 else 2) = 2 := by
  rw [Bool.dcond_decideLE_neg h]
example (i n : Char) (h : i = n) : (bif i =ᵇ n then 1 else 2) = 1 := by
  rw [Bool.cond_decideEq_pos h]
example (i n : Char) (h : i ≠ n) : (bif i =ᵇ n then 1 else 2) = 2 := by
  rw [Bool.cond_decideEq_neg h]
example (i n : Char) (h : i = n) : (bif _h : i =ᵇ n then 1 else 2) = 1 := by
  rw [Bool.dcond_decideEq_pos h]
example (i n : Char) (h : i ≠ n) : (bif _h : i =ᵇ n then 1 else 2) = 2 := by
  rw [Bool.dcond_decideEq_neg h]
example (i n : Char) (h : i ≠ n) : (bif i ≠ᵇ n then 1 else 2) = 1 := by
  rw [Bool.cond_decideNe_pos h]
example (i n : Char) (h : i = n) : (bif i ≠ᵇ n then 1 else 2) = 2 := by
  rw [Bool.cond_decideNe_neg h]
example (i n : Char) (h : i ≠ n) : (bif _h : i ≠ᵇ n then 1 else 2) = 1 := by
  rw [Bool.dcond_decideNe_pos h]
example (i n : Char) (h : i = n) : (bif _h : i ≠ᵇ n then 1 else 2) = 2 := by
  rw [Bool.dcond_decideNe_neg h]

/-! ## `uif` mirrors of `ite` simp lemmas -/

section
variable (p q : Prop) [UDecidable p]

example : uif p then p else ¬p := by simp
example : (uif p then p else q) ↔ (¬p → q) := by simp
example : (uif p then q else p) ↔ p ∧ q := by simp
example : (uif p then ¬p else q) ↔ ¬p ∧ q := by simp
example : (uif p then q else ¬p) ↔ (p → q) := by simp

example (x : ¬p → α) (y : ¬¬p → α) :
    (uif h : ¬p then x h else y h) = uif h : p then y (not_not_intro h) else x h := by simp

example (x y : Prop) : ((uif p then x else y) ↔ x) ↔ (¬p → y = x) := by simp
example (x y : Prop) : ((uif p then x else y) ↔ y) ↔ (p → x = y) := by simp
example (x y : Prop) : (x ↔ uif p then x else y) ↔ (¬p → x = y) := by simp
example (x y : Prop) : (y ↔ uif p then x else y) ↔ (p → y = x) := by simp
example (x : Nat) (y : ¬p → Nat) : x = (uif h : p then x else y h) ↔ ∀ h : ¬p, x = y h := by simp
example (x : p → Nat) (y : Nat) : y = (uif h : p then x h else y) ↔ ∀ h : p, y = x h := by simp
example (x : Prop) (y : ¬p → Prop) : ((uif h : p then x else y h) ↔ x) ↔ ∀ h : ¬p, y h ↔ x := by
  simp
example (x : p → Prop) (y : Prop) : ((uif h : p then x h else y) ↔ y) ↔ ∀ h : p, x h ↔ y := by
  simp
example (x : Prop) (y : ¬p → Prop) : (x ↔ uif h : p then x else y h) ↔ ∀ h : ¬p, x ↔ y h := by
  simp
example (x : p → Prop) (y : Prop) : (y ↔ uif h : p then x h else y) ↔ ∀ h : p, y ↔ x h := by
  simp
example (x : ¬p → Prop) : (uif h : p then False else x h) ↔ ∃ h : ¬p, x h := by simp
example (x : p → Prop) : (uif h : p then x h else False) ↔ ∃ h : p, x h := by simp
example (x : ¬p → Prop) : (uif h : p then True else x h) ↔ ∀ h : ¬p, x h := by simp
example (x : p → Prop) : (uif h : p then x h else True) ↔ ∀ h : p, x h := by simp

example (b : Bool) : (uif p then UDecidable.decide p else b) = (UDecidable.decide p || b) := by simp
example (b : Bool) : (uif p then b else UDecidable.decide p) = (UDecidable.decide p && b) := by simp
example (b : Bool) : (uif p then !UDecidable.decide p else b) = (!UDecidable.decide p && b) := by
  simp
example (b : Bool) : (uif p then b else !UDecidable.decide p) = (!UDecidable.decide p || b) := by
  simp

example (b c : Bool) :
    ¬(uif p then b = true else c = true) ↔ uif p then b = false else c = false := by simp
example (b c : Bool) :
    ¬(uif p then b = false else c = false) ↔ uif p then b = true else c = true := by simp
example (b c : Bool) :
    ¬(uif p then b = true else c = false) ↔ uif p then b = false else c = true := by simp
example (b c : Bool) :
    ¬(uif p then b = false else c = true) ↔ uif p then b = true else c = false := by simp

end

example (b : Bool) (p q : Prop) : (uif b = false then p else q) ↔ uif b = true then q else p := by
  simp
example (b : Bool) (q : Prop) : (uif b = true then q else b = false) ↔ (b = true → q) := by simp

example (u v : Nat) :
    UDecidable.decide (u < 3 → v < 4) = (!UDecidable.decide (u < 3) || UDecidable.decide (v < 4)) := by
  simp

example (u : Prop) [UDecidable u] (a b : Nat) [UDecidable (uif u then a < 3 else b < 3)] :
    UDecidable.decide (uif u then a < 3 else b < 3) =
      uif u then UDecidable.decide (a < 3) else UDecidable.decide (b < 3) := by
  simp only [UDecidable.decide_ite]
