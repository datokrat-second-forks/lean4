# lean4lean development instructions

## Building

Set up the lean toolchain first. If `leanprover/lean4:v4.26.0` is not available via elan,
build lean4 from source at the v4.26.0 tag and link stage1 as a toolchain:

```bash
elan toolchain link lean4-v4.26.0 /path/to/lean4/build/release/stage1
echo lean4-v4.26.0 > lean-toolchain
```

Then build with:
```bash
lake build
```

## Testing

Check a single file:
```bash
lake env lean Lean4Lean/Theory/Typing/Injectivity.lean
```

## Current task: Injectivity proofs

The main open problem is proving the injectivity lemmas in
`Lean4Lean/Theory/Typing/Injectivity.lean`. These are:

- `IsDefEqU.sort_inv`: If `.sort u ≡ .sort v` then `u ≈ v`
- `IsDefEqU.forallE_inv_stratified`: Component extraction for `forallE ≡ forallE`
- `IsDefEqU.sort_forallE_inv`: `.sort u` cannot be defeq to `.forallE A B`

### Rules for this task

- **Never stop working on the proof unless interrupted by the user.** Keep iterating
  until all sorries are eliminated from `Injectivity.lean` and the file compiles cleanly.
- Always verify compilation with `lake env lean Lean4Lean/Theory/Typing/Injectivity.lean`
  after changes.
- Always verify the full project builds with `lake build` before declaring success.
- The lean-toolchain file should be `leanprover/lean4:v4.26.0` in committed code
  (use `lean4-v4.26.0` locally for building, then `git checkout -- lean-toolchain`
  before committing).

### Proof architecture

See `PLAN.md` for the detailed proof plan. Key points:

- Type uniqueness (`uniq`) and injectivity are mutually dependent
- Break circularity via WF induction on `HasTypeStratified` depth
- At each depth N: prove sort_inv_N first, then uniq_N, then forallE_inv_N
- sort_inv_N only needs uniq_{<N} and sort_inv_{<N} from the IH
- uniq_N uses sort_inv_N (just proven) and forallE_inv_{<N} from IH
