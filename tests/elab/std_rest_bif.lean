import Std.Tactic.BVDecide
import Std.Time
import Std.Http
/-!
The remaining definitions in `Std` (the `bv_decide` checker, reflection and bitblaster, `Std.Sat`,
`Std.Time`, `Std.Http`, `Parsec`, `Sync`) use `bif` or dependent `bif` instead of a `Decidable`
`if`. These checks ensure that whatever reduced before still reduces, including the `Bool` helpers
that used to coerce propositions (`Year.Offset.isLeap`, the HTTP character classes), and that
`bv_decide` still proves small goals.
-/

open Std.Sat Std.Tactic.BVDecide

/-! `bv_decide`'s denotation is evaluated by the kernel when the reflection proof is checked. -/

example : (BVExpr.var 0 : BVExpr 8).eval (.leaf ⟨5#8⟩) = 5#8 := rfl
example : (BVExpr.var 0 : BVExpr 4).eval (.leaf ⟨255#8⟩) = 15#4 := by decide
example : BVLogicalExpr.eval (.leaf ⟨5#8⟩)
    (.literal (.bin (BVExpr.var 0 : BVExpr 8) .ult (.const 7#8))) = true := rfl
example : BVLogicalExpr.eval (.leaf ⟨5#8⟩)
    (.ite (.const true) (.literal (.getLsbD (BVExpr.var 0 : BVExpr 8) 0)) (.const false)) = true := by
  decide

/-! CNF clauses use `uif` (they run natively, the kernel never unfolds them), so `cbv` evaluates them. -/

example : ((CNF.Clause.empty.add 1 true).add 2 false).polarity 0 = true := by cbv
example : ((CNF.Clause.empty.add 1 true).add 2 false).polarity 1 = false := by cbv
example : ((CNF.Clause.empty.add 1 true).add 2 false).polarity 7 = false := by cbv

/-! Small `bv_decide` goals exercising the bitblaster and the LRAT checker. -/

example (x y : BitVec 8) : x &&& y = y &&& x := by bv_decide
example (x : BitVec 16) : x <<< 3 = x * 8 := by bv_decide
example (x y : BitVec 8) (h : x < y) : x ≠ y := by bv_decide
example (x : BitVec 8) (b : Bool) : (bif b then x else x) = x := by bv_decide
example (x y : BitVec 4) : (x - y) + y = x := by bv_decide
example (x : BitVec 8) : x >>> 1 ≤ x := by bv_decide
example (x : BitVec 8) : x.sshiftRight 7 = 0 ∨ x.sshiftRight 7 = -1 := by bv_decide

/-! `Std.Time`: calendar arithmetic on literals. `isLeap` coerced its propositions before. -/

open Std.Time

example : (Year.Offset.ofInt 2024).isLeap = true := by decide
example : (Year.Offset.ofInt 1900).isLeap = false := rfl
example : (PlainDate.ofYearMonthDay? 2024 2 29).isSome = true := by decide
example : (PlainDate.ofYearMonthDay? 2023 2 29).isSome = false := by decide
example : (PlainDate.ofYearMonthDayClip 2024 3 1).toEpochDay.val = 19783 := by decide
example : (PlainDate.ofEpochDay (Day.Offset.ofInt 19783)).month.val = 3 := by decide
example : (PlainDate.ofYearMonthDayClip 2024 2 28 |>.addDays 2).day.val = 1 := by decide
example : (PlainDate.ofYearMonthDayClip 2024 12 30).weekOfYear.val = 1 := by decide
example : (Year.Offset.weeks (Year.Offset.ofInt 2020)).val = 53 := by decide
example : (Month.Ordinal.cumulativeDays true 3).val = 60 := by decide
example : (HourMarker.toRelative 13).1.val = 1 := by decide
example : Duration.isZero (Duration.ofSeconds 0) = true := by decide

/-! `Bounded` conversions on concrete values. -/

example : (Internal.Bounded.LE.ofInt (lo := 0) (hi := 10) 5).isSome = true := by decide
example : (Internal.Bounded.LE.clip (lo := 0) (hi := 10) 15 (by decide)).val = 10 := by decide
example : (Internal.Bounded.LE.ofNat? (hi := 3) 4).isNone = true := by decide

/-! HTTP character classes (they coerced propositions before). -/

open Std.Http Std.Http.Internal.Char

example : isUnreserved '~'.toUInt8 = true := rfl
example : isSubDelims '$'.toUInt8 = true := by decide
example : isPChar '@'.toUInt8 = true := by decide
example : isQueryDataChar '&'.toUInt8 = false := by decide
example : isAlphaNum 'q'.toUInt8 = true := by decide
example : ctext '(' = false := by decide
example : etagc '#' = true := by decide
example : Status.isInformational .continue = true := by decide
example : Status.isRedirection .found = true := by decide
example : Status.isError .notFound = true := by decide
example : URI.isEncodedChar isUnreserved '%'.toUInt8 = true := by decide
example : URI.hexDigitToUInt8? 'a'.toUInt8 = some 10 := by decide
