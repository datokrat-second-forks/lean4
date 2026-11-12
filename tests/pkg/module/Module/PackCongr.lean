module

public import Module.PackCongrBase
import Module.PackCongrPriv

/-!
`dsimp` uses the `@[dsimp_congr]` theorems of a privately imported module in the private scope only.
In a public signature, such a theorem is not accessible, and `dsimp` skips it without an error.
-/

public theorem packLen_public (n : Nat) (v : Vector Nat n) :
    (by dsimp only [Nat.add_zero]; exact fun _ => True : packLen (n + 0) v = packLen n v → Prop) rfl :=
  trivial

theorem packLen_private (n : Nat) (v : Vector Nat n) :
    (by dsimp only [Nat.add_zero]; exact fun _ => True : packLen (n + 0) v = packLen n v → Prop) rfl :=
  trivial

/-! `simp` skips such a theorem in a public signature, too. -/

public theorem packLen_public_simp (n : Nat) (v : Vector Nat n) :
    (by simp only [Nat.add_zero]; exact fun _ => True : packLen n v = packLen n v + 0 → Prop) rfl ∨
      True :=
  Or.inr trivial
