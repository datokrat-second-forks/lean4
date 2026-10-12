module

import Lean

/-!
# An inverse proof can prevent a constructor simp lemma from matching

`bad` and `good` differ only in their right-inverse proof. Both are kernel-valid.
After unfolding `bad`, `simp` cannot instantiate `symm_mk`'s `hr` parameter:
the bare reflexivity proof has type `∀ n, hiddenId (id n) = hiddenId (id n)`,
whereas the parameter requires `∀ n, hiddenId (id n) = n`.
The matcher's restricted transparency does not unfold the ordinary definition `hiddenId`.

Using the explicitly stated theorem `hiddenId_eq` preserves the required proof type,
so the same simplification succeeds for `good`.

The file compiles: `fail_if_success` asserts the failed simplification.
Remove that wrapper to see the error, or enable `trace.Meta.isDefEq` on that step
to inspect the failed assignment of `?hr`. No Mathlib imports are needed; `Equiv` is a local
copy of Mathlib's, since core no longer has one.
-/

namespace InverseProofMatching

structure Equiv (α β : Type) where
  toFun : α → β
  invFun : β → α
  left_inv : Function.LeftInverse invFun toFun
  right_inv : Function.RightInverse invFun toFun

local infixl:25 " ≃ " => Equiv

def Equiv.symm (e : α ≃ β) : β ≃ α := ⟨e.invFun, e.toFun, e.right_inv, e.left_inv⟩

def hiddenId (n : Nat) : Nat := n

theorem hiddenId_eq (n : Nat) : hiddenId n = n := rfl

theorem symm_mk (f g : Nat → Nat)
    (hl : Function.LeftInverse g f) (hr : Function.RightInverse g f) :
    (Equiv.mk f g hl hr).symm.toFun = g := rfl

def bad : Nat ≃ Nat where
  toFun := hiddenId
  invFun := id
  left_inv := hiddenId_eq
  right_inv _ := rfl

example (n : Nat) : bad.symm.toFun n = n := by
  unfold bad
  fail_if_success simp only [symm_mk]
  rfl

def good : Nat ≃ Nat where
  toFun := hiddenId
  invFun := id
  left_inv := hiddenId_eq
  right_inv := hiddenId_eq

example (n : Nat) : good.symm.toFun n = n := by
  unfold good
  simp only [symm_mk]
  rfl

end InverseProofMatching
