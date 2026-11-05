/-
Copyright (c) 2023 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kim Morrison
-/
module

prelude
public import Lean.Meta.AppBuilder
public import Lean.Meta.Canonicalizer
public import Init.Omega

public section

/-!
# The `OmegaM` state monad.

We keep track of the linear atoms (up to defeq) that have been encountered so far,
and also generate new facts as new atoms are recorded.

The main functions are:
* `atoms : OmegaM (List Expr)` which returns the atoms recorded so far
* `lookup (e : Expr) : OmegaM (Nat × Option (HashSet Expr))` which checks if an `Expr` has
  already been recorded as an atom, and records it.
  `lookup` return the index in `atoms` for this `Expr`.
  The `Option (HashSet Expr)` return value is `none` is the expression has been previously
  recorded, and otherwise contains new facts that should be added to the `omega` problem.
  * for each new atom `a` of the form `((x : Nat) : Int)`, the fact that `0 ≤ a`
  * for each new atom `a` of the form `x / k`, for `k` a positive numeral, the facts that
    `k * a ≤ x < k * a + k`
  * for each new atom of the form `((a - b : Nat) : Int)`, the fact:
    `b ≤ a ∧ ((a - b : Nat) : Int) = a - b ∨ a < b ∧ ((a - b : Nat) : Int) = 0`
  * for each new atom of the form `min a b`, the facts `min a b ≤ a` and `min a b ≤ b`
    (and similarly for `max`)
  * for each new atom of the form `if P then a else b` (or `uif`), the disjunction:
    `(P ∧ (if P then a else b) = a) ∨ (¬ P ∧ (if P then a else b) = b)`,
    and similarly for `bif b then a else b'` and `bif h : b then a else b'`
    (also inside `((· : Nat) : Int)`)
The `OmegaM` monad also keeps an internal cache of visited expressions
(not necessarily atoms, but arbitrary subexpressions of one side of a linear relation)
to reduce duplication.
The cache maps `Expr`s to pairs consisting of a `LinearCombo`,
and proof that the expression is equal to the evaluation of the `LinearCombo` at the atoms.
-/

open Lean Meta Omega

namespace Lean.Elab.Tactic.Omega

/-- Context for the `OmegaM` monad, containing the user configurable options. -/
structure Context where
  /-- User configurable options for `omega`. -/
  cfg : OmegaConfig

/-- The internal state for the `OmegaM` monad, recording previously encountered atoms. -/
structure State where
  /-- The atoms up-to-defeq encountered so far. -/
  atoms : Std.HashMap Expr Nat := {}

/-- An intermediate layer in the `OmegaM` monad. -/
abbrev OmegaM' := StateRefT State (ReaderT Context CanonM)

/--
Cache of expressions that have been visited, and their reflection as a linear combination.
-/
@[expose] def Cache : Type := Std.HashMap Expr (LinearCombo × OmegaM' Expr)

/--
The `OmegaM` monad maintains two pieces of state:
* the linear atoms discovered while processing hypotheses
* a cache mapping subexpressions of one side of a linear inequality to `LinearCombo`s
  (and a proof that the `LinearCombo` evaluates at the atoms to the original expression). -/
abbrev OmegaM := StateRefT Cache OmegaM'

/-- Run a computation in the `OmegaM` monad, starting with no recorded atoms. -/
def OmegaM.run (m : OmegaM α) (cfg : OmegaConfig) : MetaM α :=
  m.run' (∅ : Std.HashMap ..) |>.run' {} { cfg } |>.run'

/-- Retrieve the user-specified configuration options. -/
def cfg : OmegaM OmegaConfig := do pure (← read).cfg

/-- Retrieve the list of atoms. -/
def atoms : OmegaM (Array Expr) := do
  return (← getThe State).atoms.toArray.qsort (·.2 < ·.2) |>.map (·.1)

/-- Return the `Expr` representing the list of atoms. -/
def atomsList : OmegaM Expr := do mkListLit (.const ``Int []) (← atoms).toList

/-- Return the `Expr` representing the list of atoms as a `Coeffs`. -/
def atomsCoeffs : OmegaM Expr := do
  return .app (.const ``Coeffs.ofList []) (← atomsList)

/-- Run an `OmegaM` computation, restoring the state afterwards depending on the result. -/
def commitWhen (t : OmegaM (α × Bool)) : OmegaM α := do
  let state ← getThe State
  let cache ← getThe Cache
  let (a, r) ← t
  uif !r then do
    modifyThe State fun _ => state
    modifyThe Cache fun _ => cache
  pure a

/--
Run an `OmegaM` computation, restoring the state afterwards.
-/
def withoutModifyingState (t : OmegaM α) : OmegaM α :=
  commitWhen (do pure (← t, false))

/-- Wrapper around `Expr.nat?` that also allows `Nat.cast`. -/
def natCast? (n : Expr) : Option Nat :=
  match n.getAppFnArgs with
  | (``Nat.cast, #[_, _, n]) => n.nat?
  | _ => n.nat?

/-- Wrapper around `Expr.int?` that also allows `Nat.cast`. -/
def intCast? (n : Expr) : Option Int :=
  match n.getAppFnArgs with
  | (``Nat.cast, #[_, _, n]) => n.nat?
  | _ => n.int?

/--
If `groundNat? e = some n`, then `e` is definitionally equal to `OfNat.ofNat n`.
-/
-- We may want to replace this with an implementation using
-- the internals of `simp (config := {ground := true})`
partial def groundNat? (e : Expr) : Option Nat :=
  match e.getAppFnArgs with
  | (``Nat.cast, #[_, _, n]) => groundNat? n
  | (``HAdd.hAdd, #[_, _, _, _, x, y]) => op (· + ·) x y
  | (``HMul.hMul, #[_, _, _, _, x, y]) => op (· * ·) x y
  | (``HSub.hSub, #[_, _, _, _, x, y]) => op (· - ·) x y
  | (``HDiv.hDiv, #[_, _, _, _, x, y]) => op (· / ·) x y
  | (``HPow.hPow, #[_, _, _, _, x, y]) => op (· ^ ·) x y
  | _ => e.nat?
where op (f : Nat → Nat → Nat) (x y : Expr) : Option Nat :=
  match groundNat? x, groundNat? y with
    | some x', some y' => some (f x' y')
    | _, _ => none

/--
If `groundInt? e = some i`,
then `e` is definitionally equal to the standard expression for `i`.
-/
partial def groundInt? (e : Expr) : Option Int :=
  match e.getAppFnArgs with
  | (``Nat.cast, #[_, _, n]) => groundNat? n
  | (``HAdd.hAdd, #[_, _, _, _, x, y]) => op (· + ·) x y
  | (``HMul.hMul, #[_, _, _, _, x, y]) => op (· * ·) x y
  | (``HSub.hSub, #[_, _, _, _, x, y]) => op (· - ·) x y
  | (``HDiv.hDiv, #[_, _, _, _, x, y]) => op (· / ·) x y
  | (``HPow.hPow, #[_, _, _, _, x, y]) => match groundInt? x, groundNat? y with
    | some x', some y' => some (x' ^ y')
    | _, _ => none
  | _ => e.int?
where op (f : Int → Int → Int) (x y : Expr) : Option Int :=
  match groundInt? x, groundInt? y with
    | some x', some y' => some (f x' y')
    | _, _ => none

/-- Construct the term with type hint `(Eq.refl a : a = b)`-/
def mkEqReflWithExpectedType (a b : Expr) : MetaM Expr := do
  return mkExpectedPropHint (← mkEqRefl a) (← mkEq a b)

/--
For a conditional `e : α` (`if`, `uif`, `bif` or `bif h :`), the disjunction stating which
branch it evaluates to under which condition. `α` is `Int` or `Nat`.
-/
def conditionalFacts (α e : Expr) : MetaM (List Expr) := do
  match e.getAppFnArgs with
  | (``ite, #[β, i, dec, t, f]) =>
    uif β == α then return [mkApp5 (.const ``ite_disjunction [0]) α i dec t f]
  | (``UDecidable.ite, #[β, i, dec, t, f]) =>
    uif β == α then return [mkApp5 (.const ``uite_disjunction [0]) α i dec t f]
  | (``cond, #[β, c, t, f]) =>
    uif β == α then return [mkApp4 (.const ``cond_disjunction [0]) α c t f]
  | (``Bool.dcond, #[β, c, t, f]) =>
    uif β == α then
      let pf := mkApp4 (.const ``dcond_disjunction [0]) α c t f
      -- State the branches beta-reduced, so that their values are recognized as atoms.
      let branch (v k : Expr) : MetaM Expr := do
        let hTy := mkApp3 (.const ``Eq [1]) (.const ``Bool []) c v
        let p ← withLocalDeclD `h hTy fun h =>
          mkLambdaFVars #[h] (mkApp3 (.const ``Eq [1]) α e (k.beta #[h]))
        return mkAnd hTy (mkApp2 (.const ``Exists [0]) hTy p)
      let ty := mkOr (← branch (.const ``Bool.true []) t) (← branch (.const ``Bool.false []) f)
      return [mkExpectedPropHint pf ty]
  | _ => pure ()
  return []

/--
Analyzes a newly recorded atom,
returning a collection of interesting facts about it that should be added to the context.
-/
def analyzeAtom (e : Expr) : OmegaM (List Expr) := do
  match e.getAppFnArgs with
  | (``Nat.cast, #[.const ``Int [], _, e']) =>
    -- Casts of natural numbers are non-negative.
    let mut r := [Expr.app (.const ``Int.natCast_nonneg []) e']
    match (← cfg).splitNatSub, e'.getAppFnArgs with
      | true, (``HSub.hSub, #[_, _, _, _, a, b]) =>
        -- `((a - b : Nat) : Int)` gives a dichotomy
        r := r.insert (mkApp2 (.const ``Int.ofNat_sub_dichotomy []) a b)
      | _, (``Int.natAbs, #[x]) =>
        r := r.insert (mkApp (.const ``Int.le_natAbs []) x)
        r := r.insert (mkApp (.const ``Int.neg_le_natAbs []) x)
      | _, (``Fin.val, #[n, i]) =>
        r := r.insert (mkApp2 (.const ``Fin.isLt []) n i)
      | _, (``BitVec.toNat, #[n, x]) =>
        r := r.insert (mkApp2 (.const ``BitVec.isLt []) n x)
      | _, _ => pure ()
    return r ++ (← conditionalFacts (.const ``Nat []) e')
  | (``HDiv.hDiv, #[_, _, _, _, x, k]) => match natCast? k with
    | none
    | some 0 => pure ∅
    | some _ =>
      -- `k * x/k ≤ x < k * x/k + k`
      let ne_zero := mkApp3 (.const ``Ne [1]) (.const ``Int []) k (toExpr (0 : Int))
      let pos := mkApp4 (.const ``LT.lt [0]) (.const ``Int []) (.const ``Int.instLTInt [])
        (toExpr (0 : Int)) k
      pure [mkApp3 (.const ``Int.mul_ediv_self_le []) x k (← mkDecideProof ne_zero),
            mkApp3 (.const ``Int.lt_mul_ediv_self_add []) x k (← mkDecideProof pos)]
  | (``HMod.hMod, #[_, _, _, _, x, k]) =>
    match k.getAppFnArgs with
    | (``HPow.hPow, #[_, _, _, _, b, exp]) => match natCast? b with
      | none
      | some 0 => pure ∅
      | some _ =>
        let b_pos := mkApp4 (.const ``LT.lt [0]) (.const ``Int []) (.const ``Int.instLTInt [])
          (toExpr (0 : Int)) b
        let pow_pos := mkApp3 (.const ``Lean.Omega.Int.pos_pow_of_pos []) b exp (← mkDecideProof b_pos)
        pure [mkApp3 (.const ``Int.emod_nonneg []) x k
                (mkApp3 (.const ``Int.ne_of_gt []) k (toExpr (0 : Int)) pow_pos),
              mkApp3 (.const ``Int.emod_lt_of_pos []) x k pow_pos]
    | (``Nat.cast, #[.const ``Int [], _, k']) =>
      match k'.getAppFnArgs with
      | (``HPow.hPow, #[_, _, _, _, b, exp]) => match natCast? b with
        | none
        | some 0 => pure ∅
        | some _ =>
          let b_pos := mkApp4 (.const ``LT.lt [0]) (.const ``Nat []) (.const ``instLTNat [])
            (toExpr (0 : Nat)) b
          let pow_pos := mkApp3 (.const ``Nat.pow_pos []) b exp (← mkDecideProof b_pos)
          let cast_pos := mkApp2 (.const ``Int.ofNat_pos_of_pos []) k' pow_pos
          pure [mkApp3 (.const ``Int.emod_nonneg []) x k
                  (mkApp3 (.const ``Int.ne_of_gt []) k (toExpr (0 : Int)) cast_pos),
                mkApp3 (.const ``Int.emod_lt_of_pos []) x k cast_pos]
      | _ =>  match x.getAppFnArgs with
        | (``Nat.cast, #[.const ``Int [], _, x']) =>
          -- Since we push coercions inside `%`, we need to record here that
          -- `(x : Int) % (y : Int)` is non-negative.
          pure [mkApp2 (.const ``Int.emod_ofNat_nonneg []) x' k]
        | _ => pure ∅
    | _ => pure ∅
  | (``Min.min, #[_, _, x, y]) =>
    pure [mkApp2 (.const ``Int.min_le_left []) x y, mkApp2 (.const ``Int.min_le_right []) x y]
  | (``Max.max, #[_, _, x, y]) =>
    pure [mkApp2 (.const ``Int.le_max_left []) x y, mkApp2 (.const ``Int.le_max_right []) x y]
  | _ => conditionalFacts (.const ``Int []) e

/--
Look up an expression in the atoms, recording it if it has not previously appeared.

Return its index, and, if it is new, a collection of interesting facts about the atom.
* for each new atom `a` of the form `((x : Nat) : Int)`, the fact that `0 ≤ a`
* for each new atom `a` of the form `x / k`, for `k` a positive numeral, the facts that
  `k * a ≤ x < k * a + k`
* for each new atom of the form `((a - b : Nat) : Int)`, the fact:
  `b ≤ a ∧ ((a - b : Nat) : Int) = a - b ∨ a < b ∧ ((a - b : Nat) : Int) = 0`
-/
def lookup (e : Expr) : OmegaM (Nat × Option (List Expr)) := do
  let c ← getThe State
  let e ← canon e
  match c.atoms[e]? with
  | some i => return (i, none)
  | none =>
  trace[omega] "New atom: {e}"
  let facts ← analyzeAtom e
  uif (← isTracingEnabledFor `omega) then
    unless facts.isEmpty do
      trace[omega] "New facts: {← facts.mapM fun e => inferType e}"
  let i ← modifyGetThe State fun c =>
    (c.atoms.size, { c with atoms := c.atoms.insert e c.atoms.size })
  return (i, some facts)

end Omega
