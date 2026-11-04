import Std.Data.ByteSlice
import Std.Data.Iterators

/-!
Spot checks for the collections after the switch from `Decidable` `if` to `uif` in the lemma
statements of `List`, `Array`, `Vector`, the iterators and the ranges, and to `bif` in the remaining
definitions (`Array.setIfInBounds`, iterator steps, range loops and `UpwardEnumerable` instances,
`ByteArray`, `FloatArray`, `ByteSlice`): the restated lemmas have the expected shape and work with
`simp`/`grind`, and the converted definitions still reduce on literals.
-/

/-! The restated lemmas use `uif`. -/

example {l : List Nat} {a : Nat} :
    (l.erase a).length = uif a ∈ l then l.length - 1 else l.length :=
  List.length_erase

example {l : List Nat} {p : Nat → Bool} {a : Nat} :
    (a :: l).countP p = l.countP p + uif p a then 1 else 0 :=
  List.countP_cons

example {l : List Nat} {i j : Nat} {a : Nat} :
    (l.set i a)[j]? = uif i = j then uif i < l.length then some a else none else l[j]? :=
  List.getElem?_set

example {xs : Array Nat} {i : Nat} {x : Nat} :
    (xs.push x)[i]? = uif i = xs.size then some x else xs[i]? :=
  Array.getElem?_push

example {xs : Array Nat} {i : Nat} {a : Nat} :
    xs.setIfInBounds i a = uif h : i < xs.size then xs.set i a else xs :=
  Array.setIfInBounds_def xs i a

example {xs : Vector Nat 3} {i : Nat} {x : Nat} (h : i < 4) :
    (xs.push x)[i] = uif h : i < 3 then xs[i] else x :=
  Vector.getElem_push h

example {n m i : Nat} : (m...n).toList[i]! = uif i < n - m then m + i else 0 :=
  Nat.getElem!_toList_rco

example {it : Std.Iter (α := Std.Iterators.Types.ListIterator Nat) Nat} {f : Nat → Bool} :
    it.fold (init := 0) (fun d b => uif f b then d + b else d) =
      (it.filter f).fold (init := 0) (· + ·) :=
  Std.Iter.fold_filter.symm

/-! `simp` and `grind` with the restated lemmas. -/

example {l : List Nat} (h : 3 ∈ l) : (l.erase 3).length = l.length - 1 := by
  simp [List.length_erase, h]

example {l : List Nat} : ([5] ++ l).count 5 = l.count 5 + 1 := by
  simp [List.count_cons]

example {xs : Array Nat} {i : Nat} (h : i < xs.size) : (xs.set i 5)[i]? = some 5 := by
  simp [Array.getElem?_set, h]

example {xs : Array Nat} {i : Nat} (h : i < xs.size) : (xs.setIfInBounds i 5)[i]? = some 5 := by
  simp [h]

example {xs : Array Nat} {i j : Nat} (h : i ≠ j) : (xs.setIfInBounds i 5)[j]? = xs[j]? := by
  grind

example {l : List Nat} {a : Nat} (h : a ∉ l) : (l.insert a).length = l.length + 1 := by
  grind

example {xs : Vector Nat 3} : (xs.push 7)[3] = 7 := by
  simp [Vector.getElem_push]

example {l : List Nat} {i : Nat} (h : i < l.length) :
    (l.modify i (· + 1))[i]? = l[i]?.map (· + 1) := by
  grind

example {n i : Nat} (h : i < n) : (0...n).toList[i]! = i := by
  simp [Nat.getElem!_toList_rco, h]

/-! The converted definitions still reduce. -/

example : #[1, 2, 3].setIfInBounds 1 5 = #[1, 5, 3] := by decide
example : #[1, 2, 3].setIfInBounds 7 5 = #[1, 2, 3] := by decide +kernel
example : (#v[1, 2, 3].setIfInBounds 1 5).toArray = #[1, 5, 3] := by decide

example : Std.PRange.UpwardEnumerable.succ? (255 : UInt8) = none := by decide
example : Std.PRange.UpwardEnumerable.succMany? 2 (250 : UInt8) = some 252 := by decide
example : Std.PRange.UpwardEnumerable.succ? (15#4) = none := by decide
example : Std.PRange.UpwardEnumerable.succMany? 2 (3#4) = some 5#4 := by decide +kernel

example : (Id.run do let mut s := 0; for i in [0:5] do { s := s + i }; return s) = 10 := by
  decide +kernel

example : (ByteArray.mk #[1, 2, 3]).toList = [1, 2, 3] := by decide +kernel
example : (ByteArray.mk #[1, 2, 3]).findIdx? (· == 2) = some 1 := by decide +kernel
example : (ByteArray.mk #[1, 2, 3]).foldl (fun a b => a + b.toNat) 0 = 6 := by decide
example : (ByteArray.mk #[1, 2, 3]).iter.next.curr = 2 := by decide
example : (ByteArray.mk #[1, 2]).iter.hasNext = true := by decide
example : (ByteArray.mk #[1, 2]).iter.toEnd.atEnd = true := by decide
example : (ByteArray.mk #[1, 2]).iter.next.hasPrev = true := by decide

example : ((FloatArray.mk #[1, 2, 3]).get? 5).isNone = true := by decide
example : (FloatArray.mk #[1, 2, 3]).foldl (fun a _ => a + 1) 0 = 3 := by decide

example : ((ByteArray.mk #[1, 2, 3]).toByteSlice).getD 1 0 = 2 := by decide
example : ((ByteArray.mk #[1, 2, 3]).toByteSlice 1 3).size = 2 := by decide
example : ((ByteArray.mk #[1, 2, 3]).toByteSlice.slice 1 2).size = 1 := by decide
example : ((ByteArray.mk #[1, 2, 3]).toByteSlice).contains 7 = false := by decide +kernel

example : List.zipIdxLE (fun a b => decide (a ≤ b)) (1, 2) (1, 3) = true := by decide
