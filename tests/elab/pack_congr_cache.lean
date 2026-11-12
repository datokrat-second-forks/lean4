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

/-!
A head with a `@[dsimp_congr]` theorem that has a hypothesis under binders and with a `@[congr]`
theorem: `simp` uses the first as the congruence of the head and does not try the second. So it
visits the function body as often as with the `@[congr]` theorem alone: once in the hypothesis of
the theorem and, because nothing changed, once more in the default congruence.
-/

class AddZ (M : Type) where
  add : M → M → M
  zero : M

structure AddZPack where
  carrier : Type
  [inst : AddZ carrier]

def lsum {M : Type} [AddZ M] (s : List Nat) (f : Nat → M) : M :=
  s.foldr (fun x acc => AddZ.add (f x) acc) AddZ.zero

@[congr]
theorem lsum_congr {M : Type} [AddZ M] {s s' : List Nat} {f f' : Nat → M} (hs : s = s')
    (hf : ∀ x, x ∈ s' → f x = f' x) : lsum s f = lsum s' f' := by
  cases hs
  induction s with
  | nil => rfl
  | cons a t ih =>
    have h₁ := hf a List.mem_cons_self
    have h₂ := ih fun x hx => hf x (List.mem_cons_of_mem _ hx)
    simp only [lsum, List.foldr] at h₂ ⊢
    rw [h₁, h₂]

instance : AddZ Nat := ⟨Nat.add, 0⟩

def mark' (n : Nat) : Nat := n

simproc_decl countMark' (mark' _) := fun e => do
  Lean.logInfo m!"visit {e}"
  return .continue

/--
info: visit mark' x
---
info: visit mark' x
---
error: `simp` made no progress
-/
#guard_msgs in
example (s : List Nat) : lsum s (fun x => mark' x) = 0 := by
  simp +contextual only [countMark']

@[dsimp_congr]
theorem lsum_pack_congr {M M' : Type} [i : AddZ M] [i' : AddZ M'] {s s' : List Nat}
    {f : Nat → M} {f' : Nat → M'} (h : AddZPack.mk M = AddZPack.mk M') (hs : s = s')
    (hf : ∀ x, x ∈ s' → HEq (f x) (f' x)) : HEq (lsum s f) (lsum s' f') := by
  cases h
  exact heq_of_eq (lsum_congr hs fun x hx => eq_of_heq (hf x hx))

/--
info: visit mark' x
---
info: visit mark' x
---
error: `simp` made no progress
-/
#guard_msgs in
example (s : List Nat) : lsum s (fun x => mark' x) = 0 := by
  simp +contextual only [countMark']
