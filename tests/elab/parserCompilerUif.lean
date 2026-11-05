import Lean

/-!
Parser definitions may branch with `uif`: the parser compiler finds the formatter and parenthesizer
combinators for `UDecidable.ite`, as it does for `ite` and `cond`.
-/

open Lean Parser

def uifSuffix (n : Nat) : Parser :=
  uif n < 1 then symbol "zero" else symbol "positive"

@[term_parser] def uifTest := leading_parser "uif_test " >> uifSuffix 0 >> ppSpace >> termParser maxPrec

/-- info: uifSuffix.formatter : Nat → PrettyPrinter.Formatter -/
#guard_msgs in
#check @uifSuffix.formatter

/-- info: uifSuffix.parenthesizer : Nat → PrettyPrinter.Parenthesizer -/
#guard_msgs in
#check @uifSuffix.parenthesizer

macro_rules
  | `(uif_test zero $e) => pure e

/-- info: 1 -/
#guard_msgs in
#eval uif_test zero 1

open PrettyPrinter in
/-- info: uif_test zero 1 -/
#guard_msgs in
#eval show CoreM Format from do ppTerm (← `(uif_test zero 1))
