module

public meta import Lean.Elab.Command
public import Lean.Expr

/-!
# Benchmark: simp performance on nested array access

When `simp` simplifies `0 + i → i` inside a deeply nested `a[a[...[0 + i]...]]`, it
traverses the expression using congruence theorems. For `GetElem.getElem`, this triggers
typeclass inference at every nesting level, causing quadratic slowdown.

## Setup

Three variants are compared, each generating a theorem at parametric nesting depth:

- **plain**: `f(f(...(0 + i)...)) = f(f(...i...))` — no dependent types, no typeclass
  dispatch.
- **myGetElem**: `myGetElem a (myGetElem a ... (0+i) h₀) h₁ = myGetElem a (myGetElem a
  ... i g₀) g₁` — same dependent proof parameter `(h : i < a.size)` as `GetElem`, but a
  plain function with no typeclass dispatch.
- **GetElem (dep)**: `a[a[...[0 + i]...]] = a[a[...[i]...]]` — uses `GetElem.getElem`,
  which involves typeclass inference during simp's congruence traversal.

The goal is asymmetric: LHS contains `0 + i`, RHS contains `i`, so simp must produce a
nontrivial congruence proof.

## How to run

```
cd src && LEAN_PATH=<stage1>/lib/lean <stage1>/bin/lean test_simp_bench.lean
```

Or, to run a single depth in isolation:

```
echo '#bench_simp_dep 50' | cat test_simp_bench.lean - > /tmp/b.lean
cd src && LEAN_PATH=<stage1>/lib/lean <stage1>/bin/lean /tmp/b.lean
```

## Results

Results from commit d17a8225fa (aarch64, release build). Times measured via
`set_option profiler true` cumulative profiling.

The `share` column uses the sharing-friendly variant (see below): instead of
`n + n` per-level bounds hypotheses, it uses three hypotheses (`h0`, `hi`,
`step`) and builds every bounds proof via `step`.

### simp
┌───────┬───────┬───────────┬─────────┬───────┐
│ Depth │ plain │ myGetElem │ GetElem │ share │
├───────┼───────┼───────────┼─────────┼───────┤
│ 5     │ 0.3ms │ 0.6ms     │ 2.1ms   │ 0.5ms │
│ 10    │ 0.4ms │ 0.7ms     │ 5.4ms   │ 0.6ms │
│ 20    │ 0.4ms │ 0.9ms     │ 20ms    │ 0.9ms │
│ 30    │ 0.4ms │ 1.1ms     │ 42ms    │ 1.1ms │
│ 50    │ 0.5ms │ 1.7ms     │ 110ms   │ 1.6ms │
│ 100   │ 0.8ms │ 2.9ms     │ 441ms   │ 2.6ms │
│ 200   │ 1.4ms │ 5.3ms     │ 1,910ms │ 4.9ms │
└───────┴───────┴───────────┴─────────┴───────┘

### typeclass inference
┌───────┬───────┬───────────┬──────────┬───────┐
│ Depth │ plain │ myGetElem │ GetElem  │ share │
├───────┼───────┼───────────┼──────────┼───────┤
│ 5     │ 0.4ms │ 0.9ms     │ 2.5ms    │   —   │
│ 10    │ 0.3ms │ 1.1ms     │ 8.3ms    │   —   │
│ 20    │ 0.3ms │ 1.9ms     │ 33ms     │   —   │
│ 30    │ 0.4ms │ 2.4ms     │ 84ms     │   —   │
│ 50    │ 0.3ms │ 3.7ms     │ 293ms    │   —   │
│ 100   │ 0.4ms │ 8.8ms     │ 2,070ms  │   —   │
│ 200   │ 0.3ms │ 19ms      │ 22,200ms │   —   │
└───────┴───────┴───────────┴──────────┴───────┘

(`—` = below profiler reporting threshold / not triggered. The share variant
introduces no new typeclass-dispatched terms past the one-time `HAdd` resolution
at construction time, and simp never retriggers instance synthesis.)

### kernel type checking
┌───────┬───────┬───────────┬─────────┬───────┐
│ Depth │ plain │ myGetElem │ GetElem │ share │
├───────┼───────┼───────────┼─────────┼───────┤
│ 5     │ 0.1ms │ 0.3ms     │ 0.4ms   │ 0.3ms │
│ 10    │ 0.1ms │ 0.6ms     │ 0.6ms   │ 0.4ms │
│ 20    │ 0.1ms │ 1.2ms     │ 1.5ms   │ 0.8ms │
│ 30    │ 0.2ms │ 2.2ms     │ 2.5ms   │ 1.2ms │
│ 50    │ 0.2ms │ 5.8ms     │ 6.5ms   │ 2.5ms │
│ 100   │ 0.4ms │ 24ms      │ 31ms    │ 8.2ms │
│ 200   │ 0.7ms │ 140ms     │ 213ms   │ 29ms  │
└───────┴───────┴───────────┴─────────┴───────┘

## Analysis

### Typeclass inference dominates for GetElem

The dominant cost for `GetElem` is **typeclass inference** during simp's congruence
traversal. At depth 100 it accounts for 2,070ms out of ~2,500ms total. Replacing
`GetElem.getElem` with `myGetElem` (same dependent proof parameter, no typeclass dispatch)
eliminates this: 2.9ms vs 441ms for simp, 8.8ms vs 2,070ms for typeclass inference.

### Kernel type checking is quadratic for dependent types

Kernel type checking is similar for `myGetElem` and `GetElem` (24ms vs 31ms at depth 100),
confirming the cost is inherent to the dependent-type structure rather than typeclass
resolution. Both grow superlinearly: 100→200 gives 24→140ms (5.8x) for `myGetElem`. The
`plain` variant stays sub-linear (0.4→0.7ms).

### Expression size: closed vs opened form

The theorem type is a forall telescope:
```
∀ (a : Array Nat) (i : Nat)
  (h₀ : 0 + i < a.size)
  (h₁ : myGetElem a (0 + i) h₀ < a.size)
  (h₂ : myGetElem a (myGetElem a (0 + i) h₀) h₁ < a.size)
  ...
  (g₀ : i < a.size) (g₁ : ...) ...,
  LHS = RHS
```

Each `h_k` binder type contains a "tower" of `k` nested `myGetElem` applications wrapping
the core `0 + i`. Written as a sum of per-binder tree sizes, that's O(n²) — which matches
the measured tree size.

The interesting question is the **DAG size**, since subexpression sharing can in principle
reduce quadratic tree sizes to linear DAGs. We measured the DAG in two forms:

- **closed** (`info.type` as stored in the environment): all forall-bound variables are
  `bvar` nodes with de Bruijn indices relative to the enclosing binder stack.

- **opened**: after calling `forallTelescope` to introduce fresh `fvar`s for every binder,
  measuring the union DAG of all binder types.

Results (`#inspect_proof` command below):

┌───────┬────────────┬────────────┐
│ Depth │ closed dag │ opened dag │
├───────┼────────────┼────────────┤
│ 1     │ 52         │ 52         │
│ 5     │ 160        │ 100        │
│ 10    │ 385        │ 160        │
│ 20    │ 1,135      │ 280        │
└───────┴────────────┴────────────┘

The **closed** DAG grows as ~O(n²), but the **opened** DAG grows **linearly** in n
(~12n + 40). The quadratic closed-form DAG is entirely an artifact of de Bruijn bvar
shifting.

Why: in the closed form, "the same" `myGetElem` tower appearing in `h_k`'s type and
`h_{k+1}`'s type is structurally distinct because all bvar indices are incremented by 1
in the outer scope. These subexpressions cannot be pointer-shared and must be
re-materialized in every enclosing forall. Each of the `n` binder types contains a tower
of O(n) new unique nodes, giving O(n²) total.

In the opened form, fresh fvars replace all bvars referring to telescope binders, so "the
same" tower in two different binder types is represented by the same `Expr` and can be
shared pointer-wise. Each new binder type contributes only O(1) new DAG nodes (one
`myGetElem` application wrapping the shared inner tower), giving O(n) total.

This distinguishes two possible causes of the quadratic kernel type-checking cost:
1. The expression is "fundamentally" O(n²) in any representation — **ruled out** by the
   opened-form measurement.
2. The de Bruijn representation forces O(n²) structural duplication, and the kernel pays
   for traversing that — **consistent with the data**.

Given that measured kernel type checking grows quadratically (31ms → 213ms from depth
100 → 200), the kernel appears to be paying for the closed-form size. This likely happens
because opening a forall binder requires an O(|body|) substitution of the bvar, so
traversing an n-deep telescope costs O(n·|body|) = O(n²) even if each opened body fits in
a linear DAG.

### Sharing-friendly variant: collapsing the telescope

The `share` variant replaces the `n + n` per-level bounds hypotheses with a fixed,
constant-size telescope:

```
∀ (a : Array Nat) (i : Nat)
  (h0 : 0 + i < a.size)
  (hi : i < a.size)
  (step : ∀ (j : Nat) (h : j < a.size), myGetElem a j h < a.size),
  LHS = RHS
```

Every intermediate bounds proof is built by applying `step`. Because the tower
introduces no new binders, every reference to `a` / `step` / `h0` inside the tower
uses a *fixed* bvar index, and the "same" inner subtower can be literally the same
`Expr` at every nesting level.

Closed-form DAG size (measured with `#inspect_share`):

┌───────┬────────────┬────────────┐
│ Depth │ closed dag │ opened dag │
├───────┼────────────┼────────────┤
│ 1     │    66      │    63      │
│ 5     │    98      │    96      │
│ 10    │   138      │   136      │
│ 20    │   218      │   216      │
│ 50    │   458      │   456      │
│ 100   │   858      │   856      │
│ 200   │ 1,658      │ 1,656      │
└───────┴────────────┴────────────┘

Closed DAG is linear (~8n + 58), and closed ≈ opened within 2 nodes: the de
Bruijn inflation observed in the per-binder variant is entirely gone.

Note that the *tree* size of this variant is actually **exponential** in n:
each level k has `x_k = mg a x_{k-1} p_{k-1}` and `p_k = step x_{k-1} p_{k-1}`,
both referencing the previous value and proof, so
`tree(x_k) + tree(p_k) = 4 + 2·(tree(x_{k-1}) + tree(p_{k-1}))`.
The DAG is linear only because `x_{k-1}` and `p_{k-1}` are literally shared as
`Expr` pointers — which is why `#bench_simp_share` builds the term directly as
`Expr` rather than via `Syntax` (elaboration of the syntax tree is not
memoized on identity, so a syntax-based construction would take exponential time).

### Share vs. myGetElem in the profiler

- **simp** matches `myGetElem` within noise at every depth (4.9 vs 5.3ms at 200).
  This is unsurprising: simp's cost is dominated by the linear congruence chain
  it walks from root to leaf, which is the same shape in both variants.

- **typeclass inference** drops to effectively zero. In the per-binder variant,
  simp re-runs `HAdd`/`GetElem` instance synthesis many times as it rebuilds
  tower subterms during congruence. The share variant computes `0 + i` exactly
  once (at construction time, via `mkAppM`); neither `step` nor the repeated
  `myGetElem` applications need instance resolution.

- **kernel type checking** is ~5× faster than `myGetElem` at depth 200
  (29ms vs 140ms) but still grows faster than linearly. This is because the
  kernel checks the simp-produced proof term, which contains `Eq.ndrec` /
  congruence-lemma applications whose def-eq checks must reduce pieces of
  the tower; those reductions aren't fully memoized across the proof, so
  sharing helps but doesn't eliminate superlinear growth.

So `myGetElem`-style dependent-proof functions **are not inherently quadratic**:
the O(n²) costs in the original variant came from putting O(n) *binders* around
a tower that references them, forcing de Bruijn shifts that defeat sharing.
Batching the bound hypotheses into a single universally-quantified `step` brings
the closed-form type DAG to linear, collapses typeclass cost, and multiplies
kernel type-checking cost by a smaller constant.
-/

open Lean Elab Command Meta

def myGetElem (xs : Array Nat) (i : Nat) (h : i < xs.size) : Nat := xs[i]

def myGetElemNE (xs : Array Nat) (i : Nat) (h : Nonempty Nat) : Nat := i

/-! ## Benchmark generators -/

elab "#bench_simp_dep " depth:num : command => do
  let d := depth.getNat
  let a := mkIdent `a
  let i := mkIdent `i

  let mut lhs : Term ← `(0 + $i)
  let mut lhsBinderNames : Array Ident := #[a, i]
  let mut lhsBinderTypes : Array Term := #[← `(Array Nat), ← `(Nat)]

  for k in [:d] do
    let hk := mkIdent (Name.mkSimple s!"h{k}")
    let ty : Term ← `($lhs < ($a).size)
    lhsBinderNames := lhsBinderNames.push hk
    lhsBinderTypes := lhsBinderTypes.push ty
    lhs ← `($a[$lhs]'$hk)

  let mut rhs : Term ← `($i)
  let mut rhsBinderNames : Array Ident := #[]
  let mut rhsBinderTypes : Array Term := #[]

  for k in [:d] do
    let gk := mkIdent (Name.mkSimple s!"g{k}")
    let ty : Term ← `($rhs < ($a).size)
    rhsBinderNames := rhsBinderNames.push gk
    rhsBinderTypes := rhsBinderTypes.push ty
    rhs ← `($a[$rhs]'$gk)

  let allNames := lhsBinderNames ++ rhsBinderNames
  let allTypes := lhsBinderTypes ++ rhsBinderTypes

  let mut ty : Term ← `($lhs = $rhs)
  for idx in [:allNames.size] do
    let j := allNames.size - 1 - idx
    let name := allNames[j]!
    let bTy := allTypes[j]!
    ty ← `(($name : $bTy) → $ty)

  let introNames : Array Ident := allNames
  let thmName := mkIdent (Name.mkSimple s!"bench_dep_{d}")

  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    set_option profiler true in
    theorem $thmName : $ty := by
      intro $introNames*
      simp)

  elabCommand cmd

elab "#bench_simp_myget " depth:num : command => do
  let d := depth.getNat
  let a := mkIdent `a
  let i := mkIdent `i
  let mg := mkIdent ``myGetElem

  let mut lhs : Term ← `(0 + $i)
  let mut lhsBinderNames : Array Ident := #[a, i]
  let mut lhsBinderTypes : Array Term := #[← `(Array Nat), ← `(Nat)]

  for k in [:d] do
    let hk := mkIdent (Name.mkSimple s!"h{k}")
    let ty : Term ← `($lhs < ($a).size)
    lhsBinderNames := lhsBinderNames.push hk
    lhsBinderTypes := lhsBinderTypes.push ty
    lhs ← `($mg $a $lhs $hk)

  let mut rhs : Term ← `($i)
  let mut rhsBinderNames : Array Ident := #[]
  let mut rhsBinderTypes : Array Term := #[]

  for k in [:d] do
    let gk := mkIdent (Name.mkSimple s!"g{k}")
    let ty : Term ← `($rhs < ($a).size)
    rhsBinderNames := rhsBinderNames.push gk
    rhsBinderTypes := rhsBinderTypes.push ty
    rhs ← `($mg $a $rhs $gk)

  let allNames := lhsBinderNames ++ rhsBinderNames
  let allTypes := lhsBinderTypes ++ rhsBinderTypes

  let mut ty : Term ← `($lhs = $rhs)
  for idx in [:allNames.size] do
    let j := allNames.size - 1 - idx
    let name := allNames[j]!
    let bTy := allTypes[j]!
    ty ← `(($name : $bTy) → $ty)

  let introNames : Array Ident := allNames
  let thmName := mkIdent (Name.mkSimple s!"bench_myget_{d}")

  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    set_option profiler true in
    theorem $thmName : $ty := by
      intro $introNames*
      simp)

  elabCommand cmd

elab "#bench_simp_myget_ne " depth:num : command => do
  let d := depth.getNat
  let a := mkIdent `a
  let i := mkIdent `i
  let h := mkIdent `h
  let mg := mkIdent ``myGetElemNE

  let mut lhs : Term ← `(0 + $i)
  for _ in [:d] do
    lhs ← `($mg $a $lhs $h)

  let mut rhs : Term ← `($i)
  for _ in [:d] do
    rhs ← `($mg $a $rhs $h)

  let mut ty : Term ← `($lhs = $rhs)
  ty ← `(($a : Array Nat) → ($i : Nat) → ($h : Nonempty Nat) → $ty)

  let thmName := mkIdent (Name.mkSimple s!"bench_myget_ne_{d}")
  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    set_option profiler true in
    theorem $thmName : $ty := by
      intro a i h
      simp)

  elabCommand cmd

elab "#bench_simp_plain " depth:num : command => do
  let d := depth.getNat
  let f := mkIdent `f
  let i := mkIdent `i

  let mut lhs : Term ← `(0 + $i)
  for _ in [:d] do
    lhs ← `($f $lhs)

  let mut rhs : Term ← `($i)
  for _ in [:d] do
    rhs ← `($f $rhs)

  let mut ty : Term ← `($lhs = $rhs)
  ty ← `(($f : Nat → Nat) → ($i : Nat) → $ty)

  let thmName := mkIdent (Name.mkSimple s!"bench_plain_{d}")
  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    set_option profiler true in
    theorem $thmName : $ty := by
      intro f i
      simp)

  elabCommand cmd

/-! ## Expression size measurement

Used to produce the closed/opened DAG table above. Elaborates a `myGetElem` theorem via
`noncomputable def` (so the value is retained in the environment), then measures the DAG
size of its type in two forms:

- **closed**: `info.type` as stored — all forall-bound variables are `bvar`s with de
  Bruijn indices.
- **opened**: after `forallTelescope`, all binders are fresh `fvar`s. We measure the DAG
  size of the union of all binder types (by combining them into one `App` spine, then
  running `dagSize` over that).

DAG size is counted as unique `Expr.data` values encountered during DFS (using `Expr.data`
as a hash-based dedup proxy — not pointer identity, but collision rate is negligible at
these sizes).
-/

elab "#inspect_proof " depth:num : command => do
  let d := depth.getNat
  let a := mkIdent `a
  let i := mkIdent `i
  let mg := mkIdent ``myGetElem

  let mut lhs : Term ← `(0 + $i)
  let mut lhsBinderNames : Array Ident := #[a, i]
  let mut lhsBinderTypes : Array Term := #[← `(Array Nat), ← `(Nat)]
  for k in [:d] do
    let hk := mkIdent (Name.mkSimple s!"h{k}")
    let ty : Term ← `($lhs < ($a).size)
    lhsBinderNames := lhsBinderNames.push hk
    lhsBinderTypes := lhsBinderTypes.push ty
    lhs ← `($mg $a $lhs $hk)

  let mut rhs : Term ← `($i)
  let mut rhsBinderNames : Array Ident := #[]
  let mut rhsBinderTypes : Array Term := #[]
  for k in [:d] do
    let gk := mkIdent (Name.mkSimple s!"g{k}")
    let ty : Term ← `($rhs < ($a).size)
    rhsBinderNames := rhsBinderNames.push gk
    rhsBinderTypes := rhsBinderTypes.push ty
    rhs ← `($mg $a $rhs $gk)

  let allNames := lhsBinderNames ++ rhsBinderNames
  let allTypes := lhsBinderTypes ++ rhsBinderTypes
  let mut ty : Term ← `($lhs = $rhs)
  for idx in [:allNames.size] do
    let j := allNames.size - 1 - idx
    ty ← `(($(allNames[j]!) : $(allTypes[j]!)) → $ty)

  let introNames := allNames
  let thmIdent := mkIdent (Name.mkSimple s!"inspect_{d}")
  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    noncomputable def $thmIdent : $ty := by intro $introNames*; simp)
  elabCommand cmd

  liftTermElabM do
    let fullName ← resolveGlobalConstNoOverload thmIdent
    let info ← getConstInfo fullName

    -- DAG size: unique Expr.data values visited during DFS
    let dagSize := fun (e : Expr) => do
      let ref ← IO.mkRef ({} : Std.HashSet UInt64)
      let rec go (e : Expr) : IO Unit := do
        if (← ref.get).contains e.data then return
        ref.modify (·.insert e.data)
        match e with
        | .app f a => go f; go a
        | .lam _ t b _ | .forallE _ t b _ => go t; go b
        | .letE _ t v b _ => go t; go v; go b
        | .mdata _ e | .proj _ _ e => go e
        | _ => return
      go e
      return (← ref.get).size

    -- Closed form: stored type directly
    let closedDag ← dagSize info.type

    -- Opened form: introduce fvars via forallTelescope, combine all binder types
    -- into one App spine, measure that DAG
    let openedDag ← forallTelescope info.type fun fvars body => do
      let mut combined : Expr := mkConst ``True
      for fv in fvars do
        combined := mkApp combined (← inferType fv)
      combined := mkApp combined body
      dagSize combined

    logInfo m!"depth {d}: closed dag={toString closedDag}  opened dag={toString openedDag}"

/-! ## Sharing-friendly variant

Instead of `n + n` per-level bounds hypotheses, use only three:
- `h0 : 0 + i < a.size` — LHS base bound (needed because `0+i` isn't defeq to `i`)
- `hi : i < a.size` — RHS base bound
- `step : ∀ j (h : j < a.size), myGetElem a j h < a.size`

Every intermediate bounds proof is produced by applying `step` to the previous
level. Because the tower adds no new binders, every reference to `a`, `step`,
etc. inside the tower uses a fixed bvar index — so "the same" subterm at
different nesting levels can be shared pointer-wise, and the closed DAG is
linear.

We construct the tower directly as `Expr` rather than via `Syntax` because at
each level the new value *and* the new proof each reference the previous value
and proof, so syntax-based construction would elaborate in exponential time
(no memoization on Syntax identity).
-/

/-- Build the sharing-friendly tower type as an `Expr`. Used by both
`#inspect_share` and `#bench_simp_share`. Returns the closed theorem type. -/
meta def buildShareType (d : Nat) : TermElabM Expr := do
  let sigStx ← `(∀ (a : Array Nat) (i : Nat)
      (h0 : 0 + i < a.size)
      (hi : i < a.size)
      (step : ∀ (j : Nat) (h : j < a.size), myGetElem a j h < a.size),
      True)
  let skel ← Term.elabType sigStx
  Term.synthesizeSyntheticMVarsNoPostponing
  let skel ← instantiateMVars skel
  forallTelescope skel fun fvars _ => do
    let #[a, i, h0, hi, step] := fvars
      | throwError "expected 5 binders in telescope"
    let mg := Expr.const ``myGetElem []
    let mut lhsVal ← mkAppM ``HAdd.hAdd #[mkNatLit 0, i]
    let mut lhsProof := h0
    for _ in [:d] do
      let newProof := mkApp2 step lhsVal lhsProof
      let newVal   := mkApp3 mg a lhsVal lhsProof
      lhsVal := newVal
      lhsProof := newProof
    let mut rhsVal : Expr := i
    let mut rhsProof : Expr := hi
    for _ in [:d] do
      let newProof := mkApp2 step rhsVal rhsProof
      let newVal   := mkApp3 mg a rhsVal rhsProof
      rhsVal := newVal
      rhsProof := newProof
    let eqTy ← mkEq lhsVal rhsVal
    mkForallFVars fvars eqTy

elab "#bench_simp_share " depth:num : command => do
  let d := depth.getNat
  let thmIdent := mkIdent (Name.mkSimple s!"bench_share_{d}")
  let typeName := Name.mkSimple s!"bench_share_{d}_type"
  let typeIdent := mkIdent typeName
  liftTermElabM do
    let finalType ← buildShareType d
    -- Register the computed type as a reducible abbreviation so the subsequent
    -- `theorem ... := by intros; simp` elab (which does go through profiler)
    -- can reference it by name. Reducibility lets `intros` unfold it.
    addDecl <| .defnDecl {
      name        := typeName
      levelParams := []
      type        := .sort .zero  -- Prop
      value       := finalType
      hints       := .abbrev
      safety      := .safe
    }
  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    set_option profiler true in
    theorem $thmIdent : $typeIdent := by
      unfold $typeIdent
      intros
      simp)
  elabCommand cmd

/-- Inspect the simp-produced proof term for the share variant. Declares
`share_proof_{d}` via `noncomputable def` so the proof value is retained
in the environment, then measures DAG size of both the proof and the type. -/
elab "#inspect_share_proof " depth:num : command => do
  let d := depth.getNat
  let typeName := Name.mkSimple s!"share_proof_type_{d}"
  let typeIdent := mkIdent typeName
  let thmName := Name.mkSimple s!"share_proof_{d}"
  let thmIdent := mkIdent thmName
  liftTermElabM do
    let finalType ← buildShareType d
    addDecl <| .defnDecl {
      name        := typeName
      levelParams := []
      type        := .sort .zero
      value       := finalType
      hints       := .abbrev
      safety      := .safe
    }
  let cmd ← `(command|
    set_option maxHeartbeats 16000000 in
    set_option maxRecDepth 4096 in
    noncomputable def $thmIdent : $typeIdent := by
      unfold $typeIdent
      intros
      simp)
  elabCommand cmd
  liftTermElabM do
    let fullName ← resolveGlobalConstNoOverload thmIdent
    let info ← getConstInfo fullName
    let some value := info.value?
      | throwError "no value on {fullName}"
    let dagSize := fun (e : Expr) => do
      let ref ← IO.mkRef ({} : Std.HashSet UInt64)
      let rec go (e : Expr) : IO Unit := do
        if (← ref.get).contains e.data then return
        ref.modify (·.insert e.data)
        match e with
        | .app f a => go f; go a
        | .lam _ t b _ | .forallE _ t b _ => go t; go b
        | .letE _ t v b _ => go t; go v; go b
        | .mdata _ e | .proj _ _ e => go e
        | _ => return
      go e
      return (← ref.get).size
    -- Tree size bounded to avoid exponential blowup on pathological inputs
    let limit : Nat := 2000000
    let treeSize := fun (e : Expr) => do
      let ref ← IO.mkRef (0 : Nat)
      let rec goTree (e : Expr) : IO Unit := do
        let n ← ref.get
        if n > limit then return
        ref.set (n + 1)
        match e with
        | .app f a => goTree f; goTree a
        | .lam _ t b _ | .forallE _ t b _ => goTree t; goTree b
        | .letE _ t v b _ => goTree t; goTree v; goTree b
        | .mdata _ e | .proj _ _ e => goTree e
        | _ => return
      goTree e
      ref.get
    let expandedType ← buildShareType d
    let proofDag  ← dagSize value
    let proofTree ← treeSize value
    let typeDag   ← dagSize expandedType
    let typeTree  ← treeSize expandedType
    logInfo m!"depth {d}: proof dag={toString proofDag} tree={toString proofTree}  type dag={toString typeDag} tree={toString typeTree}"

elab "#inspect_share " depth:num : command => do
  let d := depth.getNat
  liftTermElabM do
    let finalType ← buildShareType d

    let dagSize := fun (e : Expr) => do
      let ref ← IO.mkRef ({} : Std.HashSet UInt64)
      let rec go (e : Expr) : IO Unit := do
        if (← ref.get).contains e.data then return
        ref.modify (·.insert e.data)
        match e with
        | .app f a => go f; go a
        | .lam _ t b _ | .forallE _ t b _ => go t; go b
        | .letE _ t v b _ => go t; go v; go b
        | .mdata _ e | .proj _ _ e => go e
        | _ => return
      go e
      return (← ref.get).size

    let closedDag ← dagSize finalType
    let openedDag ← forallTelescope finalType fun fvars body => do
      let mut combined : Expr := mkConst ``True
      for fv in fvars do
        combined := mkApp combined (← inferType fv)
      combined := mkApp combined body
      dagSize combined
    logInfo m!"depth {d}: closed dag={toString closedDag}  opened dag={toString openedDag}"

set_option Elab.async false

-- Uncomment to run:
-- #bench_simp_plain 50
-- #bench_simp_myget 50
-- #bench_simp_dep 50
-- #inspect_proof 10
