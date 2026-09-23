/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Date.Unit.Day
public import Init.Transport

public section

namespace Std
namespace Time
namespace Week
open Internal

set_option linter.all true

/--
`Offset` represents an offset in weeks.
-/
newtype Offset := UnitVal (86400 * 7) with toUnitVal
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
The underlying value of the offset, in the unit's own scale.
-/
@[expose, inline] def Offset.val (offset : Offset) : Int := offset.toUnitVal.val

instance : OfNat Offset n := inferInstanceAs (OfNat (UnitVal (86400 * 7)) n)

namespace OfYear

/--
`Ordinal` represents a bounded value for weeks of a year, which ranges between 1 and 53.
-/
newtype Ordinal := Bounded.LE 1 53 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 1 (1 + (52 : Nat))) n)

instance : Inhabited Ordinal where
  default := 1

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 1 ≤ data ∧ data ≤ 53) : Ordinal :=
  .mk (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≥ 1 ∧ data ≤ 53 := by decide) : Ordinal :=
  .mk (Bounded.LE.ofNat' data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin 54) : Ordinal :=
  .mk (Bounded.LE.ofFin' data (by decide))

/--
Converts an `Ordinal` to an `Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Week.Offset :=
  .mk (UnitVal.ofInt ordinal.val)

end Ordinal
end OfYear

namespace Aligned

/--
`Ordinal` represents the aligned week number within a month, ranging between 1 and 5.
Aligned weeks are fixed 7-day slots counted from day 1 of the month: days 1-7 are
week 1, days 8-14 are week 2, and so on, independent of which weekday starts the month.
-/
newtype Ordinal := Bounded.LE 1 5 with toBounded
  deriving Repr, DecidableEq, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

instance : OfNat Ordinal n := inferInstanceAs (OfNat (Bounded.LE 1 (1 + (4 : Nat))) n)

instance : Inhabited Ordinal where
  default := 1

end Aligned

/--
`Ordinal` represents the number of weeks within a month, ranging between 1 and 6.
-/
newtype Ordinal := Bounded.LE 1 6 with toBounded
  deriving Repr, DecidableEq, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

instance : OfNat Ordinal n := inferInstanceAs (OfNat (Bounded.LE 1 (1 + (5 : Nat))) n)

instance : Inhabited Ordinal where
  default := 1

namespace Offset

/--
Creates an `Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Week.Offset :=
  .mk (UnitVal.ofInt data)

/--
Creates an `Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Week.Offset :=
  .mk (UnitVal.ofInt data)

/--
Convert `Week.Offset` into `Millisecond.Offset`.
-/
@[inline]
def toMilliseconds (weeks : Week.Offset) : Millisecond.Offset :=
  .mk (weeks.toUnitVal.mul 604800000 |>.cast (by decide +kernel))

/--
Convert `Millisecond.Offset` into `Week.Offset`.
-/
@[inline]
def ofMilliseconds (millis : Millisecond.Offset) : Week.Offset :=
  .mk (millis.toUnitVal.ediv 604800000 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Nanosecond.Offset`.
-/
@[inline]
def toNanoseconds (weeks : Week.Offset) : Nanosecond.Offset :=
  .mk (weeks.toUnitVal.mul 604800000000000 |>.cast (by decide +kernel))

/--
Convert `Nanosecond.Offset` into `Week.Offset`.
-/
@[inline]
def ofNanoseconds (nanos : Nanosecond.Offset) : Week.Offset :=
  .mk (nanos.toUnitVal.ediv 604800000000000 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Second.Offset`.
-/
@[inline]
def toSeconds (weeks : Week.Offset) : Second.Offset :=
  .mk (weeks.toUnitVal.mul 604800 |>.cast (by decide +kernel))

/--
Convert `Second.Offset` into `Week.Offset`.
-/
@[inline]
def ofSeconds (secs : Second.Offset) : Week.Offset :=
  .mk (secs.toUnitVal.ediv 604800 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Minute.Offset`.
-/
@[inline]
def toMinutes (weeks : Week.Offset) : Minute.Offset :=
  .mk (weeks.toUnitVal.mul 10080 |>.cast (by decide +kernel))

/--
Convert `Minute.Offset` into `Week.Offset`.
-/
@[inline]
def ofMinutes (minutes : Minute.Offset) : Week.Offset :=
  .mk (minutes.toUnitVal.ediv 10080 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Hour.Offset`.
-/
@[inline]
def toHours (weeks : Week.Offset) : Hour.Offset :=
  .mk (weeks.toUnitVal.mul 168 |>.cast (by decide +kernel))

/--
Convert `Hour.Offset` into `Week.Offset`.
-/
@[inline]
def ofHours (hours : Hour.Offset) : Week.Offset :=
  .mk (hours.toUnitVal.ediv 168 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (weeks : Week.Offset) : Day.Offset :=
  .mk (weeks.toUnitVal.mul 7 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Week.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Week.Offset :=
  .mk (days.toUnitVal.ediv 7)

end Offset
end Week
end Time
end Std
