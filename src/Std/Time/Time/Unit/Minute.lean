/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Unit.Second
public import Init.Transport

public section

namespace Std
namespace Time
namespace Minute
open Internal

set_option linter.all true

/--
`Ordinal` represents a bounded value for minutes, ranging from 0 to 59. This is useful for representing the minute component of a time.
-/
newtype Ordinal := Bounded.LE 0 59 with toBounded
  deriving Repr, DecidableEq, LE, LT, DecidableLE, DecidableLT, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal) : Int := ordinal.toBounded.val

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 0 (0 + (59 : Nat))) n)

instance : Inhabited Ordinal where
  default := 0

/--
`Offset` represents a duration offset in minutes.
-/
newtype Offset := UnitVal 60 with toUnitVal
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
The underlying value of the offset, in the unit's own scale.
-/
@[expose, inline] def Offset.val (offset : Offset) : Int := offset.toUnitVal.val

instance : OfNat Offset n := inferInstanceAs (OfNat (UnitVal 60) n)

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ 59) : Ordinal :=
  .mk (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ 59) : Ordinal :=
  .mk (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin 60) : Ordinal :=
  .mk (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Offset`.
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
end Minute
end Time
end Std
