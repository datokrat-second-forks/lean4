/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Date.Unit.Month

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
@[expose] newtype Offset := Int with toInt

/--
Converts the `Year` offset to an `Int`.
-/
add_decl_doc Offset.toInt

theorem Offset.toInt_inj {x y : Offset} (h : x.toInt = y.toInt) : x = y :=
  congrArg Offset.mk h

instance : Repr Offset where reprPrec offset prec := reprPrec offset.toInt prec

instance : ToString Offset where toString offset := toString offset.toInt

instance : Inhabited Offset where default := .mk default

instance : DecidableEq Offset := fun x y =>
  decidable_of_iff (x.toInt = y.toInt) ⟨Offset.toInt_inj, congrArg Offset.toInt⟩

instance : Add Offset where add x y := .mk (x.toInt + y.toInt)

instance : Sub Offset where sub x y := .mk (x.toInt - y.toInt)

instance : Neg Offset where neg x := .mk (-x.toInt)

instance : LE Offset where le x y := x.toInt ≤ y.toInt

instance : LT Offset where lt x y := x.toInt < y.toInt

instance : Ord Offset where compare x y := compare x.toInt y.toInt

instance : OfNat Offset n := ⟨.mk (Int.ofNat n)⟩

instance {x y : Offset} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toInt ≤ y.toInt))

instance {x y : Offset} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toInt < y.toInt))

instance : OrientedOrd Offset := ⟨OrientedOrd.eq_swap (α := Int)⟩

instance : TransOrd Offset := ⟨TransOrd.isLE_trans (α := Int)⟩

instance : LawfulEqOrd Offset :=
  ⟨fun {_ _} h => Offset.toInt_inj (LawfulEqOrd.eq_of_compare h)⟩

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
