/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Date.Unit.Month
public import Init.Transport

public section

namespace Std
namespace Time
namespace Year
open Internal

set_option linter.all true

/--
Defines the different eras.
-/
inductive Era
  /-- The era before the Common Era (BCE), always represents a date before year 0. -/
  | bce

  /-- The Common Era (CE), represents dates from year 0 onwards. -/
  | ce
deriving Repr, Inhabited

instance : ToString Era where
  toString
    | .bce => "BCE"
    | .ce => "CE"

/--
`Offset` represents a year offset, defined as an `Int`.
-/
newtype Offset := Int with toInt
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
Converts the `Year` offset to an `Int`.
-/
add_decl_doc Offset.toInt

instance : OfNat Offset n := inferInstanceAs (OfNat Int n)

namespace Offset

/--
Creates an `Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Offset :=
  .mk (Int.ofNat data)

/--
Creates an `Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Offset :=
  .mk data

/--
Converts the `Year` offset to a `Month` offset.
-/
@[inline]
def toMonths (val : Offset) : Month.Offset :=
  .mk (val.toInt.mul 12)

/--
Determines if a year is a leap year in the proleptic Gregorian calendar.
-/
@[inline]
def isLeap (y : Offset) : Bool :=
  y.toInt.tmod 4 = 0 ∧ (y.toInt.tmod 100 ≠ 0 ∨ y.toInt.tmod 400 = 0)

/--
Returns the `Era` of the `Year`.
-/
def era (year : Offset) : Era :=
  if year.toInt ≥ 1
    then .ce
    else .bce

/--
Calculates the number of days in the specified `year`.
-/
def days (year : Offset) : Bounded.LE 365 366 :=
  if year.isLeap
    then .mk 366 (by decide)
    else .mk 365 (by decide)

/--
Calculates the number of weeks in the specified `year`.
-/
def weeks (year : Offset) : Bounded.LE 52 53 :=
  let p (year : Offset) := Bounded.LE.byEmod (year.toInt + year.toInt/4 - year.toInt/100 + year.toInt/400) 7 (by decide)

  let add : Bounded.LE 0 1 :=
    if (p year).val = 4 ∨ (p (year - 1)).val = 3
      then Bounded.LE.ofNat 1 (by decide)
      else Bounded.LE.ofNat 0 (by decide)

  Bounded.LE.exact 52 |>.addBounds add

/--
Checks if the given date is valid for the specified year, month, and day.
-/
@[inline]
abbrev Valid (year : Year.Offset) (month : Month.Ordinal) (day : Day.Ordinal) : Prop :=
  day ≤ month.days year.isLeap

end Offset
end Year
end Time
end Std
