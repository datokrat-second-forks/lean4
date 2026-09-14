theorem ex1 : (fun y => y + 0) = (fun x => 0 + x) := by
  funext x
  simp

theorem ex2 : (fun y x => y + x + 0) = (fun x y => y + x) := by
  funext x y
  rw [Nat.add_zero, Nat.add_comm]

theorem ex3 : (fun (x : Nat × Nat) => x.1 + x.2) = (fun (x : Nat × Nat) => x.2 + x.1) := by
  funext (a, b)
  show a + b = b + a
  rw [Nat.add_comm]

theorem ex4 : (fun (x : Nat × Nat) (y : Nat × Nat) => x.1 + y.2) = (fun (x : Nat × Nat) (z : Nat × Nat) => z.2 + x.1) := by
  funext (a, b) (c, d)
  show a + d = d + a
  rw [Nat.add_comm]

/-- A reducible alias, so that the binder type is defeq to `Nat` without being syntactically it. -/
abbrev MyNat := Nat

theorem ex5 : (fun (x : MyNat) => x.succ + 0) = (fun (x : MyNat) => 0 + x.succ) := by
  funext (x : Nat)
  have y := x + 1 -- if `(x : Nat)` is not used at `funext`, then `x+1` would fail to be elaborated since we don't have the instance `Add (MyNat)`
  rw [Nat.add_comm]

theorem ex6 : (fun (x : Nat) y z => x + y + z) = (fun x y z => x + (y + z)) := by
  funext
  rw [Nat.add_assoc]
