# Detail: Subject Reduction Bridge

## Goal

Add subject reduction for WHSteps to InjectivityParams, enabling the proofIrrel and
eta cases of whnf_preserved.

## Design

### New field in InjectivityParams (PatternParams.lean)

```lean
class InjectivityParams where
  ...
  whsteps_hasType : ∀ {U Γ e e' A},
    Ordered env → OnCtx Γ (env.IsType univs) →
    WHSteps e e' → env.HasType univs Γ e A → env.HasType univs Γ e' A
```

### Implementation in HeadReduction.lean

The instance already has access to `[Params]` which provides the full typing infrastructure.

Step 1: Prove `WHStep → WHRed Γ` (given typing context):
```lean
theorem WHStep.toWHRed (hs : WHStep e e') (he : HasType env univs Γ e A)
    (hΓ : OnCtx Γ (IsType env univs)) : WHRed Γ e e'
```

By cases on `hs`:
- `beta` → `WHRed.beta`
- `extra hdf hlen` → `WHRed.extra` (needs `derive_extra_pat` to get Pat/Matches/Check,
  then `pat_wf` to verify the check condition holds given typing)
- `appFn h ih` → `WHRed.app (ih ...)` (IH with app typing inversion for `f : forallE A B`)
- `major hm h ih` → `WHRed.major hm' (ih ...)` where `hm'` adapts the major premise proof

Step 2: Lift to WHSteps:
```lean
theorem WHSteps.toWHRedS (hs : WHSteps e e') (he : HasType env univs Γ e A)
    (hΓ : ...) : WHRedS Γ e e'
```

By induction on `WHSteps` (ReflTransGen), using `WHStep.toWHRed` for each step
and `WHRed.hasType` (already proved) to thread typing through.

Step 3: Subject reduction follows:
```lean
WHSteps.hasType hs he hΓ := (hs.toWHRedS he hΓ |>.hasType hΓ he)
```

Actually, we can skip the intermediate `toWHRedS` and just use `WHRed.hasType` at each step.

### Impact on SortLikePreservation.lean

The `WHSteps_hasType` sorry (line 99) becomes:
```lean
private theorem WHSteps_hasType ... := whsteps_hasType hord hΓ hsteps ht
```

## Risk Assessment

**Low**. All required pieces exist:
- `WHRed.hasType` is proven (HeadReduction.lean line 183)
- `WHRedS.hasType` is proven (HeadReduction.lean line 309)
- The `extra` case needs `pat_wf` from Params, which is available in HeadReduction's scope
- The adaptation is mechanical (matching constructor shapes)
