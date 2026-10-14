/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Time.Basic

public section

namespace Std
namespace Time
open Internal

set_option linter.all true

/--
`HourMarker` represents the two 12-hour periods of the day: `am` for hours between 12:00 AM and
11:59 AM, and `pm` for hours between 12:00 PM and 11:59 PM.
-/
inductive HourMarker

  /--
  Ante meridiem.
  -/
  | am

  /--
  Post meridiem.
  -/
  | pm
deriving Repr, DecidableEq

instance : Ord HourMarker where
  compare
    | .am, .am => .eq
    | .am, .pm => .lt
    | .pm, .am => .gt
    | .pm, .pm => .eq

instance : OrientedOrd HourMarker where
  eq_swap {a b} := by cases a <;> cases b <;> with_semireducible rfl

instance : TransOrd HourMarker where
  isLE_trans {a b c} hab hbc := by cases a <;> cases b <;> cases c <;> simp_all

instance : LawfulEqOrd HourMarker where
  eq_of_compare {a b} h := by cases a <;> cases b <;> simp_all

namespace HourMarker

/--
`ofOrdinal` converts an `Hour.Ordinal` value to an `HourMarker`, indicating whether it is AM or PM.
-/
def ofOrdinal (time : Hour.Ordinal) : HourMarker :=
  if time.toBounded.toSubtype.val ≥ 12 then
    .pm
  else
    .am

/--
Converts a 12-hour clock time to a 24-hour clock time based on the `HourMarker`.
-/
def toAbsolute (marker : HourMarker) (time : Bounded.LE 1 12) : Hour.Ordinal :=
  match marker with
  | .am => if time.toSubtype.val = 12 then 0 else (.ofBounded (time.expand (by decide) (by decide)))
  | .pm => if time.toSubtype.val = 12 then 12 else (.ofBounded (time.add 12 |>.emod 24 (by decide)))

/--
Converts a 24-hour clock time to a 12-hour clock time with a `HourMarker`.
-/
def toRelative (hour : Hour.Ordinal) : Bounded.LE 1 12 × HourMarker :=
  if h₀ : hour.toBounded.toSubtype.val = 0 then
    (.mk 12 (by decide), .am)
  else if h₁ : hour.toBounded.toSubtype.val ≤ 12 then
     if hour.toBounded.toSubtype.val = 12 then
      (.mk 12 (by decide), .pm)
    else
      Int.ne_iff_lt_or_gt.mp h₀ |>.by_cases
        (nomatch Int.not_le.mpr · <| hour.toBounded.toSubtype.property.left)
        (fun h => (.mk hour.toBounded.toSubtype.val (And.intro (by with_semireducible exact h) h₁), .am))
  else
    let h := Int.not_le.mp h₁
    let t := hour |>.toBounded.truncateBottom (by with_semireducible exact h) |>.sub 12
    (by with_semireducible exact t.expandTop (by decide), .pm)

end HourMarker
end Time
end Std
