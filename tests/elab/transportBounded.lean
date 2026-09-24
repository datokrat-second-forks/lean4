import Std.Time

/-!
Rehearses sealing one of the `Std.Time` unit types, which are aliases of `Std.Time.Internal.Bounded.LE`
today, as a `newtype`: the instances the alias obtained by `deriving` and `inferInstanceAs` are
transported instead, and the lawful `Ord` classes carry over to the transported `Ord` instance.
-/

open Std Std.Time Std.Time.Internal

newtype DayOrd := Bounded.LE 1 31 with toBounded
  deriving Repr, DecidableEq, LE, LT, Ord, TransOrd, LawfulEqOrd

-- As in `Std.Time`: the generic `OfNat` instance is stated for `Bounded.LE lo (lo + k)`.
instance : OfNat DayOrd n :=
  inferInstanceAs (OfNat (Bounded.LE 1 (1 + (30 : Nat))) n)

instance : Inhabited DayOrd where default := 1

deriving instance DecidableLE, DecidableLT for DayOrd

example : (5 : DayOrd) ≤ 7 := by decide
example : (5 : DayOrd) < 7 := by decide
example : (5 : DayOrd) ≠ 7 := by decide
example : compare (5 : DayOrd) 7 = .lt := by decide
example : (7 : DayOrd).toBounded.val = 7 := by decide
example (x : DayOrd) : compare x x = .eq := ReflCmp.compare_self
example (x y : DayOrd) (h : compare x y = .eq) : x = y := LawfulEqCmp.eq_of_compare h

/-- info: 7 -/
#guard_msgs in #eval (7 : DayOrd)
