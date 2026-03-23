# Plan: Add missing `V` variants to DTreeMap and DHashMap

## Pattern

`V` variants are `noncomputable`, require `[Nonempty T]` instead of `[Inhabited T]`,
and delegate to the `D` variant with `Classical.ofNonempty` as fallback:

```lean
noncomputable def minKeyV [Nonempty α] (t : DTreeMap α β cmp) : α :=
  t.minKeyD Classical.ofNonempty
```

Documentation should use `@[inherit_doc ...]` referencing the corresponding proof variant
(following the pattern of existing V variants like `getV`/`getKeyV`).

---

## Part 1: New function definitions

### DTreeMap — already has V: `getV`, `getKeyV`, `Const.getV`

### DTreeMap/Basic.lean — missing V variants (22 functions):

**Main namespace (15):**

| # | Function | Defined via | Nonempty constraint |
|---|----------|------------|---------------------|
| 1 | `getEntryV` | `getEntryD` | `[Nonempty ((a : α) × β a)]` |
| 2 | `minEntryV` | `minEntryD` | `[Nonempty ((a : α) × β a)]` |
| 3 | `maxEntryV` | `maxEntryD` | `[Nonempty ((a : α) × β a)]` |
| 4 | `minKeyV` | `minKeyD` | `[Nonempty α]` |
| 5 | `maxKeyV` | `maxKeyD` | `[Nonempty α]` |
| 6 | `entryAtIdxV` | `entryAtIdxD` | `[Nonempty ((a : α) × β a)]` |
| 7 | `keyAtIdxV` | `keyAtIdxD` | `[Nonempty α]` |
| 8 | `getEntryGEV` | `getEntryGED` | `[Nonempty (Sigma β)]` |
| 9 | `getEntryGTV` | `getEntryGTD` | `[Nonempty (Sigma β)]` |
| 10 | `getEntryLEV` | `getEntryLED` | `[Nonempty (Sigma β)]` |
| 11 | `getEntryLTV` | `getEntryLTD` | `[Nonempty (Sigma β)]` |
| 12 | `getKeyGEV` | `getKeyGED` | `[Nonempty α]` |
| 13 | `getKeyGTV` | `getKeyGTD` | `[Nonempty α]` |
| 14 | `getKeyLEV` | `getKeyLED` | `[Nonempty α]` |
| 15 | `getKeyLTV` | `getKeyLTD` | `[Nonempty α]` |

**Const namespace (7):**

| # | Function | Defined via | Nonempty constraint |
|---|----------|------------|---------------------|
| 16 | `Const.minEntryV` | `Const.minEntryD` | `[Nonempty (α × β)]` |
| 17 | `Const.maxEntryV` | `Const.maxEntryD` | `[Nonempty (α × β)]` |
| 18 | `Const.entryAtIdxV` | `Const.entryAtIdxD` | `[Nonempty (α × β)]` |
| 19 | `Const.getEntryGEV` | `Const.getEntryGED` | `[Nonempty (α × β)]` |
| 20 | `Const.getEntryGTV` | `Const.getEntryGTD` | `[Nonempty (α × β)]` |
| 21 | `Const.getEntryLEV` | `Const.getEntryLED` | `[Nonempty (α × β)]` |
| 22 | `Const.getEntryLTV` | `Const.getEntryLTD` | `[Nonempty (α × β)]` |

### DHashMap/Basic.lean — missing V variants (1 function):

| # | Function | Defined via | Nonempty constraint |
|---|----------|------------|---------------------|
| 23 | `getEntryV` | `getEntryD` | `[Nonempty ((a : α) × β a)]` |

---

## Part 2: Lemmas

Each `!` lemma needs a corresponding `V` lemma with `[Inhabited T]` → `[Nonempty T]`.

### DTreeMap/Lemmas.lean — `minKey!` lemmas needing `minKeyV` counterparts (~47):

```
minKeyV_insert_of_isEmpty
minKeyV_insertIfNew_of_isEmpty
minKeyV_eq_classicalOfNonempty  (was minKey!_eq_default)
minKey?_eq_some_minKeyV         (was minKey?_eq_some_minKey!)
minKey_eq_minKeyV               (was minKey_eq_minKey!)
minKeyV_eq_iff_getKey?_eq_self_and_forall
minKeyV_eq_iff_mem_and_forall
minKeyV_insert_le_minKeyV
minKeyV_insert_le_self
contains_minKeyV
minKeyV_mem
minKeyV_le_of_contains
minKeyV_le_of_mem
le_minKeyV
getKey?_minKeyV
getKey_minKeyV_eq_minKey
getKey!_minKeyV
getKeyD_minKeyV
getKeyV_minKeyV
minKeyV_erase_eq_of_not_compare_minKeyV_eq
minKeyV_le_minKeyV_erase
minKeyV_insertIfNew_le_minKeyV
minKeyV_insertIfNew_le_self
minKeyV_eq_getElem!_keysArray  (may not apply — getElem! uses Inhabited)
minKeyV_modify (two versions: LawfulEqCmp and general)
minKeyV_alter_eq_self (two versions)
minKeyV_modify_eq_minKeyV
compare_minKeyV_modify_eq
ordCompare_minKeyV_modify_eq
minKeyV_alter_eq_self (Const version)
minKeyV_eq_minKeyD_default
```

### DTreeMap/Lemmas.lean — `maxKey!` lemmas needing `maxKeyV` counterparts (~47):

Same pattern as minKey, mirrored for max:
```
maxKeyV_le_maxKeyV_insert
self_le_maxKeyV_insert
contains_maxKeyV
maxKeyV_mem
le_maxKeyV_of_contains
le_maxKeyV_of_mem
maxKeyV_le
getKey?_maxKeyV
getKey_maxKeyV_eq_maxKey
getKey!_maxKeyV
getKeyD_maxKeyV
getKeyV_maxKeyV
maxKeyV_erase_eq_of_not_compare_maxKeyV_eq
maxKeyV_erase_le_maxKeyV
maxKeyV_le_maxKeyV_insertIfNew
self_le_maxKeyV_insertIfNew
maxKeyV_eq_getLast!_keys  (may not apply)
maxKeyV_eq_back!_keysArray  (may not apply)
maxKeyV_modify (multiple versions)
maxKeyV_alter_eq_self (multiple versions)
maxKeyV_modify_eq_maxKeyV
compare_maxKeyV_modify_eq
ordCompare_maxKeyV_modify_eq
maxKeyV_eq_maxKeyD_default
maxKey?_eq_some_maxKeyV
maxKey_eq_maxKeyV
maxKeyV_eq_classicalOfNonempty
maxKeyV_eq_iff_getKey?_eq_self_and_forall
maxKeyV_eq_iff_mem_and_forall
```

### DTreeMap/Lemmas.lean — Equiv `_eq` lemmas (19):

For each of the 22 new DTreeMap functions, there is a corresponding `!_eq` Equiv lemma.
Some functions (getEntry, minKey, maxKey) don't have `_eq` Equiv lemmas for `!` currently,
so only those that have existing `!` counterparts need V versions:

```
minEntryV_eq
maxEntryV_eq
entryAtIdxV_eq
keyAtIdxV_eq
getEntryGEV_eq
getEntryGTV_eq
getEntryLEV_eq
getEntryLTV_eq
getKeyGEV_eq
getKeyGTV_eq
getKeyLEV_eq
getKeyLTV_eq
constMinEntryV_eq
constMaxEntryV_eq
constEntryAtIdxV_eq
constGetEntryGEV_eq
constGetEntryGTV_eq
constGetEntryLEV_eq
constGetEntryLTV_eq
```

### DTreeMap/Lemmas.lean — `getKey!_minKeyD` / `getKeyV_minKeyD` pattern:

Already exist: `getKey!_minKeyD`, `getKeyV_minKeyD`, `getKey!_maxKeyD`, `getKeyV_maxKeyD`
No additional lemmas needed for this pattern.

### DHashMap/Lemmas.lean — No `getEntry!` lemmas exist, so no `getEntryV` lemmas needed.

---

## Part 3: Implementation order

1. Add 22 function defs to `src/Std/Data/DTreeMap/Basic.lean`
2. Add 1 function def to `src/Std/Data/DHashMap/Basic.lean`
3. Build to verify function defs compile
4. Add ~47 `minKeyV_*` lemmas to `src/Std/Data/DTreeMap/Lemmas.lean`
5. Add ~47 `maxKeyV_*` lemmas to `src/Std/Data/DTreeMap/Lemmas.lean`
6. Add 19 `_eq` Equiv lemmas to `src/Std/Data/DTreeMap/Lemmas.lean`
7. Build to verify all lemmas compile

---

## Part 4: Files to edit

- `src/Std/Data/DTreeMap/Basic.lean` — 22 new function defs
- `src/Std/Data/DHashMap/Basic.lean` — 1 new function def
- `src/Std/Data/DTreeMap/Lemmas.lean` — ~113 new lemmas
