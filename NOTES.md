# Notes: pack congruences and the strict instance-type check

Working notes for the `instance-mvar-typecheck` worktree (uncommitted pack/`dsimp_congr` prototype).
Scratch files referenced below live in
`/tmp/claude-1013/-home-paul-lean4/4bdedae8-9ce7-4899-af9d-e9c115011a8c/scratchpad/` (abbreviated `$S`).

## Running Mathlib site reproductions

- Mathlib's lakefile passes options that a plain `lean FILE` call does not. Standalone runs need
  `-Dbackward.instanceTypes.subsingletons.prop=false -Dbackward.instanceTypes.subsingletons.decidable=false -DmaxSynthPendingDepth=3 -DautoImplicit=false`.
  Without them, B9 shows a spurious error in `fromInduced` (`failed to assign synthesized type class
  instance LinearMap.semilinearMapClass.toMulActionSemiHomClass`), on the base toolchain too.
- `$S/packsites/run1.sh` passes these options (since 2026-11-08, late). **All site results and E7/E16
  heartbeat numbers recorded before that were measured without them** and should be re-run before
  relying on them. B9 was re-checked and is unaffected.
- `linter.tacticCheckInstances` staying silent is not evidence of type-correctness at `implicit`: it only
  reports when it finds a semireducible non-instance candidate to suggest. To check a goal directly,
  run `Meta.check goal .implicit` (see the `check_goal_at` tactic in `$S/packsites/B9_chk.lean`).

## How the strict check produces divergent spellings

- The check (`revertInstanceTypeChanges`) guarantees per application that every instance argument has
  its expected type at `.instances`. It must stay at `.instances` (instance synthesis semantics).
- It does not cover non-instance positions. Reverts are per argument position and all-or-nothing: a
  reverted position returns to its original spelling, not to the last intermediate stage of the rewrite
  chain that would have passed.
- Consequence: the same subterm can end up spelled differently in neighbouring positions (e.g. a
  coercion's implicit domain `α` vs. the domain inside its function's type `F`). The term stays
  type-correct at `implicit`, but lemmas no longer apply when
  - the discrimination tree keys the divergent position (implicit type arguments are indexed), or
  - unification runs at reducible transparency on that position (e.g. higher-order out-params under
    `backward.isDefEq.respectTransparency false`, which are then not bumped to `implicit`).
- Rewrite lemmas also create such mixtures directly: `hom_forget₂_TopCat_map`'s right-hand side
  `ofClass f.hom` has `X`/`Y` in the `forget₂` spelling but `F` in the `toModuleCat` spelling, and
  `coe_ofClass` copies `X`/`Y` into the coercion's `α`/`β`. Consistent at `.instances`, so legitimate.

## rfl lemmas that only hold at default

- `@[simps]` lemmas of plain `def`s (e.g. `TopModuleCat.free_obj`, `free_map`) and lemmas like
  `coe_freeObj` hold only at default transparency. Simp rewrites with them, and the strict check then
  reverts wherever an instance depends on the rewritten position.
- Remedy that worked for B9: `attribute [local implicit_reducible] freeObj free` (both semireducible,
  neither an instance). With it, B9's opt-out version passes without `respectTransparency false`.
  Do not mark instance-reducible or reducible definitions this way.
- An object lemma that holds only by unfolding such a definition (my `toModuleCat_freeObj`) can drive a
  position past what dependent instances can follow; the revert then discards the good intermediate
  spelling.

## B9 (`Algebra/Category/ModuleCat/Topology/Basic`, `freeAdj`)

- Passes completely under the strict check, default `respectTransparency`, canonicalization off, with
  packs: `$S/packsites/B9_pk8_s_ir_nl2.lean` (SModPack/ACG/TopSModPack congruences, the two
  `implicit_reducible` attributes, `toModuleCat_freeObj` only in the `convert!` simp). Without packs,
  two goals still fail.
- Root cause of the last failure (unit naturality) when `toModuleCat_freeObj` is a global simp lemma:
  `freeMap_map` is never retrieved. Its key has `α = ↑(freeObj R X).toModuleCat`
  (`ModuleCat.0, TopModuleCat.0, TopModuleCat.freeObj, …`); the term's `α` is
  `TopCat.carrier ((forget₂ …).obj (freeObj R X))` (`TopCat.0, Functor.0, …`). `rw [freeMap_map]`
  succeeds at the same goal, so unification is fine. Experiments: `$S/packsites/B9_A/B/C/Cc/Cf.lean`,
  keys in `$S/packsites/B9_keys.lean`.
- Neither turning the fallback off nor a uniform pack congruence for the coercion fixes it: the
  congruence matches without progress and keeps the mixed term. Canonicalization fixes it by rebuilding
  `α` from the pack value.

## Idea: do not index out-parameters

- A copy of `freeMap_map` with `no_index` on the coercion's `α` (built programmatically, since `α` is an
  elaborated implicit argument) makes B9 pass even with the global `toModuleCat_freeObj` and without
  canonicalization: `$S/packsites/B9_ni.lean`.
- General version: in `DiscrTree.ignoreArg` (`src/Lean/Meta/DiscrTree/Main.lean`), treat implicit
  arguments whose binder type is `outParam _` like instances. Rationale: out-params are determined by the
  other (indexed) arguments via the instance, so indexing them adds little and makes the index sensitive
  to exactly the spelling divergence the strict check produces. `β` of `DFunLike.coe` is already skipped
  (not a type); `α` is not.
- To check: precision loss for generic `FunLike F α β` lemmas (likely small, `α` is usually `*` there);
  effect on other discrimination-tree users (instances, `ext`, Aesop, `fun_prop`); stored keys in
  `.olean`s change, so a real evaluation needs a rebuilt Mathlib.

## Canonicalization (`simp.packCongr.canonicalize`, default false)

- Rebuilds a term from a pack congruence's right-hand side even without progress. It repairs divergent
  spellings by taking every position from one source, and it is cheaper since the `preMatchCongrPattern`
  fix (E7 3674 / E16 2593 vs. 3792 / 2717.5 off; pre-lakefile-options numbers).
- Downside: the spelling comes from the raw pack field, which is deliberately not normalized field-wise,
  so results can be non-simp-normal (E16: `FGModuleCat.carrier X` respelled `↑X.obj`, which
  `FGModuleCat.obj_carrier` rewrites back). Result marking hides the resulting cycle.
- Narrower variants considered: rebuild only when the left-hand side matched up to unfolding; take type
  arguments from simp-normalized pack fields.

## Simp implementation fixes made in this prototype

- `preMatchCongrPattern` compared heads including universe levels, so it never ran for
  universe-polymorphic heads such as `DFunLike.coe`. It now compares names and unifies the levels.
  Effect: congruences match terms with divergent spellings; E7 3932 → 3792, E16 2813 → 2717.5.
- `inPackValueOnly` blocked every structure-constructor congruence outside pack values (e.g.
  `ContinuousMap.mk`). Now only lenses (`Eq` conclusion) are restricted (`packValueOnlyTheorem`).
- Fallback after a no-progress pack congruence (`debug.simp.packCongr.fallback`) is on by default;
  without it, an incomplete pack setup can make proofs fail that pass without packs (A14).

## Other Mathlib sites and iterators

- E10, E14: pass with `ModuleCat` packs plus object-level `ModuleCat.of` lemmas, since `@[simps]` only
  generates fused carrier lemmas (`chainsFunctor_obj_X_carrier`, `coinvariantsFunctor_obj_carrier`).
  E14 also needs a `Coinvariants.mk` congruence over a `Rep` pack.
- A14: passes with the object-level lemma alone, no packs.
- Pack congruences need care: the right pack depends on the weakest instances in the terms
  (`AddCommMonoid`-based `SModPack` for `Finsupp` maps instead of `ModuleCat.of`), and congruences need
  independent universes per type and changeable index types.
- Iterators: all prototype goals from `~/lean4-bundled-iter` pass with `toList_congr`, `toArray_congr`,
  `map_pack_congr` (`$S/iterpack/`).
