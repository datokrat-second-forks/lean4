/-!
Checks that simple `Fin` and `Option` operations still reduce in the kernel and in the elaborator
after their definitions moved from `Decidable` `if` to `bif`/`bif h :`/`uif` (`Fin.foldl`,
`Fin.addNat?`, `Fin.intCast`, `Fin.addCases`, `Fin.reverseInduction`, `Option.filterM`, …), checks
the `UDecidable` instances for `Option` membership and order, and spot-checks the lemmas restated
with `uif`.
-/

/-! `Fin` arithmetic, comparisons and folds. -/

example : (3 : Fin 5) + 4 = 2 := rfl
example : (3 : Fin 5) + 4 = 2 := by decide
example : (1 : Fin 5) - 3 = 3 := rfl
example : (1 : Fin 5) - 3 = 3 := by decide
example : (3 : Fin 5) * 4 = 2 := by decide
example : (4 : Fin 5) / 2 = 2 := by decide
example : (4 : Fin 5) % 3 = 1 := by decide
example : -(2 : Fin 5) = 3 := by decide
example : Fin.ofNat 5 7 = 2 := rfl
example : Fin.ofNat 5 7 = 2 := by decide
example : (2 : Fin 5) < 3 := by decide
example : (2 : Fin 5) ≤ 2 := by decide
example : ((2 : Fin 5) == 2) = true := rfl
example : ((2 : Fin 5) == 3) = false := by decide
example : (2 : Fin 5) ≠ 3 := by decide
example : (2 : Fin 5) = 2 := by decide
example : Fin.last 3 = 3 := rfl
example : (Fin.last 3).val = 3 := by decide
example : max (2 : Fin 5) 4 = 4 := by decide
example : min (2 : Fin 5) 4 = 2 := by decide
example : max (2 : Fin 5) 4 = 4 := rfl
example : compare (2 : Fin 5) 4 = .lt := by decide
example : ((6 : Fin 8) &&& 3) = 2 := by decide
example : ((6 : Fin 8) ||| 1) = 7 := by decide
example : ((6 : Fin 8) >>> 1) = 3 := by decide
example : (5 : Fin 8).log2 = 2 := by decide
example : (2 : Fin 5).rev = 2 := by decide
example : (1 : Fin 5).rev = 3 := rfl
example : (2 : Fin 5).succ = 3 := by decide
example : (Fin.castSucc (2 : Fin 5)) = 2 := by decide
example : Fin.foldl 3 (fun acc i => acc + i.val) 0 = 3 := by decide
example : Fin.foldr 3 (fun i acc => i.val :: acc) [] = [0, 1, 2] := by decide
example : Fin.foldl 3 (fun acc i => acc + i.val) 0 = 3 := rfl
example : Fin.foldr 3 (fun i acc => i.val :: acc) [] = [0, 1, 2] := rfl
example : Fin.foldl.loop 3 (fun acc i => acc + i.val) 0 0 = 3 := by decide
example : (2 : Fin 5).addNat? 2 = some 4 := by decide
example : (2 : Fin 5).addNat? 3 = none := by decide
example : (2 : Fin 5).addNat? 2 = some 4 := rfl
example : (Fin.intCast (-1) : Fin 5) = 4 := by decide
example : (Fin.intCast 7 : Fin 5) = 2 := by decide
example : (Fin.intCast (-1) : Fin 5) = 4 := rfl
example : Fin.addCases (m := 2) (n := 3) (motive := fun _ => Nat) (fun i => i.val) (fun i => 10 + i.val) 3 = 11 := by decide
example : Fin.addCases (m := 2) (n := 3) (motive := fun _ => Nat) (fun i => i.val) (fun i => 10 + i.val) 1 = 1 := rfl
example : Fin.reverseInduction (n := 3) (motive := fun _ => Nat) 7 (fun i a => a + i.val) 1 = 10 := by decide
example : Fin.reverseInduction (n := 3) (motive := fun _ => Nat) 7 (fun i a => a + i.val) 1 = 10 := rfl
example : Fin.induction (n := 3) (motive := fun _ => Nat) 7 (fun i a => a + i.val) 2 = 8 := by decide
example : Fin.foldl 3 (fun acc i => acc + i.val) 0 = 3 := by decide +kernel
example : Fin.lastCases (n := 2) (motive := fun _ => Nat) 5 (fun i => i.val) 2 = 5 := by decide
example : Fin.foldl 4 (fun acc i => acc && i.val <ᵇ 4) true = true := by decide
example : ∀ i : Fin 4, i.val < 4 := by decide
example : ∃ i : Fin 4, i.val = 3 := by decide
example : (2 : Fin 5).addNat? 2 = some 4 := by decide +kernel
example : Fin.foldl 3 (fun acc i => acc + i.val) 0 = 3 := by decide +kernel
example : (Fin.intCast (-1) : Fin 5) = 4 := by decide +kernel

/-! `Option` operations, comparisons and `==`. -/

example : List.finRange 3 = [0, 1, 2] := by decide
example : (some 3).isSome = true := rfl
example : (none : Option Nat).isNone = true := rfl
example : (some 3).getD 0 = 3 := rfl
example : (none : Option Nat).getD 5 = 5 := rfl
example : (some 3 == some 3) = true := rfl
example : (some 3 == some 4) = false := by decide
example : (some 3 == none) = false := rfl
example : some 3 = some 3 := by decide
example : some 3 ≠ none := by decide
example : (none : Option Nat) = none := by decide
example : some 3 ≠ some 4 := by decide
example : Option.lt (· < ·) (some 2) (some 3) := by decide
example : Option.lt (· < ·) none (some 3) := by decide
example : ¬ Option.le (· ≤ ·) (some 2) none := by decide
example : max (some 2) (some 5) = some 5 := by decide
example : min (some 2) (some 5) = some 2 := by decide
example : max (some 2) (some 5) = some 5 := rfl
example : max (some 2) none = some 2 := rfl
example : min none (some 2) = none := rfl
example : (some 3).filter (· >ᵇ 2) = some 3 := rfl
example : (some 3).filter (· == 4) = none := rfl
example : (some 3).filter (· == 4) = none := by decide
example : Option.guard (· == 3) 3 = some 3 := rfl
example : Option.guard (· == 3) 4 = none := by decide
example : (some 3).isEqSome 3 = true := rfl
example : (some 3).toList = [3] := rfl
example : (some 3).toArray = #[3] := by decide
example : Option.merge (· + ·) (some 2) (some 3) = some 5 := rfl
example : (some (some 3)).join = some 3 := rfl
example : ((some 3).bind fun x => some (x + 1)) = some 4 := rfl
example : ((none : Option Nat).or (some 1)) = some 1 := rfl
example : (some 3).all (· == 3) = true := rfl
example : (some 3).any (· == 4) = false := rfl
example : (some 3).pfilter (fun a _ => a == 3) = some 3 := rfl
example : 3 ∈ some 3 := by decide
example : ¬ (4 ∈ some 3) := by decide
example : (some 3).filterM (m := Id) (fun x => pure (x == 3)) = some 3 := rfl
example : (some 3).isSome = true := by decide
example : (some 3).map (· + 1) = some 4 := rfl
example : compare (some 2) (some 3) = .lt := by decide
example : (some 3).get rfl = 3 := rfl
example : (some 3).elim 0 (· + 1) = 4 := rfl
example : (∀ a ∈ some 3, a < 5) := by decide
example : (∃ a, a ∈ some 3 ∧ a = 3) := by decide
example : ((some 3).pelim 0 fun a _ => a + 1) = 4 := rfl
example : (some 3).getD 0 = 3 := by decide +kernel
example : (some 3).filter (· == 4) = none := by decide +kernel

/-! `UDecidable` instances for `Option` membership and order. -/

example [UDecidableEq α] (a : α) (o : Option α) : UDecidable (a ∈ o) := inferInstance
example (p : α → Prop) [UDecidablePred p] (o : Option α) : UDecidable (∃ a, a ∈ o ∧ p a) :=
  inferInstance
example (r : α → β → Prop) [UDecidableRel r] (a : Option α) (b : Option β) :
    UDecidable (Option.lt r a b) := inferInstance
example (r : α → β → Prop) [UDecidableRel r] (a : Option α) (b : Option β) :
    UDecidable (Option.le r a b) := inferInstance
example : 3 ∈ some 3 := by cbv
example : Option.lt (· < ·) (some 2) (some 3) := by cbv
example : ¬ Option.le (· ≤ ·) (some 2) none := by cbv

def existsBig (o : Option Nat) : Bool := UDecidable.decide (∃ a, a ∈ o ∧ a > 2)
def ltThree (o : Option Nat) : Bool := UDecidable.decide (Option.lt (· < ·) o (some 3))

/-- info: (true, false, true, true, false) -/
#guard_msgs in
#eval (existsBig (some 3), existsBig (some 1), ltThree (some 2), ltThree none, ltThree (some 5))

/-! Restated lemmas. -/

example (p : α → Bool) (a b : α) : (Option.guard p a).getD b = uif p a then a else b :=
  Option.getD_guard
example (o o' : Option α) : o.or o' = uif o.isSome then o else o' := Option.or_eq_ite
example (o : Option α) : o.toList.length = uif o.isSome then 1 else 0 := Option.length_toList
example (o : Option α) : o.toArray.size = uif o.isSome then 1 else 0 := Option.size_toArray
example (p : α → Bool) (x : α) :
    (Option.guard p x).attach = uif h : p x then some ⟨x, by simp_all⟩ else none :=
  Option.attach_guard
example (i : Fin (n + 1)) :
    ((i + 1 : Fin (n + 1)) : Nat) = uif i = Fin.last _ then (0 : Nat) else i + 1 :=
  Fin.val_add_one i
example [NeZero n] (x : Fin n) : (-x).val = uif x = 0 then 0 else n - x.val := Fin.val_neg x
example (i : Fin n) (m : Nat) :
    i.addNat? m = uif h : i + m < n then some ⟨i + m, h⟩ else none := Fin.addNat?_eq_dite
open Fin.IntCast in
example [NeZero n] (x : Int) :
    (x : Fin n) = uif 0 ≤ x then Fin.ofNat n x.natAbs else -Fin.ofNat n x.natAbs :=
  Fin.intCast_def x

example (p : Nat → Bool) (a : Nat) (h : p a = true) : (Option.guard p a).getD 0 = a := by
  simp [h]
example (o : Option Nat) (h : o.isSome) : o.toList.length = 1 := by
  simp [Option.length_toList, h]
example (i : Fin 5) (h : i.val + 2 < 5) : (i.addNat? 2).isSome := by
  simp [Fin.addNat?_eq_dite, h]
example (i : Fin 5) (h : 5 ≤ i.val + 2) : i.addNat? 2 = none := by
  grind
example (i : Fin (n + 1)) (h : i ≠ Fin.last n) : ((i + 1 : Fin (n + 1)) : Nat) = i + 1 := by
  simp [Fin.val_add_one, h]
example (x : Fin 7) (h : x ≠ 0) : (-x).val = 7 - x.val := by
  rw [Fin.val_neg]; split <;> simp_all
example (i : Fin 5) (m : Nat) : (i.addNat? m).isSome ↔ i + m < 5 := by
  unfold Fin.addNat?; split <;> simp_all
