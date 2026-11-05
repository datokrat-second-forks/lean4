/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Meta.Tactic.Simp.Types
public import Lean.Meta.Match.MatcherApp.Transform
public import Lean.Data.Array
import Lean.Meta.Match.Rewrite
import Lean.Meta.Tactic.Simp.Rewrite
import Lean.Meta.Tactic.Assumption
public import Lean.Meta.Tactic.BoolToProp

public section

namespace Lean.Elab.Tactic.Do

open Lean Elab Tactic Meta

inductive SplitInfo where
  | ite (e : Expr)
  | dite (e : Expr)
  | cond (e : Expr)
  | uite (e : Expr)
  | udite (e : Expr)
  | dcond (e : Expr)
  | matcher (matcherApp : MatcherApp)
  deriving Inhabited

namespace SplitInfo

def resTy (info : SplitInfo) : Option Expr := match info with
  | ite e => e.getArg! 0
  | dite e => e.getArg! 0
  | cond e => e.getArg! 0
  | uite e => e.getArg! 0
  | udite e => e.getArg! 0
  | dcond e => e.getArg! 0
  -- For a matcher, the motive has type `(discr1 : α) → ... → (discrN : α) → Type`.
  -- We want to return `Type` component and fail if it depends on any of the discriminant values.
  | matcher matcherApp => do
    let motive := matcherApp.motive
    let e : Expr ← Nat.repeat (n := matcherApp.discrInfos.size) (a := some motive) fun e =>
      match e with
        | some (.lam _ _ e _) => e
        | _ => none
    unless e.looseBVarRange = motive.looseBVarRange do none
    return e

/--
A list of pairs `(numParams, alt)` per match alternative, where `numParams` is the
number of parameters of the alternative and `alt` is the alternative.
-/
def altInfos (info : SplitInfo) : Array (Nat × Expr) := match info with
  | ite e => #[(0, e.getArg! 3), (0, e.getArg! 4)]
  | dite e => #[(1, e.getArg! 3), (1, e.getArg! 4)]
  | cond e => #[(0, e.getArg! 2), (0, e.getArg! 3)]
  | uite e => #[(0, e.getArg! 3), (0, e.getArg! 4)]
  | udite e => #[(1, e.getArg! 3), (1, e.getArg! 4)]
  | dcond e => #[(1, e.getArg! 2), (1, e.getArg! 3)]
  | matcher matcherApp => matcherApp.altNumParams.mapIdx fun idx numParams =>
      (numParams, matcherApp.alts[idx]!)

/-- The expression represented by a `SplitInfo`. -/
def expr : SplitInfo → Expr
  | .ite e => e
  | .dite e => e
  | .cond e => e
  | .uite e => e
  | .udite e => e
  | .dcond e => e
  | .matcher matcherApp => matcherApp.toExpr

/--
Introduces fvars for all varying parts of a `SplitInfo` and provides the abstract
`SplitInfo` and fvars to the continuation.

For `ite`/`dite`, introduces `c : Prop`, `dec : Decidable c`, `t : mα` (or `t : c → mα`),
`e : mα` (or `e : ¬c → mα`), and likewise with `dec : UDecidable c` for `uite`/`udite`.
For `cond`, introduces `c : Bool`, `t : mα`, `e : mα`.
For `dcond`, introduces `c : Bool`, `t : c = true → mα`, `e : c = false → mα`.
For `matcher`, introduces discriminant fvars and alternative fvars, builds a non-dependent
motive `fun _ ... _ => mα`, and adjusts matcher universe levels.

The abstract `SplitInfo` satisfies `abstractInfo.expr = abstractProgram`.

For `matcher`, the abstract `MatcherApp` stores eta-expanded fvar alts so that
`splitWith`/`matcherApp.transform` can `instantiateLambda` them directly (no patching needed).
Since eta-expanded alts like `fun n => alt n` can cause expensive higher-order unification in
backward rule patterns, callers building backward rules should eta-reduce them first (e.g.
via `Expr.eta` on the alt arguments of `abstractInfo.expr`).
-/
def withAbstract {n} {α} [MonadLiftT MetaM n] [MonadControlT MetaM n] [Monad n] [Inhabited α]
    (info : SplitInfo) (resTy : Expr)
    (k : (abstractInfo : SplitInfo) → (splitFVars : Array Expr) → n α) : n α :=
  match info with
  | .ite _ =>
    withLocalDeclD `c (mkSort 0) fun c =>
    withLocalDeclD `dec (mkApp (mkConst ``Decidable) c) fun dec =>
    withLocalDeclD `t resTy fun t =>
    withLocalDeclD `e resTy fun e => do
    let u ← liftMetaM <| getLevel resTy
    k (.ite <| mkApp5 (mkConst ``_root_.ite [u]) resTy c dec t e) #[c, dec, t, e]
  | .dite _ =>
    withLocalDeclD `c (mkSort 0) fun c =>
    withLocalDeclD `dec (mkApp (mkConst ``Decidable) c) fun dec => do
    let tTy ← liftMetaM <| mkArrow c resTy
    let eTy ← liftMetaM <| mkArrow (mkNot c) resTy
    withLocalDeclD `t tTy fun t =>
    withLocalDeclD `e eTy fun e => do
    let u ← liftMetaM <| getLevel resTy
    k (.dite <| mkApp5 (mkConst ``_root_.dite [u]) resTy c dec t e) #[c, dec, t, e]
  | .cond _ =>
    withLocalDeclD `c (mkConst ``Bool) fun c =>
    withLocalDeclD `t resTy fun t =>
    withLocalDeclD `e resTy fun e => do
    let u ← liftMetaM <| getLevel resTy
    k (.cond <| mkApp4 (mkConst ``_root_.cond [u]) resTy c t e) #[c, t, e]
  | .uite _ =>
    withLocalDeclD `c (mkSort 0) fun c =>
    withLocalDeclD `dec (mkApp (mkConst ``UDecidable) c) fun dec =>
    withLocalDeclD `t resTy fun t =>
    withLocalDeclD `e resTy fun e => do
    let u ← liftMetaM <| getLevel resTy
    k (.uite <| mkApp5 (mkConst ``UDecidable.ite [u]) resTy c dec t e) #[c, dec, t, e]
  | .udite _ =>
    withLocalDeclD `c (mkSort 0) fun c =>
    withLocalDeclD `dec (mkApp (mkConst ``UDecidable) c) fun dec => do
    let tTy ← liftMetaM <| mkArrow c resTy
    let eTy ← liftMetaM <| mkArrow (mkNot c) resTy
    withLocalDeclD `t tTy fun t =>
    withLocalDeclD `e eTy fun e => do
    let u ← liftMetaM <| getLevel resTy
    k (.udite <| mkApp5 (mkConst ``UDecidable.dite [u]) resTy c dec t e) #[c, dec, t, e]
  | .dcond _ =>
    withLocalDeclD `c (mkConst ``Bool) fun c => do
    let tTy ← liftMetaM <| mkArrow (← mkEq c (mkConst ``Bool.true)) resTy
    let eTy ← liftMetaM <| mkArrow (← mkEq c (mkConst ``Bool.false)) resTy
    withLocalDeclD `t tTy fun t =>
    withLocalDeclD `e eTy fun e => do
    let u ← liftMetaM <| getLevel resTy
    k (.dcond <| mkApp4 (mkConst ``Bool.dcond [u]) resTy c t e) #[c, t, e]
  | .matcher matcherApp => do
    -- Abstract the discriminants as a dependent telescope: a later discriminant's type may mention an earlier one.
    let discrDecls := matcherApp.discrs.mapIdx fun i discr =>
      ((`discr).appendIndexAfter (i+1), fun (prior : Array Expr) => liftMetaM do
        let mut ty ← inferType discr
        for j in *...i do
          uif matcherApp.discrs[j]!.isFVar then
            ty := ty.replaceFVar matcherApp.discrs[j]! prior[j]!
        return ty)
    withLocalDeclsD discrDecls fun discrs => do
    -- Non-dependent motive: fun _ ... _ => mα
    let motive ← liftMetaM <| lambdaTelescope matcherApp.motive fun motiveArgs _ =>
      mkLambdaFVars motiveArgs resTy
    -- The matcher's universe levels include a `uElimPos` slot for the elimination target level.
    -- Our abstract motive `fun _ ... _ => mα` may target a different level than the original
    -- dependent motive, so we update `matcherLevels[uElimPos]` to `getLevel mα`.
    let matcherLevels ← match matcherApp.uElimPos? with
      | none => pure matcherApp.matcherLevels
      | some pos => do
        let uElim ← liftMetaM <| getLevel resTy
        pure <| matcherApp.matcherLevels.set! pos uElim
    -- Build partial application to infer alt types
    let matcherPartial := mkAppN (mkConst matcherApp.matcherName matcherLevels.toList) matcherApp.params
    let matcherPartial := mkApp matcherPartial motive
    let matcherPartial := mkAppN matcherPartial discrs
    let origAltTypes ← liftMetaM <| inferArgumentTypesN matcherApp.alts.size matcherPartial
    let altNamesTypes := origAltTypes.mapIdx fun i ty => ((`alt).appendIndexAfter (i+1), ty)
    withLocalDeclsDND altNamesTypes fun alts => do
    -- Eta-expand fvar alts so `splitWith`/`matcherApp.transform` can `instantiateLambda` them.
    let abstractMatcherApp : MatcherApp := {
      matcherApp with
      matcherLevels := matcherLevels
      discrs        := discrs
      motive        := motive
      alts          := (← liftMetaM <| alts.mapM etaExpand)
      remaining     := #[]
    }
    k (.matcher abstractMatcherApp) (discrs ++ alts)

/--
Builds a function of type `c = value → resTy` for a `Bool.dcond` branch, passing the case
hypothesis `h : c = value` to `k`. If `c = value` has a propositional view `p` (see
`boolCondToProp?`), `h` is an implementation detail and the branch also gets `h : p`, so that the
verification conditions mention `p`.
-/
def withBoolCaseHyp {n} [MonadLiftT MetaM n] [MonadControlT MetaM n] [Monad n]
    (name : Name) (c : Expr) (value : Bool) (k : Expr → n Expr) : n Expr := do
  let eq ← liftMetaM <| mkEq c (toExpr value)
  match ← liftMetaM <| boolCondToProp? c value with
  | none =>
    withLocalDecl name .default eq fun h => do mkLambdaFVars #[h] (← k h)
  | some (p, pr) =>
    withLocalDecl name .default eq (kind := .implDetail) fun h => do
      let body ← withLocalDecl name .default p fun hp => do mkLambdaFVars #[hp] (← k h)
      mkLambdaFVars #[h] (mkApp body (← liftMetaM <| mkEqMP pr h))

def splitWith
  {n} [MonadLiftT MetaM n] [MonadControlT MetaM n] [Monad n] [MonadError n] [MonadEnv n] [MonadLog n]
  [AddMessageContext n] [MonadOptions n]
  (info : SplitInfo) (resTy : Expr) (onAlt : Name → Expr → Nat → MatcherApp.TransformAltFVars → n Expr) (useSplitter := false) : n Expr := match info with
  | ite e => do
    let u ← getLevel resTy
    let c := e.getArg! 1
    let h := e.getArg! 2
    uif useSplitter then -- dite is the "splitter" for ite
      let n ← liftMetaM <| mkFreshUserName `h
      let t ← withLocalDecl n .default c fun h => do mkLambdaFVars #[h] (← onAlt `isTrue resTy 0 { fields := #[h] })
      let e ← withLocalDecl n .default (mkNot c) fun h => do mkLambdaFVars #[h] (← onAlt `isFalse resTy 1 { fields := #[h] })
      return mkApp5 (mkConst ``_root_.dite [u]) resTy c h t e
    else
      let t ← onAlt `isTrue resTy 0 { fields := #[] }
      let e ← onAlt `isFalse resTy 1 { fields := #[] }
      return mkApp5 (mkConst ``_root_.ite [u]) resTy c h t e
  | dite e => do
    let u ← getLevel resTy
    let c := e.getArg! 1
    let h := e.getArg! 2
    let n ← liftMetaM <| mkFreshUserName `h
    let t ← withLocalDecl n .default c fun h => do mkLambdaFVars #[h] (← onAlt `isTrue resTy 0 { args := #[h], fields := #[h] })
    let e ← withLocalDecl n .default (mkNot c) fun h => do mkLambdaFVars #[h] (← onAlt `isFalse resTy 1 { args := #[h], fields := #[h] })
    return mkApp5 (mkConst ``_root_.dite [u]) resTy c h t e
  | cond e => do
    let u ← getLevel resTy
    let c := e.getArg! 1
    uif useSplitter then -- Bool.dcond is the "splitter" for cond
      let n ← liftMetaM <| mkFreshUserName `h
      let t ← withBoolCaseHyp n c true fun h => onAlt `isTrue resTy 0 { fields := #[h] }
      let e ← withBoolCaseHyp n c false fun h => onAlt `isFalse resTy 1 { fields := #[h] }
      return mkApp4 (mkConst ``Bool.dcond [u]) resTy c t e
    else
      let t ← onAlt `isTrue resTy 0 { fields := #[] }
      let e ← onAlt `isFalse resTy 1 { fields := #[] }
      return mkApp4 (mkConst ``_root_.cond [u]) resTy c t e
  | uite e => do
    let u ← getLevel resTy
    let c := e.getArg! 1
    let h := e.getArg! 2
    uif useSplitter then -- UDecidable.dite is the "splitter" for UDecidable.ite
      let n ← liftMetaM <| mkFreshUserName `h
      let t ← withLocalDecl n .default c fun h => do mkLambdaFVars #[h] (← onAlt `isTrue resTy 0 { fields := #[h] })
      let e ← withLocalDecl n .default (mkNot c) fun h => do mkLambdaFVars #[h] (← onAlt `isFalse resTy 1 { fields := #[h] })
      return mkApp5 (mkConst ``UDecidable.dite [u]) resTy c h t e
    else
      let t ← onAlt `isTrue resTy 0 { fields := #[] }
      let e ← onAlt `isFalse resTy 1 { fields := #[] }
      return mkApp5 (mkConst ``UDecidable.ite [u]) resTy c h t e
  | udite e => do
    let u ← getLevel resTy
    let c := e.getArg! 1
    let h := e.getArg! 2
    let n ← liftMetaM <| mkFreshUserName `h
    let t ← withLocalDecl n .default c fun h => do mkLambdaFVars #[h] (← onAlt `isTrue resTy 0 { args := #[h], fields := #[h] })
    let e ← withLocalDecl n .default (mkNot c) fun h => do mkLambdaFVars #[h] (← onAlt `isFalse resTy 1 { args := #[h], fields := #[h] })
    return mkApp5 (mkConst ``UDecidable.dite [u]) resTy c h t e
  | dcond e => do
    let u ← getLevel resTy
    let c := e.getArg! 1
    let n ← liftMetaM <| mkFreshUserName `h
    let t ← withBoolCaseHyp n c true fun h => onAlt `isTrue resTy 0 { args := #[h], fields := #[h] }
    let e ← withBoolCaseHyp n c false fun h => onAlt `isFalse resTy 1 { args := #[h], fields := #[h] }
    return mkApp4 (mkConst ``Bool.dcond [u]) resTy c t e
  | matcher matcherApp => do
    -- Do not abstract `match h :` discriminants: the alternatives' equality binders
    -- `h : discr = pattern` mention the discriminant, so substituting it in the motive would be
    -- ill-typed. These equalities let `rwMatcher` discharge the congruence hypotheses instead.
    let mask := matcherApp.discrs.mapIdx fun i d =>
      d.isFVar && matcherApp.discrInfos[i]?.all (·.hName?.isNone)
    let maskedDiscrs := Array.mask mask matcherApp.discrs
    let absMotiveBody ← resTy.abstractM maskedDiscrs
    (·.toExpr) <$> matcherApp.transform
      (useSplitter := useSplitter) (addEqualities := useSplitter) -- (freshenNames := true)
      (onMotive := fun xs _body => pure (absMotiveBody.instantiateRev (Array.mask mask xs)))
      (onAlt := fun idx expAltType altFVars _alt => do
        onAlt ((`h).appendIndexAfter (idx+1)) expAltType idx altFVars)

def simpDiscrs? (info : SplitInfo) (e : Expr) : SimpM (Option Simp.Result) := match info with
  | dite _ | ite _ => return none -- Tricky because we need to simultaneously rewrite  `[Decidable c]`
  | cond _ | dcond _ | uite _ | udite _ => return none
  | matcher matcherApp => Simp.simpMatchDiscrs? matcherApp.toMatcherInfo e

end SplitInfo

def getSplitInfo? (e : Expr) : MetaM (Option SplitInfo) := do
  uif e.isAppOf ``ite then
    return some (SplitInfo.ite e)
  uif e.isAppOf ``dite then
    return some (SplitInfo.dite e)
  uif e.isAppOf ``cond then
    return some (SplitInfo.cond e)
  uif e.isAppOf ``UDecidable.ite then
    return some (SplitInfo.uite e)
  uif e.isAppOf ``UDecidable.dite then
    return some (SplitInfo.udite e)
  uif e.isAppOf ``Bool.dcond then
    return some (SplitInfo.dcond e)
  if let .some matcherApp ← matchMatcherApp? (alsoCasesOn := true) e then
    return some (SplitInfo.matcher matcherApp)
  else
    return none

def rwIfOrMatcher (idx : Nat) (e : Expr) : MetaM Simp.Result := do
  uif e.isAppOf ``ite || e.isAppOf ``dite || e.isAppOf ``UDecidable.ite
      || e.isAppOf ``UDecidable.dite then
    let c := e.getArg! 1
    let c := uif idx = 0 then c else mkNot c
    let .some fv ← findLocalDeclWithType? c
      | throwError "Failed to find proof for if condition {c}"
    rwIfWith (mkFVar fv) e
  else uif e.isAppOf ``cond || e.isAppOf ``Bool.dcond then
    let c := e.getArg! 1
    let h ← mkEq c (mkConst (uif idx = 0 then ``Bool.true else ``Bool.false))
    if let .some fv ← findLocalDeclWithType? h then
      return ← rwIfWith (mkFVar fv) e
    -- `withBoolCaseHyp` may have introduced the propositional view instead.
    if let some (p, pr) ← boolCondToProp? c (idx = 0) then
      if let .some fv ← findLocalDeclWithType? p then
        return ← rwIfWith (← mkEqMPR pr (mkFVar fv)) e
    throwError "Failed to find proof for cond condition {h}"
  else
    rwMatcher idx e
