/-!
Tests `@[dsimp_congr]` theorems with a hypothesis under binders, `∀ x, x ∈ s' → HEq (f x) (f' x)`,
next to a pack hypothesis. `simp` rewrites the pack and simplifies `f x` with the bound hypotheses
in the context, as it does for a `@[congr]` theorem.
-/

class AddZ (M : Type) where
  add : M → M → M
  zero : M

structure AddZPack where
  carrier : Type
  [inst : AddZ carrier]

def lsum {M : Type} [AddZ M] (s : List Nat) (f : Nat → M) : M :=
  s.foldr (fun x acc => AddZ.add (f x) acc) AddZ.zero

@[dsimp_congr]
theorem lsum_pack_congr {M M' : Type} [i : AddZ M] [i' : AddZ M'] {s s' : List Nat}
    {f : Nat → M} {f' : Nat → M'} (h : AddZPack.mk M = AddZPack.mk M') (hs : s = s')
    (hf : ∀ x, x ∈ s' → HEq (f x) (f' x)) : HEq (lsum s f) (lsum s' f') := by
  cases h; cases hs
  apply heq_of_eq
  induction s with
  | nil => rfl
  | cons a t ih =>
    have h₁ := eq_of_heq (hf a List.mem_cons_self)
    have h₂ := ih fun x hx => hf x (List.mem_cons_of_mem _ hx)
    simp only [lsum, List.foldr] at h₂ ⊢
    rw [h₁, h₂]

instance : AddZ Nat := ⟨Nat.add, 0⟩

def MyNat := Nat

instance : AddZ MyNat := ⟨Nat.add, (0 : Nat)⟩

theorem myNat_pack : AddZPack.mk MyNat = AddZPack.mk Nat := rfl

def up (n : Nat) : Nat := n + 1
def down (n : Nat) : Nat := n - 1
theorem down_up (n : Nat) : down (up n) = n := rfl

-- With `+contextual`, `simp` uses the hypothesis `x ∈ s` for the function.
example (Q : Nat → Prop) (s : List Nat) (g : Nat → Nat) (hg : ∀ x ∈ s, g x = 0)
    (h : Q (lsum s fun _ => 0)) : Q (lsum s fun x => g x) := by
  simp +contextual only [hg]
  guard_target =ₛ Q (lsum s fun _ => 0)
  exact h

-- `simp` rewrites the pack and simplifies the function with the hypothesis in one step.
example (Q : Nat → Prop) (s : List Nat) (g : Nat → MyNat) (z : MyNat) (hg : ∀ x ∈ s, g x = z)
    (h : Q (lsum (M := Nat) s fun _ => z)) : Q (lsum (M := MyNat) s fun x => g x) := by
  simp +contextual only [myNat_pack, hg]
  guard_target =ₛ Q (lsum (M := Nat) s fun _ => z)
  exact h

-- The list is simplified too, and the hypothesis is about the new list.
example (Q : Nat → Prop) (s : List Nat) (g : Nat → Nat) (hg : ∀ x ∈ s, g x = 0)
    (h : Q (lsum s fun _ => 0)) : Q (lsum (s ++ []) fun x => g x) := by
  simp +contextual only [List.append_nil, hg]
  guard_target =ₛ Q (lsum s fun _ => 0)
  exact h

-- `simp` also rewrites the function body with a `rfl` lemma.
example (Q : Nat → Prop) (s : List Nat) (g : Nat → Nat) (h : Q (lsum s fun x => g x)) :
    Q (lsum s fun x => g (down (up x))) := by
  simp only [down_up]
  guard_target =ₛ Q (lsum s fun x => g x)
  exact h

-- `dsimp` rewrites the pack and the function. It does not need the hypothesis.
example (Q : Nat → Prop) (s : List Nat) (g : Nat → MyNat) (h : Q (lsum (M := Nat) s fun x => g x)) :
    Q (lsum (M := MyNat) s fun x => g (down (up x))) := by
  dsimp only [myNat_pack, down_up]
  guard_target =ₛ Q (lsum (M := Nat) s fun x => g x)
  exact h

-- A function that is not a lambda keeps its form.
example (Q : Nat → Prop) (s : List Nat) (g : Nat → MyNat) (h : Q (lsum (M := Nat) s g)) :
    Q (lsum (M := MyNat) s g) := by
  dsimp only [myNat_pack]
  guard_target =ₛ Q (lsum (M := Nat) s g)
  exact h

example (Q : Nat → Prop) (s : List Nat) (g : Nat → MyNat) (h : Q (lsum (M := Nat) s g)) :
    Q (lsum (M := MyNat) s g) := by
  simp only [myNat_pack]
  guard_target =ₛ Q (lsum (M := Nat) s g)
  exact h

/-! Invalid hypotheses under binders. -/

/--
error: Invalid `congr` theorem: Parameter #9 is not a valid `HEq` hypothesis, which must have the form `HEq a a'` or `∀ ys, HEq a (a' zs)` with a new parameter `a'` and bound variables `zs`
  ?f x ≍ ?f' 0
-/
#guard_msgs in
@[dsimp_congr]
axiom lsum_bad {M M' : Type} [i : AddZ M] [i' : AddZ M'] {s : List Nat}
    {f : Nat → M} {f' : Nat → M'} (h : AddZPack.mk M = AddZPack.mk M')
    (hf : ∀ x, HEq (f x) (f' 0)) : HEq (lsum s f) (lsum s f')
