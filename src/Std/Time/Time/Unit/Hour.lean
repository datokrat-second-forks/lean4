/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Unit.Minute
public import Init.Transport

public section

namespace Std
namespace Time
namespace Hour
open Internal

set_option linter.all true

/--
`Ordinal` represents a bounded value for hours, ranging from 0 to 23.
-/
@[expose] newtype Ordinal := Bounded.LE 0 23 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 0 (0 + (23 : Nat))) n)

instance : Inhabited Ordinal where
  default := 0

/--
`Offset` represents an offset in hours, defined as an `Int`. This can be used to express durations
or differences in hours.
-/
@[expose] newtype Offset := UnitVal 3600 with toUnitVal
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
The underlying value of the offset, in the unit's own scale.
-/
@[expose, inline] def Offset.val (offset : Offset) : Int := offset.toUnitVal.val

instance : OfNat Offset n := inferInstanceAs (OfNat (UnitVal 3600) n)

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ 23) : Ordinal :=
  .mk (Bounded.LE.mk data h)

/--
Converts an `Ordinal` into a relative hour in the range of 1 to 12.
-/
def toRelative (ordinal : Ordinal) : Bounded.LE 1 12 :=
  (ordinal.toBounded.add 11).emod 12 (by decide) |>.add 1

/--
Converts an Ordinal into a 1-based hour representation within the range of 1 to 24.
-/
def shiftTo1BasedHour (ordinal : Ordinal) : Bounded.LE 1 24 :=
  if h : ordinal.val < 1
    then Internal.Bounded.LE.ofNatWrapping 24 (by decide)
    else ordinal.toBounded.truncateBottom (Int.not_lt.mp h) |>.expandTop (by decide)
/--
Creates an `Ordinal` from a natural number, ensuring the value is within the valid bounds for hours.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ 23) : Ordinal :=
  .mk (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin` value.
-/
@[inline]
def ofFin (data : Fin 24) : Ordinal :=
  .mk (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Offset`, which represents the duration in hours as an integer value.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Offset :=
  .mk (UnitVal.ofInt ordinal.val)

end Ordinal
namespace Offset

/--
Creates an `Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Offset :=
  .mk (UnitVal.ofInt data)

/--
Creates an `Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Offset :=
  .mk (UnitVal.ofInt data)

end Offset
end Hour
end Time
end Std
