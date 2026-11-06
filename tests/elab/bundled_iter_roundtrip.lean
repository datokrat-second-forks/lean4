import Std
import Lean

/-!
Prototype: let `simp` rewrite the function inside `Iter.map` under consumers such as `Iter.toList`
by temporarily switching to a non-dependent bundled view of the iterator.

A pre-simproc on each consumer bundles the iterator argument into `BundledIter.mk it`, simplifies
it with extra pre-lemmas that turn combinators into `BundledIter` operations (e.g.
`BundledIter.map f b`, where `f` is an ordinary non-dependent argument), and then unfolds the
result back into iterator terms by a definitional transformation. The outer `simp` never sees
`BundledIter` terms, so bundling and unbundling cannot loop, and post-lemmas on the consumer
still apply. Compare `bundled_iter_congr.lean`, which uses `@[congr]` lemmas instead.
-/

open Std Std.Iterators

structure BundledIter (β : Type) where
  {α : Type}
  [inst : Iterator α Id β]
  it : Iter (α := α) β

/-! Bundled views: non-dependent counterparts of combinators and consumers. -/

def BundledIter.map {β γ : Type} (f : β → γ) (b : BundledIter β) : BundledIter γ :=
  @BundledIter.mk γ _ (@Types.Map.instIterator b.α β γ Id Id Id.instMonad b.inst _ _)
    (@Iter.map b.α β γ b.inst f b.it)

def BundledIter.toList {β : Type} (b : BundledIter β) : List β := @Iter.toList b.α β b.inst b.it
def BundledIter.toArray {β : Type} (b : BundledIter β) : Array β := @Iter.toArray b.α β b.inst b.it

/-! Bundling lemmas (one per combinator), used as pre-lemmas inside the bundled simp call only. -/

theorem BundledIter.mk_map {α β γ : Type} [Iterator α Id β] {it : Iter (α := α) β} {f : β → γ} :
    BundledIter.mk (it.map f) = BundledIter.map f (BundledIter.mk it) := rfl

open Lean Meta Simp

/-- Unfold bundled views and reduce `BundledIter` projections of `BundledIter.mk`. -/
def unbundle (e : Expr) : MetaM Expr :=
  Meta.transform e (post := fun s => do
    if s.isHeadBetaTarget then return .visit s.headBeta
    let projIdx? := if s.isAppOfArity ``BundledIter.α 2 then some 1
      else if s.isAppOfArity ``BundledIter.inst 2 then some 2
      else if s.isAppOfArity ``BundledIter.it 2 then some 3 else none
    if let some i := projIdx? then
      let c := s.appArg!
      if c.isAppOfArity ``BundledIter.mk 4 then return .done c.getAppArgs[i]!
      return .continue
    if s.isApp then if let .const n _ := s.getAppFn then
      if n.getPrefix == ``BundledIter && !(← isProjectionFn n) && n != ``BundledIter.mk then
        if let some s' ← delta? s (· == n) then return .visit s'
    return .continue)

def bundlingLemmas : Array Name := #[``BundledIter.mk_map]

/--
Shared implementation for consumers `@c α β inst it`: simplify `BundledIter.mk it` (bundling
combinators via pre-lemmas), then rebuild `c` from the bundled result.
-/
def simpBundledConsumer (bundled : Name) (e : Expr) : SimpM Step := do
  unless e.getAppNumArgs == 4 do return .continue
  let #[α, β, inst, it] := e.getAppArgs | return .continue
  let b ← try mkAppOptM ``BundledIter.mk #[β, α, inst, it] catch _ => return .continue
  let thms ← Simp.getSimpTheorems
  let mut extra : SimpTheorems := {}
  for n in bundlingLemmas do
    extra ← extra.addConst n (post := false)
  let r ← withSimpTheorems (thms.push extra) <| Simp.simp b
  let eNew ← unbundle (mkApp2 (mkConst bundled) β r.expr)
  if eNew == e then return .continue
  let proof? ← r.proof?.mapM fun h => do
    mkExpectedTypeHint (← Meta.mkCongrArg (mkApp (mkConst bundled) β) h) (← mkEq e eNew)
  return .continue (some { expr := eNew, proof? })

simproc_decl bundleToList (Iter.toList _) := simpBundledConsumer ``BundledIter.toList
simproc_decl bundleToArray (Iter.toArray _) := simpBundledConsumer ``BundledIter.toArray

/-! Tests -/

def g (n : Nat) : Nat := 0 + n
@[simp] theorem g_eq (n : Nat) : g n = n := Nat.zero_add n

example (l r : List Nat) (h : ((l.iter.map (fun x => x)).map (fun x => x)).toList = r) :
    ((l.iter.map (fun x => g x)).map (fun x => g (g x))).toList = r := by
  simp only [g_eq, ↓bundleToList]
  guard_target =ₛ ((l.iter.map (fun x => x)).map (fun x => x)).toList = r
  exact h

example (l l' : List Nat) (hl : l = l') (r : Array Nat)
    (h : ((l'.iter.map (fun x => x)).map (fun x => x)).toArray = r) :
    ((l.iter.map (fun x => g x)).map (fun x => g x)).toArray = r := by
  simp only [g_eq, hl, ↓bundleToArray]
  guard_target =ₛ ((l'.iter.map (fun x => x)).map (fun x => x)).toArray = r
  exact h

-- library post-lemmas on the consumer still see the unbundled form
example (l : List Nat) : (l.iter.map (fun x => g x + 1)).toList = l.map (· + 1) := by
  simp [↓bundleToList]

-- nothing to rewrite: terminates without progress
example (l : List Nat) (p : Nat → Prop) (h : p ((l.iter.map (fun x => x * 2)).toList.length)) :
    p ((l.iter.map (fun x => x * 2)).toList.length) := by
  fail_if_success simp only [↓bundleToList]
  exact h
