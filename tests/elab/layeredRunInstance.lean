module

/-!
# Running a monad stack layer by layer can hide its instances

`M` is an abbreviation for `ReaderT String (RefT IO)`, and `RefT` is a non-reducible definition
unfolding to `ReaderT (IO.Ref Nat) IO`, like `CommandElabM` and `StateRefT'`.
The `Log` instance is declared at `M`, so it is indexed with `RefT` in it.

In `two`, the outer `ReaderT.run` makes the inner one produce some `ReaderT ?ρ ?n _`, so
`logged`'s monad is assigned from the expected type before `x` is elaborated. Unifying that with
`x : M Unit` then unfolds `RefT`, and instance resolution sees
`ReaderT String (ReaderT (IO.Ref Nat) IO)`, where the instance for `M` does not match.
A single layer (`one`) never forces `RefT` to unfold.

Ascribing the type (`twoAscribed`) or declaring the wrapper `elab_without_expected_type`
(`twoWithoutExpectedType`) fixes the monad before the expected type is used.
The same happens on a toolchain where `ReaderT` is not sealed; sealing only makes it necessary to
write `ReaderT.run` layer by layer, where `(logged x) s r` used to elaborate `logged x` first.
This is the reduction of `Lean.Elab.Command.withLoggingExceptions` in `src/Lean/Elab/Command.lean`,
which runs `withLogging x : CommandElabM Unit` through both `ReaderT` layers
(`CommandElabM = ReaderT Context (StateRefT State (EIO Exception))`) and needs the ascription
since `ReaderT` was sealed in "refactor: seal `ReaderT` with `newtype`".
-/

namespace LayeredRunInstance

class Log (m : Type → Type) where
  log : String → m Unit

def logged [Monad m] [Log m] (x : m Unit) : m Unit := do Log.log "start"; x

@[instance_reducible] def RefT (m : Type → Type) (α : Type) : Type := ReaderT (IO.Ref Nat) m α
instance [Monad m] : Monad (RefT m) := inferInstanceAs (Monad (ReaderT (IO.Ref Nat) m))

abbrev M := ReaderT String (RefT IO)
instance : Log M := ⟨fun _ => pure ()⟩

def one (x : M Unit) (s : String) : RefT IO Unit :=
  ReaderT.run (logged x) s

/--
error: failed to synthesize instance of type class
  Log (ReaderT String (ReaderT (IO.Ref Nat) IO))

Hint: Type class instance resolution failures can be inspected with the `set_option trace.Meta.synthInstance true` command.
-/
#guard_msgs in
def two (x : M Unit) (s : String) (r : IO.Ref Nat) : IO Unit :=
  ReaderT.run (ReaderT.run (logged x) s) r

def twoAscribed (x : M Unit) (s : String) (r : IO.Ref Nat) : IO Unit :=
  ReaderT.run (ReaderT.run (logged x : M Unit) s) r

@[elab_without_expected_type]
def logged' [Monad m] [Log m] (x : m Unit) : m Unit := logged x

def twoWithoutExpectedType (x : M Unit) (s : String) (r : IO.Ref Nat) : IO Unit :=
  ReaderT.run (ReaderT.run (logged' x) s) r

end LayeredRunInstance
