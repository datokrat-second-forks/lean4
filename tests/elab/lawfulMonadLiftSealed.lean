import Lean

/-!
Tests that the lawful lifts through the sealed Lean monads are available: each `newtype`-sealed monad
provides `LawfulMonadLift` for its outer layer, as its unfolding `ReaderT` did before the seal.
-/

open Lean Elab Term Tactic Command

example : LawfulMonadLiftT (EIO Exception) CoreM := inferInstance
example : LawfulMonadLiftT (EIO Exception) CommandElabM := inferInstance
example : LawfulMonadLiftT CoreM MetaM := inferInstance
example : LawfulMonadLiftT MetaM TermElabM := inferInstance
example : LawfulMonadLiftT TermElabM TacticM := inferInstance
