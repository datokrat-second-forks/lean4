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
been written on the underlying type: `Wrapper.equivDef.toFun`/`.invFun` fold to the identities before
the compiler sees them, whereas `inline` would only reach the closed term the equivalence itself is
compiled to.
-/

open Lean Compiler in
run_meta do
  let some k := getInlineAttribute? (← getEnv) ``Wrapper.equivDef
    | throwError "`Wrapper.equivDef` carries no inline attribute"
  unless k matches .macroInline do
    throwError "`Wrapper.equivDef` is not `macro_inline`"

/-! An instance transported through a chain of `newtype`s compiles to the underlying code. -/

class Step (α : Type) where
  step : α → α

@[transport] protected abbrev Step.canonicalCongr (e : Lean.CanonicalEquivalence α β) :
    Lean.CanonicalEquivalence (Step α) (Step β) where
  toFun i := ⟨fun x => e.toFun (i.step (e.invFun x))⟩
  invFun i := ⟨fun x => e.invFun (i.step (e.toFun x))⟩
  left_inv i := congrArg Step.mk <| funext fun x =>
    show e.invFun (e.toFun (i.step (e.invFun (e.toFun x)))) = i.step x by rw [e.left_inv, e.left_inv]
  right_inv i := congrArg Step.mk <| funext fun x =>
    show e.toFun (e.invFun (i.step (e.toFun (e.invFun x)))) = i.step x by rw [e.right_inv, e.right_inv]

instance : Step Nat := ⟨(· + 1)⟩

newtype W1 := Nat with toNat
newtype W2 := W1 with toW1

instance : Step W2 := inferInstanceAs (Step Nat)

/--
trace: [Compiler.IR] [result]
    def stepW2 (x_1 : @& tobj) : tobj :=
      let x_2 : tagged := 1;
      let x_3 : tobj := Nat.add x_1 x_2;
      ret x_3
    def stepW2._boxed (x_1 : tobj) : tobj :=
      let x_2 : tobj := stepW2 x_1;
      dec x_1;
      ret x_2
-/
#guard_msgs in
set_option trace.compiler.ir.result true in
def stepW2 (x : W2) : W2 := Step.step x

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
