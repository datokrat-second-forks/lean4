/-! Test StateT nonemptiness without requiring an inhabitant of the result type. -/

example {σ α : Type} {m : Type → Type} [Inhabited (m (α × σ))] :
    Inhabited (StateT σ m α) := inferInstance

partial def emptyStateComputation : StateT Unit (Except String) Empty :=
  emptyStateComputation
