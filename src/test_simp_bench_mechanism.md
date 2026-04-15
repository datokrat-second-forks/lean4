# Kernel re-verification of `Eq.ndrec` motive beta-reductions under dependent-proof congruence

A focused description of the performance phenomenon investigated in
`test_simp_bench.lean` / `test_simp_bench_log.md`. Reads standalone.

## Setting

Consider a function with a dependent proof argument:

```lean
def myGetElem (xs : Array Nat) (i : Nat) (h : i < xs.size) : Nat := xs[i]
```

The third argument's type `i < xs.size` mentions the second argument `i`. Compose
this function with itself to form a tower:

```
myGetElem a (myGetElem a (myGetElem a ... (0 + i) ...) ...) ...
```

and ask `simp` to rewrite the innermost `0 + i → i` via `Nat.zero_add`. Simp
produces a proof whose proof-term DAG is linear in the depth n (measured:
~19n nodes at depth n). The *stored* theorem type is also linear DAG
(~8n nodes) when the bounds proofs are supplied via a single universally
quantified hypothesis

```
step : ∀ (j : Nat) (h : j < a.size), myGetElem a j h < a.size
```

rather than n per-level binders. With per-level binders, de Bruijn index
shifting across the binder scopes defeats sharing and the stored type DAG
balloons to quadratic (~2.8 n²). That's a separate, well-understood issue —
the one this document describes lives *after* it's been eliminated.

## The observation

With both the type and the simp-produced proof having linear DAGs, we'd
expect kernel type-checking to be linear in n. It isn't. Measured kernel
type-checking time at depth 200 is ~29 ms versus ~0.7 ms for a structurally
analogous *non-dependent* tower using `f : Nat → Nat` in place of
`myGetElem`. The dependent variant's growth rate is roughly `n^{1.5–1.8}`,
not linear.

The cost is not in simp — simp finishes in ~5 ms at depth 200 for this
variant, comparable to the non-dependent case. The cost is entirely in
the kernel re-type-checking the proof.

## The mechanism

Simp rewrites through `myGetElem` using its generated congruence lemma
`myGetElem.congr_simp`, whose signature has the shape

```
myGetElem.congr_simp :
  {a a' : Array Nat} → a = a' →
  (j j' : Nat)       → j = j' →
  (h  : j < a.size)  →
  myGetElem a j h = myGetElem a' j' (ha ▸ hj ▸ h)
```

where `ha ▸ hj ▸ h` is an `Eq.ndrec` chain that transports the bounds proof
`h : j < a.size` to something of type `j' < a'.size`.

**Key fact about the lemma:** when `myGetElem.congr_simp` was first compiled,
the kernel verified that its conclusion is well-typed for abstract bvar
inputs. That check confirmed, once, that `ha ▸ hj ▸ h` really does
produce a proof of `j' < a'.size` — which in turn required looking through
the `Eq.ndrec` motive `fun x => x < a.size` and beta-reducing it against
the target `j'`. After that check, *the lemma is in the environment and
its conclusion is a known-well-typed template*.

**What happens at each application site.** Every time simp emits

```
myGetElem.congr_simp a a (Eq.refl a) j_k j'_k (inner_congr) h_k
```

in the proof term — once per level of the tower — the kernel type-checks
that application. Mechanically:

1. Look up the lemma's signature.
2. Check each actual argument against the corresponding template slot.
   For the last argument `h_k`, this requires an `isDefEq` between
   `h_k`'s inferred type and the slot's expected type `j < a.size` with
   `j := j_k`. Both are tower-shaped Props.
3. Compute the *result type* by substituting the actuals into the
   signature's conclusion template
   `myGetElem a j h = myGetElem a' j' (ha ▸ hj ▸ h)`. Substitution
   produces an `Expr` containing the **unreduced** chain
   `actual_ha ▸ actual_hj_k ▸ h_k`.
4. That unreduced result is eventually consumed by an outer `isDefEq`
   call — for instance when the level-(k+1) application uses it as
   the value `j'` for *its* `hj` argument. At that point `whnf` fires,
   and the `Eq.ndrec` is unfolded: the motive `fun x => x < a.size`
   is beta-reduced against the target, producing a **fresh** `Expr`
   node of shape `target < a.size`.

Step 4 is the source of the extra cost. Two things are happening:

- **The beta-reduction allocates a fresh outer `Expr` node**, not
  hash-consed against any structurally identical node produced at another
  site. Specifically, the `@LT.lt Nat instLTNat target (@Array.size Nat a)`
  top constructor is a new object. Its argument `target` is a tower term
  that *is* pointer-shared with the rest of the proof (thanks to simp's
  linear-DAG construction), but the node wrapping it isn't.

- **The subsequent `isDefEq` against whatever's expected has to enter
  structural-walk mode at the top**, because the pointer fast path
  (`is_eqp` in `kernel/expr_eq_fn.cpp`) fails on the fresh outer node.
  The walk descends until it hits the shared inner tower term, at which
  point the pointer fast path takes over — but the walk has to traverse
  the full stack of `Eq.ndrec` wrapping, which at level k is proportional
  to k.

Summed over the n levels of the tower:

- Each level does O(k) non-amortized wrapping work before hitting the
  shared tower interior.
- Total: Σ k = Θ(n²) pessimistically.
- With partial amortization from the C++ kernel's per-call
  memoization cache (`expr_eq_fn::m_cache`, which is created fresh on
  every `isDefEq` entry and discarded on return), the observed growth
  is Θ(n^{1.5–1.8}).

## Why the lemma's "already verified" conclusion doesn't help

At lemma-definition time, the kernel proved:

> For any well-typed `a a' ha j j' hj h`, the expression
> `ha ▸ hj ▸ h` is a well-typed proof of `j' < a'.size`, and the
> conclusion `myGetElem a j h = myGetElem a' j' (ha ▸ hj ▸ h)` is a
> well-typed Prop.

The mechanics of that proof involved beta-reducing
`(fun x => x < a.size) j'` once, at lemma-definition time, with `j'`
as an abstract bvar. The result was recorded as part of the lemma's
stored signature.

But the kernel has no mechanism to *reuse* that meta-level fact.
At every application site, it re-performs the analogous beta-reduction
with a concrete `j'`, producing the fresh `Expr` node described above,
and re-runs `isDefEq` on the result. There is no "this lemma's
conclusion was already verified for arbitrary inputs, treat it as
opaque modulo its declared type" mode.

This isn't a bug in the kernel per se — dependent type-checking is
defined term-by-term, not lemma-by-lemma, and the kernel's job is to
verify each application against its computed expected type without
referring to how the function's type was obtained. But it is the
source of the gap we observe: the congruence lemma's *meaning*
(that instantiating its conclusion always yields a well-typed Prop)
is not propagated to application sites, so the work of verifying
that the `Eq.ndrec` chain well-types gets redone at every single
nesting level.

## What would close the gap

The observed Θ(n^{1.5–1.8}) could plausibly be brought down to Θ(n) by
either of the following, each at a different layer:

1. **Making the kernel's outer Prop nodes hash-conse during
   beta-reduction.** If the freshly-produced
   `@LT.lt Nat instLTNat target (...)` node were recognized as
   structurally identical to a previously-computed one (keyed on its
   hash via `Expr.data`), the subsequent `isDefEq` would hit the
   pointer fast path instead of walking through a stack of
   `Eq.ndrec` wrappers. This is a kernel-internal change and would
   affect much more than just this benchmark.

2. **Making the kernel's `isDefEq` / `whnf` caches persistent across
   calls within a single `type_checker` invocation.** Currently
   `expr_eq_fn::m_cache` is per-call; making it persist for the
   duration of one declaration check would amortize the structural
   walks over the whole proof term rather than restarting them at
   every level. This is what `Lean4Lean` flags as a TODO on the
   `defEqPerm` cache: "more efficient representations and caching
   policies (e.g., imperfect cache)."

3. **Treating congruence-lemma conclusions as opaque modulo their
   declared type.** At the elaborator level, mark
   `myGetElem.congr_simp`'s conclusion as a black-box result whose
   internal `Eq.ndrec` structure is never whnf-ed or descended into
   unless explicitly asked. This is the most targeted fix — it
   directly reuses the lemma-definition-time verification — but it
   requires a mechanism the kernel doesn't currently have.

None of these is small. (1) and (2) are kernel changes affecting
all of Lean's type-checking; (3) introduces a new form of opacity.
The observation here is that even without any of them, the
per-binder quadratic blowup from the original variant goes away
purely by collapsing the telescope — the residual Θ(n^{1.5–1.8})
from the mechanism above is a much smaller effect and, for most
realistic tower depths, not the dominant cost.

## Summary in one sentence

Rewriting `x → y` at a position whose value is mentioned by the type
of a later dependent argument forces the kernel, at every nesting
level, to re-verify an `Eq.ndrec` cast whose beta-reduced motive
produces a freshly-allocated Prop node; the enclosing `isDefEq` can't
take the pointer fast path on that fresh node, must walk structurally
until it reaches shared inner subterms, and accumulates Θ(n^{1.5–2})
work across a tower of depth n — even though the congruence lemma
being applied had already verified, at its definition, that the cast
always well-types.

## Profiler verification

Ran `bench_simp_share 1500` under `valgrind --tool=callgrind` to see
which kernel functions dominate. At depth 1500 the bench-level profiler
reports 1.52 s of "type checking" vs 34 ms of simp, so ~98% of the work
under instrumentation is kernel type-checking of the share proof term.

Lean's `libleanshared.so` only ships `.dynsym`, so internal C++ kernel
functions (`type_checker::check`, `whnf_core`, `is_def_eq`, `beta_reduce`,
…) don't have symbol names in the profile. They show up as anonymous
offsets sitting in a large (~72 KB) gap between two exported symbols.
Exported C functions (`lean_expr_equal`, `lean_expr_mk_app_data`,
`lean_expr_lift_loose_bvars`, `lean_dec_ref_cold`, mimalloc routines,
etc.) *are* named, and they're enough to see the shape of the work.

Aggregated top-35 entries (~82% of total instruction retirements), grouped:

```
Expr RC / alloc / free (fresh-Expr lifecycle):                    22.5%
  lean_dec_ref_cold                       11.36%
  mi_heap_malloc_small                     4.39%
  mi_free                                  3.61%
  mi_malloc_small                          2.19%
  mi_new_n                                 0.56%
  mi_register_default_heap                 0.42%

Expr structural equality (is_eqp fallthrough):                     5.7%
  lean_expr_equal                          5.74%

Fresh Expr construction:                                            5.5%
  lean_expr_mk_app_data                    5.09%
  lean_copy_expand_array                   0.41%

Substitution / instantiate / lift_loose_bvars / replace:           9.2%
  lean_expr_lift_loose_bvars               4.03%
  lean_replace_expr                        3.68%
  lean_expr_instantiate*                   0.84%
  lean_expr_loose_bvar_range               0.64%

Env lookup (unfolding constants via whnf):                          9.6%
  lean_name_eq                             3.45%
  SMap / PersistentHashMap env findAux     4.09%
  lean::environment::find + wrappers       1.75%
  Name.quickCmpImpl                        0.33%

Unnamed kernel internals (type_checker / whnf / isDefEq region):  11.6%
  (offsets in the 72 KB unexported-code gap)

System / stack / memory / heartbeat instrumentation:              11.9%
  check_system                             4.80%
  lean_io_cancel_token_is_set              2.59%
  check_stack                              1.65%
  check_memory                             1.13%
  is_quot_initialized                      0.86%
  lean_inc_heartbeat                       0.85%
```

### What this tells us

**Hypothesis A — "fresh Exprs created during substitution and then
structurally walked":** strongly supported.

- **~22.5 % in Expr allocation/deallocation.** `lean_dec_ref_cold`
  alone is 11.4 %. The "cold" path of reference-count decrementing
  fires when a refcount drops to zero on an object with structure to
  recursively release, which is the signature of *temporary* `Expr`
  objects. Matching mimalloc allocation activity (~7 %) sits on top
  of that. A run that just traversed a pre-built linear-DAG proof
  without creating fresh nodes should see close to 0 % of either.
- **~5.7 % in `lean_expr_equal`.** This is the kernel's structural
  equality routine from `kernel/expr_eq_fn.cpp` — the one that falls
  through the pointer fast path (`is_eqp`) and walks recursively.
  Getting almost 6 % of total time means the kernel really is *not*
  hitting the fast path on a substantial fraction of its `isDefEq`
  queries, confirming that structurally-equal-but-pointer-distinct
  Exprs are being compared.
- **~9.2 % in substitution machinery** (`lift_loose_bvars`,
  `replace_expr`, `instantiate`, `loose_bvar_range`). These are the
  routines that run when the kernel substitutes actuals into a
  template — exactly the mechanism by which instantiating a congruence
  lemma's conclusion produces a fresh Expr. ~9 % of kernel time here
  confirms that substitution is a first-class cost, not just a
  rounding-error bookkeeping step.
- **~5.5 % in Expr construction** (`mk_app_data`, `copy_expand_array`).
  These are the per-node allocators for the substituted-into templates.
  Consistent with "a lot of new application nodes are being built".

Adding just the "fresh-Expr lifecycle + structural compare + substitution"
category: **~42.9 %** of total work is directly in the machinery the
hypothesis implicates. Add the anonymous type-checker internals (~11.6 %)
and we're at **~54.5 %**, which is a majority share.

**What's notably absent.** Nothing in the profile looks like simp, like
Meta-level tactic machinery, or like proof-term construction. The top
entries are all in the C++ kernel. So whatever cost there is, it is *in
the kernel type-checker*, not in simp re-running or re-deriving things.
That matches our earlier observation that the simp wall time at depth
1500 is only ~34 ms versus ~1.5 s in kernel type-checking.

**What the profile does NOT prove.** I can't definitively link any
specific `lean_expr_equal` call to "verifying the beta-reduction of a
motive inside an `Eq.ndrec`." To do that I'd need a call graph from the
anonymous kernel-internal region, with resolved symbols. The
callgrind-recorded graph has that data in principle, but it's noisy
because of the recursive type-checker cycles, and the anonymous region
only shows up as offsets. What the profile *does* establish is that
the dominant work is:

1. allocating fresh Expr objects,
2. comparing them structurally,
3. freeing them,

and this pattern is consistent with nothing else I can think of. If
the extra cost were (say) a logarithmic `PersistentHashMap` factor
inside the kernel's own cache, we'd expect to see that HashMap's
`findAux` dominating, not `mk_app_data`/`expr_equal`/`dec_ref_cold`.
The env-lookup `findAux`'s exist in the profile (~6 % combined), but
they're a second-tier cost, not the primary one.

### Bottom line

The numbers are consistent with the mechanism written up earlier:
every time the kernel type-checks a `myGetElem.congr_simp` application,
it substitutes actuals into the lemma's conclusion (producing a fresh
`Eq.ndrec`-laden Expr), whnf's that and beta-reduces the motive
(producing another fresh Expr), compares the result against an expected
type via a new `isDefEq` call whose per-call cache is empty, walks
structurally until it hits shared inner tower pointers, and then
discards all those temporaries. The top-line 22.5 % in RC+alloc+free,
5.7 % in `expr_equal`, and 9.2 % in substitution are exactly the
fingerprints of that pipeline.

The profile was taken with `valgrind --tool=callgrind --collect-jumps=no
--dump-instr=no` on `bench_simp_share 1500`, using
`build/release/stage1/bin/lean` with no additional debug info. Raw
callgrind output is `/tmp/callgrind.out` during the investigation;
rerun with the same flags to reproduce.

## Contradictory evidence: the wrapper experiment

The profile above was consistent with the "fresh-Expr via motive
beta-reduction" mechanism, so I tried to falsify it by eliminating the
beta-redex. The plan: provide a user `@[congr]` lemma that replaces the
inline `ha ▸ hi ▸ h` in `myGetElem.congr_simp`'s conclusion with a call
to an opaque `bounds_cast` wrapper whose return type is a plain Prop
(no `motive b` beta-redex). If the mechanism above is right, this should
strictly improve kernel time.

Setup:

```lean
theorem bounds_cast {a a' : Array Nat} (ha : a = a')
    {i i' : Nat} (hi : i = i') (h : i < a.size) : i' < a'.size := by
  subst ha; subst hi; exact h

@[congr] theorem myGetElem_congr {a a' : Array Nat} (ha : a = a')
    {i i' : Nat} (hi : i = i')
    (h : i < a.size) :
    myGetElem a i h = myGetElem a' i' (bounds_cast ha hi h) := by
  subst ha; subst hi; rfl
```

Results (share bench, same machine as the baseline numbers):

```
                           simp (ms)         kernel type-check (ms)
depth │ baseline │ wrap │ raw  │ baseline │ wrap │ raw
──────┼──────────┼──────┼──────┼──────────┼──────┼──────────
   5  │    0.54  │ 1.09 │ 1.19 │    0.25  │ 0.23 │     5.55
  10  │    0.63  │ 2.07 │ 2.18 │    0.40  │ 0.36 │ 1,430
  20  │    0.94  │ 4.04 │  —   │    0.79  │ 0.73 │   (diverged)
  50  │    1.61  │ 17.4 │      │    2.49  │ 3.27 │
 100  │    2.63  │ 44.4 │      │    8.18  │ 11   │
 200  │    4.92  │ 157  │      │   29     │ 40   │
 500  │        — │ 992  │      │  167     │ 252  │
1500  │   34     │  —   │      │ 1,520    │ 2,290│
```

*baseline*: current code path, auto-generated `myGetElem.congr_simp`.
*wrap*: user `@[congr] myGetElem_congr` using `bounds_cast`.
*raw*: same shape but with inline `ha ▸ hi ▸ h` instead of the wrapper.

Three things are clear:

1. **The wrapper didn't help kernel time.** At depth 200 the kernel goes
   40 ms vs 29 ms (40 % worse). At depth 1500 the kernel goes 2.29 s vs
   1.52 s (50 % worse). It's a modest constant-factor *regression*, and
   the growth rate is roughly the same (still `n^{1.5–1.8}`).

2. **The wrapper dramatically pessimizes simp itself.** Simp time goes
   from 4.92 ms to 157 ms at depth 200 (~32× worse), and continues
   to grow faster than the baseline (roughly `n^{1.5–2}` for simp
   alone, vs near-linear in the baseline).

3. **A user `@[congr]` lemma with inline `▸` is catastrophic**, not
   just slightly worse. Depth 10 hits 1.43 s of kernel type-checking
   (baseline: 0.40 ms — about 3 500 × worse). Depth 20 didn't complete
   in two minutes of wall time.

### What this means for the mechanism claim

The profile earlier in this file showed allocation + RC + `expr_equal`
+ substitution dominating (~43 % combined), which I took as strong
support for the "motive beta-reduction produces fresh non-shared Exprs"
mechanism. The wrapper experiment should have removed the motive
beta-reduction entirely (no `Eq.ndrec` in the conclusion template) and
therefore made the kernel faster. It made it slower.

That means one of the following is true, and I can't tell which from
the data I have:

- **The mechanism is wrong.** Motive beta-reduction may not actually
  be the dominant source of fresh, non-shared Exprs; something else in
  the kernel's type-checking is, and that something else is still
  triggered by the wrapper (or made worse, because user `@[congr]`
  lemmas go through a different simp path that generates different
  proof term shapes).

- **The mechanism is right but the wrapper introduced a worse second
  problem.** Specifically: user `@[congr]` lemmas go through a
  different simp path than auto-generated `X.congr_simp`, and that
  path does enough extra work per rewrite step to net out slower
  even if the beta-reduction savings are real. The ~32× simp slowdown
  on the wrapper variant is consistent with "whatever simp is doing,
  it's doing a lot more of it than the baseline". I do not know *what*
  the difference in path is — I originally speculated it was some
  kind of subsingleton-elim shortcut triggered by the elision of the
  dependent argument in the auto-generated signature's pretty-printed
  display, but that's wrong: `⋯` in Lean's pretty-printer is just
  `pp.proofs` elision of sub-proofs above a size threshold, it
  doesn't signal any special semantic handling. Finding the actual
  difference would require reading `Lean/Meta/Tactic/Simp/Rewrite.lean`
  and the `@[congr]` attribute registration, which I haven't done.

- **Both.** The wrapper might have removed the motive beta-redex (a
  small win) while simultaneously costing much more on the simp side
  (a big loss), netting out to worse. In that case the profile above
  is still fingerprinting a real effect, but much smaller than the
  43 % I claimed.

### Honest revised claim

I over-read the profile. The top hot functions (`lean_dec_ref_cold`,
`lean_expr_equal`, `lean_expr_mk_app_data`, `lean_expr_lift_loose_bvars`)
do show that **kernel type-checking is dominated by allocating,
comparing, and freeing temporary Exprs**. That fact is robust — the
numbers are what they are. But the leap from "dominated by temporary
Exprs" to "specifically, the Eq.ndrec motive beta-reduction is the
source of those temporaries" is not supported by the wrapper experiment.
A fix that eliminated that beta-reduction, if my mechanism story were
right, should have moved at least the kernel column downward. It
didn't.

What I still believe:

- Rewriting at a dependency site through a dependent-proof congruence
  does force per-level work on tower-shaped types, and this work
  scales worse than linear.
- The kernel's per-call memoization in `expr_eq_fn::m_cache` is part
  of the story, as is the pointer-equality fast path occasionally
  missing.
- The residual `n^{1.5–1.8}` is a real effect above and beyond what
  the per-binder quadratic blow-up of the original variant accounts
  for.

What I no longer confidently believe:

- That the specific mechanism is "motive beta-reduction in `Eq.ndrec`
  allocates fresh outer Prop nodes that miss the pointer fast path."
- That a wrapper-around-the-cast, at the user or `@[congr]` level,
  would speed this up. Empirically it does the opposite.
- That the 43 % profile share in "fresh-Expr lifecycle + compare +
  substitution" can be attributed primarily to the congruence-lemma
  conclusion template. At least some of it — possibly most — must
  come from elsewhere (infer-type on tower arguments, whnf of
  `myGetElem` unfolding, local context lookups, something else).

### What I'd do next

A narrower profile that distinguishes the *baseline* share variant's
work from the *wrapper* share variant's work would disambiguate this.
If the wrapper variant's callgrind profile shows the same hot
functions at similar percentages as the baseline, the mechanism isn't
about motive beta-reduction at all — it's about whatever is *common*
to both. If the wrapper variant shows markedly different hot
functions, then the beta-reduction story survives but is being
overwhelmed by the cost of simp taking a worse path on user
`@[congr]` lemmas.

Until one of those runs, treat the "Profiler verification" section
above as establishing *the shape of the cost* (temporary-Expr
lifecycle dominates) but **not** *its cause* (motive beta-reduction
in the congruence lemma's conclusion). The phenomenological claims
at the top of this file — rewriting at a dependency site is
expensive, dependent-proof congruence has non-local per-level cost,
kernel memoization is per-call — all still hold. The specific
"why 43 % is in fresh-Expr lifecycle" story does not.
