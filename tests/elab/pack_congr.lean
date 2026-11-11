import Std

/-!
Tests pack hypotheses `S.mk ps fs = S.mk ps fs'` and `HEq` hypotheses in `@[congr]` theorems, and
`@[dsimp_congr]` theorems. A pack hypothesis lets `simp` and `dsimp` rewrite arguments that depend on
each other (the fields `fs`) together, as one value of the structure `S`. The structure only serves
to state the hypothesis: it never appears in the simplified terms.
-/

/-! A dependent pair of arguments. -/

structure VectorPack where
  n : Nat
  v : Vector Nat n

def f (a : Nat) (b : Vector Nat a) (c : Nat) : Nat := b.toList.length + c

@[congr, dsimp_congr]
theorem f_congr (a : Nat) (b : Vector Nat a) (a' : Nat) (b' : Vector Nat a')
    (h : VectorPack.mk a b = VectorPack.mk a' b') (c c' : Nat) (hc : c = c') :
    f a b c = f a' b' c' := by
  cases h; cases hc; rfl

@[simp] theorem VectorPack.mk_cast {n m : Nat} (h : n = m) (v : Vector Nat n) :
    VectorPack.mk m (v.cast h) = VectorPack.mk n v := by
  subst h; rfl

-- The pack is rewritten propositionally, changing the index together with the vector.
example (h : n = m) (v : Vector Nat n) (c r : Nat) (hr : f n v c = r) : f m (v.cast h) c = r := by
  simp only [VectorPack.mk_cast]
  guard_target =ₛ f n v c = r
  exact hr

-- Arguments without pack hypotheses are rewritten as usual.
example (v : Vector Nat n) (c r : Nat) (hr : f n v c = r) : f n v (0 + c) = r := by
  simp only [Nat.zero_add]
  guard_target =ₛ f n v c = r
  exact hr

-- Without a congruence theorem, the index cannot be rewritten.
def f' (a : Nat) (b : Vector Nat a) : Nat := b.toList.length

/--
error: `simp` made no progress
-/
#guard_msgs in
example (h : n = m) (v : Vector Nat n) : f' m (v.cast h) = n := by
  simp only [VectorPack.mk_cast]

/-! A bundled type with an instance, with an `HEq` hypothesis for an argument outside the pack. -/

structure Bundle where
  carrier : Type
  [inst : Add carrier]

attribute [instance] Bundle.inst

abbrev Bundle.of (α : Type) [Add α] : Bundle := ⟨α⟩

def addTwice {α : Type} [Add α] (x : α) : α := x + x

def K : Bundle := ⟨Nat⟩

theorem K_def : K = Bundle.of Nat := rfl

/-! Without a congruence theorem, rewriting `K` in the carrier is reverted because `K.inst` would be ill-typed. -/

example (x : K.carrier) (r : Nat) (h : @addTwice Nat _ x = r) : addTwice x = r := by
  simp only [K_def]
  guard_target =ₛ @Eq Nat (@addTwice K.carrier K.inst x) r
  exact h

-- The result type depends on the pack, so the conclusion is an `HEq`. Such a theorem is only used
-- definitionally: `simp` rewrites the pack as `dsimp` would, and simplifies `x` by ordinary
-- congruence.
@[dsimp_congr]
theorem addTwice_congr {α α' : Type} [Add α] [Add α'] (h : Bundle.of α = Bundle.of α') (x : α)
    (x' : α') (hx : HEq x x') : HEq (addTwice x) (addTwice x') := by
  cases h; cases hx; rfl

-- Rewriting the pack `Bundle.of K.carrier` based on an equality of bundles: the pack stays a
-- constructor application, and its fields are projections of the rewritten bundle.
@[dsimp_congr]
theorem Bundle.of_congr {B B' : Bundle} (h : B = B') : Bundle.of B.carrier = Bundle.of B'.carrier := by
  cases h; rfl

-- The congruence theorems stack: `addTwice_congr` rewrites the pack, and `Bundle.of_congr` rewrites
-- it through `K`.
example (x : K.carrier) (r : Nat) (h : @addTwice Nat _ x = r) : addTwice x = r := by
  simp only [K_def]
  guard_target =ₛ @addTwice Nat instAddNat x = r
  exact h

example (x : K.carrier) (r : Nat) (h : @addTwice Nat _ x = r) : addTwice x = r := by
  dsimp only [K_def]
  guard_target =ₛ @addTwice Nat instAddNat x = r
  exact h

-- A propositional rewrite of `K` cannot transport the variable `x`.
theorem K_def' : K = Bundle.of Nat := by simp only [K]

/--
error: `simp` made no progress
-/
#guard_msgs in
example (x r : K.carrier) : addTwice x = r := by
  simp only [K_def']

/-!
A `DFunLike.coe`-like coercion: the function together with its type and instance forms a pack, followed by the
argument, whose type depends on the pack.
-/

class MyFunLike (F : Type) (α : outParam Type) (β : outParam (α → Type)) where
  coe : F → (a : α) → β a

structure FunLikePack where
  F : Type
  α : Type
  β : α → Type
  [inst : MyFunLike F α β]
  f : F

structure NatFun where
  toFun : Nat → Nat

instance : MyFunLike NatFun Nat (fun _ => Nat) where
  coe f := f.toFun

@[dsimp_congr]
theorem MyFunLike.coe_congr {F α : Type} {β : α → Type} [MyFunLike F α β] {F' α' : Type} {β' : α' → Type}
    [MyFunLike F' α' β'] (f : F) (f' : F') (h : FunLikePack.mk F α β f = FunLikePack.mk F' α' β' f')
    (x : α) (x' : α') (hx : HEq x x') : HEq (MyFunLike.coe f x) (MyFunLike.coe f' x') := by
  cases h; cases hx; rfl

def NF : Type := NatFun
instance : MyFunLike NF Nat (fun _ => Nat) := inferInstanceAs (MyFunLike NatFun Nat (fun _ => Nat))
def nf : NF := ⟨id⟩
def nf' : NatFun := ⟨id⟩
theorem nf_def : (FunLikePack.mk NF Nat (fun _ => Nat) nf) = FunLikePack.mk NatFun Nat (fun _ => Nat) nf' := rfl

-- `dsimp` rewrites the pack as a whole and keeps the argument.
example (x : Nat) (r : Nat) (h : MyFunLike.coe nf' x = r) : MyFunLike.coe nf x = r := by
  dsimp only [nf_def]
  guard_target =ₛ MyFunLike.coe nf' x = r
  exact h

-- `simp` rewrites the pack definitionally and the argument propositionally, with a proof that does
-- not involve `HEq`.
example (x : Nat) (r : Nat) (h : MyFunLike.coe nf' x = r) : MyFunLike.coe nf (0 + x) = r := by
  simp only [nf_def, Nat.zero_add]
  guard_target =ₛ MyFunLike.coe nf' x = r
  exact h

/-! Iterators: the state type, the instance and the iterator form a pack. -/

open Std Std.Iterators

structure IterPack (β : Type) where
  α : Type
  [inst : Iterator α Id β]
  it : Iter (α := α) β

@[congr, dsimp_congr]
theorem Iter.toList_congr {α α' β : Type} [Iterator α Id β] [Iterator α' Id β]
    (it : Iter (α := α) β) (it' : Iter (α := α') β) (h : IterPack.mk α it = IterPack.mk α' it') :
    it.toList = it'.toList := by
  cases h; rfl

@[congr, dsimp_congr]
theorem Iter.toArray_congr {α α' β : Type} [Iterator α Id β] [Iterator α' Id β]
    (it : Iter (α := α) β) (it' : Iter (α := α') β) (h : IterPack.mk α it = IterPack.mk α' it') :
    it.toArray = it'.toArray := by
  cases h; rfl

-- One congruence theorem for the producer `Iter.map` serves all consumers.
@[congr, dsimp_congr]
theorem Iter.map_pack_congr {α α' β γ : Type} [Iterator α Id β] [Iterator α' Id β]
    (it : Iter (α := α) β) (it' : Iter (α := α') β) (h : IterPack.mk α it = IterPack.mk α' it')
    (f f' : β → γ) (hf : f = f') :
    IterPack.mk _ (it.map f) = IterPack.mk _ (it'.map f') := by
  cases h; cases hf; rfl

def g (n : Nat) : Nat := 0 + n
@[simp] theorem g_eq (n : Nat) : g n = n := Nat.zero_add n

example (l r : List Nat) (h : ((l.iter.map (fun x => x)).map (fun x => x)).toList = r) :
    ((l.iter.map (fun x => g x)).map (fun x => g (g x))).toList = r := by
  simp only [g_eq]
  guard_target =ₛ ((l.iter.map (fun x => x)).map (fun x => x)).toList = r
  exact h

example (l l' : List Nat) (hl : l = l') (r : Array Nat)
    (h : ((l'.iter.map (fun x => x)).map (fun x => x)).toArray = r) :
    ((l.iter.map (fun x => g x)).map (fun x => g x)).toArray = r := by
  simp only [g_eq, hl]
  guard_target =ₛ ((l'.iter.map (fun x => x)).map (fun x => x)).toArray = r
  exact h

-- Library lemmas about the consumer still apply.
example (l : List Nat) : (l.iter.map (fun x => g x + 1)).toList = l.map (· + 1) := by
  simp

-- Nothing to rewrite: no progress.
example (l : List Nat) (p : Nat → Prop) (h : p ((l.iter.map (fun x => x * 2)).toList.length)) :
    p ((l.iter.map (fun x => x * 2)).toList.length) := by
  fail_if_success simp only []
  exact h

-- `dsimp` rewrites the function together with the state type and the instance.
def g₂ (n : Nat) : Nat := n
@[simp] theorem g₂_eq (n : Nat) : g₂ n = n := rfl

example (l r : List Nat) (h : (l.iter.map (fun x => x + 1)).toList = r) :
    (l.iter.map (fun x => g₂ x + 1)).toList = r := by
  dsimp only [g₂_eq]
  guard_target =ₛ (l.iter.map (fun x => x + 1)).toList = r
  exact h

-- Without a congruence theorem for the consumer, `dsimp` rewrites the iterator, but has to keep the
-- old state type, which the unchanged instance refers to.
example (l r : List Nat) (h : (l.iter.map (fun x => g₂ x + 1)).toListRev = r) :
    (l.iter.map (fun x => g₂ x + 1)).toListRev = r := by
  dsimp only [g₂_eq]
  fail_if_success guard_target =ₛ (l.iter.map (fun x => x + 1)).toListRev = r
  exact h

/-! Invalid theorems. -/

/--
error: Invalid `dsimp_congr` theorem: The right-hand side does not reduce to the left-hand side when the hypotheses are instantiated by reflexivity
  f ?a ?b (?c * 1)
-/
#guard_msgs in
@[dsimp_congr] theorem bad1 (a : Nat) (b : Vector Nat a) (a' : Nat) (b' : Vector Nat a')
    (h : VectorPack.mk a b = VectorPack.mk a' b') (c c' : Nat) (hc : c = c') :
    f a b c = f a' b' (c' * 1) := by
  cases h; cases hc; simp

/--
error: Invalid `congr` theorem: Parameter #4 is not a valid pack hypothesis, which must have the form `p = S.mk ps fs'` with new parameters `fs'`
  { n := ?a, v := ?b } = { n := ?a, v := ?b' }
-/
#guard_msgs in
@[congr] theorem bad2 (a : Nat) (b b' : Vector Nat a)
    (h : VectorPack.mk a b = VectorPack.mk a b') : f a b 0 = f a b' 0 := by
  cases h; rfl

/--
error: Invalid `congr` theorem: The conclusion is an `HEq`, which only `dsimp_congr` theorems support
  addTwice ?x ≍ addTwice ?x'
-/
#guard_msgs in
@[congr] theorem bad3 {α α' : Type} [Add α] [Add α'] (h : Bundle.of α = Bundle.of α') (x : α)
    (x' : α') (hx : HEq x x') : HEq (addTwice x) (addTwice x') := by
  cases h; cases hx; rfl

/--
error: Invalid `congr` theorem: Parameter #8 is an `HEq` hypothesis, which only `dsimp_congr` theorems support
  ?x ≍ ?x'
-/
#guard_msgs in
@[congr] theorem bad4 {α α' : Type} [Add α] [Add α'] (h : Bundle.of α = Bundle.of α') (x : α)
    (x' : α') (hx : HEq x x') : (addTwice x = x) = (addTwice x' = x') := by
  cases h; cases hx; rfl

/-! After a `@[dsimp_congr]` theorem applies without progress, `dsimp` still visits the arguments. -/

def gNP (a : Nat) (b : Vector Nat a) (c : Nat) : Nat := b.toList.length + c

@[dsimp_congr]
theorem gNP_congr (a : Nat) (b : Vector Nat a) (a' : Nat) (b' : Vector Nat a')
    (h : VectorPack.mk a b = VectorPack.mk a' b') (c : Nat) : gNP a b c = gNP a' b' c := by
  cases h; rfl

example (v : Vector Nat n) (c r : Nat) (hr : gNP n v c = r) : gNP n v (id c) = r := by
  dsimp only [id]
  guard_target =ₛ gNP n v c = r
  exact hr
