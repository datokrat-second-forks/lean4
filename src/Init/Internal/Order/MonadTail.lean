/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Init.Internal.Order.Basic
import all Init.System.ST  -- for `EST.bind` in `MonadTail` instance

set_option linter.missingDocs true

public section

namespace Lean.Order

/--
A *tail monad* is a monad whose bind operation preserves a chosen ordering of the continuation.
Specifically, `MonadTail m` asserts that every `m β` carries a chain-complete partial order (CCPO)
and that `>>=` is monotone in its second (continuation) argument with respect to that order.

This is a weaker requirement than `MonoBind`, which requires monotonicity in both arguments.
`MonadTail` is sufficient for `partial_fixpoint`-like recursive definitions where the
recursive call only appears in the continuation (second argument) of `>>=`.
-/
class MonadTail (m : Type u → Type v) [Bind m] where
  /-- Every `m β` with `Nonempty β` has a chain-complete partial order. -/
  instCCPO β [Nonempty β] : CCPO (m β)
  /-- Bind is monotone in the second (continuation) argument. -/
  bind_mono_right {a : m α} {f₁ f₂ : α → m β} [Nonempty β] (h : ∀ x, f₁ x ⊑ f₂ x) :
    a >>= f₁ ⊑ a >>= f₂

attribute [implicit_reducible] MonadTail.instCCPO
attribute [instance] MonadTail.instCCPO

@[scoped partial_fixpoint_monotone]
theorem MonadTail.monotone_bind_right
    (m : Type u → Type v) [Monad m] [MonadTail m]
    {α β : Type u} [Nonempty β]
    {γ : Sort w} [PartialOrder γ]
    (f : m α) (g : γ → α → m β)
    (hmono : monotone g) :
    monotone (fun (x : γ) => f >>= g x) :=
  fun _ _ h => MonadTail.bind_mono_right (hmono _ _ h)

instance : MonadTail Id where
  instCCPO α :=
    letI : CCPO α := inferInstanceAs (CCPO (FlatOrder (b := Classical.ofNonempty)))
    Id.ccpo
  bind_mono_right h := h _

instance {σ : Type u} {m : Type u → Type v} [Monad m] [MonadTail m] :
    MonadTail (StateT σ m) where
  instCCPO α :=
    letI : CCPO (σ → m (α × σ)) := @instCCPOPi _ _ fun s =>
      haveI : Nonempty σ := ⟨s⟩
      MonadTail.instCCPO _
    StateT.ccpo (σ := σ) (m := m) (α := α)
  bind_mono_right h := by
    intro s
    have : Nonempty σ := ⟨s⟩
    apply MonadTail.bind_mono_right (m := m)
    intro ⟨x, s'⟩
    exact h x s'

instance {ε : Type u} {m : Type u → Type v} [Monad m] [MonadTail m] :
    MonadTail (ExceptT ε m) where
  instCCPO β :=
    letI : CCPO (m (Except ε β)) := MonadTail.instCCPO (Except ε β)
    ExceptT.ccpo
  bind_mono_right h := by
    show ExceptT.run _ ⊑ ExceptT.run _
    apply MonadTail.bind_mono_right (m := m)
    intro x
    cases x with
    | error => exact PartialOrder.rel_refl
    | ok a => exact h a

instance : MonadTail (Except ε) where
  instCCPO β := inferInstanceAs (CCPO (FlatOrder (b := Classical.ofNonempty)))
  bind_mono_right h := by
    cases ‹Except _ _› with
    | error => exact FlatOrder.rel.refl
    | ok a => exact h a

instance {m : Type u → Type v} [Monad m] [MonadTail m] :
    MonadTail (OptionT m) where
  instCCPO β :=
    letI : CCPO (m (Option β)) := MonadTail.instCCPO (Option β)
    OptionT.ccpo
  bind_mono_right h := by
    show OptionT.run _ ⊑ OptionT.run _
    apply MonadTail.bind_mono_right (m := m)
    intro x
    cases x with
    | none => exact PartialOrder.rel_refl
    | some a => exact h a

instance : MonadTail Option where
  instCCPO _ := inferInstance
  bind_mono_right h := MonoBind.bind_mono_right h

instance {ρ : Type u} {m : Type u → Type v} [Monad m] [MonadTail m] :
    MonadTail (ReaderT ρ m) where
  instCCPO α :=
    letI : CCPO (m α) := MonadTail.instCCPO α
    ReaderT.ccpo
  bind_mono_right h := by
    intro r
    apply MonadTail.bind_mono_right (m := m)
    intro x
    exact h x r

set_option linter.missingDocs false in
noncomputable def ST.bot' [Nonempty α] (s : Void σ) : @FlatOrder (ST.Out σ α) (.mk Classical.ofNonempty (Classical.choice ⟨s⟩)) :=
  .mk _ (.mk Classical.ofNonempty (Classical.choice ⟨s⟩))

/-- `x` as an element of the pointwise flat order; the inverse of `ST.ofFlat`. -/
@[expose] noncomputable def ST.toFlat [Nonempty α] (x : ST σ α) :
    ∀ s : Void σ, FlatOrder (ST.bot' (σ := σ) (α := α) s) :=
  fun s => x.run s

/-- An element of the pointwise flat order as an `ST`; the inverse of `ST.toFlat`. -/
@[expose] noncomputable def ST.ofFlat [Nonempty α]
    (x : ∀ s : Void σ, FlatOrder (ST.bot' (σ := σ) (α := α) s)) : ST σ α :=
  ST.mk fun s => x s

instance [Nonempty α] : CCPO (ST σ α) where
  rel x y := ST.toFlat x ⊑ ST.toFlat y
  rel_refl := PartialOrder.rel_refl
  rel_antisymm {x y} h₁ h₂ :=
    have h : ST.toFlat x = ST.toFlat y := PartialOrder.rel_antisymm h₁ h₂
    congrArg ST.mk h
  rel_trans := PartialOrder.rel_trans
  has_csup {c} hchain := by
    have ⟨f, hf⟩ := CCPO.has_csup (α := ∀ s : Void σ, FlatOrder (ST.bot' (σ := σ) (α := α) s))
      (c := fun f => c (ST.ofFlat f)) fun x y hx hy => hchain _ _ hx hy
    exact ⟨ST.ofFlat f, fun x => (hf (ST.toFlat x)).trans
      ⟨fun h y hy => h (ST.toFlat y) hy, fun h y hy => h (ST.ofFlat y) hy⟩⟩

instance : MonadTail (ST σ) where
  instCCPO _ := inferInstance
  bind_mono_right {_ _ a f₁ f₂} _ h := by
    intro w
    change FlatOrder.rel ((ST.bind a f₁).run w) ((ST.bind a f₂).run w)
    simp only [ST.bind]
    apply h

instance [Nonempty α] : CCPO (BaseIO α) :=
  inferInstanceAs (CCPO (ST IO.RealWorld α))

instance : MonadTail BaseIO where
  instCCPO _ := inferInstance
  bind_mono_right h := MonadTail.bind_mono_right (m := ST IO.RealWorld) h

instance [Nonempty ε] : MonadTail (EST ε σ) where
  instCCPO _ := inferInstance
  bind_mono_right h := MonoBind.bind_mono_right h

instance [Nonempty ε] : MonadTail (EIO ε) where
  instCCPO _ := inferInstance
  bind_mono_right h := MonoBind.bind_mono_right h

instance : MonadTail IO :=
  inferInstanceAs (MonadTail (EIO IO.Error))

instance {ω : Type} {σ : Type} {m : Type → Type} [Monad m] [MonadTail m] :
    MonadTail (StateRefT' ω σ m) :=
  inferInstanceAs (MonadTail (ReaderT (ST.Ref ω σ) m))

end Lean.Order
