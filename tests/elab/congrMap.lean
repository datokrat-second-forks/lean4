/-!
Tests for `@[congr_map]`: a map `T.congrMap f x` whose value is a cast reduces like the identity
when `f` is a cast function, such as the constructor or projection of a `+defeq` structure. It
cancels with the maps it is applied to, is pushed into constructors and `Quot.mk`, and commutes with
projections.
-/

/-- `f` is a cast along a type equality. -/
class IsCast {α β : Type u} (f : α → β) : Prop where
  eq : α = β
  apply_eq : ∀ a, f a = cast eq a

structure +defeq Wrap (α : Type u) where
  wrap ::
  unwrap : α

open Wrap (wrap unwrap)

instance : IsCast (@wrap α) := ⟨by with_unfolding_all rfl, fun _ => by with_unfolding_all rfl⟩
instance : IsCast (@unwrap α) := ⟨by with_unfolding_all rfl, fun _ => by with_unfolding_all rfl⟩

instance {α β γ : Type u} (g : β → γ) (f : α → β) [hg : IsCast g] [hf : IsCast f] :
    IsCast (g ∘ f) where
  eq := hf.eq.trans hg.eq
  apply_eq a := by
    show g (f a) = _
    rw [hf.apply_eq, hg.apply_eq, cast_cast]

@[congr_map, irreducible]
def List.congrMap {α β : Type u} (f : α → β) [h : IsCast f] (l : List α) : List β :=
  cast (congrArg List h.eq) l

instance {α β : Type u} (f : α → β) [h : IsCast f] : IsCast (List.congrMap f) where
  eq := congrArg List h.eq
  apply_eq _ := by unfold List.congrMap; rfl

/-! Maps along cast functions cancel, also in longer chains and at `reducible` transparency. -/

example (l : List Nat) : List.congrMap unwrap (List.congrMap wrap l) = l := rfl

example (l : List (Wrap Nat)) : List.congrMap wrap (List.congrMap unwrap l) = l := rfl

example (l : List Nat) : List.congrMap unwrap (List.congrMap wrap l) = l := by with_reducible rfl

example (l : List Nat) : List.congrMap unwrap (List.congrMap wrap l) = l := by simp

example (l : List Nat) :
    List.congrMap unwrap (List.congrMap unwrap (List.congrMap wrap (List.congrMap wrap l))) = l :=
  rfl

example (l : List Nat) :
    List.congrMap unwrap (List.congrMap unwrap (List.congrMap (wrap ∘ wrap) l)) = l :=
  rfl

example (l l' : List Nat) (h : List.congrMap wrap l = List.congrMap wrap l') :
    List.congrMap unwrap (List.congrMap wrap l) = l' := by
  rw [h]

/-! Maps are pushed into constructors, mapping each field. -/

example (a : Nat) (l : List Nat) :
    List.congrMap wrap (a :: l) = wrap a :: List.congrMap wrap l := rfl

example : List.congrMap wrap [1, 2] = [wrap 1, wrap 2] := rfl

/-! Maps of maps: the elements of a list of lists are mapped with the map of lists. -/

example (ll : List (List Nat)) :
    List.congrMap (List.congrMap unwrap) (List.congrMap (List.congrMap wrap) ll) = ll := rfl

example (l : List Nat) (ll : List (List Nat)) :
    List.congrMap (List.congrMap wrap) (l :: ll) =
      List.congrMap wrap l :: List.congrMap (List.congrMap wrap) ll := rfl

/-! Two stuck chains with the same endpoints are compared by their innermost arguments. -/

example (l : List Nat) :
    List.congrMap (List.congrMap unwrap) (List.congrMap (List.congrMap wrap) [l]) =
      [List.congrMap unwrap (List.congrMap wrap l)] := rfl

/-! Recursive types. -/

inductive Tree (α : Type u) where
  | leaf
  | node (l : Tree α) (a : α) (r : Tree α)

@[congr_map, irreducible]
def Tree.congrMap {α β : Type u} (f : α → β) [h : IsCast f] (t : Tree α) : Tree β :=
  cast (congrArg Tree h.eq) t

example (l r : Tree Nat) (a : Nat) :
    Tree.congrMap wrap (.node l a r) = .node (Tree.congrMap wrap l) (wrap a) (Tree.congrMap wrap r) :=
  rfl

def Tree.mirror : Tree α → Tree α
  | leaf => leaf
  | node l a r => node r.mirror a l.mirror

/-- Functions that do not look at the elements commute with maps in the kernel. -/
example (t : Tree Nat) : Tree.congrMap wrap t.mirror = (Tree.congrMap wrap t).mirror := by
  with_unfolding_all rfl

/-! Structures: maps are pushed into constructors, proofs are cast, and maps commute with projections. -/

structure NEList (α : Type u) where
  items : List α
  ne : items ≠ []

@[congr_map, irreducible]
def NEList.congrMap {α β : Type u} (f : α → β) [h : IsCast f] (s : NEList α) : NEList β :=
  cast (congrArg NEList h.eq) s

example (s : NEList Nat) : (NEList.congrMap wrap s).items = List.congrMap wrap s.items := rfl

example (s : NEList Nat) : NEList.congrMap unwrap (NEList.congrMap wrap s) = s := rfl

example : (NEList.congrMap wrap ⟨[1], List.cons_ne_nil 1 []⟩).items = [wrap 1] := rfl

/-! Quotients: maps are pushed into `Quot.mk`, mapping the representative. -/

def Bag (α : Type u) := Quot fun l₁ l₂ : List α => l₁.Perm l₂

def Bag.mk (l : List α) : Bag α := Quot.mk _ l

@[congr_map, irreducible]
def Bag.congrMap {α β : Type u} (f : α → β) [h : IsCast f] (b : Bag α) : Bag β :=
  cast (congrArg Bag h.eq) b

example (l : List Nat) : Bag.congrMap wrap (Bag.mk l) = Bag.mk (List.congrMap wrap l) := rfl

example (b : Bag Nat) : Bag.congrMap unwrap (Bag.congrMap wrap b) = b := rfl

structure UBag (α : Type u) where
  val : Bag α
  ne : val ≠ Bag.mk []

@[congr_map, irreducible]
def UBag.congrMap {α β : Type u} (f : α → β) [h : IsCast f] (s : UBag α) : UBag β :=
  cast (congrArg UBag h.eq) s

example (s : UBag Nat) : (UBag.congrMap wrap s).val = Bag.congrMap wrap s.val := rfl

example (s : UBag Nat) : UBag.congrMap unwrap (UBag.congrMap wrap s) = s := rfl

/-!
Functions whose applications reduce to cast functions at `.implicit` transparency are cast functions,
and pushed maps keep them.
-/

structure Iso (α β : Type u) where
  toFun : α → β
  invFun : β → α

@[implicit_reducible]
def wrapIso : Iso α (Wrap α) := ⟨wrap, unwrap⟩

instance : IsCast (@wrapIso α).toFun :=
  ⟨by with_unfolding_all rfl, fun _ => by with_unfolding_all rfl⟩
instance : IsCast (@wrapIso α).invFun :=
  ⟨by with_unfolding_all rfl, fun _ => by with_unfolding_all rfl⟩

example (l : List Nat) : List.congrMap wrapIso.invFun (List.congrMap wrapIso.toFun l) = l := rfl

example (a : Nat) (l : List Nat) :
    List.congrMap wrapIso.toFun (a :: l) = wrapIso.toFun a :: List.congrMap wrapIso.toFun l := rfl

/-! A map between types that agree reduces to its argument, whatever the function. -/

def myId (n : Nat) : Nat := n

instance : IsCast myId := ⟨rfl, fun _ => rfl⟩

example (l : List Nat) : List.congrMap myId l = l := rfl

/-!
Other functions are not cast functions, even if they are definitionally the identity: maps along
them are opaque, but the kernel still sees through them.
-/

def myWrap (a : α) : Wrap α := wrap a

instance : IsCast (@myWrap α) := ⟨by with_unfolding_all rfl, fun _ => by with_unfolding_all rfl⟩

/--
error: Type mismatch
  rfl
has type
  ?m.11 = ?m.11
but is expected to have type
  List.congrMap unwrap (List.congrMap myWrap l) = l
-/
#guard_msgs in
example (l : List Nat) : List.congrMap unwrap (List.congrMap myWrap l) = l := rfl

example (l : List Nat) : List.congrMap unwrap (List.congrMap myWrap l) = l := by
  with_unfolding_all rfl

/-! Registration checks the shape of the map. -/

/--
error: invalid `@[congr_map]` declaration `badMap`, its value must be `cast h x : List β`
-/
#guard_msgs in
@[congr_map]
def List.badMap {α β : Type u} (f : α → β) [IsCast f] (l : List α) : List β := l.map f

/--
error: invalid `@[congr_map]` declaration `congrMap'`, `List` already has the map `congrMap`
-/
#guard_msgs in
@[congr_map]
def List.congrMap' {α β : Type u} (f : α → β) [h : IsCast f] (l : List α) : List β :=
  cast (congrArg List h.eq) l

/--
error: invalid `@[congr_map]` declaration `badShape`, expected the arguments `{α β : Type u} (f : α → β) [inst] (x : T α)` for a type `T.{u}` with one parameter
-/
#guard_msgs in
@[congr_map]
def List.badShape {α β : Type u} (h : α = β) (l : List α) : List β :=
  cast (congrArg List h) l
