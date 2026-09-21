import Lean.Meta.Basic

/-! Test StateRefT nonemptiness without requiring an inhabitant of the result type. -/

example {ω σ α : Type} {m : Type → Type} [Inhabited (m α)] :
    Inhabited (StateRefT' ω σ m α) := inferInstance

example : Nonempty (ReaderT Unit (StateRefT Unit Lean.MetaM) Empty) := inferInstance

partial def emptyStateComputation : ReaderT Unit (StateRefT Unit Lean.MetaM) Empty :=
  emptyStateComputation
