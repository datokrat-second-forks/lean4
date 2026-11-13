import Lean
import PackCongrIndex.Decl

/-!
The index keys of a pack congruence theorem of an imported module come from the `.olean` file:
`dsimp` and `simp` do not compute them (counter `index compute` of `debug.simp.packStats`).
-/

open Lean Meta in
elab "#index_computations" : command => do
  let m ← Simp.packStatsRef.get
  let n := m.fold (init := 0) fun n k (c, _) => if k.startsWith "index compute" then n + c else n
  logInfo m!"{n}"

set_option debug.simp.packStats true

example (Q : Nat → Prop) (m : MyNat) (h : Q (double (M := Nat) m)) : Q (double (M := MyNat) m) := by
  dsimp only [myNat_pack]
  exact h

example (Q : Nat → Prop) (m : MyNat) (h : Q (double (M := Nat) m)) : Q (double (M := MyNat) m) := by
  simp only [myNat_pack]
  exact h

/-- info: 0 -/
#guard_msgs in
#index_computations
