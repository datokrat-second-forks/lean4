import Std.Data.HashMap
import Std.Data.HashSet
import Std.Data.DHashMap
import Std.Data.DHashMap.Internal.AssocList.Basic
import Std.Data.Internal.List.Associative

/-!
Spot checks for the hash maps and their association-list model after the switch from `Decidable`
`if` to `bif` in the definitions and `uif` in the lemma statements: the restated lemmas have the
expected shape and work with `simp`/`grind`, and lookups in the list model and `AssocList` still
reduce on literals.
-/

open Std

/-! The restated lemmas use `uif`. -/

example {m : HashMap Nat Nat} {k a v : Nat} :
    (m.insert k v)[a]? = uif k == a then some v else m[a]? :=
  HashMap.getElem?_insert

example {m : HashMap Nat Nat} {k a : Nat} :
    (m.erase k)[a]? = uif k == a then none else m[a]? :=
  HashMap.getElem?_erase

example {m : DHashMap Nat (fun _ => Nat)} {k a v : Nat} :
    (m.insert k v).get? a = uif h : k == a then
      some (cast (congrArg (fun _ : Nat => Nat) (eq_of_beq h)) v) else m.get? a :=
  DHashMap.get?_insert

example {m : HashMap Nat Nat} {k : Nat} {v : Nat} :
    (m.insert k v).size = uif k ∈ m then m.size else m.size + 1 :=
  HashMap.size_insert

/-! `simp` and `grind` with the restated lemmas. -/

example {m : HashMap Nat Nat} : (m.insert 1 2)[1]? = some 2 := by simp

example {m : HashMap Nat Nat} {a : Nat} (h : a ≠ 1) : (m.insert 1 2)[a]? = m[a]? := by
  simp [HashMap.getElem?_insert, Ne.symm h]

example {m : HashMap Nat Nat} {a : Nat} (h : a ≠ 1) : (m.erase 1)[a]? = m[a]? := by
  simp [HashMap.getElem?_erase, Ne.symm h]

example {m : HashMap Nat Nat} {k a v : Nat} (h : k ≠ a) : (m.insert k v)[a]? = m[a]? := by
  grind

example {m : HashMap Nat Nat} {k v : Nat} : (m.insert k v).contains k := by
  grind

example {m : HashMap Nat Nat} {k a : Nat} (h : k ≠ a) : (m.erase k).contains a = m.contains a := by
  grind

example {s : HashSet Nat} {k a : Nat} (h : k ≠ a) : (s.insert k).contains a = s.contains a := by
  grind

example {m : HashMap Nat Nat} {k v : Nat} (h : k ∉ m) : (m.insert k v).size = m.size + 1 := by
  grind

/-! Lookups in the list model and in `AssocList` reduce on literals. -/

open Std.Internal.List in
section

abbrev L : List ((_ : Nat) × Nat) := [⟨1, 10⟩, ⟨2, 20⟩, ⟨3, 30⟩]

example : getValue? 3 L = some 30 := rfl
example : getValueCast? 3 L = some 30 := rfl
example : getValueCast? 3 L = some 30 := by decide
example : getKey? 2 L = some 2 := rfl
example : (getEntry? 2 L).map (·.2) = some 20 := rfl
example : containsKey 4 L = false := by decide
example : (replaceEntry 2 99 L).map (·.2) = [10, 99, 30] := rfl
example : (eraseKey 2 L).map (·.2) = [10, 30] := rfl
example : (insertEntry 4 40 L).map (·.2) = [40, 10, 20, 30] := by decide
example : (insertEntryIfNew 2 40 L).map (·.2) = [10, 20, 30] := by decide
example : beqModel L L = true := by decide +kernel
example : minKey? L = some 1 := by decide

end

open Std.DHashMap.Internal in
section

abbrev A : AssocList Nat (fun _ => Nat) := .cons 1 10 (.cons 2 20 (.cons 3 30 .nil))

example : A.getCast? 2 = some 20 := by decide
example : A.getKey? 2 = some 2 := by decide
example : A.get 2 (by decide) = 20 := by decide
example : (A.modify 2 (· + 1)).toList.map (·.2) = [10, 21, 30] := by decide
example : (A.alter 2 (fun _ => none)).toList.map (·.2) = [10, 30] := by decide

end

/-! Hash maps still evaluate with `cbv`. -/

example : ((∅ : HashMap Nat Nat).insert 1 2)[1]? = some 2 := by cbv
example : (HashSet.ofList [1, 2, 3]).contains 2 = true := by cbv
