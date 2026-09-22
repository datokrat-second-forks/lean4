import Lean

/-! Tests the canonical equivalence API used by instance transport. -/

universe u v
variable {α : Sort u} {β : Sort v}

example (e f : Lean.CanonicalEquivalence α β)
    (h₁ : e.toFun = f.toFun) (h₂ : e.invFun = f.invFun) :
    e = f := Lean.CanonicalEquivalence.ext h₁ h₂
example (e : Lean.CanonicalEquivalence α β) :
    e.symm.trans e = Lean.CanonicalEquivalence.refl β := e.symm_trans
example (e : Lean.CanonicalEquivalence α β) :
    e.trans e.symm = Lean.CanonicalEquivalence.refl α := e.trans_symm

run_meta do
  let env ← Lean.getEnv
  if env.contains `Equiv then
    throwError "canonical transport must not declare a root Equiv"
  for name in [``Lean.CanonicalEquivalence.refl, ``Lean.CanonicalEquivalence.symm,
      ``Lean.CanonicalEquivalence.trans] do
    unless Lean.getReducibilityStatusCore env name == .reducible do
      throwError "{name} must be reducible"
