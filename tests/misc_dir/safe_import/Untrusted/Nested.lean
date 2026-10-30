-- Safe imports within a safe-imported module are elaborated in the same sandbox.
safe import Untrusted.Defs

noncomputable def quadruple (n : Nat) : Nat := double (double n)

theorem quadruple_eq (n : Nat) : quadruple n = 4 * n := by
  unfold quadruple; rw [double_eq, double_eq]; omega
