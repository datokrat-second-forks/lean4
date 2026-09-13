instance {m} {σ} [Pure m] : Pure (StateT σ m) :=
  let rec pure {α} (a s) := Pure.pure (a, s)
  { pure := fun {α} (a : α) => .mk (@pure α a) }

instance {m} {σ} [Pure m] : Pure (StateT σ m) :=
  let rec pure {α} (a : α) (s : σ) := Pure.pure (a, s)
  { pure := fun a => .mk (pure a) }

instance {m} {σ} [Pure m] : Pure (StateT σ m) :=
  let rec pure {α} (a : α) := fun s => Pure.pure (a, s)
  { pure := fun a => .mk (pure a) }

instance {m} {σ} [Pure m] : Pure (StateT σ m) :=
  let rec pure {α} (a : α) : StateT σ m α := .mk fun s => Pure.pure (a, s)
  { pure := pure }
