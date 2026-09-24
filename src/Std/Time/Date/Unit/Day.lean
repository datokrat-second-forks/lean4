/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time
public import Init.Transport

public section

namespace Std
namespace Time
namespace Day
open Lean Internal

set_option linter.all true

/--
`Ordinal` represents a bounded value for days, which ranges between 1 and 31.
-/
newtype Ordinal := Bounded.LE 1 31 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

/-- Converts the ordinal to an `Int`. -/
abbrev Ordinal.toInt (ordinal : Ordinal) : Int := ordinal.toBounded.toInt

/-- Converts the ordinal to a `Nat`. -/
abbrev Ordinal.toNat (ordinal : Ordinal) : Nat := ordinal.toBounded.toNat

/-- Converts the ordinal to a `Fin`. -/
abbrev Ordinal.toFin (ordinal : Ordinal) (h₀ : 0 ≤ (1 : Int)) : Fin ((31 : Int) + 1).toNat :=
  ordinal.toBounded.toFin h₀

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 1 (1 + (30 : Nat))) n)

instance : Inhabited Ordinal where default := 1

/--
`Offset` represents an offset in days. It is defined as an `Int` with a base unit of 86400
(the number of seconds in a day).
-/
newtype Offset := UnitVal 86400 with toUnitVal
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
The underlying value of the offset, in the unit's own scale.
-/
abbrev Offset.val (offset : Offset) : Int := offset.toUnitVal.val

/-- Converts the offset to an `Int`, in the unit's own scale. -/
abbrev Offset.toInt (offset : Offset) : Int := offset.toUnitVal.toInt

instance : OfNat Offset n := inferInstanceAs (OfNat (UnitVal 86400) n)

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 1 ≤ data ∧ data ≤ 31) : Ordinal :=
  .mk (Bounded.LE.mk data h)

/--
`OfYear` represents the day ordinal within a year, which can be bounded between 1 and 365 or 366,
depending on whether it's a leap year.
-/
newtype OfYear (leap : Bool) := Bounded.LE 1 (.ofNat (if leap then 366 else 365))
  with toBounded
  deriving Repr, ToString, DecidableEq, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev OfYear.val (ordinal : OfYear leap) : Int := ordinal.toBounded.val

/-- Converts the ordinal to an `Int`. -/
abbrev OfYear.toInt (ordinal : OfYear leap) : Int := ordinal.toBounded.toInt

/-- Converts the ordinal to a `Nat`. -/
abbrev OfYear.toNat (ordinal : OfYear leap) : Nat := ordinal.toBounded.toNat

/-- Converts the ordinal to a `Fin`. -/
abbrev OfYear.toFin (ordinal : OfYear leap) (h₀ : 0 ≤ (1 : Int)) :
    Fin (Int.ofNat (if leap then 366 else 365) + 1).toNat :=
  ordinal.toBounded.toFin h₀

namespace OfYear

/--
Creates an ordinal for a specific day within the year, ensuring that the provided day (`data`)
is within the valid range for the year, which can be 1 to 365 or 366 for leap years.
-/
@[inline]
def ofNat (data : Nat) (h : data ≥ 1 ∧ data ≤ (if leap then 366 else 365) := by decide) : OfYear leap :=
  .mk (Bounded.LE.ofNat' data h)

end OfYear

instance : OfNat (Ordinal.OfYear leap) n :=
  match leap with
  | true => inferInstanceAs (OfNat (Bounded.LE 1 (1 + (365 : Nat))) n)
  | false => inferInstanceAs (OfNat (Bounded.LE 1 (1 + (364 : Nat))) n)

instance : Inhabited (Ordinal.OfYear leap) where
  default := .mk (by
    refine ⟨1, And.intro (by decide) ?_⟩
    split <;> simp)

/--
Creates an ordinal from a natural number, ensuring the number is within the valid range
for days of a month (1 to 31).
-/
@[inline]
def ofNat (data : Nat) (h : data ≥ 1 ∧ data ≤ 31 := by decide) : Ordinal :=
  .mk (Bounded.LE.ofNat' data h)

/--
Creates an ordinal from a `Fin` value, ensuring it is within the valid range for days of the month (1 to 31).
If the `Fin` value is 0, it is converted to 1.
-/
@[inline]
def ofFin (data : Fin 32) : Ordinal :=
  .mk (Bounded.LE.ofFin' data (by decide))

/--
Converts an `Ordinal` to an `Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Offset :=
  .mk (UnitVal.ofInt ordinal.val)

namespace OfYear

/--
Converts an `OfYear` ordinal to a `Offset`.
-/
def toOffset (ofYear : OfYear leap) : Offset :=
  .mk (UnitVal.ofInt ofYear.val)

end OfYear
end Ordinal

namespace Offset

/--
Converts an `Offset` to an `Ordinal`.
-/
@[inline]
def toOrdinal (off : Day.Offset) (h : off.val ≥ 1 ∧ off.val ≤ 31) : Ordinal :=
  .mk (Bounded.LE.mk off.val h)

/--
Creates an `Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Day.Offset :=
  .mk (UnitVal.ofInt data)

/--
Creates an `Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Day.Offset :=
  .mk (UnitVal.ofInt data)

/--
Convert `Day.Offset` into `Nanosecond.Offset`.
-/
@[inline]
def toNanoseconds (days : Day.Offset) : Nanosecond.Offset :=
  .mk (days.toUnitVal.mul 86400000000000 |>.cast (by decide +kernel))

/--
Convert `Nanosecond.Offset` into `Day.Offset`.
-/
@[inline]
def ofNanoseconds (ns : Nanosecond.Offset) : Day.Offset :=
  .mk (ns.toUnitVal.ediv 86400000000000 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Millisecond.Offset`.
-/
@[inline]
def toMilliseconds (days : Day.Offset) : Millisecond.Offset :=
  .mk (days.toUnitVal.mul 86400000 |>.cast (by decide +kernel))

/--
Convert `Millisecond.Offset` into `Day.Offset`.
-/
@[inline]
def ofMilliseconds (ms : Millisecond.Offset) : Day.Offset :=
  .mk (ms.toUnitVal.ediv 86400000 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Second.Offset`.
-/
@[inline]
def toSeconds (days : Day.Offset) : Second.Offset :=
  .mk (days.toUnitVal.mul 86400 |>.cast (by decide +kernel))

/--
Convert `Second.Offset` into `Day.Offset`.
-/
@[inline]
def ofSeconds (secs : Second.Offset) : Day.Offset :=
  .mk (secs.toUnitVal.ediv 86400 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Minute.Offset`.
-/
@[inline]
def toMinutes (days : Day.Offset) : Minute.Offset :=
  .mk (days.toUnitVal.mul 1440 |>.cast (by decide +kernel))

/--
Convert `Minute.Offset` into `Day.Offset`.
-/
@[inline]
def ofMinutes (minutes : Minute.Offset) : Day.Offset :=
  .mk (minutes.toUnitVal.ediv 1440 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Hour.Offset`.
-/
@[inline]
def toHours (days : Day.Offset) : Hour.Offset :=
  .mk (days.toUnitVal.mul 24 |>.cast (by decide +kernel))

/--
Convert `Hour.Offset` into `Day.Offset`.
-/
@[inline]
def ofHours (hours : Hour.Offset) : Day.Offset :=
  .mk (hours.toUnitVal.ediv 24 |>.cast (by decide +kernel))

end Offset
end Day
end Time
end Std
