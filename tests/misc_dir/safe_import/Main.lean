safe import Untrusted.Defs -- in VS Code, use misc_dir.safe_import.Untrusted.Defs

example : double 3 = 6 := rfl
example : double 3 = 6 := by decide
example (n : Nat) : double n = 2 * n := double_eq n
example : (Point.mk 1 2).y = 2 := rfl
example : Even 2 := .succ (.succ .zero)

theorem uses_double : double 2 = 4 := rfl
#print axioms uses_double

-- kernel-generated recursors and auxiliary definitions are available
#check @Tree.rec
#check @Point.casesOn
#check @Even.rec

-- partial definitions are imported as opaque constants
#check @loop
