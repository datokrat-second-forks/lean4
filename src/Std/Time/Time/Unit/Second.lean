/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Unit.Nanosecond

@[expose] public section

namespace Std
namespace Time
namespace Second
open Internal

set_option linter.all true

/--
`Ordinal` represents a bounded value for second, which ranges between 0 and 59 or 60. This accounts
for potential leap second.
-/
def Ordinal (leap : Bool) := Bounded.LE 0 (.ofNat (if leap then 60 else 59))

/--
Views an `Ordinal` as the `Bounded.LE` it is defined as.
-/
@[inline]
def Ordinal.toBounded {leap : Bool} (x : Ordinal leap) :
    Bounded.LE 0 (.ofNat (if leap then 60 else 59)) := smartCast

/--
Creates an `Ordinal` from the `Bounded.LE` it is defined as.
-/
@[inline]
def Ordinal.ofBounded {leap : Bool} (x : Bounded.LE 0 (.ofNat (if leap then 60 else 59))) :
    Ordinal leap := smartCast

instance : LE (Ordinal leap) where
  le x y := LE.le x.toBounded.toSubtype.val y.toBounded.toSubtype.val

instance : LT (Ordinal leap) where
  lt x y := LT.lt x.toBounded.toSubtype.val y.toBounded.toSubtype.val

instance : Repr (Ordinal leap) where
  reprPrec r := reprPrec r.toBounded.toSubtype.val

instance : ToString (Ordinal leap) where
  toString r := toString r.toBounded.toSubtype.val

instance : OfNat (Ordinal leap) n := by
  have inst : OfNat (Bounded.LE 0 (0 + (59 : Nat))) n := inferInstance
  cases leap
  · exact ⟨.ofBounded inst.ofNat⟩
  · exact ⟨.ofBounded (inst.ofNat.expandTop (by decide))⟩

instance {x y : Ordinal leap} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.toBounded.toSubtype.val ≤ y.toBounded.toSubtype.val))

instance {x y : Ordinal leap} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.toBounded.toSubtype.val < y.toBounded.toSubtype.val))

instance : DecidableEq (Ordinal leap) := inferInstanceAs <| DecidableEq (Bounded.LE 0 _)

instance : Ord (Ordinal leap) := inferInstanceAs <| Ord (Bounded.LE 0 _)

instance : TransOrd (Ordinal leap) := inferInstanceAs <| TransOrd (Bounded.LE 0 _)

instance : LawfulEqOrd (Ordinal leap) := inferInstanceAs <| LawfulEqOrd (Bounded.LE 0 _)

/--
`Offset` represents an offset in seconds. It is defined as an `Int`.
-/
def Offset : Type := UnitVal 1
deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString

/--
Views an `Offset` as the `UnitVal` it is defined as.
-/
@[inline]
def Offset.toUnitVal (x : Offset) : UnitVal 1 := smartCast

/--
Creates an `Offset` from the `UnitVal` it is defined as.
-/
@[inline]
def Offset.ofUnitVal (x : UnitVal 1) : Offset := smartCast

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
Creates an `Second.Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Second.Offset :=
  .ofUnitVal (UnitVal.ofInt data)

/--
Creates an `Second.Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Second.Offset :=
  .ofUnitVal (UnitVal.ofInt data)

end Offset

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ Int.ofNat (if leap then 60 else 59)) : Ordinal leap :=
  .ofBounded (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ (if leap then 60 else 59)) : Ordinal leap :=
  .ofBounded (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin (if leap then 61 else 60)) : Ordinal leap :=
  match leap with
  | true => .ofBounded (Bounded.LE.ofFin data)
  | false => .ofBounded (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Second.Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal leap) : Second.Offset :=
  .ofUnitVal (UnitVal.ofInt ordinal.toBounded.toSubtype.val)

end Ordinal
end Second
end Time
end Std
