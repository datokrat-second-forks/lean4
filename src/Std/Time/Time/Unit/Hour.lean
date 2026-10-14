/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Unit.Minute

public section

namespace Std
namespace Time
namespace Hour
open Internal

set_option linter.all true

/--
`Ordinal` represents a bounded value for hours, ranging from 0 to 23.
-/
@[expose] def Ordinal := Bounded.LE 0 23
deriving Repr, DecidableEq, LE, LT

/--
Views an `Ordinal` as the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.toBounded (x : Ordinal) : Bounded.LE 0 23 := smartCast

/--
Creates an `Ordinal` from the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.ofBounded (x : Bounded.LE 0 23) : Ordinal := smartCast

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 0 (0 + (23 : Nat))) n)

instance : Inhabited Ordinal where
  default := 0

instance {x y : Ordinal} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toBounded.toSubtype.val ≤ y.toBounded.toSubtype.val))

instance {x y : Ordinal} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toBounded.toSubtype.val < y.toBounded.toSubtype.val))

instance : Ord Ordinal := inferInstanceAs <| Ord (Bounded.LE 0 _)

instance : TransOrd Ordinal := inferInstanceAs <| TransOrd (Bounded.LE 0 _)

instance : LawfulEqOrd Ordinal := inferInstanceAs <| LawfulEqOrd (Bounded.LE 0 _)

/--
`Offset` represents an offset in hours, defined as an `Int`. This can be used to express durations
or differences in hours.
-/
@[expose] def Offset : Type := UnitVal 3600
deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, ToString, LT, LE

/--
Views an `Offset` as the `UnitVal` it is defined as.
-/
@[expose, inline]
def Offset.toUnitVal (x : Offset) : UnitVal 3600 := smartCast

/--
Creates an `Offset` from the `UnitVal` it is defined as.
-/
@[expose, inline]
def Offset.ofUnitVal (x : UnitVal 3600) : Offset := smartCast

instance {x y : Offset} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toUnitVal.val ≤ y.toUnitVal.val))

instance {x y : Offset} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toUnitVal.val < y.toUnitVal.val))

instance : OfNat Offset n :=
  ⟨.ofUnitVal (UnitVal.ofNat n)⟩

instance : Ord Offset := inferInstanceAs <| Ord (UnitVal _)

instance : TransOrd Offset := inferInstanceAs <| TransOrd (UnitVal _)

instance : LawfulEqOrd Offset := inferInstanceAs <| LawfulEqOrd (UnitVal _)

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ 23) : Ordinal :=
  .ofBounded (Bounded.LE.mk data h)

/--
Converts an `Ordinal` into a relative hour in the range of 1 to 12.
-/
def toRelative (ordinal : Ordinal) : Bounded.LE 1 12 :=
  (ordinal.toBounded.add 11).emod 12 (by decide) |>.add 1

/--
Converts an Ordinal into a 1-based hour representation within the range of 1 to 24.
-/
def shiftTo1BasedHour (ordinal : Ordinal) : Bounded.LE 1 24 :=
  if h : ordinal.toBounded.toSubtype.val < 1
    then Internal.Bounded.LE.ofNatWrapping 24 (by decide)
    else ordinal.toBounded.truncateBottom (Int.not_lt.mp h) |>.expandTop (by decide)
/--
Creates an `Ordinal` from a natural number, ensuring the value is within the valid bounds for hours.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ 23) : Ordinal :=
  .ofBounded (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin` value.
-/
@[inline]
def ofFin (data : Fin 24) : Ordinal :=
  .ofBounded (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Offset`, which represents the duration in hours as an integer value.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Offset :=
  .ofUnitVal (UnitVal.ofInt ordinal.toBounded.toSubtype.val)

end Ordinal
namespace Offset

/--
Creates an `Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Offset :=
  .ofUnitVal (UnitVal.ofInt data)

/--
Creates an `Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Offset :=
  .ofUnitVal (UnitVal.ofInt data)

end Offset
end Hour
end Time
end Std
