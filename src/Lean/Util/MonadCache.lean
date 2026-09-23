/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Std.Data.HashMap.Basic

public section

namespace Lean
/-- Interface for caching results.  -/
class MonadCache (α β : Type) (m : Type → Type) where
  findCached? : α → m (Option β)
  cache       : α → β → m Unit

/-- If entry `a := b` is already in the cache, then return `b`.
    Otherwise, execute `b ← f ()`, store `a := b` in the cache and return `b`. -/
@[always_inline, inline]
def checkCache {α β : Type} {m : Type → Type} [MonadCache α β m] [Monad m] (a : α) (f : Unit → m β) : m β := do
  match (← MonadCache.findCached? a) with
  | some b => pure b
  | none   => do
    let b ← f ()
    MonadCache.cache a b
    pure b

instance {α β ρ : Type} {m : Type → Type} [MonadCache α β m] : MonadCache α β (ReaderT ρ m) where
  findCached? a := ReaderT.mk fun _ => MonadCache.findCached? a
  cache a b := ReaderT.mk fun _ => MonadCache.cache a b

@[always_inline]
instance {α β ε : Type} {m : Type → Type} [MonadCache α β m] [Monad m] : MonadCache α β (ExceptT ε m) where
  findCached? a := ExceptT.lift $ MonadCache.findCached? a
  cache a b := ExceptT.lift $ MonadCache.cache a b

/-- Adapter for implementing `MonadCache` interface using `HashMap`s.
    We just have to specify how to extract/modify the `HashMap`. -/
class MonadHashMapCacheAdapter (α β : Type) (m : Type → Type) [BEq α] [Hashable α] where
  getCache    : m (Std.HashMap α β)
  modifyCache : (Std.HashMap α β → Std.HashMap α β) → m Unit

namespace MonadHashMapCacheAdapter

@[always_inline, inline]
def findCached? {α β : Type} {m : Type → Type} [BEq α] [Hashable α] [Monad m] [MonadHashMapCacheAdapter α β m] (a : α) : m (Option β) := do
  let c ← getCache
  pure (c.get? a)

@[always_inline, inline]
def cache {α β : Type} {m : Type → Type} [BEq α] [Hashable α] [MonadHashMapCacheAdapter α β m] (a : α) (b : β) : m Unit :=
  modifyCache fun s => s.insert a b

instance {α β : Type} {m : Type → Type} [BEq α] [Hashable α] [Monad m] [MonadHashMapCacheAdapter α β m] : MonadCache α β m where
  findCached? := MonadHashMapCacheAdapter.findCached?
  cache       := MonadHashMapCacheAdapter.cache

end MonadHashMapCacheAdapter

newtype MonadCacheT {ω} (α β : Type) (m : Type → Type) [STWorld ω m] [BEq α] [Hashable α]
    (σ : Type) := StateRefT (Std.HashMap α β) m σ with toStateRefT

namespace MonadCacheT

variable {ω α β : Type} {m : Type → Type} [STWorld ω m] [BEq α] [Hashable α] [MonadLiftT (ST ω) m] [Monad m]

instance  : MonadHashMapCacheAdapter α β (MonadCacheT α β m) where
  getCache := .mk (get : StateRefT' ..)
  modifyCache f := .mk (modify f : StateRefT' ..)

@[inline] def run {σ} (x : MonadCacheT α β m σ) : m σ :=
  x.toStateRefT.run' ∅

instance : Monad (MonadCacheT α β m) where
  map f x := .mk (f <$> x.toStateRefT)
  pure a := .mk (pure a)
  bind x f := .mk (x.toStateRefT >>= fun a => (f a).toStateRefT)

instance : MonadLift m (MonadCacheT α β m) where
  monadLift x := .mk (monadLift x)

instance (ε) [MonadExceptOf ε m] : MonadExceptOf ε (MonadCacheT α β m) where
  throw e := .mk (throwThe ε e)
  tryCatch x h := .mk (tryCatchThe ε x.toStateRefT fun e => (h e).toStateRefT)

instance : MonadControl m (MonadCacheT α β m) where
  stM γ := stM m (StateRefT' ω (Std.HashMap α β) m) γ
  liftWith f := .mk (MonadControl.liftWith fun runInBase => f fun x => runInBase x.toStateRefT)
  restoreM x := .mk (MonadControl.restoreM x)

instance [MonadFinally m] : MonadFinally (MonadCacheT α β m) where
  tryFinally' x h := .mk (tryFinally' x.toStateRefT fun a => (h a).toStateRefT)

instance [MonadRef m] : MonadRef (MonadCacheT α β m) where
  getRef := .mk getRef
  withRef ref x := .mk (withRef ref x.toStateRefT)

instance [Alternative m] : Alternative (MonadCacheT α β m) where
  failure := .mk failure
  orElse x y := .mk (x.toStateRefT <|> (y ()).toStateRefT)

end MonadCacheT

/-- Similar to `MonadCacheT`, but using `StateT` instead of `StateRefT` -/
newtype MonadStateCacheT (α β : Type) (m : Type → Type) [BEq α] [Hashable α] (σ : Type) :=
  StateT (Std.HashMap α β) m σ with toStateT

namespace MonadStateCacheT

variable {ω α β : Type} {m : Type → Type} [STWorld ω m] [BEq α] [Hashable α] [MonadLiftT (ST ω) m] [Monad m]

instance  : MonadHashMapCacheAdapter α β (MonadStateCacheT α β m) where
  getCache := .mk (get : StateT ..)
  modifyCache f := .mk (modify f : StateT ..)

@[always_inline, inline] def run {σ} (x : MonadStateCacheT α β m σ) : m σ :=
  x.toStateT.run' ∅

instance : Monad (MonadStateCacheT α β m) where
  map f x := .mk (f <$> x.toStateT)
  pure a := .mk (pure a)
  bind x f := .mk (x.toStateT >>= fun a => (f a).toStateT)

instance : MonadLift m (MonadStateCacheT α β m) where
  monadLift x := .mk (monadLift x)

instance (ε) [MonadExceptOf ε m] : MonadExceptOf ε (MonadStateCacheT α β m) where
  throw e := .mk (throwThe ε e)
  tryCatch x h := .mk (tryCatchThe ε x.toStateT fun e => (h e).toStateT)

instance : MonadControl m (MonadStateCacheT α β m) where
  stM γ := stM m (StateT (Std.HashMap α β) m) γ
  liftWith f := .mk (MonadControl.liftWith fun runInBase => f fun x => runInBase x.toStateT)
  restoreM x := .mk (MonadControl.restoreM x)

instance [MonadFinally m] : MonadFinally (MonadStateCacheT α β m) where
  tryFinally' x h := .mk (tryFinally' x.toStateT fun a => (h a).toStateT)

instance [MonadRef m] : MonadRef (MonadStateCacheT α β m) where
  getRef := .mk getRef
  withRef ref x := .mk (withRef ref x.toStateT)

end MonadStateCacheT

end Lean
