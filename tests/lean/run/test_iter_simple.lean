-- MWE for compiler regression: def vs abbrev for PlausibleIterStep constructors
-- This test uses the real iterator library to demonstrate the issue.
-- With the fix (def), isolatedFilterMap fuses away intermediate Option allocations.
-- With abbrev, it doesn't.

import Std.Data.Iterators

def isolatedFilterMap' (xs : Array Nat) : Nat :=
  xs.iter.filterMap (fun x => Option.guard (· % 2 = 0) (3 * x)) |>.fold (init := 0) (· + ·)

-- Verify the function computes correctly
#guard isolatedFilterMap' #[1, 2, 3, 4, 5, 6] = 36
