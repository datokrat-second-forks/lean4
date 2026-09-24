module

import Lean

/-!
# Application wrappers can affect parameter inference

`wrapped` and `raw` are definitionally equal. Bare `apply wrapped_rule` infers `C`,
but `apply raw_rule` fails; specifying `(C := C)` repairs it.

There are no coercions or global instances. The two evaluation records are passed explicitly.
Their shared class projection preserves a structural comparison in the wrapped case.
The raw case unfolds to a projection from `?inst : Ops ?C`; synthesis gets stuck on `?C`.
The extra `functionEval.eval` in each goal exposes this difference in unfolding order.

In this reduction, changing `Evaluation` from `class` to `structure` makes both applications
succeed. A global instance for `Ops C` for every `C` also makes both succeed.
Composition with `id` is dispensable, but retained to resemble the original `Equiv.trans` issue.

This is Mathlib-free and uses no extra axioms or elaborator-option changes.
`fail_if_success` checks the expected failure. Remove it to inspect the error, or enable
`trace.Meta.isDefEq` on either application. See downstream anomaly 013 for the larger example.
-/

namespace CoercionCompositionInference

structure Map where
  toFun : Nat → Nat

class Evaluation (F : Type) where
  eval : F → Nat → Nat

@[instance_reducible] def mapEval : Evaluation Map := ⟨Map.toFun⟩
@[instance_reducible] def functionEval : Evaluation (Nat → Nat) := ⟨id⟩

class Ops (C : Type) where
  op : Nat → Nat

def operation (C : Type) [Ops C] : Map := ⟨Ops.op (C := C)⟩

def wrapped (C : Type) [Ops C] : Nat → Nat :=
  (mapEval.eval (operation C)) ∘ id

def raw (C : Type) [Ops C] : Nat → Nat :=
  (operation C).toFun ∘ id

example (C : Type) [Ops C] : wrapped C = raw C := rfl

theorem wrapped_rule {C : Type} [Ops C] (x : Nat) :
    (wrapped C) x = Ops.op (C := C) x := rfl

theorem raw_rule {C : Type} [Ops C] (x : Nat) :
    (raw C) x = Ops.op (C := C) x := rfl

example (C : Type) (x : Nat) :
    letI : Ops C := ⟨Nat.succ⟩
    (functionEval.eval (wrapped C)) x = Ops.op (C := C) x := by
  letI : Ops C := ⟨Nat.succ⟩
  apply wrapped_rule

example (C : Type) (x : Nat) :
    letI : Ops C := ⟨Nat.succ⟩
    (functionEval.eval (raw C)) x = Ops.op (C := C) x := by
  letI : Ops C := ⟨Nat.succ⟩
  fail_if_success apply raw_rule
  apply raw_rule (C := C)

end CoercionCompositionInference
