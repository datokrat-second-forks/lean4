import Lean

/-!
Confirms `grind` needs no special-casing of `+defeq` structures of its own: its simp-based
normalization (`Lean.Meta.Grind.simpCore`/`dsimpCore`) reuses `Simp.mainCore`/`Simp.reduceStep`,
which already knows how to reduce virtual projections (see `defeqStructureVirtualIota.lean`).
-/

structure +defeq N where
  toNat : Nat

example (n : Nat) : N.toNat (N.mk n) = n := by grind
