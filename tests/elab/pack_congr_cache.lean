import Lean

/-!
`dsimp` calls itself for the hypotheses of a `@[dsimp_congr]` theorem. The nested calls share the
cache of the outer call: `dsimp` visits `mark k` once, although it occurs at three places and at two
nesting levels.
-/

structure Fn where
  toFun : Nat → Nat

structure FnPack where
  g : Fn

@[dsimp_congr]
theorem Fn.toFun_congr (g g' : Fn) (h : FnPack.mk g = FnPack.mk g') (n n' : Nat) (hn : n = n') :
    g.toFun n = g'.toFun n' := by
  cases h; cases hn; rfl

def up (n : Nat) : Nat := n + 1
def down (n : Nat) : Nat := n - 1
theorem down_up (n : Nat) : down (up n) = n := rfl

def mark (n : Nat) : Nat := n

dsimproc_decl countMark (mark _) := fun e => do
  Lean.logInfo m!"visit {e}"
  return .continue

/-- info: visit mark k -/
#guard_msgs in
example (Q : Nat → Nat → Nat → Prop) (g₁ g₂ g₃ g₄ : Fn) (k : Nat)
    (h : Q (g₁.toFun (g₂.toFun (mark k))) (g₃.toFun (g₄.toFun (mark k))) (mark k + k)) :
    Q (g₁.toFun (g₂.toFun (mark k))) (g₃.toFun (g₄.toFun (mark k))) (mark k + down (up k)) := by
  dsimp only [countMark, down_up]
  exact h
