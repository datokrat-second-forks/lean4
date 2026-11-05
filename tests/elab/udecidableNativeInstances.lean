import Lean

/-!
Types that `uif` reached only through the `Decidable` bridge `UDecidable.ofDecidable` in the `uif`
pilot have native `UDecidable` instances (ADR-65).
-/

open Lean

/-- info: UDecidable.instNameEq `a `b -/
#guard_msgs in #synth UDecidable ((`a : Name) = `b)
/-- info: UDecidable.instInt16Le 1 2 -/
#guard_msgs in #synth UDecidable ((1 : Int16) ≤ 2)
/-- info: UDecidable.instInt64Eq 1 2 -/
#guard_msgs in #synth UDecidable ((1 : Int64) = 2)
/-- info: UDecidable.instFloatLt 1 2 -/
#guard_msgs in #synth UDecidable ((1 : Float) < 2)
/-- info: UDecidable.instFloat32Le 1 2 -/
#guard_msgs in #synth UDecidable ((1 : Float32) ≤ 2)
/-- info: JsonNumber.instUDecidableLt 1 2 -/
#guard_msgs in #synth UDecidable ((1 : JsonNumber) < 2)
/-- info: UDecidable.instProdLexLt (1, 2) (3, 4) -/
#guard_msgs in #synth UDecidable (Prod.lexLt (1, 2) (3, 4))
/-- info: UDecidable.instStringPosRawLe 0 0 -/
#guard_msgs in #synth UDecidable ((0 : String.Pos.Raw) ≤ 0)
/-- info: UDecidable.instStringPosEq "a".startPos "a".endPos -/
#guard_msgs in #synth UDecidable ("a".startPos = "a".endPos)
/-- info: Compiler.LCNF.Phase.instUDecidableLt -/
#guard_msgs in #synth UDecidable (Compiler.LCNF.Phase.base < .mono)
/-- info: Compiler.LCNF.Phase.base.instUDecidableEq Compiler.LCNF.Phase.mono -/
#guard_msgs in #synth UDecidable (Compiler.LCNF.Phase.base = .mono)

structure P where
  x : Nat
  deriving BEq, ReflBEq, LawfulBEq

/-- info: UDecidable.instListMemOfLawfulBEq { x := 1 } [] -/
#guard_msgs in #synth UDecidable (P.mk 1 ∈ ([] : List P))

-- The implementations compute.
/-- info: (true, false, true, true) -/
#guard_msgs in
#eval (UDecidable.decide ((`a.b : Name) = `a.b), UDecidable.decide ((3 : Int16) ≤ -2),
  UDecidable.decide (Prod.lexLt (1, 5) (2, 0)), UDecidable.decide ((⟨3⟩ : String.Pos.Raw) < ⟨4⟩))
