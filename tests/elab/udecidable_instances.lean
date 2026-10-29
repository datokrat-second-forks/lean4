import Lean

/-!
`UDecidable` instances for core types, type formers and bounded quantifiers are found directly
rather than through `UDecidable.ofDecidable`, and compiled code computes them.
-/

open Lean Meta Elab Command in
/-- Fails if the synthesized `UDecidable` instance for `p` uses `UDecidable.ofDecidable`. -/
elab "#check_native " p:term : command => runTermElabM fun _ => do
  let p ← Term.elabTerm p (some (mkSort .zero))
  Term.synthesizeSyntheticMVarsNoPostponing
  let inst ← synthInstance (mkApp (mkConst ``UDecidable) (← instantiateMVars p))
  if (← instantiateMVars inst).find? (·.isConstOf ``UDecidable.ofDecidable) |>.isSome then
    throwError "instance for {p} uses `UDecidable.ofDecidable`: {inst}"

variable (n : Nat) (i j : Int) (f g : Fin 5) (c d : Char) (s t : String) (b : Bool) (p q : Prop)
  [UDecidable p] [UDecidable q]

#check_native True
#check_native False
#check_native p → q
#check_native p ↔ q
#check_native ¬p ∧ (p ∨ q)
#check_native b = true
#check_native i = j
#check_native i ≤ j
#check_native i < j
#check_native f = g
#check_native f ≤ g
#check_native f < g
#check_native (1 : UInt8) ≤ 2
#check_native (1 : UInt16) < 2
#check_native (1 : UInt32) = 2
#check_native (1 : UInt64) ≤ 2
#check_native (1 : USize) < 2
#check_native c = d
#check_native c ≤ d
#check_native c < d
#check_native s = t
#check_native (some n, [i]) = (none, [])
#check_native (Sum.inl n : Nat ⊕ Int) = .inr i
#check_native (⟨n, Nat.le_refl n⟩ : { k // k ≤ n }) = ⟨n, Nat.le_refl n⟩
#check_native #[s] = #[t]
#check_native () = ()
#check_native ∀ k, k < n → k ≠ 3
#check_native ∀ k, k ≤ n → k ≠ 3
#check_native ∀ k : Fin n, k.val ≠ 3
#check_native ∃ k, k < n ∧ k = 3
#check_native ∃ k, k ≤ n ∧ k = 3
#check_native ∃ k : Fin n, k.val = 3
#check_native ∀ b : Bool, b = true
#check_native ∃ b : Bool, b = true

/-! `String.lt` has no native instance yet, so the checker rejects it. -/

/-- error: instance for "a" < "b" uses `UDecidable.ofDecidable`: UDecidable.ofDecidable ("a" < "b") -/
#guard_msgs in
#check_native "a" < "b"

/-- info: [true, false, true, false, true, true, false] -/
#guard_msgs in
#eval [UDecidable.decide ((-3 : Int) ≤ -3), UDecidable.decide ((-3 : Int) < -3),
  UDecidable.decide ((-3 : Int) = -3), UDecidable.decide ((200 : UInt8) < 100),
  UDecidable.decide ((200 : UInt64) ≥ 100), UDecidable.decide ('a' < 'b'),
  UDecidable.decide ("ab" = "ba")]

/-- info: [true, false, false, true, false] -/
#guard_msgs in
#eval [UDecidable.decide ((some 1, [2, 3]) = (some 1, [2, 3])),
  UDecidable.decide ([1, 2] = [1, 3]), UDecidable.decide (#[1, 2] = #[1, 2, 3]),
  UDecidable.decide (#["a", "b"] = #["a", "b"]),
  UDecidable.decide ((Sum.inl 1 : Nat ⊕ Nat) = .inr 1)]

/-- info: [true, false, true, false, true, false] -/
#guard_msgs in
#eval [UDecidable.decide (∀ k, k < 10 → k * k < 100), UDecidable.decide (∀ k, k ≤ 10 → k * k < 100),
  UDecidable.decide (∃ k, k < 10 ∧ k * k = 49), UDecidable.decide (∃ k : Fin 7, k.val * k.val = 49),
  UDecidable.decide (∀ b : Bool, (b && true) = b), UDecidable.decide (∃ b : Bool, b ≠ b)]

/-- info: [true, false, true, false] -/
#guard_msgs in
#eval [UDecidable.decide (True → 1 = 1), UDecidable.decide (1 = 1 → 1 = 2),
  UDecidable.decide (1 = 2 ↔ 2 = 3), UDecidable.decide (1 = 1 ↔ 2 = 3)]

/-! Comparisons of fixed-width integers call the runtime primitives. -/

/--
trace: [Compiler.IR] [result]
    def leUInt8 (x_1 : u8) (x_2 : u8) : u8 :=
      let x_3 : u8 := UInt8.Internal.ble x_1 x_2;
      ret x_3
    def leUInt8._boxed (x_1 : tagged) (x_2 : tagged) : tagged :=
      let x_3 : u8 := unbox x_1;
      let x_4 : u8 := unbox x_2;
      let x_5 : u8 := leUInt8 x_3 x_4;
      let x_6 : tagged := box x_5;
      ret x_6
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def leUInt8 (a b : UInt8) : Bool := UDecidable.decide (a ≤ b)
