/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Init.Data.Iterators.Basic
public import Init.Data.Function

set_option linter.missingDocs true

public section

/-!
# Transport of iterator instances along equivalences of state types

If `Lean.CanonicalEquivalence α' α`, then an `Iterator α m β` instance yields an `Iterator α' m β` instance whose steps
are those of the original iterator with the states converted. `Finite` and `Productive` are carried
along. This is how a `newtype` wrapping an iterator state type obtains its instances.
-/

namespace Std
open Std.Iterators

variable {α α' β : Type w} {m : Type w → Type w'}

/-- Converts the internal state of an iterator with `f`. -/
@[always_inline, inline, expose]
def IterM.mapState (f : α → α') (it : IterM (α := α) m β) : IterM (α := α') m β :=
  ⟨f it.internalState⟩

@[simp]
theorem IterM.mapState_symm_mapState (e : Lean.CanonicalEquivalence α α') {it : IterM (α := α) m β} :
    (it.mapState e.toFun).mapState e.invFun = it :=
  congrArg IterM.mk (e.left_inv it.internalState)

@[simp]
theorem IterM.mapState_mapState_symm (e : Lean.CanonicalEquivalence α α') {it : IterM (α := α') m β} :
    (it.mapState e.invFun).mapState e.toFun = it :=
  congrArg IterM.mk (e.right_inv it.internalState)

@[simp]
theorem IterM.mapState_symm_comp_mapState (e : Lean.CanonicalEquivalence α α') :
    IterM.mapState (m := m) (β := β) e.invFun ∘ IterM.mapState e.toFun = id :=
  funext fun _ => IterM.mapState_symm_mapState e

@[simp]
theorem IterM.mapState_comp_mapState_symm (e : Lean.CanonicalEquivalence α α') :
    IterM.mapState (m := m) (β := β) e.toFun ∘ IterM.mapState e.invFun = id :=
  funext fun _ => IterM.mapState_mapState_symm e

namespace Iterators

/-- The plausibility relation of `Iterator.ofEquiv`: a step is plausible if it is plausible for
the original iterator after converting the states back. -/
@[expose]
def Iterator.IsPlausibleStepOfEquiv (e : Lean.CanonicalEquivalence α' α) (i : Iterator α m β)
    (it : IterM (α := α') m β) (step : IterStep (IterM (α := α') m β) β) : Prop :=
  i.IsPlausibleStep (it.mapState e.toFun) (step.mapIterator (IterM.mapState e.toFun))

/-- Converts the states in a plausible step of the original iterator. -/
@[always_inline, inline, expose]
def PlausibleIterStep.ofEquiv (e : Lean.CanonicalEquivalence α' α) {i : Iterator α m β}
    {it : IterM (α := α') m β} (s : PlausibleIterStep (i.IsPlausibleStep (it.mapState e.toFun))) :
    PlausibleIterStep (Iterator.IsPlausibleStepOfEquiv e i it) :=
  ⟨s.val.mapIterator (IterM.mapState e.invFun), by
    simpa [Iterator.IsPlausibleStepOfEquiv] using s.property⟩

@[simp]
theorem PlausibleIterStep.val_ofEquiv (e : Lean.CanonicalEquivalence α' α) {i : Iterator α m β}
    {it : IterM (α := α') m β} {s : PlausibleIterStep (i.IsPlausibleStep (it.mapState e.toFun))} :
    (PlausibleIterStep.ofEquiv e s).val = s.val.mapIterator (IterM.mapState e.invFun) :=
  rfl

/-- Moves an `Iterator` instance along an equivalence of state types. -/
@[always_inline]
protected abbrev Iterator.ofEquiv [Functor m] (e : Lean.CanonicalEquivalence α' α)
    (i : Iterator α m β) : Iterator α' m β where
  IsPlausibleStep := Iterator.IsPlausibleStepOfEquiv e i
  step it := (fun s => Shrink.deflate (PlausibleIterStep.ofEquiv e s.inflate)) <$>
    i.step (it.mapState e.toFun)

theorem Iterator.isPlausibleStep_ofEquiv [Functor m] (e : Lean.CanonicalEquivalence α' α)
    {i : Iterator α m β} {it : IterM (α := α') m β} {step : IterStep (IterM (α := α') m β) β} :
    @Iterator.IsPlausibleStep α' m β (Iterator.ofEquiv e i) it step ↔
      i.IsPlausibleStep (it.mapState e.toFun) (step.mapIterator (IterM.mapState e.toFun)) :=
  Iff.rfl

/-- `Finite` is preserved by `Iterator.ofEquiv`. -/
theorem Finite.ofEquiv [Functor m] (e : Lean.CanonicalEquivalence α' α) [i : Iterator α m β]
    [Finite α m] : @Finite α' m β (Iterator.ofEquiv e i) :=
  letI := Iterator.ofEquiv e i
  Finite.of_finitenessRelation {
    Rel := InvImage IterM.IsPlausibleSuccessorOf (IterM.mapState e.toFun)
    wf := InvImage.wf _ Finite.wf
    subrelation := fun {it it'} ⟨step, hs, hp⟩ =>
      ⟨step.mapIterator (IterM.mapState e.toFun), by cases step <;> simp_all, hp⟩ }

/-- `Productive` is preserved by `Iterator.ofEquiv`. -/
theorem Productive.ofEquiv [Functor m] (e : Lean.CanonicalEquivalence α' α) [i : Iterator α m β] [Productive α m] :
    @Productive α' m β (Iterator.ofEquiv e i) :=
  letI := Iterator.ofEquiv e i
  Productive.of_productivenessRelation {
    Rel := InvImage IterM.IsPlausibleSkipSuccessorOf (IterM.mapState e.toFun)
    wf := InvImage.wf _ Productive.wf
    subrelation := fun h => h }

end Iterators

theorem IterM.step_ofEquiv [Functor m] (e : Lean.CanonicalEquivalence α' α) {i : Iterator α m β}
    {it : IterM (α := α') m β} :
    @IterM.step α' m β (Iterator.ofEquiv e i) it =
      (fun s => Shrink.deflate (PlausibleIterStep.ofEquiv e s.inflate)) <$>
        @IterM.step α m β i (it.mapState e.toFun) :=
  rfl

end Std
