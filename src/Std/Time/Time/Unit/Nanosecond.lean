/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Internal
public import Init.Transport

public section

namespace Std
namespace Time
namespace Nanosecond
open Internal

set_option linter.all true

/--
`Ordinal` represents a nanosecond value that is bounded between 0 and 999,999,999 nanoseconds.
-/
newtype Ordinal := Bounded.LE 0 999999999 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

/-- Converts the ordinal to an `Int`. -/
abbrev Ordinal.toInt (ordinal : Ordinal) : Int := ordinal.toBounded.toInt

/-- Converts the ordinal to a `Nat`. -/
abbrev Ordinal.toNat (ordinal : Ordinal) : Nat := ordinal.toBounded.toNat

/-- Converts the ordinal to a `Fin`. -/
abbrev Ordinal.toFin (ordinal : Ordinal) (h₀ : 0 ≤ (0 : Int)) :
    Fin ((999999999 : Int) + 1).toNat :=
  ordinal.toBounded.toFin h₀

instance : OfNat Ordinal n where
  ofNat := .mk (Bounded.LE.ofFin (Fin.ofNat _ n))

instance : Inhabited Ordinal where
  default := 0

/--
`Offset` represents a time offset in nanoseconds.
-/
newtype Offset := UnitVal (1 / 1000000000) with toUnitVal
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
The underlying value of the offset, in the unit's own scale.
-/
abbrev Offset.val (offset : Offset) : Int := offset.toUnitVal.val

/-- Converts the offset to an `Int`, in the unit's own scale. -/
abbrev Offset.toInt (offset : Offset) : Int := offset.toUnitVal.toInt

instance : OfNat Offset n := inferInstanceAs (OfNat (UnitVal (1 / 1000000000)) n)

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

/--
`Span` represents a bounded value for nanoseconds, ranging between -999999999 and 999999999.
This can be used for operations that involve differences or adjustments within this range.
-/
newtype Span := Bounded.LE (-999999999) 999999999 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the span. -/
abbrev Span.val (span : Span) : Int := span.toBounded.val

/-- Converts the span to an `Int`. -/
abbrev Span.toInt (span : Span) : Int := span.toBounded.toInt

instance : Inhabited Span where default := .mk (Bounded.LE.mk 0 (by decide))

namespace Span

/--
Creates a new `Offset` out of a `Span`.
-/
def toOffset (span : Span) : Offset :=
  .mk (UnitVal.ofInt span.val)

end Span

namespace Ordinal

/--
`Ordinal` represents a bounded value for nanoseconds in a day, which ranges between 0 and 86400000000000.
-/
newtype OfDay := Bounded.LE 0 86400000000000 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev OfDay.val (ordinal : OfDay) : Int := ordinal.toBounded.val

/-- Converts the ordinal to an `Int`. -/
abbrev OfDay.toInt (ordinal : OfDay) : Int := ordinal.toBounded.toInt

/-- Converts the ordinal to a `Nat`. -/
abbrev OfDay.toNat (ordinal : OfDay) : Nat := ordinal.toBounded.toNat

/-- Converts the ordinal to a `Fin`. -/
abbrev OfDay.toFin (ordinal : OfDay) (h₀ : 0 ≤ (0 : Int)) :
    Fin ((86400000000000 : Int) + 1).toNat :=
  ordinal.toBounded.toFin h₀

instance : Inhabited OfDay where default := .mk (Bounded.LE.mk 0 (by decide))

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ 999999999) : Ordinal :=
  .mk (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ 999999999) : Ordinal :=
  .mk (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin 1000000000) : Ordinal :=
  .mk (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Offset :=
  .mk (UnitVal.ofInt ordinal.val)

end Ordinal
end Nanosecond
end Time
end Std
