import Lean
open Lean Meta Elab Tactic

/-!
Tests the `Sym.simp` control-flow simproc (`Sym.Simp.simpControl`) on the dependent `bif h :`
(`Bool.dcond`): reduction when the condition simplifies to `true`/`false`, and congruence on the
condition otherwise, where the proof of the rewritten condition is threaded into the branches.
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

example (t : true = true → Nat) (e : true = false → Nat) : Bool.dcond true t e = t rfl := by
  sym_simp []

example (t : false = true → Nat) (e : false = false → Nat) : Bool.dcond false t e = e rfl := by
  sym_simp []

example : (bif _ : true then a else b) = a := by
  sym_simp []

example (b : Bool) (f g : Nat → Nat) : (bif _ : (b || true) then f else g) a = f a := by
  sym_simp [Bool.or_true]

example (b : Bool) (f g : Nat → Nat → Nat) : (bif _ : (b && false) then f else g) a (c + 0) = g a c := by
  sym_simp [Bool.and_false, Nat.add_zero]

/-! The branches are not simplified when the condition is not decided. -/

/--
trace: a : Nat
b : Bool
f g : Nat → Nat
h : b = true
⊢ (bif h : b then id f else id g) a = f a
-/
#guard_msgs in
example (b : Bool) (f g : Nat → Nat) (h : b = true) : (bif _ : (b && true) then id f else id g) a = f a := by
  sym_simp [Bool.and_true, id_eq]
  trace_state
  subst h
  sym_simp [id_eq]

/-! The proofs of the rewritten condition are threaded into the dependent branches. -/

example (b : Bool) (f : b = true → Nat) (g : b = false → Nat) :
    (bif h : (b && true) then f (Bool.and_true b ▸ h) else g (Bool.and_true b ▸ h)) =
      (bif h : b then f h else g h) := by
  sym_simp [Bool.and_true]
  rfl

example (f : true = true → Nat) (g : true = false → Nat) :
    (bif h : (false || true) then f (Bool.false_or true ▸ h) else g (Bool.false_or true ▸ h)) =
      f rfl := by
  sym_simp [Bool.false_or]
  rfl
