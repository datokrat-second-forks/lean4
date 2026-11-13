import Lean

/-!
The index of the pack congruence theorems of a head function is computed when the attribute is
added, not in each `simp` or `dsimp` call. The counter `index compute` of `debug.simp.packStats`
counts the theorems for which a call had to compute the index keys itself.
-/

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

def triple {M : Type} [AddZ M] (m : M) : M := AddZ.add m (AddZ.add m m)

theorem triple_pack_congr {M M' : Type} [AddZ M] [AddZ M'] (h : AddZPack.mk M = AddZPack.mk M')
    (m : M) (m' : M') (hm : HEq m m') : HEq (triple m) (triple m') := by
  cases h; cases hm; rfl

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

section
attribute [local dsimp_congr] triple_pack_congr

example (Q : Nat → Prop) (m : MyNat) (h : Q (triple (M := Nat) m)) : Q (triple (M := MyNat) m) := by
  dsimp only [myNat_pack]
  exact h
end

/-- info: 0 -/
#guard_msgs in
#index_computations
