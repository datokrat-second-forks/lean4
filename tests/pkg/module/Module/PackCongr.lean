module

public import Module.PackCongrBase
import Module.PackCongrPriv

/-!
`dsimp` finds `@[dsimp_congr]` theorems of privately imported modules. In a public signature, such
a theorem is not accessible, and `dsimp` must still be able to use it.
-/

public theorem packLen_public (n : Nat) (v : Vector Nat n) :
    (by dsimp only [Nat.add_zero]; exact fun _ => True : packLen (n + 0) v = packLen n v → Prop) rfl :=
  trivial

theorem packLen_private (n : Nat) (v : Vector Nat n) :
    (by dsimp only [Nat.add_zero]; exact fun _ => True : packLen (n + 0) v = packLen n v → Prop) rfl :=
  trivial
