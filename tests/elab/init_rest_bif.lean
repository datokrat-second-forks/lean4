import Lean.Data.RArray
/-!
Definitions in `Init` outside the collections and arithmetic (meta helpers, `Name`/`Syntax`
functions, `Format`, `Float` and its model, file paths, URIs, `guard`, `Random`, `AC`) use `bif` or
dependent `bif` instead of a `Decidable` `if`. These checks ensure that whatever reduced before
still reduces, and that the `Bool` helpers that used to coerce propositions reduce again.
-/

open Lean

/-!
`guard` takes a `UDecidable` instance (ADR-66), so it no longer reduces by `rfl` or `decide`;
`cbv` and `simp` evaluate it.
-/

example : (do guard (1 < 2); pure 3 : Option Nat) = some 3 := by cbv
example : (do guard (2 < 1); pure 3 : Option Nat) = none := by cbv
example : ([1, 2, 3].filterMap fun x => (do guard (x > 1); pure x : Option Nat)) = [2, 3] := by
  cbv
example : (do guard (2 < 1); pure 3 : Option Nat) = none := by simp [guard]
example : (do guard (1 < 2); pure 3 : Option Nat) = some 3 := by simp [guard]


/-! `Name` and `Syntax` helpers. -/

example : (`a.b).replacePrefix `a `c = `c.b := rfl
example : (`a.b).replacePrefix `a `c = `c.b := by decide
example : (`a.b).eraseSuffix? `b = some `a := rfl
example : Syntax.isLit? numLitKind (Syntax.node .none numLitKind #[Syntax.atom .none "3"]) = some "3" := rfl
example : Syntax.hasArgs (Syntax.node .none `a #[.missing]) = true := rfl

/-! Character classes for identifiers (previously coerced propositions). -/

example : isIdFirst 'a' = true := rfl
example : isLetterLike 'α' = true := rfl
example : isLetterLike 'λ' = false := rfl
example : isIdBeginEscape '«' = true := rfl
example : isIdRest '_' = true := rfl
example : isIdFirstAscii 'a'.toUInt8 = true := rfl
example : isIdRestAscii '1'.toUInt8 = true := rfl
example : isSubScriptAlnum '₁' = true := rfl

/-! `toString` on small values. -/

example : toString (5 : Nat) = "5" := rfl
example : toString 'a' = "a" := rfl
example : toString true = "true" := rfl
example : toString [1, 2] = "[1, 2]" := by decide +kernel

/-! `Float` and its model. -/

example : (0.1 : Float) + 0.2 != 0.3 := rfl
example : (12312.123124 : Float) + 0.0002321 = 12312.123356099999 := rfl
example : (1.0 : Float) < 2.0 := by decide
example : (1.0 : Float).lt 2.0 = true := rfl
example : (1.0 : Float32).le 2.0 = true := rfl
example : Float.Model.UnpackedFloat.accuracyOfFraction 0 3 = .exact := rfl
example : Float.Model.UnpackedFloat.Sign.ofBitVec 0#1 = .positive := rfl

/-! File paths and URIs. -/

example : System.Uri.UriEscape.uriEscapeAsciiChar ' ' = "%20" := by decide +kernel

/-! Miscellaneous. -/

example : Lean.Data.AC.insert 2 [1, 3] = [1, 2, 3] := rfl
example : Lean.Data.AC.mergeIdem [1, 1, 2] = [1, 2] := rfl
example : Lean.Data.AC.sort [3, 1, 2] = [1, 2, 3] := by decide
example : (stdSplit ⟨1, 1⟩).1.s1 = 2 := rfl
example : (RArray.branch 1 (.leaf 'a') (.leaf 'b')).get 0 = 'a' := rfl
example : (Stream.next? (#[1, 2, 3].toSubarray 0 2)).map (·.1) = some 1 := by decide
example : (Stream.next? ([:3] : Std.Legacy.Range)).map (·.1) = some 0 := by decide
example : (Std.Queue.empty.enqueue 1 |>.dequeue?).map (·.1) = some 1 := by decide

/-! Compiled code. -/

/-- info: (some 31, some 'a', some "ab", some (15, true, 1)) -/
#guard_msgs in
#eval (Syntax.decodeNatLitVal? "0x1f", Syntax.decodeCharLit "'a'", Syntax.decodeStrLit "\"ab\"",
  Syntax.decodeScientificLitVal? "1.5")

/-- info: (some "b.txt", some { toString := "/a" }, "file:///a%20b", some { toString := "/a b" }) -/
#guard_msgs in
#eval ((System.FilePath.mk "a/b.txt").fileName, (System.FilePath.mk "/a/b").parent,
  System.Uri.pathToUri "/a b", System.Uri.fileUriToPath? "file:///a%20b")

/-- info: ["-1.500000", "(-1.500000)", "2.000000"] -/
#guard_msgs in
#eval [toString (-1.5 : Float), (reprPrec (-1.5 : Float) 1024).pretty, toString (2.0 : Float32)]

/-- info: "`a.«b c».d" -/
#guard_msgs in
#eval toString (repr (Name.mkStr (Name.mkStr `a "b c") "d"))
