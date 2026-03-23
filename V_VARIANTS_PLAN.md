# Plan: Add V-variants, bridge lemmas, remove simp/grind from proof-taking variants

## Context

V-variants use `Classical.ofNonempty` as fallback instead of requiring proofs. Bridge lemmas equate proof-taking operations with their V-variants, allowing `simp` to normalize away proof arguments.

---

## Step 1: Add missing V-variant definitions

Implement using D-variants wherever possible: `noncomputable def fooV [Nonempty τ] ... := t.fooD ... Classical.ofNonempty`

Follow existing patterns in `src/Std/Data/DTreeMap/Basic.lean` (e.g. `getEntryGEV`, `minKeyV`).

### Files to modify:

**TreeMap** (`src/Std/Data/TreeMap/Basic.lean`):
- `minEntryV`, `maxEntryV`, `minKeyV`, `maxKeyV`, `entryAtIdxV`, `keyAtIdxV`

**TreeMap AdditionalOperations** (`src/Std/Data/TreeMap/AdditionalOperations.lean`):
- `getEntryGEV`, `getEntryGTV`, `getEntryLEV`, `getEntryLTV`, `getKeyGEV`, `getKeyGTV`, `getKeyLEV`, `getKeyLTV`

**TreeMap.Raw** (`src/Std/Data/TreeMap/Raw/Basic.lean`):
- Same set as TreeMap (check which are missing)

**TreeSet** (`src/Std/Data/TreeSet/Basic.lean`):
- `minV`, `maxV`, `atIdxV`

**TreeSet AdditionalOperations** (`src/Std/Data/TreeSet/AdditionalOperations.lean`):
- `getGEV`, `getGTV`, `getLEV`, `getLTV`

**TreeSet.Raw** (`src/Std/Data/TreeSet/Raw/Basic.lean`):
- Same set as TreeSet (check which are missing)

**ExtTreeMap** (`src/Std/Data/ExtTreeMap/Basic.lean`):
- `minEntryV`, `maxEntryV`, `minKeyV`, `maxKeyV`, `entryAtIdxV`, `keyAtIdxV`
- `getEntryGEV`, `getEntryGTV`, `getEntryLEV`, `getEntryLTV`, `getKeyGEV`, `getKeyGTV`, `getKeyLEV`, `getKeyLTV`

**ExtDTreeMap** (`src/Std/Data/ExtDTreeMap/Basic.lean`):
- Dep: `getEntryV`, `minEntryV`, `maxEntryV`, `minKeyV`, `maxKeyV`, `entryAtIdxV`, `keyAtIdxV`
- Dep: `getEntryGEV`, `getEntryGTV`, `getEntryLEV`, `getEntryLTV`, `getKeyGEV`, `getKeyGTV`, `getKeyLEV`, `getKeyLTV`
- Const: `minEntryV`, `maxEntryV`, `entryAtIdxV`
- Const: `getEntryGEV`, `getEntryGTV`, `getEntryLEV`, `getEntryLTV`

**ExtTreeSet** (`src/Std/Data/ExtTreeSet/Basic.lean`):
- `minV`, `maxV`, `atIdxV`, `getGEV`, `getGTV`, `getLEV`, `getLTV`

**After this step: BUILD to verify no errors (unused variable warnings OK). COMMIT.**

---

## Step 2: Add lemmas for the new V-variants from Step 1

For each new V-variant, add lemmas analogous to the corresponding `!` variant lemmas. Proof pattern: `simpa [operationV] using operationD_lemma param1 param2`

Follow existing examples like `minKeyV_insert`, `minKeyV_mem`, `getEntryGEV_eq` in `src/Std/Data/DTreeMap/Lemmas.lean`.

### Operations with many `!` lemmas to mirror:
- TreeMap `Lemmas.lean`: `minKeyV` (~23 lemmas), `maxKeyV` (~18 lemmas)
- TreeSet `Lemmas.lean`: `minV` (~16 lemmas), `maxV` (~13 lemmas)
- ExtTreeMap `Lemmas.lean`: `minKeyV` (~21 lemmas), `maxKeyV` (~16 lemmas)
- ExtDTreeMap `Lemmas.lean`: `minKeyV` (~23 lemmas), `maxKeyV` (~18 lemmas)
- ExtTreeSet `Lemmas.lean`: `minV` (~14 lemmas), `maxV` (~11 lemmas)

### Operations with 1 `!` lemma (just `_eq` map equivalence):
- TreeMap: `minEntryV`, `maxEntryV`, `entryAtIdxV`, `keyAtIdxV`, GE/GT/LE/LT variants
- TreeSet: `atIdxV`, GE/GT/LE/LT variants
- Ext types: similar

### Also add lemmas for Raw variants where applicable

**After this step: BUILD to verify no errors. COMMIT.**

---

## Step 3: Add/annotate bridge lemmas and remove simp/grind

**WARNING: This step WILL break many proofs throughout the codebase. Do NOT build after this step. Do NOT attempt to fix broken proofs — the user will do this manually. The risk of unwanted changes from trying to fix proofs is too high.**

### 3a: Add `@[simp, grind norm]` to ALL existing bridge lemmas

Every `*_eq_*V` bridge lemma that lacks these annotations gets them added.

Key files: all `Lemmas.lean` and `RawLemmas.lean` in Std, plus Init Option/List/Array/Vector Lemmas.

(No new `getElem_eq_getElemV` needed — the existing general one covers all types.)

### 3b: Add MISSING bridge lemmas with `@[simp, grind norm]`

Pattern:
```lean
@[simp, grind norm]
theorem foo_eq_fooV [...] {h} : t.foo x h = t.fooV x := by
  simp [fooV]
```

Missing bridge lemmas for operations that have both proof-taking and V-variants:
- DTreeMap: `getKey_eq_getKeyV`, `getEntry_eq_getEntryV`, `minEntry_eq_minEntryV`, `maxEntry_eq_maxEntryV`, `entryAtIdx_eq_entryAtIdxV`, `keyAtIdx_eq_keyAtIdxV`, GE/GT/LE/LT bridge lemmas
- DHashMap: `getEntry_eq_getEntryV`
- TreeMap: `getKey_eq_getKeyV`, `minEntry_eq_minEntryV`, `maxEntry_eq_maxEntryV`, `minKey_eq_minKeyV`, `maxKey_eq_maxKeyV`, `entryAtIdx_eq_entryAtIdxV`, `keyAtIdx_eq_keyAtIdxV`, GE/GT/LE/LT
- TreeSet: `min_eq_minV`, `max_eq_maxV`, `atIdx_eq_atIdxV`, GE/GT/LE/LT
- ExtDTreeMap, ExtTreeMap, ExtTreeSet, ExtHashMap, ExtDHashMap: `getKey_eq_getKeyV` + whatever new V-variants were added
- Raw variants where applicable

### 3c: Remove `@[simp]` and `@[grind]` from ALL lemmas about proof-taking variants

For every lemma whose LHS mentions a proof-taking operation that has a V-variant, remove `@[simp]` and `@[grind ...]` annotations.

**After this step: DO NOT BUILD. COMMIT and PUSH.**

---

## Learnings

- **Agents must commit regularly**: When launching background agents that edit files, instruct them to `git add` and `git commit` their changes before finishing. Otherwise changes can be silently lost.
- **Use worktree isolation for parallel agents**: When multiple agents edit different files in the same repo, use `isolation: "worktree"` to give each agent its own working copy. Merge their branches afterward. This avoids silent data loss from concurrent file access.
