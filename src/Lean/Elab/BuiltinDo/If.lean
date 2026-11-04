/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.Do.Basic
meta import Lean.Parser.Do
import Lean.Elab.BuiltinDo.Basic

public section

namespace Lean.Elab.Do

open Lean.Parser.Term
open Lean.Meta

@[builtin_doElem_elab Lean.Parser.Term.doIf] def elabDoIf : DoElab := fun stx dec => do
  let `(doIf|if $cond:doIfCond then $thenSeq else $elseSeq) := stx | throwUnsupportedSyntax
  let info := (← inferControlInfoSeq thenSeq).alternative (← inferControlInfoSeq elseSeq)
  dec.withDuplicableCont info fun dec => do
  match cond with
  | `(doIfCond|$cond) => elabIte cond thenSeq elseSeq dec
  | `(doIfCond|$h : $cond) => elabDite h cond thenSeq elseSeq dec
  | _ => throwUnsupportedSyntax
where
  elabIte cond thenSeq elseSeq dec := do
    -- It turned out to be far more reliable to offload as much work as possible to the App
    -- elaborator. However, for Lake.Package.mkBuildArchiveFacetConfig, we still need to postpone.
    doElabToSyntax "then branch of if with condition {cond}" (elabDoSeq thenSeq dec) fun then_ => do
    doElabToSyntax "else branch of if with condition {cond}" (elabDoSeq elseSeq dec) fun else_ => do
    let mγ ← mkMonadApp (← read).doBlockResultType
    Term.elabTermEnsuringType (← `(if $cond then $then_ else $else_)) mγ

  elabDite h cond thenSeq elseSeq dec := do
    let elabDiteBranch (then_ : Bool) : DoElabM Expr := do
      elabDoSeq (if then_ then thenSeq else elseSeq) dec
    doElabToSyntax "then branch of if with condition {cond}" (elabDiteBranch true) fun then_ => do
    doElabToSyntax "else branch of if with condition {cond}" (elabDiteBranch false) fun else_ => do
    let mγ ← mkMonadApp (← read).doBlockResultType
    match h with
    | `(_%$tk) => Term.elabTermEnsuringType (← `(if _%$tk : $cond then $then_ else $else_)) mγ
    | `($h:ident) => Term.elabTermEnsuringType (← `(if $h:ident : $cond then $then_ else $else_)) mγ
    | _ => throwUnsupportedSyntax

/-!
`uif` and `bif` in `do` blocks. Their syntax is taken apart by position: the layout is
`[kw, cond, "then", thenSeq, elseIfs, else?]`, as for `doIf`, where each `elseIfs` entry is
`[[else, kw], cond, "then", seq]` and `else?` is `["else", seq]` if present. `cond` is a `doIfProp`
(`[optional [h, ":"], c]`), or a `doIfCond` in an `if` or `else if`.
-/

private def mkDoSeqOfElem (elem : Syntax) : MacroM Syntax :=
  `(doSeq| $(⟨elem⟩):doElem)

open InternalSyntax in
/--
Rewrites an `if`/`uif`/`bif` chain into nested canonical elements, i.e. `if`/`uif`/`bif` with a
`doIfProp` condition and an `else`, or a `match` for `if let`. The links `else if`, `else uif` and
`else bif` may follow each other in any order, and a missing `else` becomes `skip`.
-/
private def expandDoIfChain : Macro := fun stx => do
  let elseIfs := stx[4].getArgs
  if elseIfs.isEmpty && !stx[5].isNone && !stx[1].isOfKind ``doIfLet then
    Macro.throwUnsupported
  let kindOfKw (kw : Syntax) : SyntaxNodeKind :=
    match kw.getAtomVal with
    | "uif" => ``doUIf
    | "bif" => ``doBIf
    | _ => ``doIf
  let branches := #[(stx.getKind, stx[0], stx[1], stx[3])] ++
    elseIfs.map fun g => (kindOfKw g[0][1], g[0][1], g[1], g[3])
  let mut e : Syntax ← if stx[5].isNone then `(doSeq| skip%$(stx[0])) else pure stx[5][1]
  let mut eIsSeq := true
  for (k, kw, cond, t) in branches.reverse do
    unless eIsSeq do e ← mkDoSeqOfElem e
    eIsSeq := false
    if k == ``doIf then
      e ← match cond with
        | `(doIfCond|let $pat := $d) => `(doElem| match $d:term with | $pat:term => $(⟨t⟩) | _ => $(⟨e⟩))
        | `(doIfCond|let $pat ← $d)  => `(doElem| match ← $d:term with | $pat:term => $(⟨t⟩) | _ => $(⟨e⟩))
        | `(doIfCond|$cond:doIfProp) => `(doElem| if%$kw $cond:doIfProp then $(⟨t⟩) else $(⟨e⟩))
        | _                          => Macro.throwUnsupported
    else
      e := Syntax.node stx.getHeadInfo k
        #[kw, cond, mkAtom "then", t, mkNullNode, mkNullNode #[mkAtom "else", e]]
  return e

@[builtin_macro Lean.Parser.Term.doIf] def expandDoIf : Macro := expandDoIfChain
@[builtin_macro Lean.Parser.Term.doUIf] def expandDoUIf : Macro := expandDoIfChain
@[builtin_macro Lean.Parser.Term.doBIf] def expandDoBIf : Macro := expandDoIfChain

private def controlInfoDoCond : ControlInfoHandler := fun stx => do
  if !stx.raw[4].getArgs.isEmpty || stx.raw[5].isNone then throwUnsupportedSyntax
  return (← inferControlInfoSeq ⟨stx.raw[3]⟩).alternative (← inferControlInfoSeq ⟨stx.raw[5][1]⟩)

@[builtin_doElem_control_info Lean.Parser.Term.doUIf]
def controlInfoDoUIf : ControlInfoHandler := controlInfoDoCond

@[builtin_doElem_control_info Lean.Parser.Term.doBIf]
def controlInfoDoBIf : ControlInfoHandler := controlInfoDoCond

/--
Elaborates a canonical `uif`/`bif` (no `else uif` chain, with `else`). `mkTerm` receives the
elaborated branches and builds the term.
-/
private def elabDoCond (stx : Syntax) (dec : DoElemCont)
    (mkTerm : Term → Term → TermElabM Term) : DoElabM Expr := do
  if !stx[4].getArgs.isEmpty || stx[5].isNone then throwUnsupportedSyntax
  let thenSeq : DoSeq := ⟨stx[3]⟩
  let elseSeq : DoSeq := ⟨stx[5][1]⟩
  let cond := stx[1]
  let info := (← inferControlInfoSeq thenSeq).alternative (← inferControlInfoSeq elseSeq)
  dec.withDuplicableCont info fun dec => do
  doElabToSyntax m!"then branch of {stx[0]} with condition {cond}" (elabDoSeq thenSeq dec) fun then_ => do
  doElabToSyntax m!"else branch of {stx[0]} with condition {cond}" (elabDoSeq elseSeq dec) fun else_ => do
  let mγ ← mkMonadApp (← read).doBlockResultType
  Term.elabTermEnsuringType (← mkTerm then_ else_) mγ

/-- The hypothesis name of a `doIfProp`, if it has one. -/
private def doIfPropHyp? (prop : Syntax) : Option Term :=
  if prop[0].isNone then none
  else
    let h := prop[0][0]
    some ⟨if h.isOfKind ``Lean.binderIdent then h[0] else h⟩

@[builtin_doElem_elab Lean.Parser.Term.doUIf] def elabDoUIf : DoElab := fun stx dec => do
  let prop := stx.raw[1]
  let c : Term := ⟨prop[1]⟩
  elabDoCond stx dec fun then_ else_ =>
    match doIfPropHyp? prop with
    | none => `(UDecidable.ite $c $then_ $else_)
    | some h => `(UDecidable.dite $c (fun $h => $then_) (fun $h => $else_))

@[builtin_doElem_elab Lean.Parser.Term.doBIf] def elabDoBIf : DoElab := fun stx dec => do
  let prop := stx.raw[1]
  let c : Term := ⟨prop[1]⟩
  elabDoCond stx dec fun then_ else_ =>
    match doIfPropHyp? prop with
    | none => `(cond $c $then_ $else_)
    | some h => `(Bool.dcond $c (fun $h => $then_) (fun $h => $else_))
