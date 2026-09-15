/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Iterators.Transport
public import Init.Data.Iterators.Consumers.Monadic.Collect
public import Init.Data.Iterators.Consumers.Monadic.Loop
import Init.Data.Iterators.Lemmas.Consumers.Monadic.Collect
import Init.Data.Iterators.Lemmas.Consumers.Monadic.Loop
import Init.Data.Iterators.Lemmas.Monadic.Basic

public section

/-!
# Consumers of iterators transported along an equivalence of state types

Running a consumer on an iterator whose instance was obtained by `Iterator.ofEquiv` is the same as
running it on the original iterator.
-/

namespace Std
open Std.Iterators

variable {α α' β : Type w} {m : Type w → Type w'} [Monad m] [LawfulMonad m]
  [i : Iterator α m β] [Finite α m]

theorem IterM.toArray_ofEquiv (e : α ≃ α') {it : IterM (α := α') m β} :
    letI : Iterator α' m β := Iterator.ofEquiv e i
    it.toArray = (it.mapState e.invFun).toArray := by
  letI : Iterator α' m β := Iterator.ofEquiv e i
  haveI : Finite α' m := Finite.ofEquiv e
  induction it using IterM.inductSteps with | step it ihy ihs
  rw [toArray_eq_match_step, toArray_eq_match_step, step_ofEquiv]
  simp only [map_eq_pure_bind, bind_assoc, pure_bind, Shrink.inflate_deflate,
    PlausibleIterStep.val_ofEquiv]
  apply bind_congr
  intro s
  match s.inflate with
  | .yield it' out h => simp [ihy (it' := it'.mapState e.toFun) (out := out)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .skip it' h => simp [ihs (it' := it'.mapState e.toFun)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .done h => simp

theorem IterM.toList_ofEquiv (e : α ≃ α') {it : IterM (α := α') m β} :
    letI : Iterator α' m β := Iterator.ofEquiv e i
    it.toList = (it.mapState e.invFun).toList := by
  letI : Iterator α' m β := Iterator.ofEquiv e i
  haveI : Finite α' m := Finite.ofEquiv e
  induction it using IterM.inductSteps with | step it ihy ihs
  rw [toList_eq_match_step, toList_eq_match_step, step_ofEquiv]
  simp only [map_eq_pure_bind, bind_assoc, pure_bind, Shrink.inflate_deflate,
    PlausibleIterStep.val_ofEquiv]
  apply bind_congr
  intro s
  match s.inflate with
  | .yield it' out h => simp [ihy (it' := it'.mapState e.toFun) (out := out)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .skip it' h => simp [ihs (it' := it'.mapState e.toFun)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .done h => simp

theorem IterM.toListRev_ofEquiv (e : α ≃ α') {it : IterM (α := α') m β} :
    letI : Iterator α' m β := Iterator.ofEquiv e i
    it.toListRev = (it.mapState e.invFun).toListRev := by
  letI : Iterator α' m β := Iterator.ofEquiv e i
  haveI : Finite α' m := Finite.ofEquiv e
  induction it using IterM.inductSteps with | step it ihy ihs
  rw [toListRev_eq_match_step, toListRev_eq_match_step, step_ofEquiv]
  simp only [map_eq_pure_bind, bind_assoc, pure_bind, Shrink.inflate_deflate,
    PlausibleIterStep.val_ofEquiv]
  apply bind_congr
  intro s
  match s.inflate with
  | .yield it' out h => simp [ihy (it' := it'.mapState e.toFun) (out := out)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .skip it' h => simp [ihs (it' := it'.mapState e.toFun)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .done h => simp

theorem IterM.forIn_ofEquiv {n : Type w → Type w''} [Monad n] [LawfulMonad n]
    [MonadLiftT m n] [LawfulMonadLiftT m n] [IteratorLoop α m n] [LawfulIteratorLoop α m n]
    (e : α ≃ α') {it : IterM (α := α') m β} {γ : Type w} {init : γ} {f : β → γ → n (ForInStep γ)} :
    letI : Iterator α' m β := Iterator.ofEquiv e i
    ∀ [IteratorLoop α' m n] [LawfulIteratorLoop α' m n],
      ForIn.forIn it init f = ForIn.forIn (it.mapState e.invFun) init f := by
  letI : Iterator α' m β := Iterator.ofEquiv e i
  haveI : Finite α' m := Finite.ofEquiv e
  intro _ _
  induction it using IterM.inductSteps generalizing init with | step it ihy ihs
  rw [forIn_eq_match_step, forIn_eq_match_step, step_ofEquiv]
  simp only [liftM_bind, liftM_pure, map_eq_pure_bind, bind_assoc, pure_bind, Shrink.inflate_deflate]
  apply bind_congr
  intro s
  match s.inflate with
  | .yield it' out h =>
    simp only [PlausibleIterStep.ofEquiv]
    apply bind_congr
    intro r
    cases r <;> simp [ihy (it' := it'.mapState e.toFun) (out := out)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .skip it' h =>
    simp [PlausibleIterStep.ofEquiv, ihs (it' := it'.mapState e.toFun)
      ((Iterator.isPlausibleStep_ofEquiv e).mpr (by simpa using h))]
  | .done h => simp [PlausibleIterStep.ofEquiv]

end Std
