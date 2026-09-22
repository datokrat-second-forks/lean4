import Lean

/-! Tests the canonical equivalence API used by instance transport. -/

universe u v w
variable {α : Sort u} {β : Sort v} {γ : Sort w}

example (e f : Lean.CanonicalEquivalence α β) (h : ∀ x, e.toFun x = f.toFun x) :
    e = f := Lean.CanonicalEquivalence.ext h
example (e : Lean.CanonicalEquivalence α β) :
    e.symm.trans e = Lean.CanonicalEquivalence.refl β := e.symm_trans_self
example (e : Lean.CanonicalEquivalence α β) :
    e.trans e.symm = Lean.CanonicalEquivalence.refl α := e.self_trans_symm
example (e : Lean.CanonicalEquivalence α β) (f : Lean.CanonicalEquivalence β γ) :
    (e.trans f).symm = f.symm.trans e.symm :=
  e.symm_trans f

run_meta do
  let env ← Lean.getEnv
  if env.contains `Equiv then
    throwError "canonical transport must not declare a root Equiv"
  unless Lean.getReducibilityStatusCore env ``Lean.CanonicalEquivalence.refl == .semireducible do
    throwError "Lean.CanonicalEquivalence.refl must be semireducible"
  unless Lean.getReducibilityStatusCore env ``Lean.CanonicalEquivalence.symm == .implicitReducible do
    throwError "Lean.CanonicalEquivalence.symm must be implicit_reducible"
  unless Lean.getReducibilityStatusCore env ``Lean.CanonicalEquivalence.trans == .semireducible do
    throwError "Lean.CanonicalEquivalence.trans must be semireducible"

namespace Lean.CanonicalEquivalence
example (e f : Lean.CanonicalEquivalence α β) (h : ∀ x, e.toFun x = f.toFun x) : e = f := ext h
end Lean.CanonicalEquivalence
