/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Date.Unit.Month
import all Std.Time.Date.Unit.Month
import Init.Data.Bool

public section

namespace Std
namespace Time
open Time.Internal
open Month.Ordinal

set_option linter.all true

/--
Represents a valid date for a given year, considering whether it is a leap year. Example: `(2, 29)`
is valid only if `leap` is `true`.
-/
@[expose] def ValidDate (leap : Bool) := { val : Month.Ordinal × Day.Ordinal // Valid leap (Prod.fst val) (Prod.snd val) }

/--
Views a `ValidDate` as the subtype it is defined as.
-/
@[expose, inline]
def ValidDate.toSubtype {leap : Bool} (x : ValidDate leap) :
    { val : Month.Ordinal × Day.Ordinal // Valid leap (Prod.fst val) (Prod.snd val) } := smartCast

/--
Creates a `ValidDate` from the subtype it is defined as.
-/
@[expose, inline]
def ValidDate.ofSubtype {leap : Bool}
    (x : { val : Month.Ordinal × Day.Ordinal // Valid leap (Prod.fst val) (Prod.snd val) }) :
    ValidDate leap := smartCast

instance : Inhabited (ValidDate l) where
  default := .ofSubtype ⟨⟨1, 1⟩, (by cases l <;> decide)⟩

attribute [local instance] lexOrd

instance : DecidableEq (ValidDate leap) :=
  inferInstanceAs
    (DecidableEq { val : Month.Ordinal × Day.Ordinal // Valid leap (Prod.fst val) (Prod.snd val) })

instance : Ord (ValidDate leap) where
  compare a b := compare a.toSubtype.val b.toSubtype.val

instance : OrientedOrd (ValidDate leap) where
  eq_swap := by with_semireducible exact OrientedOrd.eq_swap (α := Month.Ordinal × Day.Ordinal)

instance : TransOrd (ValidDate leap) where
  isLE_trans := by with_semireducible exact TransOrd.isLE_trans (α := Month.Ordinal × Day.Ordinal)

instance : LawfulEqOrd (ValidDate leap) where
  eq_of_compare := by
    with_semireducible exact Subtype.ext ∘ LawfulEqOrd.eq_of_compare (α := Month.Ordinal × Day.Ordinal)

namespace ValidDate

/--
Transforms a tuple of a `Month` and a `Day` into a `Day.Ordinal.OfYear`.
-/
def dayOfYear (ordinal : ValidDate leap) : Day.Ordinal.OfYear leap :=
  let days := cumulativeDays leap ordinal.toSubtype.val.fst
  let proof := cumulativeDays_le leap ordinal.toSubtype.val.fst
  let bounded := Bounded.LE.mk (lo := (0 : Day.Offset).toUnitVal.val)
    (hi := (334 + (if leap then 1 else 0) : Day.Offset).toUnitVal.val) days.toUnitVal.toInt
    (by with_semireducible exact proof) |>.addBounds ordinal.toSubtype.val.snd.toBounded
  match leap, bounded with
  | true, bounded => .ofBounded (bounded.cast (by decide) (by decide))
  | false, bounded => .ofBounded (bounded.cast (by decide) (by decide))

set_option backward.isDefEq.respectTransparency false in
/--
Transforms a `Day.Ordinal.OfYear` into a tuple of a `Month` and a `Day`.
-/
def ofOrdinal (ordinal : Day.Ordinal.OfYear leap) : ValidDate leap :=
    let rec go (idx : Month.Ordinal) (acc : Int) (h : ordinal.toBounded.toSubtype.val > acc) (p : acc = (cumulativeDays leap idx).toUnitVal.val) : ValidDate leap :=
      let monthDays := days leap idx
      if h₁ : ordinal.toBounded.toSubtype.val ≤ acc + monthDays.toBounded.toSubtype.val then
        let bounded := Bounded.LE.mk ordinal.toBounded.toSubtype.val (And.intro (Int.add_one_le_of_lt h) h₁) |>.sub acc
        let bounded : Bounded.LE 1 monthDays.toBounded.toSubtype.val := bounded.cast (by omega) (by omega)
        let days₁ : Day.Ordinal := .ofBounded (.mk bounded.toSubtype.val (And.intro bounded.toSubtype.property.left (Int.le_trans bounded.toSubtype.property.right monthDays.toBounded.toSubtype.property.right)))
        .ofSubtype ⟨⟨idx, days₁⟩, by
          with_semireducible exact Int.le_trans bounded.toSubtype.property.right (by simp +zetaDelta)⟩
      else by
        let h₂ := Int.not_le.mp h₁

        have h₃ : idx.toBounded.toSubtype.val < 12 := Int.not_le.mp <| λh₃ => by
          have h₅ := ordinal.toBounded.toSubtype.property.right
          let eq := Int.eq_iff_le_and_ge.mpr (And.intro idx.toBounded.toSubtype.property.right h₃)
          simp [monthDays, days, eq] at h₂
          simp [cumulativeDays, eq] at p
          simp [p] at h₂
          cases leap
          all_goals (simp at h₂; simp_all)
          · have h₂ : 365 < ordinal.toBounded.toSubtype.val := by with_semireducible exact h₂
            omega
          · have h₂ : 366 < ordinal.toBounded.toSubtype.val := by with_semireducible exact h₂
            omega

        let idx₂ := idx.toBounded.truncateTop (Int.le_sub_one_of_lt h₃) |>.addTop 1 (by decide)
        refine go (.ofBounded idx₂) (acc + monthDays.toBounded.toSubtype.val) h₂ ?_
        simp [monthDays, p]
        rw [difference_eq (Int.le_of_lt_add_one h₃)]

      termination_by 12 - idx.toBounded.toSubtype.val.toNat
      decreasing_by
        simp_wf
        have gt0 : idx.toBounded.toSubtype.val ≥ 0 :=
          Int.le_trans (by decide) idx.toBounded.toSubtype.property.left
        simp [Bounded.LE.addTop, Bounded.LE.mk, Bounded.mk, Bounded.toSubtype, Bounded.ofSubtype,
          Month.Ordinal.toBounded, Month.Ordinal.ofBounded] at h₃ gt0 ⊢
        refine Nat.sub_lt_sub_left (Int.toNat_lt gt0 |>.mpr h₃) ?_
        let toNat_lt_lt {n z : Int} (h : 0 ≤ z) (h₁ : 0 ≤ n) : z.toNat < n.toNat ↔ z < n := by
          rw [← Int.not_le, ← Nat.not_le, ← Int.ofNat_le, Int.toNat_of_nonneg h, Int.toNat_of_nonneg h₁]
        rw [toNat_lt_lt (by omega) (by omega)]
        omega

    go 1 0 (Int.lt_of_lt_of_le (by decide) ordinal.toBounded.toSubtype.property.left) (by cases leap <;> decide)

end ValidDate
end Time
end Std
