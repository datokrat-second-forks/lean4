/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Time.Date.Unit.Basic
public import Std.Time.Date.ValidDate

public section

namespace Std
namespace Time

namespace Nanosecond
namespace Offset

/--
Convert `Nanosecond.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (nanoseconds : Nanosecond.Offset) : Day.Offset :=
  .ofUnitVal (nanoseconds.toUnitVal.div 86400000000000 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Nanosecond.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Nanosecond.Offset :=
  .ofUnitVal (days.toUnitVal.mul 86400000000000 |>.cast (by decide +kernel))

/--
Convert `Nanosecond.Offset` into `Week.Offset`.
-/
@[inline]
def toWeeks (nanoseconds : Nanosecond.Offset) : Week.Offset :=
  .ofUnitVal (nanoseconds.toUnitVal.div 604800000000000 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Nanosecond.Offset`.
-/
@[inline]
def ofWeeks (weeks : Week.Offset) : Nanosecond.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 604800000000000 |>.cast (by decide +kernel))

end Offset
end Nanosecond

namespace Millisecond
namespace Offset

/--
Convert `Millisecond.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (milliseconds : Millisecond.Offset) : Day.Offset :=
  .ofUnitVal (milliseconds.toUnitVal.div 86400000 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Millisecond.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Millisecond.Offset :=
  .ofUnitVal (days.toUnitVal.mul 86400000 |>.cast (by decide +kernel))

/--
Convert `Millisecond.Offset` into `Week.Offset`.
-/
@[inline]
def toWeeks (milliseconds : Millisecond.Offset) : Week.Offset :=
  .ofUnitVal (milliseconds.toUnitVal.div 604800000 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Millisecond.Offset`.
-/
@[inline]
def ofWeeks (weeks : Week.Offset) : Millisecond.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 604800000 |>.cast (by decide +kernel))

end Offset
end Millisecond

namespace Second
namespace Offset

/--
Convert `Second.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (seconds : Second.Offset) : Day.Offset :=
  .ofUnitVal (seconds.toUnitVal.div 86400 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Second.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Second.Offset :=
  .ofUnitVal (days.toUnitVal.mul 86400 |>.cast (by decide +kernel))

/--
Convert `Second.Offset` into `Week.Offset`.
-/
@[inline]
def toWeeks (seconds : Second.Offset) : Week.Offset :=
  .ofUnitVal (seconds.toUnitVal.div 604800 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Second.Offset`.
-/
@[inline]
def ofWeeks (weeks : Week.Offset) : Second.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 604800 |>.cast (by decide +kernel))

end Offset
end Second

namespace Minute
namespace Offset

/--
Convert `Minute.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (minutes : Minute.Offset) : Day.Offset :=
  .ofUnitVal (minutes.toUnitVal.div 1440 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Minute.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Minute.Offset :=
  .ofUnitVal (days.toUnitVal.mul 1440 |>.cast (by decide +kernel))

/--
Convert `Minute.Offset` into `Week.Offset`.
-/
@[inline]
def toWeeks (minutes : Minute.Offset) : Week.Offset :=
  .ofUnitVal (minutes.toUnitVal.div 10080 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Minute.Offset`.
-/
@[inline]
def ofWeeks (weeks : Week.Offset) : Minute.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 10080 |>.cast (by decide +kernel))

end Offset
end Minute

namespace Hour
namespace Offset

/--
Convert `Hour.Offset` into `Day.Offset`.
-/
@[inline]
def toDays (hours : Hour.Offset) : Day.Offset :=
  .ofUnitVal (hours.toUnitVal.div 24 |>.cast (by decide +kernel))

/--
Convert `Day.Offset` into `Hour.Offset`.
-/
@[inline]
def ofDays (days : Day.Offset) : Hour.Offset :=
  .ofUnitVal (days.toUnitVal.mul 24 |>.cast (by decide +kernel))

/--
Convert `Hour.Offset` into `Week.Offset`.
-/
@[inline]
def toWeeks (hours : Hour.Offset) : Week.Offset :=
  .ofUnitVal (hours.toUnitVal.div 168 |>.cast (by decide +kernel))

/--
Convert `Week.Offset` into `Hour.Offset`.
-/
@[inline]
def ofWeeks (weeks : Week.Offset) : Hour.Offset :=
  .ofUnitVal (weeks.toUnitVal.mul 168 |>.cast (by decide +kernel))

end Offset
end Hour

instance : HAdd Nanosecond.Offset Millisecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toNanoseconds.toUnitVal)

instance : HAdd Nanosecond.Offset Second.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toNanoseconds.toUnitVal)

instance : HAdd Nanosecond.Offset Minute.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toNanoseconds.toUnitVal)

instance : HAdd Nanosecond.Offset Hour.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toNanoseconds.toUnitVal)

instance : HAdd Nanosecond.Offset Day.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toNanoseconds.toUnitVal)

instance : HAdd Nanosecond.Offset Week.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toNanoseconds.toUnitVal)

instance : HAdd Millisecond.Offset Nanosecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toNanoseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Millisecond.Offset Second.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMilliseconds.toUnitVal)

instance : HAdd Millisecond.Offset Minute.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMilliseconds.toUnitVal)

instance : HAdd Millisecond.Offset Hour.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMilliseconds.toUnitVal)

instance : HAdd Millisecond.Offset Day.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMilliseconds.toUnitVal)

instance : HAdd Millisecond.Offset Week.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMilliseconds.toUnitVal)

instance : HAdd Second.Offset Nanosecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toNanoseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Second.Offset Millisecond.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toMilliseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Second.Offset Minute.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toSeconds.toUnitVal)

instance : HAdd Second.Offset Hour.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toSeconds.toUnitVal)

instance : HAdd Second.Offset Day.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toSeconds.toUnitVal)

instance : HAdd Second.Offset Week.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toSeconds.toUnitVal)

instance : HAdd Minute.Offset Nanosecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toNanoseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Minute.Offset Millisecond.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toMilliseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Minute.Offset Second.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toSeconds.toUnitVal.add y.toUnitVal)

instance : HAdd Minute.Offset Hour.Offset Minute.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMinutes.toUnitVal)

instance : HAdd Minute.Offset Day.Offset Minute.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMinutes.toUnitVal)

instance : HAdd Minute.Offset Week.Offset Minute.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toMinutes.toUnitVal)

instance : HAdd Hour.Offset Nanosecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toNanoseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Hour.Offset Millisecond.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toMilliseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Hour.Offset Second.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toSeconds.toUnitVal.add y.toUnitVal)

instance : HAdd Hour.Offset Minute.Offset Minute.Offset where
  hAdd x y := .ofUnitVal (x.toMinutes.toUnitVal.add y.toUnitVal)

instance : HAdd Hour.Offset Day.Offset Hour.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toHours.toUnitVal)

instance : HAdd Hour.Offset Week.Offset Hour.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toHours.toUnitVal)

instance : HAdd Day.Offset Nanosecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toNanoseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Day.Offset Millisecond.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toMilliseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Day.Offset Second.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toSeconds.toUnitVal.add y.toUnitVal)

instance : HAdd Day.Offset Minute.Offset Minute.Offset where
  hAdd x y := .ofUnitVal (x.toMinutes.toUnitVal.add y.toUnitVal)

instance : HAdd Day.Offset Hour.Offset Hour.Offset where
  hAdd x y := .ofUnitVal (x.toHours.toUnitVal.add y.toUnitVal)

instance : HAdd Day.Offset Week.Offset Day.Offset where
  hAdd x y := .ofUnitVal (x.toUnitVal.add y.toDays.toUnitVal)

instance : HAdd Week.Offset Nanosecond.Offset Nanosecond.Offset where
  hAdd x y := .ofUnitVal (x.toNanoseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Week.Offset Millisecond.Offset Millisecond.Offset where
  hAdd x y := .ofUnitVal (x.toMilliseconds.toUnitVal.add y.toUnitVal)

instance : HAdd Week.Offset Second.Offset Second.Offset where
  hAdd x y := .ofUnitVal (x.toSeconds.toUnitVal.add y.toUnitVal)

instance : HAdd Week.Offset Minute.Offset Minute.Offset where
  hAdd x y := .ofUnitVal (x.toMinutes.toUnitVal.add y.toUnitVal)

instance : HAdd Week.Offset Hour.Offset Hour.Offset where
  hAdd x y := .ofUnitVal (x.toHours.toUnitVal.add y.toUnitVal)

instance : HAdd Week.Offset Day.Offset Day.Offset where
  hAdd x y := .ofUnitVal (x.toDays.toUnitVal.add y.toUnitVal)

instance : HSub Nanosecond.Offset Millisecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toNanoseconds.toUnitVal)

instance : HSub Nanosecond.Offset Second.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toNanoseconds.toUnitVal)

instance : HSub Nanosecond.Offset Minute.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toNanoseconds.toUnitVal)

instance : HSub Nanosecond.Offset Hour.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toNanoseconds.toUnitVal)

instance : HSub Nanosecond.Offset Day.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toNanoseconds.toUnitVal)

instance : HSub Nanosecond.Offset Week.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toNanoseconds.toUnitVal)

instance : HSub Millisecond.Offset Nanosecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toNanoseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Millisecond.Offset Second.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMilliseconds.toUnitVal)

instance : HSub Millisecond.Offset Minute.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMilliseconds.toUnitVal)

instance : HSub Millisecond.Offset Hour.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMilliseconds.toUnitVal)

instance : HSub Millisecond.Offset Day.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMilliseconds.toUnitVal)

instance : HSub Millisecond.Offset Week.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMilliseconds.toUnitVal)

instance : HSub Second.Offset Nanosecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toNanoseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Second.Offset Millisecond.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toMilliseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Second.Offset Minute.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toSeconds.toUnitVal)

instance : HSub Second.Offset Hour.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toSeconds.toUnitVal)

instance : HSub Second.Offset Day.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toSeconds.toUnitVal)

instance : HSub Second.Offset Week.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toSeconds.toUnitVal)

instance : HSub Minute.Offset Nanosecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toNanoseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Minute.Offset Millisecond.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toMilliseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Minute.Offset Second.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toSeconds.toUnitVal.sub y.toUnitVal)

instance : HSub Minute.Offset Hour.Offset Minute.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMinutes.toUnitVal)

instance : HSub Minute.Offset Day.Offset Minute.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMinutes.toUnitVal)

instance : HSub Minute.Offset Week.Offset Minute.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toMinutes.toUnitVal)

instance : HSub Hour.Offset Nanosecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toNanoseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Hour.Offset Millisecond.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toMilliseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Hour.Offset Second.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toSeconds.toUnitVal.sub y.toUnitVal)

instance : HSub Hour.Offset Minute.Offset Minute.Offset where
  hSub x y := .ofUnitVal (x.toMinutes.toUnitVal.sub y.toUnitVal)

instance : HSub Hour.Offset Day.Offset Hour.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toHours.toUnitVal)

instance : HSub Hour.Offset Week.Offset Hour.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toHours.toUnitVal)

instance : HSub Day.Offset Nanosecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toNanoseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Day.Offset Millisecond.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toMilliseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Day.Offset Second.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toSeconds.toUnitVal.sub y.toUnitVal)

instance : HSub Day.Offset Minute.Offset Minute.Offset where
  hSub x y := .ofUnitVal (x.toMinutes.toUnitVal.sub y.toUnitVal)

instance : HSub Day.Offset Hour.Offset Hour.Offset where
  hSub x y := .ofUnitVal (x.toHours.toUnitVal.sub y.toUnitVal)

instance : HSub Day.Offset Week.Offset Day.Offset where
  hSub x y := .ofUnitVal (x.toUnitVal.sub y.toDays.toUnitVal)

instance : HSub Week.Offset Nanosecond.Offset Nanosecond.Offset where
  hSub x y := .ofUnitVal (x.toNanoseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Week.Offset Millisecond.Offset Millisecond.Offset where
  hSub x y := .ofUnitVal (x.toMilliseconds.toUnitVal.sub y.toUnitVal)

instance : HSub Week.Offset Second.Offset Second.Offset where
  hSub x y := .ofUnitVal (x.toSeconds.toUnitVal.sub y.toUnitVal)

instance : HSub Week.Offset Minute.Offset Minute.Offset where
  hSub x y := .ofUnitVal (x.toMinutes.toUnitVal.sub y.toUnitVal)

instance : HSub Week.Offset Hour.Offset Hour.Offset where
  hSub x y := .ofUnitVal (x.toHours.toUnitVal.sub y.toUnitVal)

instance : HSub Week.Offset Day.Offset Day.Offset where
  hSub x y := .ofUnitVal (x.toDays.toUnitVal.sub y.toUnitVal)
