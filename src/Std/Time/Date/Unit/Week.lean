/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Date.Unit.Day

public section

namespace Std
namespace Time
namespace Week
open Internal

set_option linter.all true

/--
`Offset` represents an offset in weeks.
-/
@[expose] def Offset : Type := UnitVal (86400 * 7)
deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString

/--
Views an `Offset` as the `UnitVal` it is defined as.
-/
@[expose, inline]
def Offset.toUnitVal (x : Offset) : UnitVal (86400 * 7) := smartCast

/--
Creates an `Offset` from the `UnitVal` it is defined as.
-/
@[expose, inline]
def Offset.ofUnitVal (x : UnitVal (86400 * 7)) : Offset := smartCast

instance {x y : Offset} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toUnitVal.val ≤ y.toUnitVal.val))

instance {x y : Offset} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toUnitVal.val < y.toUnitVal.val))

instance : OfNat Offset n := ⟨.ofUnitVal (UnitVal.ofNat n)⟩

instance : Ord Offset := inferInstanceAs <| Ord (UnitVal _)

instance : TransOrd Offset := inferInstanceAs <| TransOrd (UnitVal _)

instance : LawfulEqOrd Offset := inferInstanceAs <| LawfulEqOrd (UnitVal _)

namespace OfYear

/--
`Ordinal` represents a bounded value for weeks of a year, which ranges between 1 and 53.
-/
@[expose] def Ordinal := Bounded.LE 1 53
deriving Repr, DecidableEq, LE, LT

/--
Views an `Ordinal` as the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.toBounded (x : Ordinal) : Bounded.LE 1 53 := smartCast

/--
Creates an `Ordinal` from the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.ofBounded (x : Bounded.LE 1 53) : Ordinal := smartCast

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 1 (1 + (52 : Nat))) n)

instance {x y : Ordinal} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toBounded.toSubtype.val ≤ y.toBounded.toSubtype.val))

instance {x y : Ordinal} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toBounded.toSubtype.val < y.toBounded.toSubtype.val))

instance : Inhabited Ordinal where
  default := 1

instance : Ord Ordinal := inferInstanceAs <| Ord (Bounded.LE 1 _)

instance : TransOrd Ordinal := inferInstanceAs <| TransOrd (Bounded.LE 1 _)

instance : LawfulEqOrd Ordinal := inferInstanceAs <| LawfulEqOrd (Bounded.LE 1 _)

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 1 ≤ data ∧ data ≤ 53) : Ordinal :=
  .ofBounded (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≥ 1 ∧ data ≤ 53 := by decide) : Ordinal :=
  .ofBounded (Bounded.LE.ofNat' data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin 54) : Ordinal :=
  .ofBounded (Bounded.LE.ofFin' data (by decide))

/--
Converts an `Ordinal` to an `Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Week.Offset :=
  .ofUnitVal (UnitVal.ofInt ordinal.toBounded.toSubtype.val)

end Ordinal
end OfYear

namespace Aligned

/--
`Ordinal` represents the aligned week number within a month, ranging between 1 and 5.
Aligned weeks are fixed 7-day slots counted from day 1 of the month: days 1-7 are
week 1, days 8-14 are week 2, and so on, independent of which weekday starts the month.
-/
@[expose] def Ordinal := Bounded.LE 1 5
deriving Repr, DecidableEq

/--
Views an `Ordinal` as the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.toBounded (x : Ordinal) : Bounded.LE 1 5 := smartCast

/--
Creates an `Ordinal` from the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.ofBounded (x : Bounded.LE 1 5) : Ordinal := smartCast

instance : OfNat Ordinal n := inferInstanceAs (OfNat (Bounded.LE 1 (1 + (4 : Nat))) n)

instance : Inhabited Ordinal where
  default := 1

instance : Ord Ordinal := inferInstanceAs <| Ord (Bounded.LE 1 _)

instance : TransOrd Ordinal := inferInstanceAs <| TransOrd (Bounded.LE 1 _)

instance : LawfulEqOrd Ordinal := inferInstanceAs <| LawfulEqOrd (Bounded.LE 1 _)

end Aligned

/--
`Ordinal` represents the number of weeks within a month, ranging between 1 and 6.
-/
@[expose] def Ordinal := Bounded.LE 1 6
deriving Repr, DecidableEq

/--
Views an `Ordinal` as the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.toBounded (x : Ordinal) : Bounded.LE 1 6 := smartCast

/--
Creates an `Ordinal` from the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.ofBounded (x : Bounded.LE 1 6) : Ordinal := smartCast

instance : OfNat Ordinal n := inferInstanceAs (OfNat (Bounded.LE 1 (1 + (5 : Nat))) n)

instance : Inhabited Ordinal where
  default := 1

instance : Ord Ordinal := inferInstanceAs <| Ord (Bounded.LE 1 _)

instance : TransOrd Ordinal := inferInstanceAs <| TransOrd (Bounded.LE 1 _)

instance : LawfulEqOrd Ordinal := inferInstanceAs <| LawfulEqOrd (Bounded.LE 1 _)

namespace Offset

/--
Creates an `Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Week.Offset :=
  .ofUnitVal (UnitVal.ofInt data)

/--
Creates an `Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Week.Offset :=
  .ofUnitVal (UnitVal.ofInt data)

/--
Convert `Week.Offset` into `Millisecond.Offset`.
-/
@[inline]
def toMilliseconds (weeks : Week.Offset) : Millisecond.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 604800000 |>.cast (by decide +kernel))

/--
Convert `Millisecond.Offset` into `Week.Offset`.
-/
@[inline]
def ofMilliseconds (millis : Millisecond.Offset) : Week.Offset :=
  .ofUnitVal (millis.toUnitVal.ediv 604800000 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Nanosecond.Offset`.
-/
@[inline]
def toNanoseconds (weeks : Week.Offset) : Nanosecond.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 604800000000000 |>.cast (by decide +kernel))

/--
Convert `Nanosecond.Offset` into `Week.Offset`.
-/
@[inline]
def ofNanoseconds (nanos : Nanosecond.Offset) : Week.Offset :=
  .ofUnitVal (nanos.toUnitVal.ediv 604800000000000 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Second.Offset`.
-/
@[inline]
def toSeconds (weeks : Week.Offset) : Second.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 604800 |>.cast (by decide +kernel))

/--
Convert `Second.Offset` into `Week.Offset`.
-/
@[inline]
def ofSeconds (secs : Second.Offset) : Week.Offset :=
  .ofUnitVal (secs.toUnitVal.ediv 604800 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Minute.Offset`.
-/
@[inline]
def toMinutes (weeks : Week.Offset) : Minute.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 10080 |>.cast (by decide +kernel))

/--
Convert `Minute.Offset` into `Week.Offset`.
-/
@[inline]
def ofMinutes (minutes : Minute.Offset) : Week.Offset :=
  .ofUnitVal (minutes.toUnitVal.ediv 10080 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Hour.Offset`.
-/
@[inline]
def toHours (weeks : Week.Offset) : Hour.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 168 |>.cast (by decide +kernel))

/--
Convert `Hour.Offset` into `Week.Offset`.
-/
@[inline]
def ofHours (hours : Hour.Offset) : Week.Offset :=
  .ofUnitVal (hours.toUnitVal.ediv 168 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (weeks : Week.Offset) : Day.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 7 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Week.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Week.Offset :=
  .ofUnitVal (days.toUnitVal.ediv 7)

end Offset
end Week
end Time
end Std
