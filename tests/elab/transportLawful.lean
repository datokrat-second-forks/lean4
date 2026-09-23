/-!
Tests the congruences for `LawfulFunctor`, `LawfulApplicative`, `LawfulMonad` and
`LawfulMonadLift`: lawfulness moves along the same equivalences as the instances it is about,
including through a chain of `newtype`s.
-/

newtype M (α : Type) := StateT Nat Id α with run

instance : Monad M := inferInstanceAs (Monad (StateT Nat Id))
instance : LawfulMonad M := inferInstanceAs (LawfulMonad (StateT Nat Id))

example : LawfulApplicative M := inferInstance
example : LawfulFunctor M := inferInstanceAs (LawfulFunctor (StateT Nat Id))
example : LawfulApplicative M := inferInstanceAs (LawfulApplicative (StateT Nat Id))

newtype M2 (α : Type) := M α with run

instance : Monad M2 := inferInstanceAs (Monad (StateT Nat Id))
instance : LawfulMonad M2 := by transport (LawfulMonad (StateT Nat Id))

instance : MonadLift Id M := inferInstanceAs (MonadLift Id (StateT Nat Id))
instance : LawfulMonadLift Id M := inferInstanceAs (LawfulMonadLift Id (StateT Nat Id))

-- The laws are usable on the `newtype`.
example (x : M Nat) : (x >>= pure) = x := bind_pure x

-- A `Monad` instance that is not the transported one does not inherit lawfulness.
newtype Bad (α : Type) := StateT Nat Id α with run

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
  
  Note: `LawfulMonad.canonicalCongr` does not apply
-/
#guard_msgs in
instance : LawfulMonad Bad := inferInstanceAs (LawfulMonad (StateT Nat Id))
