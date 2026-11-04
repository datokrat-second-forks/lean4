import Lean
open Lean Meta Elab Tactic

/-!
Tests the `Sym.simp` control-flow simprocs (`Sym.Simp.simpControl`) on `uif` (`UDecidable.ite`)
and `uif h :` (`UDecidable.dite`): reduction when the condition simplifies to `True`/`False`, and
congruence on the condition otherwise, where the rewritten condition gets the instance
`UDecidable.classical`.
-/

elab "sym_simp" "[" declNames:ident,* "]" : tactic => do
  let rewrite ← Sym.mkSimprocFor (← declNames.getElems.mapM fun s => realizeGlobalConstNoOverload s.raw) Sym.Simp.dischargeSimpSelf
  let methods : Sym.Simp.Methods := {
    pre  := Sym.Simp.simpControl
    post := Sym.Simp.evalGround >> rewrite
  }
  liftMetaTactic1 fun mvarId => Sym.SymM.run do
    let mvarId ← Sym.preprocessMVar mvarId
    (← Sym.simpGoal mvarId methods).toOption

example : (uif True then a else b) = a := by
  sym_simp []

example : (uif False then a else b) = b := by
  sym_simp []

example (f g : Nat → Nat) : (uif a + 0 = a then f else g) a = f a := by
  sym_simp [Nat.add_zero]

example (f g : Nat → Nat → Nat) : (uif a + 0 ≠ a then f else g) a (b + 0) = g a b := by
  sym_simp [Nat.add_zero]

/--
trace: a b : Nat
f g : Nat → Nat → Nat
h : a = b
⊢ (uif ¬a = b then id f else id (id g)) a (b + 0) = g a b
-/
#guard_msgs in
example (f g : Nat → Nat → Nat) (h : a = b) : (uif a + 0 ≠ b then id f else id (id g)) a (b + 0) = g a b := by
  sym_simp [Nat.add_zero, id_eq]
  trace_state -- the branches are not simplified
  subst h
  sym_simp [Nat.add_zero, id_eq]

example : (uif _ : True then a else b) = a := by
  sym_simp []

example : (uif _ : False then a else b) = b := by
  sym_simp []

example (f g : Nat → Nat) : (uif _ : a + 0 = a then f else g) a = f a := by
  sym_simp [Nat.add_zero]

example (f g : Nat → Nat → Nat) : (uif _ : a + 0 ≠ a then f else g) a (b + 0) = g a b := by
  sym_simp [Nat.add_zero]

/--
trace: a b : Nat
f g : Nat → Nat → Nat
h : a = b
⊢ (uif h : ¬a = b then id f else id (id g)) a (b + 0) = g a b
-/
#guard_msgs in
example (f g : Nat → Nat → Nat) (h : a = b) : (uif _ : a + 0 ≠ b then id f else id (id g)) a (b + 0) = g a b := by
  sym_simp [Nat.add_zero, id_eq]
  trace_state
  subst h
  sym_simp [Nat.add_zero, id_eq]

/-! The proofs of the rewritten condition are threaded into the dependent branches. -/

example (a : Nat) (f : a = a → Nat) (g : ¬a = a → Nat) :
    (uif h : a + 0 = a then f (Nat.add_zero a ▸ h) else g (Nat.add_zero a ▸ h)) = f rfl := by
  sym_simp [Nat.add_zero]
  rfl

example (a b : Nat) (f : a = b → Nat) (g : ¬a = b → Nat) (k : Nat → Nat) :
    k (uif h : a + 0 = b then f (Nat.add_zero a ▸ h) else g (Nat.add_zero a ▸ h)) =
      k (uif h : a = b then f h else g h) := by
  sym_simp [Nat.add_zero]
  rfl
