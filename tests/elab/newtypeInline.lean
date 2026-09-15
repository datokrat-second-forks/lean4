import Lean

/-!
Tests that `newtype` marks its generated constructor and projector `[always_inline]`.

They are identity functions, so inlining them is what keeps a `newtype`'s calling convention the
same as its underlying type's; leaving them as ordinary calls would be a silent cost rather than an
error. `always_inline` rather than `inline` because the latter is only consulted after the inliner's
own heuristics decline.
-/

newtype Wrapper (α : Type) := List α with toList

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

/-!
The equivalence is `macro_inline`, so that an instance transported along it compiles as if it had
been written on the underlying type: `Wrapper.equiv.toFun`/`.invFun` fold to the identities before
the compiler sees them, whereas `inline` would only reach the closed term the equivalence itself is
compiled to.
-/

open Lean Compiler in
run_meta do
  let some k := getInlineAttribute? (← getEnv) ``Wrapper.equiv
    | throwError "`Wrapper.equiv` carries no inline attribute"
  unless k matches .macroInline do
    throwError "`Wrapper.equiv` is not `macro_inline`"

newtype M (α : Type) := StateT Nat Id α with run

instance : Monad M := inferInstanceAs (Monad (StateT Nat Id))

def viaM (k : Nat) : M Nat := do
  let n ← M.mk get
  M.mk (set (n + k))
  return n * 2

def viaStateT (k : Nat) : StateT Nat Id Nat := do
  let n ← get
  set (n + k)
  return n * 2

open Lean in
run_meta do
  let some m := IR.findEnvDecl (← getEnv) ``viaM | throwError "no IR for `viaM`"
  let some s := IR.findEnvDecl (← getEnv) ``viaStateT | throwError "no IR for `viaStateT`"
  let irM := (toString (format m)).replace "viaM" "viaStateT"
  if (irM.splitOn "equiv").length != 1 then
    throwError "the transported `bind` did not inline:{indentD (format m)}"
  unless irM == toString (format s) do
    throwError "IR differs:{indentD (format m)}\n{indentD (format s)}"
