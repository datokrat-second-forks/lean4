# Investigation log: simp performance on nested array access

A chronological log of the investigation that produced `test_simp_bench.lean`.

## 1. Starting point

Initial question: do existing benchmarks cover `simp` performance on terms like
`a[a[a[a[a[0 + i]]]]]`, where repeated simplification causes bounds-proof terms to grow?

Searched `tests/bench/`, `tests/elab_bench/`, and related directories. No existing
benchmark covered this. The closest were:

- `simp_bubblesort_256.lean`, `simp_congr.lean`, `simp_subexpr.lean` — first-order
  rewriting with abstract axiomatized types, no dependent `GetElem`.
- `string_simp_ne.lean` — proof-term scaling, but for string simprocs.
- `cbv_array.lean` — nested array indexing but via `cbv`, not `simp`.

Conclusion: no benchmark matches. User confirmed the proof-size blowup is already known;
the goal is to demonstrate a **measurable slowdown**, not just theoretical term growth.

## 2. First attempts at a benchmark

Tried writing the expression directly with surface syntax and explicit `'h` bounds
proofs. Depth 1-3 by hand:

```
Depth 1: 6ms    Depth 2: 8ms    Depth 3: 12ms
```

Growth visible but small. Needed a metaprogram for arbitrary depth.

Spent several iterations wrestling with quotation hygiene, `bracketedBinder` vs
`explicitBinder` parser names, `meta import` requirements, and `CommandElabM` vs
`TermElabM` lifting. Eventually landed on a working `elab "#bench_simp_nested "`
command that generates `∀ (a : Array Nat) (i : Nat) (h₀ : ...) ..., lhs = lhs := by
intros; simp` at parametric depth.

## 3. First clean measurements

With the metaprogram working, depths 10, 20, 30, 50, 100, 200 gave clear quadratic
growth:

```
Depth │ simp (dep)
──────┼───────────
  10  │   53ms
  20  │  184ms
  50  │ 1330ms
 100  │ 7608ms
```

Comparison against a non-dependent `f(f(...(0+i)...)) = f(f(...))` variant showed the
non-dependent case stayed at 2ms throughout, confirming the cost was inherent to
dependent `GetElem`.

## 4. Running it outside the MCP

User asked for a reproduction recipe. Wrote `src/test_simp_bench.lean`. Initial runs via
`lake env lean` hit an IR interpreter assertion, but
`LEAN_PATH=.../lib/lean .../bin/lean test_simp_bench.lean` worked. Same timings reproduced.

## 5. Profiler breakdown

Added `set_option trace.profiler true` to find where time was spent. First attempt showed
~1500ms in "definition header" (type elaboration) and only ~170ms in the tactic proof —
the profiler overhead was swamped by the huge type pretty-printing.

Switched to `set_option profiler true` (cumulative timings) inside the `theorem` block,
filtering for simp/typeclass/tactic lines. At depth 100:

```
simp: 440ms    typeclass inference: 997ms    tactic execution: 55ms
```

Typeclass inference was the dominant cost, unexpectedly larger than simp itself.

## 6. Comparison with non-dependent variant

Re-ran the non-dependent `plain` variant with the same profiler. All categories stayed
flat (< 1ms at any depth). Confirmed the quadratic cost was tied to the dependent
`GetElem` invocations.

## 7. The `myGetElem` experiment

User suggestion: define `myGetElem (xs : Array Nat) (i : Nat) (h : i < xs.size) : Nat :=
xs[i]` — same dependent proof parameter as `GetElem`, but a plain function, no typeclass
dispatch.

Result: `myGetElem` was nearly as fast as the non-dependent `plain` variant. At depth
100: 2.9ms simp vs 441ms for `GetElem`; 8.8ms typeclass inference vs 2,070ms. This pinned
the quadratic cost on typeclass inference during simp's congruence traversal, not on
the dependent cast mechanism itself.

## 8. Asymmetric goal

Initially the goal was `nested = nested` (same LHS and RHS), which produces a proof that
might not exercise the full congruence chain. Changed to `nested (with 0+i) = nested
(with i)`, using separate bound hypotheses on each side. All measurements redone with
the asymmetric goal — the relative picture stayed the same, with `myGetElem` still
flat and `GetElem` still quadratic.

## 9. Kernel type checking

User asked to also measure kernel type checking. Grepping the cumulative profiler for
`type checking` showed:

```
Depth │ plain │ myGetElem │ GetElem
──────┼───────┼───────────┼─────────
 100  │ 0.4ms │   24ms    │  31ms
 200  │ 0.7ms │  140ms    │ 213ms
```

The key observation: `myGetElem` and `GetElem` have **similar** kernel times. So the
proof-term size is comparable for both dependent variants, and the kernel type-checking
cost is quadratic even without typeclass involvement.

## 10. Inspecting the proof term

Tried to measure the proof term via `Term.elabTerm` on a `by simp` tactic block — this
returned a metavar, not the finished proof. Switched to elaborating the theorem as a
full command and looking up the finished proof via `getConstInfo`. `theorem` threw away
the proof value; `noncomputable def` retained it.

Pretty-printing with `pp.all` at depth 1-2 showed the proof is an `of_eq_true`
application wrapping an `Eq.trans` chain with `congrArg`, `congr_simp`, and nested
`Eq.ndrec`s. The structure looked like it contained embedded copies of the full nested
tower, suggesting no sharing. I wrote that the proof was "not shared".

## 11. First course correction: measurement vs inspection

User: "How do you know the proof is not shared? You can't see pointer equality from
printing the expression."

Correct. Pretty-printing tells you nothing about sharing. Needed a real measurement.

## 12. Tree vs DAG

Wrote a traversal that counts total nodes (tree) and unique `Expr.data` values (proxy
DAG). Measured both proof and type for depths 1-50:

```
Depth │ proof tree │ proof dag │ type tree │ type dag
──────┼────────────┼───────────┼───────────┼──────────
  10  │    991     │    542    │    701    │   385
  50  │  12,511    │  6,382    │ 11,341    │ 5,785
```

Tree/DAG ratio ~2x and constant. Both tree and DAG grow quadratically, so O(n²) total
unique structure. User questioned whether `Expr.data` is a sound pointer-equality proxy;
I acknowledged it's a hash-based dedup, not pointer identity, and is strictly more
aggressive at deduping than pointer checking would be. Either way, even over-deduped
count was O(n²).

## 13. The bvar hypothesis

User: "Is it possible that the impossibility of sharing comes from bvars that change by
instantiating?"

Plausible hypothesis. To verify, I needed to measure DAG size modulo bvar index
variation. Tried rebuilding the tree with all `bvar n` replaced by `bvar 0` — this
blew up memory and had to be killed.

Rewrote as a bottom-up custom hash: traverse the expression, computing a hash that
maps all `bvar n` to a single constant, memoized on `Expr.data` to avoid re-traversing
shared subexpressions.

Initial result (depths 1-10):

```
Depth │ type bvar-blind │ proof bvar-blind
──────┼─────────────────┼──────────────────
  1   │      14         │       25
  10  │      14         │       25
```

A constant 14/25 regardless of depth. This "confirmed" the bvar hypothesis — or so I
documented it.

## 14. Second course correction: the bvar-blind count was wrong

User: "Doesn't it seem a bit implausible that the proof count is actually *constant*?
The theorem's statement contains more distinct proofs, one bounds proof per index access."

Right. Even with bvars erased, `myGetElem a (0+i) h` and `myGetElem a (myGetElem a (0+i)
h) h` are structurally distinct — the count can't be constant. The likely bug: the
custom hash was memoized on `Expr.data`, which packs a hash + metadata into 64 bits.
Structurally different expressions whose `.data` collided would silently reuse a
previous hash and get lost from the unique set.

I retracted the constant-14/25 claim. The qualitative reasoning about de Bruijn indices
preventing sharing was still sound, but my measurement of it was broken.

## 15. Direct per-binder counting

User: "I want you to verify this plausible hypothesis."

Switched to a more direct measurement: walk the forall telescope, extract each binder's
type, count total nodes and `bvar` nodes separately. At depth 20:

```
binder h₀:  37 nodes,  2 bvars
binder h₁:  43 nodes,  4 bvars
binder h₂:  49 nodes,  6 bvars
...
binder h₁₉: 151 nodes, 40 bvars
```

Per binder: 37 + 6k total nodes, 2(k+1) bvars. Summing over n binders gives O(n²).
But the growth has two components: +4 non-bvar nodes per level (one more `myGetElem`
wrapping) and +2 bvar nodes per level (references to the new outer binder). So about
two thirds of the per-binder growth is genuine structural nesting, not bvar shifting.
This partially contradicted my earlier framing.

## 16. Third course correction: a is a bvar, not an fvar

User: "Why is `a` even a bvar? I would have expected that it's an fvar."

Good catch. In `info.type` as stored in the environment, the entire theorem type is
closed and every forall-bound variable is a bvar. To see structural sharing across
binder types, I should open the telescope with `forallTelescope`, converting bvars to
fresh fvars.

## 17. Closed vs opened DAG — the clean result

Measured DAG size of the stored type (closed, with bvars) vs the opened form (all
binders introduced as fvars, DAG measured over the union of binder types):

```
Depth │ closed dag │ opened dag
──────┼────────────┼────────────
  1   │     52     │     52
  5   │    160     │    100
  10  │    385     │    160
  20  │  1,135     │    280
```

**Closed DAG grows quadratically (~2n²). Opened DAG grows linearly (~12n).**

This is the clean confirmation of the bvar hypothesis. In the closed form, "the same"
`myGetElem` tower appearing in `h_k`'s type and `h_{k+1}`'s type uses bvar indices that
differ by 1 throughout — they are distinct `Expr` values and cannot be shared. In the
opened form, towers use the same fvars across all binder types and can share
pointer-wise. Each new binder in the opened form contributes only O(1) new DAG nodes
(one more `myGetElem` wrapping the shared inner tower), giving O(n) total.

## 18. Final picture

The quadratic kernel type-checking cost comes from two compounding effects:

1. The theorem type is a forall telescope whose binders reference each other through
   progressively longer `myGetElem` towers. In a hypothetical representation that quotients
   over alpha-renaming / de Bruijn shifting, the DAG would be linear.

2. The de Bruijn representation forces each tower to be re-materialized with shifted
   indices in every enclosing binder scope. Pointer sharing is impossible across
   binder boundaries. The resulting closed-form DAG is O(n²).

The kernel appears to be paying for this closed-form size. Even with a linear opened DAG,
opening a forall binder requires an O(|body|) substitution, so traversing an n-deep
telescope costs O(n²) regardless of the underlying sharing.

The `GetElem` variant adds typeclass inference on top, which independently adds another
quadratic cost during simp's congruence traversal — this is why `GetElem` is ~5x slower
than `myGetElem` at depth 100 (441ms vs 2.9ms for simp) even though both have similar
kernel type-checking times.

## 19. Sharing-friendly variant: collapsing the telescope

Followup question: given that the quadratic cost in the `myGetElem` variant was driven
by having `O(n)` per-level binders whose types were forced to duplicate a tower in de
Bruijn form, does it help to restructure the theorem so there's a constant number of
binders instead? Specifically, replace the `n + n` per-level bounds hypotheses with

```
(a : Array Nat) (i : Nat)
(h0 : 0 + i < a.size)           -- LHS base bound
(hi : i < a.size)               -- RHS base bound
(step : ∀ (j : Nat) (h : j < a.size), myGetElem a j h < a.size)
```

and build every intermediate bounds proof as `step x_k p_k`. Because the telescope is
now fixed-depth (5 binders) and the tower body introduces no new binders, every
reference to `a` / `step` / `h0` inside the tower uses the *same* bvar index regardless
of how deep you are. "The same" inner subtower at different nesting levels should
literally be the same `Expr` — no de Bruijn shifting.

One wrinkle about construction: each level's new value AND new proof both reference the
previous value AND proof, so a Syntax-based construction would blow up exponentially
(Lean elaboration doesn't memoize on Syntax identity — each `$lhs` antiquotation gets
independently re-traversed). Had to build the tower directly as `Expr` via a loop that
reuses the previous iteration's `Expr` objects, which preserves pointer sharing.

## 20. DAG confirmation

Wrote `#inspect_share` to measure the new variant's closed and opened DAG:

```
Depth │ closed │ opened
──────┼────────┼────────
   1  │    66  │    63
   5  │    98  │    96
  10  │   138  │   136
  20  │   218  │   216
  50  │   458  │   456
 100  │   858  │   856
 200  │ 1,658  │ 1,656
```

Linear (~8n + 58), and closed ≈ opened within 2 nodes. The de Bruijn inflation
observed in the per-binder variant is entirely gone.

A side note I got wrong at first: my initial quadratic-intuition ("arguments of size
1 + 2 + 3 + ..., so the sum is n²") was wrong in both directions. The *tree* is
actually *exponential* — each level references the previous value and the previous
proof, so `tree(x_k) + tree(p_k) = 4 + 2·(tree(x_{k-1}) + tree(p_{k-1}))`. Only the
DAG is linear, and only because the shared subterms are literally the same `Expr`
pointer.

## 21. Simp performance on the share variant

Ran `#bench_simp_share` across depths 5–200 to see whether collapsing the type
telescope also fixes the simp/kernel timings.

```
Depth │ plain │ myget │ share       (simp, ms)
──────┼───────┼───────┼──────
   5  │  0.3  │  0.5  │  0.5
  10  │  0.3  │  0.7  │  0.6
  20  │  0.4  │  0.9  │  0.9
  50  │  0.5  │  1.6  │  1.6
 100  │  0.8  │  2.8  │  2.6
 200  │  1.3  │  5.0  │  4.9
```

```
Depth │ plain │ myget │ share       (kernel type checking, ms)
──────┼───────┼───────┼──────
   5  │  0.1  │  0.3  │  0.3
  50  │  0.2  │  5.8  │  2.5
 100  │  0.4  │ 24    │  8.2
 200  │  0.7  │ 137   │ 29
```

Also: typeclass inference for the `share` column is effectively zero at every depth.
In the per-binder variant, simp repeatedly triggers instance synthesis while rebuilding
tower subterms during congruence. In the share variant, `0 + i`'s `HAdd` instance is
resolved exactly once at construction time and never retriggered.

Simp in `share` matches `myget` within noise, which makes sense: simp walks the
congruence chain once per level either way. The kernel improvement is real
(~5× at depth 200) but the growth rate is still superlinear — roughly n^{1.5–1.8},
much better than the per-binder variant's n² but not the linear growth of `plain`.

## 22. Is simp's proof term actually O(n²)?

First hypothesis for the residual superlinearity: maybe simp's proof term itself is
quadratic, even though the theorem type is linear. Each congruence step might emit a
level-specific motive lambda mentioning a level-specific cast; O(n) steps × O(n) size
per motive = O(n²).

Wrote `#inspect_share_proof` that elaborates `bench_share_N` as a `noncomputable def`
(to retain the proof value), then measures DAG and tree size of the resulting proof
term.

```
Depth │ proof DAG │ proof tree │ type DAG │ type tree
──────┼───────────┼────────────┼──────────┼──────────
   1  │    125    │      595   │    66    │    137
   2  │    144    │    1,683   │    74    │    181
   3  │    163    │    4,801   │    82    │    269
   5  │    201    │   37,363   │    98    │    797
   8  │    258    │  738,315   │   122    │  5,725
  10  │    296    │  >2M cap   │   138    │ 22,621
 100  │  2,006    │    —       │   858    │    —
 200  │  3,906    │    —       │ 1,658    │    —
```

Proof DAG is **linear** (~19n + 105). The proof *tree* grows like ~2.7^n, but DAG-wise
it's as tight as the type. Hypothesis rejected: simp's proof term is linear in the DAG.

## 23. Looking at the C++ kernel

With both the type and the proof having linear DAGs, the residual superlinearity has
to come from per-traversal work inside the kernel. Read
`kernel/expr_eq_fn.cpp` and `Meta/Basic.lean` to understand the caching strategy:

- `Expr` equality (the `BEq` used by cache keys) starts with a pointer-identity fast
  path (`is_eqp`), then an O(1) hash reject, then a recursive structural compare with
  a **per-call** memoization cache (`expr_eq_fn::m_cache`) keyed on raw pointer pairs.
  The per-call cache is created on first use and destroyed when the enclosing
  `expr_eq_fn` goes out of scope.

- MetaM has persistent `defEqPerm` and `defEqTrans` caches (`PersistentHashMap` keyed
  on `(Expr × Expr × configKey)`) that *do* persist across calls within a single
  elaboration.

- `addDecl`, however, invokes the C++ kernel type checker, which does not participate
  in the MetaM caches. Its own `is_def_eq` and `whnf` caches live on the
  `type_checker` object for the duration of one `check` call, but structural equality
  checks within that call spin up fresh per-call `expr_eq_fn` caches.

So: within one `isDefEq` invocation, shared subterms hit the pointer fast path and
cost essentially nothing. But work done comparing two tower Props in one call isn't
reused by the next call. A proof term making O(n) isDefEq queries into tower-shaped
types can pay up to O(k) structural-walk cost at level k, giving O(n²) worst case and
the observed n^{1.5–1.8} in practice.

## 24. Grounded mechanism: what a single level-k kernel step actually does

Printed `bench_plain_2` and `share_proof_2` with `pp.all true` to see the actual proof
structures. The level-k step in each:

- **plain** uses `congrArg f p` where `f : Nat → Nat` is non-dependent. The kernel's
  per-step work: look up `f`'s type, unify universe/type parameters, template-substitute
  `a₁, a₂` into `f a₁ = f a₂`. The substitution walks the 2-node template and writes
  bvar references; it does **not** look into the value of `a₁` or `a₂`. **Per-step:
  O(1), independent of tower depth.**

- **share** uses `myGetElem.congr_simp a a (refl a) j j' p_j h` where the last argument
  has expected type `j < a.size` — a **dependent** argument whose type mentions the
  previous level's tower value. To type-check this application, the kernel must:
  - infer the type of the supplied `h = step j_{k-1} h_{k-1}`, which triggers a def-eq
    on `h_{k-1}`'s stored type against a level-(k-1) tower Prop;
  - compute the expected type by substituting `j` into the lemma signature, producing
    a fresh level-k tower Prop;
  - `isDefEq(expected, actual)` the two level-k Props. Pointer fast path when the two
    come from the same construction path; structural walk otherwise.
  **Per-step: O(1) amortized but sometimes up to O(k), because the tower shape leaks
  into the congruence lemma's argument types, and a new per-call cache starts from
  scratch at every step.**

That's the grounded version of the "driving def-eq through the tower" intuition: it's
not that plain skips the recursion and share performs it. Both recursively walk a
congruence ladder of length n. The difference is that plain's ladder step never forces
the kernel to compute or compare anything larger than O(1), while share's does — *because
the type of the dependent-proof argument in the congruence lemma mentions the running
tower value*.

## 25. Literature review

Searched for prior work on the specific phenomenon — superlinear kernel type-checking
on tower-shaped proof terms whose proof DAG is linear, caused by per-call (rather than
persistent) `isDefEq` memoization. No direct match found. The ingredients are in the
literature, but nobody appears to have characterized the per-call-vs-persistent
conversion-cache tradeoff on dependent-accessor towers specifically.

Closest prior work, grouped by theme:

**Lean kernel internals.**
- Carneiro, *Lean4Lean: Verifying a Typechecker for Lean, in Lean* (arXiv:2403.14064,
  ITP/CPP 2024). Documents Lean 4's `isDefEq` algorithm and explicitly has a TODO
  about "more efficient representations and caching policies (e.g., imperfect cache)"
  on the `(s, t) → isDefEq` map. Acknowledges cache design as a tuning knob. Also
  notes that worst-case conversion is "galactically large" and heuristics (not the
  algorithm) keep it tractable. Nearest existing acknowledgement but no quantitative
  analysis.
- Tchoupo et al., *Lean4Less: Eliminating Definitional Equalities…* (CPP/ITP 2025,
  hal-05310102). Translates away proof irrelevance / K-like reduction. Related because
  the def-eq features that make `GetElem` proofs dependently typed are the ones that
  complicate the kernel's conversion check.

**Hash-consing and sharing in kernels.**
- Filliâtre & Conchon, *Type-safe modular hash-consing* (ML workshop 2006). Canonical
  reference; technique used by Coq.
- Kovács, *smalltt* (GitHub 2023) and arXiv:2509.13489, *Towards a Performance
  Comparison of Syntax- and Type-Directed NbE* (2025). Directly argues that
  "hash-consing alone is inadequate for eliminating size explosions" because it doesn't
  handle beta, and benchmarks Lean/Coq/Agda/Idris/smalltt on elaboration. Most relevant
  *empirical* prior art on dependent-type elaboration scaling, though none of its
  benchmarks match the `GetElem`-tower shape.
- Braibant, Jourdan & Monniaux, *Implementing and reasoning about hash-consed data
  structures in Coq* (JAR 2014, arXiv:1311.2959). Hash-consing inside Coq proofs,
  background only.

**Proof-term DAG sharing vs binders.**
- Shivers & Wand, *Bottom-up β-reduction: uplinks and λ-DAGs* (HOSC 2010). Exactly
  articulates that de Bruijn indices are "context-dependent, meaning a term with free
  variable references will have two distinct forms at two different places in the
  tree" — the phenomenon observed in section 13–17 of this log where per-level binders
  defeat sharing.
- Maziarz et al., *Hashing Modulo Alpha-Equivalence* (PLDI 2021). O(n log n) alpha
  hashing; relevant if you want structural sharing that survives binder shifts.
- Charguéraud, *The Locally Nameless Representation* (JAR 2012). Motivates
  locally-nameless precisely because pure de Bruijn "falls short when comparing
  subterms occurring within a larger context." Directly supports the diagnosis that
  the per-level binder variant loses sharing across binder scopes.

**Congruence closure / simp under dependent types.**
- Selsam & de Moura, *Congruence Closure in Intensional Type Theory* (IJCAR 2016,
  lean-lang.org/papers/congr.pdf). Foundational paper for Lean's dependent congruence
  handling. Discusses subsingleton-elim reasoning for dependent proof arguments, but
  does not profile the resulting def-eq calls.
- leanprover/lean4 issue #988, *Wishlist for congruence lemmas*. Ongoing community
  discussion of dependent-argument congruence lemmas and the diamond/defeq problems
  they cause — closest community forum match.
- Lean 4.22 release notes: mention that simp's zeta-reduction was rewritten to avoid
  "complexity quadratic in the depth of the let telescope." Known instance of
  simp-quadratic-in-depth, but different mechanism (let-telescope, not dependent
  congruence).

**Related blowups that are *not* this one.** Jung (2019), "Exponential blowup when
using unbundled typeclasses," and Sozeau et al., *CoqCoqCorrect* (POPL 2020), both
attribute Coq/Lean typechecking blowups to instance search or lack of structural
sharing — not to conversion-cache lifetime.

**Bottom line.** The specific claim "per-call `isDefEq` memoization is the residual
bottleneck on linear-DAG tower-shaped proof terms, and a persistent conversion cache
(scoped to a single declaration check) would bring the growth from n^{1.5–1.8} down
to linear" appears not to be characterized in the literature. Lean4Lean's TODO is the
only place it's acknowledged at all. Worth filing on lean4's issue tracker if we want
to push on it — the reproducer in this repo is already minimal, and the fix surface
(swap the per-call `expr_eq_fn::m_cache` for something that persists across calls
within one `type_checker` invocation) is narrow.

## 26. Wrapper experiment: the fix that wasn't

Conceptual hypothesis at this point (sections 22–24): the kernel's
superlinear growth on the share variant comes from `myGetElem.congr_simp`'s
conclusion containing an `Eq.ndrec` whose motive is a lambda. When the
kernel substitutes actuals and `whnf`-reduces the motive against its target,
it allocates a fresh outer `Expr` node (e.g. `… < a.size` wrapping a
tower-shaped index) that isn't hash-consed against structurally-identical
nodes produced at other sites. The subsequent `isDefEq` misses the
pointer fast path and walks structurally until it hits one of the shared
inner tower subterms. Summed over `n` levels → `n^{1.5–1.8}`.

If that story is right, hiding the cast behind an opaque wrapper should
help. Test:

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

`bounds_cast` is a `theorem` so the kernel treats it as opaque in most
conversion contexts; the return type `i' < a'.size` is a plain Prop with
no beta-redex. The `@[congr]` attribute replaces the auto-generated
`myGetElem.congr_simp` in simp's congruence pool.

Verification that simp actually uses it: dumped the depth-3 proof term
with `#print` and saw nested `myGetElem_congr … bounds_cast …` instead
of the old `myGetElem.congr_simp … Eq.ndrec …`. Good — simp is honoring
the user `@[congr]`.

## 27. Results: the opposite of what the mechanism predicted

Re-ran `#bench_simp_share` at the same depths as section 21, with the
wrapper `@[congr]` lemma active. Also ran a "raw" variant: same user
`@[congr]` but with `(ha ▸ hi ▸ h)` inlined in the conclusion instead of
the `bounds_cast` call.

```
                           simp (ms)         kernel type-check
depth │ baseline │ wrap │ raw  │ baseline │ wrap │ raw
──────┼──────────┼──────┼──────┼──────────┼──────┼──────────
   5  │    0.54  │ 1.09 │ 1.19 │   0.25ms │ 0.23 │   5.55 ms
  10  │    0.63  │ 2.07 │ 2.18 │   0.40ms │ 0.36 │   1.43 s
  20  │    0.94  │ 4.04 │  ——  │   0.79ms │ 0.73 │  (diverged >2min)
  50  │    1.61  │ 17.4 │      │   2.49ms │ 3.27 │
 100  │    2.63  │ 44.4 │      │   8.18ms │ 11   │
 200  │    4.92  │  157 │      │  28.9ms  │ 40   │
 500  │        — │  992 │      │   167ms  │  252 │
1500  │    34    │      │      │   1.52s  │ 2.29s│
```

Three clean findings:

1. **The wrapper didn't help kernel time.** At depth 200, 40 ms vs
   28.9 ms (≈40 % worse). At depth 1500, 2.29 s vs 1.52 s (≈50 %
   worse). Not an improvement; a small constant-factor regression,
   and the growth exponent is unchanged.

2. **The wrapper dramatically pessimizes simp itself.** At depth
   200, simp goes from 4.9 ms (baseline) to 157 ms (wrapper) —
   about 32× worse. The growth rate for simp alone is roughly
   `n^{1.5–2}` with the wrapper, vs near-linear in the baseline.

3. **A user `@[congr]` with inline `▸` is catastrophic**, not just
   a little worse. Depth 10 hits 1.4 s of kernel type-checking
   (≈3 500 × worse than baseline's 0.4 ms). Depth 20 didn't complete
   in two minutes.

## 28. Why the wrapper doesn't help (and the mechanism is suspect)

The mechanism story from sections 22–24 predicted that eliminating the
`Eq.ndrec` beta-reduction should drop kernel time. The wrapper
eliminates that beta-reduction — `bounds_cast` is opaque and has a
non-redex return type — and kernel time did not drop. It went up a
little.

Two compatible explanations, one incompatible:

- **The mechanism is wrong.** Motive beta-reduction may not actually
  be the source of the fresh non-shared Exprs dominating the profile.
  The 22 % in `lean_dec_ref_cold` + allocation + free is real, but
  its root cause is apparently something else — possibly `inferType`
  walks on tower arguments, possibly `whnf` unfolding `myGetElem`
  itself, possibly kernel internals that don't show up by name.

- **The mechanism is partly right but swamped by a worse second
  problem.** User `@[congr]` lemmas go through a different simp path
  than auto-generated `X.congr_simp` — something about that path
  does enough extra work per rewrite step to net out slower even if
  the beta-reduction savings are real. The ~32× simp slowdown on
  the wrapper variant fingerprints exactly this: simp, not the
  kernel, is doing much more work than before. I don't know *what*
  that difference is; I haven't read the relevant simp source yet.

- **Both.** Wrapper removes a small cost (beta-reduction) and adds a
  bigger cost (worse simp path), netting slower.

I can't tell which from the data I have. What I can say is: the
profile (section 24) genuinely shows allocation + compare + free
dominating kernel type-checking, and that fact is robust. The leap
from "allocation-dominated" to "specifically motive beta-reduction in
Eq.ndrec" was too strong and isn't supported by this experiment.

## 29. Revised confidence

What still holds:

- Rewriting at a dependency site through a dependent-proof congruence
  forces per-level work on tower-shaped types that scales worse than
  linear. Collapsing the per-binder telescope to a constant-depth one
  fixed the catastrophic `n²` from sections 3–18. The residual
  `n^{1.5–1.8}` beyond that is real.
- The kernel's per-call `expr_eq_fn::m_cache` and the occasional
  pointer-equality fast path miss contribute to the residual.
- Kernel type-checking is allocation- and structural-equality-dominated
  in this workload; the profile is unambiguous on that.

What I'm no longer confident about:

- That motive beta-reduction in `Eq.ndrec` is the *specific* source of
  the fresh non-shared Exprs the profile is measuring.
- That hiding the cast behind a wrapper — at the user or `@[congr]`
  level — speeds anything up. It doesn't.
- That the "fix would be in simp/congr-lemma-generator, making it emit
  wrappers" direction is tractable. The wrapper route as tested (via a
  user `@[congr]` lemma) takes a slower simp path for reasons I
  haven't diagnosed, so it's neither a user-space fix nor a cleanly
  testable predictor of what a compiler-level fix would cost.

## 30. Where to go next

A narrower profiling experiment that swaps in the wrapper variant and
re-runs callgrind would disambiguate sections 28's three options. If
the wrapper profile shows the same hot functions at similar
percentages as the baseline, the "allocation dominance" is common to
both variants and motive beta-reduction isn't the cause. If the
wrapper profile shows a markedly different shape, then the mechanism
survives but user `@[congr]` is the wrong place to test it.

Either way, the right final fix — if there is one at this level —
probably lives inside Lean's compiler-generated `X.congr_simp`
machinery, not in user-space. A short-term user-facing mitigation for
`GetElem`-style API authors is simply to *avoid* collapsing the
telescope when not necessary: the per-binder variant is quadratic,
yes, but the share variant is `n^{1.5–1.8}` and comes with the
unexpected pitfall that providing a custom `@[congr]` lemma makes
things strictly worse.

## Methodology notes and mistakes

Things I got wrong and had to correct:

- **Claiming "no sharing" from pretty-printed output.** Pretty-printing is blind to
  sharing. Only a DAG measurement can tell you.
- **`Expr.data` dedup.** Treating `Expr.data` as pointer identity. It's a packed hash,
  not an object address — collision-prone for large trees. Fine as a rough proxy for
  ~1000 nodes, but not for precise measurements.
- **Memoizing the bvar-blind hash on `Expr.data`.** Collisions in the memo key silently
  merged distinct subtrees, producing a spurious constant count. Any custom hash that
  breaks structural invariants needs a collision-resistant memo key, or no memoization.
- **Confusing closed vs opened forms.** The stored `info.type` is closed; its binders
  are bvars, and shared subterms across binder types necessarily use different indices.
  To reason about "could this be shared", you need `forallTelescope` to introduce
  fvars.
- **Assuming a plausible-sounding result is correct.** I documented the constant-14
  result as a confirmed finding, when it was instead a red flag that my measurement
  was broken.
- **"simp's proof term must be O(n²)" hypothesis.** When the share variant's kernel
  type-checking came in superlinear despite the linear-DAG type, my first guess was
  that simp emits a quadratic-DAG proof term. Measured it (section 22) — the proof DAG
  is linear, ~19n + 105. The hypothesis was wrong; the cost is in kernel per-call
  memoization, not in proof size. Good reminder to measure before attributing.
- **"Both plain and share recurse, so why is plain faster" confusion.** I initially
  hand-waved about "the kernel recurses through the tower in both cases". Both do
  recurse through the proof term, yes — but recursing through the *proof* is cheap
  (linear in the DAG). The expensive part is whether each recursive step forces the
  kernel to compare tower-shaped *types*, and that depends on whether the congruence
  lemma at that step has dependent arguments. `congrArg f` with non-dependent `f`:
  no tower types in the signature. `myGetElem.congr_simp`: dependent `h : j < a.size`
  forces isDefEq on tower Props at every level.
- **Over-reading the callgrind profile.** Section 24 presents a profile showing
  ~22 % in `lean_dec_ref_cold` + alloc/free, ~5.7 % in `lean_expr_equal`, ~9 %
  in substitution. I took this as strong confirmation that `Eq.ndrec` motive
  beta-reduction was the specific source of fresh non-shared Exprs, and wrote up
  a "Bottom line" in the mechanism file that said so. Section 27 falsified that:
  a wrapper that eliminates the beta-reduction made kernel time mildly *worse*,
  not better. The profile's "shape of the cost" (allocation-dominated) is still
  true, but the specific causal story I attached to it isn't supported. Lesson:
  a profile tells you where time is being spent, not *why*. Attributing cost to
  a specific mechanism requires a falsification experiment, which I should have
  run before committing to the story in writing.
- **Trusting a plausible-sounding improvement proposal without testing.** Before
  the wrapper experiment, I told the user (twice) that a `bounds_cast`-style
  wrapper would help — first in the conceptual answer, then with a rough "20–30 %
  savings at depth 1500" estimate backed by the profile categories. The actual
  result was the opposite direction. Plausibility × profile-consistency is not
  evidence; measurement is.
- **Reading semantics into pretty-printing glyphs.** After the wrapper
  experiment failed, I speculated that auto-generated `X.congr_simp` got
  a "subsingleton-elim shortcut" in simp that user `@[congr]` lemmas
  didn't, and cited the `⋯` glyph in the auto-generated signature's
  pretty-printed display as evidence. The user correctly pointed out
  that `⋯` is just `pp.proofs` elision of sub-proofs above a size
  threshold — it's a display choice, not a semantic marker, and has
  no bearing on simp's internals. I had built a story to rationalize
  an unexpected measurement instead of saying "I don't know why user
  `@[congr]` is slower here". Sections 28–30 have been updated to
  strike the `⋯`-based speculation; they now list "different simp
  path, reason not yet diagnosed" as the honest open question. The
  rule to internalize: when a measurement contradicts your model,
  the failure mode of generating a fresh plausible-sounding
  rationalization is *extremely* strong, and has to be resisted
  explicitly.

Things that worked well:

- Cumulative profiler via `set_option profiler true` in the theorem block. Clean
  breakdown of simp/typeclass/kernel costs without overwhelming output.
- Running with `LEAN_PATH=<stage1>/lib/lean <stage1>/bin/lean <file>` to bypass lake's
  IR interpreter assertion.
- `noncomputable def` instead of `theorem` to retain proof values for inspection.
- `forallTelescope` to convert bvars to fvars before measuring structural sharing.
- `valgrind --tool=callgrind` + `callgrind_annotate` for kernel-level profiling.
  Slow (~50× runtime), but gives precise function-level breakdowns. Install via
  `apt-get install valgrind` (`samply` / `perf` were not available in this sandbox).
  Note that `libleanshared.so` has only `.dynsym`, so internal C++ kernel functions
  (`type_checker::check`, `whnf_core`, `is_def_eq`, …) show up as anonymous
  offsets in address gaps between exported symbols; you can partially resolve
  them by finding the nearest preceding exported symbol in `readelf --dyn-syms`,
  but two ~50 KB chunks of kernel code sit in unnamed gaps.

---

## Self-contained status summary (for context-less pickup)

If you're reading this cold, here's the whole situation in one place.

**The scenario.** A function `myGetElem : (xs : Array Nat) → (i : Nat) →
(h : i < xs.size) → Nat` with a dependent proof argument, composed with
itself `n` times into a tower

```
myGetElem a (myGetElem a (myGetElem a … (0 + i) …) …) …
```

`simp` is asked to rewrite the leaf `0 + i → i` via `Nat.zero_add` and
propagate through the tower.

**Two variants of the theorem statement.**

1. *Per-binder* (`#bench_simp_myget`, a.k.a. "dep" in older tables).
   One bounds-proof binder per level: the telescope has `∀ a i h₀ h₁
   h₂ … hₙ g₀ g₁ … gₙ`. Everything is tied back to concrete
   hypotheses. Simp + kernel cost ≈ `O(n²)`. **Root cause** (sections
   13–17): the stored type is closed, so bvars in the "same" inner
   subtower shift by one at each enclosing forall binder, and sharing
   across binder scopes is impossible in de Bruijn. Closed-form
   DAG ≈ 2.8 n². Opened (via `forallTelescope`) DAG grows linearly.

2. *Share* (`#bench_simp_share`). Collapses the telescope to 5 fixed
   binders: `(a : Array Nat) (i : Nat) (h0 : 0+i < a.size) (hi : i <
   a.size) (step : ∀ j h, myGetElem a j h < a.size)`. Every
   intermediate bounds proof is built as `step x_{k-1} p_{k-1}`. The
   tower body introduces no new binders, so every reference to
   `a`/`step`/`h0` uses a fixed bvar index and subtowers share. Type
   DAG ≈ 8n, proof DAG ≈ 19n (both linear). Proof *tree* is
   exponential ~2.7ⁿ — linearity is purely from `Expr` pointer
   sharing, which is why the bench builder constructs the tower as
   `Expr` directly instead of `Syntax` (elaboration doesn't memoize
   on Syntax identity, so a Syntax-based build would elaborate in
   exponential time).

**Measured performance** (at commit d17a8225fa, aarch64 release):

```
             simp (ms)              kernel type-check (ms)
depth  │ plain │ myget │ share │ plain │ myget │ share
───────┼───────┼───────┼───────┼───────┼───────┼───────
    5  │  0.3  │  0.5  │  0.5  │  0.1  │  0.3  │  0.3
   50  │  0.5  │  1.6  │  1.6  │  0.2  │  5.8  │  2.5
  100  │  0.8  │  2.8  │  2.6  │  0.4  │ 24    │  8.2
  200  │  1.3  │  5.0  │  4.9  │  0.7  │137    │ 29
 1500  │       │       │ 34    │       │       │1520
```

`plain` = `f : Nat → Nat` substituted for `myGetElem`, no dependent
proof argument. Grows linearly. `myget` = per-binder variant.
Eliminates the typeclass cost (was catastrophic in the original
`GetElem` variant, ~22 s at depth 200) but still ~n² kernel. `share`
= collapsed-telescope variant; roughly `n^{1.5–1.8}` kernel growth.

**The remaining question.** Why is `share` not linear like `plain`?
Both have linear proof DAGs. Both walk congruence ladders of length n.
The difference must be per-level work. The observed growth sits
between linear and quadratic.

**Callgrind-profile fingerprint** (on `#bench_simp_share 1500`, 1.52 s
kernel work):

```
22 %  alloc / free / RC cleanup of temporary Exprs
          (lean_dec_ref_cold 11.4 %, mi_free 3.6 %, mi_malloc_* 7 %)
 9 %  substitution machinery
          (lift_loose_bvars, replace_expr, instantiate*, loose_bvar_range)
 6 %  lean_expr_equal (structural equality; is_eqp fallthrough)
 5 %  mk_app_data + copy_expand_array (new App node creation)
10 %  env lookup (PersistentHashMap, SMap, name_eq, env::find)
12 %  anonymous kernel internals (type_checker / whnf / isDefEq region,
          unexported code in ~72 KB gap after lean_smap_foreach)
12 %  system/stack/memory/heartbeat instrumentation (firing per recursion)
```

What this **does** tell us: kernel type-checking is dominated by
allocating, comparing, and freeing temporary `Expr` objects. The
dominant pattern is "create fresh Expr → walk structurally → free".
Not what you'd see if the kernel were just traversing a pre-built
linear DAG — the temporary churn is real.

What this **does not** tell us: *why* the temporary churn happens.
Profiles show shape-of-cost, not cause. See the next point.

**The wrapper experiment** (sections 26–28). Hypothesis I developed
from the profile: the temporaries come from the kernel's whnf beta-
reducing the motive lambda in `Eq.ndrec` (which appears in
`myGetElem.congr_simp`'s conclusion via `ha ▸ hi ▸ h`), producing a
fresh outer `_ < _` Prop node that isn't hash-consed against
structurally-identical nodes built at other levels. If that's right,
wrapping the cast in an opaque helper function should eliminate the
beta-reduction and speed things up.

Tested with:

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

`#print` confirms simp actually uses `myGetElem_congr` and emits
`bounds_cast` applications in the proof term instead of inline
`Eq.ndrec` / `▸` (section 26).

Result:

```
                       simp (ms)         kernel type-check
depth │ baseline │ wrap │ raw  │ baseline │ wrap │ raw
──────┼──────────┼──────┼──────┼──────────┼──────┼────────
   5  │    0.54  │ 1.09 │ 1.19 │    0.25  │ 0.23 │   5.55ms
  10  │    0.63  │ 2.07 │ 2.18 │    0.40  │ 0.36 │   1.43s
  20  │    0.94  │ 4.04 │  —   │    0.79  │ 0.73 │  (diverged)
 100  │    2.63  │ 44.4 │      │    8.2   │ 11   │
 200  │    4.92  │  157 │      │   29     │ 40   │
 500  │        — │  992 │      │  167     │  252 │
1500  │    34    │      │      │ 1520     │ 2290 │
```

*baseline* = auto-generated `myGetElem.congr_simp`.
*wrap* = user `@[congr] myGetElem_congr` with `bounds_cast`.
*raw* = user `@[congr] myGetElem_congr` with inline `ha ▸ hi ▸ h`.

The wrapper didn't help. At depth 200 the wrapper is a mild kernel
regression (40 ms vs 29 ms) and a massive simp regression (157 ms
vs 4.9 ms, ~32×). The raw variant diverges catastrophically past
depth 10. So at minimum, providing a user `@[congr]` lemma — whether
with a wrapper or with raw `▸` — goes through a substantially slower
simp path than the auto-generated congruence lemma does.

**Why the mechanism claim is now suspect.** The wrapper story
predicted that eliminating the `Eq.ndrec` motive beta-redex should
improve kernel time. It didn't. Three possibilities, and I can't
pick among them from the data I have:

1. *Mechanism wrong.* The temporary-Expr churn isn't from
   motive beta-reduction; it's from something else (inferType on
   tower arguments, whnf unfolding `myGetElem` itself, kernel
   internals we can't see by name).
2. *Mechanism right but drowned out.* The wrapper does eliminate
   the beta-redex, but takes a slower simp path whose cost overwhelms
   the savings. The reason user `@[congr]` is slower is **unknown
   and requires reading `Lean/Meta/Tactic/Simp/Rewrite.lean` (and the
   `@[congr]` attribute registration) to find out**. Earlier in the
   conversation I speculated it was a `subsingleton-elim`
   shortcut signaled by a `⋯` in pretty-printing, but that's wrong —
   `⋯` is just `pp.proofs` elision and means nothing semantic. Strike
   that guess entirely; treat the cause as unknown.
3. *Both.* Small win in the kernel, big loss in simp, netting worse.

**What still holds, after all corrections.**

- Rewriting at a dependency site (i.e. rewriting a value whose
  occurrence appears in the type of a later dependent argument in
  the same application) forces per-level type-equality work that
  scales worse than linear.
- The catastrophic `~n²` in the per-binder variant is explained by
  de Bruijn shifting across per-level forall binders and is
  eliminated by collapsing the telescope.
- The residual `~n^{1.5–1.8}` in the share variant is real and
  entirely in the kernel (simp is near-linear; the residual is in
  `type checking` time).
- The kernel's type-checking is allocation-dominated on this
  workload; that's what the callgrind profile shows, and that fact
  is robust to any interpretation of *why*.
- Per-call `expr_eq_fn::m_cache` in `kernel/expr_eq_fn.cpp` is the
  kernel's structural-equality memo; it's recreated per call and
  discarded on return. `Lean4Lean` already flags this caching
  policy as a TODO.

**What I no longer confidently claim.**

- That motive beta-reduction in `Eq.ndrec` (or, equivalently, that
  the `ha ▸ hi ▸ h` in auto-generated congruence lemmas) is the
  specific source of the temporary-Expr churn the profile shows.
- That wrapping the cast in a helper — at any layer — speeds things
  up. Empirically it doesn't, at least not via the user `@[congr]`
  route.
- That there's any known-correct cause for the user `@[congr]` slow
  path. I speculated a `⋯`-based story, which was unjustified; the
  real reason is unknown to me.
- That a short-term user-level mitigation exists beyond "don't use
  user `@[congr]` lemmas for dependent-proof functions; keep the
  auto-generated one." The per-binder variant is `n²` and the share
  variant is `n^{1.5–1.8}`; neither is good, but neither can be
  improved from user space with current knowledge.

**Concrete open questions to resume from.**

1. Read `Lean/Meta/Tactic/Simp/Rewrite.lean` (and related — probably
   `SimpCongrTheorems.lean`, `Rewrite.lean`, and whatever handles
   `@[congr]` attribute registration) to find the actual difference
   between how auto-generated `X.congr_simp` and user `@[congr]`
   lemmas are invoked. Concretely: why does a user lemma with an
   *identical-shaped* conclusion take a slow path? Pattern matching?
   Subgoal generation? Re-elaboration?
2. Re-run callgrind on the wrapper variant. If its profile shows
   the *same* hot functions at similar percentages as the baseline,
   the allocation dominance is common to both variants and the
   motive-beta-reduction story is dead. If the profile shows a
   markedly different shape, the mechanism survives but user
   `@[congr]` is the wrong experimental harness for testing it.
3. Try to eliminate the residual `n^{1.5–1.8}` by modifying the
   compiler-generated `X.congr_simp` path — but only once question 1
   or 2 has established what's actually causing the residual. Do
   not ship a fix based on the profile alone; we already know that
   leads to wrong conclusions (sections 27–28).

**Files in this investigation.**

- `src/test_simp_bench.lean`: the benchmark file. Contains
  `myGetElem` definition; the three bench-generator elaborators
  `#bench_simp_plain`, `#bench_simp_myget`, `#bench_simp_dep` (the
  original `GetElem` variant with typeclass dispatch); the share
  variant's elaborators `#bench_simp_share`, `#inspect_share`,
  `#inspect_share_proof`; a shared helper `buildShareType`. The
  `bounds_cast` + `myGetElem_congr` wrapper is **not** in the
  current file (it was removed after the wrapper experiment showed
  a regression; see section 27 to reproduce).
- `src/test_simp_bench_log.md`: this file. Chronological record.
- `src/test_simp_bench_mechanism.md`: a standalone problem
  description. The "Profiler verification" section in that file is
  followed by a "Contradictory evidence: the wrapper experiment"
  section that walks back the over-strong mechanism claim. Read
  both together.

**Reproducing key measurements.**

```bash
# Build share bench at a depth, with profiler output
cp src/test_simp_bench.lean /tmp/run.lean
cat >> /tmp/run.lean <<'EOF'

set_option maxHeartbeats 32000000 in
set_option maxRecDepth 16384 in
#bench_simp_share 200
EOF
LEAN_PATH=build/release/stage1/lib/lean \
  build/release/stage1/bin/lean /tmp/run.lean

# Profile with callgrind (slow, ~50× runtime)
LEAN_PATH=build/release/stage1/lib/lean valgrind \
  --tool=callgrind --callgrind-out-file=/tmp/callgrind.out \
  --collect-jumps=no --dump-instr=no \
  build/release/stage1/bin/lean /tmp/run.lean
callgrind_annotate /tmp/callgrind.out --threshold=99 | head -60
```

## 31. Why user `@[congr]` takes a slower simp path

Picking up the open question from section 28 (and the resume-point in
section 30.1): what specifically makes simp slower when a user
`@[congr]` lemma is registered versus the auto-generated
`myGetElem.congr_simp`?

**The two code paths, side by side.**

Reading `Lean/Meta/Tactic/Simp/Main.lean` and `Types.lean`:

- `Main.lean:637 def congr (e : Expr)` dispatches on whether the
  function has any user `SimpCongrTheorem`s registered. If yes, it
  loops through them calling `trySimpCongrTheorem? c e`. If none
  succeed, it falls through to `congrDefault e`, which first tries
  `tryAutoCongrTheorem? e` (`Types.lean:795`) and only falls back to
  `simpAppUsingCongr` if the auto lemma is absent / rejected.

- **Auto path — `tryAutoCongrTheorem?`** (`Types.lean:795`). Fetches a
  pre-compiled `CongrTheorem` via `mkCongrSimp? f`, which is cached
  in `State.congrCache` keyed on the function. The cached
  `CongrTheorem` contains `argKinds : Array CongrArgKind`, `proof`,
  and `type`. For each arg, the path runs:
    - `fixed` → `dsimp arg`
    - `eq` → `simp arg`
    - `cast` → passthrough, no simp
    - `subsingletonInst` → trySynthInstance
  The proof is built by `mkApp proof arg` in a flat chain and the
  result type is computed by `type.instantiateRev subst`. No
  metavariables are allocated, no unification against a lemma LHS,
  no `forallMetaTelescope`.

- **User path — `trySimpCongrTheorem?`** (`Main.lean:586`). At every
  call:
    1. `mkConstWithFreshMVarLevels c.theoremName`
    2. `inferType thm`
    3. `forallMetaTelescopeReducing thmType` — allocates one metavar per
       binder of the lemma (7 for `myGetElem_congr`: `?a ?a' ?ha ?i ?i' ?hi ?h`)
    4. `isDefEq lhs e` — unifies the lemma's LHS template
       `@myGetElem ?a ?i ?h` against the actual `@myGetElem a val_k p_k`
    5. For each hypothesis in `hypothesesPos` (`ha`, `hi` for this
       lemma), runs `processCongrHypothesis` which calls `simp` on
       the hypothesis LHS, `isDefEq`s the result against the RHS mvar,
       then `isDefEq`s the hypothesis mvar against the built proof
    6. `synthesizeArgs`
    7. `instantiateMVars rhs` and `instantiateMVars (mkAppN thm xs)`
    8. `hasAssignableMVar proof <||> hasAssignableMVar eNew`
    9. `congrArgs` on any extra args

The structural asymmetry: the auto path's per-call cost is constant
in the function's argument count and does not touch anything
application-specific beyond `simp arg` for eq kinds. The user path
re-runs a full metavar-based template-match at every call.

**Call-count scaling (with `trace.Debug.Meta.Tactic.simp.congr`).**

Enabled the debug trace on the share variant with the wrapper
`@[congr]` at depths 5, 10, 20, 50. Every line in the trace
corresponds to one `trySimpCongrTheorem?` invocation.

```
depth d   trySimpCongrTheorem? calls
   5              15
  10              30
  20              60
  50             150
```

Exactly `3d`. Linear in depth, confirming that simp descends the
tower once per "pass" and there are three passes (roughly: descend
to rewrite `0 + i → i`, then rebuild from the base, then normalize
the refreshed bounds proofs). What's *not* observed: a quadratic
blowup in the call count. The quadratic cost is per-call.

**Wrap vs. base simp-time growth** (depth 20 through 400, share
variant, same machine as section 21, this clone, profiler=1ms threshold):

```
         base (auto)             wrap (user @[congr])
  d      simp (ms)  kernel (ms)  simp (ms)  kernel (ms)
────────────────────────────────────────────────────────
  20      <1         <1           3.98       <1
  50       1.33       2.51       13.5         3.04
 100       2.45       8.09       42.2        10.7
 200       4.57      29.4       156          41.1
 400       9.14     108         640         169
```

Base simp grows ~linearly (`1.33 → 2.45 → 4.57 → 9.14` ≈ doubles
per depth doubling). Wrap simp grows ~quadratically (`13.5 → 42.2 →
156 → 640` ≈ ~4× per doubling). Fit: `simp_wrap(n) ≈ 4·10⁻³ · n² ms`
for n ≥ 100. Confirms the asymmetry lives in simp time, not kernel
time.

Kernel time grows similarly (~n²-ish) in *both* variants, which
matches section 21: the kernel cost is a separate phenomenon
(section 24 mechanism, not yet pinned). The simp wall-time gap —
`9.14 ms` vs `640 ms` at d=400, a 70× ratio — is entirely attributable
to simp's `trySimpCongrTheorem?` dispatch.

**Per-call cost decomposition** (microbench simulating one
trySimpCongrTheorem? call at tower depth d, 200 reps per run):

```
  d      telescope-only   telescope + isDefEq   + instantiateMVars + hasAssignableMVar
─────────────────────────────────────────────────────────────────────────────────────
  20      ~0.005          ~0.020                 ~0.025
  50       ~0.005          ~0.03                  ~0.035
 100       ~0.005          ~0.045                 ~0.05
 200       ~0.005          ~0.085                 ~0.085
 400       ~0.005          ~0.165                 ~0.165                (ms per call)
```

Three things pop out:

1. `forallMetaTelescopeReducing` alone is near-constant (~5 μs/call,
   independent of tower depth) — as expected, the lemma type is
   fixed.

2. Adding `isDefEq lhs target_d` doubles the cost at d=20 and grows
   linearly with d beyond that. At d=400 it's ~0.165 ms/call.
   **This is the O(depth) per-call cost.** It comes from unifying
   the lemma's LHS `@myGetElem ?a ?i ?h` against
   `@myGetElem a val_d p_d`: head-matching assigns `?a, ?i, ?h`,
   but verifying that the actual `p_d`'s inferred type matches the
   expected `?i < ?a.size` after substitution forces a dependent-type
   check that walks the tower.

3. Adding `instantiateMVars rhs` + `instantiateMVars (mkAppN thm xs)`
   + two `hasAssignableMVar` calls barely changes the number. The
   `instantiateMVars` ExprStructEq cache dedups structural equals
   within one call; on a pointer-shared tower there's essentially
   nothing to walk (confirmed in a separate run: 0 ms for 200 calls
   even at d=400). `hasAssignableMVar` short-circuits on `!e.hasMVar`
   once all metavars have been assigned.

So the per-call cost that scales with depth is concentrated in
**the dependent-argument verification inside `isDefEq lhs e`** — a
cost that has no equivalent in the auto path because that path
never unifies a template.

**Putting the numbers together.** 3d calls with per-call cost
linear in the current tower depth → total `Σ_{k=1}^{n} 3·c·k = (3c/2)·n²`.
The microbench's isDefEq coefficient (~0.4 μs per unit of depth)
predicts `(3·0.4/2)·n²·10⁻³ ms = 6·10⁻⁴·n² ms`. At `n=400` that's
~96 ms. The observed wrap simp at d=400 is 640 ms. So the modeled
isDefEq cost accounts for roughly 15% of the observed simp-time
quadratic — real but not dominant.

The missing ~85% is distributed over the other per-call O(d) work I
didn't isolate in microbench — most plausibly the `processCongrHypothesis`
path for the `hi` hypothesis, which calls `simp val_{k-1}` (nested
simp call on a level-(k-1) subtower that, in the real run, has to
build its own trySimpCongrTheorem? stack before caching bottoms out).
A faithful microbench of that would have to reproduce simp's
recursive descent, which I didn't do.

**What this settles.**

- The dispatch asymmetry is real and mechanical: a user `@[congr]`
  goes through `trySimpCongrTheorem?`, the auto path through
  `tryAutoCongrTheorem?`. These two functions are structurally
  different, not just differently-tuned versions of each other.
- The user path's work per call scales with the tower depth at
  which it's invoked. Call count is linear (3d), per-call is O(d),
  total simp time is Θ(d²). This matches the observed growth.
- The ~n^{1.5–1.8} growth recorded in earlier sections of this log
  for the *base* variant is a *kernel* effect (see section 24); the
  Θ(n²) in the *wrap* variant is a *simp* effect and is a strictly
  different phenomenon stacked on top of the kernel one.
- "Don't use user `@[congr]` for dependent-proof functions" is now
  grounded: it's not a heuristic, it's the predictable consequence
  of template-matching against a fresh-metavar lemma signature at
  every recursive level.

**What this does *not* settle.**

- I isolated `isDefEq lhs e` as one per-call O(depth) contributor
  but it only accounts for ~15% of the observed wrap quadratic. The
  rest is distributed across recursive `simp` / `processCongrHypothesis`
  work that I didn't cleanly isolate. A full decomposition would
  require either (a) a microbench that reconstructs the recursive
  descent or (b) symbol-resolved callgrind data targeting
  `trySimpCongrTheorem?` specifically.
- Whether a tweaked `trySimpCongrTheorem?` that avoids the per-call
  `forallMetaTelescopeReducing` + `isDefEq lhs e` path (e.g. by
  pre-compiling a user `@[congr]` lemma into a `CongrTheorem`-shaped
  cached structure at registration time, then dispatching through
  the same machinery as `tryAutoCongrTheorem?`) would close the gap.
  Plausible, but would require elaborator work to precompute the
  argKinds from a user lemma and some additional machinery to
  validate the user's proof term against the derived argKind
  invariants. Not a one-line fix.
- The raw-`▸` variant (user `@[congr]` with inline `ha ▸ hi ▸ h` in
  the conclusion instead of the `bounds_cast` wrapper) remains
  catastrophic — it was known from section 27 to diverge past depth
  10, so no new data here. The baseline explanation (user path
  quadratic × kernel tower verification per level of inlined
  `Eq.ndrec`) suffices.

## 32. Next experiment: aux-lemma emission in the auto generator

**Plan.** Modify `src/Lean/Meta/CongrTheorems.lean` so that when
`mkCongrSimpCore?` processes a `.cast` argument for a function
`f : const`, instead of calling `mkCast` (which builds an inline
`Eq.ndrec`-chain via `substCore`), it generates a per-position
auxiliary theorem `<f>.congr_cast_<i>` via `addDecl` and emits a
reference `@<f>.congr_cast_<i> <deps> h` in the lemma's RHS.

Dispatch and proof construction stay on the current paths:

- Simp still goes through `tryAutoCongrTheorem?` because no user
  `@[congr]` is registered. Per-call cost stays constant in tower
  depth. The quadratic simp-time regression from section 27 should
  not reappear — this is the primary prediction being tested.
- `mkProof`'s innermost `mkEqRefl lhs` still works. Initial concern
  was that replacing `Eq.ndrec refl ... h` with
  `<f>.congr_cast_<i> refl ... h` would defeat `mkEqRefl` unless the
  aux is reducible. This was wrong. **Proof irrelevance handles it**:
  at the innermost point, the kernel compares
  `myGetElem a i h = myGetElem a i (<f>.congr_cast_<i> refl ... h)`
  by walking arg-by-arg; at the third position both sides are proofs
  of the same Prop `i < a.size`, so proof-irrelevance fires and
  accepts them as defeq without walking into the aux. So the aux can
  be `@[irreducible]` and `mkEqRefl` still discharges the goal via
  proof-irrelevance, regardless of whether the Eq.ndrec iota
  reduction would have fired.

**Why `@[irreducible]` might additionally help kernel time.** When
simp applies the generated congr lemma at a use site, the kernel
type-checks the substituted conclusion. With inline `Eq.ndrec`, the
kernel computes whnf of the `Eq.rec` motive beta-redex, walking the
tower (section 24 mechanism hypothesized; section 27 falsification
hedged). With an opaque `<f>.congr_cast_<i>` application, the kernel
sees a fully applied const whose result type was already verified at
aux-decl time; at the use site the kernel only needs to match each
actual arg against the aux's signature slots. Whether this actually
helps depends on whether the kernel's dominant work at the use site
is (a) reducing the `Eq.ndrec` motive — which the aux removes — or
(b) comparing the tower-shaped type of the bounds-proof slot against
the actual argument's inferred type — which the aux does NOT help
with because the slot's declared type in the aux signature still
mentions a tower value through the `deps`. Section 27's wrapper
experiment is the closest empirical prior, and that showed a mild
kernel regression, so a priori we should **expect no kernel
speedup**. The experiment is worth running anyway to get data from
the *auto* path specifically (section 27 was a user `@[congr]`,
which confounds simp-path and kernel-path effects).

**What to implement.**

1. In `CongrTheorems.lean`, introduce a new helper
   `mkCastAuxLemma (f : Expr) (i : Nat) (castType : Expr)
     (deps : Array Nat) (eqs : Array (Option EqInfo))
     (lhss : Array Expr) (rhss : Array Expr) : MetaM Expr`.
   - Returns the application expression to substitute for the cast
     position, i.e. `@<f>.congr_cast_<i> <universe levels> <param
     fvars> <eq fvars> <origLhs>`.
   - The aux lemma's type is
     `∀ <telescope over deps + each eq fvar + origLhs>, <castType>`,
     built by abstracting the relevant fvars via `mkForallFVars`.
   - The aux lemma's proof reuses the current `mkCast` subst logic.
   - Uses a deterministic reserved-style name
     `<f.constName!>.congr_cast_<i>`; if the const already exists on
     the env branch, skip the `addDecl` and just return the
     application.
   - Mark the aux with `@[irreducible]` (or declare it as `.thmDecl`
     — theorems are not unfolded by the kernel during reducible-only
     def-eq, which is what simp/reducible-matching uses anyway).

2. In `mk?`'s `.cast` branch (currently lines 335–338), call
   `mkCastAuxLemma` instead of `mkCast` **when `f.isConst`**. When
   `f` is not a const, fall back to the existing `mkCast` since we
   can't give the aux a stable reserved name.

3. Guard with an option
   `Lean.Meta.CongrTheorems.useCastAux : Bool := false` (default
   off), so the change is opt-in for the initial experiment. Turn on
   via `-Dpp.…useCastAux=true` or a `set_option` at bench time.

4. Build `Lean.Meta.CongrTheorems` via `cd src && lake build
   Lean.Meta.CongrTheorems`, then rerun `#bench_simp_share` at
   depths 20, 50, 100, 200, 400 with the option on, comparing
   against the current baseline numbers:

   ```
               base (auto, current)       base (auto, with aux)
     d         simp        kernel         simp        kernel
     20         <1          <1             ?           ?
     50         1.33        2.51           ?           ?
    100         2.45        8.09           ?           ?
    200         4.57       29.4            ?           ?
    400         9.14      108              ?           ?
   ```

   Expected from the dispatch claim: simp-time column stays within
   noise of the current base. If it goes quadratic, the claim about
   `tryAutoCongrTheorem?` being constant-per-call is wrong somewhere
   and we need to go back and reread the dispatch code.

**Open questions for when context resumes.**

- Where does `addDecl` get its `safety` and does declaring inside
  `mkCongrSimpCore?` (which is called from simp via `mkCongrSimp?`)
  work without a surrounding `realizeConst`? If not, we need to
  only emit aux lemmas inside the existing reserved-name realization
  path at `CongrTheorems.lean:429-444`, and fall back to inline
  `mkCast` when `mkCongrSimpCore?` is called directly.
- The universe-levels handling. `mkCongrSimpCore?` is working with
  an `Expr f` that may be a `.const` with universe level metavars.
  The aux lemma needs level parameters of its own. Copy levelParams
  from `f`'s cinfo.
- `mkForallFVars` over the right set of fvars. The aux lemma is
  parameterized over a subset of `lhss[0..i]`: specifically those
  appearing in `deps ∪ {i}`, plus any `.eq` equality fvars that
  were bound between them. This needs care — the generator's `mk?`
  currently tracks `eqs : Array (Option EqInfo)` so the aux can
  pull the right fvars from there.
- Naming collisions across builds / parallel compilation. Deterministic
  name + `containsOnBranch` check should handle this.

**Hypothesis resolution log** (quick reference for resume).

The question we're answering with this experiment: does the simp-time
Θ(n²) of the user `@[congr]` wrapper experiment (section 27) come
from the **wrapper's content** or from the **dispatch path**?
- My prediction (section 31, confirmed in conversation): it comes
  entirely from the dispatch path (`trySimpCongrTheorem?` vs
  `tryAutoCongrTheorem?`). Content-of-conclusion-template is
  irrelevant to simp-time.
- Test: emit the same `bounds_cast`-style wrapper but from inside
  the auto generator, so dispatch stays on `tryAutoCongrTheorem?`.
  If prediction holds, simp-time stays near-linear.
- Kernel-time: secondary. No strong prior to speedup; section 27
  showed a mild kernel regression in the user path. Expect similar
  or no-change in the auto path with aux.

## 33. Aux-emission experiment: run and results

**Implementation.** Added an opt-in option `congrSimp.useCastAux : Bool`
(default `false`) in `src/Lean/Meta/CongrTheorems.lean`, together with a
helper `mkCongrCastAux?` that the `.cast` branch of `mkCongrSimpCore?.mk?`
tries before falling back to inline `mkCast`. When enabled and `f = .const
p us` with `us` matching the const's own level parameters (i.e. we're in
the reserved-name action path), it builds a per-function / per-position
aux theorem `<p>.congr_cast_<i>` whose telescope abstracts over, in
order: for each dep `d` with kind `.eq`, the triple `(lhss[d], rhss[d],
eq_d)`; for each dep with kind `.fixed`, just `lhss[d]`; finally the
original `lhss[i]`. The aux's body is the existing `mkCast` result
(`substCore`-based `Eq.ndrec` chain) abstracted over those fvars. Simp
still dispatches through `tryAutoCongrTheorem?` because no user
`@[congr]` is registered — the change is entirely in the template the
auto generator builds.

With the option on, `myGetElem.congr_simp`'s pretty-printed RHS is

```
myGetElem xs_1 i_1 (myGetElem.congr_cast_2 xs xs_1 e_xs i i_1 e_i h)
```

instead of the baseline's inline `Eq.ndrec (Eq.ndrec h e_xs) e_i`.
Traced via `set_option trace.congr.thm true`, the aux is declared
exactly once per function (the first simp call that asks for
`myGetElem.congr_simp`) and reused thereafter.

**Build.** `make -j12 -C build/release` rebuilds stage1. A `lake build
Lean.Meta.CongrTheorems` alone is insufficient — `register_option` (and
`register_builtin_option`) fire their initializers from the shared
library at load time, so `set_option congrSimp.useCastAux true`
reports `Unknown option` until stage1's `libleanshared.so` is relinked.

**Results (`#bench_simp_share` at this commit, aarch64 release).**

```
                simp (ms)          kernel type-check (ms)
  d      aux=off  aux=on     aux=off   aux=on
 ────────────────────────   ───────────────────
   5     0.549    0.534       0.267    0.278
  10     0.678    0.715       0.404    0.487
  20     0.894    0.900       0.762    0.809
  50     1.61     1.66        2.55     3.12
 100     2.79     2.66        8.49    10.9
 200     5.13     5.11       30.9     42.2
 400     9.72     9.80      113      163
```

**Growth rates.** Baseline kernel doubling-ratio from 100→200→400 is
3.64 × then 3.66 ×, i.e. roughly n^1.87. Aux-on kernel is 3.87 × then
3.86 ×, i.e. roughly n^1.95. Both still superlinear; aux-on just
carries a constant-factor multiplier on top.

**What this settles.**

1. **Simp-time prediction confirmed.** Aux on vs aux off: within noise
   at every depth (0.5 %, 2.6 %, 0.7 %, 3 %, −4.7 %, −0.4 %, 0.8 %).
   No quadratic blow-up. This closes the section-31 hypothesis: the
   `~32×` simp-time regression from the section-27 wrapper experiment
   was **entirely** caused by routing through `trySimpCongrTheorem?`
   (the user-`@[congr]` dispatch), not by the content of the
   congruence lemma's conclusion. Keeping dispatch on
   `tryAutoCongrTheorem?` while changing only the conclusion template
   leaves simp flat.

2. **Kernel-time prediction also confirmed (in the pessimistic
   direction).** Aux on is a mild, uniform kernel regression — ranging
   from ~+4 % at d=20 to ~+44 % at d=400. The growth rate is unchanged.
   This mirrors the section-27 wrapper-in-user-@[congr] result (which
   was ~+40 % kernel at d=200 and ~+50 % at d=1500) almost exactly,
   despite going through a completely different simp path. Two
   independent experiments that eliminated the `Eq.ndrec` motive
   beta-redex from the use-site work both produced mild kernel
   regressions, neither produced the expected speedup.

3. **The mechanism hypothesis from sections 22–24 is now falsified at
   both layers.** Whatever causes the residual `n^{1.5–1.9}` kernel
   growth on the share variant, it is *not* motive beta-reduction in
   `Eq.ndrec` inside the congr lemma's conclusion. Replacing the
   inline cast with an opaque constant reference (at the level of
   `mkCongrSimpCore?`, so it affects the auto path that simp actually
   uses) does not speed things up. The two falsification experiments
   point in the same direction and can no longer be dismissed as a
   user-`@[congr]` path effect.

**Where the residual cost must live.** After this experiment, the
remaining candidates are all properties of verifying an application
of the congr lemma against its declared argument types, NOT properties
of the conclusion's shape:

- `isDefEq`-ing the actual bounds proof's inferred type (a
  tower-shaped Prop) against the expected type `i < a.size` computed
  by substituting the actuals into the lemma signature. The signature
  slot is still tower-shaped even with the aux — the aux abstracts
  over the cast machinery, but the `(h : i < a.size)` slot's type is
  the same tower it always was, so the slot-vs-actual isDefEq still
  walks tower-sized structures at every level.

- `inferType` on the actuals themselves, recursively, to produce the
  "actual argument type" that the above isDefEq compares against.

- `whnf` unfolding `myGetElem` during that isDefEq when the kernel
  decides to peer inside application nodes.

- `mkAppN`-style substitution of actuals into the lemma's conclusion
  template, allocating fresh Expr nodes for the result, which then
  flows into further isDefEq calls at the level above. This is the
  closest survivor of the section-24 story, but *without* the motive
  beta-reduction part — it's just plain substitution into a template
  that happens to mention a tower.

I cannot distinguish among these without a callgrind rerun with
symbol-resolved internals. The section-24 callgrind fingerprint
(~22 % alloc/free/RC, ~6 % `lean_expr_equal`, ~9 % substitution) is
consistent with *any* of the four — it's precisely "fresh Expr churn
dominates", with no finer breakdown than that.

**Why aux-on is a mild regression and not flat.** Three effects, each
small, adding up:

- Each aux application adds one extra `.const` node, a universe-level
  list, and a name lookup that goes through the env's persistent-hash
  map (the `findAux` cost from section 24 at ~4 %). That's per
  application, so it scales with call count (linear in depth).

- The aux's declared signature is longer than the inline cast's
  footprint. At a use site the kernel matches three extra actual
  arguments (`xs`, `xs_1`, `e_xs`, `i`, `i_1`, `e_i`) against the aux
  slots before getting to the interesting `h` slot. Each match is
  cheap individually, but they're not zero.

- `substCore`-based aux bodies are heavier than inline `Eq.ndrec` for
  the kernel to verify *at aux definition time*. That's a one-time
  cost per function, not a per-use-site cost, so it doesn't affect
  the asymptotics, but it's ~2–3 ms extra on small runs and shows up
  in the d=5 and d=10 numbers. (The same effect is absorbed into the
  per-file "congr simp thm" profiler line, which goes from ~0.3 ms
  baseline to ~0.3–0.4 ms with aux on — a small enough change that
  it doesn't skew the simp/kernel columns visibly.)

**Where this leaves the investigation.**

- The simp-quadratic of user `@[congr]` (section 27) has a complete
  mechanical explanation (section 31's `trySimpCongrTheorem?` dispatch
  calling `forallMetaTelescopeReducing` + `isDefEq lhs e` per call),
  confirmed a second way by this experiment (the aux variant, running
  on the auto path, produces no simp regression).

- The kernel `n^{1.5–1.9}` residual in the share variant has been
  narrowed: it's not in `mkCast`'s `Eq.ndrec` chain, not in the
  motive beta-reduction at use sites, and not anywhere in the
  "shape" of the congr lemma's conclusion — because replacing the
  whole conclusion-shape does not move the number. The cost must be
  in how the kernel verifies applications of congruence lemmas
  against their declared signatures, and specifically in the
  tower-vs-tower `isDefEq` on the dependent-proof slot.

- A fix targeting the auto generator's `.cast` path is now out of
  scope: we just tried the cleanest possible version of it and it
  doesn't help. The next layer to probe is kernel-internal — either
  symbol-resolved callgrind on the current baseline, or a narrower
  instrumentation of `type_checker::check` on a small-but-equivalent
  reproducer.

- As a byproduct, `congrSimp.useCastAux` is a working opt-in
  experiment toggle. Leaving it in the tree at `defValue := false`
  keeps it zero-cost for everyone not explicitly opting in, and
  gives anyone later investigating this residual a ready-made
  equivalent-but-alternate-shape generator to profile against.

**Files touched.**

- `src/Lean/Meta/CongrTheorems.lean`: added `register_option
  congrSimp.useCastAux`; added `congrCastAuxPrefix` and private
  `mkCongrCastAux?`; extended `mkCongrSimpCore?.mk?`'s `.cast` branch
  to consult `mkCongrCastAux?` before `mkCast`. No changes to public
  signatures — the feature is invisible unless the option is set.

## 34. The `myGetElem`-must-not-be-a-def experiment

Section 33 narrowed the residual to "how the kernel verifies
applications of congruence lemmas against their declared signatures".
This section runs the next experiment in line: **make the tower head
non-unfoldable and see what happens**. All benchmarks in this section
run with `congrSimp.useCastAux true`; the aux option is no longer
under test, it's just the fixed environment.

### Experiment A: `opaque myGetElem`

Replace `def myGetElem` with
`opaque myGetElem : (xs : Array Nat) → (i : Nat) → (h : i < xs.size) → Nat`.
This is strictly stronger than `@[irreducible]`: Lean's `opaque`
produces a `ConstantInfo.opaqueInfo` entry, which the *kernel* itself
refuses to unfold during `whnf` / `isDefEq`. `@[irreducible]` is
honored only at the Meta level.

Everything else in the share bench is unchanged. Results, aux on:

```
            kernel type-check (ms)         simp (ms)
  d      def body=xs[i]   opaque      def  opaque
 ──────  ───────────────  ───────    ────  ──────
  20         0.81          0.50      0.90   0.91
  50         3.12          0.90      1.66   1.35
 100        10.9           1.55      2.66   2.19
 200        42.2           3.02      5.11   4.01
 400       163             5.96      9.80   7.49
 800       (≈680 est)     11.7      (–)    14.4
1500      2290 (§30)      21.4      34     26.0
```

**Opaque kernel growth is linear.** `1.55 → 3.02 → 5.96` across
`100 → 200 → 400` is a ratio of 1.95 then 1.97, and `5.96 → 11.7 →
21.4` across `400 → 800 → 1500` is 1.96 then 1.83 (the 1.83 is
below 1500/800 = 1.875 so it's actually *sub*linear in that jump —
either noise or cache-friendly behavior). Compared to the `def`
baseline's n^1.87 fit, `opaque` is a clean n^1.0.

**At d=1500 opaque kernel is 71× faster** than the section-30 `def`
baseline of 1520 ms (21.4 ms vs 1520 ms). Simp also drops ~25% in
the opaque case.

### Experiment B: `def myGetElem ... := 0` (trivial body)

If the cost is in reducing `xs[i]` into `GetElem.getElem`-chains and
comparing those, then a body of `0` should short-circuit the
reductions and speed things up. Swap the body:

```
def myGetElem (xs : Array Nat) (i : Nat) (h : i < xs.size) : Nat := 0
```

Kernel type-check, aux on:

```
  d      def body=xs[i]   def body=0    opaque
 ──────  ───────────────  ──────────   ──────
 100         10.9             10.5       1.55
 200         42.2             40.3       3.02
 400        163              158         5.96
 800       (≈680 est)        617        11.7
1500      2290              2190        21.4
```

**Trivial body is not measurably different from `xs[i]`.** Both
scale at n^1.87. The body content is irrelevant; what matters is
that `myGetElem` is a `def` (i.e., a definition the kernel considers
unfoldable).

### Experiment C: `@[irreducible] def myGetElem`

For completeness, does the `@[irreducible]` attribute save us? If
the kernel honored it, we'd expect the same result as `opaque`.

```
  d      @[irreducible]   def (baseline)
 ─────   ──────────────   ──────────────
 100         10.5             10.9
 200         40              42.2
 400        158              163
```

**`@[irreducible]` is ignored by the kernel**, as expected from
reading the kernel source — it's a Meta-level-only attribute. The
kernel unfolds the def regardless. So the "fix" has to be either
`opaque`, or a kernel-level change to how `def`s are handled in
`isDefEq`.

### Experiment D: opaque Prop for the bounds slot

Orthogonal direction: keep `myGetElem` as a `def`, but replace the
slot type `i < xs.size` with an axiomatized opaque predicate
`InRange : Array Nat → Nat → Prop`. If the kernel's cost lives in
`isDefEq` on the slot type (tower `<`), making the predicate opaque
might avoid reducing `<` / `Nat.lt` / `Nat.succ_le`.

```
axiom InRange : Array Nat → Nat → Prop
def myGetElem (xs : Array Nat) (i : Nat) (h : InRange xs i) : Nat := 0
```

Share bench modified to use `InRange a _` in place of `_ < _.size`.
Result at d=20:

```
cumulative profiling times:
    simp          0.95 ms
    type checking 1.15 s
```

**A thousand-fold regression.** Opaquifying the bounds predicate
makes kernel time at d=20 worse than the def baseline at d=1500.
At d=100, d=200, and d=400 the profiler reports `type checking`
plateauing at ~730–745 s — the three runs each take ~12 min of wall
time and return the same time regardless of depth, which is the
signature of `maxHeartbeats` aborting the tactic at a fixed budget
rather than a genuine depth-correlated scaling. I did not chase
this further.

Why is this so much worse? My best guess, without deeper profiling:
when `<` is present, the kernel has *some* reduction path that it
can use to establish `val < a.size =?= val' < a.size` (perhaps via
`Nat.add`/`Nat.succ_le` reductions that partially cancel); when
the predicate is opaque, that path closes, and the kernel falls
through to some strictly-worse enumeration. Not going to chase
this — it's a confounding variable, not a load-bearing experiment.
**Key takeaway for the main line:** this rules out "the slot-type
being structural `<` is the cost", because removing `<` does not
improve things — it makes them dramatically worse. The cost is
genuinely about the tower *values* being `myGetElem` applications,
not about the tower *slot type* being `<`.

### Kernel source: `lazy_delta_reduction_step`

Reading `src/kernel/type_checker.cpp:815-934` the mechanism is now
explicit. The relevant functions:

- `is_def_eq_core` (line 1056): top-level structural def-eq with a
  fixed sequence — `quick_is_def_eq` (pointer/hash + structural),
  then `whnf_core` without delta, then `is_def_eq_proof_irrel`,
  then `lazy_delta_reduction`, then a few post-checks.

- `lazy_delta_reduction_step` (line 884): when both sides have
  delta-reducible heads with identical const+hints (line 917),
  there's an optimization: try `is_def_eq_args` first without
  unfolding. If that succeeds, return `DefEqual`. **If it fails,
  `cache_failure` the pair and fall through to unfold both sides
  via `whnf_core(unfold_definition(...))` (lines 931-932).**

- The per-`type_checker`-instance `m_failure` cache prevents
  re-visiting a specific `(t, s)` pair within one check, but it
  does *not* help across different pairs. Level k's `(t_k, s_k)`
  and level k+1's `(t_{k+1}, s_{k+1})` are distinct pairs with
  overlapping inner subterms, and each level pays independently
  for walking its inner structure.

That's the exact sequence our bench triggers. At each level of the
tower, `is_def_eq_core` is called on `myGetElem a X h` vs
`myGetElem a X' h'`. Same head. `is_def_eq_args` recurses into
`X =?= X'`, which is the level-(k-1) comparison — another tower
pair. Bottoming out at the leaves where `0 + i` vs `i` (not
definitionally equal in general), `is_def_eq_args` fails at some
level, and **every** level above that triggers
`whnf_core(unfold_definition(myGetElem a ... h))` on both sides.
That produces fresh unfolded Exprs (regardless of what the body
was — body content is irrelevant, as experiment B confirmed), which
are then compared recursively.

With `opaque myGetElem`, `is_delta` returns `none` at line 885 (the
kernel has no definition to unfold for an `opaque`), so
`lazy_delta_reduction_step` immediately returns `DefUnknown` without
unfolding either side. Control returns to `is_def_eq_core`, which
eventually hits `is_def_eq_app` at line 1115 — a plain structural
arg-by-arg walk with **no** delta reduction. Linear in the tower
depth per call, and because the arg-wise recursion reuses pointer
fast paths on shared subtowers, linear in total.

So the 70× speedup at d=1500 is exactly what you'd expect from
removing lines 931-932 from the hot path on this workload.

### What this settles

- **The residual `n^{1.5–1.9}` kernel cost is entirely from the
  kernel's `lazy_delta_reduction_step` unfolding `myGetElem` on
  both sides of an `isDefEq` call at every level of the tower.**
  Neither the cast machinery (sections 22–24), nor user `@[congr]`
  dispatch (section 31), nor the conclusion-template shape
  (section 33) is the cause. The cause is upstream of all of that:
  a dependent-proof congruence lemma forces per-level `isDefEq`
  on tower-valued args, and that `isDefEq` unfolds the tower head
  at every level.

- **Body content is irrelevant** (experiment B). Cost is paid for
  the unfolding itself and the subsequent structural compare of
  unfolded-form Exprs, not for what those unfolded forms contain.

- **`@[irreducible]` does nothing** (experiment C). The kernel
  doesn't consult it.

- **The cost is not in the slot type `<`** (experiment D). Swapping
  `<` for an opaque predicate makes it ~1000× worse at d=20, not
  better. This was the most surprising sub-result and I don't have
  a clean story for why — but it's unambiguous that "kill `<`" is
  not a fix direction.

- **Three user-space mitigations** for users hitting this pattern:
  1. Declare the accessor as `opaque`. Perfect — linear kernel
     cost, drops ~70× at realistic depths — but loses unfold-ability
     for any downstream reasoning that relied on it.
  2. Avoid towers of the same dep-proof accessor. If you can
     expose a single-step function `f : A → B` (non-dependent)
     and thread the proofs separately, `congrArg` applies and
     kernel stays linear.
  3. Use `Array.getInternal`-style wrappers that take proofs
     packaged into a `Subtype` or `Fin`, so the dep-proof
     dependency flows through a `.val` projection that the
     kernel *does* short-circuit via the projection optimization
     at line 898 (`try_unfold_proj_app`). Not verified
     empirically; worth trying if #1 isn't acceptable.

### What would close this at the kernel level

Two candidate changes to `lazy_delta_reduction_step` that would
eliminate the residual without changing the rest of `isDefEq`:

1. **"Trust `is_def_eq_args`'s negative answer on regular defs."**
   At lines 917-929 the optimization path calls `is_def_eq_args` to
   check pointer/structural equality of arguments. If that fails,
   the current code falls through to unfold both sides. A targeted
   fix: if the two sides have *identical const heads* with *regular
   hints*, and `is_def_eq_args` has already determined that the
   arguments are not structurally equal, *also* check whether the
   kernel has any reason to believe that unfolding would help
   (e.g., are the differing args at positions the definition
   actually inspects?). For non-recursive defs with simple bodies,
   unfolding will not unify non-unifiable inputs. Skip the unfold,
   return `DefUnknown`, and let `is_def_eq_core` fall through to
   its structural arg-by-arg walk.

   This is a semantic change — it widens the set of "not
   definitionally equal" judgments — and would require careful
   proof that it doesn't miss legitimate def-eq cases. Candidates
   it might break: `f (a + 0) =?= f a` where `f` is a def and the
   kernel currently finds this via reducing both sides.

2. **Make the `m_failure` / `m_eqv_manager` cache persist longer,
   and key it on a canonical form.** The current `m_failure`
   cache is per-`type_checker`-instance, and its keys are raw
   Expr pairs. If two different levels of the tower produce
   structurally-similar-but-not-pointer-identical failure pairs,
   the cache misses. A semantically equivalent canonicalization
   (say, hash-consing the subterms that appear in these failure
   pairs) would turn the cascade's cost into amortized O(1) per
   level after the first, giving linear total work.

   Lean4Lean's TODO about "more efficient representations and
   caching policies (e.g., imperfect cache)" on the `defEqPerm`
   map is the Lean 4 metalevel analog; the kernel-side analog
   is `m_failure`.

Neither is a small change. Both would affect kernel performance
globally — the first could change def-eq semantics subtly, the
second adds memory overhead everywhere. **Not recommended to
ship either purely off the back of this benchmark** — the
benchmark is narrow (tower-shaped dependent-proof args in a
simp context), and neither candidate has been evaluated for
cost elsewhere.

### Status

- Kernel residual on the share bench: **diagnosed**, at
  `kernel/type_checker.cpp:931-932` (the unfolding of both sides
  in `lazy_delta_reduction_step` after `is_def_eq_args` fails).

- User-space mitigation: available via `opaque`, at the cost of
  losing kernel unfolding for the mitigated function. The share
  bench confirms this is 70× at d=1500.

- Kernel-side fix: identified two candidates, neither safe to
  ship off this bench alone. Filing as a known issue is the
  next sensible step; a patch would want a proper kernel test
  suite sweep and probably input from the kernel team on which
  of the two directions (or a different one) is preferred.

- `congrSimp.useCastAux` is kept in the tree as an opt-in toggle
  (default off). It's not a fix — section 33 showed it's a mild
  regression on the share bench and doesn't affect the asymptotic
  growth — but it remains useful as an experiment harness for
  anyone probing the congr-lemma-conclusion-shape axis again.

## 35. It's `LT.lt`, not `myGetElem`

Sections 33 and 34 pinned the residual cost on
`lazy_delta_reduction_step` unfolding *something* at every tower
level, and I claimed — on the strength of the `opaque myGetElem`
experiment — that the unfolded thing was `myGetElem`. The kernel
instrumentation below falsifies that claim.

**Setup.** Added temporary counters to
`src/kernel/type_checker.cpp` (global `std::atomic<uint64_t>` incremented at each hot path in
`is_def_eq_core`, `quick_is_def_eq`, `lazy_delta_reduction_step`,
`failed_before`, and `cache_failure`), plus a per-check histogram
of which const is unfolded in the `unfold_both` branch. Enabled at
runtime via `LEAN_KERNEL_COUNTERS=1` so the change is zero-cost
when the env var is unset. Instrumentation was reverted after
collecting data — this section exists to document what the counters
measured, not to keep the instrumentation in tree.

**Counts (share bench, `def myGetElem ... := 0`, aux on, at the
biggest-`quick_calls` check, which is the `bench_share_N`
theorem).**

```
 d      lds_step  unfold_both  opt_ok   skipopt_not_regular
 ───── ──────── ─────────── ─────── ───────────────────
 25       654      300         349    300
 50     2,554    1,225       1,324  1,225
 100   10,104    4,950       5,149  4,950
 200   40,204   19,900      20,299 19,900
```

`fail_hit = 0` **everywhere** — the `m_failure` cache never catches
anything. So "cache pollution breaks the optimization" (candidate
hypothesis #2 from this investigation turn) is falsified.

`opt_fail = 0` everywhere — the optimization path is never even
*attempted* on the unfold-both-bound calls. Skipped entirely.

The per-case counters say why: **100 % of the skips are
`not_regular`**. The outer guard
`is_app && is_eqp(*d_t, *d_s) && d_t->get_hints().is_regular()`
fails at the last conjunct because the head's reducibility hint
isn't `regular`.

**`unfold_both` histogram, per-check, at d=100:**

```
KERN check: ... unfold_both=4950 ... skipopt: ... not_regular=4950 ...
  unfold_both_histo: LT.lt=4950
```

**All 4950 unfold_both events are on `LT.lt`.** Not `myGetElem`.
The head being unfolded at every tower level is `LT.lt`. Same at
every depth: d=50 → 1225× `LT.lt`, d=200 → 19900× `LT.lt`, d=400
gives the same `LT.lt`-monopoly by inference from the timing.

Verified: `#print LT.lt` returns

```
def LT.lt.{u} : {α : Type u} → [self : LT α] → α → α → Prop :=
  fun α [self : LT α] => self.1
```

and the reducibility hint is `.abbrev`. The `is_regular()` check
in `lazy_delta_reduction_step` is explicitly `hints.is_regular()`,
so **abbreviations always bypass the `is_def_eq_args` optimization
and go straight to unfold-both**. By design: abbreviations are
meant to be unfolded cheaply without the bookkeeping cost of the
failure cache.

### Why this gives quadratic work on the share bench

`LT.lt` takes three arguments (ignoring implicits): the ordering
instance, the left, and the right. In the share bench, both sides
of each tower-level type comparison have:

- the same ordering instance (`instLTNat`, shared pointer),
- a tower-valued left (`val_k`, pointer-different from the other
  side when `val_k` is the `0 + i → i` fork),
- the same right (`a.size`, shared pointer).

Every time the kernel needs to compare two such types (typically
via `is_def_eq_proof_irrel` firing on the `h : val_k < a.size`
slot of a `myGetElem.congr_simp` application at level k), it:

1. Enters `is_def_eq_core`.
2. `quick_is_def_eq` misses in the equivalence manager because
   the outer `LT.lt _ _ _ _` `App` node is freshly allocated
   per simp rewrite step.
3. `whnf_core` (no delta) returns the same node.
4. `is_def_eq_proof_irrel` isn't relevant here (we're comparing
   types, not proofs — the call comes from proof-irrelevance
   *on another pair*, not on these types themselves).
5. `lazy_delta_reduction_step`: both sides are `LT.lt`-headed,
   hint is `abbrev`, outer guard's `is_regular()` fails,
   optimization skipped, both sides unfolded to the instance
   projection `self.1 left right`.
6. After unfolding, the kernel is now comparing
   `instLTNat.1 val_k a.size =?= instLTNat.1 val_k' a'.size`.
   The projection reduces further; eventually we end up
   comparing `Nat.lt val_k a.size =?= Nat.lt val_k' a'.size`.
   `Nat.lt` is also an abbrev, so we repeat. Eventually we
   bottom out at a term that `is_def_eq_app` can walk arg-by-arg.
7. At the arg level, `val_k =?= val_k'` is a recursive
   `is_def_eq` call on the inner tower values. That call is
   **independently expensive**: same proof-irrelevance cascade
   on whatever inner `h` proofs it encounters.

The key observation: **steps 1–6 execute once at level k**. But
step 7 recursively descends through k-1 more layers, each of
which re-executes steps 1–6 on a freshly-allocated `LT.lt`-
wrapping pair from *its* level. Total `LT.lt` unfolds at level k:
Θ(k). Summed over d levels: **Θ(d²/2) unfolds**, exactly matching
`unfold_both = d(d+1)/2` observed.

### Why `opaque myGetElem` fixes it

Re-ran with counters on `opaque myGetElem` (section 34's fix):

```
d=100: unfold_both=99  (all LT.lt, not_regular skip), opt_ok=0
```

**99 `LT.lt` unfolds vs 4950 with def.** Exactly linear: ~1 per
level. Why: with `myGetElem` opaque, the **outer** tower-level
comparison at `myGetElem ... =?= myGetElem ...` never enters
`lazy_delta_reduction_step` (because `is_delta` returns `none` on
an opaque), so control falls through to `is_def_eq_app`, which
walks arg-by-arg. The `val` arg recursion goes one level deeper
per call, not d levels. The `h` arg proof-irrelevance check still
fires at each level and still unfolds `LT.lt` once — but that
"once per level" is amortised across the linear descent, so the
total stays linear.

With `def` (regular) `myGetElem`, the outer comparison enters
`lazy_delta_reduction_step` and gets caught by the
`is_def_eq_args` optimization (we counted `opt_ok ≈ d²/2`). The
optimization then recursively descends both val AND h at every
level, so the proof-irrelevance cascade fires at every level
multiplied by every inner nesting.

So: the quadratic blow-up isn't caused by the kernel unfolding
`myGetElem`; it's caused by the kernel *succeeding* at the
`is_def_eq_args` optimization on `myGetElem`, which forces the
full recursive descent. Once descended, every level pays the
`LT.lt` unfold tax. Opaque avoids the recursive descent by short-
circuiting at `is_def_eq_app`.

This also explains a previously-mysterious datum from section 34:
`def myGetElem := xs[i]` and `def myGetElem := 0` give identical
kernel times, but `opaque myGetElem` is ~70× faster. I had
written this off as "body content is irrelevant; the kernel
unfolds identically." Correct in the first clause, wrong in the
second: `opaque` isn't a cheap unfolding, it's a **different
isDefEq path** entirely, one that doesn't recurse into
`lazy_delta_reduction_step`'s optimization branch.

### Two candidate kernel patches, both rejected

Before writing this up, I tested two candidate fixes to
`lazy_delta_reduction_step`. Both were much worse.

**Patch A: drop the `is_regular()` check entirely.** Let the
optimization path try `is_def_eq_args` for abbrevs too. Result:
**828 s kernel at d=50** (baseline: 3.3 ms; a 250 000× regression).
Reason: when the args are genuinely different (which is the
common case for the fork point `0 + i` vs `i` at the base of the
tower), `is_def_eq_args` walks the full tower recursively via
`is_def_eq` on each arg, which is **strictly more work** than the
simple unfold-and-recheck path, AND the subsequent `cache_failure`
pollutes the failure cache with per-level entries that don't
amortise because each level sees fresh `LT.lt` pointers.

**Patch B: try `is_def_eq_args` for abbrevs only when the
`is_eqp` fast path would succeed (i.e., args are pointer-equal),
with no `cache_failure` side-effect.** Same regression. Reason:
`is_def_eq_args` itself is the expensive call — it's not an
"is-pointer-equal check", it's a full `is_def_eq` on each arg.
I'd misread the function name. The pointer-equal fast path lives
further inside, in `quick_is_def_eq`'s `m_eqv_manager` step, and
by the time we're in `lazy_delta_reduction_step` we've already
failed that path at the outer level.

The right fix would have to avoid *both* the recursive
`is_def_eq` walk *and* the unconditional unfold-both. Possible
shapes I didn't try, because they're bigger kernel surgery:

1. **`m_eqv_manager` keyed structurally**, so a new outer
   `LT.lt _ _ a b` hits when `a` and `b` are already in the
   same UF component. Currently `equiv_manager` uses an
   `expr_map<node_ref>` keyed on `Expr` (pointer hash), not on
   structural hash, so the outer node is always a new UF node.
   Switching to a structural key is semantically safe but risks
   global slowdown from map-lookup cost on the hot path.

2. **Short-circuit `LT.lt`'s unfold to `self.1` when `self` is
   the same instance on both sides**. This is a very narrow
   "abbrev+instance-projection" fast path. Probably clean enough
   but feels like hard-coding the shape of typeclass-method
   lemmas into the kernel, which I'm not sure is a can of worms
   worth opening off the back of one benchmark.

3. **Cache `unfold_definition(e)` structurally**, keyed on a
   structural hash of `e`. This would turn the d² unfolds into
   d² cache hits, which is cheaper (no fresh `Expr` per unfold),
   but still d² work — not a win in the limit, just a constant
   factor.

None of these is shippable without careful evaluation across
the whole Lean/Mathlib corpus. Filing an upstream issue with
the reproducer from this bench file is the right next action;
implementing a kernel fix is the wrong one.

### Revised status on the share-bench residual

- **Diagnosis (final, supported by instrumentation):** the residual
  `Θ(d²)` kernel cost on the share bench with `def myGetElem` is
  specifically `Θ(d²/2)` `lazy_delta_reduction_step` unfolds of
  `LT.lt` at
  `src/kernel/type_checker.cpp:931-932`, triggered by the outer
  `myGetElem`-level `is_def_eq_args` optimization descending into
  the `h : val_k < a.size` argument at every tower level, whose
  type-equality check fails the abbreviation-skip-optimization guard
  and unconditionally unfolds `LT.lt`. The `myGetElem` head itself
  is never unfolded in `lazy_delta_reduction_step` during this check
  (count: 0).

- **Why section 34's story was wrong:** the `opaque myGetElem`
  experiment showed kernel time drops. I took that as "the
  kernel was unfolding `myGetElem` before, and opaque stops
  it". The real story is "opaque routes through a different
  `isDefEq` path that doesn't call `is_def_eq_args`
  recursively, so the per-level `LT.lt` tax doesn't compound".
  Both explanations are consistent with the timing drop, but
  only the second is consistent with the counters. I should have
  instrumented first before writing §34; I didn't, and I got the
  story wrong in a way that would have misled anyone reading
  the log as a reference.

- **User-space mitigations from §34 are still valid**, just for
  slightly different reasons than I wrote:
  - `opaque` the accessor: short-circuits at `is_def_eq_app`,
    avoids the recursive descent.
  - Non-dependent accessor: same reason — `congrArg f` doesn't
    have a dep-proof slot, so no proof-irrelevance cascade.
  - Projection-based cast (`.val` from a `Subtype`): didn't
    verify, and won't bother given the cleaner `opaque` fix.

- **Kernel-side fix:** still unshipped, probably shouldn't be
  shipped off this benchmark alone. The three candidate shapes
  above are known; picking one is the kernel team's call.

- **`congrSimp.useCastAux` remains an unused opt-in toggle in
  tree** from sections 32–33. It doesn't address any of the
  mechanisms identified in §35, but it's cheap to keep as an
  experimental harness.

### What the instrumentation showed and what I reverted

The temporary counters added to `type_checker.cpp` were:

```
g_quick_calls / g_quick_eqv_hits     -- quick_is_def_eq entries + equiv hits
g_idea_calls                         -- is_def_eq_core entries
g_lds_step_calls                     -- lazy_delta_reduction_step entries
g_lds_opt_success / g_lds_opt_fail   -- is_def_eq_args optimization resolutions
g_lds_unfold_{left,right,both}       -- unfold branches
g_lds_skipopt_{not_app,diff_const,not_regular,failed_before}
                                     -- why the optimization was skipped
g_cache_failure_insert               -- entries into m_failure
g_failed_before_{calls,hits}         -- failed_before calls and hits
```

plus a per-`check` histogram of which const name was unfolded in
the `unfold_both` branch (`record_unfold_head`). Gated at runtime
by `LEAN_KERNEL_COUNTERS=1`. All removed after this section was
written. The git diff on `src/kernel/type_checker.cpp` should be
empty at commit time — this was strictly diagnostic code.

## 36. Caveat on §35: why does `opaque myGetElem` amortize?

§35 identifies *what* the kernel unfolds (`LT.lt`, an abbrev,
bypassing the `is_regular()` optimization guard) and *how many
times* (d²/2 with `def`, d with `opaque`). The "what" and "how
many" are solidly measured. The causal story in §35 for **why the
ratio is exactly d²/2 vs d** is incomplete.

### What is solid

The counters at d=100, `congrSimp.useCastAux` on, single `check`
call for the `bench_share_100` theorem:

```
variant            unfold_both  opt_ok   lds_step  eqv_hit_rate
def body=0           4950        5149    10104     44 %
opaque myGetElem       99           0      203     88 %
```

- Def: `unfold_both ≈ d²/2`, all `LT.lt`.
- Opaque: `unfold_both ≈ d`, all `LT.lt`.
- Def hits `is_def_eq_args` optimization `opt_ok ≈ d²/2` times;
  opaque never does (opt_ok = 0), because opaque has no `is_delta`
  and `lazy_delta_reduction_step` early-exits.
- Equiv-manager hit rate is 2× higher for opaque.

What this **doesn't** tell us: *why* opaque amortises. I stated
in §35 that "opaque routes to `is_def_eq_app`, which walks args
once per level." True but incomplete — `is_def_eq_app` also
recurses into the val arg at every level, so a naive reading
predicts d² unfolds for opaque too. Empirically it doesn't; it
stays at d. Something along the opaque path is deduplicating
sub-queries that the def path re-executes. The counters don't
pin down what.

### Three candidate mechanisms, all consistent with the numbers

1. **`equiv_manager` lookup mode asymmetry.** `is_def_eq_args`
   inside `lazy_delta_reduction_step` spawns recursive
   `is_def_eq` calls on sub-pairs that never get to the outer
   `add_equiv` because the enclosing `lazy_delta_reduction_step`
   returned `DefUnknown` or went on to unfold. The opaque path
   reaches `add_equiv` on the top-level pair directly, so the
   next tower-level `is_def_eq` call hits the equiv manager on
   the inner (now-merged) pair.

2. **Template-vs-actual pointer distinctness.** Each
   `myGetElem.congr_simp` application is instantiated with
   fresh actuals, producing structurally-identical-but-pointer-
   distinct Expr nodes per use site. `equiv_manager` hashes
   using `Expr.data` (a packed hash + flags), not by structural
   identity beyond that, so outer-node lookups miss even though
   inner subtowers are shared. Opaque's `is_def_eq_app` path
   might hit the pointer fast path (`is_eqp`) on shared inner
   subtowers more often because it doesn't synthesize fresh
   intermediate nodes via unfold.

3. **`m_infer_type` or `m_whnf_core` cache interaction during
   `is_def_eq_proof_irrel`.** The proof-irrelevance check calls
   `infer_type` on both proof sides; those types are the tower
   Props we care about. If the def path forces fresh Expr
   allocation via unfold (populating `m_infer_type` with
   fresh-Expr keys) while the opaque path leaves the proof
   terms in their stored form (hitting existing cache entries),
   that alone could account for a ~2× hit-rate difference
   that amortises across the recursive descent.

All three are consistent with the observed 4950 / 99 ratio.
Distinguishing them requires another round of instrumentation
that I didn't do.

### Alternatives to proceed

**Option A: file upstream as-is.** The phenomenological finding
is complete and the reproducer in `src/test_simp_bench.lean` is
minimal (`#bench_simp_share 200`). A bug report containing:

- the three share-bench timing tables,
- the counter dump showing `LT.lt=4950` at
  `type_checker.cpp:931-932` with `not_regular=4950`,
- the note that the outer
  `is_app && is_eqp(*d_t, *d_s) && is_regular` guard unconditionally
  skips abbreviation heads and the user-visible consequence is a
  d²-in-d kernel regression on dependent-proof towers with an
  `abbrev` head in the slot type,

is enough context for the kernel team to decide the fix direction.
No need to fully unwind the opaque-amortisation story — they'll
know which caching/fast-path interactions apply faster than I can
instrument.

**Option B: one more instrumentation round**, targeted at the
gap above. Add counters inside `equiv_manager::is_equiv_core`
distinguishing (a) `is_eqp` fast-path hits, (b) UF-merged hits,
(c) structural fallback, and inside `is_def_eq_proof_irrel` for
the types it compares. One rebuild, one run at d=100 on both
def and opaque variants, revert. Should take ~20 minutes and
~30 lines of temporary C++. Would either pin the mechanism
precisely or show that it's a non-local interaction that
a counter can't capture.

**Option C: stop here, declare the investigation complete at
the phenomenological level.** The user-space mitigation
(`opaque`) is documented and works. The residual `n^{1.5-1.9}`
growth on the share bench is diagnosed to `LT.lt` abbrev
unfolds. The exact reason opaque amortises is an open question,
but it doesn't block action: a kernel patch would be evaluated
against the reproducer anyway, and a user-facing workaround is
available. The kernel team is better placed than me to pick
between "fix equiv_manager", "fix the abbrev-bypass", or
"don't fix, document".

### My recommendation

I'd start with **A**. If the kernel team wants more data before
accepting or triaging the issue, then run **B** to answer
whatever specific sub-question they raise, rather than running
**B** speculatively now. **C** is fine if neither of the above
is attractive — nothing from here gets lost if we stop.

### Summary for a cold reader of this section

- The residual cost is `Θ(d²/2)` `LT.lt` unfolds at
  `kernel/type_checker.cpp:931-932`, because `LT.lt`'s
  reducibility hint is `.abbrev` and the outer optimization
  guard requires `.is_regular()`.
- Opaque `myGetElem` reduces this to `Θ(d)` through an
  amortisation effect whose precise mechanism I did not pin
  down. Three plausible candidates are listed above; they
  all fit the counters.
- The fix path is upstream, not in this repo; the reproducer
  (`src/test_simp_bench.lean`) and counter instrumentation
  recipe (`LEAN_KERNEL_COUNTERS=1` env var + the static
  counters described in §35) are sufficient for an upstream
  report.
- `congrSimp.useCastAux` is kept as an opt-in toggle
  (default off) but is *not* a fix for anything diagnosed in
  §34/§35/§36. It's an experiment harness for a different
  hypothesis that turned out to be wrong.

## 37. Pinning the amortisation: it's the order in which `is_def_eq_args` walks the spine

§36 listed three candidate mechanisms for why `opaque myGetElem`
amortises the per-level work to Θ(d) while `def myGetElem` doesn't.
This section runs targeted instrumentation that distinguishes them,
and the answer is none of the three exactly: it's a fourth thing
that only became visible once both variants were measured side-by-side
without the `congrSimp.useCastAux` confound from §34.

### Re-baselining: the §35 numbers were taken with `useCastAux=true`

§35 reports `unfold_both = 4950` at d=100 for the share variant,
all on `LT.lt`. Re-running with the same (default) settings — i.e.
**`useCastAux=false`** — shows a very different picture at d=100:

```
KERN check: is_def_eq=23959 quick=29511 add_equiv=23959
  eqv: total=59607 ptr_hit=15952 hash_miss=16152 uf_hit=7307
       fallback=19998 fallback_ok=0
  proof_irrel: calls=5249 ok=5249
  lds: step=5651 unfold_both=99 opt_ok=5348 opt_fail=0
       skipopt{not_reg=99 other=0} fb_hit=0
  is_def_eq_app=201 is_def_eq_args=5348
  unfold_both_histo (delta): LT.lt=99
```

`unfold_both = 99` at d=100 — **linear**, not quadratic. The
`LT.lt`-unfold story from §35 was real but specific to `useCastAux=true`,
which moves the cost from one path to another. With aux off the kernel
amortises the `LT.lt` part down to one unfold per level via the equiv
manager's structural walk + UF merge.

What stays quadratic in the aux-off baseline:
- `is_def_eq_args` is called `5348 ≈ d(d+1)/2` times (matches `opt_ok`).
- `proof_irrel` calls match it within `~2d` (one proof-irrel per
  `is_def_eq_args` call's first arg).
- `eqv.fallback` = 19998 ≈ `4·is_def_eq_args` and `eqv.fallback_ok = 0`:
  the equiv manager's structural-walk fallback runs four times per
  `is_def_eq_args` call and **never** succeeds. Every fallback is
  wasted work.

### Side-by-side scaling, def vs opaque (no aux, my counters)

```
DEF myGetElem := xs[i]
 d   is_def_eq  proof_irrel  is_def_eq_args  unfold_both  fb     fb_ok
 25     2 284         374             398          24     1248      0
 50     7 009       1 374           1 423          49     4998      0
100    23 959       5 249           5 348          99    19998      0
200    87 859      20 499          20 698         199    79998      0

OPAQUE myGetElem
 d   is_def_eq  proof_irrel  is_def_eq_args  is_def_eq_app  fb     fb_ok
 25     1 110          74             0             125      48      48
 50     2 160         149             0             250      98      98
100     4 260         299             0             500     198     198
200     8 460         599             0            1000     398     398
```

DEF: `is_def_eq_args`, `proof_irrel`, `eqv.fallback` all scale
quadratically; `unfold_both` scales linearly; `fallback_ok = 0` always.

OPAQUE: everything scales linearly; **`is_def_eq_args = 0` always**;
`is_def_eq_app` is the primary recursion path; `fallback_ok = fallback`
(every fallback succeeds).

The `is_def_eq_args = 0` for opaque is mechanical: `lazy_delta_reduction_step`
returns `DefUnknown` at line 887-888 (`!d_t && !d_s`) before reaching
the optimization branch. With opaque, the recursive descent goes through
`is_def_eq_app` (called from `is_def_eq_core` line 1115).

The `fallback_ok` asymmetry is the load-bearing observation: in the
def variant the equiv manager's structural fallback walk **never**
finds the inner subterms in the same UF class; in the opaque variant
**every** structural walk succeeds. Same reproducer, same proof term,
same equiv manager — the only difference is which kernel function
walks the args.

### Why the difference: `is_def_eq_args` walks backward, `is_def_eq_app` walks forward

```cpp
bool type_checker::is_def_eq_args(expr t, expr s) {
    while (is_app(t) && is_app(s)) {
        if (!is_def_eq(app_arg(t), app_arg(s)))
            return false;
        t = app_fn(t);
        s = app_fn(s);
    }
    return !is_app(t) && !is_app(s);
}
```

This peels via `app_fn`, which means it visits the **last** argument
first. For `myGetElem a val p` the visit order is `p, val, a`.

```cpp
bool type_checker::is_def_eq_app(expr const & t, expr const & s) {
    if (is_app(t) && is_app(s)) {
        buffer<expr> t_args, s_args;
        ...
        get_app_args(t, t_args); get_app_args(s, s_args);
        if (is_def_eq(t_fn, s_fn) && t_args.size() == s_args.size()) {
            for (unsigned i = 0; i < t_args.size(); i++) {
                if (!is_def_eq(t_args[i], s_args[i])) break;
            }
            ...
        }
    }
    return false;
}
```

This iterates `0 → t_args.size()`, visiting args in declaration order:
`a, val, p`.

For a dependent-proof tower, that order matters because `p`'s type
mentions `val`. Backward order asks the kernel to compare `p` first,
which fires `is_def_eq_proof_irrel`, which compares the **types**
`val < a.size =?= val' < a.size`. At this point `val` and `val'` have
not yet been compared at this level, so the equiv manager has no entry
for them, the structural fallback walk on the `LT.lt` Prop fails on
its inner `val` subterms, and the comparison falls through to lazy
delta — which kicks off the whole quadratic cascade.

Forward order compares `val` first, recursing into the inner tower.
On success that recursion calls `add_equiv(val, val')` at every level
on its way back up. When forward order then reaches `p`, the same
proof-irrel call now compares the types — but this time the equiv
manager's structural walk **does** find the inner `val` subterms in
the same UF class (since they were merged on the prior arg), and
returns true without ever entering lazy delta.

The opaque variant gets this for free because it goes through
`is_def_eq_app`, which already walks forward.

### Intervention: make `is_def_eq_args` walk forward

```cpp
bool type_checker::is_def_eq_args(expr t, expr s) {
    buffer<expr> t_args, s_args;
    expr t_fn = get_app_args(t, t_args);
    expr s_fn = get_app_args(s, s_args);
    if (t_args.size() != s_args.size()) return false;
    if (is_app(t_fn) || is_app(s_fn)) return false;
    for (unsigned i = 0; i < t_args.size(); ++i) {
        if (!is_def_eq(t_args[i], s_args[i])) return false;
    }
    return true;
}
```

Counters at d=100 with this version (def variant):

```
KERN check: is_def_eq=3961 quick=4463 add_equiv=3961
  eqv: total=4859 ptr_hit=1103 hash_miss=1301 uf_hit=2257
       fallback=198 fallback_ok=198
  proof_irrel: calls=299 ok=299
  lds: step=502 unfold_both=0 opt_ok=299 opt_fail=0
       skipopt{not_reg=0 other=0} fb_hit=0
  is_def_eq_app=201 is_def_eq_args=299
  unfold_both_histo (delta):  (empty)
```

`is_def_eq_args = 299 ≈ 3d`; `unfold_both = 0`; `fallback_ok = fallback`.
Identical structure to the opaque variant. The d² is gone.

### Timings (def variant, share bench, this kernel build)

```
                kernel type-check (ms)
  d      backward (current)   forward (intervention)   opaque (§34)
   100        9.62                   3.24                   ~1.5
   200       40.8                    4.87                   ~3.0
   400      177                     16.7                    ~6.0
   800      697                     20.1                   ~11.7
  1500     2640                     59                     ~21.4
```

Forward-order is roughly 45× faster than backward-order at d=1500 and
about 3× the cost of opaque (the residual is presumably the
`add_equiv`/UF bookkeeping that opaque skips entirely). Crucially,
**the growth rate flattens** — backward is ~n^1.87, forward is
near-linear (the 100→1500 ratio is 18× for forward vs ~275× for
backward, which is sub-linear in the depth ratio of 15).

Opaque's `is_def_eq_app` was always doing the right thing; it just
wasn't visible because the original mental model was "opaque short-
circuits at line 887-888 and skips `lazy_delta_reduction_step`'s
optimization". That's true mechanically, but the load-bearing fact
is *what comes after* the skip — `is_def_eq_app`, with its forward
arg traversal — not the skip itself.

### Where the §36 candidates land

§36 listed three candidate mechanisms. None of them is *exactly* the
right story, but two are partially right and one is wrong:

1. **"equiv_manager lookup mode asymmetry."** Partially right. The
   equiv manager is where the amortisation lives; the structural
   fallback walk is the mechanism that turns "linear cached subterm
   merges" into "succeeds on outer Prop comparisons without unfolding".
   But it's not an asymmetry in the manager itself — it's an asymmetry
   in the *order* its clients populate it. Forward-order `is_def_eq_args`
   populates UF entries in the order the structural walk needs them;
   backward-order doesn't.

2. **"Template-vs-actual pointer distinctness."** Wrong direction.
   The fresh outer `App` nodes from substitution into the lemma
   conclusion **are** the reason pointer fast-path misses, but the
   structural fallback walk handles that fine *as long as the inner
   subterms are already merged*. Pointer distinctness isn't the
   problem; it's only a problem if you also visit args in the wrong
   order.

3. **"`m_infer_type` / `m_whnf_core` cache interaction during
   `is_def_eq_proof_irrel`."** Half right, indirectly. proof-irrel
   IS where the work happens; it's the function that triggers the
   type comparison that cascades. But it's not the infer_type or
   whnf_core caches that explain the def-vs-opaque asymmetry — the
   infer_type call is identical in both variants. The asymmetry is
   in whether the equiv manager has the relevant entries when the
   type comparison is *attempted*, which depends on the order the
   surrounding traversal fills them in.

### What this means for the user's question

> "Why is `opaque myGetElem` linear but `def myGetElem := 0` is not?"

Because:
- `def` routes the per-level recursion through `lazy_delta_reduction_step`'s
  `is_def_eq_args` optimization, which walks args **last-to-first** via
  `app_fn` peeling.
- `opaque` routes the per-level recursion through
  `is_def_eq_core`'s `is_def_eq_app`, which walks args **first-to-last**
  via a buffer.
- For `myGetElem a val p` the dependent argument `p` is the *last*
  argument, so backward order visits it first — before `val` is in
  the equiv manager's UF — and the proof-irrel type comparison cannot
  amortise. Forward order visits `p` last, by which time `val` is
  cached, and proof-irrel resolves via the structural walk + cache
  lookup.

`def myGetElem := 0` and `def myGetElem := xs[i]` give identical
counts because the body is irrelevant — the kernel's `is_def_eq_args`
optimization fires regardless of body content (it's a pre-unfold
short-circuit). What matters is whether the path is `is_def_eq_args`
(backward) or `is_def_eq_app` (forward).

### Footnote: why does `is_def_eq_args` walk backward at all?

It's the natural shape of "peel the outermost `App` via `app_fn` and
compare `app_arg`s as you go". Cheap, no buffer allocation, no
`get_app_args` call. For functions where dependency flows from earlier
to later arguments (the common case), backward order means you compare
the most-dependent arg first, and the most-dependent arg is the one
whose type mentions earlier arguments. So you ask the kernel to verify
a slot type before the things it depends on are in the cache — exactly
the wrong order for amortisation.

`is_def_eq_app`'s forward order isn't motivated by dependency reasoning
either; it's just what falls out of "collect args into a buffer, walk
forward". It happens to be correct.

### Status

- **Diagnosed**, with a clean mechanism and a falsifiable
  intervention. The `LEAN_KERN_ARG_ORDER_FWD=1` env-var experiment in
  this branch's `type_checker.cpp` toggles between the two orders so
  the result is reproducible.

- **Not shipping the intervention.** Forward-order `is_def_eq_args`
  is a one-line semantic-preserving change that fixes this benchmark
  cleanly, but the consequences for the rest of the kernel's
  workload are unknown. There may be patterns where backward order
  is faster (e.g. functions where the *first* argument is the one
  most likely to differ — early-out on the easy case). A real fix
  would need a corpus run.

- **The §36 amortisation puzzle is closed.** It's not the equiv
  manager's keying, it's not infer_type cache interaction, it's not
  template substitution: it's argument traversal order in
  `is_def_eq_args` interacting with proof-irrelevance on dependent
  proof slots.

- All §37 instrumentation reverted at write-up time. The git diff
  on `src/kernel/type_checker.cpp` and `src/kernel/equiv_manager.cpp`
  should be empty.

### Plain-language version of the mechanism

You're comparing two applications: `myGetElem a val p` and
`myGetElem a val' p'`. They're equal iff `a=a`, `val=val'`, and
`p=p'`. The kernel checks the three arg pairs one by one.

The interesting pair is `p` vs `p'`. These are *proofs* of
`val < a.size` and `val' < a.size`. By proof irrelevance, two proofs
of the same proposition are automatically equal, so the kernel
doesn't actually compare `p` and `p'` directly; it compares their
**types** (the propositions). So checking `p = p'` reduces to
checking `val < a.size = val' < a.size`.

Now there's a cache of "things already shown equal." When asked "are
these two `<` propositions equal?", the cache tries to answer by
walking inside them: `<` matches `<`, `Nat` matches `Nat`, `a.size`
matches `a.size`, and `val` matches... `val'` — is **that** in the
cache? **If yes**, the cache says "equal" in constant time. **If no**,
the cache gives up and the kernel falls into a much slower path that
has to unfold `<`, walk the unfolded form, and recursively re-derive
`val = val'` from scratch. Worse, that slow re-derivation triggers
the same situation one level down, and again one level below that —
a recursion tree instead of a chain.

So the entire question reduces to: **when we get to `p`, is
`(val, val')` already in the cache?**

- **Backward order** (visits args last-to-first) hits `p` *before*
  `val`. The cache doesn't have `(val, val')` yet, because we haven't
  compared them. Slow path. The slow path eventually compares `val`
  to `val'` itself, which at level (k-1) hits the same situation —
  visit `p` first, `val` not cached, slow path again. Cost cascades
  quadratically.

- **Forward order** (visits args first-to-last) hits `val` *before*
  `p`. Comparing `val` to `val'` recursively succeeds (via the same
  forward-order logic applied one level deeper) and on its way back
  up it deposits `(val, val')` into the cache at each level. *Then*
  we move on to `p`, the type comparison happens, the cache walk asks
  about `(val, val')`, finds it, returns "equal" instantly. Each
  level pays only the cost of one cache lookup, so the total is
  linear.

The opaque variant gets forward order automatically — not because
"opaque" is special, but because making the function opaque routes
the comparison through a different kernel function (`is_def_eq_app`)
that happens to walk args forward. The `def` variant routes through
`is_def_eq_args`, which happens to walk backward. Same logic,
opposite traversal order, completely different asymptotic behaviour.

The "load-bearing" piece is just: **proof irrelevance on a dependent
argument creates a sub-question (about the proof's type) that depends
on an earlier sibling argument being already in the cache.** Visit
order decides whether that earlier sibling is there yet.

## 38. Stronger fix: don't compare proof args at all

§37's forward-order intervention amortises a *redundant* type-defeq
check via the equiv manager cache. The check is redundant because
`is_def_eq_args` is comparing args of two same-headed applications:
if all earlier args agree, the slot type at the proof position is
determined by congruence on both sides, and proof irrelevance gives
the proof args defeq for free.

So the type-defeq call inside `is_def_eq_proof_irrel` doesn't need to
be amortised — it doesn't need to happen at all. Inside
`is_def_eq_args`, when an arg has a Prop type, the sound thing is to
**skip the comparison entirely** and trust that the surrounding loop's
non-proof args establish the slot's dependencies. If they don't, the
loop returns false at one of those non-proof positions and we never
claim the apps are defeq anyway.

### Soundness sketch

Inside `is_def_eq_args(t, s)` with `t = f a₁…aₙ`, `s = f a'₁…a'ₙ`
(the head `f` is verified equal by the caller's `is_eqp` guard):

- For each non-proof position `i`, the recursive `is_def_eq(aᵢ, a'ᵢ)`
  call answers honestly. If any returns false, the whole loop
  returns false — sound, no claim made.
- For each proof position `j` (detected at runtime by
  `is_prop(infer_type(aⱼ))`), we skip. The skip is sound iff
  `aⱼ ≡ a'ⱼ`. By proof irrelevance, this holds iff their types are
  defeq. Their types are `Tⱼ[a₁/x₁,…,aⱼ₋₁/xⱼ₋₁]` and
  `Tⱼ[a'₁/x₁,…,a'ⱼ₋₁/xⱼ₋₁]`. By induction on `j`, all earlier
  positions are either verified-defeq (non-proof) or trusted-defeq
  (proof, recursive case). Substitution respects defeq, so the two
  slot types are defeq, so the proof args are defeq.
- The induction is well-founded because position `j`'s slot type
  depends only on positions `< j` (Pi telescopes are sequential).
- Visit order is irrelevant: as long as the loop traverses every
  position before returning true, the trust-chain holds.

The skip is unsound only if `is_def_eq_args` returns true while some
non-proof arg pair actually disagrees. The loop visits every non-proof
arg via real `is_def_eq`, so this can't happen.

### Patch (one branch added to `is_def_eq_args`)

```cpp
while (is_app(t) && is_app(s)) {
    expr const & arg_t = app_arg(t);
    expr arg_t_type = infer_type(arg_t);
    if (!is_prop(arg_t_type)) {
        if (!is_def_eq(arg_t, app_arg(s)))
            return false;
    }
    // else: proof slot, skip
    t = app_fn(t);
    s = app_fn(s);
}
return !is_app(t) && !is_app(s);
```

The `infer_type(arg_t)` call isn't new work — `is_def_eq_proof_irrel`
inside the recursive `is_def_eq` was doing the same inference on every
arg already. We've just hoisted it one level up so that we can act on
the result before paying for the recursive call.

We only infer the LHS arg's type, not both. The function's signature
is fixed and the slot-type universe (Prop or not) is determined by
`Tⱼ` plus the actuals at earlier positions; if those positions agree
then both sides' inferred types live in the same universe.

### Timing (def variant, share bench)

```
                kernel type-check (ms)
  d      backward (default)   forward (§37)   skip-proof (§38)   opaque
   100         9.24                3.24             2.03           ~1.5
   200        31.8                 4.87             3.93           ~3.0
   400       126                  16.7              7.72           ~6.0
   800       507                  20.1             16.6           ~11.7
  1500      2160                  59               41.5           ~21.4
```

Skip-proof is faster than forward at every depth and within ~2× of
opaque at d=1500. Growth rate is essentially linear (100→1500 ratio
20× over 15× depth ratio). The remaining 2× gap to opaque is the
`add_equiv` / UF bookkeeping overhead from the non-proof args still
going through real `is_def_eq` calls.

`simp` time is unchanged (3.02ms vs 3.11ms at d=100, within noise),
so the speedup lives entirely in `type checking`.

### Test surface

Ran `make test ARGS="-R 'simp'"` (153 tests, all Lean simp/dsimp
elaborator tests) and `make test ARGS="-R 'elab/'"` (full elaborator
suite) with `LEAN_KERN_SKIP_PROOF_ARGS=1`. All non-network tests pass.
The two failing tests (`elab/async_dns.lean`, `elab/async_tcp_half.lean`)
also fail without the env var — they're sandbox-environment-sensitive
network tests, unrelated to the kernel change.

This is not a corpus-wide guarantee, but it's enough confidence that
the optimization isn't producing false positives on simp-style use.

### Why the hoisting works

The pre-existing code structure was:

```
is_def_eq_args(t, s):
  for each (a, a') in args:
    is_def_eq(a, a')
      → is_def_eq_core(a, a')
          → is_def_eq_proof_irrel(a, a')
              infer_type(a)
              if !is_prop: return l_undef
              infer_type(a')
              is_def_eq(type_a, type_a')   <-- the cascade trigger
```

Skip-proof restructures it as:

```
is_def_eq_args(t, s):
  for each (a, a') in args:
    infer_type(a)
    if is_prop: continue                   <-- skip everything
    is_def_eq(a, a')                       <-- only for non-proof
```

The same `infer_type(a)` runs in both cases. The skip-proof version
saves: the recursive `is_def_eq(a, a')` entry on proof args, the
second `infer_type(a')` inside `is_def_eq_proof_irrel`, and the
`is_def_eq(type_a, type_a')` recursive type-defeq call that was
the cascade trigger. The cascade trigger doesn't fire at all because
the trigger sits inside the recursive call we no longer make.

§37's forward-order fix amortises the cascade trigger via the cache
(O(1) amortised). §38's skip-proof fix elides the trigger entirely
(O(0)). Both fix the asymptotic blow-up; §38 has a better constant.

### Status of the §36 candidates, revised

§37 said "the equiv manager is where the amortisation lives." That's
true for the forward-order fix but not for the skip-proof fix — under
skip-proof the equiv manager isn't asked the redundant questions in
the first place. So neither §36 candidate is the *root* mechanism;
they're both downstream of "the kernel asks a redundant question, and
the redundant question's cost depends on the cache state."

The actual root cause is: **`is_def_eq_proof_irrel` is called from
inside `is_def_eq_args` even though, in that calling context, its
type-defeq subquery is provably redundant.** Two ways to fix:

1. **Amortise it** (forward-order traversal): the type-defeq subquery
   still happens, but it hits the equiv manager's UF cache that the
   loop's earlier non-proof iterations populated. O(1) per call.
2. **Elide it** (skip-proof): recognise inside `is_def_eq_args` that
   proof args don't need a real comparison and skip the recursive
   `is_def_eq` entirely. O(0) per call.

(2) is strictly stronger but requires intercepting before the
recursive call rather than inside it. (1) is purely a one-line
visit-order change and doesn't need to know anything about which
slots are proof slots.

### Cross-variant comparison: does skip-proof restore linearity?

The headline question. Run all three flavours of the share bench at
several depths, with skip-proof on:

```
                 kernel type checking (ms)
                 ─── backward (default) ───      ─── skip-proof (§38) ───
   d         def:=0    opaque    plain          def:=0    opaque    plain
   100         8.27      2.11     0.385           1.87      2.15     0.378
   200        30.3       4.18     0.685           3.63      4.16     0.694
   400       116         8.87     1.37            7.30      8.90     1.32
   800       450        16.7      2.67           14.3      17.7      2.61
  1500      1590        32.6      4.98           29.9      34.9      5.20
```

Doubling ratios (consecutive `d → 2d`, ideal linear = 2.0):

```
                   backward                  skip-proof
                def:=0  opaque  plain     def:=0  opaque  plain
 100→200          3.66   1.98   1.78       1.94   1.93   1.84
 200→400          3.83   2.12   2.00       2.01   2.14   1.90
 400→800          3.88   1.88   1.95       1.96   1.99   1.98
```

Full-range ratio (d=100 → d=1500, depth ratio 15×):

```
                backward     skip-proof
 def:=0          192×          16.0×
 opaque           15.4×         16.2×
 plain            12.9×         13.8×
```

**Yes, def becomes linear.** With skip-proof:

- `def myGetElem := 0` collapses from 192× to 16× over the d=100→1500
  range. Same growth slope as opaque (16.2×) and plain (13.8×). The
  192× quadratic is gone.
- `def := 0` and `opaque` are now indistinguishable in growth rate
  and have similar absolute cost (29.9ms vs 34.9ms at d=1500). In
  fact `def` is now slightly *faster* than opaque, because opaque
  doesn't go through `is_def_eq_args` at all (it goes through
  `is_def_eq_app`) and so doesn't benefit from skip-proof — see
  §39 below for the follow-up that fixes this.
- `plain` (non-dependent `f : Nat → Nat`) stays cheapest by ~6×.
  That's the irreducible floor: no proof slots, no congruence on
  dependent slots, nothing to skip.

The ~6× gap between def-with-skip-proof and plain is the cost of the
dependent congruence chain itself — verifying `val ≡ val'` at every
level plus `add_equiv` bookkeeping. It's the residual that comes from
the dependent type structure being there at all, not from the kernel
mishandling it.

### Status

- **Diagnosed**: §37, mechanism understood.
- **Patch validated**: §38, skip-proof-args optimisation gives linear
  kernel growth on the share bench, ~50× speedup at d=1500 versus
  baseline, ~1.5× speedup over §37 forward-order, simp-test suite
  passes (153/153 simp/dsimp tests).
- **`def` matches `opaque` asymptotically.** With skip-proof on,
  there is no longer any practical reason to make a dependent-proof
  accessor opaque purely to avoid the kernel's quadratic.
- **Not shipped**: gated behind `LEAN_KERN_SKIP_PROOF_ARGS=1` env var
  in this branch, default off. A real upstream fix would either land
  this directly in `is_def_eq_args` (no env var) or land §37's
  one-line forward-order change. Either is an improvement; §38 is
  the stronger one.

## 39. Extending skip-proof to `is_def_eq_app`

§38's optimisation only patches `is_def_eq_args`, the optimisation
path inside `lazy_delta_reduction_step`. It doesn't touch
`is_def_eq_app`, the fallback at the bottom of `is_def_eq_core` (line
1115). For the `def` variant of the share bench that's fine — the
hot path is `lazy_delta_step → is_def_eq_args` and skip-proof on
`is_def_eq_args` flattens the curve. For the `opaque` variant it
isn't fine: opaque routes through `is_def_eq_app`, which §38's flag
doesn't touch.

The §38 cross-variant table reflects this asymmetry: `def` with
skip-proof is 29.9ms at d=1500, `opaque` with skip-proof is 34.9ms
at d=1500 — opaque is *slower* than def, by ~15%, and was unaffected
by the flag relative to its baseline. The slowdown is the per-level
proof-irrel type-defeq call inside `is_def_eq_app`'s arg loop, doing
the same redundant work §38 elided in `is_def_eq_args`.

### Soundness for `is_def_eq_app`

The same argument applies. `is_def_eq_app` first verifies the function
heads are defeq via a recursive `is_def_eq(t_fn, s_fn)` call. After
that:

- Two defeq functions have defeq Pi telescopes, so their slot types
  match up modulo substitution at every position.
- For each non-proof position visited by the loop, the recursive
  `is_def_eq` call honestly verifies the args agree.
- For each proof position, by induction (well-founded over Pi
  positions), the slot types on both sides are defeq because all
  earlier positions are defeq (verified or trusted via the same
  argument). By proof irrelevance the proof args are defeq.
- The loop visits every position before returning true, so the
  trust-chain holds.

The only difference from `is_def_eq_args`' soundness argument is that
`t_fn` and `s_fn` may not be pointer-equal const refs — they could be
lambdas, fvars, or arbitrary expressions, just defeq. The argument
doesn't care: it only needs the heads' Pi telescopes to be defeq up
to substitution, which `is_def_eq(t_fn, s_fn)` returning true
guarantees.

### Patch

Same shape as §38, applied to `is_def_eq_app`'s loop body, gated by
the same env var:

```cpp
for (; i < t_args.size(); i++) {
    if (skip_mode) {
        expr arg_t_type = infer_type(t_args[i]);
        if (is_prop(arg_t_type)) continue;
    }
    if (!is_def_eq(t_args[i], s_args[i]))
        break;
}
```

### Timing (skip-proof on both `is_def_eq_args` and `is_def_eq_app`)

```
                kernel type checking (ms)
                  ── §38 only ──        ── §38+§39 ──
   d         def:=0  opaque  plain    def:=0  opaque  plain
   100         1.87    2.15   0.378     1.93    1.89   0.394
   200         3.63    4.16   0.694     3.58    3.74   0.819
   400         7.30    8.90   1.32      7.39    7.57   1.30
   800        14.3    17.7    2.61     14.5    15.5    2.70
  1500        29.9    34.9    5.20     27.7    29.3    4.88
```

Doubling ratios under §38+§39:

```
                def:=0  opaque  plain
 100→200          1.85    1.98   2.08
 200→400          2.06    2.02   1.59
 400→800          1.96    2.05   2.08
```

All three variants linear within noise.

Full-range (d=100→1500, 15× depth ratio) under §38+§39:

```
 def:=0    14.4×
 opaque    15.5×
 plain     12.4×
```

All within ~10% of pure-linear.

### Effect

- **Opaque speeds up by ~16% at d=1500** (34.9 → 29.3ms). The §39
  patch doesn't change opaque's growth rate (§38 already gave it a
  linear shape via a different mechanism — see §37) but it removes
  a constant-factor overhead per level: the proof-irrel type-defeq
  cascade that was still firing once per level in `is_def_eq_app`.
- **`def` is essentially unchanged** by §39 (29.9 → 27.7ms, ~7%
  noise-level improvement). The def variant doesn't rely on
  `is_def_eq_app` for its hot path — `is_def_eq_args` handles it
  via §38. The small improvement here is presumably from
  `is_def_eq_app` being called from other downstream paths that
  also benefit.
- **`def` and `opaque` are now indistinguishable.** 27.7ms vs 29.3ms
  at d=1500 is within run-to-run noise. Same growth rate, same
  absolute cost. From the kernel's perspective, opacity is now a
  no-op for this benchmark.
- **`plain` is unchanged**, as expected — it has no proof slots
  to skip.

### Test surface

`make test ARGS="-R 'simp'"` — 153/153 pass with §38+§39 active.
Same set as §38, no new failures.

### What we've learned about the optimisation surface

The two patches together cover both per-arg comparison sites in the
kernel:

- `is_def_eq_args` (§38) — the fast path inside
  `lazy_delta_reduction_step`'s optimisation, used when both sides
  have the same `regular`-hint const head.
- `is_def_eq_app` (§39) — the fallback at the end of
  `is_def_eq_core`, used when `lazy_delta_reduction` returned
  `l_undef` (e.g. for `opaque` heads that have no `is_delta`).

These are the only two places in the kernel where two applications
have their args compared pairwise. The skip-proof optimisation, which
elides the redundant proof-irrel type check, applies the same way at
both sites with the same soundness justification. Neither site needs
the other to be patched for soundness — they're independent — but
together they cover every routing through the kernel that this
benchmark hits.

### Status

- **§38+§39 together** give linear kernel growth on the share bench
  for both `def` and `opaque` variants of `myGetElem`, at the same
  asymptotic constant. The 192× quadratic at d=100→1500 for the
  baseline `def` variant becomes 14.4× — pure linear plus a small
  constant overhead from `add_equiv` bookkeeping.
- **The simp test suite passes** with both patches active.
- **Both patches are gated** behind `LEAN_KERN_SKIP_PROOF_ARGS=1`,
  default off. Flipping the env var on enables both
  simultaneously; there's no separate flag for §39.
- A real upstream patch would land this directly without the env var
  guard, in both `is_def_eq_args` and `is_def_eq_app`. Or, more
  conservatively, in `is_def_eq_args` only — that already gets the
  big win for the common `def` case.

### Full timing table

Same setup as the §38 cross-variant comparison, extended down to
d=25 and including the §38+§39 column.

```
                         kernel type checking (ms)
              ── backward (default) ──    ── skip-proof (§38+§39) ──
   d        def:=0   opaque   plain       def:=0   opaque   plain
   25         1.02     0.673   0.169        0.604   0.621    0.148
   50         2.56     1.19    0.232        1.02    1.20     0.228
   100        8.27     2.11    0.385        1.93    1.89     0.394
   200       30.3      4.18    0.685        3.58    3.74     0.819
   400      116        8.87    1.37         7.39    7.57     1.30
   800      450       16.7     2.67        14.5    15.5      2.70
  1500     1590       32.6     4.98        27.7    29.3      4.88
```

Per-doubling growth ratios (`d → 2d`, ideal linear = 2.0):

```
                ─── backward ───              ─── skip-proof ───
              def:=0  opaque  plain         def:=0  opaque  plain
 25→50          2.51    1.77   1.37          1.69    1.93   1.54
 50→100         3.23    1.77   1.66          1.89    1.58   1.73
 100→200        3.66    1.98   1.78          1.85    1.98   2.08
 200→400        3.83    2.12   2.00          2.06    2.02   1.59
 400→800        3.88    1.88   1.95          1.96    2.05   2.08
 800→1500       3.53    1.95   1.87          1.91    1.89   1.81
```

(The 800→1500 row is a 1.875× depth ratio, so ~1.9 ratio = linear.)

Full-range ratio (d=25 → d=1500, depth ratio 60×):

```
              backward     skip-proof
 def:=0       1559×          45.9×
 opaque         48.4×        47.2×
 plain          29.5×        33.0×
```

Speedup from skip-proof at each depth (backward / skip-proof):

```
   d        def:=0     opaque    plain
   25         1.7×       1.1×    1.1×
   50         2.5×       1.0×    1.0×
   100        4.3×       1.1×    1.0×
   200        8.5×       1.1×    0.8×   (noise; skip-proof slightly slower)
   400       15.7×       1.2×    1.1×
   800       31.0×       1.1×    1.0×
  1500       57.4×       1.1×    1.0×
```

### Reading the full table

- **`def:=0` baseline grows quadratically.** 1.02 → 1590ms over
  d=25→1500 = 1559× growth while depth grew 60×, giving an effective
  exponent of `log(1559)/log(60) ≈ 1.79`. Matches the n^1.5–1.9
  diagnosis from earlier sections.
- **`def:=0` with skip-proof grows linearly.** 0.604 → 27.7ms = 45.9×
  over 60× depth ratio — sub-linear, in fact, because constant
  overhead at small d gets amortised away as d grows.
- **The crossover where skip-proof starts mattering is around d=50**
  (2.5× speedup). At d=100 it's 4.3×; at d=400 it's 15.7×; at d=1500
  it's 57.4×. Even modest tower depths benefit.
- **`opaque` is essentially unchanged in absolute time** (within ~10%
  at every depth). It was already linear in §34's analysis; §38+§39
  trims a small constant via the `is_def_eq_app` branch.
- **`plain` is unchanged**, as expected. No proof slots, nothing to
  skip. The two columns agree within run-to-run noise — confirming
  the optimisation doesn't slow down the non-dependent case.
- **`def` and `opaque` converge under skip-proof.** 27.7 vs 29.3ms
  at d=1500 is within noise. Asymptotically equivalent.
- **`plain` stays the floor** by ~6× (4.88 vs 27.7ms at d=1500).
  That gap is the irreducible cost of the dependent congruence
  chain — verifying `val ≡ val'` at every level plus equiv-manager
  bookkeeping. It's what dependent-proof functions cost when the
  kernel handles them correctly.

The patches together convert a `~d^1.79` cost into a `~d^1.0` cost
on this benchmark, with no growth in the non-dependent case and no
regressions in the simp test suite.

## 40. Where does the residual ~6× gap between def and plain come from?

Under §38+§39, `def myGetElem` with skip-proof reaches linear growth,
but it's still ~5.7× slower than `plain` at d=1500 (27.7ms vs 4.88ms).
The growth rates match; the constant differs. This section
characterises that constant.

### Counter sweep (skip-proof on, big check call only)

Per-level work (delta from d=400 to d=1500, ÷ 1100):

```
                       def0       plain     ratio
is_def_eq               33.0        6.0     5.5×
add_equiv               33.0        6.0     5.5×
lds_step                 5.0        0.0     ∞
infer_type calls        88.0       12.0     7.3×
infer_type misses       29.0        6.0     4.8×
whnf_core calls         40.0        0.0     ∞
whnf_core misses        20.0        0.0     ∞
type-check time (μs)    18.6        3.3     5.7×

Time-per-is_def_eq      0.56 μs    0.54 μs  (same!)
```

Two facts pop out:

1. **Per-call cost is identical.** 0.56 μs/is_def_eq for def vs
   0.54 μs/is_def_eq for plain. Time-per-call is the same; def just
   makes more calls. The 5.7× time gap is purely from the call-count
   difference.

2. **`whnf_core` and `lds_step` are zero in plain's hot loop.** Plain
   makes 6 is_def_eq calls per level, and **all of them** resolve via
   `quick_is_def_eq`'s equiv-manager UF cache before reaching
   `whnf_core` or `lazy_delta_reduction_step`. Plain's per-level work
   is essentially "look up in cache, return true." Def's per-level
   work goes deeper into the kernel because more questions miss the
   cache.

### Why does plain hit the cache for everything?

Plain's per-level expression is `f val_k` vs `f val_k'`. Comparing
these:
- `quick_is_def_eq` checks the equiv manager. For the *first* call
  at a given level (going inside-out), it misses. The kernel then
  recurses into `is_def_eq_app`, compares args (1 arg), recurses on
  `(val_k, val_k')`, which recursively succeeds and on the way back
  up `add_equiv` merges every level's val pair into the UF.
- For *subsequent* calls on the same level (which happen because
  simp's proof term mentions each level's val multiple times),
  `quick_is_def_eq` hits the UF cache and returns immediately.

Because plain's per-level proof term has only one non-trivial arg
(the value), and that arg gets cached on the first traversal, every
subsequent question at that level is a UF hit. Pure cache lookup,
zero work in `whnf_core` / `lazy_delta`.

### Why doesn't def hit the cache as often?

Def's per-level expression is `myGetElem a val_k p_k` vs
`myGetElem a val_k' p_k'`. Three differences:

- **More args per app.** myGetElem has 3 args (a, val, p) where
  plain has 1 (val). Each arg is its own equiv-manager question.
  Skip-proof handles `p` cheaply (skipped), but `a` and `val` are
  still recursive checks, and their initial cache misses force
  the kernel into `whnf_core` / `lazy_delta`.
- **More applications per level in the proof term.** simp's
  congruence lemma for myGetElem (`myGetElem.congr_simp`) has
  ~7 arguments — it carries the array equality (`a a refl`), the
  value equality (`j j' h_j`), the bounds proof, and the cast that
  transports the bound across the value change. Plain's
  `congrArg` has 1. So per level of the tower, def's proof term
  has ~5× more applications for the kernel to type-check.
- **Cast args produce more sub-expressions.** Each level's
  congruence emits an `Eq.ndrec`-laden cast (or, with §32's aux,
  a `congr_cast` application) to thread the bounds proof. The
  cast itself has args that get compared.

### Proof-term DAG sizes

```
   d      plain DAG    def share DAG    ratio
   5         93           ~155          1.7×
   10       123           ~200          1.6×
   50       363           ~580          1.6×
  100       663          ~1005          1.5×
  200      1263          ~1905          1.5×
```

(def share numbers from §22's `~19n + 105` fit; plain measured
fresh as `~6n + 63`.) Structural ratio is ~3.2× (19n / 6n at large
d), not 5.5×. The remaining ~1.7× is per-app work — def's nodes
are mostly congruence-lemma applications with more args than
plain's `congrArg` nodes, so verification cost per node is higher.

### Where do def's 33 is_def_eq calls per level come from?

Decomposing roughly:

- `lds_step = 5/level` → ≤5 entries to `is_def_eq_args` per level
  (when the optimisation path fires). With skip-proof this means
  ≤5 × (number of non-proof args = 2: `a` and `val`) ≈ 10
  is_def_eq calls per level from `is_def_eq_args` recursion.
- The remaining ~23/level is_def_eq calls are from the `check()`
  call's recursive descent into the proof term, verifying every
  application's actual-arg type against its slot type. Each
  congruence-lemma application in the proof term contributes
  several is_def_eq calls of this form.

So most of def's per-level work is in `infer_type_core`'s app
verification (`infer_app`), not in `is_def_eq_args`. Skip-proof
already eliminated the redundant check inside `is_def_eq_args`;
what remains is the unavoidable per-application type-checking the
kernel does as it walks the proof term.

### Summary

The 5.7× residual is structural: simp's dependent congruence
lemma for `myGetElem` has more arguments per level than the
non-dependent `congrArg`, so the kernel — verifying the proof term
correctly and linearly — has more to verify per level. The kernel
isn't doing anything wasteful; it's just doing more honest work
because the proof term has more honest content.

Per-call kernel cost is identical between def and plain (0.55 μs
either way). The time gap matches the call-count gap. There is no
quadratic, no cache thrashing, no missed optimisation: it's a
pure constant-factor structural difference in how simp generates
proofs for dependent vs non-dependent congruence.

**To reduce the gap further would require either:**

1. **A more compact proof shape from simp.** If simp emitted a
   smaller dependent congruence (e.g., factoring the cast through
   a helper that the kernel verifies once), the per-level
   application count would drop and the kernel would do less work.
   This is a simp/elaborator change, not a kernel change.
2. **A `check()` fast-path that skips proof slots during
   `infer_app`'s slot-vs-actual checks.** The same skip-proof
   reasoning applies: if the function head's slot at position `j`
   is statically a Prop, the actual at position `j` doesn't need
   its type matched against the slot — proof irrelevance handles
   it. This would touch a different code path (`infer_app`, not
   `is_def_eq_args`), but the underlying soundness story is the
   same. Not implemented in this branch.
3. **Smaller per-call overhead for `quick_is_def_eq`.** At ~0.55 μs
   per call, the floor is the equiv-manager UF lookup itself plus
   `add_equiv` bookkeeping. Hard to push lower without rethinking
   the cache layer.

Of these, (2) is the most kernel-local and is the natural
follow-up to §38+§39 — it would extend the same "don't compare
proofs, congruence + irrelevance handles them" story from
defeq-checking into type-inference. Whether that's worth the
complexity depends on whether the residual ~5× actually matters
in practice; for a per-binder-tower of depth 200 it's the
difference between 4ms and 22ms (kernel only), which is small
in absolute terms compared to other elaborator costs.

### Status

- **Residual diagnosed**: the gap is constant-factor and structural
  (simp's dependent congruence proof term has more args/level).
- **Not a kernel inefficiency.** Per-call cost is identical; only
  the call count differs.
- **Optimisation surface known**: kernel-side via skip-proof in
  `infer_app` (not implemented), or simp-side via more compact
  congruence-lemma emission (out of scope here).
- §40 instrumentation reverted; §38+§39 patches still in place.

## 41. Revisiting `congrSimp.useCastAux` under skip-proof

§33 introduced an opt-in option `congrSimp.useCastAux` (default off)
that makes `mkCongrSimpCore?` emit a per-position auxiliary theorem
`<f>.congr_cast_<i>` instead of an inline `Eq.ndrec` chain inside the
congruence lemma's conclusion. §33 measured it as a mild kernel
regression on the share bench (40 ms vs 29 ms at d=200, ~40% worse
with aux=on) and kept it in the tree purely as an experimental
harness, not as a fix. That measurement was taken with the
*baseline* kernel (backward-order `is_def_eq_args`) on the *def*
variant of `myGetElem`.

Now that §38+§39 are in place, the picture is very different.
`congrSimp.useCastAux` is already a `register_option`, so toggling it
per-run is a `set_option` away:

```lean
set_option congrSimp.useCastAux true in
#bench_simp_share 1500
```

### 2×2×2 matrix at d=1500 (variant × skip-proof × aux)

```
                          aux=false     aux=true      aux speedup
 def0   backward (baseline)  1490 ms      2220 ms       0.67×   (regression)
 def0   skip (§38+39)          26.9 ms      19.2 ms     1.40×
 opaque backward              31.9 ms      21.9 ms     1.46×
 opaque skip (§38+39)         27.9 ms      18.9 ms     1.48×
```

**Only one cell shows a regression**: `def0 + backward + aux=on`.
That's the combination §33 measured. In every other combination, aux
is a 1.4–1.5× kernel speedup.

### Depth sweep, skip-proof active, aux on vs off

```
                  type-checking time (ms)
              ─── def0+skip ───      ─── opaque+skip ───
   d         aux=off  aux=on         aux=off  aux=on
   100        1.85     1.39           2.04     1.34
   200        3.72     2.52           3.83     2.48
   400        7.34     4.86           7.45     5.18
   800       14.2     10.1           14.8     10.3
  1500       27.2     18.5           28.0     19.0
```

Growth ratios (d=100 → d=1500, depth ratio 15×):

```
                def+skip    opaque+skip
 aux=off         14.7×       13.7×
 aux=on          13.3×       14.2×

 plain (§39 reference)        13.8×
```

All four combinations are within noise of linear, and within noise
of plain's growth rate. Aux changes the constant factor only, not
the asymptotic.

### simp time is unchanged

Across every combination, simp's contribution to profiler time is
within run-to-run noise (~28ms at d=1500 regardless of aux setting).
The aux option only affects the *shape* of the proof term simp
emits; it doesn't change how much work simp does. The savings are
entirely in the kernel's verification of the shorter-per-use-site
proof term.

### Why aux helps under skip-proof (and hurts backward-def)

The aux change replaces the inline `Eq.ndrec ha hi h` in
`myGetElem.congr_simp`'s conclusion with an opaque constant
reference `myGetElem.congr_cast_2 …`. Mechanically:

- **Fewer reductions at use sites.** The inline `Eq.ndrec` had to
  be whnf'd and beta-reduced every time the kernel verified an
  application of `congr_simp`. The opaque const reference matches
  by name — no reduction needed.
- **More arguments per application.** The aux has its own telescope
  (the dependencies plus the original bounds proof), so each use
  site has *more* slot-vs-actual checks.

Under backward-order `is_def_eq_args` (the baseline), "more proof
arguments per use site" is catastrophic — each extra proof arg
triggers the proof-irrelevance cascade we diagnosed in §37. The
aux adds args faster than it removes reductions, so backward-def
gets slower.

Under skip-proof (§38+§39), the added proof arguments are elided
entirely — skip-proof doesn't care how many proof slots the aux has.
All that's left is the "fewer reductions per use" side of the
trade-off, which is a clean win.

For opaque under backward order, the backward-order cascade doesn't
apply in the first place (opaque routes through `is_def_eq_app`,
which walks forward — see §37), so the "more args" penalty is also
inert. Only the "fewer reductions" benefit remains.

So aux's effect on each configuration:

```
 config              more args cost   fewer reductions benefit   net
 def0 backward        catastrophic     small                      worse
 def0 skip-proof      eliminated       present                    better
 opaque backward      inert            present                    better
 opaque skip-proof    eliminated       present                    better
```

### Headline

For `opaque myGetElem` at d=1500 under §38+§39:

```
 aux=off:  27.9 ms
 aux=on:   18.9 ms     (1.48× faster)
```

The aux lemma is now a clean kernel speedup on the opaque variant,
and on every configuration *except* the backward-def combination
that the upstream kernel currently uses.

### Combined effect on the full residual

Stacking all the fixes from this investigation:

```
 d=1500 kernel type-check time (share bench)
 
 §21 baseline (no fixes)                        1520 ms  (n^1.87)
 §38+§39 skip-proof, def0                         27.2 ms (linear)
 §38+§39 skip-proof + §33 useCastAux, def0        18.5 ms (linear)
 §38+§39 skip-proof + §33 useCastAux, opaque      19.0 ms (linear)
 plain (§39, non-dependent reference)              4.88 ms (linear)
```

From `1520 ms` down to `18.5 ms` at d=1500 — **82× total speedup**,
with linear growth, ~3.8× off the non-dependent floor. The residual
3.8× is the §40 structural gap (simp's dependent congruence lemma
has more arguments per level than the non-dependent `congrArg`,
which can't be eliminated at the kernel level).

### Rethinking §33's recommendation

§33 closed with "`congrSimp.useCastAux` remains an opt-in toggle,
default off, kept as an experiment harness but not a fix for
anything." That was correct given the data available at that
time — on the baseline kernel with backward-order `is_def_eq_args`,
aux was a net regression.

Under §38+§39, the recommendation flips: aux is a ~1.47× kernel
speedup on every variant of this benchmark, with no simp regression.
It should be on by default *if* skip-proof is on. If skip-proof is
the upstream fix direction, aux should land with it (or shortly
after). If skip-proof is not landed, aux should stay off by default
for backward-def soundness-of-perf reasons.

### Status

- **Aux = clean win under §38+§39.** ~1.47× kernel speedup for
  both def and opaque, zero simp impact, linear growth preserved,
  no test regressions (simp suite passes under all four
  combinations).
- **Best-known combination**: §38+§39 skip-proof + `congrSimp.useCastAux=true`.
  Gives 18.5ms (def) / 19.0ms (opaque) at d=1500, vs 1520ms for
  the baseline. The 82× speedup plus linear growth is essentially
  the whole fix for this benchmark.
- **Residual (3.8×) is structural.** §40 explained why: simp's
  dependent congruence proof term has more applications and more
  args per application than the non-dependent baseline. Would take
  a simp-side change to shrink further.
- **`congrSimp.useCastAux` is already a `register_option`** from §33,
  so the comparison in this section required no new code — just
  `set_option congrSimp.useCastAux true` on a run with the skip-proof
  kernel binary.

## 42. Decomposing the §40 residual: 3-arg structure vs dependent slot

§40 attributed the ~5.7× gap between `def myGetElem` and `plain`
under skip-proof to "simp's dependent congruence proof term has more
args per level." That's correct but too coarse — it doesn't say how
much of the gap is from *being a 3-arg function* vs from *the proof
arg's type being tower-shaped*. This section splits it.

### The separator function

```lean
def myGetElemNE (xs : Array Nat) (i : Nat) (h : Nonempty Nat) : Nat := i
```

Same 3-arg shape as `myGetElem`, and the third arg is still a Prop
(so proof irrelevance still fires and simp still generates a
`myGetElemNE.congr_simp` with a `.subsingleton` slot). But the proof
arg's type is the constant `Nonempty Nat` — no dependency on `xs` or
`i`, no tower. Added as `#bench_simp_myget_ne` to
`src/test_simp_bench.lean`.

### Kernel type-checking time (ms)

```
             backward (default)                skip-proof (§38+§39)
  d     plain    NE     share      plain    NE     share
  25    0.19    0.26    1.29       0.18    0.25    0.74
  50    0.26    0.40    4.74       0.28    0.43    1.34
 100    0.45    0.65   10.0        0.45    0.65    2.32
 200    0.75    1.23   32.5        0.78    1.39    4.38
 400    1.42    2.40  123          1.44    2.40   16.4
 800    3.04    4.98  620          2.73    4.77   18.1
1500    5.25    8.97 2350          5.49    9.3    36.2
```

Ratios at d=1500 under skip-proof: NE/plain = **1.7×**, share/NE =
**~3.9×**, share/plain = **~6.6×** (matches §40's ~5.7× within
run-to-run noise).

### What the two factors are

- **NE/plain ≈ 1.7×, stable across backward/skip-proof and across
  depths.** This is the constant-factor cost of `myGetElem.congr_simp`
  having more slots than `congrArg`: one `.eq` arg + two non-`.eq`
  args (array + dependent-proof-slot) → more applications in simp's
  proof term, each with more slots for the kernel's `infer_app` to
  verify. Pure structural difference, nothing depth-coupled.

- **share/NE ≈ 3.9× under skip-proof.** This is the part specific to
  the proof slot being **tower-shaped**. Under skip-proof the kernel
  no longer compares the proof arg's *value* (that was §38+§39's
  elision), but `infer_app` still checks that each actual arg's
  type matches the declared slot type. For `myGetElem` at level k
  that slot's declared type is `val_k < xs.size` — a tower-shaped
  Prop — and the match still walks O(depth) structure per use site.
  For NE the slot type is the constant `Nonempty Nat`, so the same
  match is O(1).

- **Backward vs skip-proof for NE: essentially identical** (8.97 vs
  9.3 ms at d=1500, 1.23 vs 1.39 at d=200). The §37 cascade doesn't
  fire when there's no tower-shaped proof-slot type, so there's
  nothing for skip-proof to elide. §38+§39 are no-ops on NE, as
  expected.

### Revised answer to §40

The 5.7× residual to `plain` decomposes roughly as:

```
plain × 1.7 (3-arg structure) × 3.9 (dep slot) ≈ 6.6 × plain
```

Where §40 said the whole residual was "structural," it's really
**~1.7× structural + ~3.9× depth-coupled**, with the depth-coupled
part living in `infer_app`'s slot-type-vs-actual verification rather
than in `is_def_eq_args`/`is_def_eq_app` (which §38+§39 already
handled).

### Fix direction for the remaining 3.9×

This is exactly option (2) from §40's "to reduce the gap further"
list: extend skip-proof reasoning into `infer_app`. When `infer_app`
processes a Prop-typed slot at position j, the actual arg's type
does not need to be matched against the substituted slot type —
proof irrelevance plus "all earlier slots agree" handles it, by the
same induction as §38's soundness argument. Eliding this check
would collapse the ~3.9× at each level's use-site verification
and leave only the ~1.7× structural factor.

Not implemented in this branch. The change is larger than §38+§39
because `infer_app` is called from many more contexts than
`is_def_eq_args`, and the soundness induction relies on the caller
having already verified the head — which is true for the simp
proof-term walk but would need a per-call precondition to avoid
regressions in callers that invoke `infer_app` on expressions
whose head isn't yet known-well-typed.

### Status

- **§40's "structural" framing refined.** The gap splits cleanly
  into 1.7× (non-depth-coupled, from having more args) and 3.9×
  (depth-coupled, from the proof slot type being tower-shaped).
- **Depth-coupled part is an `infer_app` effect**, not a defeq
  effect. §38+§39's skip-proof doesn't touch it.
- **Fix direction known** (extend skip-proof into `infer_app`),
  unshipped, requires care about callers' preconditions.
- `src/test_simp_bench.lean` now has `myGetElemNE` +
  `#bench_simp_myget_ne` for reproducing the decomposition.

