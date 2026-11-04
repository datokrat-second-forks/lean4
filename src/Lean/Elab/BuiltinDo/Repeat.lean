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
  if !info.breaks then
    if !(← Meta.isDefEqGuarded dec.resultType (← mkPUnit)) then
      expanded ← `(doElem| do $expanded:doElem; unreachable!)
  Term.withMacroExpansion stx expanded <|
    withRef expanded <| elabDoElem ⟨expanded⟩ dec

/-!
`while c do s` and `repeat s until c` decide `c` with `bif` if it is a `Bool` and with `uif`
otherwise. The macros expand to the internal `if_auto%` element, laid out as
`[kw, optional [h, ":"], c, "then", thenSeq, "else", elseSeq]`, whose elaborator picks `bif` or
`uif` once nested actions in `c` are lifted.
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

/--
Whether the loop condition `c` is a `Bool`. It is elaborated without expected type and the state is
restored afterwards, so `bif`/`uif` elaborates it again. Conditions whose type is not known to be
`Bool` count as propositions, as in an `if`.
-/
private def isBoolCond (c : Term) : TermElabM Bool := do
  let s ← saveState
  try
    let e ← Term.withoutErrToSorry <| Term.elabTerm c none
    Term.synthesizeSyntheticMVars (postpone := .yes)
    let ty ← Meta.whnfR (← instantiateMVars (← Meta.inferType e))
    return ty.isConstOf ``Bool
  catch _ =>
    return false
  finally
    s.restore

@[builtin_doElem_elab Lean.Parser.Term.InternalSyntax.doIfAuto] def elabDoIfAuto : DoElab := fun stx dec => do
  let stx := stx.raw
  let isBool ← isBoolCond ⟨stx[2]⟩
  let stxNew := mkNode (if isBool then ``doBIf else ``doUIf)
    #[mkAtomFrom stx[0] (if isBool then "bif" else "uif"), mkNode ``doIfProp #[stx[1], stx[2]],
      mkAtom "then", stx[4], mkNullNode, mkNullNode #[mkAtom "else", stx[6]]]
  Term.withMacroExpansion stx stxNew <| withRef stxNew <| elabDoElem ⟨stxNew⟩ dec

@[builtin_doElem_control_info Lean.Parser.Term.InternalSyntax.doIfAuto]
def controlInfoDoIfAuto : ControlInfoHandler := fun stx => do
  return (← inferControlInfoSeq ⟨stx.raw[4]⟩).alternative (← inferControlInfoSeq ⟨stx.raw[6]⟩)

end Lean.Elab.Do
