import Std
import Lean

/-!
Prototype: let `simp` rewrite the function inside `Iter.map` under consumers such as `Iter.toList`,
rebuilding the dependent state type and `Iterator` instance canonically.

The state type and instance of `it.map f` depend on `f`, so the default congruence fixes `f`.
Viewing iterator, state type and instance as one `BundledIter` value removes that dependency:
consumers get a `@[congr]` lemma whose hypothesis is an equation between bundled iterators, and
combinators get a `@[congr]` lemma keyed on `BundledIter.mk`. This needs one lemma per consumer
plus one per combinator, and they compose.
-/

open Std Std.Iterators

structure BundledIter (β : Type) where
  {α : Type}
  [inst : Iterator α Id β]
  it : Iter (α := α) β

/-! Consumers: one congr lemma each, independent of the combinators. -/

@[congr] theorem Iter.toList_bcongr {α β : Type} {inst : Iterator α Id β} {it : Iter (α := α) β}
    {b : BundledIter β} (h : @BundledIter.mk β α inst it = b) :
    @Iter.toList α β inst it = @Iter.toList b.α β b.inst b.it := by cases h; rfl

@[congr] theorem Iter.toArray_bcongr {α β : Type} {inst : Iterator α Id β} {it : Iter (α := α) β}
    {b : BundledIter β} (h : @BundledIter.mk β α inst it = b) :
    @Iter.toArray α β inst it = @Iter.toArray b.α β b.inst b.it := by cases h; rfl

/-! Combinators: one congr lemma each (keyed on `BundledIter.mk`), independent of the consumers. -/

@[congr] theorem BundledIter.mk_map_congr {α β γ : Type} [inst : Iterator α Id β]
    {it : Iter (α := α) β} {f f' : β → γ} (hf : f = f')
    {b : BundledIter β} (hb : @BundledIter.mk β α inst it = b) :
    BundledIter.mk (it.map f) =
      @BundledIter.mk γ _ (@Types.Map.instIterator b.α β γ Id Id Id.instMonad b.inst _ _)
        (@Iter.map b.α β γ b.inst f' b.it) := by
  cases hf; cases hb; rfl

/-!
The congr lemmas leave `BundledIter.α/inst/it (BundledIter.mk ..)` in implicit and instance
arguments, which `dsimp` does not visit. This cleans them up.
-/

open Lean Meta in
dsimproc_decl reduceBundledProjs (Iter.toList _) := fun e => do
  let e' ← Meta.transform e (post := fun s => do
    let idx? := if s.isAppOfArity ``BundledIter.α 2 then some 1
      else if s.isAppOfArity ``BundledIter.inst 2 then some 2
      else if s.isAppOfArity ``BundledIter.it 2 then some 3 else none
    if let some i := idx? then
      let c := s.appArg!
      if c.isAppOfArity ``BundledIter.mk 4 then return .done c.getAppArgs[i]!
    return .continue)
  if e' == e then return .continue else return .done e'

/-! Tests. `g n` is not definitionally `n` for a variable `n`, so default congruence cannot help. -/

def g (n : Nat) : Nat := 0 + n
@[simp] theorem g_eq (n : Nat) : g n = n := Nat.zero_add n

example (l : List Nat) : (l.iter.map (fun x => g x)).toList = (l.iter.map id).toList := by
  simp only [g_eq]
  guard_target =~ (l.iter.map (fun x => x)).toList = (l.iter.map id).toList
  rfl

-- nested combinators, other consumer
example (l : List Nat) :
    ((l.iter.map (fun x => g x)).map (fun x => g x)).toArray =
      ((l.iter.map id).map (fun x => x)).toArray := by
  simp only [g_eq]
  guard_target =~ ((l.iter.map (fun x => x)).map (fun x => x)).toArray =
    ((l.iter.map id).map (fun x => x)).toArray
  rfl

-- rewriting the base iterator below several combinators
example (l l' : List Nat) (h : l = l') :
    ((l.iter.map (fun x => g x)).map (fun x => g x)).toList = ((l'.iter.map id).map id).toList := by
  simp only [g_eq, h]
  guard_target =~ ((l'.iter.map (fun x => x)).map (fun x => x)).toList =
    ((l'.iter.map id).map id).toList
  rfl

-- with the cleanup, the result is syntactically canonical
example (l r : List Nat) (h : ((l.iter.map (fun x => x)).map (fun x => x)).toList = r) :
    ((l.iter.map (fun x => g x)).map (fun x => g (g x))).toList = r := by
  simp only [g_eq, reduceBundledProjs]
  guard_target =ₛ ((l.iter.map (fun x => x)).map (fun x => x)).toList = r
  exact h

-- without it, only up to reducible defeq
example (l r : List Nat) (h : ((l.iter.map (fun x => x)).map (fun x => x)).toList = r) :
    ((l.iter.map (fun x => g x)).map (fun x => g (g x))).toList = r := by
  simp only [g_eq]
  fail_if_success guard_target =ₛ ((l.iter.map (fun x => x)).map (fun x => x)).toList = r
  guard_target =~ ((l.iter.map (fun x => x)).map (fun x => x)).toList = r
  exact h
