import Std.Data.TreeMap
import Std.Data.TreeSet
import Std.Data.DTreeMap
import Std.Data.ExtTreeMap
import Std.Data.ExtTreeSet

/-!
Spot checks for the tree maps after the switch from `Decidable` `if` to `bif` in the definitions
(balancing, linking, set operations, bounded queries) and `uif` in the lemma statements: the restated
lemmas have the expected shape and work with `simp`/`grind`, membership has a native `UDecidable`
instance, and tree operations still reduce on literals with `decide`, `decide +kernel` and `cbv`.
-/

open Std

/-! The restated lemmas use `uif`. -/

example {t : TreeMap Nat Nat} {k a v : Nat} :
    (t.insert k v)[a]? = uif compare k a = .eq then some v else t[a]? :=
  TreeMap.getElem?_insert

example {t : TreeMap Nat Nat} {k a : Nat} :
    (t.erase k)[a]? = uif compare k a = .eq then none else t[a]? :=
  TreeMap.getElem?_erase

example {t : TreeMap Nat Nat} {k v : Nat} :
    (t.insert k v).size = uif t.contains k then t.size else t.size + 1 :=
  TreeMap.size_insert

example {t : DTreeMap Nat (fun _ => Nat)} {k a v : Nat} :
    (t.insert k v).get? a = uif h : compare k a = .eq then
      some (cast (congrArg (fun _ : Nat => Nat) (LawfulEqCmp.compare_eq_iff_eq.mp h)) v)
    else t.get? a :=
  DTreeMap.get?_insert

example {t : TreeSet Nat} {k a : Nat} :
    (t.insert k).get? a = uif compare k a = .eq ∧ ¬k ∈ t then some k else t.get? a :=
  TreeSet.get?_insert

example {t : ExtTreeMap Nat Nat} {k a v : Nat} :
    (t.insert k v)[a]? = uif compare k a = .eq then some v else t[a]? :=
  ExtTreeMap.getElem?_insert

/-! Membership has a native `UDecidable` instance. -/

example {t : TreeMap Nat Nat} {a : Nat} : UDecidable (a ∈ t) := inferInstance
example {t : TreeSet Nat} {a : Nat} : UDecidable (a ∈ t) := inferInstance
example {t : DTreeMap Nat (fun _ => Nat)} {a : Nat} : UDecidable (a ∈ t) := inferInstance
example {t : TreeMap.Raw Nat Nat} {a : Nat} : UDecidable (a ∈ t) := inferInstance
example {t : ExtTreeMap Nat Nat} {a : Nat} : UDecidable (a ∈ t) := inferInstance
example {t : ExtTreeSet Nat} {a : Nat} : UDecidable (a ∈ t) := inferInstance

/-! `simp` and `grind` with the restated lemmas. -/

example {t : TreeMap Nat Nat} : (t.insert 1 2)[1]? = some 2 := by simp

example {t : TreeMap Nat Nat} {a : Nat} (h : a ≠ 1) : (t.insert 1 2)[a]? = t[a]? := by
  simp [TreeMap.getElem?_insert, Ne.symm h]

example {t : TreeMap Nat Nat} {a : Nat} (h : a ≠ 1) : (t.erase 1)[a]? = t[a]? := by
  simp [TreeMap.getElem?_erase, Ne.symm h]

example {t : TreeMap Nat Nat} {k a v : Nat} (h : k ≠ a) : (t.insert k v)[a]? = t[a]? := by
  grind

example {t : TreeMap Nat Nat} {k v : Nat} : (t.insert k v).contains k := by
  grind

example {t : TreeMap Nat Nat} {k a : Nat} (h : k ≠ a) : (t.erase k).contains a = t.contains a := by
  grind

example {t : TreeSet Nat} {k a : Nat} (h : k ≠ a) : (t.insert k).contains a = t.contains a := by
  grind

example {t : TreeMap Nat Nat} {k v : Nat} (h : k ∉ t) : (t.insert k v).size = t.size + 1 := by
  grind

example {t : TreeMap Nat Nat} {k v : Nat} (h : k ∈ t) : (t.insert k v).size = t.size := by
  simp [TreeMap.size_insert, TreeMap.contains_iff_mem.mpr h]

/-! Tree operations reduce on literals. -/

abbrev T : TreeMap Nat Nat := TreeMap.ofList [(1, 10), (2, 20), (3, 30), (4, 40), (5, 50), (6, 60), (7, 70)]
abbrev Big : TreeMap Nat Nat := TreeMap.ofList ((List.range 20).map fun i => (i, i))
abbrev Big2 : TreeMap Nat Nat := TreeMap.ofList ((List.range 20).reverse.map fun i => (2 * i, i))
abbrev S : TreeSet Nat := TreeSet.ofList [5, 3, 8, 1]

example : T[6]? = some 60 := by decide
example : T[6]? = some 60 := by decide +kernel
example : T[6]? = some 60 := by cbv
example : T.contains 3 = true := rfl
example : 3 ∈ T := by decide
example : (T.erase 4).toList.map (·.1) = [1, 2, 3, 5, 6, 7] := by decide
example : (T.insertIfNew 2 99)[2]? = some 20 := by decide +kernel
example : (T.containsThenInsert 2 99).1 = true := by cbv
example : T.getKeyGT? 4 = some 5 := by decide
example : T.getKeyGT 4 ⟨5, by decide, by decide⟩ = 5 := by decide +kernel
example : T.getKeyLT! 4 = 3 := by decide
example : T.keyAtIdx? 2 = some 3 := by decide +kernel
example : (T.alter 2 (fun _ => none)).toList.map (·.1) = [1, 3, 4, 5, 6, 7] := by decide +kernel
example : (T.partition (fun k _ => k % 2 == 0)).1.size = 3 := by decide +kernel
example : (Big.erase 3 |>.erase 4 |>.erase 5 |>.erase 6).size = 16 := by decide +kernel
example : Big2[38]? = some 19 := by decide +kernel
example : (Big ∪ Big2).size = 30 := by decide +kernel
example : (Big ∩ Big2).size = 10 := by decide +kernel
example : (Big \ Big2).size = 10 := by decide +kernel
example : (Big \ Big2).size = 10 := by cbv
example : (T == Big) = false := by decide
example : (T == T) = true := by cbv
example : (S.insert 4).toList = [1, 3, 4, 5, 8] := by decide
example : (S ∩ TreeSet.ofList [3, 8, 9]).toList = [3, 8] := by decide +kernel
example : ((∅ : ExtTreeMap Nat Nat).insert 1 2)[1]? = some 2 := by cbv
