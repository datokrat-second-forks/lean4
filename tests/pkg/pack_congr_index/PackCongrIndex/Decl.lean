/-
A pack congruence theorem for the test in `PackCongrIndex.lean`.
-/
module

@[expose] public section

class AddZ (M : Type) where
  add : M → M → M
  zero : M

structure AddZPack where
  carrier : Type
  [inst : AddZ carrier]

def double {M : Type} [AddZ M] (m : M) : M := AddZ.add m m

@[dsimp_congr]
theorem double_pack_congr {M M' : Type} [AddZ M] [AddZ M'] (h : AddZPack.mk M = AddZPack.mk M')
    (m : M) (m' : M') (hm : HEq m m') : HEq (double m) (double m') := by
  cases h; cases hm; rfl

instance : AddZ Nat := ⟨Nat.add, 0⟩
def MyNat := Nat
instance : AddZ MyNat := ⟨Nat.add, (0 : Nat)⟩
theorem myNat_pack : AddZPack.mk MyNat = AddZPack.mk Nat := rfl
