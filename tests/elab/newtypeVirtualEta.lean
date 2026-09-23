import Lean

/-!
Tests virtual structure eta for `newtype`-declared types (`Lean.Meta.isDefEqVirtualEtaStruct`):
`N.mk (N.toNat x) = x` holds by `rfl`, just like eta for a real one-field structure, even though
`N`/`N.mk`/`N.toNat` are irreducible. Also tests that `simp only` reduces the virtual projection
`N.toNat (N.mk n)` the same way it does for a real structure's projection-of-constructor
(`Lean.Meta.reduceVirtualProj?`, wired into `Simp.reduceStep`).
-/

newtype N := Nat with toNat

-- Virtual eta.
example (x : N) : N.mk (N.toNat x) = x := rfl

-- `simp only` reduces the virtual projection (iota), without any lemmas.
example (n : Nat) : N.toNat (N.mk n) = n := by simp only

-- Virtual eta respects `etaStruct`, like eta for a real structure.
structure S where
  toNat : Nat

open Lean Meta in
run_meta do
  for (T, mk, proj) in [(``N, ``N.mk, ``N.toNat), (``S, ``S.mk, ``S.toNat)] do
    withLocalDeclD `x (mkConst T) fun x => do
      let lhs := mkApp (mkConst mk) (mkApp (mkConst proj) x)
      unless ← isDefEq lhs x do throwError "{T}: expected eta by default"
      if ← withConfig ({ · with etaStruct := .none }) (isDefEq lhs x) then
        throwError "{T}: unexpected eta with `etaStruct := .none`"
