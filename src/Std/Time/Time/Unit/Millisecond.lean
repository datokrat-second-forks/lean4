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

instance : OfNat Ordinal n :=
  inferInstanceAs (OfNat (Bounded.LE 0 (0 + (999 : Nat))) n)

instance : Inhabited Ordinal where
  default := 0

instance {x y : Ordinal} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.val ≤ y.val))

instance {x y : Ordinal} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.val < y.val))

instance : Ord Ordinal := inferInstanceAs <| Ord (Bounded.LE 0 _)

instance : TransOrd Ordinal := inferInstanceAs <| TransOrd (Bounded.LE 0 _)

instance : LawfulEqOrd Ordinal := inferInstanceAs <| LawfulEqOrd (Bounded.LE 0 _)

/--
`Offset` represents a duration offset in milliseconds.
-/
@[expose] newtype Offset := UnitVal (1 / 1000) with toUnitVal

/--
The underlying value of the offset, in the unit's own scale.
-/
@[expose, inline] def Offset.val (offset : Offset) : Int := offset.toUnitVal.val

theorem Offset.toUnitVal_inj {x y : Offset} (h : x.toUnitVal = y.toUnitVal) : x = y :=
  congrArg Offset.mk h

instance : Repr Offset where reprPrec offset prec := reprPrec offset.toUnitVal prec

instance : ToString Offset where toString offset := toString offset.toUnitVal

instance : Inhabited Offset where default := .mk default

instance : DecidableEq Offset := fun x y =>
  decidable_of_iff (x.toUnitVal = y.toUnitVal) ⟨Offset.toUnitVal_inj, congrArg Offset.toUnitVal⟩

instance : Add Offset where add x y := .mk (x.toUnitVal + y.toUnitVal)

instance : Sub Offset where sub x y := .mk (x.toUnitVal - y.toUnitVal)

instance : Neg Offset where neg x := .mk (-x.toUnitVal)

instance : LE Offset where le x y := x.val ≤ y.val

instance : LT Offset where lt x y := x.val < y.val

instance : Ord Offset where compare x y := compare x.toUnitVal y.toUnitVal

instance : OfNat Offset n := ⟨.mk (UnitVal.ofNat n)⟩

instance {x y : Offset} : Decidable (x ≤ y) :=
  inferInstanceAs (Decidable (x.val ≤ y.val))

instance {x y : Offset} : Decidable (x < y) :=
  inferInstanceAs (Decidable (x.val < y.val))

instance : OrientedOrd Offset := ⟨OrientedOrd.eq_swap (α := UnitVal (1 / 1000))⟩

instance : TransOrd Offset := ⟨TransOrd.isLE_trans (α := UnitVal (1 / 1000))⟩

instance : LawfulEqOrd Offset :=
  ⟨fun {_ _} h => Offset.toUnitVal_inj (LawfulEqOrd.eq_of_compare h)⟩

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
namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ 999) : Ordinal :=
  Bounded.LE.mk data h

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ 999) : Ordinal :=
  Bounded.LE.ofNat data h

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin 1000) : Ordinal :=
  Bounded.LE.ofFin data

/--
Converts an `Ordinal` to an `Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal) : Offset :=
  .mk (UnitVal.ofInt ordinal.val)

end Ordinal
end Millisecond
end Time
end Std
