example : Id Unit := do
  if let true ← pure true then pure ()
  if let true <- pure true then pure ()
  pure ()
