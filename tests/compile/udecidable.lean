/-!
`UDecidable` carries no data in the logic and `UDecidable.decide` is defined classically, but the
compiler represents an instance by the `Bool` passed to `UDecidable.mk`, so `UDecidable.decide`
compiles to the identity. This test checks that compiled and interpreted code compute with that
`Bool`.
-/

@[noinline] def classify (n m : Nat) : String :=
  UDecidable.ite (n ≤ m) "le" "gt"

@[noinline] def between (lo n hi : Nat) : Bool :=
  UDecidable.decide (lo ≤ n ∧ ¬hi ≤ n)

@[noinline] def viaBridge (n m : Nat) : Bool :=
  -- `n = m` only has the `Decidable` instance, so this goes through `ofDecidable`.
  UDecidable.decide (n = m)

@[noinline] def viaToDecidable (n m : Nat) : String :=
  @_root_.ite _ (n ≤ m) (UDecidable.toDecidable _) "le" "gt"

@[noinline] def getOrZero (xs : Array Nat) (i : Nat) : Nat :=
  UDecidable.dite (i < xs.size) (fun h => xs[i]) (fun _ => 0)

@[noinline] def storeAndRead (n m : Nat) : Bool :=
  -- An instance stored in a data structure and read back later.
  let insts : Array (UDecidable (n ≤ m)) := #[inferInstance]
  @UDecidable.decide _ (insts.getD 0 inferInstance)

-- Underapplied `mk` and `decide` in argument position.
@[noinline] def mkFns : List ((b : Bool) → (b = true ↔ True) → UDecidable True) :=
  [@UDecidable.mk _]

@[noinline] def decideFns (n m : Nat) : List (UDecidable (n ≤ m) → Bool) :=
  [@UDecidable.decide _]

def main : IO Unit := do
  for (n, m) in [(1, 2), (2, 2), (3, 2)] do
    IO.println s!"{n} {m}: {classify n m} {viaBridge n m} {viaToDecidable n m} {storeAndRead n m}"
  for n in [0, 1, 5, 9, 10] do
    IO.println s!"between 1 {n} 10: {between 1 n 10}"
  IO.println s!"{getOrZero #[7, 8] 1} {getOrZero #[7, 8] 2}"
  IO.println s!"mk: {mkFns.map fun f => @UDecidable.decide _ (f true (by simp))}"
  IO.println s!"decide: {(decideFns 1 2).map (· inferInstance)} {(decideFns 3 2).map (· inferInstance)}"
