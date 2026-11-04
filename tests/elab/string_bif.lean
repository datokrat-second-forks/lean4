/-!
Checks that `String` comparisons and simple `String` predicates still reduce in the kernel and in
the elaborator after the `String` definitions moved from `Decidable` `if` to `bif`/`uif`, in the
form a definition uses them (as `bif` conditions), and spot-checks the restated `uif` lemmas.
-/

open String

/-! Comparisons as `bif` conditions, closed by `rfl` (elaborator and kernel) and by `decide`. -/

example : (bif "abc" <ᵇ "abd" then 1 else 0) = 1 := rfl
example : (bif "abd" <ᵇ "abc" then 1 else 0) = 0 := rfl
example : (bif "a" ≤ᵇ "a" then 1 else 0) = 1 := rfl
example : (bif "b" ≤ᵇ "a" then 1 else 0) = 0 := rfl
example : (bif "abd" >ᵇ "abc" then 1 else 0) = 1 := rfl
example : (bif "a" ≥ᵇ "a" then 1 else 0) = 1 := rfl
example : (bif "ab" =ᵇ "ab" then 1 else 0) = 1 := rfl
example : (bif "ab" ≠ᵇ "ac" then 1 else 0) = 1 := rfl
example : (bif "ab" == "ab" then 1 else 0) = 1 := rfl
example : (bif "ab" != "ac" then 1 else 0) = 1 := rfl
example : (bif compare "a" "b" == .lt then 1 else 0) = 1 := rfl
example : (bif compare "b" "b" == .eq then 1 else 0) = 1 := rfl

example : (bif "abc" <ᵇ "abd" then 1 else 0) = 1 := by decide
example : (bif "a" ≤ᵇ "a" then 1 else 0) = 1 := by decide
example : (bif "abd" >ᵇ "abc" then 1 else 0) = 1 := by decide
example : (bif "a" ≥ᵇ "a" then 1 else 0) = 1 := by decide
example : (bif "ab" =ᵇ "ab" then 1 else 0) = 1 := by decide
example : (bif "ab" == "ab" then 1 else 0) = 1 := by decide
example : (bif "ab" != "ac" then 1 else 0) = 1 := by decide
example : (bif compare "a" "b" == .lt then 1 else 0) = 1 := by decide

/-! `Prop` comparisons via their `Decidable` instances. -/

example : "abc" < "abd" := by decide
example : "a" ≤ "a" := by decide
example : ¬ "b" < "a" := by decide
example : ("ab" == "ab") = true := by decide
example : "ab" ≠ "ac" := by decide
example : compare "a" "b" = .lt := by decide

/-! A definition that branches on string comparisons. -/

def classify (s : String) : Nat :=
  bif s <ᵇ "m" then 0 else bif s == "m" then 1 else 2

example : classify "apple" = 0 ∧ classify "m" = 1 ∧ classify "zebra" = 2 := ⟨rfl, rfl, rfl⟩
example : classify "apple" = 0 ∧ classify "m" = 1 ∧ classify "zebra" = 2 := by decide

/-!
Simple `Bool` predicates that went through `UDecidable.decide` (a coerced `Prop`) and no longer
reduced; they now use `≥ᵇ`/`>ᵇ`.
-/

example : (bif Pos.Raw.atEnd "abc" ⟨3⟩ then 1 else 0) = 1 := rfl
example : (bif Pos.Raw.atEnd "abc" ⟨1⟩ then 1 else 0) = 0 := rfl
example : (bif Pos.Raw.atEnd "abc" ⟨3⟩ then 1 else 0) = 1 := by decide
example : Pos.Raw.atEnd "L∃∀N" ⟨8⟩ = true := by decide
example : ¬ Pos.Raw.atEnd "L∃∀N" ⟨2⟩ = true := by decide
example : ("abc".iter.next.hasNext, "abc".iter.hasPrev, "abc".iter.next.hasPrev) = (true, false, true) := rfl
example : "abc".iter.next.next.next.atEnd = true := by decide

/-! `≥ᵇ`/`>ᵇ` are notation for the swapped `≤ᵇ`/`<ᵇ`. -/

example (a b : Nat) : (a ≥ᵇ b) = (b ≤ᵇ a) := rfl
example (a b : Nat) : (a >ᵇ b) = (b <ᵇ a) := rfl
example : (bif 3 >ᵇ 2 then 1 else 0) = 1 := rfl
example : (bif 2 ≥ᵇ 3 then 1 else 0) = 0 := rfl
example (a b : Nat) : (a ≥ᵇ b) = UDecidable.decide (b ≤ a) := by simp
example (a b : Nat) (h : a > b) : (bif a >ᵇ b then 1 else 0) = 1 := by simp [h]

/-! Restated lemmas: `simp` normal form is `uif` with propositional conditions. -/

example {s : Slice} {p : s.Pos} : p.get? = uif h : p = s.endPos then none else some (p.get h) :=
  Slice.Pos.get?_eq_dite

example {s : Slice} {p : s.Pos} : p.get? = uif h : p = s.endPos then none else some (p.get h) := by
  simp [Slice.Pos.get?]

example {s : Slice} {p : s.Pos} (h : p ≠ s.endPos) : p.get? = some (p.get h) := by
  simp [Slice.Pos.get?_eq_dite, h]

example {s : String} {p : s.Pos} (h : p ≠ s.startPos) : p.prev? = some (p.prev h) := by
  simp [Pos.prev?_eq_dite, h]

example {s : Slice} {p : s.Pos} {n : Nat} :
    p.nextn (n + 1) = uif h : p = s.endPos then p else (p.next h).nextn n :=
  Slice.Pos.nextn_add_one

example {s : String} {p : s.Pos} (h : p = s.startPos) : p.prevn 3 = p := by
  simp [Pos.prevn_add_one, h]
