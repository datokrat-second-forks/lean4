/-!
Tests that `induction` accepts indices built from variables by the constructor and the projector
of a `newtype`, as it does for one-field structures (see `inductionStructIndex.lean`): an index
`Wrap.mk x` becomes a fresh variable `y` by substituting `y.inner` for `x`, and an index `x.inner`
by substituting `Wrap.mk y` for `x`.
-/

newtype Wrap := Nat with inner

/--
trace: case single
a : Nat
b b✝ : Wrap
hr : Wrap.mk a = b✝
⊢ a = b✝.inner
---
trace: case tail
a : Nat
b b✝ c✝ : Wrap
h : Relation.TransGen (fun a b => a = b) (Wrap.mk a) b✝
hr : b✝ = c✝
ih : a = b✝.inner
⊢ a = c✝.inner
-/
#guard_msgs in
example {a b} (h : Relation.TransGen (fun a b : Wrap => a = b) (.mk a) (.mk b)) : a = b := by
  induction h with
  | single hr => trace_state; subst hr; rfl
  | tail h hr ih => trace_state; subst hr; exact ih

-- Projection direction: the index `x.inner` becomes a variable and `x` becomes `Wrap.mk x`.
/--
trace: case single
a x b✝ : Nat
hr : a = b✝
⊢ a = b✝
---
trace: case tail
a x b✝ c✝ : Nat
h : Relation.TransGen (fun a b => a = b) a b✝
hr : b✝ = c✝
ih : a = b✝
⊢ a = c✝
-/
#guard_msgs in
example {a : Nat} {x : Wrap} (h : Relation.TransGen (fun a b : Nat => a = b) a x.inner) :
    a = x.inner := by
  induction h with
  | single hr => trace_state; exact hr
  | tail h hr ih => trace_state; exact ih.trans hr

-- Hypotheses depending on the replaced variable are rewritten too.
example {a b} (h : Relation.TransGen (fun a b : Wrap => a = b) (.mk a) (.mk b)) (hb : 0 < b) :
    0 < a := by
  induction h with
  | single hr => subst hr; exact hb
  | tail h hr ih => subst hr; exact ih hb

-- Chains through a `newtype` and a one-field structure in both orders.
structure Box where
  w : Wrap

newtype Wrap2 := Box with box

example {a b} (h : Relation.TransGen (fun a b : Box => a = b) ⟨.mk a⟩ ⟨.mk b⟩) : a = b := by
  induction h with
  | single hr => subst hr; rfl
  | tail h hr ih => subst hr; exact ih

example {a b} (h : Relation.TransGen (fun a b : Wrap2 => a = b) (.mk ⟨.mk a⟩) (.mk ⟨.mk b⟩)) :
    a = b := by
  induction h with
  | single hr => subst hr; rfl
  | tail h hr ih => subst hr; exact ih

example {a : Nat} {x : Wrap2} (h : Relation.TransGen (fun a b : Nat => a = b) a x.box.w.inner) :
    a = x.box.w.inner := by
  induction h with
  | single hr => exact hr
  | tail h hr ih => exact ih.trans hr
