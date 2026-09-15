/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Unit.Nanosecond
public import Init.Transport

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
newtype Ordinal (leap : Bool) := Bounded.LE 0 (.ofNat (if leap then 60 else 59)) with toBounded
  deriving LE, LT, Repr, ToString, DecidableLE, DecidableLT, DecidableEq, Ord, TransOrd, LawfulEqOrd

/-- The underlying integer of the ordinal. -/
abbrev Ordinal.val (ordinal : Ordinal leap) : Int := ordinal.toBounded.val

instance : OfNat (Ordinal leap) n := by
  have inst : OfNat (Bounded.LE 0 (0 + (59 : Nat))) n := inferInstance
  cases leap
  · exact ⟨.mk inst.ofNat⟩
  · exact ⟨.mk (inst.ofNat.expandTop (by decide))⟩

/--
`Offset` represents an offset in seconds. It is defined as an `Int`.
-/
newtype Offset := UnitVal 1 with toUnitVal
  deriving Repr, DecidableEq, Inhabited, Add, Sub, Neg, LE, LT, ToString, DecidableLE, DecidableLT,
    Ord, TransOrd, LawfulEqOrd

/--
The underlying value of the offset, in the unit's own scale.
-/
@[inline] def Offset.val (offset : Offset) : Int := offset.toUnitVal.val

instance : OfNat Offset n := inferInstanceAs (OfNat (UnitVal 1) n)

namespace Offset

/--
Creates an `Second.Offset` from a natural number.
-/
@[inline]
def ofNat (data : Nat) : Second.Offset :=
  .mk (UnitVal.ofInt data)

/--
Creates an `Second.Offset` from an integer.
-/
@[inline]
def ofInt (data : Int) : Second.Offset :=
  .mk (UnitVal.ofInt data)

end Offset

namespace Ordinal

/--
Creates an `Ordinal` from an integer, ensuring the value is within bounds.
-/
@[inline]
def ofInt (data : Int) (h : 0 ≤ data ∧ data ≤ Int.ofNat (if leap then 60 else 59)) : Ordinal leap :=
  .mk (Bounded.LE.mk data h)

/--
Creates an `Ordinal` from a natural number, ensuring the value is within bounds.
-/
@[inline]
def ofNat (data : Nat) (h : data ≤ (if leap then 60 else 59)) : Ordinal leap :=
  .mk (Bounded.LE.ofNat data h)

/--
Creates an `Ordinal` from a `Fin`, ensuring the value is within bounds.
-/
@[inline]
def ofFin (data : Fin (if leap then 61 else 60)) : Ordinal leap :=
  match leap with
  | true => .mk (Bounded.LE.ofFin data)
  | false => .mk (Bounded.LE.ofFin data)

/--
Converts an `Ordinal` to an `Second.Offset`.
-/
@[inline]
def toOffset (ordinal : Ordinal leap) : Second.Offset :=
  .mk (UnitVal.ofInt ordinal.val)

end Ordinal
end Second
end Time
end Std
