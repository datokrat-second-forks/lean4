-- An untrusted module. It is only ever elaborated in the sandbox.

def double (n : Nat) : Nat := n + n

theorem double_eq (n : Nat) : double n = 2 * n := by
  unfold double; omega

structure Point where
  x : Nat
  y : Nat

inductive Tree where
  | leaf
  | node (children : List Tree)

def Tree.size : Tree → Nat
  | .leaf => 1
  | .node cs => 1 + (cs.attach.map fun ⟨c, _⟩ => c.size).sum

mutual
inductive Even : Nat → Prop
  | zero : Even 0
  | succ : Odd n → Even (n + 1)
inductive Odd : Nat → Prop
  | succ : Even n → Odd (n + 1)
end

partial def loop (n : Nat) : Nat := loop (n + 1)

unsafe def unsafeId (n : Nat) : Nat := n

-- Neither of these may have any effect on the importing process.
initialize IO.FS.writeFile "initialize-ran" ""
macro "untrusted_macro" : term => `(42)
