import Lean

/-!
Tests that `structure +defeq` marks its generated constructor and projection `[always_inline]`.

They are identity functions, so inlining them is what keeps a `+defeq` structure's calling
convention the same as its field type's; leaving them as ordinary calls would be a silent cost
rather than an error. `always_inline` rather than `inline` because the latter is only consulted
after the inliner's own heuristics decline.
-/

structure +defeq Wrapper (α : Type) where
  toList : List α

structure Control (α : Type) where mk :: toList : List α

open Lean Compiler in
run_meta do
  let env ← getEnv
  for n in [``Wrapper.mk, ``Wrapper.toList] do
    let some k := getInlineAttribute? env n
      | throwError "`{n}` carries no inline attribute"
    unless k matches .alwaysInline do
      throwError "`{n}` is not `always_inline`"

-- The attribute is on the generated declarations, not inherited from anything the user wrote.
example (l : List Nat) : (Wrapper.mk l).toList = l := rfl
example (l : List Nat) : (Control.mk l).toList = l := rfl
