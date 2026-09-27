/-!
Tests the congruences for `LawfulFunctor`, `LawfulApplicative`, `LawfulMonad` and
`LawfulMonadLift`: lawfulness moves along the same equivalences as the instances it is about,
including through a chain of `newtype`s.
-/

newtype M (α : Type) where
  run : StateT Nat Id α

instance : Monad M := inferInstanceAs (Monad (StateT Nat Id))
instance : LawfulMonad M := inferInstanceAs (LawfulMonad (StateT Nat Id))

example : LawfulApplicative M := inferInstance
example : LawfulFunctor M := inferInstanceAs (LawfulFunctor (StateT Nat Id))
example : LawfulApplicative M := inferInstanceAs (LawfulApplicative (StateT Nat Id))

newtype M2 (α : Type) where
  run : M α

instance : Monad M2 := inferInstanceAs (Monad (StateT Nat Id))
instance : LawfulMonad M2 := by transport (LawfulMonad (StateT Nat Id))

instance : MonadLift Id M := inferInstanceAs (MonadLift Id (StateT Nat Id))
instance : LawfulMonadLift Id M := inferInstanceAs (LawfulMonadLift Id (StateT Nat Id))

-- The laws are usable on the `newtype`.
example (x : M Nat) : (x >>= pure) = x := bind_pure x

-- A hand-written `Monad` instance that agrees with the transported one inherits lawfulness.
newtype Good (α : Type) where
  run : StateT Nat Id α

instance : Monad Good where
  map f x := .mk (f <$> x.run)
  mapConst a x := .mk (Functor.mapConst a x.run)
  pure a := .mk (pure a)
  bind x f := .mk (x.run >>= fun a => (f a).run)
  seq f x := .mk (f.run <*> (x ()).run)
  seqLeft x y := .mk (x.run <* (y ()).run)
  seqRight x y := .mk (x.run *> (y ()).run)

instance : LawfulMonad Good := inferInstanceAs (LawfulMonad (StateT Nat Id))

-- A `Monad` instance that is not the transported one does not inherit lawfulness.
newtype Bad (α : Type) where
  run : StateT Nat Id α

instance : Monad Bad where
  pure a := Bad.mk (pure a)
  bind x f := Bad.mk (x.run >>= fun a => (f a).run *> (f a).run)

/--
error: `inferInstanceAs` failed, the source type
  LawfulMonad (StateT Nat Id)
is not definitionally equal to the expected type
  LawfulMonad Bad
and cannot be transported to it:
  failed to transport
    LawfulMonad (StateT Nat Id)
  to
    LawfulMonad Bad
  
  Note: `LawfulMonad.canonicalCongr` does not apply, its argument `hi` does not hold by `rfl`:
    instMonadBad = (Monad.canonicalCongr fun α => Bad.equivDef).invFun StateT.instMonad
-/
#guard_msgs in
instance : LawfulMonad Bad := inferInstanceAs (LawfulMonad (StateT Nat Id))
