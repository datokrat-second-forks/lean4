module

/-! Auxiliary module for `Module.PackCongr`. -/

public structure VectorPack where
  n : Nat
  v : Vector Nat n

public def packLen (n : Nat) (v : Vector Nat n) : Nat := v.toList.length
