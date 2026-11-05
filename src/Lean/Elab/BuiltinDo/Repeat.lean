/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.BuiltinDo.Basic
meta import Lean.Parser.Do
import Lean.Elab.BuiltinDo.For

public section

namespace Lean.Elab.Do

open Lean.Parser.Term

/--
Builtin do-element elaborator for `repeat` (syntax kind `Lean.Parser.Term.doRepeat`).

Expands to `for _ in Loop.mk do ...`. When the body cannot `break`, the loop's own expression
type is fixed to `PUnit`, yet the surrounding do block may require a different result type;
we append an `unreachable!` so the continuation has a polymorphic value of any type. The
`unreachable!` is never actually executed (the loop never terminates normally), and any
dead-code warning that fires on the surrounding continuation is actionable — the user can
remove the following code without breaking the do block's type.
-/
@[builtin_doElem_elab Lean.Parser.Term.doRepeat] def elabDoRepeat : DoElab := fun stx dec => do
  let `(doElem| repeat%$tk $[$inv?:doLoopInvariant]? $[$var?:doLoopDecreasing]? $seq) := stx
    | throwUnsupportedSyntax
  let mut expanded ←
    `(doElem| for%$tk _ in Loop.mk $[$inv?:doLoopInvariant]? $[$var?:doLoopDecreasing]? do $seq)
  let info ← inferControlInfoSeq seq
  bif !info.breaks then
    bif !(← Meta.isDefEqGuarded dec.resultType (← mkPUnit)) then
      expanded ← `(doElem| do $expanded:doElem; unreachable!)
  Term.withMacroExpansion stx expanded <|
    withRef expanded <| elabDoElem ⟨expanded⟩ dec

/-!
`while c do s`, `repeat s until c` and `unless c do s` decide `c` with `bif` if it is a `Bool` and
with `uif` otherwise. The macros expand to the internal `if_auto%` element, laid out as
`[kw, optional [h, ":"], c, "then", thenSeq, "else", elseSeq]`.
-/

private def mkDoIfAuto (kw : Syntax) (hyp cond thenSeq elseSeq : Syntax) : Syntax :=
  mkNode ``InternalSyntax.doIfAuto
    #[mkAtomFrom kw "if_auto%", hyp, cond, mkAtom "then", thenSeq, mkAtom "else", elseSeq]

@[builtin_macro Lean.Parser.Term.doWhile] def expandDoWhile : Macro
  | `(doElem| while%$tk $cond:doIfProp $[$inv?:doLoopInvariant]? $[$dec?:doLoopDecreasing]? do $seq) => do
    let ifAuto := mkDoIfAuto tk cond.raw[0] cond.raw[1] seq (← `(doSeq| break))
    `(doElem| repeat%$tk $[$inv?:doLoopInvariant]? $[$dec?:doLoopDecreasing]? $(⟨ifAuto⟩):doElem)
  | `(doElem| while%$tk $cond:doIfCond $[$inv?:doLoopInvariant]? $[$dec?:doLoopDecreasing]? do $seq) =>
    `(doElem| repeat%$tk $[$inv?:doLoopInvariant]? $[$dec?:doLoopDecreasing]?
        if $cond:doIfCond then $seq else break)
  | _ => Macro.throwUnsupported

open InternalSyntax in
@[builtin_macro Lean.Parser.Term.doRepeatUntil] def expandDoRepeatUntil : Macro
  | `(doElem| repeat%$tk $[$inv?:doLoopInvariant]? $[$dec?:doLoopDecreasing]? $seq until%$untilTk $cond) => do
    let ifAuto := mkDoIfAuto untilTk mkNullNode cond (← `(doSeq| break)) (← `(doSeq| skip%$untilTk))
    `(doElem| repeat%$tk $[$inv?:doLoopInvariant]? $[$dec?:doLoopDecreasing]?
        do $seq:doSeq
        $(⟨ifAuto⟩):doElem)
  | _ => Macro.throwUnsupported

open InternalSyntax in
@[builtin_doElem_elab Lean.Parser.Term.doUnless] def elabDoUnless : DoElab := fun stx dec => do
  let `(doUnless| unless%$tk $cond do $body) := stx | throwUnsupportedSyntax
  let ifAuto := mkDoIfAuto tk mkNullNode cond (← `(doSeq| skip%$tk)) body
  Term.withMacroExpansion stx ifAuto <| withRef ifAuto <| elabDoElem ⟨ifAuto⟩ dec

end Lean.Elab.Do
