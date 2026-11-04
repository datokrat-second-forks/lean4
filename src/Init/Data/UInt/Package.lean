/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Julia M. Himmel
-/
module

prelude
public import Init.Data.Order.PackageFactories
public import Init.Data.Ord.UInt
public import Init.Data.UInt.Lemmas

open Std

public instance : Std.LinearOrderPackage UInt8 := .ofLE _ {
  min_eq _ _ := UInt8.min_def
  max_eq _ _ := UInt8.max_def.trans uite_le_swap }
public instance : Std.LinearOrderPackage UInt16 := .ofLE _ {
  min_eq _ _ := UInt16.min_def
  max_eq _ _ := UInt16.max_def.trans uite_le_swap }
public instance : Std.LinearOrderPackage UInt32 := .ofLE _ {
  min_eq _ _ := UInt32.min_def
  max_eq _ _ := UInt32.max_def.trans uite_le_swap }
public instance : Std.LinearOrderPackage UInt64 := .ofLE _ {
  min_eq _ _ := UInt64.min_def
  max_eq _ _ := UInt64.max_def.trans uite_le_swap }
public instance : Std.LinearOrderPackage USize := .ofLE _ {
  min_eq _ _ := USize.min_def
  max_eq _ _ := USize.max_def.trans uite_le_swap }
