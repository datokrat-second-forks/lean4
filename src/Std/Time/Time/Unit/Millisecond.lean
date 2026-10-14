/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Unit.Nanosecond

public section

namespace Std
namespace Time
namespace Millisecond
open Internal

set_option linter.all true

/--
`Ordinal` represents a bounded value for milliseconds, ranging from 0 to 999 milliseconds.
-/
@[expose] def Ordinal := Bounded.LE 0 999
deriving Repr, DecidableEq, LE, LT

/--
Views an `Ordinal` as the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.toBounded (x : Ordinal) : Bounded.LE 0 999 := smartCast

/--
Creates an `Ordinal` from the `Bounded.LE` it is defined as.
-/
@[expose, inline]
def Ordinal.ofBounded (x : Bounded.LE 0 999) : Ordinal := smartCast

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 0 (0 + (999 : Nat))) n)

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
`Offset` represents a duration offset in milliseconds.
-/
@[expose] def Offset : Type := UnitVal (1 / 1000)
deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString

/--
Views an `Offset` as the `UnitVal` it is defined as.
-/
@[expose, inline]
def Offset.toUnitVal (x : Offset) : UnitVal (1 / 1000) := smartCast

/--
Creates an `Offset` from the `UnitVal` it is defined as.
-/
@[expose, inline]
def Offset.ofUnitVal (x : UnitVal (1 / 1000)) : Offset := smartCast

instance {x y : Offset} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toUnitVal.val ≤ y.toUnitVal.val))

instance {x y : Offset} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toUnitVal.val < y.toUnitVal.val))

instance : OfNat Offset n :=
  ⟨.ofUnitVal (UnitVal.ofNat n)⟩

instance : Ord Offset := inferInstanceAs <| Ord (UnitVal _)

instance : TransOrd Offset := inferInstanceAs <| TransOrd (UnitVal _)

instance : LawfulEqOrd Offset := inferInstanceAs <| LawfulEqOrd (UnitVal _)

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
namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ 999) : Ordinal :=
  .ofBounded (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ 999) : Ordinal :=
  .ofBounded (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin 1000) : Ordinal :=
  .ofBounded (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Offset :=
  .ofUnitVal (UnitVal.ofInt ordinal.toBounded.toSubtype.val)

end Ordinal
end Millisecond
end Time
end Std
