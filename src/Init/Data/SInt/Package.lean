/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Julia M. Himmel
-/
module

prelude
public import Init.Data.Order.PackageFactories
public import Init.Data.SInt.Lemmas
import Init.Data.Ord.SInt

open Std

instance : Std.LinearOrderPackage Int8 := .ofLE _ {
  min_eq _ _ := Int8.min_def
  max_eq _ _ := Int8.max_def.trans uite_le_swap }
instance : Std.LinearOrderPackage Int16 := .ofLE _ {
  min_eq _ _ := Int16.min_def
  max_eq _ _ := Int16.max_def.trans uite_le_swap }
instance : Std.LinearOrderPackage Int32 := .ofLE _ {
  min_eq _ _ := Int32.min_def
  max_eq _ _ := Int32.max_def.trans uite_le_swap }
instance : Std.LinearOrderPackage Int64 := .ofLE _ {
  min_eq _ _ := Int64.min_def
  max_eq _ _ := Int64.max_def.trans uite_le_swap }
instance : Std.LinearOrderPackage ISize := .ofLE _ {
  min_eq _ _ := ISize.min_def
  max_eq _ _ := ISize.max_def.trans uite_le_swap }
