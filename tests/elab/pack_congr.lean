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

/-! Without a lens for the pack, `dsimp` still rewrites the fields of the pack one by one. -/

example (v : Vector Nat (id n)) (c r : Nat) (hr : gNP n v c = r) : gNP (id n) v c = r := by
  dsimp only [id]
  guard_target =ₛ gNP n v c = r
  exact hr

/-! `simp` runs the post-lemmas on each occurrence of the result of a pack congruence theorem. -/

theorem f_def (a : Nat) (b : Vector Nat a) (c : Nat) : f a b c = b.toList.length + c := rfl

example (v : Vector Nat n) (c : Nat) : f n v (0 + c) = f n v c := by
  simp only [Nat.zero_add, f_def]

/-!
A constructor with a proof field. The `HEq` hypothesis for the proof keeps the proof and gives it
the type that mentions the rewritten function, so that a lemma about the constructor still unifies.
-/

structure NatMap where
  toFun : Nat → Nat
  pos : ∀ n, 0 < toFun n

structure FunPack where
  f : Nat → Nat

@[dsimp_congr]
theorem NatMap.mk_congr (f f' : Nat → Nat) (h : FunPack.mk f = FunPack.mk f') (hp : ∀ n, 0 < f n)
    (hp' : ∀ n, 0 < f' n) (hh : HEq hp hp') : HEq (NatMap.mk f hp) (NatMap.mk f' hp') := by
  cases h; rfl

def succ' (n : Nat) : Nat := n + 1

example (P : NatMap → Prop) (hp : ∀ n, 0 < succ' n) (hp' : ∀ n, 0 < n + 1)
    (h : P (NatMap.mk (fun n => n + 1) hp')) : P (NatMap.mk (fun n => succ' n) hp) := by
  dsimp only [succ']
  guard_target =ₛ P (NatMap.mk (fun n => n + 1) (id hp))
  exact h

-- `simp` rewrites the function definitionally, too, and the lemma about the constructor unifies.
theorem NatMap.toFun_mk (f : Nat → Nat) (hp : ∀ n, 0 < f n) (n : Nat) : (NatMap.mk f hp).toFun n = f n :=
  rfl

example (Q : Nat → Prop) (hp : ∀ n, 0 < succ' n) (n : Nat) (h : Q (n + 1)) :
    Q ((NatMap.mk (fun n => succ' n) hp).toFun n) := by
  simp only [succ', NatMap.toFun_mk]
  exact h

/-!
A pack hypothesis under a binder: the pack of a family of types with a family of instances.
-/

class Zer (α : Type) where
  zer : α

structure ZerPack where
  α : Type
  [inst : Zer α]

instance Zer.pi {ι : Type} {f : ι → Type} [∀ i, Zer (f i)] : Zer (∀ i, f i) := ⟨fun _ => Zer.zer⟩

def zerTag (α : Type) [Zer α] : Nat := 0

def NatAlias : Type := Nat
instance : Zer NatAlias := ⟨(0 : Nat)⟩
instance : Zer Nat := ⟨0⟩

@[dsimp_congr]
theorem zerTag_congr {α α' : Type} [Zer α] [Zer α'] (h : ZerPack.mk α = ZerPack.mk α') :
    zerTag α = zerTag α' := by
  cases h; rfl

@[simp]
theorem NatAlias.zerPack : ZerPack.mk NatAlias = ZerPack.mk Nat := rfl

@[dsimp_congr]
theorem Zer.pi.packLens {ι : Type} {f f' : ι → Type} [i : ∀ a, Zer (f a)] [i' : ∀ a, Zer (f' a)]
    (h : ∀ a, @ZerPack.mk (f a) (i a) = @ZerPack.mk (f' a) (i' a)) :
    @ZerPack.mk (∀ a, f a) Zer.pi = @ZerPack.mk (∀ a, f' a) Zer.pi := by
  have : f = f' := funext fun a => congrArg ZerPack.α (h a)
  subst this
  have : i = i' := funext fun a => by injection h a
  subst this; rfl

example (P : Nat → Prop) (h : P (zerTag (Bool → Nat))) : P (zerTag (Bool → NatAlias)) := by
  dsimp only [NatAlias.zerPack]
  guard_target =ₛ P (zerTag (Bool → Nat))
  exact h

/-!
Two pack congruence theorems for one head: `simp` tries the second one when the first one applies
without a change.
-/

def zerTag₂ (α β : Type) [Zer α] [Zer β] : Nat := 0

@[dsimp_congr]
theorem zerTag₂_congr_left {α α' β : Type} [Zer α] [Zer α'] [Zer β]
    (h : ZerPack.mk α = ZerPack.mk α') : zerTag₂ α β = zerTag₂ α' β := by
  cases h; rfl

@[dsimp_congr]
theorem zerTag₂_congr_right {α β β' : Type} [Zer α] [Zer β] [Zer β']
    (h : ZerPack.mk β = ZerPack.mk β') : zerTag₂ α β = zerTag₂ α β' := by
  cases h; rfl

example (P : Nat → Prop) (h : P (zerTag₂ Nat Nat)) : P (zerTag₂ Nat NatAlias) := by
  simp only [NatAlias.zerPack]
  exact h

example (P : Nat → Prop) (h : P (zerTag₂ Nat Nat)) : P (zerTag₂ NatAlias Nat) := by
  simp only [NatAlias.zerPack]
  exact h

/-!
A pack congruence theorem whose left-hand side repeats a parameter does not apply to a projection
application with two different arguments at these positions.
-/

structure Wrap (α β : Type) [Zer α] [Zer β] where
  val : Nat

instance : Zer Bool := ⟨false⟩

@[dsimp_congr]
theorem Wrap.val_diag_congr {α α' : Type} [Zer α] [Zer α'] (h : ZerPack.mk α = ZerPack.mk α')
    (w : Wrap α α) (w' : Wrap α' α') (hw : HEq w w') : w.val = w'.val := by
  cases h; cases hw; rfl

example (P : Nat → Prop) (w : Wrap NatAlias Bool) (h : P w.val) : P w.val := by
  fail_if_success simp only [NatAlias.zerPack]
  fail_if_success dsimp only [NatAlias.zerPack]
  exact h

/-!
A pack congruence theorem with a proof argument: `simp` rewrites the packs and leaves the other
arguments to its default congruence. The instance type check still runs on that result.
-/

def zerTagP (α β : Type) [Zer α] [Zer β] (_ : True) : Nat := 0

@[dsimp_congr]
theorem zerTagP_congr {α α' β β' : Type} [Zer α] [Zer α'] [Zer β] [Zer β']
    (hα : ZerPack.mk α = ZerPack.mk α') (hβ : ZerPack.mk β = ZerPack.mk β')
    (hc : True) {hc' : True} (hh : HEq hc hc') : zerTagP α β hc = zerTagP α' β' hc' := by
  cases hα; cases hβ; rfl

def NatAlias₂ : Type := Nat
instance : Zer NatAlias₂ := ⟨(1 : Nat)⟩
theorem natAlias₂_eq : NatAlias₂ = Nat := rfl

example (P : Nat → Prop) (h : P (zerTagP Nat NatAlias₂ trivial)) :
    P (zerTagP NatAlias NatAlias₂ trivial) := by
  simp only [NatAlias.zerPack, natAlias₂_eq]
  guard_target =ₛ P (zerTagP Nat NatAlias₂ trivial)
  exact h

/-!
A pack over a class variable: the field `[inst : c α]` is an instance although its type is not
syntactically a class. `simp` does not rewrite the carrier alone.
-/

structure CPack (c : Type → Type) where
  α : Type
  [inst : c α]

def cTag (α : Type) [Zer α] : Nat := 0

@[dsimp_congr]
theorem cTag_congr {α α' : Type} [i : Zer α] [i' : Zer α']
    (h : @CPack.mk Zer α i = @CPack.mk Zer α' i') : cTag α = cTag α' := by
  cases h; rfl

example (P : Nat → Prop) (h : P (cTag NatAlias₂)) : P (cTag NatAlias₂) := by
  fail_if_success simp only [natAlias₂_eq]
  fail_if_success dsimp only [natAlias₂_eq]
  exact h

/-!
Two lenses with the same pack in the conclusion: only the lens whose instance matches the term is
tried. The instance field of a pack is part of the index key, so `simp` does not try to synthesize
`ZerB AAlias` for the lens of `ZerB`.
-/

class ZerA (α : Type) extends Zer α
class ZerB (α : Type) extends Zer α

structure ZerAPack where
  α : Type
  [inst : ZerA α]

structure ZerBPack where
  α : Type
  [inst : ZerB α]

@[dsimp_congr]
theorem ZerA.toZer.packLens {α α' : Type} {i : ZerA α} {i' : ZerA α'}
    (h : @ZerAPack.mk α i = @ZerAPack.mk α' i') :
    @ZerPack.mk α (@ZerA.toZer α i) = @ZerPack.mk α' (@ZerA.toZer α' i') := by
  cases h; rfl

@[dsimp_congr]
theorem ZerB.toZer.packLens {α α' : Type} {i : ZerB α} {i' : ZerB α'}
    (h : @ZerBPack.mk α i = @ZerBPack.mk α' i') :
    @ZerPack.mk α (@ZerB.toZer α i) = @ZerPack.mk α' (@ZerB.toZer α' i') := by
  cases h; rfl

def AAlias : Type := Nat
instance AAlias.instZerA : ZerA AAlias := { zer := (0 : Nat) }
instance Nat.instZerA : ZerA Nat := { zer := 0 }

@[simp]
theorem AAlias.zerAPack : ZerAPack.mk AAlias = ZerAPack.mk Nat := rfl

#guard_msgs in
example (P : Nat → Prop) (h : P (@zerTag Nat (@ZerA.toZer Nat _))) :
    P (@zerTag AAlias (@ZerA.toZer AAlias _)) := by
  set_option trace.Meta.synthInstance true in
  simp only [AAlias.zerAPack]
  exact h

#guard_msgs in
example (P : Nat → Prop) (h : P (@zerTag Nat (@ZerA.toZer Nat _))) :
    P (@zerTag AAlias (@ZerA.toZer AAlias _)) := by
  set_option trace.Meta.synthInstance true in
  dsimp only [AAlias.zerAPack]
  exact h

/-!
A lens whose left-hand side has an instance that is not a parent projection also applies to a pack
value with another instance that is definitionally equal at instance transparency.
-/

instance (priority := 0) Zer.pi' {ι : Type} {f : ι → Type} [∀ i, Zer (f i)] : Zer (∀ i, f i) :=
  ⟨fun _ => Zer.zer⟩

example (P : Nat → Prop) (h : P (zerTag (Bool → Nat))) :
    P (@zerTag (Bool → NatAlias) Zer.pi') := by
  dsimp only [NatAlias.zerPack]
  guard_target =ₛ P (zerTag (Bool → Nat))
  exact h

example (P : Nat → Prop) (h : P (zerTag (Bool → Nat))) :
    P (@zerTag (Bool → NatAlias) Zer.pi') := by
  simp only [NatAlias.zerPack]
  guard_target =ₛ P (zerTag (Bool → Nat))
  exact h

/-!
A pack congruence theorem for an under-applied head: the term has an instance argument after the
left-hand side of the theorem. The theorem does not rewrite that instance, so the instance type check
runs on the result and the rewrite of the carrier is reverted.
-/

structure TypePack where
  α : Type

def zerK (α : Type) [Zer α] : Nat := 0

@[dsimp_congr]
theorem zerK_congr {α α' : Type} (h : TypePack.mk α = TypePack.mk α') : HEq (@zerK α) (@zerK α') := by
  cases h; rfl

example (P : Nat → Prop) (h : P (zerK NatAlias₂)) : P (zerK NatAlias₂) := by
  fail_if_success simp only [natAlias₂_eq]
  fail_if_success dsimp only [natAlias₂_eq]
  exact h
