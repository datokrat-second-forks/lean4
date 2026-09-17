/-!
Tests that a constraint `N.run ?m =?= c`, where the constant `c` unfolds to an application of
`N.run`, is solved by unfolding `c`, so that `?m` captures the program underneath rather than the
still-folded constant.

A real structure's projection only reaches `isDefEqProj.isDefEqSingleton` as a `.proj` node, i.e.
after `whnfCore` and lazy delta reduction, so the virtual rule has to be tried at the same point.
Tried earlier it wins the race and assigns `?m := N.mk c`, which is definitionally equal but keeps
`c` folded; a caller that generalized a program in order to reason about it then gets the constant
back instead of the program.
-/

structure Box (α : Type) where mk :: run : α

newtype N (type : Type) := type with run

opaque payload : Nat

def barBox : Nat := Box.run (Box.mk payload)
def barN : Nat := N.run (N.mk payload)

theorem Box.elim {α} {x : α} {prog : Box α} (he : Box.run prog = x) (P : α → Prop) :
    P (Box.run prog) → P x := fun h => he ▸ h

theorem N.elim {α} {x : α} {prog : N α} (he : N.run prog = x) (P : α → Prop) :
    P (N.run prog) → P x := fun h => he ▸ h

example : barBox = payload := by
  generalize h : barBox = x
  apply Box.elim h
  guard_target =ₛ Box.run (Box.mk payload) = payload
  rfl

example : barN = payload := by
  generalize h : barN = x
  apply N.elim h
  guard_target =ₛ N.run (N.mk payload) = payload
  rfl
