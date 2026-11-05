/-!
Well-founded recursion supplies the condition of a plain `uif` to termination proofs, also in a
`let rec` whose signature mentions a `let`-bound variable (ADR-52/ADR-64): `UDecidable.ite` is defined
via `UDecidable.dite`, so the `wf_preprocess` lemma `UDecidable.ite_eq_dite` is `rfl`.
-/

def f (xs : Array Nat) (n : Nat) (h₀ : 0 < min n xs.size) : Nat :=
  let n := min n xs.size
  let rec go (i : Nat) (h : i < n) : Nat :=
    uif i > 0 then go (i - 1) (by omega) else i
  go 0 h₀

example : (uif 1 < 2 then 3 else 4) = (uif _ : 1 < 2 then 3 else 4) := rfl
