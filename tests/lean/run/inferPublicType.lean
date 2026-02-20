module

public import Std
open Std

public section

def step : Nat × Nat → Nat × Nat
  | (x₁, x₂) => (x₂, x₁ + x₂)

def statesIterator := Iter.repeat (init := (0, 1)) step

-- Without infer_public_type%, fibIterator's type contains private match auxiliaries
-- because fibIterator has an elided type in a module context.
-- infer_public_type% creates public aliases for them so the type is accessible.
def fibIterator := infer_public_type% statesIterator.map (fun (current, _) => current)

#check fibIterator

end
