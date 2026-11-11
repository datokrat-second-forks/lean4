module

public import Module.PackCongrBase

/-! Auxiliary module for `Module.PackCongr`. -/

@[dsimp_congr]
public theorem packLen_congr (n : Nat) (v : Vector Nat n) (n' : Nat) (v' : Vector Nat n')
    (h : VectorPack.mk n v = VectorPack.mk n' v') : packLen n v = packLen n' v' := by
  cases h; rfl
