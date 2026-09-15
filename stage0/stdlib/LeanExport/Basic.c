// Lean compiler output
// Module: LeanExport.Basic
// Imports: public import Lean public import Std.Data.HashMap.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Level_param___override(lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_instReprDataValue_repr(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedConstantInfo_default;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_union(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_inductiveVal_x21(lean_object*);
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_Lean_versionString;
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_println___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "safe"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_KVMap_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__0;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__1;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__2;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__3;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__4;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__5;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__6;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__7;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__8;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__9;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__10;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__11;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__12;
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "--ignore-missing"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__2___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__2___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__2___boxed(lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "--export-mdata"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__0___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__0___boxed(lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "--export-unsafe"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__1___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__1___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__1___boxed(lean_object*);
static const lean_closure_object l_LeanExport_initState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_LeanExport_initState___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_LeanExport_initState___closed__0 = (const lean_object*)&l_LeanExport_initState___closed__0_value;
LEAN_EXPORT lean_object* l_LeanExport_initState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_value;
static const lean_closure_object l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3 = (const lean_object*)&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4 = (const lean_object*)&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4_value;
static const lean_closure_object l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5 = (const lean_object*)&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LeanExport.Basic"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.LeanExport.Basic.0.LeanExport.dumpName"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "il"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.LeanExport.Basic.0.LeanExport.dumpLevel"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "_private.LeanExport.Basic.0.LeanExport.removeMData"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanExport.dumpConstant"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 132, .m_capacity = 132, .m_length = 131, .m_data = "assertion violation: ((!recVal.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.2114.0 ).exportUnsafe)\n        "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__1_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "expected a `constantinfo.recinfo`."};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__3_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__6_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__7 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__7_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 135, .m_capacity = 135, .m_length = 134, .m_data = "assertion violation: ((!ctorVal.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.1873.0 ).exportUnsafe)\n          "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected a `ConstantInfo.ctorInfo`."};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_dumpExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExpr___closed__0;
static lean_once_cell_t l_LeanExport_dumpExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExpr___closed__1;
static const lean_string_object l_LeanExport_dumpExprAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ie"};
static const lean_object* l_LeanExport_dumpExprAux___closed__0 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__0_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l_LeanExport_dumpExprAux___closed__1 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__1_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_LeanExport_dumpExprAux___closed__2 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__2_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_LeanExport_dumpExprAux___closed__3 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "us"};
static const lean_object* l_LeanExport_dumpExprAux___closed__4 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__4_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_LeanExport_dumpExprAux___closed__5 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__5_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "fn"};
static const lean_object* l_LeanExport_dumpExprAux___closed__6 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__6_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l_LeanExport_dumpExprAux___closed__7 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__7_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l_LeanExport_dumpExprAux___closed__8 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__8_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_LeanExport_dumpExprAux___closed__9 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__9_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binderInfo"};
static const lean_object* l_LeanExport_dumpExprAux___closed__10 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__10_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l_LeanExport_dumpExprAux___closed__11 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__11_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l_LeanExport_dumpExprAux___closed__12 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__12_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_LeanExport_dumpExprAux___closed__13 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__13_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l_LeanExport_dumpExprAux___closed__14 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__14_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpExprAux___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l_LeanExport_dumpExprAux___closed__15 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__15_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value),LEAN_SCALAR_PTR_LITERAL(118, 246, 177, 142, 179, 9, 199, 233)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpExprAux___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l_LeanExport_dumpExprAux___closed__16 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__16_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l_LeanExport_dumpExprAux___closed__17 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__17_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_LeanExport_dumpExprAux___closed__18 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__18_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l_LeanExport_dumpExprAux___closed__19 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__19_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_LeanExport_dumpExprAux___closed__20 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__20_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_LeanExport_dumpExprAux___closed__21 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__21_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l_LeanExport_dumpExprAux___closed__22 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__22_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l_LeanExport_dumpExprAux___closed__23 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__23_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "cannot export free variables or metavariables"};
static const lean_object* l_LeanExport_dumpExprAux___closed__25 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__25_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanExport.dumpExprAux"};
static const lean_object* l_LeanExport_dumpExprAux___closed__24 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__24_value;
static lean_once_cell_t l_LeanExport_dumpExprAux___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExprAux___closed__26;
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "levelParams"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numIndices"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctors"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isRec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isReflexive"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isUnsafe"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "induct"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cidx"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numFields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nfields"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numMotives"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numMinors"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l_LeanExport_dumpConstant___closed__0 = (const lean_object*)&l_LeanExport_dumpConstant___closed__0_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "types"};
static const lean_object* l_LeanExport_dumpConstant___closed__1 = (const lean_object*)&l_LeanExport_dumpConstant___closed__1_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "recs"};
static const lean_object* l_LeanExport_dumpConstant___closed__2 = (const lean_object*)&l_LeanExport_dumpConstant___closed__2_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* l_LeanExport_dumpConstant___closed__3 = (const lean_object*)&l_LeanExport_dumpConstant___closed__3_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_LeanExport_dumpConstant___closed__4 = (const lean_object*)&l_LeanExport_dumpConstant___closed__4_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hints"};
static const lean_object* l_LeanExport_dumpConstant___closed__5 = (const lean_object*)&l_LeanExport_dumpConstant___closed__5_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "safety"};
static const lean_object* l_LeanExport_dumpConstant___closed__6 = (const lean_object*)&l_LeanExport_dumpConstant___closed__6_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l_LeanExport_dumpConstant___closed__7 = (const lean_object*)&l_LeanExport_dumpConstant___closed__7_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_LeanExport_dumpConstant___closed__8 = (const lean_object*)&l_LeanExport_dumpConstant___closed__8_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_LeanExport_dumpConstant___closed__9 = (const lean_object*)&l_LeanExport_dumpConstant___closed__9_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_LeanExport_dumpConstant___closed__10 = (const lean_object*)&l_LeanExport_dumpConstant___closed__10_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__15_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l_LeanExport_dumpConstant___closed__15 = (const lean_object*)&l_LeanExport_dumpConstant___closed__15_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_LeanExport_dumpConstant___closed__16 = (const lean_object*)&l_LeanExport_dumpConstant___closed__16_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__14_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l_LeanExport_dumpConstant___closed__14 = (const lean_object*)&l_LeanExport_dumpConstant___closed__14_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__14_value),((lean_object*)&l_LeanExport_dumpConstant___closed__16_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__17 = (const lean_object*)&l_LeanExport_dumpConstant___closed__17_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_LeanExport_dumpConstant___closed__12 = (const lean_object*)&l_LeanExport_dumpConstant___closed__12_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__13_value_aux_0),((lean_object*)&l_LeanExport_dumpConstant___closed__12_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_LeanExport_dumpConstant___closed__13 = (const lean_object*)&l_LeanExport_dumpConstant___closed__13_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__13_value),((lean_object*)&l_LeanExport_dumpConstant___closed__17_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__18 = (const lean_object*)&l_LeanExport_dumpConstant___closed__18_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_LeanExport_dumpConstant___closed__11 = (const lean_object*)&l_LeanExport_dumpConstant___closed__11_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__11_value),((lean_object*)&l_LeanExport_dumpConstant___closed__18_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__19 = (const lean_object*)&l_LeanExport_dumpConstant___closed__19_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Constant "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " not found in environment."};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_LeanExport_dumpConstant___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LeanExport_dumpConstant___closed__20 = (const lean_object*)&l_LeanExport_dumpConstant___closed__20_value;
static lean_once_cell_t l_LeanExport_dumpConstant___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpConstant___closed__21;
static lean_once_cell_t l_LeanExport_dumpConstant___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpConstant___closed__22;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 367, .m_capacity = 367, .m_length = 366, .m_data = "assertion violation: ctorVals.size == 0\n\n    /- We dump the constructor dependencies (which will not include the inductives in this block since we've\n    added the names to `visitedConstants`) before actually outputting anything in this inductive block to\n    ensure e.g. the `LT` in `Fin.mk` is dumped before this inductive block appears in the export file. -/\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 127, .m_capacity = 127, .m_length = 126, .m_data = "assertion violation: ((!val.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.1797.0 ).exportUnsafe)\n      "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "githash"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lean4export"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "3.1.0"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exporter"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
static lean_once_cell_t l_LeanExport_dumpMetadata___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpMetadata___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(uint8_t v_x_13_){
_start:
{
switch(v_x_13_)
{
case 0:
{
lean_object* v___x_14_; 
v___x_14_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1));
return v___x_14_;
}
case 1:
{
lean_object* v___x_15_; 
v___x_15_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3));
return v___x_15_;
}
case 2:
{
lean_object* v___x_16_; 
v___x_16_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5));
return v___x_16_;
}
default: 
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7));
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___boxed(lean_object* v_x_18_){
_start:
{
uint8_t v_x_64__boxed_19_; lean_object* v_res_20_; 
v_x_64__boxed_19_ = lean_unbox(v_x_18_);
v_res_20_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_x_64__boxed_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(lean_object* v_x_28_){
_start:
{
switch(lean_obj_tag(v_x_28_))
{
case 0:
{
lean_object* v___x_29_; 
v___x_29_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1));
return v___x_29_;
}
case 1:
{
lean_object* v___x_30_; 
v___x_30_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3));
return v___x_30_;
}
default: 
{
uint32_t v_a_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_a_31_ = lean_ctor_get_uint32(v_x_28_, 0);
v___x_32_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4));
v___x_33_ = lean_uint32_to_nat(v_a_31_);
v___x_34_ = l_Lean_JsonNumber_fromNat(v___x_33_);
v___x_35_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_32_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_box(0);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_36_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = l_Lean_Json_mkObj(v___x_38_);
lean_dec_ref_known(v___x_38_, 2);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___boxed(lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_x_40_);
lean_dec(v_x_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(uint8_t v_x_54_){
_start:
{
switch(v_x_54_)
{
case 0:
{
lean_object* v___x_55_; 
v___x_55_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1));
return v___x_55_;
}
case 1:
{
lean_object* v___x_56_; 
v___x_56_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3));
return v___x_56_;
}
case 2:
{
lean_object* v___x_57_; 
v___x_57_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5));
return v___x_57_;
}
default: 
{
lean_object* v___x_58_; 
v___x_58_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7));
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___boxed(lean_object* v_x_59_){
_start:
{
uint8_t v_x_64__boxed_60_; lean_object* v_res_61_; 
v_x_64__boxed_60_ = lean_unbox(v_x_59_);
v_res_61_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_x_64__boxed_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(uint8_t v_x_71_){
_start:
{
switch(v_x_71_)
{
case 0:
{
lean_object* v___x_72_; 
v___x_72_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1));
return v___x_72_;
}
case 1:
{
lean_object* v___x_73_; 
v___x_73_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3));
return v___x_73_;
}
default: 
{
lean_object* v___x_74_; 
v___x_74_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5));
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___boxed(lean_object* v_x_75_){
_start:
{
uint8_t v_x_49__boxed_76_; lean_object* v_res_77_; 
v_x_49__boxed_76_ = lean_unbox(v_x_75_);
v_res_77_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_x_49__boxed_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
if (lean_obj_tag(v_a_78_) == 0)
{
lean_object* v___x_80_; 
v___x_80_ = l_List_reverse___redArg(v_a_79_);
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_106_; 
v_head_81_ = lean_ctor_get(v_a_78_, 0);
v_tail_82_ = lean_ctor_get(v_a_78_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v_a_78_);
if (v_isSharedCheck_106_ == 0)
{
v___x_84_ = v_a_78_;
v_isShared_85_ = v_isSharedCheck_106_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_tail_82_);
lean_inc(v_head_81_);
lean_dec(v_a_78_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_106_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v_fst_86_; lean_object* v_snd_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_105_; 
v_fst_86_ = lean_ctor_get(v_head_81_, 0);
v_snd_87_ = lean_ctor_get(v_head_81_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_head_81_);
if (v_isSharedCheck_105_ == 0)
{
v___x_89_ = v_head_81_;
v_isShared_90_ = v_isSharedCheck_105_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_snd_87_);
lean_inc(v_fst_86_);
lean_dec(v_head_81_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_105_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_91_ = 1;
v___x_92_ = l_Lean_Name_toString(v_fst_86_, v___x_91_);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = l_Lean_instReprDataValue_repr(v_snd_87_, v___x_93_);
v___x_95_ = l_Std_Format_defWidth;
v___x_96_ = l_Std_Format_pretty(v___x_94_, v___x_95_, v___x_93_, v___x_93_);
v___x_97_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v___x_97_);
lean_ctor_set(v___x_89_, 0, v___x_92_);
v___x_99_ = v___x_89_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___x_97_);
v___x_99_ = v_reuseFailAlloc_104_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_101_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 1, v_a_79_);
lean_ctor_set(v___x_84_, 0, v___x_99_);
v___x_101_ = v___x_84_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_a_79_);
v___x_101_ = v_reuseFailAlloc_103_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
v_a_78_ = v_tail_82_;
v_a_79_ = v___x_101_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_KVMap_toJson(lean_object* v_kvs_107_){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_box(0);
v___x_109_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(v_kvs_107_, v___x_108_);
v___x_110_ = l_Lean_Json_mkObj(v___x_109_);
lean_dec(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(lean_object* v_a_111_, lean_object* v_b_112_, lean_object* v_x_113_){
_start:
{
if (lean_obj_tag(v_x_113_) == 0)
{
lean_dec(v_b_112_);
lean_dec(v_a_111_);
return v_x_113_;
}
else
{
lean_object* v_key_114_; lean_object* v_value_115_; lean_object* v_tail_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_128_; 
v_key_114_ = lean_ctor_get(v_x_113_, 0);
v_value_115_ = lean_ctor_get(v_x_113_, 1);
v_tail_116_ = lean_ctor_get(v_x_113_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_113_);
if (v_isSharedCheck_128_ == 0)
{
v___x_118_ = v_x_113_;
v_isShared_119_ = v_isSharedCheck_128_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_tail_116_);
lean_inc(v_value_115_);
lean_inc(v_key_114_);
lean_dec(v_x_113_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_128_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
uint8_t v___x_120_; 
v___x_120_ = lean_name_eq(v_key_114_, v_a_111_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_111_, v_b_112_, v_tail_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 2, v___x_121_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_key_114_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v_value_115_);
lean_ctor_set(v_reuseFailAlloc_124_, 2, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
else
{
lean_object* v___x_126_; 
lean_dec(v_value_115_);
lean_dec(v_key_114_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 1, v_b_112_);
lean_ctor_set(v___x_118_, 0, v_a_111_);
v___x_126_ = v___x_118_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_111_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_b_112_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v_tail_116_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
return v_x_129_;
}
else
{
lean_object* v_key_131_; lean_object* v_value_132_; lean_object* v_tail_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_159_; 
v_key_131_ = lean_ctor_get(v_x_130_, 0);
v_value_132_ = lean_ctor_get(v_x_130_, 1);
v_tail_133_ = lean_ctor_get(v_x_130_, 2);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_159_ == 0)
{
v___x_135_ = v_x_130_;
v_isShared_136_ = v_isSharedCheck_159_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_tail_133_);
lean_inc(v_value_132_);
lean_inc(v_key_131_);
lean_dec(v_x_130_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_159_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; uint64_t v___y_139_; 
v___x_137_ = lean_array_get_size(v_x_129_);
if (lean_obj_tag(v_key_131_) == 0)
{
uint64_t v___x_157_; 
v___x_157_ = 1723ULL;
v___y_139_ = v___x_157_;
goto v___jp_138_;
}
else
{
uint64_t v_hash_158_; 
v_hash_158_ = lean_ctor_get_uint64(v_key_131_, sizeof(void*)*2);
v___y_139_ = v_hash_158_;
goto v___jp_138_;
}
v___jp_138_:
{
uint64_t v___x_140_; uint64_t v___x_141_; uint64_t v_fold_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v___x_149_; size_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_140_ = 32ULL;
v___x_141_ = lean_uint64_shift_right(v___y_139_, v___x_140_);
v_fold_142_ = lean_uint64_xor(v___y_139_, v___x_141_);
v___x_143_ = 16ULL;
v___x_144_ = lean_uint64_shift_right(v_fold_142_, v___x_143_);
v___x_145_ = lean_uint64_xor(v_fold_142_, v___x_144_);
v___x_146_ = lean_uint64_to_usize(v___x_145_);
v___x_147_ = lean_usize_of_nat(v___x_137_);
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_sub(v___x_147_, v___x_148_);
v___x_150_ = lean_usize_land(v___x_146_, v___x_149_);
v___x_151_ = lean_array_uget_borrowed(v_x_129_, v___x_150_);
lean_inc(v___x_151_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 2, v___x_151_);
v___x_153_ = v___x_135_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_key_131_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_value_132_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v___x_151_);
v___x_153_ = v_reuseFailAlloc_156_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_array_uset(v_x_129_, v___x_150_, v___x_153_);
v_x_129_ = v___x_154_;
v_x_130_ = v_tail_133_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(lean_object* v_i_160_, lean_object* v_source_161_, lean_object* v_target_162_){
_start:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_array_get_size(v_source_161_);
v___x_164_ = lean_nat_dec_lt(v_i_160_, v___x_163_);
if (v___x_164_ == 0)
{
lean_dec_ref(v_source_161_);
lean_dec(v_i_160_);
return v_target_162_;
}
else
{
lean_object* v_es_165_; lean_object* v___x_166_; lean_object* v_source_167_; lean_object* v_target_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_es_165_ = lean_array_fget(v_source_161_, v_i_160_);
v___x_166_ = lean_box(0);
v_source_167_ = lean_array_fset(v_source_161_, v_i_160_, v___x_166_);
v_target_168_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(v_target_162_, v_es_165_);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_nat_add(v_i_160_, v___x_169_);
lean_dec(v_i_160_);
v_i_160_ = v___x_170_;
v_source_161_ = v_source_167_;
v_target_162_ = v_target_168_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(lean_object* v_data_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v_nbuckets_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_173_ = lean_array_get_size(v_data_172_);
v___x_174_ = lean_unsigned_to_nat(2u);
v_nbuckets_175_ = lean_nat_mul(v___x_173_, v___x_174_);
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_box(0);
v___x_178_ = lean_mk_array(v_nbuckets_175_, v___x_177_);
v___x_179_ = lean_array_propagate_mark(v_data_172_, v___x_178_);
v___x_180_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(v___x_176_, v_data_172_, v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(lean_object* v_a_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_182_) == 0)
{
uint8_t v___x_183_; 
v___x_183_ = 0;
return v___x_183_;
}
else
{
lean_object* v_key_184_; lean_object* v_tail_185_; uint8_t v___x_186_; 
v_key_184_ = lean_ctor_get(v_x_182_, 0);
v_tail_185_ = lean_ctor_get(v_x_182_, 2);
v___x_186_ = lean_name_eq(v_key_184_, v_a_181_);
if (v___x_186_ == 0)
{
v_x_182_ = v_tail_185_;
goto _start;
}
else
{
return v___x_186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg___boxed(lean_object* v_a_188_, lean_object* v_x_189_){
_start:
{
uint8_t v_res_190_; lean_object* v_r_191_; 
v_res_190_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_188_, v_x_189_);
lean_dec(v_x_189_);
lean_dec(v_a_188_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(lean_object* v_m_192_, lean_object* v_a_193_, lean_object* v_b_194_){
_start:
{
lean_object* v_size_195_; lean_object* v_buckets_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_242_; 
v_size_195_ = lean_ctor_get(v_m_192_, 0);
v_buckets_196_ = lean_ctor_get(v_m_192_, 1);
v_isSharedCheck_242_ = !lean_is_exclusive(v_m_192_);
if (v_isSharedCheck_242_ == 0)
{
v___x_198_ = v_m_192_;
v_isShared_199_ = v_isSharedCheck_242_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_buckets_196_);
lean_inc(v_size_195_);
lean_dec(v_m_192_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_242_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; uint64_t v___y_202_; 
v___x_200_ = lean_array_get_size(v_buckets_196_);
if (lean_obj_tag(v_a_193_) == 0)
{
uint64_t v___x_240_; 
v___x_240_ = 1723ULL;
v___y_202_ = v___x_240_;
goto v___jp_201_;
}
else
{
uint64_t v_hash_241_; 
v_hash_241_ = lean_ctor_get_uint64(v_a_193_, sizeof(void*)*2);
v___y_202_ = v_hash_241_;
goto v___jp_201_;
}
v___jp_201_:
{
uint64_t v___x_203_; uint64_t v___x_204_; uint64_t v_fold_205_; uint64_t v___x_206_; uint64_t v___x_207_; uint64_t v___x_208_; size_t v___x_209_; size_t v___x_210_; size_t v___x_211_; size_t v___x_212_; size_t v___x_213_; lean_object* v_bkt_214_; uint8_t v___x_215_; 
v___x_203_ = 32ULL;
v___x_204_ = lean_uint64_shift_right(v___y_202_, v___x_203_);
v_fold_205_ = lean_uint64_xor(v___y_202_, v___x_204_);
v___x_206_ = 16ULL;
v___x_207_ = lean_uint64_shift_right(v_fold_205_, v___x_206_);
v___x_208_ = lean_uint64_xor(v_fold_205_, v___x_207_);
v___x_209_ = lean_uint64_to_usize(v___x_208_);
v___x_210_ = lean_usize_of_nat(v___x_200_);
v___x_211_ = ((size_t)1ULL);
v___x_212_ = lean_usize_sub(v___x_210_, v___x_211_);
v___x_213_ = lean_usize_land(v___x_209_, v___x_212_);
v_bkt_214_ = lean_array_uget_borrowed(v_buckets_196_, v___x_213_);
v___x_215_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_193_, v_bkt_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v_size_x27_217_; lean_object* v___x_218_; lean_object* v_buckets_x27_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_216_ = lean_unsigned_to_nat(1u);
v_size_x27_217_ = lean_nat_add(v_size_195_, v___x_216_);
lean_dec(v_size_195_);
lean_inc(v_bkt_214_);
v___x_218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_218_, 0, v_a_193_);
lean_ctor_set(v___x_218_, 1, v_b_194_);
lean_ctor_set(v___x_218_, 2, v_bkt_214_);
v_buckets_x27_219_ = lean_array_uset(v_buckets_196_, v___x_213_, v___x_218_);
v___x_220_ = lean_unsigned_to_nat(4u);
v___x_221_ = lean_nat_mul(v_size_x27_217_, v___x_220_);
v___x_222_ = lean_unsigned_to_nat(3u);
v___x_223_ = lean_nat_div(v___x_221_, v___x_222_);
lean_dec(v___x_221_);
v___x_224_ = lean_array_get_size(v_buckets_x27_219_);
v___x_225_ = lean_nat_dec_le(v___x_223_, v___x_224_);
lean_dec(v___x_223_);
if (v___x_225_ == 0)
{
lean_object* v_val_226_; lean_object* v___x_228_; 
v_val_226_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(v_buckets_x27_219_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_val_226_);
lean_ctor_set(v___x_198_, 0, v_size_x27_217_);
v___x_228_ = v___x_198_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_size_x27_217_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v_val_226_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
else
{
lean_object* v___x_231_; 
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_buckets_x27_219_);
lean_ctor_set(v___x_198_, 0, v_size_x27_217_);
v___x_231_ = v___x_198_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_size_x27_217_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_buckets_x27_219_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
else
{
lean_object* v___x_233_; lean_object* v_buckets_x27_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
lean_inc(v_bkt_214_);
v___x_233_ = lean_box(0);
v_buckets_x27_234_ = lean_array_uset(v_buckets_196_, v___x_213_, v___x_233_);
v___x_235_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_193_, v_b_194_, v_bkt_214_);
v___x_236_ = lean_array_uset(v_buckets_x27_234_, v___x_213_, v___x_235_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_236_);
v___x_238_ = v___x_198_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_size_195_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(lean_object* v_a_243_, lean_object* v_b_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_245_) == 0)
{
lean_dec(v_b_244_);
lean_dec(v_a_243_);
return v_x_245_;
}
else
{
lean_object* v_key_246_; lean_object* v_value_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_260_; 
v_key_246_ = lean_ctor_get(v_x_245_, 0);
v_value_247_ = lean_ctor_get(v_x_245_, 1);
v_tail_248_ = lean_ctor_get(v_x_245_, 2);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_245_);
if (v_isSharedCheck_260_ == 0)
{
v___x_250_ = v_x_245_;
v_isShared_251_ = v_isSharedCheck_260_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_value_247_);
lean_inc(v_key_246_);
lean_dec(v_x_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_260_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
uint8_t v___x_252_; 
v___x_252_ = lean_level_eq(v_key_246_, v_a_243_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_243_, v_b_244_, v_tail_248_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 2, v___x_253_);
v___x_255_ = v___x_250_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_key_246_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_value_247_);
lean_ctor_set(v_reuseFailAlloc_256_, 2, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
else
{
lean_object* v___x_258_; 
lean_dec(v_value_247_);
lean_dec(v_key_246_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 1, v_b_244_);
lean_ctor_set(v___x_250_, 0, v_a_243_);
v___x_258_ = v___x_250_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_243_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_b_244_);
lean_ctor_set(v_reuseFailAlloc_259_, 2, v_tail_248_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
return v_x_261_;
}
else
{
lean_object* v_key_263_; lean_object* v_value_264_; lean_object* v_tail_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_288_; 
v_key_263_ = lean_ctor_get(v_x_262_, 0);
v_value_264_ = lean_ctor_get(v_x_262_, 1);
v_tail_265_ = lean_ctor_get(v_x_262_, 2);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_288_ == 0)
{
v___x_267_ = v_x_262_;
v_isShared_268_ = v_isSharedCheck_288_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_tail_265_);
lean_inc(v_value_264_);
lean_inc(v_key_263_);
lean_dec(v_x_262_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_288_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; uint64_t v___x_270_; uint64_t v___x_271_; uint64_t v___x_272_; uint64_t v_fold_273_; uint64_t v___x_274_; uint64_t v___x_275_; uint64_t v___x_276_; size_t v___x_277_; size_t v___x_278_; size_t v___x_279_; size_t v___x_280_; size_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_269_ = lean_array_get_size(v_x_261_);
v___x_270_ = l_Lean_Level_hash(v_key_263_);
v___x_271_ = 32ULL;
v___x_272_ = lean_uint64_shift_right(v___x_270_, v___x_271_);
v_fold_273_ = lean_uint64_xor(v___x_270_, v___x_272_);
v___x_274_ = 16ULL;
v___x_275_ = lean_uint64_shift_right(v_fold_273_, v___x_274_);
v___x_276_ = lean_uint64_xor(v_fold_273_, v___x_275_);
v___x_277_ = lean_uint64_to_usize(v___x_276_);
v___x_278_ = lean_usize_of_nat(v___x_269_);
v___x_279_ = ((size_t)1ULL);
v___x_280_ = lean_usize_sub(v___x_278_, v___x_279_);
v___x_281_ = lean_usize_land(v___x_277_, v___x_280_);
v___x_282_ = lean_array_uget_borrowed(v_x_261_, v___x_281_);
lean_inc(v___x_282_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 2, v___x_282_);
v___x_284_ = v___x_267_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_key_263_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_value_264_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v___x_282_);
v___x_284_ = v_reuseFailAlloc_287_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; 
v___x_285_ = lean_array_uset(v_x_261_, v___x_281_, v___x_284_);
v_x_261_ = v___x_285_;
v_x_262_ = v_tail_265_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(lean_object* v_i_289_, lean_object* v_source_290_, lean_object* v_target_291_){
_start:
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = lean_array_get_size(v_source_290_);
v___x_293_ = lean_nat_dec_lt(v_i_289_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec_ref(v_source_290_);
lean_dec(v_i_289_);
return v_target_291_;
}
else
{
lean_object* v_es_294_; lean_object* v___x_295_; lean_object* v_source_296_; lean_object* v_target_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_es_294_ = lean_array_fget(v_source_290_, v_i_289_);
v___x_295_ = lean_box(0);
v_source_296_ = lean_array_fset(v_source_290_, v_i_289_, v___x_295_);
v_target_297_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(v_target_291_, v_es_294_);
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_add(v_i_289_, v___x_298_);
lean_dec(v_i_289_);
v_i_289_ = v___x_299_;
v_source_290_ = v_source_296_;
v_target_291_ = v_target_297_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(lean_object* v_data_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_nbuckets_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_302_ = lean_array_get_size(v_data_301_);
v___x_303_ = lean_unsigned_to_nat(2u);
v_nbuckets_304_ = lean_nat_mul(v___x_302_, v___x_303_);
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_box(0);
v___x_307_ = lean_mk_array(v_nbuckets_304_, v___x_306_);
v___x_308_ = lean_array_propagate_mark(v_data_301_, v___x_307_);
v___x_309_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(v___x_305_, v_data_301_, v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(lean_object* v_a_310_, lean_object* v_x_311_){
_start:
{
if (lean_obj_tag(v_x_311_) == 0)
{
uint8_t v___x_312_; 
v___x_312_ = 0;
return v___x_312_;
}
else
{
lean_object* v_key_313_; lean_object* v_tail_314_; uint8_t v___x_315_; 
v_key_313_ = lean_ctor_get(v_x_311_, 0);
v_tail_314_ = lean_ctor_get(v_x_311_, 2);
v___x_315_ = lean_level_eq(v_key_313_, v_a_310_);
if (v___x_315_ == 0)
{
v_x_311_ = v_tail_314_;
goto _start;
}
else
{
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg___boxed(lean_object* v_a_317_, lean_object* v_x_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_317_, v_x_318_);
lean_dec(v_x_318_);
lean_dec(v_a_317_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(lean_object* v_m_321_, lean_object* v_a_322_, lean_object* v_b_323_){
_start:
{
lean_object* v_size_324_; lean_object* v_buckets_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_368_; 
v_size_324_ = lean_ctor_get(v_m_321_, 0);
v_buckets_325_ = lean_ctor_get(v_m_321_, 1);
v_isSharedCheck_368_ = !lean_is_exclusive(v_m_321_);
if (v_isSharedCheck_368_ == 0)
{
v___x_327_ = v_m_321_;
v_isShared_328_ = v_isSharedCheck_368_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_buckets_325_);
lean_inc(v_size_324_);
lean_dec(v_m_321_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_368_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; uint64_t v_fold_333_; uint64_t v___x_334_; uint64_t v___x_335_; uint64_t v___x_336_; size_t v___x_337_; size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; lean_object* v_bkt_342_; uint8_t v___x_343_; 
v___x_329_ = lean_array_get_size(v_buckets_325_);
v___x_330_ = l_Lean_Level_hash(v_a_322_);
v___x_331_ = 32ULL;
v___x_332_ = lean_uint64_shift_right(v___x_330_, v___x_331_);
v_fold_333_ = lean_uint64_xor(v___x_330_, v___x_332_);
v___x_334_ = 16ULL;
v___x_335_ = lean_uint64_shift_right(v_fold_333_, v___x_334_);
v___x_336_ = lean_uint64_xor(v_fold_333_, v___x_335_);
v___x_337_ = lean_uint64_to_usize(v___x_336_);
v___x_338_ = lean_usize_of_nat(v___x_329_);
v___x_339_ = ((size_t)1ULL);
v___x_340_ = lean_usize_sub(v___x_338_, v___x_339_);
v___x_341_ = lean_usize_land(v___x_337_, v___x_340_);
v_bkt_342_ = lean_array_uget_borrowed(v_buckets_325_, v___x_341_);
v___x_343_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_322_, v_bkt_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v_size_x27_345_; lean_object* v___x_346_; lean_object* v_buckets_x27_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_344_ = lean_unsigned_to_nat(1u);
v_size_x27_345_ = lean_nat_add(v_size_324_, v___x_344_);
lean_dec(v_size_324_);
lean_inc(v_bkt_342_);
v___x_346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_346_, 0, v_a_322_);
lean_ctor_set(v___x_346_, 1, v_b_323_);
lean_ctor_set(v___x_346_, 2, v_bkt_342_);
v_buckets_x27_347_ = lean_array_uset(v_buckets_325_, v___x_341_, v___x_346_);
v___x_348_ = lean_unsigned_to_nat(4u);
v___x_349_ = lean_nat_mul(v_size_x27_345_, v___x_348_);
v___x_350_ = lean_unsigned_to_nat(3u);
v___x_351_ = lean_nat_div(v___x_349_, v___x_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_array_get_size(v_buckets_x27_347_);
v___x_353_ = lean_nat_dec_le(v___x_351_, v___x_352_);
lean_dec(v___x_351_);
if (v___x_353_ == 0)
{
lean_object* v_val_354_; lean_object* v___x_356_; 
v_val_354_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(v_buckets_x27_347_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_val_354_);
lean_ctor_set(v___x_327_, 0, v_size_x27_345_);
v___x_356_ = v___x_327_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_size_x27_345_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_val_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
else
{
lean_object* v___x_359_; 
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_buckets_x27_347_);
lean_ctor_set(v___x_327_, 0, v_size_x27_345_);
v___x_359_ = v___x_327_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_size_x27_345_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_buckets_x27_347_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
else
{
lean_object* v___x_361_; lean_object* v_buckets_x27_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
lean_inc(v_bkt_342_);
v___x_361_ = lean_box(0);
v_buckets_x27_362_ = lean_array_uset(v_buckets_325_, v___x_341_, v___x_361_);
v___x_363_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_322_, v_b_323_, v_bkt_342_);
v___x_364_ = lean_array_uset(v_buckets_x27_362_, v___x_341_, v___x_363_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v___x_364_);
v___x_366_ = v___x_327_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_size_324_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_box(0);
v___x_370_ = lean_unsigned_to_nat(524288u);
v___x_371_ = lean_mk_array(v___x_370_, v___x_369_);
return v___x_371_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__0, &l_LeanExport_M_run___redArg___closed__0_once, _init_l_LeanExport_M_run___redArg___closed__0);
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_372_);
return v___x_374_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_box(0);
v___x_377_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__1, &l_LeanExport_M_run___redArg___closed__1_once, _init_l_LeanExport_M_run___redArg___closed__1);
v___x_378_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v___x_377_, v___x_376_, v___x_375_);
return v___x_378_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = lean_box(0);
v___x_380_ = lean_unsigned_to_nat(2048u);
v___x_381_ = lean_mk_array(v___x_380_, v___x_379_);
return v___x_381_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__4(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__3, &l_LeanExport_M_run___redArg___closed__3_once, _init_l_LeanExport_M_run___redArg___closed__3);
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___x_382_);
return v___x_384_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__5(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_385_ = lean_unsigned_to_nat(0u);
v___x_386_ = lean_box(0);
v___x_387_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__4, &l_LeanExport_M_run___redArg___closed__4_once, _init_l_LeanExport_M_run___redArg___closed__4);
v___x_388_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v___x_387_, v___x_386_, v___x_385_);
return v___x_388_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__6(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = lean_box(0);
v___x_390_ = lean_unsigned_to_nat(16777216u);
v___x_391_ = lean_mk_array(v___x_390_, v___x_389_);
return v___x_391_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__7(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__6, &l_LeanExport_M_run___redArg___closed__6_once, _init_l_LeanExport_M_run___redArg___closed__6);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_392_);
return v___x_394_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__8(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_box(0);
v___x_396_ = lean_unsigned_to_nat(16u);
v___x_397_ = lean_mk_array(v___x_396_, v___x_395_);
return v___x_397_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__9(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__8, &l_LeanExport_M_run___redArg___closed__8_once, _init_l_LeanExport_M_run___redArg___closed__8);
v___x_399_ = lean_unsigned_to_nat(0u);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___x_398_);
return v___x_400_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__10(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_box(0);
v___x_402_ = lean_unsigned_to_nat(262144u);
v___x_403_ = lean_mk_array(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__11(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__10, &l_LeanExport_M_run___redArg___closed__10_once, _init_l_LeanExport_M_run___redArg___closed__10);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__12(void){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_407_ = lean_box(1);
v___x_408_ = 0;
v___x_409_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__11, &l_LeanExport_M_run___redArg___closed__11_once, _init_l_LeanExport_M_run___redArg___closed__11);
v___x_410_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__9, &l_LeanExport_M_run___redArg___closed__9_once, _init_l_LeanExport_M_run___redArg___closed__9);
v___x_411_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__7, &l_LeanExport_M_run___redArg___closed__7_once, _init_l_LeanExport_M_run___redArg___closed__7);
v___x_412_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__5, &l_LeanExport_M_run___redArg___closed__5_once, _init_l_LeanExport_M_run___redArg___closed__5);
v___x_413_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__2, &l_LeanExport_M_run___redArg___closed__2_once, _init_l_LeanExport_M_run___redArg___closed__2);
v___x_414_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_412_);
lean_ctor_set(v___x_414_, 2, v___x_411_);
lean_ctor_set(v___x_414_, 3, v___x_410_);
lean_ctor_set(v___x_414_, 4, v___x_409_);
lean_ctor_set(v___x_414_, 5, v___x_407_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*6, v___x_408_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*6 + 1, v___x_408_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*6 + 2, v___x_408_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg(lean_object* v_env_415_, lean_object* v_act_416_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__12, &l_LeanExport_M_run___redArg___closed__12_once, _init_l_LeanExport_M_run___redArg___closed__12);
v___x_419_ = lean_apply_3(v_act_416_, v_env_415_, v___x_418_, lean_box(0));
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_428_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_428_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_fst_424_; lean_object* v___x_426_; 
v_fst_424_ = lean_ctor_get(v_a_420_, 0);
lean_inc(v_fst_424_);
lean_dec(v_a_420_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v_fst_424_);
v___x_426_ = v___x_422_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_fst_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
v_a_429_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_419_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_419_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg___boxed(lean_object* v_env_437_, lean_object* v_act_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_LeanExport_M_run___redArg(v_env_437_, v_act_438_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run(lean_object* v_00_u03b1_441_, lean_object* v_env_442_, lean_object* v_act_443_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_LeanExport_M_run___redArg(v_env_442_, v_act_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___boxed(lean_object* v_00_u03b1_446_, lean_object* v_env_447_, lean_object* v_act_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_LeanExport_M_run(v_00_u03b1_446_, v_env_447_, v_act_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0(lean_object* v_00_u03b2_451_, lean_object* v_m_452_, lean_object* v_a_453_, lean_object* v_b_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_m_452_, v_a_453_, v_b_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1(lean_object* v_00_u03b2_456_, lean_object* v_m_457_, lean_object* v_a_458_, lean_object* v_b_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_m_457_, v_a_458_, v_b_459_);
return v___x_460_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(lean_object* v_00_u03b2_461_, lean_object* v_a_462_, lean_object* v_x_463_){
_start:
{
uint8_t v___x_464_; 
v___x_464_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_462_, v_x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___boxed(lean_object* v_00_u03b2_465_, lean_object* v_a_466_, lean_object* v_x_467_){
_start:
{
uint8_t v_res_468_; lean_object* v_r_469_; 
v_res_468_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(v_00_u03b2_465_, v_a_466_, v_x_467_);
lean_dec(v_x_467_);
lean_dec(v_a_466_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1(lean_object* v_00_u03b2_470_, lean_object* v_data_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(v_data_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2(lean_object* v_00_u03b2_473_, lean_object* v_a_474_, lean_object* v_b_475_, lean_object* v_x_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_474_, v_b_475_, v_x_476_);
return v___x_477_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(lean_object* v_00_u03b2_478_, lean_object* v_a_479_, lean_object* v_x_480_){
_start:
{
uint8_t v___x_481_; 
v___x_481_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_479_, v_x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___boxed(lean_object* v_00_u03b2_482_, lean_object* v_a_483_, lean_object* v_x_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(v_00_u03b2_482_, v_a_483_, v_x_484_);
lean_dec(v_x_484_);
lean_dec(v_a_483_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5(lean_object* v_00_u03b2_487_, lean_object* v_data_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(v_data_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6(lean_object* v_00_u03b2_490_, lean_object* v_a_491_, lean_object* v_b_492_, lean_object* v_x_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_491_, v_b_492_, v_x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_495_, lean_object* v_i_496_, lean_object* v_source_497_, lean_object* v_target_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(v_i_496_, v_source_497_, v_target_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7(lean_object* v_00_u03b2_500_, lean_object* v_i_501_, lean_object* v_source_502_, lean_object* v_target_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(v_i_501_, v_source_502_, v_target_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_505_, lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(v_x_506_, v_x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(v_x_510_, v_x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg___lam__0(lean_object* v_val_513_, lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_toConstantVal_515_; lean_object* v_name_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_toConstantVal_515_ = lean_ctor_get(v_val_513_, 0);
lean_inc_ref(v_toConstantVal_515_);
lean_dec_ref(v_val_513_);
v_name_516_ = lean_ctor_get(v_toConstantVal_515_, 0);
lean_inc(v_name_516_);
lean_dec_ref(v_toConstantVal_515_);
v___x_517_ = l_Lean_NameSet_empty;
v___x_518_ = l_Lean_NameSet_insert(v___x_517_, v_name_516_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
else
{
lean_object* v_toConstantVal_520_; lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_530_; 
v_toConstantVal_520_ = lean_ctor_get(v_val_513_, 0);
lean_inc_ref(v_toConstantVal_520_);
lean_dec_ref(v_val_513_);
v_val_521_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_530_ == 0)
{
v___x_523_ = v_x_514_;
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_dec(v_x_514_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v_name_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v_name_525_ = lean_ctor_get(v_toConstantVal_520_, 0);
lean_inc(v_name_525_);
lean_dec_ref(v_toConstantVal_520_);
v___x_526_ = l_Lean_NameSet_insert(v_val_521_, v_name_525_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_526_);
v___x_528_ = v___x_523_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg(lean_object* v_val_531_, lean_object* v_as_x27_532_, lean_object* v_b_533_, lean_object* v___y_534_){
_start:
{
if (lean_obj_tag(v_as_x27_532_) == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec_ref(v_val_531_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_b_533_);
lean_ctor_set(v___x_536_, 1, v___y_534_);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
else
{
lean_object* v_head_538_; lean_object* v_tail_539_; lean_object* v___f_540_; lean_object* v___x_541_; 
v_head_538_ = lean_ctor_get(v_as_x27_532_, 0);
v_tail_539_ = lean_ctor_get(v_as_x27_532_, 1);
lean_inc_ref(v_val_531_);
v___f_540_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg___lam__0), 2, 1);
lean_closure_set(v___f_540_, 0, v_val_531_);
lean_inc(v_head_538_);
v___x_541_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v___f_540_, v_head_538_, v_b_533_);
v_as_x27_532_ = v_tail_539_;
v_b_533_ = v___x_541_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg___boxed(lean_object* v_val_543_, lean_object* v_as_x27_544_, lean_object* v_b_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg(v_val_543_, v_as_x27_544_, v_b_545_, v___y_546_);
lean_dec(v_as_x27_544_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0(lean_object* v_x_549_, lean_object* v_y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
lean_object* v_a_556_; lean_object* v_snd_557_; 
if (lean_obj_tag(v_y_550_) == 7)
{
lean_object* v_val_563_; lean_object* v_all_564_; lean_object* v___x_565_; lean_object* v_a_566_; lean_object* v_fst_567_; lean_object* v_snd_568_; 
v_val_563_ = lean_ctor_get(v_y_550_, 0);
lean_inc_ref(v_val_563_);
lean_dec_ref_known(v_y_550_, 1);
v_all_564_ = lean_ctor_get(v_val_563_, 1);
lean_inc(v_all_564_);
v___x_565_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg(v_val_563_, v_all_564_, v___y_551_, v___y_553_);
lean_dec(v_all_564_);
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref(v___x_565_);
v_fst_567_ = lean_ctor_get(v_a_566_, 0);
lean_inc(v_fst_567_);
v_snd_568_ = lean_ctor_get(v_a_566_, 1);
lean_inc(v_snd_568_);
lean_dec(v_a_566_);
v_a_556_ = v_fst_567_;
v_snd_557_ = v_snd_568_;
goto v___jp_555_;
}
else
{
lean_dec_ref(v_y_550_);
v_a_556_ = v___y_551_;
v_snd_557_ = v___y_553_;
goto v___jp_555_;
}
v___jp_555_:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_558_ = lean_box(0);
v___x_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
lean_ctor_set(v___x_559_, 1, v_a_556_);
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v_snd_557_);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0___boxed(lean_object* v_x_569_, lean_object* v_y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_LeanExport_initState___lam__0(v_x_569_, v_y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v_x_569_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___lam__0(lean_object* v_f_576_, lean_object* v_x_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v___x_584_; 
lean_inc_ref(v___y_581_);
v___x_584_ = lean_apply_6(v_f_576_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, lean_box(0));
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___lam__0___boxed(lean_object* v_f_585_, lean_object* v_x_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___lam__0(v_f_585_, v_x_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec_ref(v___y_590_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg(lean_object* v_f_594_, lean_object* v_keys_595_, lean_object* v_vals_596_, lean_object* v_i_597_, lean_object* v_acc_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_array_get_size(v_keys_595_);
v___x_604_ = lean_nat_dec_lt(v_i_597_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec(v_i_597_);
lean_dec_ref(v_f_594_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v_acc_598_);
lean_ctor_set(v___x_605_, 1, v___y_599_);
v___x_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set(v___x_607_, 1, v___y_601_);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
else
{
lean_object* v_k_609_; lean_object* v_v_610_; lean_object* v___x_611_; 
v_k_609_ = lean_array_fget_borrowed(v_keys_595_, v_i_597_);
v_v_610_ = lean_array_fget_borrowed(v_vals_596_, v_i_597_);
lean_inc_ref(v_f_594_);
lean_inc_ref(v___y_600_);
lean_inc(v_v_610_);
lean_inc(v_k_609_);
v___x_611_ = lean_apply_7(v_f_594_, v_acc_598_, v_k_609_, v_v_610_, v___y_599_, v___y_600_, v___y_601_, lean_box(0));
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v_fst_613_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
v_fst_613_ = lean_ctor_get(v_a_612_, 0);
if (lean_obj_tag(v_fst_613_) == 0)
{
lean_dec(v_a_612_);
lean_dec(v_i_597_);
lean_dec_ref(v_f_594_);
return v___x_611_;
}
else
{
lean_object* v_a_614_; lean_object* v_snd_615_; lean_object* v_fst_616_; lean_object* v_snd_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
lean_dec_ref_known(v___x_611_, 1);
v_a_614_ = lean_ctor_get(v_fst_613_, 0);
lean_inc(v_a_614_);
v_snd_615_ = lean_ctor_get(v_a_612_, 1);
lean_inc(v_snd_615_);
lean_dec(v_a_612_);
v_fst_616_ = lean_ctor_get(v_a_614_, 0);
lean_inc(v_fst_616_);
v_snd_617_ = lean_ctor_get(v_a_614_, 1);
lean_inc(v_snd_617_);
lean_dec(v_a_614_);
v___x_618_ = lean_unsigned_to_nat(1u);
v___x_619_ = lean_nat_add(v_i_597_, v___x_618_);
lean_dec(v_i_597_);
v_i_597_ = v___x_619_;
v_acc_598_ = v_fst_616_;
v___y_599_ = v_snd_617_;
v___y_601_ = v_snd_615_;
goto _start;
}
}
else
{
lean_dec(v_i_597_);
lean_dec_ref(v_f_594_);
return v___x_611_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg___boxed(lean_object* v_f_621_, lean_object* v_keys_622_, lean_object* v_vals_623_, lean_object* v_i_624_, lean_object* v_acc_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg(v_f_621_, v_keys_622_, v_vals_623_, v_i_624_, v_acc_625_, v___y_626_, v___y_627_, v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec_ref(v_vals_623_);
lean_dec_ref(v_keys_622_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(lean_object* v_f_631_, lean_object* v_as_632_, size_t v_i_633_, size_t v_stop_634_, lean_object* v_b_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_fst_641_; lean_object* v_snd_642_; lean_object* v_snd_643_; lean_object* v___y_648_; uint8_t v___x_655_; 
v___x_655_ = lean_usize_dec_eq(v_i_633_, v_stop_634_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_array_uget_borrowed(v_as_632_, v_i_633_);
switch(lean_obj_tag(v___x_656_))
{
case 0:
{
lean_object* v_key_657_; lean_object* v_val_658_; lean_object* v___x_659_; 
v_key_657_ = lean_ctor_get(v___x_656_, 0);
v_val_658_ = lean_ctor_get(v___x_656_, 1);
lean_inc_ref(v_f_631_);
lean_inc_ref(v___y_637_);
lean_inc(v_val_658_);
lean_inc(v_key_657_);
v___x_659_ = lean_apply_7(v_f_631_, v_b_635_, v_key_657_, v_val_658_, v___y_636_, v___y_637_, v___y_638_, lean_box(0));
v___y_648_ = v___x_659_;
goto v___jp_647_;
}
case 1:
{
lean_object* v_node_660_; lean_object* v___x_661_; 
v_node_660_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_node_660_);
lean_inc_ref(v_f_631_);
v___x_661_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(v_f_631_, v_node_660_, v_b_635_, v___y_636_, v___y_637_, v___y_638_);
v___y_648_ = v___x_661_;
goto v___jp_647_;
}
default: 
{
v_fst_641_ = v_b_635_;
v_snd_642_ = v___y_636_;
v_snd_643_ = v___y_638_;
goto v___jp_640_;
}
}
}
else
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec_ref(v_f_631_);
v___x_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_662_, 0, v_b_635_);
lean_ctor_set(v___x_662_, 1, v___y_636_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set(v___x_664_, 1, v___y_638_);
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
return v___x_665_;
}
v___jp_640_:
{
size_t v___x_644_; size_t v___x_645_; 
v___x_644_ = ((size_t)1ULL);
v___x_645_ = lean_usize_add(v_i_633_, v___x_644_);
v_i_633_ = v___x_645_;
v_b_635_ = v_fst_641_;
v___y_636_ = v_snd_642_;
v___y_638_ = v_snd_643_;
goto _start;
}
v___jp_647_:
{
if (lean_obj_tag(v___y_648_) == 0)
{
lean_object* v_a_649_; lean_object* v_fst_650_; 
v_a_649_ = lean_ctor_get(v___y_648_, 0);
v_fst_650_ = lean_ctor_get(v_a_649_, 0);
if (lean_obj_tag(v_fst_650_) == 0)
{
lean_dec_ref(v_f_631_);
return v___y_648_;
}
else
{
lean_object* v_a_651_; lean_object* v_snd_652_; lean_object* v_fst_653_; lean_object* v_snd_654_; 
lean_inc(v_a_649_);
lean_dec_ref_known(v___y_648_, 1);
v_a_651_ = lean_ctor_get(v_fst_650_, 0);
lean_inc(v_a_651_);
v_snd_652_ = lean_ctor_get(v_a_649_, 1);
lean_inc(v_snd_652_);
lean_dec(v_a_649_);
v_fst_653_ = lean_ctor_get(v_a_651_, 0);
lean_inc(v_fst_653_);
v_snd_654_ = lean_ctor_get(v_a_651_, 1);
lean_inc(v_snd_654_);
lean_dec(v_a_651_);
v_fst_641_ = v_fst_653_;
v_snd_642_ = v_snd_654_;
v_snd_643_ = v_snd_652_;
goto v___jp_640_;
}
}
else
{
lean_dec_ref(v_f_631_);
return v___y_648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_f_666_, lean_object* v_x_667_, lean_object* v_x_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
if (lean_obj_tag(v_x_667_) == 0)
{
lean_object* v_es_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_689_; 
v_es_673_ = lean_ctor_get(v_x_667_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v_x_667_);
if (v_isSharedCheck_689_ == 0)
{
v___x_675_ = v_x_667_;
v_isShared_676_ = v_isSharedCheck_689_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_es_673_);
lean_dec(v_x_667_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_689_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_array_get_size(v_es_673_);
v___x_679_ = lean_nat_dec_lt(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_682_; 
lean_dec_ref(v_es_673_);
lean_dec_ref(v_f_666_);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v_x_668_);
lean_ctor_set(v___x_680_, 1, v___y_669_);
if (v_isShared_676_ == 0)
{
lean_ctor_set_tag(v___x_675_, 1);
lean_ctor_set(v___x_675_, 0, v___x_680_);
v___x_682_ = v___x_675_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_685_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
lean_ctor_set(v___x_683_, 1, v___y_671_);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
}
else
{
size_t v___x_686_; size_t v___x_687_; lean_object* v___x_688_; 
lean_del_object(v___x_675_);
v___x_686_ = ((size_t)0ULL);
v___x_687_ = lean_usize_of_nat(v___x_678_);
v___x_688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_f_666_, v_es_673_, v___x_686_, v___x_687_, v_x_668_, v___y_669_, v___y_670_, v___y_671_);
lean_dec_ref(v_es_673_);
return v___x_688_;
}
}
}
else
{
lean_object* v_ks_690_; lean_object* v_vs_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v_ks_690_ = lean_ctor_get(v_x_667_, 0);
lean_inc_ref(v_ks_690_);
v_vs_691_ = lean_ctor_get(v_x_667_, 1);
lean_inc_ref(v_vs_691_);
lean_dec_ref_known(v_x_667_, 2);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg(v_f_666_, v_ks_690_, v_vs_691_, v___x_692_, v_x_668_, v___y_669_, v___y_670_, v___y_671_);
lean_dec_ref(v_vs_691_);
lean_dec_ref(v_ks_690_);
return v___x_693_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_f_694_, lean_object* v_x_695_, lean_object* v_x_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(v_f_694_, v_x_695_, v_x_696_, v___y_697_, v___y_698_, v___y_699_);
lean_dec_ref(v___y_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_f_702_, lean_object* v_as_703_, lean_object* v_i_704_, lean_object* v_stop_705_, lean_object* v_b_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
size_t v_i_boxed_711_; size_t v_stop_boxed_712_; lean_object* v_res_713_; 
v_i_boxed_711_ = lean_unbox_usize(v_i_704_);
lean_dec(v_i_704_);
v_stop_boxed_712_ = lean_unbox_usize(v_stop_705_);
lean_dec(v_stop_705_);
v_res_713_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_f_702_, v_as_703_, v_i_boxed_711_, v_stop_boxed_712_, v_b_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec_ref(v_as_703_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg(lean_object* v_map_714_, lean_object* v_f_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v___f_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___f_720_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_720_, 0, v_f_715_);
v___x_721_ = lean_box(0);
v___x_722_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(v___f_720_, v_map_714_, v___x_721_, v___y_716_, v___y_717_, v___y_718_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg___boxed(lean_object* v_map_723_, lean_object* v_f_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg(v_map_723_, v_f_724_, v___y_725_, v___y_726_, v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg(lean_object* v_f_730_, lean_object* v_x_731_, lean_object* v_x_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
if (lean_obj_tag(v_x_732_) == 0)
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec_ref(v_f_730_);
v___x_737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_737_, 0, v_x_731_);
lean_ctor_set(v___x_737_, 1, v___y_733_);
v___x_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v___y_735_);
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
return v___x_740_;
}
else
{
lean_object* v_key_741_; lean_object* v_value_742_; lean_object* v_tail_743_; lean_object* v___x_744_; 
v_key_741_ = lean_ctor_get(v_x_732_, 0);
lean_inc(v_key_741_);
v_value_742_ = lean_ctor_get(v_x_732_, 1);
lean_inc(v_value_742_);
v_tail_743_ = lean_ctor_get(v_x_732_, 2);
lean_inc(v_tail_743_);
lean_dec_ref_known(v_x_732_, 3);
lean_inc_ref(v_f_730_);
lean_inc_ref(v___y_734_);
v___x_744_ = lean_apply_6(v_f_730_, v_key_741_, v_value_742_, v___y_733_, v___y_734_, v___y_735_, lean_box(0));
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v_fst_746_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
v_fst_746_ = lean_ctor_get(v_a_745_, 0);
if (lean_obj_tag(v_fst_746_) == 0)
{
lean_dec(v_a_745_);
lean_dec(v_tail_743_);
lean_dec_ref(v_f_730_);
return v___x_744_;
}
else
{
lean_object* v_a_747_; lean_object* v_snd_748_; lean_object* v_fst_749_; lean_object* v_snd_750_; 
lean_dec_ref_known(v___x_744_, 1);
v_a_747_ = lean_ctor_get(v_fst_746_, 0);
lean_inc(v_a_747_);
v_snd_748_ = lean_ctor_get(v_a_745_, 1);
lean_inc(v_snd_748_);
lean_dec(v_a_745_);
v_fst_749_ = lean_ctor_get(v_a_747_, 0);
lean_inc(v_fst_749_);
v_snd_750_ = lean_ctor_get(v_a_747_, 1);
lean_inc(v_snd_750_);
lean_dec(v_a_747_);
v_x_731_ = v_fst_749_;
v_x_732_ = v_tail_743_;
v___y_733_ = v_snd_750_;
v___y_735_ = v_snd_748_;
goto _start;
}
}
else
{
lean_dec(v_tail_743_);
lean_dec_ref(v_f_730_);
return v___x_744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg___boxed(lean_object* v_f_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg(v_f_752_, v_x_753_, v_x_754_, v___y_755_, v___y_756_, v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg(lean_object* v_f_760_, lean_object* v_as_761_, size_t v_i_762_, size_t v_stop_763_, lean_object* v_b_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
uint8_t v___x_769_; 
v___x_769_ = lean_usize_dec_eq(v_i_762_, v_stop_763_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_770_ = lean_array_uget_borrowed(v_as_761_, v_i_762_);
v___x_771_ = lean_box(0);
lean_inc(v___x_770_);
lean_inc_ref(v_f_760_);
v___x_772_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg(v_f_760_, v___x_771_, v___x_770_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v_fst_774_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
v_fst_774_ = lean_ctor_get(v_a_773_, 0);
if (lean_obj_tag(v_fst_774_) == 0)
{
lean_dec(v_a_773_);
lean_dec_ref(v_f_760_);
return v___x_772_;
}
else
{
lean_object* v_a_775_; lean_object* v_snd_776_; lean_object* v_fst_777_; lean_object* v_snd_778_; size_t v___x_779_; size_t v___x_780_; 
lean_dec_ref_known(v___x_772_, 1);
v_a_775_ = lean_ctor_get(v_fst_774_, 0);
lean_inc(v_a_775_);
v_snd_776_ = lean_ctor_get(v_a_773_, 1);
lean_inc(v_snd_776_);
lean_dec(v_a_773_);
v_fst_777_ = lean_ctor_get(v_a_775_, 0);
lean_inc(v_fst_777_);
v_snd_778_ = lean_ctor_get(v_a_775_, 1);
lean_inc(v_snd_778_);
lean_dec(v_a_775_);
v___x_779_ = ((size_t)1ULL);
v___x_780_ = lean_usize_add(v_i_762_, v___x_779_);
v_i_762_ = v___x_780_;
v_b_764_ = v_fst_777_;
v___y_765_ = v_snd_778_;
v___y_767_ = v_snd_776_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_760_);
return v___x_772_;
}
}
else
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
lean_dec_ref(v_f_760_);
v___x_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_782_, 0, v_b_764_);
lean_ctor_set(v___x_782_, 1, v___y_765_);
v___x_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___y_767_);
v___x_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg___boxed(lean_object* v_f_786_, lean_object* v_as_787_, lean_object* v_i_788_, lean_object* v_stop_789_, lean_object* v_b_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
size_t v_i_boxed_795_; size_t v_stop_boxed_796_; lean_object* v_res_797_; 
v_i_boxed_795_ = lean_unbox_usize(v_i_788_);
lean_dec(v_i_788_);
v_stop_boxed_796_ = lean_unbox_usize(v_stop_789_);
lean_dec(v_stop_789_);
v_res_797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg(v_f_786_, v_as_787_, v_i_boxed_795_, v_stop_boxed_796_, v_b_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v_as_787_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg(lean_object* v_s_798_, lean_object* v_f_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_map_u2081_804_; lean_object* v_map_u2082_805_; lean_object* v_buckets_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v_map_u2081_804_ = lean_ctor_get(v_s_798_, 0);
lean_inc_ref(v_map_u2081_804_);
v_map_u2082_805_ = lean_ctor_get(v_s_798_, 1);
lean_inc_ref(v_map_u2082_805_);
lean_dec_ref(v_s_798_);
v_buckets_806_ = lean_ctor_get(v_map_u2081_804_, 1);
lean_inc_ref(v_buckets_806_);
lean_dec_ref(v_map_u2081_804_);
v___x_807_ = lean_unsigned_to_nat(0u);
v___x_808_ = lean_array_get_size(v_buckets_806_);
v___x_809_ = lean_nat_dec_lt(v___x_807_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; 
lean_dec_ref(v_buckets_806_);
v___x_810_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg(v_map_u2082_805_, v_f_799_, v___y_800_, v___y_801_, v___y_802_);
return v___x_810_;
}
else
{
lean_object* v___x_811_; size_t v___x_812_; size_t v___x_813_; lean_object* v___x_814_; 
v___x_811_ = lean_box(0);
v___x_812_ = ((size_t)0ULL);
v___x_813_ = lean_usize_of_nat(v___x_808_);
lean_inc_ref(v_f_799_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg(v_f_799_, v_buckets_806_, v___x_812_, v___x_813_, v___x_811_, v___y_800_, v___y_801_, v___y_802_);
lean_dec_ref(v_buckets_806_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v_fst_816_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
v_fst_816_ = lean_ctor_get(v_a_815_, 0);
if (lean_obj_tag(v_fst_816_) == 0)
{
lean_dec(v_a_815_);
lean_dec_ref(v_map_u2082_805_);
lean_dec_ref(v_f_799_);
return v___x_814_;
}
else
{
lean_object* v_a_817_; lean_object* v_snd_818_; lean_object* v_snd_819_; lean_object* v___x_820_; 
lean_dec_ref_known(v___x_814_, 1);
v_a_817_ = lean_ctor_get(v_fst_816_, 0);
lean_inc(v_a_817_);
v_snd_818_ = lean_ctor_get(v_a_815_, 1);
lean_inc(v_snd_818_);
lean_dec(v_a_815_);
v_snd_819_ = lean_ctor_get(v_a_817_, 1);
lean_inc(v_snd_819_);
lean_dec(v_a_817_);
v___x_820_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg(v_map_u2082_805_, v_f_799_, v_snd_819_, v___y_801_, v_snd_818_);
return v___x_820_;
}
}
else
{
lean_dec_ref(v_map_u2082_805_);
lean_dec_ref(v_f_799_);
return v___x_814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg___boxed(lean_object* v_s_821_, lean_object* v_f_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg(v_s_821_, v_f_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec_ref(v___y_824_);
return v_res_827_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__2(lean_object* v_x_829_){
_start:
{
if (lean_obj_tag(v_x_829_) == 0)
{
uint8_t v___x_830_; 
v___x_830_ = 0;
return v___x_830_;
}
else
{
lean_object* v_head_831_; lean_object* v_tail_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v_head_831_ = lean_ctor_get(v_x_829_, 0);
v_tail_832_ = lean_ctor_get(v_x_829_, 1);
v___x_833_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__2___closed__0));
v___x_834_ = lean_string_dec_eq(v_head_831_, v___x_833_);
if (v___x_834_ == 0)
{
v_x_829_ = v_tail_832_;
goto _start;
}
else
{
return v___x_834_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__2___boxed(lean_object* v_x_836_){
_start:
{
uint8_t v_res_837_; lean_object* v_r_838_; 
v_res_837_ = l_List_any___at___00LeanExport_initState_spec__2(v_x_836_);
lean_dec(v_x_836_);
v_r_838_ = lean_box(v_res_837_);
return v_r_838_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__0(lean_object* v_x_840_){
_start:
{
if (lean_obj_tag(v_x_840_) == 0)
{
uint8_t v___x_841_; 
v___x_841_ = 0;
return v___x_841_;
}
else
{
lean_object* v_head_842_; lean_object* v_tail_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_head_842_ = lean_ctor_get(v_x_840_, 0);
v_tail_843_ = lean_ctor_get(v_x_840_, 1);
v___x_844_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__0___closed__0));
v___x_845_ = lean_string_dec_eq(v_head_842_, v___x_844_);
if (v___x_845_ == 0)
{
v_x_840_ = v_tail_843_;
goto _start;
}
else
{
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__0___boxed(lean_object* v_x_847_){
_start:
{
uint8_t v_res_848_; lean_object* v_r_849_; 
v_res_848_ = l_List_any___at___00LeanExport_initState_spec__0(v_x_847_);
lean_dec(v_x_847_);
v_r_849_ = lean_box(v_res_848_);
return v_r_849_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__1(lean_object* v_x_851_){
_start:
{
if (lean_obj_tag(v_x_851_) == 0)
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
else
{
lean_object* v_head_853_; lean_object* v_tail_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v_head_853_ = lean_ctor_get(v_x_851_, 0);
v_tail_854_ = lean_ctor_get(v_x_851_, 1);
v___x_855_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__1___closed__0));
v___x_856_ = lean_string_dec_eq(v_head_853_, v___x_855_);
if (v___x_856_ == 0)
{
v_x_851_ = v_tail_854_;
goto _start;
}
else
{
return v___x_856_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__1___boxed(lean_object* v_x_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_List_any___at___00LeanExport_initState_spec__1(v_x_858_);
lean_dec(v_x_858_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState(lean_object* v_env_862_, lean_object* v_cliOptions_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_fst_868_; lean_object* v_snd_869_; lean_object* v___f_889_; lean_object* v_recursorMap_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___f_889_ = ((lean_object*)(l_LeanExport_initState___closed__0));
v_recursorMap_890_ = lean_box(1);
v___x_891_ = l_Lean_Environment_constants(v_env_862_);
v___x_892_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg(v___x_891_, v___f_889_, v_recursorMap_890_, v___y_864_, v___y_865_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v_fst_894_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
v_fst_894_ = lean_ctor_get(v_a_893_, 0);
if (lean_obj_tag(v_fst_894_) == 0)
{
lean_object* v_snd_895_; lean_object* v_a_896_; 
lean_inc_ref(v_fst_894_);
v_snd_895_ = lean_ctor_get(v_a_893_, 1);
lean_inc(v_snd_895_);
lean_dec(v_a_893_);
v_a_896_ = lean_ctor_get(v_fst_894_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v_fst_894_, 1);
v_fst_868_ = v_a_896_;
v_snd_869_ = v_snd_895_;
goto v___jp_867_;
}
else
{
lean_object* v_a_897_; lean_object* v_snd_898_; lean_object* v_snd_899_; 
v_a_897_ = lean_ctor_get(v_fst_894_, 0);
lean_inc(v_a_897_);
v_snd_898_ = lean_ctor_get(v_a_893_, 1);
lean_inc(v_snd_898_);
lean_dec(v_a_893_);
v_snd_899_ = lean_ctor_get(v_a_897_, 1);
lean_inc(v_snd_899_);
lean_dec(v_a_897_);
v_fst_868_ = v_snd_899_;
v_snd_869_ = v_snd_898_;
goto v___jp_867_;
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
v_a_900_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_892_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_892_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
v___jp_867_:
{
lean_object* v_visitedNames_870_; lean_object* v_visitedLevels_871_; lean_object* v_visitedExprs_872_; lean_object* v_visitedConstants_873_; lean_object* v_noMDataExprs_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_887_; 
v_visitedNames_870_ = lean_ctor_get(v_snd_869_, 0);
v_visitedLevels_871_ = lean_ctor_get(v_snd_869_, 1);
v_visitedExprs_872_ = lean_ctor_get(v_snd_869_, 2);
v_visitedConstants_873_ = lean_ctor_get(v_snd_869_, 3);
v_noMDataExprs_874_ = lean_ctor_get(v_snd_869_, 4);
v_isSharedCheck_887_ = !lean_is_exclusive(v_snd_869_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v_snd_869_, 5);
lean_dec(v_unused_888_);
v___x_876_ = v_snd_869_;
v_isShared_877_ = v_isSharedCheck_887_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_noMDataExprs_874_);
lean_inc(v_visitedConstants_873_);
lean_inc(v_visitedExprs_872_);
lean_inc(v_visitedLevels_871_);
lean_inc(v_visitedNames_870_);
lean_dec(v_snd_869_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_887_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; uint8_t v___x_879_; uint8_t v___x_880_; uint8_t v___x_881_; lean_object* v___x_883_; 
v___x_878_ = lean_box(0);
v___x_879_ = l_List_any___at___00LeanExport_initState_spec__0(v_cliOptions_863_);
v___x_880_ = l_List_any___at___00LeanExport_initState_spec__1(v_cliOptions_863_);
v___x_881_ = l_List_any___at___00LeanExport_initState_spec__2(v_cliOptions_863_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 5, v_fst_868_);
v___x_883_ = v___x_876_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_visitedNames_870_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_visitedLevels_871_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v_visitedExprs_872_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v_visitedConstants_873_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v_noMDataExprs_874_);
lean_ctor_set(v_reuseFailAlloc_886_, 5, v_fst_868_);
v___x_883_ = v_reuseFailAlloc_886_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*6, v___x_879_);
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*6 + 1, v___x_880_);
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*6 + 2, v___x_881_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_878_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___boxed(lean_object* v_env_908_, lean_object* v_cliOptions_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_LeanExport_initState(v_env_908_, v_cliOptions_909_, v___y_910_, v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v_cliOptions_909_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3(lean_object* v_val_914_, lean_object* v_as_915_, lean_object* v_as_x27_916_, lean_object* v_b_917_, lean_object* v_a_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___redArg(v_val_914_, v_as_x27_916_, v_b_917_, v___y_920_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3___boxed(lean_object* v_val_923_, lean_object* v_as_924_, lean_object* v_as_x27_925_, lean_object* v_b_926_, lean_object* v_a_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__3(v_val_923_, v_as_924_, v_as_x27_925_, v_b_926_, v_a_927_, v___y_928_, v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v_as_x27_925_);
lean_dec(v_as_924_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4(lean_object* v_00_u03b2_932_, lean_object* v_s_933_, lean_object* v_f_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___redArg(v_s_933_, v_f_934_, v___y_935_, v___y_936_, v___y_937_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__4___boxed(lean_object* v_00_u03b2_940_, lean_object* v_s_941_, lean_object* v_f_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__4(v_00_u03b2_940_, v_s_941_, v_f_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec_ref(v___y_944_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4(lean_object* v_00_u03b2_948_, lean_object* v_f_949_, lean_object* v_x_950_, lean_object* v_x_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___redArg(v_f_949_, v_x_950_, v_x_951_, v___y_952_, v___y_953_, v___y_954_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4___boxed(lean_object* v_00_u03b2_957_, lean_object* v_f_958_, lean_object* v_x_959_, lean_object* v_x_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__4(v_00_u03b2_957_, v_f_958_, v_x_959_, v_x_960_, v___y_961_, v___y_962_, v___y_963_);
lean_dec_ref(v___y_962_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5(lean_object* v_00_u03b2_966_, lean_object* v_map_967_, lean_object* v_f_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___redArg(v_map_967_, v_f_968_, v___y_969_, v___y_970_, v___y_971_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5___boxed(lean_object* v_00_u03b2_974_, lean_object* v_map_975_, lean_object* v_f_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5(v_00_u03b2_974_, v_map_975_, v_f_976_, v___y_977_, v___y_978_, v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6(lean_object* v_00_u03b2_982_, lean_object* v_f_983_, lean_object* v_as_984_, size_t v_i_985_, size_t v_stop_986_, lean_object* v_b_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___redArg(v_f_983_, v_as_984_, v_i_985_, v_stop_986_, v_b_987_, v___y_988_, v___y_989_, v___y_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6___boxed(lean_object* v_00_u03b2_993_, lean_object* v_f_994_, lean_object* v_as_995_, lean_object* v_i_996_, lean_object* v_stop_997_, lean_object* v_b_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
size_t v_i_boxed_1003_; size_t v_stop_boxed_1004_; lean_object* v_res_1005_; 
v_i_boxed_1003_ = lean_unbox_usize(v_i_996_);
lean_dec(v_i_996_);
v_stop_boxed_1004_ = lean_unbox_usize(v_stop_997_);
lean_dec(v_stop_997_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__6(v_00_u03b2_993_, v_f_994_, v_as_995_, v_i_boxed_1003_, v_stop_boxed_1004_, v_b_998_, v___y_999_, v___y_1000_, v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec_ref(v_as_995_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___redArg(lean_object* v_map_1006_, lean_object* v_f_1007_, lean_object* v_init_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(v_f_1007_, v_map_1006_, v_init_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_map_1014_, lean_object* v_f_1015_, lean_object* v_init_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___redArg(v_map_1014_, v_f_1015_, v_init_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
lean_dec_ref(v___y_1018_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6(lean_object* v_00_u03c3_1022_, lean_object* v_00_u03b2_1023_, lean_object* v_map_1024_, lean_object* v_f_1025_, lean_object* v_init_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(v_f_1025_, v_map_1024_, v_init_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03c3_1032_, lean_object* v_00_u03b2_1033_, lean_object* v_map_1034_, lean_object* v_f_1035_, lean_object* v_init_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6(v_00_u03c3_1032_, v_00_u03b2_1033_, v_map_1034_, v_f_1035_, v_init_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03c3_1042_, lean_object* v_00_u03b1_1043_, lean_object* v_00_u03b2_1044_, lean_object* v_f_1045_, lean_object* v_x_1046_, lean_object* v_x_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___redArg(v_f_1045_, v_x_1046_, v_x_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03c3_1053_, lean_object* v_00_u03b1_1054_, lean_object* v_00_u03b2_1055_, lean_object* v_f_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7(v_00_u03c3_1053_, v_00_u03b1_1054_, v_00_u03b2_1055_, v_f_1056_, v_x_1057_, v_x_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
lean_dec_ref(v___y_1060_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_1064_, lean_object* v_00_u03b2_1065_, lean_object* v_00_u03c3_1066_, lean_object* v_f_1067_, lean_object* v_as_1068_, size_t v_i_1069_, size_t v_stop_1070_, lean_object* v_b_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_f_1067_, v_as_1068_, v_i_1069_, v_stop_1070_, v_b_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1077_, lean_object* v_00_u03b2_1078_, lean_object* v_00_u03c3_1079_, lean_object* v_f_1080_, lean_object* v_as_1081_, lean_object* v_i_1082_, lean_object* v_stop_1083_, lean_object* v_b_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
size_t v_i_boxed_1089_; size_t v_stop_boxed_1090_; lean_object* v_res_1091_; 
v_i_boxed_1089_ = lean_unbox_usize(v_i_1082_);
lean_dec(v_i_1082_);
v_stop_boxed_1090_ = lean_unbox_usize(v_stop_1083_);
lean_dec(v_stop_1083_);
v_res_1091_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__9(v_00_u03b1_1077_, v_00_u03b2_1078_, v_00_u03c3_1079_, v_f_1080_, v_as_1081_, v_i_boxed_1089_, v_stop_boxed_1090_, v_b_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_as_1081_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10(lean_object* v_00_u03c3_1092_, lean_object* v_00_u03b1_1093_, lean_object* v_00_u03b2_1094_, lean_object* v_f_1095_, lean_object* v_keys_1096_, lean_object* v_vals_1097_, lean_object* v_heq_1098_, lean_object* v_i_1099_, lean_object* v_acc_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___redArg(v_f_1095_, v_keys_1096_, v_vals_1097_, v_i_1099_, v_acc_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10___boxed(lean_object* v_00_u03c3_1106_, lean_object* v_00_u03b1_1107_, lean_object* v_00_u03b2_1108_, lean_object* v_f_1109_, lean_object* v_keys_1110_, lean_object* v_vals_1111_, lean_object* v_heq_1112_, lean_object* v_i_1113_, lean_object* v_acc_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__4_spec__5_spec__6_spec__7_spec__10(v_00_u03c3_1106_, v_00_u03b1_1107_, v_00_u03b2_1108_, v_f_1109_, v_keys_1110_, v_vals_1111_, v_heq_1112_, v_i_1113_, v_acc_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec_ref(v_vals_1111_);
lean_dec_ref(v_keys_1110_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object* v_inst_1121_, lean_object* v_inst_1122_, lean_object* v_x_1123_, lean_object* v_namespaced_1124_, lean_object* v_getM_1125_, lean_object* v_setM_1126_, lean_object* v_rec_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
lean_inc_ref(v_getM_1125_);
lean_inc_ref(v___y_1129_);
v___x_1131_ = lean_apply_1(v_getM_1125_, v___y_1129_);
lean_inc(v_x_1123_);
lean_inc_ref(v_inst_1121_);
lean_inc_ref(v_inst_1122_);
v___x_1132_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1122_, v_inst_1121_, v___x_1131_, v_x_1123_);
lean_dec_ref(v___x_1131_);
if (lean_obj_tag(v___x_1132_) == 1)
{
lean_object* v_val_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref(v_rec_1127_);
lean_dec_ref(v_setM_1126_);
lean_dec_ref(v_getM_1125_);
lean_dec_ref(v_namespaced_1124_);
lean_dec(v_x_1123_);
lean_dec_ref(v_inst_1122_);
lean_dec_ref(v_inst_1121_);
v_val_1133_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1135_ = v___x_1132_;
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_val_1133_);
lean_dec(v___x_1132_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1137_, 0, v_val_1133_);
lean_ctor_set(v___x_1137_, 1, v___y_1129_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1137_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
else
{
lean_object* v___f_1142_; lean_object* v___x_1143_; 
lean_dec(v___x_1132_);
v___f_1142_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v___y_1128_);
v___x_1143_ = lean_apply_3(v_rec_1127_, v___y_1128_, v___y_1129_, lean_box(0));
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v_fst_1145_; lean_object* v_snd_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1178_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref_known(v___x_1143_, 1);
v_fst_1145_ = lean_ctor_get(v_a_1144_, 0);
v_snd_1146_ = lean_ctor_get(v_a_1144_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_a_1144_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1148_ = v_a_1144_;
v_isShared_1149_ = v_isSharedCheck_1178_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_snd_1146_);
lean_inc(v_fst_1145_);
lean_dec(v_a_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1178_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; lean_object* v_size_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_inc(v_snd_1146_);
v___x_1150_ = lean_apply_1(v_getM_1125_, v_snd_1146_);
v_size_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc_n(v_size_1151_, 2);
v___x_1152_ = l_Lean_JsonNumber_fromNat(v_size_1151_);
v___x_1153_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
v___x_1154_ = l_Lean_Json_setObjVal_x21(v_fst_1145_, v_namespaced_1124_, v___x_1153_);
v___x_1155_ = l_Lean_Json_compress(v___x_1154_);
v___x_1156_ = l_IO_println___redArg(v___f_1142_, v___x_1155_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1168_; 
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1168_ == 0)
{
lean_object* v_unused_1169_; 
v_unused_1169_ = lean_ctor_get(v___x_1156_, 0);
lean_dec(v_unused_1169_);
v___x_1158_ = v___x_1156_;
v_isShared_1159_ = v_isSharedCheck_1168_;
goto v_resetjp_1157_;
}
else
{
lean_dec(v___x_1156_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1168_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
lean_inc(v_size_1151_);
v___x_1160_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1122_, v_inst_1121_, v___x_1150_, v_x_1123_, v_size_1151_);
v___x_1161_ = lean_apply_2(v_setM_1126_, v_snd_1146_, v___x_1160_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 1, v___x_1161_);
lean_ctor_set(v___x_1148_, 0, v_size_1151_);
v___x_1163_ = v___x_1148_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_size_1151_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1165_; 
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v___x_1163_);
v___x_1165_ = v___x_1158_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_dec(v_size_1151_);
lean_dec_ref(v___x_1150_);
lean_del_object(v___x_1148_);
lean_dec(v_snd_1146_);
lean_dec_ref(v_setM_1126_);
lean_dec(v_x_1123_);
lean_dec_ref(v_inst_1122_);
lean_dec_ref(v_inst_1121_);
v_a_1170_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1156_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1156_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_setM_1126_);
lean_dec_ref(v_getM_1125_);
lean_dec_ref(v_namespaced_1124_);
lean_dec(v_x_1123_);
lean_dec_ref(v_inst_1122_);
lean_dec_ref(v_inst_1121_);
v_a_1179_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1143_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1143_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object* v_inst_1187_, lean_object* v_inst_1188_, lean_object* v_x_1189_, lean_object* v_namespaced_1190_, lean_object* v_getM_1191_, lean_object* v_setM_1192_, lean_object* v_rec_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(v_inst_1187_, v_inst_1188_, v_x_1189_, v_namespaced_1190_, v_getM_1191_, v_setM_1192_, v_rec_1193_, v___y_1194_, v___y_1195_);
lean_dec_ref(v___y_1194_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object* v_00_u03b1_1198_, lean_object* v_inst_1199_, lean_object* v_inst_1200_, lean_object* v_x_1201_, lean_object* v_namespaced_1202_, lean_object* v_getM_1203_, lean_object* v_setM_1204_, lean_object* v_rec_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
lean_inc_ref(v_getM_1203_);
lean_inc_ref(v___y_1207_);
v___x_1209_ = lean_apply_1(v_getM_1203_, v___y_1207_);
lean_inc(v_x_1201_);
lean_inc_ref(v_inst_1199_);
lean_inc_ref(v_inst_1200_);
v___x_1210_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1200_, v_inst_1199_, v___x_1209_, v_x_1201_);
lean_dec_ref(v___x_1209_);
if (lean_obj_tag(v___x_1210_) == 1)
{
lean_object* v_val_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1219_; 
lean_dec_ref(v_rec_1205_);
lean_dec_ref(v_setM_1204_);
lean_dec_ref(v_getM_1203_);
lean_dec_ref(v_namespaced_1202_);
lean_dec(v_x_1201_);
lean_dec_ref(v_inst_1200_);
lean_dec_ref(v_inst_1199_);
v_val_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_val_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v_val_1211_);
lean_ctor_set(v___x_1215_, 1, v___y_1207_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set_tag(v___x_1213_, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1215_);
v___x_1217_ = v___x_1213_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
else
{
lean_object* v___f_1220_; lean_object* v___x_1221_; 
lean_dec(v___x_1210_);
v___f_1220_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v___y_1206_);
v___x_1221_ = lean_apply_3(v_rec_1205_, v___y_1206_, v___y_1207_, lean_box(0));
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v_fst_1223_; lean_object* v_snd_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1256_; 
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v___x_1221_, 1);
v_fst_1223_ = lean_ctor_get(v_a_1222_, 0);
v_snd_1224_ = lean_ctor_get(v_a_1222_, 1);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_a_1222_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1226_ = v_a_1222_;
v_isShared_1227_ = v_isSharedCheck_1256_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_snd_1224_);
lean_inc(v_fst_1223_);
lean_dec(v_a_1222_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1256_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; lean_object* v_size_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_inc(v_snd_1224_);
v___x_1228_ = lean_apply_1(v_getM_1203_, v_snd_1224_);
v_size_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc_n(v_size_1229_, 2);
v___x_1230_ = l_Lean_JsonNumber_fromNat(v_size_1229_);
v___x_1231_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
v___x_1232_ = l_Lean_Json_setObjVal_x21(v_fst_1223_, v_namespaced_1202_, v___x_1231_);
v___x_1233_ = l_Lean_Json_compress(v___x_1232_);
v___x_1234_ = l_IO_println___redArg(v___f_1220_, v___x_1233_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1246_; 
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v___x_1234_, 0);
lean_dec(v_unused_1247_);
v___x_1236_ = v___x_1234_;
v_isShared_1237_ = v_isSharedCheck_1246_;
goto v_resetjp_1235_;
}
else
{
lean_dec(v___x_1234_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1246_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1241_; 
lean_inc(v_size_1229_);
v___x_1238_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1200_, v_inst_1199_, v___x_1228_, v_x_1201_, v_size_1229_);
v___x_1239_ = lean_apply_2(v_setM_1204_, v_snd_1224_, v___x_1238_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 1, v___x_1239_);
lean_ctor_set(v___x_1226_, 0, v_size_1229_);
v___x_1241_ = v___x_1226_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_size_1229_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
lean_object* v___x_1243_; 
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 0, v___x_1241_);
v___x_1243_ = v___x_1236_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec(v_size_1229_);
lean_dec_ref(v___x_1228_);
lean_del_object(v___x_1226_);
lean_dec(v_snd_1224_);
lean_dec_ref(v_setM_1204_);
lean_dec(v_x_1201_);
lean_dec_ref(v_inst_1200_);
lean_dec_ref(v_inst_1199_);
v_a_1248_ = lean_ctor_get(v___x_1234_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1234_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1234_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
lean_dec_ref(v_setM_1204_);
lean_dec_ref(v_getM_1203_);
lean_dec_ref(v_namespaced_1202_);
lean_dec(v_x_1201_);
lean_dec_ref(v_inst_1200_);
lean_dec_ref(v_inst_1199_);
v_a_1257_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1221_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1221_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object* v_00_u03b1_1265_, lean_object* v_inst_1266_, lean_object* v_inst_1267_, lean_object* v_x_1268_, lean_object* v_namespaced_1269_, lean_object* v_getM_1270_, lean_object* v_setM_1271_, lean_object* v_rec_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l___private_LeanExport_Basic_0__LeanExport_getIdx(v_00_u03b1_1265_, v_inst_1266_, v_inst_1267_, v_x_1268_, v_namespaced_1269_, v_getM_1270_, v_setM_1271_, v_rec_1272_, v___y_1273_, v___y_1274_);
lean_dec_ref(v___y_1273_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object* v_msg_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___f_1287_; lean_object* v___f_1288_; lean_object* v___f_1289_; lean_object* v___f_1290_; lean_object* v___f_1291_; lean_object* v___f_1292_; lean_object* v___f_1293_; lean_object* v___f_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___f_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1787__overap_1311_; lean_object* v___x_1312_; 
v___f_1287_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0));
v___f_1288_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1));
v___f_1289_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2));
v___f_1290_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3));
v___f_1291_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4));
v___f_1292_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1292_, 0, v___f_1291_);
lean_closure_set(v___f_1292_, 1, v___f_1290_);
v___f_1293_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1293_, 0, v___f_1290_);
v___f_1294_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5));
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___f_1287_);
lean_ctor_set(v___x_1295_, 1, v___f_1288_);
v___x_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v___f_1289_);
lean_ctor_set(v___x_1296_, 2, v___f_1292_);
lean_ctor_set(v___x_1296_, 3, v___f_1293_);
lean_ctor_set(v___x_1296_, 4, v___f_1294_);
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
lean_ctor_set(v___x_1297_, 1, v___f_1290_);
lean_inc_ref_n(v___x_1297_, 6);
v___f_1298_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1298_, 0, v___x_1297_);
v___f_1299_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1299_, 0, v___x_1297_);
v___f_1300_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1300_, 0, v___x_1297_);
v___f_1301_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1301_, 0, v___x_1297_);
v___x_1302_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1302_, 0, lean_box(0));
lean_closure_set(v___x_1302_, 1, lean_box(0));
lean_closure_set(v___x_1302_, 2, v___x_1297_);
v___x_1303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
lean_ctor_set(v___x_1303_, 1, v___f_1298_);
v___x_1304_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1304_, 0, lean_box(0));
lean_closure_set(v___x_1304_, 1, lean_box(0));
lean_closure_set(v___x_1304_, 2, v___x_1297_);
v___x_1305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
lean_ctor_set(v___x_1305_, 2, v___f_1299_);
lean_ctor_set(v___x_1305_, 3, v___f_1300_);
lean_ctor_set(v___x_1305_, 4, v___f_1301_);
v___x_1306_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1306_, 0, lean_box(0));
lean_closure_set(v___x_1306_, 1, lean_box(0));
lean_closure_set(v___x_1306_, 2, v___x_1297_);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_box(0);
v___x_1309_ = l_instInhabitedOfMonad___redArg(v___x_1307_, v___x_1308_);
v___x_1310_ = l_instInhabitedReaderT___redArg(v___x_1309_);
v___x_1787__overap_1311_ = lean_panic_fn_borrowed(v___x_1310_, v_msg_1283_);
lean_dec(v___x_1310_);
lean_inc_ref(v___y_1284_);
v___x_1312_ = lean_apply_3(v___x_1787__overap_1311_, v___y_1284_, v___y_1285_, lean_box(0));
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object* v_msg_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v_msg_1313_, v___y_1314_, v___y_1315_);
lean_dec_ref(v___y_1314_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object* v_a_1318_, lean_object* v_x_1319_){
_start:
{
if (lean_obj_tag(v_x_1319_) == 0)
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_box(0);
return v___x_1320_;
}
else
{
lean_object* v_key_1321_; lean_object* v_value_1322_; lean_object* v_tail_1323_; uint8_t v___x_1324_; 
v_key_1321_ = lean_ctor_get(v_x_1319_, 0);
v_value_1322_ = lean_ctor_get(v_x_1319_, 1);
v_tail_1323_ = lean_ctor_get(v_x_1319_, 2);
v___x_1324_ = lean_name_eq(v_key_1321_, v_a_1318_);
if (v___x_1324_ == 0)
{
v_x_1319_ = v_tail_1323_;
goto _start;
}
else
{
lean_object* v___x_1326_; 
lean_inc(v_value_1322_);
v___x_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1326_, 0, v_value_1322_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object* v_a_1327_, lean_object* v_x_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1327_, v_x_1328_);
lean_dec(v_x_1328_);
lean_dec(v_a_1327_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object* v_m_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_buckets_1332_; lean_object* v___x_1333_; uint64_t v___y_1335_; 
v_buckets_1332_ = lean_ctor_get(v_m_1330_, 1);
v___x_1333_ = lean_array_get_size(v_buckets_1332_);
if (lean_obj_tag(v_a_1331_) == 0)
{
uint64_t v___x_1349_; 
v___x_1349_ = 1723ULL;
v___y_1335_ = v___x_1349_;
goto v___jp_1334_;
}
else
{
uint64_t v_hash_1350_; 
v_hash_1350_ = lean_ctor_get_uint64(v_a_1331_, sizeof(void*)*2);
v___y_1335_ = v_hash_1350_;
goto v___jp_1334_;
}
v___jp_1334_:
{
uint64_t v___x_1336_; uint64_t v___x_1337_; uint64_t v_fold_1338_; uint64_t v___x_1339_; uint64_t v___x_1340_; uint64_t v___x_1341_; size_t v___x_1342_; size_t v___x_1343_; size_t v___x_1344_; size_t v___x_1345_; size_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1336_ = 32ULL;
v___x_1337_ = lean_uint64_shift_right(v___y_1335_, v___x_1336_);
v_fold_1338_ = lean_uint64_xor(v___y_1335_, v___x_1337_);
v___x_1339_ = 16ULL;
v___x_1340_ = lean_uint64_shift_right(v_fold_1338_, v___x_1339_);
v___x_1341_ = lean_uint64_xor(v_fold_1338_, v___x_1340_);
v___x_1342_ = lean_uint64_to_usize(v___x_1341_);
v___x_1343_ = lean_usize_of_nat(v___x_1333_);
v___x_1344_ = ((size_t)1ULL);
v___x_1345_ = lean_usize_sub(v___x_1343_, v___x_1344_);
v___x_1346_ = lean_usize_land(v___x_1342_, v___x_1345_);
v___x_1347_ = lean_array_uget_borrowed(v_buckets_1332_, v___x_1346_);
v___x_1348_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1331_, v___x_1347_);
return v___x_1348_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object* v_m_1351_, lean_object* v_a_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1351_, v_a_1352_);
lean_dec(v_a_1352_);
lean_dec_ref(v_m_1351_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object* v_s_1354_){
_start:
{
lean_object* v___x_1356_; lean_object* v_putStr_1357_; lean_object* v___x_1358_; 
v___x_1356_ = lean_get_stdout();
v_putStr_1357_ = lean_ctor_get(v___x_1356_, 4);
lean_inc_ref(v_putStr_1357_);
lean_dec_ref(v___x_1356_);
v___x_1358_ = lean_apply_2(v_putStr_1357_, v_s_1354_, lean_box(0));
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object* v_s_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v_s_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object* v_s_1362_){
_start:
{
uint32_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1364_ = 10;
v___x_1365_ = lean_string_push(v_s_1362_, v___x_1364_);
v___x_1366_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v___x_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object* v_s_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v_s_1367_);
return v_res_1369_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1374_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1375_ = lean_unsigned_to_nat(18u);
v___x_1376_ = lean_unsigned_to_nat(114u);
v___x_1377_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2));
v___x_1378_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1379_ = l_mkPanicMessageWithDecl(v___x_1378_, v___x_1377_, v___x_1376_, v___x_1375_, v___x_1374_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object* v_n_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_visitedNames_1388_; lean_object* v___x_1389_; 
v_visitedNames_1388_ = lean_ctor_get(v___y_1386_, 0);
v___x_1389_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_visitedNames_1388_, v_n_1384_);
if (lean_obj_tag(v___x_1389_) == 1)
{
lean_object* v_val_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1398_; 
lean_dec(v_n_1384_);
v_val_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_val_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1398_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1394_; lean_object* v___x_1396_; 
v___x_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1394_, 0, v_val_1390_);
lean_ctor_set(v___x_1394_, 1, v___y_1386_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set_tag(v___x_1392_, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1394_);
v___x_1396_ = v___x_1392_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
else
{
lean_object* v___x_1399_; lean_object* v_fst_1401_; lean_object* v_snd_1402_; 
lean_dec(v___x_1389_);
v___x_1399_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0));
switch(lean_obj_tag(v_n_1384_))
{
case 0:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4, &l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4);
v___x_1444_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1443_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v_fst_1446_; lean_object* v_snd_1447_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v_fst_1446_ = lean_ctor_get(v_a_1445_, 0);
lean_inc(v_fst_1446_);
v_snd_1447_ = lean_ctor_get(v_a_1445_, 1);
lean_inc(v_snd_1447_);
lean_dec(v_a_1445_);
v_fst_1401_ = v_fst_1446_;
v_snd_1402_ = v_snd_1447_;
goto v___jp_1400_;
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
v_a_1448_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1444_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1444_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
case 1:
{
lean_object* v_pre_1456_; lean_object* v_str_1457_; lean_object* v___x_1458_; 
v_pre_1456_ = lean_ctor_get(v_n_1384_, 0);
v_str_1457_ = lean_ctor_get(v_n_1384_, 1);
lean_inc(v_pre_1456_);
v___x_1458_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1456_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1487_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1461_ = v___x_1458_;
v_isShared_1462_ = v_isSharedCheck_1487_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1458_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1487_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v_fst_1463_; lean_object* v_snd_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1486_; 
v_fst_1463_ = lean_ctor_get(v_a_1459_, 0);
v_snd_1464_ = lean_ctor_get(v_a_1459_, 1);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_a_1459_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1466_ = v_a_1459_;
v_isShared_1467_ = v_isSharedCheck_1486_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_snd_1464_);
lean_inc(v_fst_1463_);
lean_dec(v_a_1459_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1486_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1472_; 
v___x_1468_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5));
v___x_1469_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1470_ = l_Lean_JsonNumber_fromNat(v_fst_1463_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set_tag(v___x_1461_, 2);
lean_ctor_set(v___x_1461_, 0, v___x_1470_);
v___x_1472_ = v___x_1461_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1470_);
v___x_1472_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___x_1474_; 
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v___x_1472_);
lean_ctor_set(v___x_1466_, 0, v___x_1469_);
v___x_1474_ = v___x_1466_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1469_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v___x_1472_);
v___x_1474_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
lean_inc_ref(v_str_1457_);
v___x_1475_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1475_, 0, v_str_1457_);
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1468_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = lean_box(0);
v___x_1478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1476_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1474_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
v___x_1480_ = l_Lean_Json_mkObj(v___x_1479_);
lean_dec_ref_known(v___x_1479_, 2);
v___x_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1468_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
lean_ctor_set(v___x_1482_, 1, v___x_1477_);
v___x_1483_ = l_Lean_Json_mkObj(v___x_1482_);
lean_dec_ref_known(v___x_1482_, 2);
v_fst_1401_ = v___x_1483_;
v_snd_1402_ = v_snd_1464_;
goto v___jp_1400_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1384_, 2);
return v___x_1458_;
}
}
default: 
{
lean_object* v_pre_1488_; lean_object* v_i_1489_; lean_object* v___x_1490_; 
v_pre_1488_ = lean_ctor_get(v_n_1384_, 0);
v_i_1489_ = lean_ctor_get(v_n_1384_, 1);
lean_inc(v_pre_1488_);
v___x_1490_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1488_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1521_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1493_ = v___x_1490_;
v_isShared_1494_ = v_isSharedCheck_1521_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1490_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1521_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v_fst_1495_; lean_object* v_snd_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1520_; 
v_fst_1495_ = lean_ctor_get(v_a_1491_, 0);
v_snd_1496_ = lean_ctor_get(v_a_1491_, 1);
v_isSharedCheck_1520_ = !lean_is_exclusive(v_a_1491_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1498_ = v_a_1491_;
v_isShared_1499_ = v_isSharedCheck_1520_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_snd_1496_);
lean_inc(v_fst_1495_);
lean_dec(v_a_1491_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1520_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1500_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7));
v___x_1501_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1502_ = l_Lean_JsonNumber_fromNat(v_fst_1495_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set_tag(v___x_1493_, 2);
lean_ctor_set(v___x_1493_, 0, v___x_1502_);
v___x_1504_ = v___x_1493_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1502_);
v___x_1504_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1506_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1504_);
lean_ctor_set(v___x_1498_, 0, v___x_1501_);
v___x_1506_ = v___x_1498_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1518_, 1, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1507_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8));
lean_inc(v_i_1489_);
v___x_1508_ = l_Lean_JsonNumber_fromNat(v_i_1489_);
v___x_1509_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
v___x_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1507_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
v___x_1511_ = lean_box(0);
v___x_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1506_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
v___x_1514_ = l_Lean_Json_mkObj(v___x_1513_);
lean_dec_ref_known(v___x_1513_, 2);
v___x_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1500_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
lean_ctor_set(v___x_1516_, 1, v___x_1511_);
v___x_1517_ = l_Lean_Json_mkObj(v___x_1516_);
lean_dec_ref_known(v___x_1516_, 2);
v_fst_1401_ = v___x_1517_;
v_snd_1402_ = v_snd_1496_;
goto v___jp_1400_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1384_, 2);
return v___x_1490_;
}
}
}
v___jp_1400_:
{
lean_object* v_visitedNames_1403_; lean_object* v_visitedLevels_1404_; lean_object* v_visitedExprs_1405_; lean_object* v_visitedConstants_1406_; lean_object* v_noMDataExprs_1407_; uint8_t v_exportMData_1408_; uint8_t v_exportUnsafe_1409_; uint8_t v_ignoreMissing_1410_; lean_object* v_recursorMap_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1442_; 
v_visitedNames_1403_ = lean_ctor_get(v_snd_1402_, 0);
v_visitedLevels_1404_ = lean_ctor_get(v_snd_1402_, 1);
v_visitedExprs_1405_ = lean_ctor_get(v_snd_1402_, 2);
v_visitedConstants_1406_ = lean_ctor_get(v_snd_1402_, 3);
v_noMDataExprs_1407_ = lean_ctor_get(v_snd_1402_, 4);
v_exportMData_1408_ = lean_ctor_get_uint8(v_snd_1402_, sizeof(void*)*6);
v_exportUnsafe_1409_ = lean_ctor_get_uint8(v_snd_1402_, sizeof(void*)*6 + 1);
v_ignoreMissing_1410_ = lean_ctor_get_uint8(v_snd_1402_, sizeof(void*)*6 + 2);
v_recursorMap_1411_ = lean_ctor_get(v_snd_1402_, 5);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_snd_1402_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1413_ = v_snd_1402_;
v_isShared_1414_ = v_isSharedCheck_1442_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_recursorMap_1411_);
lean_inc(v_noMDataExprs_1407_);
lean_inc(v_visitedConstants_1406_);
lean_inc(v_visitedExprs_1405_);
lean_inc(v_visitedLevels_1404_);
lean_inc(v_visitedNames_1403_);
lean_dec(v_snd_1402_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1442_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v_size_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v_size_1415_ = lean_ctor_get(v_visitedNames_1403_, 0);
lean_inc_n(v_size_1415_, 2);
v___x_1416_ = l_Lean_JsonNumber_fromNat(v_size_1415_);
v___x_1417_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
v___x_1418_ = l_Lean_Json_setObjVal_x21(v_fst_1401_, v___x_1399_, v___x_1417_);
v___x_1419_ = l_Lean_Json_compress(v___x_1418_);
v___x_1420_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1419_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1432_; 
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1432_ == 0)
{
lean_object* v_unused_1433_; 
v_unused_1433_ = lean_ctor_get(v___x_1420_, 0);
lean_dec(v_unused_1433_);
v___x_1422_ = v___x_1420_;
v_isShared_1423_ = v_isSharedCheck_1432_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v___x_1420_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1432_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1426_; 
lean_inc(v_size_1415_);
v___x_1424_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_visitedNames_1403_, v_n_1384_, v_size_1415_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1424_);
v___x_1426_ = v___x_1413_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v_visitedLevels_1404_);
lean_ctor_set(v_reuseFailAlloc_1431_, 2, v_visitedExprs_1405_);
lean_ctor_set(v_reuseFailAlloc_1431_, 3, v_visitedConstants_1406_);
lean_ctor_set(v_reuseFailAlloc_1431_, 4, v_noMDataExprs_1407_);
lean_ctor_set(v_reuseFailAlloc_1431_, 5, v_recursorMap_1411_);
lean_ctor_set_uint8(v_reuseFailAlloc_1431_, sizeof(void*)*6, v_exportMData_1408_);
lean_ctor_set_uint8(v_reuseFailAlloc_1431_, sizeof(void*)*6 + 1, v_exportUnsafe_1409_);
lean_ctor_set_uint8(v_reuseFailAlloc_1431_, sizeof(void*)*6 + 2, v_ignoreMissing_1410_);
v___x_1426_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___x_1427_; lean_object* v___x_1429_; 
v___x_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1427_, 0, v_size_1415_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1427_);
v___x_1429_ = v___x_1422_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v_size_1415_);
lean_del_object(v___x_1413_);
lean_dec(v_recursorMap_1411_);
lean_dec_ref(v_noMDataExprs_1407_);
lean_dec_ref(v_visitedConstants_1406_);
lean_dec_ref(v_visitedExprs_1405_);
lean_dec_ref(v_visitedLevels_1404_);
lean_dec_ref(v_visitedNames_1403_);
lean_dec(v_n_1384_);
v_a_1434_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1420_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1420_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object* v_n_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_n_1522_, v___y_1523_, v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object* v_00_u03b2_1527_, lean_object* v_m_1528_, lean_object* v_a_1529_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1528_, v_a_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object* v_00_u03b2_1531_, lean_object* v_m_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(v_00_u03b2_1531_, v_m_1532_, v_a_1533_);
lean_dec(v_a_1533_);
lean_dec_ref(v_m_1532_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object* v_00_u03b2_1535_, lean_object* v_a_1536_, lean_object* v_x_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1536_, v_x_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1539_, lean_object* v_a_1540_, lean_object* v_x_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(v_00_u03b2_1539_, v_a_1540_, v_x_1541_);
lean_dec(v_x_1541_);
lean_dec(v_a_1540_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object* v_a_1543_, lean_object* v_x_1544_){
_start:
{
if (lean_obj_tag(v_x_1544_) == 0)
{
lean_object* v___x_1545_; 
v___x_1545_ = lean_box(0);
return v___x_1545_;
}
else
{
lean_object* v_key_1546_; lean_object* v_value_1547_; lean_object* v_tail_1548_; uint8_t v___x_1549_; 
v_key_1546_ = lean_ctor_get(v_x_1544_, 0);
v_value_1547_ = lean_ctor_get(v_x_1544_, 1);
v_tail_1548_ = lean_ctor_get(v_x_1544_, 2);
v___x_1549_ = lean_level_eq(v_key_1546_, v_a_1543_);
if (v___x_1549_ == 0)
{
v_x_1544_ = v_tail_1548_;
goto _start;
}
else
{
lean_object* v___x_1551_; 
lean_inc(v_value_1547_);
v___x_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1551_, 0, v_value_1547_);
return v___x_1551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object* v_a_1552_, lean_object* v_x_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1552_, v_x_1553_);
lean_dec(v_x_1553_);
lean_dec(v_a_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object* v_m_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_buckets_1557_; lean_object* v___x_1558_; uint64_t v___x_1559_; uint64_t v___x_1560_; uint64_t v___x_1561_; uint64_t v_fold_1562_; uint64_t v___x_1563_; uint64_t v___x_1564_; uint64_t v___x_1565_; size_t v___x_1566_; size_t v___x_1567_; size_t v___x_1568_; size_t v___x_1569_; size_t v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_buckets_1557_ = lean_ctor_get(v_m_1555_, 1);
v___x_1558_ = lean_array_get_size(v_buckets_1557_);
v___x_1559_ = l_Lean_Level_hash(v_a_1556_);
v___x_1560_ = 32ULL;
v___x_1561_ = lean_uint64_shift_right(v___x_1559_, v___x_1560_);
v_fold_1562_ = lean_uint64_xor(v___x_1559_, v___x_1561_);
v___x_1563_ = 16ULL;
v___x_1564_ = lean_uint64_shift_right(v_fold_1562_, v___x_1563_);
v___x_1565_ = lean_uint64_xor(v_fold_1562_, v___x_1564_);
v___x_1566_ = lean_uint64_to_usize(v___x_1565_);
v___x_1567_ = lean_usize_of_nat(v___x_1558_);
v___x_1568_ = ((size_t)1ULL);
v___x_1569_ = lean_usize_sub(v___x_1567_, v___x_1568_);
v___x_1570_ = lean_usize_land(v___x_1566_, v___x_1569_);
v___x_1571_ = lean_array_uget_borrowed(v_buckets_1557_, v___x_1570_);
v___x_1572_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1556_, v___x_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object* v_m_1573_, lean_object* v_a_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1573_, v_a_1574_);
lean_dec(v_a_1574_);
lean_dec_ref(v_m_1573_);
return v_res_1575_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1582_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1583_ = lean_unsigned_to_nat(23u);
v___x_1584_ = lean_unsigned_to_nat(132u);
v___x_1585_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5));
v___x_1586_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1587_ = l_mkPanicMessageWithDecl(v___x_1586_, v___x_1585_, v___x_1584_, v___x_1583_, v___x_1582_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object* v_l_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_visitedLevels_1592_; lean_object* v___x_1593_; 
v_visitedLevels_1592_ = lean_ctor_get(v___y_1590_, 1);
v___x_1593_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_visitedLevels_1592_, v_l_1588_);
if (lean_obj_tag(v___x_1593_) == 1)
{
lean_object* v_val_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1602_; 
lean_dec(v_l_1588_);
v_val_1594_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1596_ = v___x_1593_;
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_val_1594_);
lean_dec(v___x_1593_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1598_, 0, v_val_1594_);
lean_ctor_set(v___x_1598_, 1, v___y_1590_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set_tag(v___x_1596_, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1598_);
v___x_1600_ = v___x_1596_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
else
{
lean_object* v___x_1603_; lean_object* v_fst_1605_; lean_object* v_snd_1606_; 
lean_dec(v___x_1593_);
v___x_1603_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0));
switch(lean_obj_tag(v_l_1588_))
{
case 1:
{
lean_object* v_a_1647_; lean_object* v___x_1648_; 
v_a_1647_ = lean_ctor_get(v_l_1588_, 0);
lean_inc(v_a_1647_);
v___x_1648_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1647_, v___y_1589_, v___y_1590_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1670_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1670_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1670_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v_fst_1653_; lean_object* v_snd_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1669_; 
v_fst_1653_ = lean_ctor_get(v_a_1649_, 0);
v_snd_1654_ = lean_ctor_get(v_a_1649_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_a_1649_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1656_ = v_a_1649_;
v_isShared_1657_ = v_isSharedCheck_1669_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_snd_1654_);
lean_inc(v_fst_1653_);
lean_dec(v_a_1649_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1669_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1661_; 
v___x_1658_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1));
v___x_1659_ = l_Lean_JsonNumber_fromNat(v_fst_1653_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set_tag(v___x_1651_, 2);
lean_ctor_set(v___x_1651_, 0, v___x_1659_);
v___x_1661_ = v___x_1651_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1659_);
v___x_1661_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
lean_object* v___x_1663_; 
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 1, v___x_1661_);
lean_ctor_set(v___x_1656_, 0, v___x_1658_);
v___x_1663_ = v___x_1656_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1664_ = lean_box(0);
v___x_1665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = l_Lean_Json_mkObj(v___x_1665_);
lean_dec_ref_known(v___x_1665_, 2);
v_fst_1605_ = v___x_1666_;
v_snd_1606_ = v_snd_1654_;
goto v___jp_1604_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1588_, 1);
return v___x_1648_;
}
}
case 2:
{
lean_object* v_a_1671_; lean_object* v_a_1672_; lean_object* v___x_1673_; 
v_a_1671_ = lean_ctor_get(v_l_1588_, 0);
v_a_1672_ = lean_ctor_get(v_l_1588_, 1);
lean_inc(v_a_1671_);
v___x_1673_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1671_, v___y_1589_, v___y_1590_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1718_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1676_ = v___x_1673_;
v_isShared_1677_ = v_isSharedCheck_1718_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1673_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1718_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v_fst_1678_; lean_object* v_snd_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1717_; 
v_fst_1678_ = lean_ctor_get(v_a_1674_, 0);
v_snd_1679_ = lean_ctor_get(v_a_1674_, 1);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_a_1674_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1681_ = v_a_1674_;
v_isShared_1682_ = v_isSharedCheck_1717_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_snd_1679_);
lean_inc(v_fst_1678_);
lean_dec(v_a_1674_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1717_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; 
lean_inc(v_a_1672_);
v___x_1683_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1672_, v___y_1589_, v_snd_1679_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1716_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1686_ = v___x_1683_;
v_isShared_1687_ = v_isSharedCheck_1716_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1683_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1716_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_fst_1688_; lean_object* v_snd_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1715_; 
v_fst_1688_ = lean_ctor_get(v_a_1684_, 0);
v_snd_1689_ = lean_ctor_get(v_a_1684_, 1);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_a_1684_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1691_ = v_a_1684_;
v_isShared_1692_ = v_isSharedCheck_1715_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_snd_1689_);
lean_inc(v_fst_1688_);
lean_dec(v_a_1684_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1715_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1696_; 
v___x_1693_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2));
v___x_1694_ = l_Lean_JsonNumber_fromNat(v_fst_1678_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 2);
lean_ctor_set(v___x_1686_, 0, v___x_1694_);
v___x_1696_ = v___x_1686_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1694_);
v___x_1696_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
lean_object* v___x_1697_; lean_object* v___x_1699_; 
v___x_1697_ = l_Lean_JsonNumber_fromNat(v_fst_1688_);
if (v_isShared_1677_ == 0)
{
lean_ctor_set_tag(v___x_1676_, 2);
lean_ctor_set(v___x_1676_, 0, v___x_1697_);
v___x_1699_ = v___x_1676_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1700_ = lean_unsigned_to_nat(2u);
v___x_1701_ = lean_mk_empty_array_with_capacity(v___x_1700_);
v___x_1702_ = lean_array_push(v___x_1701_, v___x_1696_);
v___x_1703_ = lean_array_push(v___x_1702_, v___x_1699_);
v___x_1704_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 1, v___x_1704_);
lean_ctor_set(v___x_1691_, 0, v___x_1693_);
v___x_1706_ = v___x_1691_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1693_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1707_ = lean_box(0);
if (v_isShared_1682_ == 0)
{
lean_ctor_set_tag(v___x_1681_, 1);
lean_ctor_set(v___x_1681_, 1, v___x_1707_);
lean_ctor_set(v___x_1681_, 0, v___x_1706_);
v___x_1709_ = v___x_1681_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v___x_1710_; 
v___x_1710_ = l_Lean_Json_mkObj(v___x_1709_);
lean_dec_ref(v___x_1709_);
v_fst_1605_ = v___x_1710_;
v_snd_1606_ = v_snd_1689_;
goto v___jp_1604_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1681_);
lean_dec(v_fst_1678_);
lean_del_object(v___x_1676_);
lean_dec_ref_known(v_l_1588_, 2);
return v___x_1683_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1588_, 2);
return v___x_1673_;
}
}
case 3:
{
lean_object* v_a_1719_; lean_object* v_a_1720_; lean_object* v___x_1721_; 
v_a_1719_ = lean_ctor_get(v_l_1588_, 0);
v_a_1720_ = lean_ctor_get(v_l_1588_, 1);
lean_inc(v_a_1719_);
v___x_1721_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1719_, v___y_1589_, v___y_1590_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1766_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1724_ = v___x_1721_;
v_isShared_1725_ = v_isSharedCheck_1766_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1721_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1766_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v_fst_1726_; lean_object* v_snd_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1765_; 
v_fst_1726_ = lean_ctor_get(v_a_1722_, 0);
v_snd_1727_ = lean_ctor_get(v_a_1722_, 1);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_a_1722_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1729_ = v_a_1722_;
v_isShared_1730_ = v_isSharedCheck_1765_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_snd_1727_);
lean_inc(v_fst_1726_);
lean_dec(v_a_1722_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1765_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; 
lean_inc(v_a_1720_);
v___x_1731_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1720_, v___y_1589_, v_snd_1727_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1764_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1734_ = v___x_1731_;
v_isShared_1735_ = v_isSharedCheck_1764_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1731_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1764_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v_fst_1736_; lean_object* v_snd_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1763_; 
v_fst_1736_ = lean_ctor_get(v_a_1732_, 0);
v_snd_1737_ = lean_ctor_get(v_a_1732_, 1);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_a_1732_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1739_ = v_a_1732_;
v_isShared_1740_ = v_isSharedCheck_1763_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_snd_1737_);
lean_inc(v_fst_1736_);
lean_dec(v_a_1732_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1763_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1744_; 
v___x_1741_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3));
v___x_1742_ = l_Lean_JsonNumber_fromNat(v_fst_1726_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set_tag(v___x_1734_, 2);
lean_ctor_set(v___x_1734_, 0, v___x_1742_);
v___x_1744_ = v___x_1734_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1742_);
v___x_1744_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
lean_object* v___x_1745_; lean_object* v___x_1747_; 
v___x_1745_ = l_Lean_JsonNumber_fromNat(v_fst_1736_);
if (v_isShared_1725_ == 0)
{
lean_ctor_set_tag(v___x_1724_, 2);
lean_ctor_set(v___x_1724_, 0, v___x_1745_);
v___x_1747_ = v___x_1724_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1748_ = lean_unsigned_to_nat(2u);
v___x_1749_ = lean_mk_empty_array_with_capacity(v___x_1748_);
v___x_1750_ = lean_array_push(v___x_1749_, v___x_1744_);
v___x_1751_ = lean_array_push(v___x_1750_, v___x_1747_);
v___x_1752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 1, v___x_1752_);
lean_ctor_set(v___x_1739_, 0, v___x_1741_);
v___x_1754_ = v___x_1739_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1741_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1755_; lean_object* v___x_1757_; 
v___x_1755_ = lean_box(0);
if (v_isShared_1730_ == 0)
{
lean_ctor_set_tag(v___x_1729_, 1);
lean_ctor_set(v___x_1729_, 1, v___x_1755_);
lean_ctor_set(v___x_1729_, 0, v___x_1754_);
v___x_1757_ = v___x_1729_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1754_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v___x_1755_);
v___x_1757_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Lean_Json_mkObj(v___x_1757_);
lean_dec_ref(v___x_1757_);
v_fst_1605_ = v___x_1758_;
v_snd_1606_ = v_snd_1737_;
goto v___jp_1604_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1729_);
lean_dec(v_fst_1726_);
lean_del_object(v___x_1724_);
lean_dec_ref_known(v_l_1588_, 2);
return v___x_1731_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1588_, 2);
return v___x_1721_;
}
}
case 4:
{
lean_object* v_a_1767_; lean_object* v___x_1768_; 
v_a_1767_ = lean_ctor_get(v_l_1588_, 0);
lean_inc(v_a_1767_);
v___x_1768_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_a_1767_, v___y_1589_, v___y_1590_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1790_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1771_ = v___x_1768_;
v_isShared_1772_ = v_isSharedCheck_1790_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1768_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1790_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v_fst_1773_; lean_object* v_snd_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1789_; 
v_fst_1773_ = lean_ctor_get(v_a_1769_, 0);
v_snd_1774_ = lean_ctor_get(v_a_1769_, 1);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_a_1769_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1776_ = v_a_1769_;
v_isShared_1777_ = v_isSharedCheck_1789_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_snd_1774_);
lean_inc(v_fst_1773_);
lean_dec(v_a_1769_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1789_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1781_; 
v___x_1778_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4));
v___x_1779_ = l_Lean_JsonNumber_fromNat(v_fst_1773_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set_tag(v___x_1771_, 2);
lean_ctor_set(v___x_1771_, 0, v___x_1779_);
v___x_1781_ = v___x_1771_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1779_);
v___x_1781_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1783_; 
if (v_isShared_1777_ == 0)
{
lean_ctor_set(v___x_1776_, 1, v___x_1781_);
lean_ctor_set(v___x_1776_, 0, v___x_1778_);
v___x_1783_ = v___x_1776_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1778_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lean_box(0);
v___x_1785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1783_);
lean_ctor_set(v___x_1785_, 1, v___x_1784_);
v___x_1786_ = l_Lean_Json_mkObj(v___x_1785_);
lean_dec_ref_known(v___x_1785_, 2);
v_fst_1605_ = v___x_1786_;
v_snd_1606_ = v_snd_1774_;
goto v___jp_1604_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1588_, 1);
return v___x_1768_;
}
}
default: 
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6, &l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6);
v___x_1792_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1791_, v___y_1589_, v___y_1590_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v_fst_1794_; lean_object* v_snd_1795_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v_fst_1794_ = lean_ctor_get(v_a_1793_, 0);
lean_inc(v_fst_1794_);
v_snd_1795_ = lean_ctor_get(v_a_1793_, 1);
lean_inc(v_snd_1795_);
lean_dec(v_a_1793_);
v_fst_1605_ = v_fst_1794_;
v_snd_1606_ = v_snd_1795_;
goto v___jp_1604_;
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_dec(v_l_1588_);
v_a_1796_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1792_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1792_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
}
v___jp_1604_:
{
lean_object* v_visitedLevels_1607_; lean_object* v_visitedNames_1608_; lean_object* v_visitedExprs_1609_; lean_object* v_visitedConstants_1610_; lean_object* v_noMDataExprs_1611_; uint8_t v_exportMData_1612_; uint8_t v_exportUnsafe_1613_; uint8_t v_ignoreMissing_1614_; lean_object* v_recursorMap_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1646_; 
v_visitedLevels_1607_ = lean_ctor_get(v_snd_1606_, 1);
v_visitedNames_1608_ = lean_ctor_get(v_snd_1606_, 0);
v_visitedExprs_1609_ = lean_ctor_get(v_snd_1606_, 2);
v_visitedConstants_1610_ = lean_ctor_get(v_snd_1606_, 3);
v_noMDataExprs_1611_ = lean_ctor_get(v_snd_1606_, 4);
v_exportMData_1612_ = lean_ctor_get_uint8(v_snd_1606_, sizeof(void*)*6);
v_exportUnsafe_1613_ = lean_ctor_get_uint8(v_snd_1606_, sizeof(void*)*6 + 1);
v_ignoreMissing_1614_ = lean_ctor_get_uint8(v_snd_1606_, sizeof(void*)*6 + 2);
v_recursorMap_1615_ = lean_ctor_get(v_snd_1606_, 5);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_snd_1606_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1617_ = v_snd_1606_;
v_isShared_1618_ = v_isSharedCheck_1646_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_recursorMap_1615_);
lean_inc(v_noMDataExprs_1611_);
lean_inc(v_visitedConstants_1610_);
lean_inc(v_visitedExprs_1609_);
lean_inc(v_visitedLevels_1607_);
lean_inc(v_visitedNames_1608_);
lean_dec(v_snd_1606_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1646_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v_size_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v_size_1619_ = lean_ctor_get(v_visitedLevels_1607_, 0);
lean_inc_n(v_size_1619_, 2);
v___x_1620_ = l_Lean_JsonNumber_fromNat(v_size_1619_);
v___x_1621_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
v___x_1622_ = l_Lean_Json_setObjVal_x21(v_fst_1605_, v___x_1603_, v___x_1621_);
v___x_1623_ = l_Lean_Json_compress(v___x_1622_);
v___x_1624_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1623_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1636_; 
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; 
v_unused_1637_ = lean_ctor_get(v___x_1624_, 0);
lean_dec(v_unused_1637_);
v___x_1626_ = v___x_1624_;
v_isShared_1627_ = v_isSharedCheck_1636_;
goto v_resetjp_1625_;
}
else
{
lean_dec(v___x_1624_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1636_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1628_; lean_object* v___x_1630_; 
lean_inc(v_size_1619_);
v___x_1628_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_visitedLevels_1607_, v_l_1588_, v_size_1619_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 1, v___x_1628_);
v___x_1630_ = v___x_1617_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_visitedNames_1608_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_visitedExprs_1609_);
lean_ctor_set(v_reuseFailAlloc_1635_, 3, v_visitedConstants_1610_);
lean_ctor_set(v_reuseFailAlloc_1635_, 4, v_noMDataExprs_1611_);
lean_ctor_set(v_reuseFailAlloc_1635_, 5, v_recursorMap_1615_);
lean_ctor_set_uint8(v_reuseFailAlloc_1635_, sizeof(void*)*6, v_exportMData_1612_);
lean_ctor_set_uint8(v_reuseFailAlloc_1635_, sizeof(void*)*6 + 1, v_exportUnsafe_1613_);
lean_ctor_set_uint8(v_reuseFailAlloc_1635_, sizeof(void*)*6 + 2, v_ignoreMissing_1614_);
v___x_1630_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
lean_object* v___x_1631_; lean_object* v___x_1633_; 
v___x_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1631_, 0, v_size_1619_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1631_);
v___x_1633_ = v___x_1626_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec(v_size_1619_);
lean_del_object(v___x_1617_);
lean_dec(v_recursorMap_1615_);
lean_dec_ref(v_noMDataExprs_1611_);
lean_dec_ref(v_visitedConstants_1610_);
lean_dec_ref(v_visitedExprs_1609_);
lean_dec_ref(v_visitedNames_1608_);
lean_dec_ref(v_visitedLevels_1607_);
lean_dec(v_l_1588_);
v_a_1638_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1624_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1624_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object* v_l_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_l_1804_, v___y_1805_, v___y_1806_);
lean_dec_ref(v___y_1805_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object* v_00_u03b2_1809_, lean_object* v_m_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1810_, v_a_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object* v_00_u03b2_1813_, lean_object* v_m_1814_, lean_object* v_a_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(v_00_u03b2_1813_, v_m_1814_, v_a_1815_);
lean_dec(v_a_1815_);
lean_dec_ref(v_m_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object* v_00_u03b2_1817_, lean_object* v_a_1818_, lean_object* v_x_1819_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1818_, v_x_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1821_, lean_object* v_a_1822_, lean_object* v_x_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(v_00_u03b2_1821_, v_a_1822_, v_x_1823_);
lean_dec(v_x_1823_);
lean_dec(v_a_1822_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object* v_a_1825_, lean_object* v_a_1826_){
_start:
{
if (lean_obj_tag(v_a_1825_) == 0)
{
lean_object* v___x_1827_; 
v___x_1827_ = l_List_reverse___redArg(v_a_1826_);
return v___x_1827_;
}
else
{
lean_object* v_head_1828_; lean_object* v_tail_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1838_; 
v_head_1828_ = lean_ctor_get(v_a_1825_, 0);
v_tail_1829_ = lean_ctor_get(v_a_1825_, 1);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_a_1825_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1831_ = v_a_1825_;
v_isShared_1832_ = v_isSharedCheck_1838_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_tail_1829_);
lean_inc(v_head_1828_);
lean_dec(v_a_1825_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1838_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1833_ = l_Lean_Level_param___override(v_head_1828_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 1, v_a_1826_);
lean_ctor_set(v___x_1831_, 0, v___x_1833_);
v___x_1835_ = v___x_1831_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1837_, 1, v_a_1826_);
v___x_1835_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
v_a_1825_ = v_tail_1829_;
v_a_1826_ = v___x_1835_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t v_sz_1839_, size_t v_i_1840_, lean_object* v_bs_1841_){
_start:
{
uint8_t v___x_1842_; 
v___x_1842_ = lean_usize_dec_lt(v_i_1840_, v_sz_1839_);
if (v___x_1842_ == 0)
{
return v_bs_1841_;
}
else
{
lean_object* v_v_1843_; lean_object* v___x_1844_; lean_object* v_bs_x27_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; size_t v___x_1848_; size_t v___x_1849_; lean_object* v___x_1850_; 
v_v_1843_ = lean_array_uget(v_bs_1841_, v_i_1840_);
v___x_1844_ = lean_unsigned_to_nat(0u);
v_bs_x27_1845_ = lean_array_uset(v_bs_1841_, v_i_1840_, v___x_1844_);
v___x_1846_ = l_Lean_JsonNumber_fromNat(v_v_1843_);
v___x_1847_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
v___x_1848_ = ((size_t)1ULL);
v___x_1849_ = lean_usize_add(v_i_1840_, v___x_1848_);
v___x_1850_ = lean_array_uset(v_bs_x27_1845_, v_i_1840_, v___x_1847_);
v_i_1840_ = v___x_1849_;
v_bs_1841_ = v___x_1850_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_1852_, lean_object* v_i_1853_, lean_object* v_bs_1854_){
_start:
{
size_t v_sz_boxed_1855_; size_t v_i_boxed_1856_; lean_object* v_res_1857_; 
v_sz_boxed_1855_ = lean_unbox_usize(v_sz_1852_);
lean_dec(v_sz_1852_);
v_i_boxed_1856_ = lean_unbox_usize(v_i_1853_);
lean_dec(v_i_1853_);
v_res_1857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_boxed_1855_, v_i_boxed_1856_, v_bs_1854_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object* v_a_1858_){
_start:
{
size_t v_sz_1859_; size_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v_sz_1859_ = lean_array_size(v_a_1858_);
v___x_1860_ = ((size_t)0ULL);
v___x_1861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_1859_, v___x_1860_, v_a_1858_);
v___x_1862_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object* v_a_1863_){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1864_ = lean_array_mk(v_a_1863_);
v___x_1865_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object* v_x_1866_, lean_object* v_x_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
if (lean_obj_tag(v_x_1866_) == 0)
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1871_ = l_List_reverse___redArg(v_x_1867_);
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
lean_ctor_set(v___x_1872_, 1, v___y_1869_);
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
else
{
lean_object* v_head_1874_; lean_object* v_tail_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1895_; 
v_head_1874_ = lean_ctor_get(v_x_1866_, 0);
v_tail_1875_ = lean_ctor_get(v_x_1866_, 1);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_x_1866_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1877_ = v_x_1866_;
v_isShared_1878_ = v_isSharedCheck_1895_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_tail_1875_);
lean_inc(v_head_1874_);
lean_dec(v_x_1866_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1895_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1879_; 
v___x_1879_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_head_1874_, v___y_1868_, v___y_1869_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v_fst_1881_; lean_object* v_snd_1882_; lean_object* v___x_1884_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
v_fst_1881_ = lean_ctor_get(v_a_1880_, 0);
lean_inc(v_fst_1881_);
v_snd_1882_ = lean_ctor_get(v_a_1880_, 1);
lean_inc(v_snd_1882_);
lean_dec(v_a_1880_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 1, v_x_1867_);
lean_ctor_set(v___x_1877_, 0, v_fst_1881_);
v___x_1884_ = v___x_1877_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_fst_1881_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_x_1867_);
v___x_1884_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
v_x_1866_ = v_tail_1875_;
v_x_1867_ = v___x_1884_;
v___y_1869_ = v_snd_1882_;
goto _start;
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_del_object(v___x_1877_);
lean_dec(v_tail_1875_);
lean_dec(v_x_1867_);
v_a_1887_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1879_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1879_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object* v_x_1896_, lean_object* v_x_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_x_1896_, v_x_1897_, v___y_1898_, v___y_1899_);
lean_dec_ref(v___y_1898_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object* v_x_1902_, lean_object* v_x_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
if (lean_obj_tag(v_x_1902_) == 0)
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1907_ = l_List_reverse___redArg(v_x_1903_);
v___x_1908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v___y_1905_);
v___x_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
return v___x_1909_;
}
else
{
lean_object* v_head_1910_; lean_object* v_tail_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1931_; 
v_head_1910_ = lean_ctor_get(v_x_1902_, 0);
v_tail_1911_ = lean_ctor_get(v_x_1902_, 1);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_x_1902_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1913_ = v_x_1902_;
v_isShared_1914_ = v_isSharedCheck_1931_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_tail_1911_);
lean_inc(v_head_1910_);
lean_dec(v_x_1902_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1931_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1915_; 
v___x_1915_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_head_1910_, v___y_1904_, v___y_1905_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v_fst_1917_; lean_object* v_snd_1918_; lean_object* v___x_1920_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v_fst_1917_ = lean_ctor_get(v_a_1916_, 0);
lean_inc(v_fst_1917_);
v_snd_1918_ = lean_ctor_get(v_a_1916_, 1);
lean_inc(v_snd_1918_);
lean_dec(v_a_1916_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 1, v_x_1903_);
lean_ctor_set(v___x_1913_, 0, v_fst_1917_);
v___x_1920_ = v___x_1913_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_fst_1917_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v_x_1903_);
v___x_1920_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
v_x_1902_ = v_tail_1911_;
v_x_1903_ = v___x_1920_;
v___y_1905_ = v_snd_1918_;
goto _start;
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_del_object(v___x_1913_);
lean_dec(v_tail_1911_);
lean_dec(v_x_1903_);
v_a_1923_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1915_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1915_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object* v_x_1932_, lean_object* v_x_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_x_1932_, v_x_1933_, v___y_1934_, v___y_1935_);
lean_dec_ref(v___y_1934_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object* v_uparams_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = lean_box(0);
lean_inc(v_uparams_1938_);
v___x_1943_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_1938_, v___x_1942_, v___y_1939_, v___y_1940_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v_fst_1945_; lean_object* v_snd_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
v_fst_1945_ = lean_ctor_get(v_a_1944_, 0);
lean_inc(v_fst_1945_);
v_snd_1946_ = lean_ctor_get(v_a_1944_, 1);
lean_inc(v_snd_1946_);
lean_dec(v_a_1944_);
v___x_1947_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(v_uparams_1938_, v___x_1942_);
v___x_1948_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v___x_1947_, v___x_1942_, v___y_1939_, v_snd_1946_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1966_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1951_ = v___x_1948_;
v_isShared_1952_ = v_isSharedCheck_1966_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1948_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1966_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v_snd_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1964_; 
v_snd_1953_ = lean_ctor_get(v_a_1949_, 1);
v_isSharedCheck_1964_ = !lean_is_exclusive(v_a_1949_);
if (v_isSharedCheck_1964_ == 0)
{
lean_object* v_unused_1965_; 
v_unused_1965_ = lean_ctor_get(v_a_1949_, 0);
lean_dec(v_unused_1965_);
v___x_1955_ = v_a_1949_;
v_isShared_1956_ = v_isSharedCheck_1964_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_snd_1953_);
lean_dec(v_a_1949_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1964_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1957_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_1945_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1957_);
v___x_1959_ = v___x_1955_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v_snd_1953_);
v___x_1959_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
lean_object* v___x_1961_; 
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v___x_1959_);
v___x_1961_ = v___x_1951_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v___x_1959_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec(v_fst_1945_);
v_a_1967_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1948_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1948_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_dec(v_uparams_1938_);
v_a_1975_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1943_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1943_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object* v_uparams_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_uparams_1983_, v___y_1984_, v___y_1985_);
lean_dec_ref(v___y_1984_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object* v_uparams_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = lean_box(0);
v___x_1993_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_1988_, v___x_1992_, v___y_1989_, v___y_1990_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2011_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1996_ = v___x_1993_;
v_isShared_1997_ = v_isSharedCheck_2011_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1993_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2011_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v_fst_1998_; lean_object* v_snd_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2010_; 
v_fst_1998_ = lean_ctor_get(v_a_1994_, 0);
v_snd_1999_ = lean_ctor_get(v_a_1994_, 1);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_a_1994_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2001_ = v_a_1994_;
v_isShared_2002_ = v_isSharedCheck_2010_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_snd_1999_);
lean_inc(v_fst_1998_);
lean_dec(v_a_1994_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2010_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2003_; lean_object* v___x_2005_; 
v___x_2003_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_1998_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2003_);
v___x_2005_ = v___x_2001_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2003_);
lean_ctor_set(v_reuseFailAlloc_2009_, 1, v_snd_1999_);
v___x_2005_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v___x_2007_; 
if (v_isShared_1997_ == 0)
{
lean_ctor_set(v___x_1996_, 0, v___x_2005_);
v___x_2007_ = v___x_1996_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
v_a_2012_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_1993_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_1993_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object* v_uparams_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_uparams_2020_, v___y_2021_, v___y_2022_);
lean_dec_ref(v___y_2021_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object* v_msg_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v___f_2029_; lean_object* v___f_2030_; lean_object* v___f_2031_; lean_object* v___f_2032_; lean_object* v___f_2033_; lean_object* v___f_2034_; lean_object* v___f_2035_; lean_object* v___f_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___f_2040_; lean_object* v___f_2041_; lean_object* v___f_2042_; lean_object* v___f_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_14602__overap_2053_; lean_object* v___x_2054_; 
v___f_2029_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0));
v___f_2030_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1));
v___f_2031_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2));
v___f_2032_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3));
v___f_2033_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4));
v___f_2034_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2034_, 0, v___f_2033_);
lean_closure_set(v___f_2034_, 1, v___f_2032_);
v___f_2035_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2035_, 0, v___f_2032_);
v___f_2036_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5));
v___x_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___f_2029_);
lean_ctor_set(v___x_2037_, 1, v___f_2030_);
v___x_2038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
lean_ctor_set(v___x_2038_, 1, v___f_2031_);
lean_ctor_set(v___x_2038_, 2, v___f_2034_);
lean_ctor_set(v___x_2038_, 3, v___f_2035_);
lean_ctor_set(v___x_2038_, 4, v___f_2036_);
v___x_2039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
lean_ctor_set(v___x_2039_, 1, v___f_2032_);
lean_inc_ref_n(v___x_2039_, 6);
v___f_2040_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2040_, 0, v___x_2039_);
v___f_2041_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2041_, 0, v___x_2039_);
v___f_2042_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2042_, 0, v___x_2039_);
v___f_2043_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2043_, 0, v___x_2039_);
v___x_2044_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2044_, 0, lean_box(0));
lean_closure_set(v___x_2044_, 1, lean_box(0));
lean_closure_set(v___x_2044_, 2, v___x_2039_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
lean_ctor_set(v___x_2045_, 1, v___f_2040_);
v___x_2046_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2046_, 0, lean_box(0));
lean_closure_set(v___x_2046_, 1, lean_box(0));
lean_closure_set(v___x_2046_, 2, v___x_2039_);
v___x_2047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2045_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
lean_ctor_set(v___x_2047_, 2, v___f_2041_);
lean_ctor_set(v___x_2047_, 3, v___f_2042_);
lean_ctor_set(v___x_2047_, 4, v___f_2043_);
v___x_2048_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2048_, 0, lean_box(0));
lean_closure_set(v___x_2048_, 1, lean_box(0));
lean_closure_set(v___x_2048_, 2, v___x_2039_);
v___x_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2047_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = l_Lean_instInhabitedExpr;
v___x_2051_ = l_instInhabitedOfMonad___redArg(v___x_2049_, v___x_2050_);
v___x_2052_ = l_instInhabitedReaderT___redArg(v___x_2051_);
v___x_14602__overap_2053_ = lean_panic_fn_borrowed(v___x_2052_, v_msg_2025_);
lean_dec(v___x_2052_);
lean_inc_ref(v___y_2026_);
v___x_2054_ = lean_apply_3(v___x_14602__overap_2053_, v___y_2026_, v___y_2027_, lean_box(0));
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object* v_msg_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v_msg_2055_, v___y_2056_, v___y_2057_);
lean_dec_ref(v___y_2056_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object* v_a_2060_, lean_object* v_b_2061_, lean_object* v_x_2062_){
_start:
{
if (lean_obj_tag(v_x_2062_) == 0)
{
lean_dec(v_b_2061_);
lean_dec_ref(v_a_2060_);
return v_x_2062_;
}
else
{
lean_object* v_key_2063_; lean_object* v_value_2064_; lean_object* v_tail_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2077_; 
v_key_2063_ = lean_ctor_get(v_x_2062_, 0);
v_value_2064_ = lean_ctor_get(v_x_2062_, 1);
v_tail_2065_ = lean_ctor_get(v_x_2062_, 2);
v_isSharedCheck_2077_ = !lean_is_exclusive(v_x_2062_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2067_ = v_x_2062_;
v_isShared_2068_ = v_isSharedCheck_2077_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_tail_2065_);
lean_inc(v_value_2064_);
lean_inc(v_key_2063_);
lean_dec(v_x_2062_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2077_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
uint8_t v___x_2069_; 
v___x_2069_ = lean_expr_eqv(v_key_2063_, v_a_2060_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2072_; 
v___x_2070_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2060_, v_b_2061_, v_tail_2065_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 2, v___x_2070_);
v___x_2072_ = v___x_2067_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_key_2063_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v_value_2064_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
else
{
lean_object* v___x_2075_; 
lean_dec(v_value_2064_);
lean_dec(v_key_2063_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 1, v_b_2061_);
lean_ctor_set(v___x_2067_, 0, v_a_2060_);
v___x_2075_ = v___x_2067_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2060_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v_b_2061_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_tail_2065_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_2078_, lean_object* v_x_2079_){
_start:
{
if (lean_obj_tag(v_x_2079_) == 0)
{
return v_x_2078_;
}
else
{
lean_object* v_key_2080_; lean_object* v_value_2081_; lean_object* v_tail_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2105_; 
v_key_2080_ = lean_ctor_get(v_x_2079_, 0);
v_value_2081_ = lean_ctor_get(v_x_2079_, 1);
v_tail_2082_ = lean_ctor_get(v_x_2079_, 2);
v_isSharedCheck_2105_ = !lean_is_exclusive(v_x_2079_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2084_ = v_x_2079_;
v_isShared_2085_ = v_isSharedCheck_2105_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_tail_2082_);
lean_inc(v_value_2081_);
lean_inc(v_key_2080_);
lean_dec(v_x_2079_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2105_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; uint64_t v___x_2087_; uint64_t v___x_2088_; uint64_t v___x_2089_; uint64_t v_fold_2090_; uint64_t v___x_2091_; uint64_t v___x_2092_; uint64_t v___x_2093_; size_t v___x_2094_; size_t v___x_2095_; size_t v___x_2096_; size_t v___x_2097_; size_t v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2101_; 
v___x_2086_ = lean_array_get_size(v_x_2078_);
v___x_2087_ = l_Lean_Expr_hash(v_key_2080_);
v___x_2088_ = 32ULL;
v___x_2089_ = lean_uint64_shift_right(v___x_2087_, v___x_2088_);
v_fold_2090_ = lean_uint64_xor(v___x_2087_, v___x_2089_);
v___x_2091_ = 16ULL;
v___x_2092_ = lean_uint64_shift_right(v_fold_2090_, v___x_2091_);
v___x_2093_ = lean_uint64_xor(v_fold_2090_, v___x_2092_);
v___x_2094_ = lean_uint64_to_usize(v___x_2093_);
v___x_2095_ = lean_usize_of_nat(v___x_2086_);
v___x_2096_ = ((size_t)1ULL);
v___x_2097_ = lean_usize_sub(v___x_2095_, v___x_2096_);
v___x_2098_ = lean_usize_land(v___x_2094_, v___x_2097_);
v___x_2099_ = lean_array_uget_borrowed(v_x_2078_, v___x_2098_);
lean_inc(v___x_2099_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 2, v___x_2099_);
v___x_2101_ = v___x_2084_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_key_2080_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_value_2081_);
lean_ctor_set(v_reuseFailAlloc_2104_, 2, v___x_2099_);
v___x_2101_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
lean_object* v___x_2102_; 
v___x_2102_ = lean_array_uset(v_x_2078_, v___x_2098_, v___x_2101_);
v_x_2078_ = v___x_2102_;
v_x_2079_ = v_tail_2082_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2106_, lean_object* v_source_2107_, lean_object* v_target_2108_){
_start:
{
lean_object* v___x_2109_; uint8_t v___x_2110_; 
v___x_2109_ = lean_array_get_size(v_source_2107_);
v___x_2110_ = lean_nat_dec_lt(v_i_2106_, v___x_2109_);
if (v___x_2110_ == 0)
{
lean_dec_ref(v_source_2107_);
lean_dec(v_i_2106_);
return v_target_2108_;
}
else
{
lean_object* v_es_2111_; lean_object* v___x_2112_; lean_object* v_source_2113_; lean_object* v_target_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v_es_2111_ = lean_array_fget(v_source_2107_, v_i_2106_);
v___x_2112_ = lean_box(0);
v_source_2113_ = lean_array_fset(v_source_2107_, v_i_2106_, v___x_2112_);
v_target_2114_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_target_2108_, v_es_2111_);
v___x_2115_ = lean_unsigned_to_nat(1u);
v___x_2116_ = lean_nat_add(v_i_2106_, v___x_2115_);
lean_dec(v_i_2106_);
v_i_2106_ = v___x_2116_;
v_source_2107_ = v_source_2113_;
v_target_2108_ = v_target_2114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object* v_data_2118_){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v_nbuckets_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2119_ = lean_array_get_size(v_data_2118_);
v___x_2120_ = lean_unsigned_to_nat(2u);
v_nbuckets_2121_ = lean_nat_mul(v___x_2119_, v___x_2120_);
v___x_2122_ = lean_unsigned_to_nat(0u);
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_mk_array(v_nbuckets_2121_, v___x_2123_);
v___x_2125_ = lean_array_propagate_mark(v_data_2118_, v___x_2124_);
v___x_2126_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v___x_2122_, v_data_2118_, v___x_2125_);
return v___x_2126_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object* v_a_2127_, lean_object* v_x_2128_){
_start:
{
if (lean_obj_tag(v_x_2128_) == 0)
{
uint8_t v___x_2129_; 
v___x_2129_ = 0;
return v___x_2129_;
}
else
{
lean_object* v_key_2130_; lean_object* v_tail_2131_; uint8_t v___x_2132_; 
v_key_2130_ = lean_ctor_get(v_x_2128_, 0);
v_tail_2131_ = lean_ctor_get(v_x_2128_, 2);
v___x_2132_ = lean_expr_eqv(v_key_2130_, v_a_2127_);
if (v___x_2132_ == 0)
{
v_x_2128_ = v_tail_2131_;
goto _start;
}
else
{
return v___x_2132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object* v_a_2134_, lean_object* v_x_2135_){
_start:
{
uint8_t v_res_2136_; lean_object* v_r_2137_; 
v_res_2136_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2134_, v_x_2135_);
lean_dec(v_x_2135_);
lean_dec_ref(v_a_2134_);
v_r_2137_ = lean_box(v_res_2136_);
return v_r_2137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object* v_m_2138_, lean_object* v_a_2139_, lean_object* v_b_2140_){
_start:
{
lean_object* v_size_2141_; lean_object* v_buckets_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2185_; 
v_size_2141_ = lean_ctor_get(v_m_2138_, 0);
v_buckets_2142_ = lean_ctor_get(v_m_2138_, 1);
v_isSharedCheck_2185_ = !lean_is_exclusive(v_m_2138_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2144_ = v_m_2138_;
v_isShared_2145_ = v_isSharedCheck_2185_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_buckets_2142_);
lean_inc(v_size_2141_);
lean_dec(v_m_2138_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2185_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2146_; uint64_t v___x_2147_; uint64_t v___x_2148_; uint64_t v___x_2149_; uint64_t v_fold_2150_; uint64_t v___x_2151_; uint64_t v___x_2152_; uint64_t v___x_2153_; size_t v___x_2154_; size_t v___x_2155_; size_t v___x_2156_; size_t v___x_2157_; size_t v___x_2158_; lean_object* v_bkt_2159_; uint8_t v___x_2160_; 
v___x_2146_ = lean_array_get_size(v_buckets_2142_);
v___x_2147_ = l_Lean_Expr_hash(v_a_2139_);
v___x_2148_ = 32ULL;
v___x_2149_ = lean_uint64_shift_right(v___x_2147_, v___x_2148_);
v_fold_2150_ = lean_uint64_xor(v___x_2147_, v___x_2149_);
v___x_2151_ = 16ULL;
v___x_2152_ = lean_uint64_shift_right(v_fold_2150_, v___x_2151_);
v___x_2153_ = lean_uint64_xor(v_fold_2150_, v___x_2152_);
v___x_2154_ = lean_uint64_to_usize(v___x_2153_);
v___x_2155_ = lean_usize_of_nat(v___x_2146_);
v___x_2156_ = ((size_t)1ULL);
v___x_2157_ = lean_usize_sub(v___x_2155_, v___x_2156_);
v___x_2158_ = lean_usize_land(v___x_2154_, v___x_2157_);
v_bkt_2159_ = lean_array_uget_borrowed(v_buckets_2142_, v___x_2158_);
v___x_2160_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2139_, v_bkt_2159_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; lean_object* v_size_x27_2162_; lean_object* v___x_2163_; lean_object* v_buckets_x27_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; 
v___x_2161_ = lean_unsigned_to_nat(1u);
v_size_x27_2162_ = lean_nat_add(v_size_2141_, v___x_2161_);
lean_dec(v_size_2141_);
lean_inc(v_bkt_2159_);
v___x_2163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2163_, 0, v_a_2139_);
lean_ctor_set(v___x_2163_, 1, v_b_2140_);
lean_ctor_set(v___x_2163_, 2, v_bkt_2159_);
v_buckets_x27_2164_ = lean_array_uset(v_buckets_2142_, v___x_2158_, v___x_2163_);
v___x_2165_ = lean_unsigned_to_nat(4u);
v___x_2166_ = lean_nat_mul(v_size_x27_2162_, v___x_2165_);
v___x_2167_ = lean_unsigned_to_nat(3u);
v___x_2168_ = lean_nat_div(v___x_2166_, v___x_2167_);
lean_dec(v___x_2166_);
v___x_2169_ = lean_array_get_size(v_buckets_x27_2164_);
v___x_2170_ = lean_nat_dec_le(v___x_2168_, v___x_2169_);
lean_dec(v___x_2168_);
if (v___x_2170_ == 0)
{
lean_object* v_val_2171_; lean_object* v___x_2173_; 
v_val_2171_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_buckets_x27_2164_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 1, v_val_2171_);
lean_ctor_set(v___x_2144_, 0, v_size_x27_2162_);
v___x_2173_ = v___x_2144_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_size_x27_2162_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_val_2171_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
else
{
lean_object* v___x_2176_; 
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 1, v_buckets_x27_2164_);
lean_ctor_set(v___x_2144_, 0, v_size_x27_2162_);
v___x_2176_ = v___x_2144_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_size_x27_2162_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_buckets_x27_2164_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
else
{
lean_object* v___x_2178_; lean_object* v_buckets_x27_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
lean_inc(v_bkt_2159_);
v___x_2178_ = lean_box(0);
v_buckets_x27_2179_ = lean_array_uset(v_buckets_2142_, v___x_2158_, v___x_2178_);
v___x_2180_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2139_, v_b_2140_, v_bkt_2159_);
v___x_2181_ = lean_array_uset(v_buckets_x27_2179_, v___x_2158_, v___x_2180_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 1, v___x_2181_);
v___x_2183_ = v___x_2144_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_size_2141_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object* v_a_2186_, lean_object* v_x_2187_){
_start:
{
if (lean_obj_tag(v_x_2187_) == 0)
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_box(0);
return v___x_2188_;
}
else
{
lean_object* v_key_2189_; lean_object* v_value_2190_; lean_object* v_tail_2191_; uint8_t v___x_2192_; 
v_key_2189_ = lean_ctor_get(v_x_2187_, 0);
v_value_2190_ = lean_ctor_get(v_x_2187_, 1);
v_tail_2191_ = lean_ctor_get(v_x_2187_, 2);
v___x_2192_ = lean_expr_eqv(v_key_2189_, v_a_2186_);
if (v___x_2192_ == 0)
{
v_x_2187_ = v_tail_2191_;
goto _start;
}
else
{
lean_object* v___x_2194_; 
lean_inc(v_value_2190_);
v___x_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2194_, 0, v_value_2190_);
return v___x_2194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object* v_a_2195_, lean_object* v_x_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2195_, v_x_2196_);
lean_dec(v_x_2196_);
lean_dec_ref(v_a_2195_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object* v_m_2198_, lean_object* v_a_2199_){
_start:
{
lean_object* v_buckets_2200_; lean_object* v___x_2201_; uint64_t v___x_2202_; uint64_t v___x_2203_; uint64_t v___x_2204_; uint64_t v_fold_2205_; uint64_t v___x_2206_; uint64_t v___x_2207_; uint64_t v___x_2208_; size_t v___x_2209_; size_t v___x_2210_; size_t v___x_2211_; size_t v___x_2212_; size_t v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v_buckets_2200_ = lean_ctor_get(v_m_2198_, 1);
v___x_2201_ = lean_array_get_size(v_buckets_2200_);
v___x_2202_ = l_Lean_Expr_hash(v_a_2199_);
v___x_2203_ = 32ULL;
v___x_2204_ = lean_uint64_shift_right(v___x_2202_, v___x_2203_);
v_fold_2205_ = lean_uint64_xor(v___x_2202_, v___x_2204_);
v___x_2206_ = 16ULL;
v___x_2207_ = lean_uint64_shift_right(v_fold_2205_, v___x_2206_);
v___x_2208_ = lean_uint64_xor(v_fold_2205_, v___x_2207_);
v___x_2209_ = lean_uint64_to_usize(v___x_2208_);
v___x_2210_ = lean_usize_of_nat(v___x_2201_);
v___x_2211_ = ((size_t)1ULL);
v___x_2212_ = lean_usize_sub(v___x_2210_, v___x_2211_);
v___x_2213_ = lean_usize_land(v___x_2209_, v___x_2212_);
v___x_2214_ = lean_array_uget_borrowed(v_buckets_2200_, v___x_2213_);
v___x_2215_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2199_, v___x_2214_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object* v_m_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2216_, v_a_2217_);
lean_dec_ref(v_a_2217_);
lean_dec_ref(v_m_2216_);
return v_res_2218_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1(void){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2220_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_2221_ = lean_unsigned_to_nat(26u);
v___x_2222_ = lean_unsigned_to_nat(152u);
v___x_2223_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0));
v___x_2224_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2225_ = l_mkPanicMessageWithDecl(v___x_2224_, v___x_2223_, v___x_2222_, v___x_2221_, v___x_2220_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object* v_e_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_e_x27_2231_; lean_object* v_visitedNames_2232_; lean_object* v_visitedLevels_2233_; lean_object* v_visitedExprs_2234_; lean_object* v_visitedConstants_2235_; lean_object* v_noMDataExprs_2236_; uint8_t v_exportMData_2237_; uint8_t v_exportUnsafe_2238_; uint8_t v_ignoreMissing_2239_; lean_object* v_recursorMap_2240_; lean_object* v_e_x27_2246_; lean_object* v___y_2247_; lean_object* v_visitedNames_2257_; lean_object* v_visitedLevels_2258_; lean_object* v_visitedExprs_2259_; lean_object* v_visitedConstants_2260_; lean_object* v_noMDataExprs_2261_; uint8_t v_exportMData_2262_; uint8_t v_exportUnsafe_2263_; uint8_t v_ignoreMissing_2264_; lean_object* v_recursorMap_2265_; lean_object* v___x_2266_; 
v_visitedNames_2257_ = lean_ctor_get(v___y_2228_, 0);
v_visitedLevels_2258_ = lean_ctor_get(v___y_2228_, 1);
v_visitedExprs_2259_ = lean_ctor_get(v___y_2228_, 2);
v_visitedConstants_2260_ = lean_ctor_get(v___y_2228_, 3);
v_noMDataExprs_2261_ = lean_ctor_get(v___y_2228_, 4);
v_exportMData_2262_ = lean_ctor_get_uint8(v___y_2228_, sizeof(void*)*6);
v_exportUnsafe_2263_ = lean_ctor_get_uint8(v___y_2228_, sizeof(void*)*6 + 1);
v_ignoreMissing_2264_ = lean_ctor_get_uint8(v___y_2228_, sizeof(void*)*6 + 2);
v_recursorMap_2265_ = lean_ctor_get(v___y_2228_, 5);
v___x_2266_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_noMDataExprs_2261_, v_e_2226_);
if (lean_obj_tag(v___x_2266_) == 1)
{
lean_object* v_val_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v_e_2226_);
v_val_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2275_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_val_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2275_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v___x_2273_; 
v___x_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2271_, 0, v_val_2267_);
lean_ctor_set(v___x_2271_, 1, v___y_2228_);
if (v_isShared_2270_ == 0)
{
lean_ctor_set_tag(v___x_2269_, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2271_);
v___x_2273_ = v___x_2269_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2271_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
else
{
lean_dec(v___x_2266_);
switch(lean_obj_tag(v_e_2226_))
{
case 1:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2277_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2276_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v_fst_2279_; lean_object* v_snd_2280_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v_fst_2279_ = lean_ctor_get(v_a_2278_, 0);
lean_inc(v_fst_2279_);
v_snd_2280_ = lean_ctor_get(v_a_2278_, 1);
lean_inc(v_snd_2280_);
lean_dec(v_a_2278_);
v_e_x27_2246_ = v_fst_2279_;
v___y_2247_ = v_snd_2280_;
goto v___jp_2245_;
}
else
{
lean_dec_ref_known(v_e_2226_, 1);
return v___x_2277_;
}
}
case 2:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2282_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2281_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v_fst_2284_; lean_object* v_snd_2285_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v_fst_2284_ = lean_ctor_get(v_a_2283_, 0);
lean_inc(v_fst_2284_);
v_snd_2285_ = lean_ctor_get(v_a_2283_, 1);
lean_inc(v_snd_2285_);
lean_dec(v_a_2283_);
v_e_x27_2246_ = v_fst_2284_;
v___y_2247_ = v_snd_2285_;
goto v___jp_2245_;
}
else
{
lean_dec_ref_known(v_e_2226_, 1);
return v___x_2282_;
}
}
case 5:
{
lean_object* v_fn_2286_; lean_object* v_arg_2287_; lean_object* v___x_2288_; 
v_fn_2286_ = lean_ctor_get(v_e_2226_, 0);
v_arg_2287_ = lean_ctor_get(v_e_2226_, 1);
lean_inc_ref(v_fn_2286_);
v___x_2288_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_fn_2286_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; lean_object* v_fst_2290_; lean_object* v_snd_2291_; lean_object* v___x_2292_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
lean_inc(v_a_2289_);
lean_dec_ref_known(v___x_2288_, 1);
v_fst_2290_ = lean_ctor_get(v_a_2289_, 0);
lean_inc(v_fst_2290_);
v_snd_2291_ = lean_ctor_get(v_a_2289_, 1);
lean_inc(v_snd_2291_);
lean_dec(v_a_2289_);
lean_inc_ref(v_arg_2287_);
v___x_2292_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_arg_2287_, v___y_2227_, v_snd_2291_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v_fst_2294_; lean_object* v_snd_2295_; size_t v___x_2296_; size_t v___x_2297_; uint8_t v___x_2298_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v_fst_2294_ = lean_ctor_get(v_a_2293_, 0);
lean_inc(v_fst_2294_);
v_snd_2295_ = lean_ctor_get(v_a_2293_, 1);
lean_inc(v_snd_2295_);
lean_dec(v_a_2293_);
v___x_2296_ = lean_ptr_addr(v_fn_2286_);
v___x_2297_ = lean_ptr_addr(v_fst_2290_);
v___x_2298_ = lean_usize_dec_eq(v___x_2296_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Lean_Expr_app___override(v_fst_2290_, v_fst_2294_);
v_e_x27_2246_ = v___x_2299_;
v___y_2247_ = v_snd_2295_;
goto v___jp_2245_;
}
else
{
size_t v___x_2300_; size_t v___x_2301_; uint8_t v___x_2302_; 
v___x_2300_ = lean_ptr_addr(v_arg_2287_);
v___x_2301_ = lean_ptr_addr(v_fst_2294_);
v___x_2302_ = lean_usize_dec_eq(v___x_2300_, v___x_2301_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
v___x_2303_ = l_Lean_Expr_app___override(v_fst_2290_, v_fst_2294_);
v_e_x27_2246_ = v___x_2303_;
v___y_2247_ = v_snd_2295_;
goto v___jp_2245_;
}
else
{
lean_dec(v_fst_2294_);
lean_dec(v_fst_2290_);
lean_inc_ref(v_e_2226_);
v_e_x27_2246_ = v_e_2226_;
v___y_2247_ = v_snd_2295_;
goto v___jp_2245_;
}
}
}
else
{
lean_dec(v_fst_2290_);
lean_dec_ref_known(v_e_2226_, 2);
return v___x_2292_;
}
}
else
{
lean_dec_ref_known(v_e_2226_, 2);
return v___x_2288_;
}
}
case 6:
{
lean_object* v_binderName_2304_; lean_object* v_binderType_2305_; lean_object* v_body_2306_; uint8_t v_binderInfo_2307_; lean_object* v___x_2308_; 
v_binderName_2304_ = lean_ctor_get(v_e_2226_, 0);
v_binderType_2305_ = lean_ctor_get(v_e_2226_, 1);
v_body_2306_ = lean_ctor_get(v_e_2226_, 2);
v_binderInfo_2307_ = lean_ctor_get_uint8(v_e_2226_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2305_);
v___x_2308_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2305_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v_fst_2310_; lean_object* v_snd_2311_; lean_object* v___x_2312_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v_fst_2310_ = lean_ctor_get(v_a_2309_, 0);
lean_inc(v_fst_2310_);
v_snd_2311_ = lean_ctor_get(v_a_2309_, 1);
lean_inc(v_snd_2311_);
lean_dec(v_a_2309_);
lean_inc_ref(v_body_2306_);
v___x_2312_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2306_, v___y_2227_, v_snd_2311_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v_fst_2314_; lean_object* v_snd_2315_; size_t v___x_2316_; size_t v___x_2317_; uint8_t v___x_2318_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v_fst_2314_ = lean_ctor_get(v_a_2313_, 0);
lean_inc(v_fst_2314_);
v_snd_2315_ = lean_ctor_get(v_a_2313_, 1);
lean_inc(v_snd_2315_);
lean_dec(v_a_2313_);
v___x_2316_ = lean_ptr_addr(v_binderType_2305_);
v___x_2317_ = lean_ptr_addr(v_fst_2310_);
v___x_2318_ = lean_usize_dec_eq(v___x_2316_, v___x_2317_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; 
lean_inc(v_binderName_2304_);
v___x_2319_ = l_Lean_Expr_lam___override(v_binderName_2304_, v_fst_2310_, v_fst_2314_, v_binderInfo_2307_);
v_e_x27_2246_ = v___x_2319_;
v___y_2247_ = v_snd_2315_;
goto v___jp_2245_;
}
else
{
size_t v___x_2320_; size_t v___x_2321_; uint8_t v___x_2322_; 
v___x_2320_ = lean_ptr_addr(v_body_2306_);
v___x_2321_ = lean_ptr_addr(v_fst_2314_);
v___x_2322_ = lean_usize_dec_eq(v___x_2320_, v___x_2321_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; 
lean_inc(v_binderName_2304_);
v___x_2323_ = l_Lean_Expr_lam___override(v_binderName_2304_, v_fst_2310_, v_fst_2314_, v_binderInfo_2307_);
v_e_x27_2246_ = v___x_2323_;
v___y_2247_ = v_snd_2315_;
goto v___jp_2245_;
}
else
{
uint8_t v___x_2324_; 
v___x_2324_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2307_, v_binderInfo_2307_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; 
lean_inc(v_binderName_2304_);
v___x_2325_ = l_Lean_Expr_lam___override(v_binderName_2304_, v_fst_2310_, v_fst_2314_, v_binderInfo_2307_);
v_e_x27_2246_ = v___x_2325_;
v___y_2247_ = v_snd_2315_;
goto v___jp_2245_;
}
else
{
lean_dec(v_fst_2314_);
lean_dec(v_fst_2310_);
lean_inc_ref(v_e_2226_);
v_e_x27_2246_ = v_e_2226_;
v___y_2247_ = v_snd_2315_;
goto v___jp_2245_;
}
}
}
}
else
{
lean_dec(v_fst_2310_);
lean_dec_ref_known(v_e_2226_, 3);
return v___x_2312_;
}
}
else
{
lean_dec_ref_known(v_e_2226_, 3);
return v___x_2308_;
}
}
case 7:
{
lean_object* v_binderName_2326_; lean_object* v_binderType_2327_; lean_object* v_body_2328_; uint8_t v_binderInfo_2329_; lean_object* v___x_2330_; 
v_binderName_2326_ = lean_ctor_get(v_e_2226_, 0);
v_binderType_2327_ = lean_ctor_get(v_e_2226_, 1);
v_body_2328_ = lean_ctor_get(v_e_2226_, 2);
v_binderInfo_2329_ = lean_ctor_get_uint8(v_e_2226_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2327_);
v___x_2330_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2327_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v_fst_2332_; lean_object* v_snd_2333_; lean_object* v___x_2334_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v_fst_2332_ = lean_ctor_get(v_a_2331_, 0);
lean_inc(v_fst_2332_);
v_snd_2333_ = lean_ctor_get(v_a_2331_, 1);
lean_inc(v_snd_2333_);
lean_dec(v_a_2331_);
lean_inc_ref(v_body_2328_);
v___x_2334_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2328_, v___y_2227_, v_snd_2333_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v_fst_2336_; lean_object* v_snd_2337_; size_t v___x_2338_; size_t v___x_2339_; uint8_t v___x_2340_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2335_);
lean_dec_ref_known(v___x_2334_, 1);
v_fst_2336_ = lean_ctor_get(v_a_2335_, 0);
lean_inc(v_fst_2336_);
v_snd_2337_ = lean_ctor_get(v_a_2335_, 1);
lean_inc(v_snd_2337_);
lean_dec(v_a_2335_);
v___x_2338_ = lean_ptr_addr(v_binderType_2327_);
v___x_2339_ = lean_ptr_addr(v_fst_2332_);
v___x_2340_ = lean_usize_dec_eq(v___x_2338_, v___x_2339_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
lean_inc(v_binderName_2326_);
v___x_2341_ = l_Lean_Expr_forallE___override(v_binderName_2326_, v_fst_2332_, v_fst_2336_, v_binderInfo_2329_);
v_e_x27_2246_ = v___x_2341_;
v___y_2247_ = v_snd_2337_;
goto v___jp_2245_;
}
else
{
size_t v___x_2342_; size_t v___x_2343_; uint8_t v___x_2344_; 
v___x_2342_ = lean_ptr_addr(v_body_2328_);
v___x_2343_ = lean_ptr_addr(v_fst_2336_);
v___x_2344_ = lean_usize_dec_eq(v___x_2342_, v___x_2343_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; 
lean_inc(v_binderName_2326_);
v___x_2345_ = l_Lean_Expr_forallE___override(v_binderName_2326_, v_fst_2332_, v_fst_2336_, v_binderInfo_2329_);
v_e_x27_2246_ = v___x_2345_;
v___y_2247_ = v_snd_2337_;
goto v___jp_2245_;
}
else
{
uint8_t v___x_2346_; 
v___x_2346_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2329_, v_binderInfo_2329_);
if (v___x_2346_ == 0)
{
lean_object* v___x_2347_; 
lean_inc(v_binderName_2326_);
v___x_2347_ = l_Lean_Expr_forallE___override(v_binderName_2326_, v_fst_2332_, v_fst_2336_, v_binderInfo_2329_);
v_e_x27_2246_ = v___x_2347_;
v___y_2247_ = v_snd_2337_;
goto v___jp_2245_;
}
else
{
lean_dec(v_fst_2336_);
lean_dec(v_fst_2332_);
lean_inc_ref(v_e_2226_);
v_e_x27_2246_ = v_e_2226_;
v___y_2247_ = v_snd_2337_;
goto v___jp_2245_;
}
}
}
}
else
{
lean_dec(v_fst_2332_);
lean_dec_ref_known(v_e_2226_, 3);
return v___x_2334_;
}
}
else
{
lean_dec_ref_known(v_e_2226_, 3);
return v___x_2330_;
}
}
case 8:
{
lean_object* v_declName_2348_; lean_object* v_type_2349_; lean_object* v_value_2350_; lean_object* v_body_2351_; uint8_t v_nondep_2352_; lean_object* v___x_2353_; 
v_declName_2348_ = lean_ctor_get(v_e_2226_, 0);
v_type_2349_ = lean_ctor_get(v_e_2226_, 1);
v_value_2350_ = lean_ctor_get(v_e_2226_, 2);
v_body_2351_ = lean_ctor_get(v_e_2226_, 3);
v_nondep_2352_ = lean_ctor_get_uint8(v_e_2226_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2349_);
v___x_2353_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_type_2349_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v_fst_2355_; lean_object* v_snd_2356_; lean_object* v___x_2357_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v_fst_2355_ = lean_ctor_get(v_a_2354_, 0);
lean_inc(v_fst_2355_);
v_snd_2356_ = lean_ctor_get(v_a_2354_, 1);
lean_inc(v_snd_2356_);
lean_dec(v_a_2354_);
lean_inc_ref(v_value_2350_);
v___x_2357_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_value_2350_, v___y_2227_, v_snd_2356_);
if (lean_obj_tag(v___x_2357_) == 0)
{
lean_object* v_a_2358_; lean_object* v_fst_2359_; lean_object* v_snd_2360_; lean_object* v___x_2361_; 
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc(v_a_2358_);
lean_dec_ref_known(v___x_2357_, 1);
v_fst_2359_ = lean_ctor_get(v_a_2358_, 0);
lean_inc(v_fst_2359_);
v_snd_2360_ = lean_ctor_get(v_a_2358_, 1);
lean_inc(v_snd_2360_);
lean_dec(v_a_2358_);
lean_inc_ref(v_body_2351_);
v___x_2361_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2351_, v___y_2227_, v_snd_2360_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v_fst_2363_; lean_object* v_snd_2364_; uint8_t v___x_2365_; size_t v___x_2366_; size_t v___x_2367_; uint8_t v___x_2368_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2362_);
lean_dec_ref_known(v___x_2361_, 1);
v_fst_2363_ = lean_ctor_get(v_a_2362_, 0);
lean_inc(v_fst_2363_);
v_snd_2364_ = lean_ctor_get(v_a_2362_, 1);
lean_inc(v_snd_2364_);
lean_dec(v_a_2362_);
v___x_2365_ = 0;
v___x_2366_ = lean_ptr_addr(v_type_2349_);
v___x_2367_ = lean_ptr_addr(v_fst_2355_);
v___x_2368_ = lean_usize_dec_eq(v___x_2366_, v___x_2367_);
if (v___x_2368_ == 0)
{
lean_object* v___x_2369_; 
lean_inc(v_declName_2348_);
v___x_2369_ = l_Lean_Expr_letE___override(v_declName_2348_, v_fst_2355_, v_fst_2359_, v_fst_2363_, v___x_2365_);
v_e_x27_2246_ = v___x_2369_;
v___y_2247_ = v_snd_2364_;
goto v___jp_2245_;
}
else
{
size_t v___x_2370_; size_t v___x_2371_; uint8_t v___x_2372_; 
v___x_2370_ = lean_ptr_addr(v_value_2350_);
v___x_2371_ = lean_ptr_addr(v_fst_2359_);
v___x_2372_ = lean_usize_dec_eq(v___x_2370_, v___x_2371_);
if (v___x_2372_ == 0)
{
lean_object* v___x_2373_; 
lean_inc(v_declName_2348_);
v___x_2373_ = l_Lean_Expr_letE___override(v_declName_2348_, v_fst_2355_, v_fst_2359_, v_fst_2363_, v___x_2365_);
v_e_x27_2246_ = v___x_2373_;
v___y_2247_ = v_snd_2364_;
goto v___jp_2245_;
}
else
{
size_t v___x_2374_; size_t v___x_2375_; uint8_t v___x_2376_; 
v___x_2374_ = lean_ptr_addr(v_body_2351_);
v___x_2375_ = lean_ptr_addr(v_fst_2363_);
v___x_2376_ = lean_usize_dec_eq(v___x_2374_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; 
lean_inc(v_declName_2348_);
v___x_2377_ = l_Lean_Expr_letE___override(v_declName_2348_, v_fst_2355_, v_fst_2359_, v_fst_2363_, v___x_2365_);
v_e_x27_2246_ = v___x_2377_;
v___y_2247_ = v_snd_2364_;
goto v___jp_2245_;
}
else
{
if (v_nondep_2352_ == 0)
{
lean_dec(v_fst_2363_);
lean_dec(v_fst_2359_);
lean_dec(v_fst_2355_);
lean_inc_ref(v_e_2226_);
v_e_x27_2246_ = v_e_2226_;
v___y_2247_ = v_snd_2364_;
goto v___jp_2245_;
}
else
{
lean_object* v___x_2378_; 
lean_inc(v_declName_2348_);
v___x_2378_ = l_Lean_Expr_letE___override(v_declName_2348_, v_fst_2355_, v_fst_2359_, v_fst_2363_, v___x_2365_);
v_e_x27_2246_ = v___x_2378_;
v___y_2247_ = v_snd_2364_;
goto v___jp_2245_;
}
}
}
}
}
else
{
lean_dec(v_fst_2359_);
lean_dec(v_fst_2355_);
lean_dec_ref_known(v_e_2226_, 4);
return v___x_2361_;
}
}
else
{
lean_dec(v_fst_2355_);
lean_dec_ref_known(v_e_2226_, 4);
return v___x_2357_;
}
}
else
{
lean_dec_ref_known(v_e_2226_, 4);
return v___x_2353_;
}
}
case 10:
{
lean_object* v_expr_2379_; lean_object* v___x_2380_; 
v_expr_2379_ = lean_ctor_get(v_e_2226_, 1);
lean_inc_ref(v_expr_2379_);
v___x_2380_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_expr_2379_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v_fst_2382_; lean_object* v_snd_2383_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_a_2381_);
lean_dec_ref_known(v___x_2380_, 1);
v_fst_2382_ = lean_ctor_get(v_a_2381_, 0);
lean_inc(v_fst_2382_);
v_snd_2383_ = lean_ctor_get(v_a_2381_, 1);
lean_inc(v_snd_2383_);
lean_dec(v_a_2381_);
v_e_x27_2246_ = v_fst_2382_;
v___y_2247_ = v_snd_2383_;
goto v___jp_2245_;
}
else
{
lean_dec_ref_known(v_e_2226_, 2);
return v___x_2380_;
}
}
case 11:
{
lean_object* v_typeName_2384_; lean_object* v_idx_2385_; lean_object* v_struct_2386_; lean_object* v___x_2387_; 
v_typeName_2384_ = lean_ctor_get(v_e_2226_, 0);
v_idx_2385_ = lean_ctor_get(v_e_2226_, 1);
v_struct_2386_ = lean_ctor_get(v_e_2226_, 2);
lean_inc_ref(v_struct_2386_);
v___x_2387_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_struct_2386_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; lean_object* v_fst_2389_; lean_object* v_snd_2390_; size_t v___x_2391_; size_t v___x_2392_; uint8_t v___x_2393_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
v_fst_2389_ = lean_ctor_get(v_a_2388_, 0);
lean_inc(v_fst_2389_);
v_snd_2390_ = lean_ctor_get(v_a_2388_, 1);
lean_inc(v_snd_2390_);
lean_dec(v_a_2388_);
v___x_2391_ = lean_ptr_addr(v_struct_2386_);
v___x_2392_ = lean_ptr_addr(v_fst_2389_);
v___x_2393_ = lean_usize_dec_eq(v___x_2391_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; 
lean_inc(v_idx_2385_);
lean_inc(v_typeName_2384_);
v___x_2394_ = l_Lean_Expr_proj___override(v_typeName_2384_, v_idx_2385_, v_fst_2389_);
v_e_x27_2246_ = v___x_2394_;
v___y_2247_ = v_snd_2390_;
goto v___jp_2245_;
}
else
{
lean_dec(v_fst_2389_);
lean_inc_ref(v_e_2226_);
v_e_x27_2246_ = v_e_2226_;
v___y_2247_ = v_snd_2390_;
goto v___jp_2245_;
}
}
else
{
lean_dec_ref_known(v_e_2226_, 3);
return v___x_2387_;
}
}
default: 
{
lean_inc(v_recursorMap_2265_);
lean_inc_ref(v_noMDataExprs_2261_);
lean_inc_ref(v_visitedConstants_2260_);
lean_inc_ref(v_visitedExprs_2259_);
lean_inc_ref(v_visitedLevels_2258_);
lean_inc_ref(v_visitedNames_2257_);
lean_dec_ref(v___y_2228_);
lean_inc_ref(v_e_2226_);
v_e_x27_2231_ = v_e_2226_;
v_visitedNames_2232_ = v_visitedNames_2257_;
v_visitedLevels_2233_ = v_visitedLevels_2258_;
v_visitedExprs_2234_ = v_visitedExprs_2259_;
v_visitedConstants_2235_ = v_visitedConstants_2260_;
v_noMDataExprs_2236_ = v_noMDataExprs_2261_;
v_exportMData_2237_ = v_exportMData_2262_;
v_exportUnsafe_2238_ = v_exportUnsafe_2263_;
v_ignoreMissing_2239_ = v_ignoreMissing_2264_;
v_recursorMap_2240_ = v_recursorMap_2265_;
goto v___jp_2230_;
}
}
}
v___jp_2230_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
lean_inc_ref(v_e_x27_2231_);
v___x_2241_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_noMDataExprs_2236_, v_e_2226_, v_e_x27_2231_);
v___x_2242_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2242_, 0, v_visitedNames_2232_);
lean_ctor_set(v___x_2242_, 1, v_visitedLevels_2233_);
lean_ctor_set(v___x_2242_, 2, v_visitedExprs_2234_);
lean_ctor_set(v___x_2242_, 3, v_visitedConstants_2235_);
lean_ctor_set(v___x_2242_, 4, v___x_2241_);
lean_ctor_set(v___x_2242_, 5, v_recursorMap_2240_);
lean_ctor_set_uint8(v___x_2242_, sizeof(void*)*6, v_exportMData_2237_);
lean_ctor_set_uint8(v___x_2242_, sizeof(void*)*6 + 1, v_exportUnsafe_2238_);
lean_ctor_set_uint8(v___x_2242_, sizeof(void*)*6 + 2, v_ignoreMissing_2239_);
v___x_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2243_, 0, v_e_x27_2231_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
return v___x_2244_;
}
v___jp_2245_:
{
lean_object* v_visitedNames_2248_; lean_object* v_visitedLevels_2249_; lean_object* v_visitedExprs_2250_; lean_object* v_visitedConstants_2251_; lean_object* v_noMDataExprs_2252_; uint8_t v_exportMData_2253_; uint8_t v_exportUnsafe_2254_; uint8_t v_ignoreMissing_2255_; lean_object* v_recursorMap_2256_; 
v_visitedNames_2248_ = lean_ctor_get(v___y_2247_, 0);
lean_inc_ref(v_visitedNames_2248_);
v_visitedLevels_2249_ = lean_ctor_get(v___y_2247_, 1);
lean_inc_ref(v_visitedLevels_2249_);
v_visitedExprs_2250_ = lean_ctor_get(v___y_2247_, 2);
lean_inc_ref(v_visitedExprs_2250_);
v_visitedConstants_2251_ = lean_ctor_get(v___y_2247_, 3);
lean_inc_ref(v_visitedConstants_2251_);
v_noMDataExprs_2252_ = lean_ctor_get(v___y_2247_, 4);
lean_inc_ref(v_noMDataExprs_2252_);
v_exportMData_2253_ = lean_ctor_get_uint8(v___y_2247_, sizeof(void*)*6);
v_exportUnsafe_2254_ = lean_ctor_get_uint8(v___y_2247_, sizeof(void*)*6 + 1);
v_ignoreMissing_2255_ = lean_ctor_get_uint8(v___y_2247_, sizeof(void*)*6 + 2);
v_recursorMap_2256_ = lean_ctor_get(v___y_2247_, 5);
lean_inc(v_recursorMap_2256_);
lean_dec_ref(v___y_2247_);
v_e_x27_2231_ = v_e_x27_2246_;
v_visitedNames_2232_ = v_visitedNames_2248_;
v_visitedLevels_2233_ = v_visitedLevels_2249_;
v_visitedExprs_2234_ = v_visitedExprs_2250_;
v_visitedConstants_2235_ = v_visitedConstants_2251_;
v_noMDataExprs_2236_ = v_noMDataExprs_2252_;
v_exportMData_2237_ = v_exportMData_2253_;
v_exportUnsafe_2238_ = v_exportUnsafe_2254_;
v_ignoreMissing_2239_ = v_ignoreMissing_2255_;
v_recursorMap_2240_ = v_recursorMap_2256_;
goto v___jp_2230_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object* v_e_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_2395_, v___y_2396_, v___y_2397_);
lean_dec_ref(v___y_2396_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object* v_00_u03b2_2400_, lean_object* v_m_2401_, lean_object* v_a_2402_, lean_object* v_b_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_m_2401_, v_a_2402_, v_b_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object* v_00_u03b2_2405_, lean_object* v_m_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2406_, v_a_2407_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object* v_00_u03b2_2409_, lean_object* v_m_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(v_00_u03b2_2409_, v_m_2410_, v_a_2411_);
lean_dec_ref(v_a_2411_);
lean_dec_ref(v_m_2410_);
return v_res_2412_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object* v_00_u03b2_2413_, lean_object* v_a_2414_, lean_object* v_x_2415_){
_start:
{
uint8_t v___x_2416_; 
v___x_2416_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2414_, v_x_2415_);
return v___x_2416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2417_, lean_object* v_a_2418_, lean_object* v_x_2419_){
_start:
{
uint8_t v_res_2420_; lean_object* v_r_2421_; 
v_res_2420_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(v_00_u03b2_2417_, v_a_2418_, v_x_2419_);
lean_dec(v_x_2419_);
lean_dec_ref(v_a_2418_);
v_r_2421_ = lean_box(v_res_2420_);
return v_r_2421_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object* v_00_u03b2_2422_, lean_object* v_data_2423_){
_start:
{
lean_object* v___x_2424_; 
v___x_2424_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_data_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object* v_00_u03b2_2425_, lean_object* v_a_2426_, lean_object* v_b_2427_, lean_object* v_x_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2426_, v_b_2427_, v_x_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object* v_00_u03b2_2430_, lean_object* v_a_2431_, lean_object* v_x_2432_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2431_, v_x_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2434_, lean_object* v_a_2435_, lean_object* v_x_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(v_00_u03b2_2434_, v_a_2435_, v_x_2436_);
lean_dec(v_x_2436_);
lean_dec_ref(v_a_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2438_, lean_object* v_i_2439_, lean_object* v_source_2440_, lean_object* v_target_2441_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v_i_2439_, v_source_2440_, v_target_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_2443_, lean_object* v_x_2444_, lean_object* v_x_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_x_2444_, v_x_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object* v_fields_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = l_Lean_Json_mkObj(v_fields_2447_);
v___x_2451_ = l_Lean_Json_compress(v___x_2450_);
v___x_2452_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_2451_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2461_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2455_ = v___x_2452_;
v_isShared_2456_ = v_isSharedCheck_2461_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v___x_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2461_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2457_; lean_object* v___x_2459_; 
v___x_2457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2457_, 0, v_a_2453_);
lean_ctor_set(v___x_2457_, 1, v___y_2448_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v___x_2457_);
v___x_2459_ = v___x_2455_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_dec_ref(v___y_2448_);
v_a_2462_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2452_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2452_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object* v_fields_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2470_, v___y_2471_);
lean_dec(v_fields_2470_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object* v_fields_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v___x_2478_; 
v___x_2478_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2474_, v___y_2476_);
return v___x_2478_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object* v_fields_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(v_fields_2479_, v___y_2480_, v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v_fields_2479_);
return v_res_2483_;
}
}
static lean_object* _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Array_instInhabited___redArg();
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object* v_msg_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v___f_2489_; lean_object* v___f_2490_; lean_object* v___f_2491_; lean_object* v___f_2492_; lean_object* v___f_2493_; lean_object* v___f_2494_; lean_object* v___f_2495_; lean_object* v___f_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___f_2500_; lean_object* v___f_2501_; lean_object* v___f_2502_; lean_object* v___f_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_165752__overap_2514_; lean_object* v___x_2515_; 
v___f_2489_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0));
v___f_2490_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1));
v___f_2491_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2));
v___f_2492_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3));
v___f_2493_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4));
v___f_2494_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2494_, 0, v___f_2493_);
lean_closure_set(v___f_2494_, 1, v___f_2492_);
v___f_2495_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2495_, 0, v___f_2492_);
v___f_2496_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5));
v___x_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___f_2489_);
lean_ctor_set(v___x_2497_, 1, v___f_2490_);
v___x_2498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
lean_ctor_set(v___x_2498_, 1, v___f_2491_);
lean_ctor_set(v___x_2498_, 2, v___f_2494_);
lean_ctor_set(v___x_2498_, 3, v___f_2495_);
lean_ctor_set(v___x_2498_, 4, v___f_2496_);
v___x_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
lean_ctor_set(v___x_2499_, 1, v___f_2492_);
lean_inc_ref_n(v___x_2499_, 6);
v___f_2500_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2500_, 0, v___x_2499_);
v___f_2501_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2501_, 0, v___x_2499_);
v___f_2502_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2502_, 0, v___x_2499_);
v___f_2503_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2503_, 0, v___x_2499_);
v___x_2504_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2504_, 0, lean_box(0));
lean_closure_set(v___x_2504_, 1, lean_box(0));
lean_closure_set(v___x_2504_, 2, v___x_2499_);
v___x_2505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
lean_ctor_set(v___x_2505_, 1, v___f_2500_);
v___x_2506_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2506_, 0, lean_box(0));
lean_closure_set(v___x_2506_, 1, lean_box(0));
lean_closure_set(v___x_2506_, 2, v___x_2499_);
v___x_2507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
lean_ctor_set(v___x_2507_, 2, v___f_2501_);
lean_ctor_set(v___x_2507_, 3, v___f_2502_);
lean_ctor_set(v___x_2507_, 4, v___f_2503_);
v___x_2508_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2508_, 0, lean_box(0));
lean_closure_set(v___x_2508_, 1, lean_box(0));
lean_closure_set(v___x_2508_, 2, v___x_2499_);
v___x_2509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2507_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0);
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
v___x_2512_ = l_instInhabitedOfMonad___redArg(v___x_2509_, v___x_2511_);
v___x_2513_ = l_instInhabitedReaderT___redArg(v___x_2512_);
v___x_165752__overap_2514_ = lean_panic_fn_borrowed(v___x_2513_, v_msg_2485_);
lean_dec(v___x_2513_);
lean_inc_ref(v___y_2486_);
v___x_2515_ = lean_apply_3(v___x_165752__overap_2514_, v___y_2486_, v___y_2487_, lean_box(0));
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object* v_msg_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v_res_2520_; 
v_res_2520_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v_msg_2516_, v___y_2517_, v___y_2518_);
lean_dec_ref(v___y_2517_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object* v_msg_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_){
_start:
{
lean_object* v___f_2525_; lean_object* v___f_2526_; lean_object* v___f_2527_; lean_object* v___f_2528_; lean_object* v___f_2529_; lean_object* v___f_2530_; lean_object* v___f_2531_; lean_object* v___f_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___f_2536_; lean_object* v___f_2537_; lean_object* v___f_2538_; lean_object* v___f_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_165764__overap_2549_; lean_object* v___x_2550_; 
v___f_2525_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0));
v___f_2526_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1));
v___f_2527_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2));
v___f_2528_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3));
v___f_2529_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4));
v___f_2530_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2530_, 0, v___f_2529_);
lean_closure_set(v___f_2530_, 1, v___f_2528_);
v___f_2531_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2531_, 0, v___f_2528_);
v___f_2532_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5));
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___f_2525_);
lean_ctor_set(v___x_2533_, 1, v___f_2526_);
v___x_2534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
lean_ctor_set(v___x_2534_, 1, v___f_2527_);
lean_ctor_set(v___x_2534_, 2, v___f_2530_);
lean_ctor_set(v___x_2534_, 3, v___f_2531_);
lean_ctor_set(v___x_2534_, 4, v___f_2532_);
v___x_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
lean_ctor_set(v___x_2535_, 1, v___f_2528_);
lean_inc_ref_n(v___x_2535_, 6);
v___f_2536_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2536_, 0, v___x_2535_);
v___f_2537_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2537_, 0, v___x_2535_);
v___f_2538_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2538_, 0, v___x_2535_);
v___f_2539_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2539_, 0, v___x_2535_);
v___x_2540_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2540_, 0, lean_box(0));
lean_closure_set(v___x_2540_, 1, lean_box(0));
lean_closure_set(v___x_2540_, 2, v___x_2535_);
v___x_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
lean_ctor_set(v___x_2541_, 1, v___f_2536_);
v___x_2542_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2542_, 0, lean_box(0));
lean_closure_set(v___x_2542_, 1, lean_box(0));
lean_closure_set(v___x_2542_, 2, v___x_2535_);
v___x_2543_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2541_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
lean_ctor_set(v___x_2543_, 2, v___f_2537_);
lean_ctor_set(v___x_2543_, 3, v___f_2538_);
lean_ctor_set(v___x_2543_, 4, v___f_2539_);
v___x_2544_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2544_, 0, lean_box(0));
lean_closure_set(v___x_2544_, 1, lean_box(0));
lean_closure_set(v___x_2544_, 2, v___x_2535_);
v___x_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2543_);
lean_ctor_set(v___x_2545_, 1, v___x_2544_);
v___x_2546_ = lean_box(0);
v___x_2547_ = l_instInhabitedOfMonad___redArg(v___x_2545_, v___x_2546_);
v___x_2548_ = l_instInhabitedReaderT___redArg(v___x_2547_);
v___x_165764__overap_2549_ = lean_panic_fn_borrowed(v___x_2548_, v_msg_2521_);
lean_dec(v___x_2548_);
lean_inc_ref(v___y_2522_);
v___x_2550_ = lean_apply_3(v___x_165764__overap_2549_, v___y_2522_, v___y_2523_, lean_box(0));
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object* v_msg_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v_msg_2551_, v___y_2552_, v___y_2553_);
lean_dec_ref(v___y_2552_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object* v_msg_2556_){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2557_ = l_Lean_instInhabitedConstantInfo_default;
v___x_2558_ = lean_panic_fn_borrowed(v___x_2557_, v_msg_2556_);
return v___x_2558_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2(void){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2561_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__1));
v___x_2562_ = lean_unsigned_to_nat(8u);
v___x_2563_ = lean_unsigned_to_nat(354u);
v___x_2564_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2565_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2566_ = l_mkPanicMessageWithDecl(v___x_2565_, v___x_2564_, v___x_2563_, v___x_2562_, v___x_2561_);
return v___x_2566_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2568_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__3));
v___x_2569_ = lean_unsigned_to_nat(13u);
v___x_2570_ = lean_unsigned_to_nat(356u);
v___x_2571_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2572_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2573_ = l_mkPanicMessageWithDecl(v___x_2572_, v___x_2571_, v___x_2570_, v___x_2569_, v___x_2568_);
return v___x_2573_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2577_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__7));
v___x_2578_ = lean_unsigned_to_nat(14u);
v___x_2579_ = lean_unsigned_to_nat(22u);
v___x_2580_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__6));
v___x_2581_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__5));
v___x_2582_ = l_mkPanicMessageWithDecl(v___x_2581_, v___x_2580_, v___x_2579_, v___x_2578_, v___x_2577_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(uint8_t v___x_2583_, lean_object* v_init_2584_, lean_object* v_x_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v_d_2590_; lean_object* v___y_2591_; 
if (lean_obj_tag(v_x_2585_) == 0)
{
lean_object* v_k_2595_; lean_object* v_l_2596_; lean_object* v_r_2597_; lean_object* v___x_2598_; 
v_k_2595_ = lean_ctor_get(v_x_2585_, 1);
lean_inc(v_k_2595_);
v_l_2596_ = lean_ctor_get(v_x_2585_, 3);
lean_inc(v_l_2596_);
v_r_2597_ = lean_ctor_get(v_x_2585_, 4);
lean_inc(v_r_2597_);
lean_dec_ref_known(v_x_2585_, 5);
v___x_2598_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(v___x_2583_, v_init_2584_, v_l_2596_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v_fst_2600_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v_fst_2600_ = lean_ctor_get(v_a_2599_, 0);
lean_inc(v_fst_2600_);
if (lean_obj_tag(v_fst_2600_) == 0)
{
lean_object* v_snd_2601_; lean_object* v_a_2602_; 
lean_dec(v_r_2597_);
lean_dec(v_k_2595_);
v_snd_2601_ = lean_ctor_get(v_a_2599_, 1);
lean_inc(v_snd_2601_);
lean_dec(v_a_2599_);
v_a_2602_ = lean_ctor_get(v_fst_2600_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v_fst_2600_, 1);
v_d_2590_ = v_a_2602_;
v___y_2591_ = v_snd_2601_;
goto v___jp_2589_;
}
else
{
lean_object* v_snd_2603_; lean_object* v_a_2604_; lean_object* v___y_2606_; lean_object* v___y_2610_; lean_object* v___x_2636_; 
v_snd_2603_ = lean_ctor_get(v_a_2599_, 1);
lean_inc(v_snd_2603_);
lean_dec(v_a_2599_);
v_a_2604_ = lean_ctor_get(v_fst_2600_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v_fst_2600_, 1);
lean_inc_ref(v___y_2586_);
v___x_2636_ = l_Lean_Environment_find_x3f(v___y_2586_, v_k_2595_, v___x_2583_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8);
v___x_2638_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2637_);
v___y_2610_ = v___x_2638_;
goto v___jp_2609_;
}
else
{
lean_object* v_val_2639_; 
v_val_2639_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_val_2639_);
lean_dec_ref_known(v___x_2636_, 1);
v___y_2610_ = v_val_2639_;
goto v___jp_2609_;
}
v___jp_2605_:
{
lean_object* v___x_2607_; 
v___x_2607_ = lean_array_push(v_a_2604_, v___y_2606_);
v_init_2584_ = v___x_2607_;
v_x_2585_ = v_r_2597_;
v___y_2587_ = v_snd_2603_;
goto _start;
}
v___jp_2609_:
{
if (lean_obj_tag(v___y_2610_) == 7)
{
lean_object* v_val_2611_; uint8_t v_isUnsafe_2612_; 
v_val_2611_ = lean_ctor_get(v___y_2610_, 0);
lean_inc_ref(v_val_2611_);
lean_dec_ref_known(v___y_2610_, 1);
v_isUnsafe_2612_ = lean_ctor_get_uint8(v_val_2611_, sizeof(void*)*7 + 1);
if (v_isUnsafe_2612_ == 0)
{
v___y_2606_ = v_val_2611_;
goto v___jp_2605_;
}
else
{
if (v___x_2583_ == 0)
{
uint8_t v_exportUnsafe_2613_; 
v_exportUnsafe_2613_ = lean_ctor_get_uint8(v_snd_2603_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2615_; 
lean_dec_ref(v_val_2611_);
lean_dec(v_a_2604_);
v___x_2614_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2);
v___x_2615_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v___x_2614_, v___y_2586_, v_snd_2603_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v_fst_2617_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
v_fst_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_fst_2617_);
if (lean_obj_tag(v_fst_2617_) == 0)
{
lean_object* v_snd_2618_; lean_object* v_a_2619_; 
lean_dec(v_r_2597_);
v_snd_2618_ = lean_ctor_get(v_a_2616_, 1);
lean_inc(v_snd_2618_);
lean_dec(v_a_2616_);
v_a_2619_ = lean_ctor_get(v_fst_2617_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v_fst_2617_, 1);
v_d_2590_ = v_a_2619_;
v___y_2591_ = v_snd_2618_;
goto v___jp_2589_;
}
else
{
lean_object* v_snd_2620_; lean_object* v_a_2621_; 
v_snd_2620_ = lean_ctor_get(v_a_2616_, 1);
lean_inc(v_snd_2620_);
lean_dec(v_a_2616_);
v_a_2621_ = lean_ctor_get(v_fst_2617_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v_fst_2617_, 1);
v_init_2584_ = v_a_2621_;
v_x_2585_ = v_r_2597_;
v___y_2587_ = v_snd_2620_;
goto _start;
}
}
else
{
lean_dec(v_r_2597_);
return v___x_2615_;
}
}
else
{
v___y_2606_ = v_val_2611_;
goto v___jp_2605_;
}
}
else
{
v___y_2606_ = v_val_2611_;
goto v___jp_2605_;
}
}
}
else
{
lean_object* v___x_2623_; lean_object* v___x_2624_; 
lean_dec_ref(v___y_2610_);
v___x_2623_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4);
v___x_2624_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2623_, v___y_2586_, v_snd_2603_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; lean_object* v_snd_2626_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2624_, 1);
v_snd_2626_ = lean_ctor_get(v_a_2625_, 1);
lean_inc(v_snd_2626_);
lean_dec(v_a_2625_);
v_init_2584_ = v_a_2604_;
v_x_2585_ = v_r_2597_;
v___y_2587_ = v_snd_2626_;
goto _start;
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v_a_2604_);
lean_dec(v_r_2597_);
v_a_2628_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2624_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2624_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
}
}
else
{
lean_dec(v_r_2597_);
lean_dec(v_k_2595_);
return v___x_2598_;
}
}
else
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2640_, 0, v_init_2584_);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v___y_2587_);
v___x_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
return v___x_2642_;
}
v___jp_2589_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v_d_2590_);
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2592_);
lean_ctor_set(v___x_2593_, 1, v___y_2591_);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object* v___x_2643_, lean_object* v_init_2644_, lean_object* v_x_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
uint8_t v___x_178619__boxed_2649_; lean_object* v_res_2650_; 
v___x_178619__boxed_2649_ = lean_unbox(v___x_2643_);
v_res_2650_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(v___x_178619__boxed_2649_, v_init_2644_, v_x_2645_, v___y_2646_, v___y_2647_);
lean_dec_ref(v___y_2646_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(size_t v_sz_2651_, size_t v_i_2652_, lean_object* v_bs_2653_){
_start:
{
uint8_t v___x_2654_; 
v___x_2654_ = lean_usize_dec_lt(v_i_2652_, v_sz_2651_);
if (v___x_2654_ == 0)
{
return v_bs_2653_;
}
else
{
lean_object* v_v_2655_; lean_object* v___x_2656_; lean_object* v_bs_x27_2657_; size_t v___x_2658_; size_t v___x_2659_; lean_object* v___x_2660_; 
v_v_2655_ = lean_array_uget(v_bs_2653_, v_i_2652_);
v___x_2656_ = lean_unsigned_to_nat(0u);
v_bs_x27_2657_ = lean_array_uset(v_bs_2653_, v_i_2652_, v___x_2656_);
v___x_2658_ = ((size_t)1ULL);
v___x_2659_ = lean_usize_add(v_i_2652_, v___x_2658_);
v___x_2660_ = lean_array_uset(v_bs_x27_2657_, v_i_2652_, v_v_2655_);
v_i_2652_ = v___x_2659_;
v_bs_2653_ = v___x_2660_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22___boxed(lean_object* v_sz_2662_, lean_object* v_i_2663_, lean_object* v_bs_2664_){
_start:
{
size_t v_sz_boxed_2665_; size_t v_i_boxed_2666_; lean_object* v_res_2667_; 
v_sz_boxed_2665_ = lean_unbox_usize(v_sz_2662_);
lean_dec(v_sz_2662_);
v_i_boxed_2666_ = lean_unbox_usize(v_i_2663_);
lean_dec(v_i_2663_);
v_res_2667_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(v_sz_boxed_2665_, v_i_boxed_2666_, v_bs_2664_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(lean_object* v_a_2668_){
_start:
{
size_t v_sz_2669_; size_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v_sz_2669_ = lean_array_size(v_a_2668_);
v___x_2670_ = ((size_t)0ULL);
v___x_2671_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(v_sz_2669_, v___x_2670_, v_a_2668_);
v___x_2672_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object* v_a_2673_){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2674_ = lean_array_mk(v_a_2673_);
v___x_2675_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v___x_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object* v_msg_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v___f_2680_; lean_object* v___f_2681_; lean_object* v___f_2682_; lean_object* v___f_2683_; lean_object* v___f_2684_; lean_object* v___f_2685_; lean_object* v___f_2686_; lean_object* v___f_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___f_2691_; lean_object* v___f_2692_; lean_object* v___f_2693_; lean_object* v___f_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_166796__overap_2705_; lean_object* v___x_2706_; 
v___f_2680_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0));
v___f_2681_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1));
v___f_2682_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2));
v___f_2683_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3));
v___f_2684_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4));
v___f_2685_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2685_, 0, v___f_2684_);
lean_closure_set(v___f_2685_, 1, v___f_2683_);
v___f_2686_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2686_, 0, v___f_2683_);
v___f_2687_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5));
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___f_2680_);
lean_ctor_set(v___x_2688_, 1, v___f_2681_);
v___x_2689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2688_);
lean_ctor_set(v___x_2689_, 1, v___f_2682_);
lean_ctor_set(v___x_2689_, 2, v___f_2685_);
lean_ctor_set(v___x_2689_, 3, v___f_2686_);
lean_ctor_set(v___x_2689_, 4, v___f_2687_);
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
lean_ctor_set(v___x_2690_, 1, v___f_2683_);
lean_inc_ref_n(v___x_2690_, 6);
v___f_2691_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2691_, 0, v___x_2690_);
v___f_2692_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2692_, 0, v___x_2690_);
v___f_2693_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2693_, 0, v___x_2690_);
v___f_2694_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2694_, 0, v___x_2690_);
v___x_2695_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2695_, 0, lean_box(0));
lean_closure_set(v___x_2695_, 1, lean_box(0));
lean_closure_set(v___x_2695_, 2, v___x_2690_);
v___x_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2695_);
lean_ctor_set(v___x_2696_, 1, v___f_2691_);
v___x_2697_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2697_, 0, lean_box(0));
lean_closure_set(v___x_2697_, 1, lean_box(0));
lean_closure_set(v___x_2697_, 2, v___x_2690_);
v___x_2698_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2696_);
lean_ctor_set(v___x_2698_, 1, v___x_2697_);
lean_ctor_set(v___x_2698_, 2, v___f_2692_);
lean_ctor_set(v___x_2698_, 3, v___f_2693_);
lean_ctor_set(v___x_2698_, 4, v___f_2694_);
v___x_2699_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2699_, 0, lean_box(0));
lean_closure_set(v___x_2699_, 1, lean_box(0));
lean_closure_set(v___x_2699_, 2, v___x_2690_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2698_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
v___x_2701_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0);
v___x_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2701_);
v___x_2703_ = l_instInhabitedOfMonad___redArg(v___x_2700_, v___x_2702_);
v___x_2704_ = l_instInhabitedReaderT___redArg(v___x_2703_);
v___x_166796__overap_2705_ = lean_panic_fn_borrowed(v___x_2704_, v_msg_2676_);
lean_dec(v___x_2704_);
lean_inc_ref(v___y_2677_);
v___x_2706_ = lean_apply_3(v___x_166796__overap_2705_, v___y_2677_, v___y_2678_, lean_box(0));
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object* v_msg_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v_msg_2707_, v___y_2708_, v___y_2709_);
lean_dec_ref(v___y_2708_);
return v_res_2711_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2713_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2714_ = lean_unsigned_to_nat(10u);
v___x_2715_ = lean_unsigned_to_nat(334u);
v___x_2716_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2717_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2718_ = l_mkPanicMessageWithDecl(v___x_2717_, v___x_2716_, v___x_2715_, v___x_2714_, v___x_2713_);
return v___x_2718_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2720_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2));
v___x_2721_ = lean_unsigned_to_nat(15u);
v___x_2722_ = lean_unsigned_to_nat(336u);
v___x_2723_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2724_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2725_ = l_mkPanicMessageWithDecl(v___x_2724_, v___x_2723_, v___x_2722_, v___x_2721_, v___x_2720_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t v___y_2726_, uint8_t v___x_2727_, lean_object* v_as_x27_2728_, lean_object* v_b_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
if (lean_obj_tag(v_as_x27_2728_) == 0)
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2733_, 0, v_b_2729_);
lean_ctor_set(v___x_2733_, 1, v___y_2731_);
v___x_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2733_);
return v___x_2734_;
}
else
{
lean_object* v_head_2735_; lean_object* v_tail_2736_; lean_object* v___y_2738_; lean_object* v___y_2742_; uint8_t v___y_2743_; lean_object* v___y_2778_; lean_object* v___x_2794_; 
v_head_2735_ = lean_ctor_get(v_as_x27_2728_, 0);
v_tail_2736_ = lean_ctor_get(v_as_x27_2728_, 1);
lean_inc(v_head_2735_);
lean_inc_ref(v___y_2730_);
v___x_2794_ = l_Lean_Environment_find_x3f(v___y_2730_, v_head_2735_, v___x_2727_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8);
v___x_2796_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2795_);
v___y_2778_ = v___x_2796_;
goto v___jp_2777_;
}
else
{
lean_object* v_val_2797_; 
v_val_2797_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_val_2797_);
lean_dec_ref_known(v___x_2794_, 1);
v___y_2778_ = v_val_2797_;
goto v___jp_2777_;
}
v___jp_2737_:
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_array_push(v_b_2729_, v___y_2738_);
v_as_x27_2728_ = v_tail_2736_;
v_b_2729_ = v___x_2739_;
goto _start;
}
v___jp_2741_:
{
if (v___y_2743_ == 0)
{
uint8_t v_exportUnsafe_2744_; 
v_exportUnsafe_2744_ = lean_ctor_get_uint8(v___y_2731_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2744_ == 0)
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
lean_dec_ref(v___y_2742_);
lean_dec_ref(v_b_2729_);
v___x_2745_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1);
v___x_2746_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v___x_2745_, v___y_2730_, v___y_2731_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2768_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2749_ = v___x_2746_;
v_isShared_2750_ = v_isSharedCheck_2768_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2746_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2768_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v_fst_2751_; 
v_fst_2751_ = lean_ctor_get(v_a_2747_, 0);
lean_inc(v_fst_2751_);
if (lean_obj_tag(v_fst_2751_) == 0)
{
lean_object* v_snd_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2763_; 
v_snd_2752_ = lean_ctor_get(v_a_2747_, 1);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_a_2747_);
if (v_isSharedCheck_2763_ == 0)
{
lean_object* v_unused_2764_; 
v_unused_2764_ = lean_ctor_get(v_a_2747_, 0);
lean_dec(v_unused_2764_);
v___x_2754_ = v_a_2747_;
v_isShared_2755_ = v_isSharedCheck_2763_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_snd_2752_);
lean_dec(v_a_2747_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2763_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v_a_2756_; lean_object* v___x_2758_; 
v_a_2756_ = lean_ctor_get(v_fst_2751_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v_fst_2751_, 1);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 0, v_a_2756_);
v___x_2758_ = v___x_2754_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v_snd_2752_);
v___x_2758_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
lean_object* v___x_2760_; 
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 0, v___x_2758_);
v___x_2760_ = v___x_2749_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
}
else
{
lean_object* v_snd_2765_; lean_object* v_a_2766_; 
lean_del_object(v___x_2749_);
v_snd_2765_ = lean_ctor_get(v_a_2747_, 1);
lean_inc(v_snd_2765_);
lean_dec(v_a_2747_);
v_a_2766_ = lean_ctor_get(v_fst_2751_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v_fst_2751_, 1);
v_as_x27_2728_ = v_tail_2736_;
v_b_2729_ = v_a_2766_;
v___y_2731_ = v_snd_2765_;
goto _start;
}
}
}
else
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2776_; 
v_a_2769_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2771_ = v___x_2746_;
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2746_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2774_; 
if (v_isShared_2772_ == 0)
{
v___x_2774_ = v___x_2771_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2769_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
return v___x_2774_;
}
}
}
}
else
{
v___y_2738_ = v___y_2742_;
goto v___jp_2737_;
}
}
else
{
v___y_2738_ = v___y_2742_;
goto v___jp_2737_;
}
}
v___jp_2777_:
{
if (lean_obj_tag(v___y_2778_) == 6)
{
lean_object* v_val_2779_; uint8_t v_isUnsafe_2780_; 
v_val_2779_ = lean_ctor_get(v___y_2778_, 0);
lean_inc_ref(v_val_2779_);
lean_dec_ref_known(v___y_2778_, 1);
v_isUnsafe_2780_ = lean_ctor_get_uint8(v_val_2779_, sizeof(void*)*5);
if (v_isUnsafe_2780_ == 0)
{
v___y_2742_ = v_val_2779_;
v___y_2743_ = v___y_2726_;
goto v___jp_2741_;
}
else
{
v___y_2742_ = v_val_2779_;
v___y_2743_ = v___x_2727_;
goto v___jp_2741_;
}
}
else
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
lean_dec_ref(v___y_2778_);
v___x_2781_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3);
v___x_2782_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2781_, v___y_2730_, v___y_2731_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v_snd_2784_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v___x_2782_, 1);
v_snd_2784_ = lean_ctor_get(v_a_2783_, 1);
lean_inc(v_snd_2784_);
lean_dec(v_a_2783_);
v_as_x27_2728_ = v_tail_2736_;
v___y_2731_ = v_snd_2784_;
goto _start;
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
lean_dec_ref(v_b_2729_);
v_a_2786_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2782_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2782_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object* v___y_2798_, lean_object* v___x_2799_, lean_object* v_as_x27_2800_, lean_object* v_b_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
uint8_t v___y_178896__boxed_2805_; uint8_t v___x_178897__boxed_2806_; lean_object* v_res_2807_; 
v___y_178896__boxed_2805_ = lean_unbox(v___y_2798_);
v___x_178897__boxed_2806_ = lean_unbox(v___x_2799_);
v_res_2807_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_178896__boxed_2805_, v___x_178897__boxed_2806_, v_as_x27_2800_, v_b_2801_, v___y_2802_, v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v_as_x27_2800_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__10(lean_object* v_msg_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v___f_2812_; lean_object* v___f_2813_; lean_object* v___f_2814_; lean_object* v___f_2815_; lean_object* v___f_2816_; lean_object* v___f_2817_; lean_object* v___f_2818_; lean_object* v___f_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___f_2823_; lean_object* v___f_2824_; lean_object* v___f_2825_; lean_object* v___f_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_167763__overap_2840_; lean_object* v___x_2841_; 
v___f_2812_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0));
v___f_2813_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__1));
v___f_2814_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__2));
v___f_2815_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__3));
v___f_2816_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__4));
v___f_2817_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2817_, 0, v___f_2816_);
lean_closure_set(v___f_2817_, 1, v___f_2815_);
v___f_2818_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2818_, 0, v___f_2815_);
v___f_2819_ = ((lean_object*)(l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__5));
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___f_2812_);
lean_ctor_set(v___x_2820_, 1, v___f_2813_);
v___x_2821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
lean_ctor_set(v___x_2821_, 1, v___f_2814_);
lean_ctor_set(v___x_2821_, 2, v___f_2817_);
lean_ctor_set(v___x_2821_, 3, v___f_2818_);
lean_ctor_set(v___x_2821_, 4, v___f_2819_);
v___x_2822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2821_);
lean_ctor_set(v___x_2822_, 1, v___f_2815_);
lean_inc_ref_n(v___x_2822_, 6);
v___f_2823_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2823_, 0, v___x_2822_);
v___f_2824_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2824_, 0, v___x_2822_);
v___f_2825_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2825_, 0, v___x_2822_);
v___f_2826_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2826_, 0, v___x_2822_);
v___x_2827_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2827_, 0, lean_box(0));
lean_closure_set(v___x_2827_, 1, lean_box(0));
lean_closure_set(v___x_2827_, 2, v___x_2822_);
v___x_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
lean_ctor_set(v___x_2828_, 1, v___f_2823_);
v___x_2829_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2829_, 0, lean_box(0));
lean_closure_set(v___x_2829_, 1, lean_box(0));
lean_closure_set(v___x_2829_, 2, v___x_2822_);
v___x_2830_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2828_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
lean_ctor_set(v___x_2830_, 2, v___f_2824_);
lean_ctor_set(v___x_2830_, 3, v___f_2825_);
lean_ctor_set(v___x_2830_, 4, v___f_2826_);
v___x_2831_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2831_, 0, lean_box(0));
lean_closure_set(v___x_2831_, 1, lean_box(0));
lean_closure_set(v___x_2831_, 2, v___x_2822_);
v___x_2832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2830_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0);
v___x_2834_ = lean_box(1);
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2833_);
lean_ctor_set(v___x_2836_, 1, v___x_2835_);
v___x_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2836_);
v___x_2838_ = l_instInhabitedOfMonad___redArg(v___x_2832_, v___x_2837_);
v___x_2839_ = l_instInhabitedReaderT___redArg(v___x_2838_);
v___x_167763__overap_2840_ = lean_panic_fn_borrowed(v___x_2839_, v_msg_2808_);
lean_dec(v___x_2839_);
lean_inc_ref(v___y_2809_);
v___x_2841_ = lean_apply_3(v___x_167763__overap_2840_, v___y_2809_, v___y_2810_, lean_box(0));
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object* v_msg_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_panic___at___00LeanExport_dumpConstant_spec__10(v_msg_2842_, v___y_2843_, v___y_2844_);
lean_dec_ref(v___y_2843_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(lean_object* v_as_2847_, size_t v_sz_2848_, size_t v_i_2849_, lean_object* v_b_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
uint8_t v___x_2854_; 
v___x_2854_ = lean_usize_dec_lt(v_i_2849_, v_sz_2848_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2855_, 0, v_b_2850_);
lean_ctor_set(v___x_2855_, 1, v___y_2852_);
v___x_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
return v___x_2856_;
}
else
{
lean_object* v_visitedNames_2857_; lean_object* v_visitedLevels_2858_; lean_object* v_visitedExprs_2859_; lean_object* v_visitedConstants_2860_; lean_object* v_noMDataExprs_2861_; uint8_t v_exportMData_2862_; uint8_t v_exportUnsafe_2863_; uint8_t v_ignoreMissing_2864_; lean_object* v_recursorMap_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2884_; 
v_visitedNames_2857_ = lean_ctor_get(v___y_2852_, 0);
v_visitedLevels_2858_ = lean_ctor_get(v___y_2852_, 1);
v_visitedExprs_2859_ = lean_ctor_get(v___y_2852_, 2);
v_visitedConstants_2860_ = lean_ctor_get(v___y_2852_, 3);
v_noMDataExprs_2861_ = lean_ctor_get(v___y_2852_, 4);
v_exportMData_2862_ = lean_ctor_get_uint8(v___y_2852_, sizeof(void*)*6);
v_exportUnsafe_2863_ = lean_ctor_get_uint8(v___y_2852_, sizeof(void*)*6 + 1);
v_ignoreMissing_2864_ = lean_ctor_get_uint8(v___y_2852_, sizeof(void*)*6 + 2);
v_recursorMap_2865_ = lean_ctor_get(v___y_2852_, 5);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___y_2852_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2867_ = v___y_2852_;
v_isShared_2868_ = v_isSharedCheck_2884_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_recursorMap_2865_);
lean_inc(v_noMDataExprs_2861_);
lean_inc(v_visitedConstants_2860_);
lean_inc(v_visitedExprs_2859_);
lean_inc(v_visitedLevels_2858_);
lean_inc(v_visitedNames_2857_);
lean_dec(v___y_2852_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2884_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v_a_2869_; lean_object* v_toConstantVal_2870_; lean_object* v_name_2871_; lean_object* v_type_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2876_; 
v_a_2869_ = lean_array_uget_borrowed(v_as_2847_, v_i_2849_);
v_toConstantVal_2870_ = lean_ctor_get(v_a_2869_, 0);
v_name_2871_ = lean_ctor_get(v_toConstantVal_2870_, 0);
v_type_2872_ = lean_ctor_get(v_toConstantVal_2870_, 2);
v___x_2873_ = lean_box(0);
lean_inc(v_name_2871_);
v___x_2874_ = l_Lean_NameHashSet_insert(v_visitedConstants_2860_, v_name_2871_);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 3, v___x_2874_);
v___x_2876_ = v___x_2867_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_visitedNames_2857_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v_visitedLevels_2858_);
lean_ctor_set(v_reuseFailAlloc_2883_, 2, v_visitedExprs_2859_);
lean_ctor_set(v_reuseFailAlloc_2883_, 3, v___x_2874_);
lean_ctor_set(v_reuseFailAlloc_2883_, 4, v_noMDataExprs_2861_);
lean_ctor_set(v_reuseFailAlloc_2883_, 5, v_recursorMap_2865_);
lean_ctor_set_uint8(v_reuseFailAlloc_2883_, sizeof(void*)*6, v_exportMData_2862_);
lean_ctor_set_uint8(v_reuseFailAlloc_2883_, sizeof(void*)*6 + 1, v_exportUnsafe_2863_);
lean_ctor_set_uint8(v_reuseFailAlloc_2883_, sizeof(void*)*6 + 2, v_ignoreMissing_2864_);
v___x_2876_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
lean_object* v___x_2877_; 
lean_inc_ref(v_type_2872_);
v___x_2877_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_2872_, v___y_2851_, v___x_2876_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; lean_object* v_snd_2879_; size_t v___x_2880_; size_t v___x_2881_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
lean_inc(v_a_2878_);
lean_dec_ref_known(v___x_2877_, 1);
v_snd_2879_ = lean_ctor_get(v_a_2878_, 1);
lean_inc(v_snd_2879_);
lean_dec(v_a_2878_);
v___x_2880_ = ((size_t)1ULL);
v___x_2881_ = lean_usize_add(v_i_2849_, v___x_2880_);
v_i_2849_ = v___x_2881_;
v_b_2850_ = v___x_2873_;
v___y_2852_ = v_snd_2879_;
goto _start;
}
else
{
return v___x_2877_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(lean_object* v_as_x27_2885_, lean_object* v_b_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
if (lean_obj_tag(v_as_x27_2885_) == 0)
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v_b_2886_);
lean_ctor_set(v___x_2890_, 1, v___y_2888_);
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
return v___x_2891_;
}
else
{
lean_object* v_head_2892_; lean_object* v_tail_2893_; lean_object* v_rhs_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v_head_2892_ = lean_ctor_get(v_as_x27_2885_, 0);
v_tail_2893_ = lean_ctor_get(v_as_x27_2885_, 1);
v_rhs_2894_ = lean_ctor_get(v_head_2892_, 2);
v___x_2895_ = lean_box(0);
lean_inc_ref(v_rhs_2894_);
v___x_2896_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_rhs_2894_, v___y_2887_, v___y_2888_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v_snd_2898_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___x_2896_, 1);
v_snd_2898_ = lean_ctor_get(v_a_2897_, 1);
lean_inc(v_snd_2898_);
lean_dec(v_a_2897_);
v_as_x27_2885_ = v_tail_2893_;
v_b_2886_ = v___x_2895_;
v___y_2888_ = v_snd_2898_;
goto _start;
}
else
{
return v___x_2896_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object* v_as_2900_, size_t v_sz_2901_, size_t v_i_2902_, lean_object* v_b_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
uint8_t v___x_2907_; 
v___x_2907_ = lean_usize_dec_lt(v_i_2902_, v_sz_2901_);
if (v___x_2907_ == 0)
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2908_, 0, v_b_2903_);
lean_ctor_set(v___x_2908_, 1, v___y_2905_);
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
else
{
lean_object* v_a_2910_; lean_object* v_rules_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v_a_2910_ = lean_array_uget_borrowed(v_as_2900_, v_i_2902_);
v_rules_2911_ = lean_ctor_get(v_a_2910_, 6);
v___x_2912_ = lean_box(0);
v___x_2913_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v_rules_2911_, v___x_2912_, v___y_2904_, v___y_2905_);
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v_a_2914_; lean_object* v_snd_2915_; size_t v___x_2916_; size_t v___x_2917_; 
v_a_2914_ = lean_ctor_get(v___x_2913_, 0);
lean_inc(v_a_2914_);
lean_dec_ref_known(v___x_2913_, 1);
v_snd_2915_ = lean_ctor_get(v_a_2914_, 1);
lean_inc(v_snd_2915_);
lean_dec(v_a_2914_);
v___x_2916_ = ((size_t)1ULL);
v___x_2917_ = lean_usize_add(v_i_2902_, v___x_2916_);
v_i_2902_ = v___x_2917_;
v_b_2903_ = v___x_2912_;
v___y_2905_ = v_snd_2915_;
goto _start;
}
else
{
return v___x_2913_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__0(void){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2919_ = lean_box(0);
v___x_2920_ = lean_unsigned_to_nat(16u);
v___x_2921_ = lean_mk_array(v___x_2920_, v___x_2919_);
return v___x_2921_;
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__1(void){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2922_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__0, &l_LeanExport_dumpExpr___closed__0_once, _init_l_LeanExport_dumpExpr___closed__0);
v___x_2923_ = lean_unsigned_to_nat(0u);
v___x_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2923_);
lean_ctor_set(v___x_2924_, 1, v___x_2922_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_visitedConstants_2951_; lean_object* v_nat_2952_; uint8_t v___x_2953_; 
v_visitedConstants_2951_ = lean_ctor_get(v___y_2945_, 3);
v_nat_2952_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1));
v___x_2953_ = l_Lean_NameHashSet_contains(v_visitedConstants_2951_, v_nat_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2954_; 
lean_inc_ref(v___y_2944_);
v___x_2954_ = l_Lean_Environment_find_x3f(v___y_2944_, v_nat_2952_, v___x_2953_);
if (lean_obj_tag(v___x_2954_) == 0)
{
goto v___jp_2947_;
}
else
{
lean_object* v___x_2955_; 
lean_dec_ref_known(v___x_2954_, 1);
v___x_2955_ = l_LeanExport_dumpConstant(v_nat_2952_, v___y_2944_, v___y_2945_);
return v___x_2955_;
}
}
else
{
goto v___jp_2947_;
}
v___jp_2947_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2948_ = lean_box(0);
v___x_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
lean_ctor_set(v___x_2949_, 1, v___y_2945_);
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
return v___x_2950_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v___y_2971_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v_visitedConstants_2978_; lean_object* v_visitedConstants_2983_; lean_object* v_charOfNat_2984_; uint8_t v___x_2985_; 
v_visitedConstants_2983_ = lean_ctor_get(v___y_2968_, 3);
v_charOfNat_2984_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5));
v___x_2985_ = l_Lean_NameHashSet_contains(v_visitedConstants_2983_, v_charOfNat_2984_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; 
lean_inc_ref(v___y_2967_);
v___x_2986_ = l_Lean_Environment_find_x3f(v___y_2967_, v_charOfNat_2984_, v___x_2985_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_inc_ref(v_visitedConstants_2983_);
v___y_2976_ = v___y_2967_;
v___y_2977_ = v___y_2968_;
v_visitedConstants_2978_ = v_visitedConstants_2983_;
goto v___jp_2975_;
}
else
{
lean_object* v___x_2987_; 
lean_dec_ref_known(v___x_2986_, 1);
v___x_2987_ = l_LeanExport_dumpConstant(v_charOfNat_2984_, v___y_2967_, v___y_2968_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v_snd_2989_; lean_object* v_visitedConstants_2990_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v___x_2987_, 1);
v_snd_2989_ = lean_ctor_get(v_a_2988_, 1);
lean_inc(v_snd_2989_);
lean_dec(v_a_2988_);
v_visitedConstants_2990_ = lean_ctor_get(v_snd_2989_, 3);
lean_inc_ref(v_visitedConstants_2990_);
v___y_2976_ = v___y_2967_;
v___y_2977_ = v_snd_2989_;
v_visitedConstants_2978_ = v_visitedConstants_2990_;
goto v___jp_2975_;
}
else
{
return v___x_2987_;
}
}
}
else
{
lean_inc_ref(v_visitedConstants_2983_);
v___y_2976_ = v___y_2967_;
v___y_2977_ = v___y_2968_;
v_visitedConstants_2978_ = v_visitedConstants_2983_;
goto v___jp_2975_;
}
v___jp_2970_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2972_ = lean_box(0);
v___x_2973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
lean_ctor_set(v___x_2973_, 1, v___y_2971_);
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
return v___x_2974_;
}
v___jp_2975_:
{
lean_object* v___x_2979_; uint8_t v___x_2980_; 
v___x_2979_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2));
v___x_2980_ = l_Lean_NameHashSet_contains(v_visitedConstants_2978_, v___x_2979_);
lean_dec_ref(v_visitedConstants_2978_);
if (v___x_2980_ == 0)
{
lean_object* v___x_2981_; 
lean_inc_ref(v___y_2976_);
v___x_2981_ = l_Lean_Environment_find_x3f(v___y_2976_, v___x_2979_, v___x_2980_);
if (lean_obj_tag(v___x_2981_) == 0)
{
v___y_2971_ = v___y_2977_;
goto v___jp_2970_;
}
else
{
lean_object* v___x_2982_; 
lean_dec_ref_known(v___x_2981_, 1);
v___x_2982_ = l_LeanExport_dumpConstant(v___x_2979_, v___y_2976_, v___y_2977_);
return v___x_2982_;
}
}
else
{
v___y_2971_ = v___y_2977_;
goto v___jp_2970_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExprAux___closed__26(void){
_start:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3001_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__25));
v___x_3002_ = lean_unsigned_to_nat(29u);
v___x_3003_ = lean_unsigned_to_nat(177u);
v___x_3004_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__24));
v___x_3005_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_3006_ = l_mkPanicMessageWithDecl(v___x_3005_, v___x_3004_, v___x_3003_, v___x_3002_, v___x_3001_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object* v_e_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v_visitedNames_3011_; lean_object* v_visitedLevels_3012_; lean_object* v_visitedExprs_3013_; lean_object* v_visitedConstants_3014_; lean_object* v_noMDataExprs_3015_; uint8_t v_exportMData_3016_; uint8_t v_exportUnsafe_3017_; uint8_t v_ignoreMissing_3018_; lean_object* v_recursorMap_3019_; lean_object* v___x_3020_; 
v_visitedNames_3011_ = lean_ctor_get(v___y_3009_, 0);
v_visitedLevels_3012_ = lean_ctor_get(v___y_3009_, 1);
v_visitedExprs_3013_ = lean_ctor_get(v___y_3009_, 2);
v_visitedConstants_3014_ = lean_ctor_get(v___y_3009_, 3);
v_noMDataExprs_3015_ = lean_ctor_get(v___y_3009_, 4);
v_exportMData_3016_ = lean_ctor_get_uint8(v___y_3009_, sizeof(void*)*6);
v_exportUnsafe_3017_ = lean_ctor_get_uint8(v___y_3009_, sizeof(void*)*6 + 1);
v_ignoreMissing_3018_ = lean_ctor_get_uint8(v___y_3009_, sizeof(void*)*6 + 2);
v_recursorMap_3019_ = lean_ctor_get(v___y_3009_, 5);
v___x_3020_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_visitedExprs_3013_, v_e_3007_);
if (lean_obj_tag(v___x_3020_) == 1)
{
lean_object* v_val_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3029_; 
lean_dec_ref(v_e_3007_);
v_val_3021_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3023_ = v___x_3020_;
v_isShared_3024_ = v_isSharedCheck_3029_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_val_3021_);
lean_dec(v___x_3020_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3029_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3025_; lean_object* v___x_3027_; 
v___x_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3025_, 0, v_val_3021_);
lean_ctor_set(v___x_3025_, 1, v___y_3009_);
if (v_isShared_3024_ == 0)
{
lean_ctor_set_tag(v___x_3023_, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3025_);
v___x_3027_ = v___x_3023_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
else
{
lean_object* v___x_3030_; lean_object* v_fst_3032_; lean_object* v_visitedNames_3033_; lean_object* v_visitedLevels_3034_; lean_object* v_visitedExprs_3035_; lean_object* v_visitedConstants_3036_; lean_object* v_noMDataExprs_3037_; uint8_t v_exportMData_3038_; uint8_t v_exportUnsafe_3039_; uint8_t v_ignoreMissing_3040_; lean_object* v_recursorMap_3041_; lean_object* v_fst_3068_; lean_object* v_snd_3069_; 
lean_dec(v___x_3020_);
v___x_3030_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__0));
switch(lean_obj_tag(v_e_3007_))
{
case 0:
{
lean_object* v_deBruijnIndex_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
lean_inc(v_recursorMap_3019_);
lean_inc_ref(v_noMDataExprs_3015_);
lean_inc_ref(v_visitedConstants_3014_);
lean_inc_ref(v_visitedExprs_3013_);
lean_inc_ref(v_visitedLevels_3012_);
lean_inc_ref(v_visitedNames_3011_);
lean_dec_ref(v___y_3009_);
v_deBruijnIndex_3079_ = lean_ctor_get(v_e_3007_, 0);
v___x_3080_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__1));
lean_inc(v_deBruijnIndex_3079_);
v___x_3081_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_3079_);
v___x_3082_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3081_);
v___x_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3080_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = lean_box(0);
v___x_3085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3083_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = l_Lean_Json_mkObj(v___x_3085_);
lean_dec_ref_known(v___x_3085_, 2);
v_fst_3032_ = v___x_3086_;
v_visitedNames_3033_ = v_visitedNames_3011_;
v_visitedLevels_3034_ = v_visitedLevels_3012_;
v_visitedExprs_3035_ = v_visitedExprs_3013_;
v_visitedConstants_3036_ = v_visitedConstants_3014_;
v_noMDataExprs_3037_ = v_noMDataExprs_3015_;
v_exportMData_3038_ = v_exportMData_3016_;
v_exportUnsafe_3039_ = v_exportUnsafe_3017_;
v_ignoreMissing_3040_ = v_ignoreMissing_3018_;
v_recursorMap_3041_ = v_recursorMap_3019_;
goto v___jp_3031_;
}
case 3:
{
lean_object* v_u_3087_; lean_object* v___x_3088_; 
v_u_3087_ = lean_ctor_get(v_e_3007_, 0);
lean_inc(v_u_3087_);
v___x_3088_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_u_3087_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3110_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3091_ = v___x_3088_;
v_isShared_3092_ = v_isSharedCheck_3110_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3088_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3110_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v_fst_3093_; lean_object* v_snd_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3109_; 
v_fst_3093_ = lean_ctor_get(v_a_3089_, 0);
v_snd_3094_ = lean_ctor_get(v_a_3089_, 1);
v_isSharedCheck_3109_ = !lean_is_exclusive(v_a_3089_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3096_ = v_a_3089_;
v_isShared_3097_ = v_isSharedCheck_3109_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_snd_3094_);
lean_inc(v_fst_3093_);
lean_dec(v_a_3089_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3109_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3101_; 
v___x_3098_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__2));
v___x_3099_ = l_Lean_JsonNumber_fromNat(v_fst_3093_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set_tag(v___x_3091_, 2);
lean_ctor_set(v___x_3091_, 0, v___x_3099_);
v___x_3101_ = v___x_3091_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v___x_3099_);
v___x_3101_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
lean_object* v___x_3103_; 
if (v_isShared_3097_ == 0)
{
lean_ctor_set(v___x_3096_, 1, v___x_3101_);
lean_ctor_set(v___x_3096_, 0, v___x_3098_);
v___x_3103_ = v___x_3096_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v___x_3098_);
lean_ctor_set(v_reuseFailAlloc_3107_, 1, v___x_3101_);
v___x_3103_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3104_ = lean_box(0);
v___x_3105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3103_);
lean_ctor_set(v___x_3105_, 1, v___x_3104_);
v___x_3106_ = l_Lean_Json_mkObj(v___x_3105_);
lean_dec_ref_known(v___x_3105_, 2);
v_fst_3068_ = v___x_3106_;
v_snd_3069_ = v_snd_3094_;
goto v___jp_3067_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 1);
return v___x_3088_;
}
}
case 4:
{
lean_object* v_declName_3111_; lean_object* v_us_3112_; lean_object* v___x_3113_; 
v_declName_3111_ = lean_ctor_get(v_e_3007_, 0);
v_us_3112_ = lean_ctor_get(v_e_3007_, 1);
lean_inc(v_declName_3111_);
v___x_3113_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3111_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3161_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3116_ = v___x_3113_;
v_isShared_3117_ = v_isSharedCheck_3161_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3113_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3161_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v_fst_3118_; lean_object* v_snd_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3160_; 
v_fst_3118_ = lean_ctor_get(v_a_3114_, 0);
v_snd_3119_ = lean_ctor_get(v_a_3114_, 1);
v_isSharedCheck_3160_ = !lean_is_exclusive(v_a_3114_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3121_ = v_a_3114_;
v_isShared_3122_ = v_isSharedCheck_3160_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_snd_3119_);
lean_inc(v_fst_3118_);
lean_dec(v_a_3114_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3160_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = lean_box(0);
lean_inc(v_us_3112_);
v___x_3124_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_us_3112_, v___x_3123_, v___y_3008_, v_snd_3119_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v_fst_3126_; lean_object* v_snd_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3151_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3125_);
lean_dec_ref_known(v___x_3124_, 1);
v_fst_3126_ = lean_ctor_get(v_a_3125_, 0);
v_snd_3127_ = lean_ctor_get(v_a_3125_, 1);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_a_3125_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3129_ = v_a_3125_;
v_isShared_3130_ = v_isSharedCheck_3151_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_snd_3127_);
lean_inc(v_fst_3126_);
lean_dec(v_a_3125_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3151_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3135_; 
v___x_3131_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__3));
v___x_3132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3133_ = l_Lean_JsonNumber_fromNat(v_fst_3118_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set_tag(v___x_3116_, 2);
lean_ctor_set(v___x_3116_, 0, v___x_3133_);
v___x_3135_ = v___x_3116_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3133_);
v___x_3135_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
lean_object* v___x_3137_; 
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 1, v___x_3135_);
lean_ctor_set(v___x_3129_, 0, v___x_3132_);
v___x_3137_ = v___x_3129_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3132_);
lean_ctor_set(v_reuseFailAlloc_3149_, 1, v___x_3135_);
v___x_3137_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3141_; 
v___x_3138_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__4));
v___x_3139_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_3126_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 1, v___x_3139_);
lean_ctor_set(v___x_3121_, 0, v___x_3138_);
v___x_3141_ = v___x_3121_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v___x_3138_);
lean_ctor_set(v_reuseFailAlloc_3148_, 1, v___x_3139_);
v___x_3141_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
lean_ctor_set(v___x_3142_, 1, v___x_3123_);
v___x_3143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3137_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = l_Lean_Json_mkObj(v___x_3143_);
lean_dec_ref_known(v___x_3143_, 2);
v___x_3145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3131_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
lean_ctor_set(v___x_3146_, 1, v___x_3123_);
v___x_3147_ = l_Lean_Json_mkObj(v___x_3146_);
lean_dec_ref_known(v___x_3146_, 2);
v_fst_3068_ = v___x_3147_;
v_snd_3069_ = v_snd_3127_;
goto v___jp_3067_;
}
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_del_object(v___x_3121_);
lean_dec(v_fst_3118_);
lean_del_object(v___x_3116_);
lean_dec_ref_known(v_e_3007_, 2);
v_a_3152_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3124_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3124_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 2);
return v___x_3113_;
}
}
case 5:
{
lean_object* v_fn_3162_; lean_object* v_arg_3163_; lean_object* v___x_3164_; 
v_fn_3162_ = lean_ctor_get(v_e_3007_, 0);
v_arg_3163_ = lean_ctor_get(v_e_3007_, 1);
lean_inc_ref(v_fn_3162_);
v___x_3164_ = l_LeanExport_dumpExprAux(v_fn_3162_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3211_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3167_ = v___x_3164_;
v_isShared_3168_ = v_isSharedCheck_3211_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3164_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3211_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v_fst_3169_; lean_object* v_snd_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3210_; 
v_fst_3169_ = lean_ctor_get(v_a_3165_, 0);
v_snd_3170_ = lean_ctor_get(v_a_3165_, 1);
v_isSharedCheck_3210_ = !lean_is_exclusive(v_a_3165_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3172_ = v_a_3165_;
v_isShared_3173_ = v_isSharedCheck_3210_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_snd_3170_);
lean_inc(v_fst_3169_);
lean_dec(v_a_3165_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3210_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3174_; 
lean_inc_ref(v_arg_3163_);
v___x_3174_ = l_LeanExport_dumpExprAux(v_arg_3163_, v___y_3008_, v_snd_3170_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3209_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3209_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3209_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v_fst_3179_; lean_object* v_snd_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3208_; 
v_fst_3179_ = lean_ctor_get(v_a_3175_, 0);
v_snd_3180_ = lean_ctor_get(v_a_3175_, 1);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_a_3175_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3182_ = v_a_3175_;
v_isShared_3183_ = v_isSharedCheck_3208_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_snd_3180_);
lean_inc(v_fst_3179_);
lean_dec(v_a_3175_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3208_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3188_; 
v___x_3184_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__5));
v___x_3185_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__6));
v___x_3186_ = l_Lean_JsonNumber_fromNat(v_fst_3169_);
if (v_isShared_3178_ == 0)
{
lean_ctor_set_tag(v___x_3177_, 2);
lean_ctor_set(v___x_3177_, 0, v___x_3186_);
v___x_3188_ = v___x_3177_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3186_);
v___x_3188_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3190_; 
if (v_isShared_3183_ == 0)
{
lean_ctor_set(v___x_3182_, 1, v___x_3188_);
lean_ctor_set(v___x_3182_, 0, v___x_3185_);
v___x_3190_ = v___x_3182_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v___x_3185_);
lean_ctor_set(v_reuseFailAlloc_3206_, 1, v___x_3188_);
v___x_3190_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3194_; 
v___x_3191_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__7));
v___x_3192_ = l_Lean_JsonNumber_fromNat(v_fst_3179_);
if (v_isShared_3168_ == 0)
{
lean_ctor_set_tag(v___x_3167_, 2);
lean_ctor_set(v___x_3167_, 0, v___x_3192_);
v___x_3194_ = v___x_3167_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
lean_object* v___x_3196_; 
if (v_isShared_3173_ == 0)
{
lean_ctor_set(v___x_3172_, 1, v___x_3194_);
lean_ctor_set(v___x_3172_, 0, v___x_3191_);
v___x_3196_ = v___x_3172_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v___x_3191_);
lean_ctor_set(v_reuseFailAlloc_3204_, 1, v___x_3194_);
v___x_3196_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3197_ = lean_box(0);
v___x_3198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3196_);
lean_ctor_set(v___x_3198_, 1, v___x_3197_);
v___x_3199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3190_);
lean_ctor_set(v___x_3199_, 1, v___x_3198_);
v___x_3200_ = l_Lean_Json_mkObj(v___x_3199_);
lean_dec_ref_known(v___x_3199_, 2);
v___x_3201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3184_);
lean_ctor_set(v___x_3201_, 1, v___x_3200_);
v___x_3202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
lean_ctor_set(v___x_3202_, 1, v___x_3197_);
v___x_3203_ = l_Lean_Json_mkObj(v___x_3202_);
lean_dec_ref_known(v___x_3202_, 2);
v_fst_3068_ = v___x_3203_;
v_snd_3069_ = v_snd_3180_;
goto v___jp_3067_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3172_);
lean_dec(v_fst_3169_);
lean_del_object(v___x_3167_);
lean_dec_ref_known(v_e_3007_, 2);
return v___x_3174_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 2);
return v___x_3164_;
}
}
case 6:
{
lean_object* v_binderName_3212_; lean_object* v_binderType_3213_; lean_object* v_body_3214_; uint8_t v_binderInfo_3215_; lean_object* v___x_3216_; 
v_binderName_3212_ = lean_ctor_get(v_e_3007_, 0);
v_binderType_3213_ = lean_ctor_get(v_e_3007_, 1);
v_body_3214_ = lean_ctor_get(v_e_3007_, 2);
v_binderInfo_3215_ = lean_ctor_get_uint8(v_e_3007_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3212_);
v___x_3216_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3212_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3288_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3219_ = v___x_3216_;
v_isShared_3220_ = v_isSharedCheck_3288_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3216_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3288_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v_fst_3221_; lean_object* v_snd_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3287_; 
v_fst_3221_ = lean_ctor_get(v_a_3217_, 0);
v_snd_3222_ = lean_ctor_get(v_a_3217_, 1);
v_isSharedCheck_3287_ = !lean_is_exclusive(v_a_3217_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3224_ = v_a_3217_;
v_isShared_3225_ = v_isSharedCheck_3287_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_snd_3222_);
lean_inc(v_fst_3221_);
lean_dec(v_a_3217_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3287_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3226_; 
lean_inc_ref(v_binderType_3213_);
v___x_3226_ = l_LeanExport_dumpExprAux(v_binderType_3213_, v___y_3008_, v_snd_3222_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3286_; 
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3226_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3229_ = v___x_3226_;
v_isShared_3230_ = v_isSharedCheck_3286_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3226_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3286_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v_fst_3231_; lean_object* v_snd_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3285_; 
v_fst_3231_ = lean_ctor_get(v_a_3227_, 0);
v_snd_3232_ = lean_ctor_get(v_a_3227_, 1);
v_isSharedCheck_3285_ = !lean_is_exclusive(v_a_3227_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3234_ = v_a_3227_;
v_isShared_3235_ = v_isSharedCheck_3285_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_snd_3232_);
lean_inc(v_fst_3231_);
lean_dec(v_a_3227_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3285_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3236_; 
lean_inc_ref(v_body_3214_);
v___x_3236_ = l_LeanExport_dumpExprAux(v_body_3214_, v___y_3008_, v_snd_3232_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3284_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3239_ = v___x_3236_;
v_isShared_3240_ = v_isSharedCheck_3284_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3236_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3284_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v_fst_3241_; lean_object* v_snd_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3283_; 
v_fst_3241_ = lean_ctor_get(v_a_3237_, 0);
v_snd_3242_ = lean_ctor_get(v_a_3237_, 1);
v_isSharedCheck_3283_ = !lean_is_exclusive(v_a_3237_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3244_ = v_a_3237_;
v_isShared_3245_ = v_isSharedCheck_3283_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_snd_3242_);
lean_inc(v_fst_3241_);
lean_dec(v_a_3237_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3283_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3250_; 
v___x_3246_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__8));
v___x_3247_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3248_ = l_Lean_JsonNumber_fromNat(v_fst_3221_);
if (v_isShared_3240_ == 0)
{
lean_ctor_set_tag(v___x_3239_, 2);
lean_ctor_set(v___x_3239_, 0, v___x_3248_);
v___x_3250_ = v___x_3239_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v___x_3248_);
v___x_3250_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
lean_object* v___x_3252_; 
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 1, v___x_3250_);
lean_ctor_set(v___x_3244_, 0, v___x_3247_);
v___x_3252_ = v___x_3244_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v___x_3250_);
v___x_3252_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3253_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3254_ = l_Lean_JsonNumber_fromNat(v_fst_3231_);
if (v_isShared_3230_ == 0)
{
lean_ctor_set_tag(v___x_3229_, 2);
lean_ctor_set(v___x_3229_, 0, v___x_3254_);
v___x_3256_ = v___x_3229_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3258_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 1, v___x_3256_);
lean_ctor_set(v___x_3234_, 0, v___x_3253_);
v___x_3258_ = v___x_3234_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3253_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v___x_3256_);
v___x_3258_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3262_; 
v___x_3259_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3260_ = l_Lean_JsonNumber_fromNat(v_fst_3241_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set_tag(v___x_3219_, 2);
lean_ctor_set(v___x_3219_, 0, v___x_3260_);
v___x_3262_ = v___x_3219_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3260_);
v___x_3262_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3264_; 
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 1, v___x_3262_);
lean_ctor_set(v___x_3224_, 0, v___x_3259_);
v___x_3264_ = v___x_3224_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v___x_3262_);
v___x_3264_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3265_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3266_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3215_);
v___x_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3265_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
v___x_3268_ = lean_box(0);
v___x_3269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3267_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3264_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3258_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3252_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = l_Lean_Json_mkObj(v___x_3272_);
lean_dec_ref_known(v___x_3272_, 2);
v___x_3274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3246_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
lean_ctor_set(v___x_3275_, 1, v___x_3268_);
v___x_3276_ = l_Lean_Json_mkObj(v___x_3275_);
lean_dec_ref_known(v___x_3275_, 2);
v_fst_3068_ = v___x_3276_;
v_snd_3069_ = v_snd_3242_;
goto v___jp_3067_;
}
}
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3234_);
lean_dec(v_fst_3231_);
lean_del_object(v___x_3229_);
lean_del_object(v___x_3224_);
lean_dec(v_fst_3221_);
lean_del_object(v___x_3219_);
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3236_;
}
}
}
}
else
{
lean_del_object(v___x_3224_);
lean_dec(v_fst_3221_);
lean_del_object(v___x_3219_);
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3226_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3216_;
}
}
case 7:
{
lean_object* v_binderName_3289_; lean_object* v_binderType_3290_; lean_object* v_body_3291_; uint8_t v_binderInfo_3292_; lean_object* v___x_3293_; 
v_binderName_3289_ = lean_ctor_get(v_e_3007_, 0);
v_binderType_3290_ = lean_ctor_get(v_e_3007_, 1);
v_body_3291_ = lean_ctor_get(v_e_3007_, 2);
v_binderInfo_3292_ = lean_ctor_get_uint8(v_e_3007_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3289_);
v___x_3293_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3289_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3365_; 
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3296_ = v___x_3293_;
v_isShared_3297_ = v_isSharedCheck_3365_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3293_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3365_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v_fst_3298_; lean_object* v_snd_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3364_; 
v_fst_3298_ = lean_ctor_get(v_a_3294_, 0);
v_snd_3299_ = lean_ctor_get(v_a_3294_, 1);
v_isSharedCheck_3364_ = !lean_is_exclusive(v_a_3294_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3301_ = v_a_3294_;
v_isShared_3302_ = v_isSharedCheck_3364_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_snd_3299_);
lean_inc(v_fst_3298_);
lean_dec(v_a_3294_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3364_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; 
lean_inc_ref(v_binderType_3290_);
v___x_3303_ = l_LeanExport_dumpExprAux(v_binderType_3290_, v___y_3008_, v_snd_3299_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v_a_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3363_; 
v_a_3304_ = lean_ctor_get(v___x_3303_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3303_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3306_ = v___x_3303_;
v_isShared_3307_ = v_isSharedCheck_3363_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_a_3304_);
lean_dec(v___x_3303_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3363_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v_fst_3308_; lean_object* v_snd_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3362_; 
v_fst_3308_ = lean_ctor_get(v_a_3304_, 0);
v_snd_3309_ = lean_ctor_get(v_a_3304_, 1);
v_isSharedCheck_3362_ = !lean_is_exclusive(v_a_3304_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3311_ = v_a_3304_;
v_isShared_3312_ = v_isSharedCheck_3362_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_snd_3309_);
lean_inc(v_fst_3308_);
lean_dec(v_a_3304_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3362_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; 
lean_inc_ref(v_body_3291_);
v___x_3313_ = l_LeanExport_dumpExprAux(v_body_3291_, v___y_3008_, v_snd_3309_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3361_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3316_ = v___x_3313_;
v_isShared_3317_ = v_isSharedCheck_3361_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3313_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3361_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v_fst_3318_; lean_object* v_snd_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3360_; 
v_fst_3318_ = lean_ctor_get(v_a_3314_, 0);
v_snd_3319_ = lean_ctor_get(v_a_3314_, 1);
v_isSharedCheck_3360_ = !lean_is_exclusive(v_a_3314_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3321_ = v_a_3314_;
v_isShared_3322_ = v_isSharedCheck_3360_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_snd_3319_);
lean_inc(v_fst_3318_);
lean_dec(v_a_3314_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3360_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3327_; 
v___x_3323_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__11));
v___x_3324_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3325_ = l_Lean_JsonNumber_fromNat(v_fst_3298_);
if (v_isShared_3317_ == 0)
{
lean_ctor_set_tag(v___x_3316_, 2);
lean_ctor_set(v___x_3316_, 0, v___x_3325_);
v___x_3327_ = v___x_3316_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v___x_3325_);
v___x_3327_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
lean_object* v___x_3329_; 
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 1, v___x_3327_);
lean_ctor_set(v___x_3321_, 0, v___x_3324_);
v___x_3329_ = v___x_3321_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3358_, 1, v___x_3327_);
v___x_3329_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3333_; 
v___x_3330_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3331_ = l_Lean_JsonNumber_fromNat(v_fst_3308_);
if (v_isShared_3307_ == 0)
{
lean_ctor_set_tag(v___x_3306_, 2);
lean_ctor_set(v___x_3306_, 0, v___x_3331_);
v___x_3333_ = v___x_3306_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v___x_3331_);
v___x_3333_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
lean_object* v___x_3335_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 1, v___x_3333_);
lean_ctor_set(v___x_3311_, 0, v___x_3330_);
v___x_3335_ = v___x_3311_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v___x_3330_);
lean_ctor_set(v_reuseFailAlloc_3356_, 1, v___x_3333_);
v___x_3335_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3339_; 
v___x_3336_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3337_ = l_Lean_JsonNumber_fromNat(v_fst_3318_);
if (v_isShared_3297_ == 0)
{
lean_ctor_set_tag(v___x_3296_, 2);
lean_ctor_set(v___x_3296_, 0, v___x_3337_);
v___x_3339_ = v___x_3296_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3341_; 
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 1, v___x_3339_);
lean_ctor_set(v___x_3301_, 0, v___x_3336_);
v___x_3341_ = v___x_3301_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v___x_3339_);
v___x_3341_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3342_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3343_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3292_);
v___x_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3342_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___x_3345_ = lean_box(0);
v___x_3346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3341_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3335_);
lean_ctor_set(v___x_3348_, 1, v___x_3347_);
v___x_3349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3329_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = l_Lean_Json_mkObj(v___x_3349_);
lean_dec_ref_known(v___x_3349_, 2);
v___x_3351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3323_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
lean_ctor_set(v___x_3352_, 1, v___x_3345_);
v___x_3353_ = l_Lean_Json_mkObj(v___x_3352_);
lean_dec_ref_known(v___x_3352_, 2);
v_fst_3068_ = v___x_3353_;
v_snd_3069_ = v_snd_3319_;
goto v___jp_3067_;
}
}
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3311_);
lean_dec(v_fst_3308_);
lean_del_object(v___x_3306_);
lean_del_object(v___x_3301_);
lean_dec(v_fst_3298_);
lean_del_object(v___x_3296_);
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3313_;
}
}
}
}
else
{
lean_del_object(v___x_3301_);
lean_dec(v_fst_3298_);
lean_del_object(v___x_3296_);
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3303_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3293_;
}
}
case 8:
{
lean_object* v_declName_3366_; lean_object* v_type_3367_; lean_object* v_value_3368_; lean_object* v_body_3369_; uint8_t v_nondep_3370_; lean_object* v___x_3371_; 
v_declName_3366_ = lean_ctor_get(v_e_3007_, 0);
v_type_3367_ = lean_ctor_get(v_e_3007_, 1);
v_value_3368_ = lean_ctor_get(v_e_3007_, 2);
v_body_3369_ = lean_ctor_get(v_e_3007_, 3);
v_nondep_3370_ = lean_ctor_get_uint8(v_e_3007_, sizeof(void*)*4 + 8);
lean_inc(v_declName_3366_);
v___x_3371_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3366_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3464_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3374_ = v___x_3371_;
v_isShared_3375_ = v_isSharedCheck_3464_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3371_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3464_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v_fst_3376_; lean_object* v_snd_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3463_; 
v_fst_3376_ = lean_ctor_get(v_a_3372_, 0);
v_snd_3377_ = lean_ctor_get(v_a_3372_, 1);
v_isSharedCheck_3463_ = !lean_is_exclusive(v_a_3372_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3379_ = v_a_3372_;
v_isShared_3380_ = v_isSharedCheck_3463_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_snd_3377_);
lean_inc(v_fst_3376_);
lean_dec(v_a_3372_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3463_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3381_; 
lean_inc_ref(v_type_3367_);
v___x_3381_ = l_LeanExport_dumpExprAux(v_type_3367_, v___y_3008_, v_snd_3377_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3462_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3384_ = v___x_3381_;
v_isShared_3385_ = v_isSharedCheck_3462_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3381_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3462_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v_fst_3386_; lean_object* v_snd_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3461_; 
v_fst_3386_ = lean_ctor_get(v_a_3382_, 0);
v_snd_3387_ = lean_ctor_get(v_a_3382_, 1);
v_isSharedCheck_3461_ = !lean_is_exclusive(v_a_3382_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3389_ = v_a_3382_;
v_isShared_3390_ = v_isSharedCheck_3461_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_snd_3387_);
lean_inc(v_fst_3386_);
lean_dec(v_a_3382_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3461_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; 
lean_inc_ref(v_value_3368_);
v___x_3391_ = l_LeanExport_dumpExprAux(v_value_3368_, v___y_3008_, v_snd_3387_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3460_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3394_ = v___x_3391_;
v_isShared_3395_ = v_isSharedCheck_3460_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3391_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3460_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v_fst_3396_; lean_object* v_snd_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3459_; 
v_fst_3396_ = lean_ctor_get(v_a_3392_, 0);
v_snd_3397_ = lean_ctor_get(v_a_3392_, 1);
v_isSharedCheck_3459_ = !lean_is_exclusive(v_a_3392_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3399_ = v_a_3392_;
v_isShared_3400_ = v_isSharedCheck_3459_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_snd_3397_);
lean_inc(v_fst_3396_);
lean_dec(v_a_3392_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3459_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3401_; 
lean_inc_ref(v_body_3369_);
v___x_3401_ = l_LeanExport_dumpExprAux(v_body_3369_, v___y_3008_, v_snd_3397_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3458_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3404_ = v___x_3401_;
v_isShared_3405_ = v_isSharedCheck_3458_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3401_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3458_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v_fst_3406_; lean_object* v_snd_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3457_; 
v_fst_3406_ = lean_ctor_get(v_a_3402_, 0);
v_snd_3407_ = lean_ctor_get(v_a_3402_, 1);
v_isSharedCheck_3457_ = !lean_is_exclusive(v_a_3402_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3409_ = v_a_3402_;
v_isShared_3410_ = v_isSharedCheck_3457_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_snd_3407_);
lean_inc(v_fst_3406_);
lean_dec(v_a_3402_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3457_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3415_; 
v___x_3411_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__12));
v___x_3412_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3413_ = l_Lean_JsonNumber_fromNat(v_fst_3376_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set_tag(v___x_3404_, 2);
lean_ctor_set(v___x_3404_, 0, v___x_3413_);
v___x_3415_ = v___x_3404_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v___x_3413_);
v___x_3415_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
lean_object* v___x_3417_; 
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 1, v___x_3415_);
lean_ctor_set(v___x_3409_, 0, v___x_3412_);
v___x_3417_ = v___x_3409_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3412_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v___x_3415_);
v___x_3417_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3421_; 
v___x_3418_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3419_ = l_Lean_JsonNumber_fromNat(v_fst_3386_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set_tag(v___x_3394_, 2);
lean_ctor_set(v___x_3394_, 0, v___x_3419_);
v___x_3421_ = v___x_3394_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3419_);
v___x_3421_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3423_; 
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 1, v___x_3421_);
lean_ctor_set(v___x_3399_, 0, v___x_3418_);
v___x_3423_ = v___x_3399_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3418_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v___x_3421_);
v___x_3423_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3427_; 
v___x_3424_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_3425_ = l_Lean_JsonNumber_fromNat(v_fst_3396_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set_tag(v___x_3384_, 2);
lean_ctor_set(v___x_3384_, 0, v___x_3425_);
v___x_3427_ = v___x_3384_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3425_);
v___x_3427_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3429_; 
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 1, v___x_3427_);
lean_ctor_set(v___x_3389_, 0, v___x_3424_);
v___x_3429_ = v___x_3389_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3424_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v___x_3427_);
v___x_3429_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3433_; 
v___x_3430_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3431_ = l_Lean_JsonNumber_fromNat(v_fst_3406_);
if (v_isShared_3375_ == 0)
{
lean_ctor_set_tag(v___x_3374_, 2);
lean_ctor_set(v___x_3374_, 0, v___x_3431_);
v___x_3433_ = v___x_3374_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3435_; 
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 1, v___x_3433_);
lean_ctor_set(v___x_3379_, 0, v___x_3430_);
v___x_3435_ = v___x_3379_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3430_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v___x_3433_);
v___x_3435_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3436_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__14));
v___x_3437_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3437_, 0, v_nondep_3370_);
v___x_3438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3436_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
v___x_3439_ = lean_box(0);
v___x_3440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3438_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
v___x_3441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3435_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3429_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3423_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3417_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = l_Lean_Json_mkObj(v___x_3444_);
lean_dec_ref_known(v___x_3444_, 2);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3411_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
lean_ctor_set(v___x_3447_, 1, v___x_3439_);
v___x_3448_ = l_Lean_Json_mkObj(v___x_3447_);
lean_dec_ref_known(v___x_3447_, 2);
v_fst_3068_ = v___x_3448_;
v_snd_3069_ = v_snd_3407_;
goto v___jp_3067_;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3399_);
lean_dec(v_fst_3396_);
lean_del_object(v___x_3394_);
lean_del_object(v___x_3389_);
lean_dec(v_fst_3386_);
lean_del_object(v___x_3384_);
lean_del_object(v___x_3379_);
lean_dec(v_fst_3376_);
lean_del_object(v___x_3374_);
lean_dec_ref_known(v_e_3007_, 4);
return v___x_3401_;
}
}
}
}
else
{
lean_del_object(v___x_3389_);
lean_dec(v_fst_3386_);
lean_del_object(v___x_3384_);
lean_del_object(v___x_3379_);
lean_dec(v_fst_3376_);
lean_del_object(v___x_3374_);
lean_dec_ref_known(v_e_3007_, 4);
return v___x_3391_;
}
}
}
}
else
{
lean_del_object(v___x_3379_);
lean_dec(v_fst_3376_);
lean_del_object(v___x_3374_);
lean_dec_ref_known(v_e_3007_, 4);
return v___x_3381_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 4);
return v___x_3371_;
}
}
case 9:
{
lean_object* v_a_3465_; 
v_a_3465_ = lean_ctor_get(v_e_3007_, 0);
lean_inc_ref(v_a_3465_);
if (lean_obj_tag(v_a_3465_) == 0)
{
lean_object* v_val_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3497_; 
v_val_3466_ = lean_ctor_get(v_a_3465_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_a_3465_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3468_ = v_a_3465_;
v_isShared_3469_ = v_isSharedCheck_3497_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_val_3466_);
lean_dec(v_a_3465_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3497_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3470_; 
v___x_3470_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; lean_object* v_snd_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3487_; 
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3470_, 1);
v_snd_3472_ = lean_ctor_get(v_a_3471_, 1);
v_isSharedCheck_3487_ = !lean_is_exclusive(v_a_3471_);
if (v_isSharedCheck_3487_ == 0)
{
lean_object* v_unused_3488_; 
v_unused_3488_ = lean_ctor_get(v_a_3471_, 0);
lean_dec(v_unused_3488_);
v___x_3474_ = v_a_3471_;
v_isShared_3475_ = v_isSharedCheck_3487_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_snd_3472_);
lean_dec(v_a_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3487_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
v___x_3476_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__15));
v___x_3477_ = l_Nat_reprFast(v_val_3466_);
if (v_isShared_3469_ == 0)
{
lean_ctor_set_tag(v___x_3468_, 3);
lean_ctor_set(v___x_3468_, 0, v___x_3477_);
v___x_3479_ = v___x_3468_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___x_3481_; 
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 1, v___x_3479_);
lean_ctor_set(v___x_3474_, 0, v___x_3476_);
v___x_3481_ = v___x_3474_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v___x_3476_);
lean_ctor_set(v_reuseFailAlloc_3485_, 1, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3482_ = lean_box(0);
v___x_3483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
v___x_3484_ = l_Lean_Json_mkObj(v___x_3483_);
lean_dec_ref_known(v___x_3483_, 2);
v_fst_3068_ = v___x_3484_;
v_snd_3069_ = v_snd_3472_;
goto v___jp_3067_;
}
}
}
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3496_; 
lean_del_object(v___x_3468_);
lean_dec(v_val_3466_);
lean_dec_ref_known(v_e_3007_, 1);
v_a_3489_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3491_ = v___x_3470_;
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3470_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_a_3489_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
}
else
{
lean_object* v_val_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3528_; 
v_val_3498_ = lean_ctor_get(v_a_3465_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v_a_3465_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3500_ = v_a_3465_;
v_isShared_3501_ = v_isSharedCheck_3528_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_val_3498_);
lean_dec(v_a_3465_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3528_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3502_; 
v___x_3502_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; lean_object* v_snd_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3518_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3502_, 1);
v_snd_3504_ = lean_ctor_get(v_a_3503_, 1);
v_isSharedCheck_3518_ = !lean_is_exclusive(v_a_3503_);
if (v_isSharedCheck_3518_ == 0)
{
lean_object* v_unused_3519_; 
v_unused_3519_ = lean_ctor_get(v_a_3503_, 0);
lean_dec(v_unused_3519_);
v___x_3506_ = v_a_3503_;
v_isShared_3507_ = v_isSharedCheck_3518_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_snd_3504_);
lean_dec(v_a_3503_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3518_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3508_; lean_object* v___x_3510_; 
v___x_3508_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__16));
if (v_isShared_3501_ == 0)
{
lean_ctor_set_tag(v___x_3500_, 3);
v___x_3510_ = v___x_3500_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_val_3498_);
v___x_3510_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
lean_object* v___x_3512_; 
if (v_isShared_3507_ == 0)
{
lean_ctor_set(v___x_3506_, 1, v___x_3510_);
lean_ctor_set(v___x_3506_, 0, v___x_3508_);
v___x_3512_ = v___x_3506_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3508_);
lean_ctor_set(v_reuseFailAlloc_3516_, 1, v___x_3510_);
v___x_3512_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3513_ = lean_box(0);
v___x_3514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3512_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
v___x_3515_ = l_Lean_Json_mkObj(v___x_3514_);
lean_dec_ref_known(v___x_3514_, 2);
v_fst_3068_ = v___x_3515_;
v_snd_3069_ = v_snd_3504_;
goto v___jp_3067_;
}
}
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
lean_del_object(v___x_3500_);
lean_dec_ref(v_val_3498_);
lean_dec_ref_known(v_e_3007_, 1);
v_a_3520_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v___x_3502_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3502_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3520_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_3529_; lean_object* v_expr_3530_; lean_object* v___x_3531_; 
v_data_3529_ = lean_ctor_get(v_e_3007_, 0);
v_expr_3530_ = lean_ctor_get(v_e_3007_, 1);
lean_inc_ref(v_expr_3530_);
v___x_3531_ = l_LeanExport_dumpExprAux(v_expr_3530_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3561_; 
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3534_ = v___x_3531_;
v_isShared_3535_ = v_isSharedCheck_3561_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3531_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3561_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v_fst_3536_; lean_object* v_snd_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3560_; 
v_fst_3536_ = lean_ctor_get(v_a_3532_, 0);
v_snd_3537_ = lean_ctor_get(v_a_3532_, 1);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_a_3532_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3539_ = v_a_3532_;
v_isShared_3540_ = v_isSharedCheck_3560_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_snd_3537_);
lean_inc(v_fst_3536_);
lean_dec(v_a_3532_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3560_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3545_; 
v___x_3541_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__17));
v___x_3542_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__18));
lean_inc(v_data_3529_);
v___x_3543_ = l___private_LeanExport_Basic_0__Lean_KVMap_toJson(v_data_3529_);
if (v_isShared_3540_ == 0)
{
lean_ctor_set(v___x_3539_, 1, v___x_3543_);
lean_ctor_set(v___x_3539_, 0, v___x_3542_);
v___x_3545_ = v___x_3539_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v___x_3542_);
lean_ctor_set(v_reuseFailAlloc_3559_, 1, v___x_3543_);
v___x_3545_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3546_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__19));
v___x_3547_ = l_Lean_JsonNumber_fromNat(v_fst_3536_);
if (v_isShared_3535_ == 0)
{
lean_ctor_set_tag(v___x_3534_, 2);
lean_ctor_set(v___x_3534_, 0, v___x_3547_);
v___x_3549_ = v___x_3534_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3546_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
v___x_3551_ = lean_box(0);
v___x_3552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3550_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
v___x_3553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3545_);
lean_ctor_set(v___x_3553_, 1, v___x_3552_);
v___x_3554_ = l_Lean_Json_mkObj(v___x_3553_);
lean_dec_ref_known(v___x_3553_, 2);
v___x_3555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3541_);
lean_ctor_set(v___x_3555_, 1, v___x_3554_);
v___x_3556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
lean_ctor_set(v___x_3556_, 1, v___x_3551_);
v___x_3557_ = l_Lean_Json_mkObj(v___x_3556_);
lean_dec_ref_known(v___x_3556_, 2);
v_fst_3068_ = v___x_3557_;
v_snd_3069_ = v_snd_3537_;
goto v___jp_3067_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 2);
return v___x_3531_;
}
}
case 11:
{
lean_object* v_typeName_3562_; lean_object* v_idx_3563_; lean_object* v_struct_3564_; lean_object* v___x_3565_; 
v_typeName_3562_ = lean_ctor_get(v_e_3007_, 0);
v_idx_3563_ = lean_ctor_get(v_e_3007_, 1);
v_struct_3564_ = lean_ctor_get(v_e_3007_, 2);
lean_inc(v_typeName_3562_);
v___x_3565_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_typeName_3562_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3617_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3568_ = v___x_3565_;
v_isShared_3569_ = v_isSharedCheck_3617_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___x_3565_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3617_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v_fst_3570_; lean_object* v_snd_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3616_; 
v_fst_3570_ = lean_ctor_get(v_a_3566_, 0);
v_snd_3571_ = lean_ctor_get(v_a_3566_, 1);
v_isSharedCheck_3616_ = !lean_is_exclusive(v_a_3566_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3573_ = v_a_3566_;
v_isShared_3574_ = v_isSharedCheck_3616_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_snd_3571_);
lean_inc(v_fst_3570_);
lean_dec(v_a_3566_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3616_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3575_; 
lean_inc_ref(v_struct_3564_);
v___x_3575_ = l_LeanExport_dumpExprAux(v_struct_3564_, v___y_3008_, v_snd_3571_);
if (lean_obj_tag(v___x_3575_) == 0)
{
lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3615_; 
v_a_3576_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3578_ = v___x_3575_;
v_isShared_3579_ = v_isSharedCheck_3615_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_dec(v___x_3575_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3615_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v_fst_3580_; lean_object* v_snd_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3614_; 
v_fst_3580_ = lean_ctor_get(v_a_3576_, 0);
v_snd_3581_ = lean_ctor_get(v_a_3576_, 1);
v_isSharedCheck_3614_ = !lean_is_exclusive(v_a_3576_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3583_ = v_a_3576_;
v_isShared_3584_ = v_isSharedCheck_3614_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_snd_3581_);
lean_inc(v_fst_3580_);
lean_dec(v_a_3576_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3614_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3589_; 
v___x_3585_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__20));
v___x_3586_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__21));
v___x_3587_ = l_Lean_JsonNumber_fromNat(v_fst_3570_);
if (v_isShared_3579_ == 0)
{
lean_ctor_set_tag(v___x_3578_, 2);
lean_ctor_set(v___x_3578_, 0, v___x_3587_);
v___x_3589_ = v___x_3578_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
lean_object* v___x_3591_; 
if (v_isShared_3584_ == 0)
{
lean_ctor_set(v___x_3583_, 1, v___x_3589_);
lean_ctor_set(v___x_3583_, 0, v___x_3586_);
v___x_3591_ = v___x_3583_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v___x_3586_);
lean_ctor_set(v_reuseFailAlloc_3612_, 1, v___x_3589_);
v___x_3591_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3595_; 
v___x_3592_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__22));
lean_inc(v_idx_3563_);
v___x_3593_ = l_Lean_JsonNumber_fromNat(v_idx_3563_);
if (v_isShared_3569_ == 0)
{
lean_ctor_set_tag(v___x_3568_, 2);
lean_ctor_set(v___x_3568_, 0, v___x_3593_);
v___x_3595_ = v___x_3568_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3597_; 
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 1, v___x_3595_);
lean_ctor_set(v___x_3573_, 0, v___x_3592_);
v___x_3597_ = v___x_3573_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3592_);
lean_ctor_set(v_reuseFailAlloc_3610_, 1, v___x_3595_);
v___x_3597_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3598_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__23));
v___x_3599_ = l_Lean_JsonNumber_fromNat(v_fst_3580_);
v___x_3600_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3599_);
v___x_3601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3598_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v___x_3602_ = lean_box(0);
v___x_3603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3601_);
lean_ctor_set(v___x_3603_, 1, v___x_3602_);
v___x_3604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3597_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
v___x_3605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3591_);
lean_ctor_set(v___x_3605_, 1, v___x_3604_);
v___x_3606_ = l_Lean_Json_mkObj(v___x_3605_);
lean_dec_ref_known(v___x_3605_, 2);
v___x_3607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3585_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3607_);
lean_ctor_set(v___x_3608_, 1, v___x_3602_);
v___x_3609_ = l_Lean_Json_mkObj(v___x_3608_);
lean_dec_ref_known(v___x_3608_, 2);
v_fst_3068_ = v___x_3609_;
v_snd_3069_ = v_snd_3581_;
goto v___jp_3067_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3573_);
lean_dec(v_fst_3570_);
lean_del_object(v___x_3568_);
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3575_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3007_, 3);
return v___x_3565_;
}
}
default: 
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_obj_once(&l_LeanExport_dumpExprAux___closed__26, &l_LeanExport_dumpExprAux___closed__26_once, _init_l_LeanExport_dumpExprAux___closed__26);
v___x_3619_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_3618_, v___y_3008_, v___y_3009_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; lean_object* v_fst_3621_; lean_object* v_snd_3622_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_a_3620_);
lean_dec_ref_known(v___x_3619_, 1);
v_fst_3621_ = lean_ctor_get(v_a_3620_, 0);
lean_inc(v_fst_3621_);
v_snd_3622_ = lean_ctor_get(v_a_3620_, 1);
lean_inc(v_snd_3622_);
lean_dec(v_a_3620_);
v_fst_3068_ = v_fst_3621_;
v_snd_3069_ = v_snd_3622_;
goto v___jp_3067_;
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_dec_ref(v_e_3007_);
v_a_3623_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3619_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3619_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
if (v_isShared_3626_ == 0)
{
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3623_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
}
}
v___jp_3031_:
{
lean_object* v_size_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v_size_3042_ = lean_ctor_get(v_visitedExprs_3035_, 0);
lean_inc_n(v_size_3042_, 2);
v___x_3043_ = l_Lean_JsonNumber_fromNat(v_size_3042_);
v___x_3044_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
v___x_3045_ = l_Lean_Json_setObjVal_x21(v_fst_3032_, v___x_3030_, v___x_3044_);
v___x_3046_ = l_Lean_Json_compress(v___x_3045_);
v___x_3047_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_3046_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3057_; 
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3057_ == 0)
{
lean_object* v_unused_3058_; 
v_unused_3058_ = lean_ctor_get(v___x_3047_, 0);
lean_dec(v_unused_3058_);
v___x_3049_ = v___x_3047_;
v_isShared_3050_ = v_isSharedCheck_3057_;
goto v_resetjp_3048_;
}
else
{
lean_dec(v___x_3047_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3057_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3055_; 
lean_inc(v_size_3042_);
v___x_3051_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_visitedExprs_3035_, v_e_3007_, v_size_3042_);
v___x_3052_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_3052_, 0, v_visitedNames_3033_);
lean_ctor_set(v___x_3052_, 1, v_visitedLevels_3034_);
lean_ctor_set(v___x_3052_, 2, v___x_3051_);
lean_ctor_set(v___x_3052_, 3, v_visitedConstants_3036_);
lean_ctor_set(v___x_3052_, 4, v_noMDataExprs_3037_);
lean_ctor_set(v___x_3052_, 5, v_recursorMap_3041_);
lean_ctor_set_uint8(v___x_3052_, sizeof(void*)*6, v_exportMData_3038_);
lean_ctor_set_uint8(v___x_3052_, sizeof(void*)*6 + 1, v_exportUnsafe_3039_);
lean_ctor_set_uint8(v___x_3052_, sizeof(void*)*6 + 2, v_ignoreMissing_3040_);
v___x_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3053_, 0, v_size_3042_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
if (v_isShared_3050_ == 0)
{
lean_ctor_set(v___x_3049_, 0, v___x_3053_);
v___x_3055_ = v___x_3049_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec(v_size_3042_);
lean_dec(v_recursorMap_3041_);
lean_dec_ref(v_noMDataExprs_3037_);
lean_dec_ref(v_visitedConstants_3036_);
lean_dec_ref(v_visitedExprs_3035_);
lean_dec_ref(v_visitedLevels_3034_);
lean_dec_ref(v_visitedNames_3033_);
lean_dec_ref(v_e_3007_);
v_a_3059_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3047_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3047_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
v___jp_3067_:
{
lean_object* v_visitedNames_3070_; lean_object* v_visitedLevels_3071_; lean_object* v_visitedExprs_3072_; lean_object* v_visitedConstants_3073_; lean_object* v_noMDataExprs_3074_; uint8_t v_exportMData_3075_; uint8_t v_exportUnsafe_3076_; uint8_t v_ignoreMissing_3077_; lean_object* v_recursorMap_3078_; 
v_visitedNames_3070_ = lean_ctor_get(v_snd_3069_, 0);
lean_inc_ref(v_visitedNames_3070_);
v_visitedLevels_3071_ = lean_ctor_get(v_snd_3069_, 1);
lean_inc_ref(v_visitedLevels_3071_);
v_visitedExprs_3072_ = lean_ctor_get(v_snd_3069_, 2);
lean_inc_ref(v_visitedExprs_3072_);
v_visitedConstants_3073_ = lean_ctor_get(v_snd_3069_, 3);
lean_inc_ref(v_visitedConstants_3073_);
v_noMDataExprs_3074_ = lean_ctor_get(v_snd_3069_, 4);
lean_inc_ref(v_noMDataExprs_3074_);
v_exportMData_3075_ = lean_ctor_get_uint8(v_snd_3069_, sizeof(void*)*6);
v_exportUnsafe_3076_ = lean_ctor_get_uint8(v_snd_3069_, sizeof(void*)*6 + 1);
v_ignoreMissing_3077_ = lean_ctor_get_uint8(v_snd_3069_, sizeof(void*)*6 + 2);
v_recursorMap_3078_ = lean_ctor_get(v_snd_3069_, 5);
lean_inc(v_recursorMap_3078_);
lean_dec_ref(v_snd_3069_);
v_fst_3032_ = v_fst_3068_;
v_visitedNames_3033_ = v_visitedNames_3070_;
v_visitedLevels_3034_ = v_visitedLevels_3071_;
v_visitedExprs_3035_ = v_visitedExprs_3072_;
v_visitedConstants_3036_ = v_visitedConstants_3073_;
v_noMDataExprs_3037_ = v_noMDataExprs_3074_;
v_exportMData_3038_ = v_exportMData_3075_;
v_exportUnsafe_3039_ = v_exportUnsafe_3076_;
v_ignoreMissing_3040_ = v_ignoreMissing_3077_;
v_recursorMap_3041_ = v_recursorMap_3078_;
goto v___jp_3031_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object* v_e_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
uint8_t v_exportMData_3635_; 
v_exportMData_3635_ = lean_ctor_get_uint8(v___y_3633_, sizeof(void*)*6);
if (v_exportMData_3635_ == 0)
{
lean_object* v_visitedNames_3636_; lean_object* v_visitedLevels_3637_; lean_object* v_visitedExprs_3638_; lean_object* v_visitedConstants_3639_; uint8_t v_exportUnsafe_3640_; uint8_t v_ignoreMissing_3641_; lean_object* v_recursorMap_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3663_; 
v_visitedNames_3636_ = lean_ctor_get(v___y_3633_, 0);
v_visitedLevels_3637_ = lean_ctor_get(v___y_3633_, 1);
v_visitedExprs_3638_ = lean_ctor_get(v___y_3633_, 2);
v_visitedConstants_3639_ = lean_ctor_get(v___y_3633_, 3);
v_exportUnsafe_3640_ = lean_ctor_get_uint8(v___y_3633_, sizeof(void*)*6 + 1);
v_ignoreMissing_3641_ = lean_ctor_get_uint8(v___y_3633_, sizeof(void*)*6 + 2);
v_recursorMap_3642_ = lean_ctor_get(v___y_3633_, 5);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___y_3633_);
if (v_isSharedCheck_3663_ == 0)
{
lean_object* v_unused_3664_; 
v_unused_3664_ = lean_ctor_get(v___y_3633_, 4);
lean_dec(v_unused_3664_);
v___x_3644_ = v___y_3633_;
v_isShared_3645_ = v_isSharedCheck_3663_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_recursorMap_3642_);
lean_inc(v_visitedConstants_3639_);
lean_inc(v_visitedExprs_3638_);
lean_inc(v_visitedLevels_3637_);
lean_inc(v_visitedNames_3636_);
lean_dec(v___y_3633_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3663_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3646_; lean_object* v___x_3648_; 
v___x_3646_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_3645_ == 0)
{
lean_ctor_set(v___x_3644_, 4, v___x_3646_);
v___x_3648_ = v___x_3644_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_visitedNames_3636_);
lean_ctor_set(v_reuseFailAlloc_3662_, 1, v_visitedLevels_3637_);
lean_ctor_set(v_reuseFailAlloc_3662_, 2, v_visitedExprs_3638_);
lean_ctor_set(v_reuseFailAlloc_3662_, 3, v_visitedConstants_3639_);
lean_ctor_set(v_reuseFailAlloc_3662_, 4, v___x_3646_);
lean_ctor_set(v_reuseFailAlloc_3662_, 5, v_recursorMap_3642_);
lean_ctor_set_uint8(v_reuseFailAlloc_3662_, sizeof(void*)*6, v_exportMData_3635_);
lean_ctor_set_uint8(v_reuseFailAlloc_3662_, sizeof(void*)*6 + 1, v_exportUnsafe_3640_);
lean_ctor_set_uint8(v_reuseFailAlloc_3662_, sizeof(void*)*6 + 2, v_ignoreMissing_3641_);
v___x_3648_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
lean_object* v___x_3649_; 
v___x_3649_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_3631_, v___y_3632_, v___x_3648_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_object* v_a_3650_; lean_object* v_fst_3651_; lean_object* v_snd_3652_; lean_object* v___x_3653_; 
v_a_3650_ = lean_ctor_get(v___x_3649_, 0);
lean_inc(v_a_3650_);
lean_dec_ref_known(v___x_3649_, 1);
v_fst_3651_ = lean_ctor_get(v_a_3650_, 0);
lean_inc(v_fst_3651_);
v_snd_3652_ = lean_ctor_get(v_a_3650_, 1);
lean_inc(v_snd_3652_);
lean_dec(v_a_3650_);
v___x_3653_ = l_LeanExport_dumpExprAux(v_fst_3651_, v___y_3632_, v_snd_3652_);
return v___x_3653_;
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
v_a_3654_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3649_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3649_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
}
}
else
{
lean_object* v___x_3665_; 
v___x_3665_ = l_LeanExport_dumpExprAux(v_e_3631_, v___y_3632_, v___y_3633_);
return v___x_3665_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(size_t v_sz_3675_, size_t v_i_3676_, lean_object* v_bs_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_){
_start:
{
uint8_t v___x_3681_; 
v___x_3681_ = lean_usize_dec_lt(v_i_3676_, v_sz_3675_);
if (v___x_3681_ == 0)
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3682_, 0, v_bs_3677_);
lean_ctor_set(v___x_3682_, 1, v___y_3679_);
v___x_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3682_);
return v___x_3683_;
}
else
{
lean_object* v_v_3684_; lean_object* v_toConstantVal_3685_; lean_object* v_numParams_3686_; lean_object* v_numIndices_3687_; lean_object* v_all_3688_; lean_object* v_ctors_3689_; lean_object* v_numNested_3690_; uint8_t v_isRec_3691_; uint8_t v_isUnsafe_3692_; uint8_t v_isReflexive_3693_; lean_object* v_name_3694_; lean_object* v_levelParams_3695_; lean_object* v_type_3696_; lean_object* v___x_3697_; lean_object* v_bs_x27_3698_; lean_object* v_fst_3700_; lean_object* v_snd_3701_; lean_object* v___y_3707_; lean_object* v___x_3719_; 
v_v_3684_ = lean_array_uget_borrowed(v_bs_3677_, v_i_3676_);
v_toConstantVal_3685_ = lean_ctor_get(v_v_3684_, 0);
v_numParams_3686_ = lean_ctor_get(v_v_3684_, 1);
lean_inc(v_numParams_3686_);
v_numIndices_3687_ = lean_ctor_get(v_v_3684_, 2);
lean_inc(v_numIndices_3687_);
v_all_3688_ = lean_ctor_get(v_v_3684_, 3);
lean_inc(v_all_3688_);
v_ctors_3689_ = lean_ctor_get(v_v_3684_, 4);
lean_inc(v_ctors_3689_);
v_numNested_3690_ = lean_ctor_get(v_v_3684_, 5);
lean_inc(v_numNested_3690_);
v_isRec_3691_ = lean_ctor_get_uint8(v_v_3684_, sizeof(void*)*6);
v_isUnsafe_3692_ = lean_ctor_get_uint8(v_v_3684_, sizeof(void*)*6 + 1);
v_isReflexive_3693_ = lean_ctor_get_uint8(v_v_3684_, sizeof(void*)*6 + 2);
v_name_3694_ = lean_ctor_get(v_toConstantVal_3685_, 0);
lean_inc(v_name_3694_);
v_levelParams_3695_ = lean_ctor_get(v_toConstantVal_3685_, 1);
lean_inc(v_levelParams_3695_);
v_type_3696_ = lean_ctor_get(v_toConstantVal_3685_, 2);
lean_inc_ref(v_type_3696_);
v___x_3697_ = lean_unsigned_to_nat(0u);
v_bs_x27_3698_ = lean_array_uset(v_bs_3677_, v_i_3676_, v___x_3697_);
v___x_3719_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3694_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v_fst_3721_; lean_object* v_snd_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3842_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
v_fst_3721_ = lean_ctor_get(v_a_3720_, 0);
v_snd_3722_ = lean_ctor_get(v_a_3720_, 1);
v_isSharedCheck_3842_ = !lean_is_exclusive(v_a_3720_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3724_ = v_a_3720_;
v_isShared_3725_ = v_isSharedCheck_3842_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_snd_3722_);
lean_inc(v_fst_3721_);
lean_dec(v_a_3720_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3842_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v___x_3726_; 
v___x_3726_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3695_, v___y_3678_, v_snd_3722_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3841_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3729_ = v___x_3726_;
v_isShared_3730_ = v_isSharedCheck_3841_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3726_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3841_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v_fst_3731_; lean_object* v_snd_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3840_; 
v_fst_3731_ = lean_ctor_get(v_a_3727_, 0);
v_snd_3732_ = lean_ctor_get(v_a_3727_, 1);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_a_3727_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3734_ = v_a_3727_;
v_isShared_3735_ = v_isSharedCheck_3840_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_snd_3732_);
lean_inc(v_fst_3731_);
lean_dec(v_a_3727_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3840_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3736_; 
v___x_3736_ = l_LeanExport_dumpExpr(v_type_3696_, v___y_3678_, v_snd_3732_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v_fst_3738_; lean_object* v_snd_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3831_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
v_fst_3738_ = lean_ctor_get(v_a_3737_, 0);
v_snd_3739_ = lean_ctor_get(v_a_3737_, 1);
v_isSharedCheck_3831_ = !lean_is_exclusive(v_a_3737_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3741_ = v_a_3737_;
v_isShared_3742_ = v_isSharedCheck_3831_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_snd_3739_);
lean_inc(v_fst_3738_);
lean_dec(v_a_3737_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3831_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3743_; 
v___x_3743_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_3688_, v___y_3678_, v_snd_3739_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3830_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3746_ = v___x_3743_;
v_isShared_3747_ = v_isSharedCheck_3830_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3743_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3830_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v_fst_3748_; lean_object* v_snd_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3829_; 
v_fst_3748_ = lean_ctor_get(v_a_3744_, 0);
v_snd_3749_ = lean_ctor_get(v_a_3744_, 1);
v_isSharedCheck_3829_ = !lean_is_exclusive(v_a_3744_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3751_ = v_a_3744_;
v_isShared_3752_ = v_isSharedCheck_3829_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_snd_3749_);
lean_inc(v_fst_3748_);
lean_dec(v_a_3744_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3829_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3753_; 
v___x_3753_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_ctors_3689_, v___y_3678_, v_snd_3749_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3828_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3756_ = v___x_3753_;
v_isShared_3757_ = v_isSharedCheck_3828_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3753_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3828_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v_fst_3758_; lean_object* v_snd_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3827_; 
v_fst_3758_ = lean_ctor_get(v_a_3754_, 0);
v_snd_3759_ = lean_ctor_get(v_a_3754_, 1);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_a_3754_);
if (v_isSharedCheck_3827_ == 0)
{
v___x_3761_ = v_a_3754_;
v_isShared_3762_ = v_isSharedCheck_3827_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_snd_3759_);
lean_inc(v_fst_3758_);
lean_dec(v_a_3754_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3827_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3766_; 
v___x_3763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3764_ = l_Lean_JsonNumber_fromNat(v_fst_3721_);
if (v_isShared_3757_ == 0)
{
lean_ctor_set_tag(v___x_3756_, 2);
lean_ctor_set(v___x_3756_, 0, v___x_3764_);
v___x_3766_ = v___x_3756_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v___x_3764_);
v___x_3766_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
lean_object* v___x_3768_; 
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 1, v___x_3766_);
lean_ctor_set(v___x_3761_, 0, v___x_3763_);
v___x_3768_ = v___x_3761_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v___x_3763_);
lean_ctor_set(v_reuseFailAlloc_3825_, 1, v___x_3766_);
v___x_3768_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_3752_ == 0)
{
lean_ctor_set(v___x_3751_, 1, v_fst_3731_);
lean_ctor_set(v___x_3751_, 0, v___x_3769_);
v___x_3771_ = v___x_3751_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v_fst_3731_);
v___x_3771_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3775_; 
v___x_3772_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3773_ = l_Lean_JsonNumber_fromNat(v_fst_3738_);
if (v_isShared_3747_ == 0)
{
lean_ctor_set_tag(v___x_3746_, 2);
lean_ctor_set(v___x_3746_, 0, v___x_3773_);
v___x_3775_ = v___x_3746_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3777_; 
if (v_isShared_3742_ == 0)
{
lean_ctor_set(v___x_3741_, 1, v___x_3775_);
lean_ctor_set(v___x_3741_, 0, v___x_3772_);
v___x_3777_ = v___x_3741_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3772_);
lean_ctor_set(v_reuseFailAlloc_3822_, 1, v___x_3775_);
v___x_3777_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3781_; 
v___x_3778_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3779_ = l_Lean_JsonNumber_fromNat(v_numParams_3686_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set_tag(v___x_3729_, 2);
lean_ctor_set(v___x_3729_, 0, v___x_3779_);
v___x_3781_ = v___x_3729_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3779_);
v___x_3781_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3783_; 
if (v_isShared_3735_ == 0)
{
lean_ctor_set(v___x_3734_, 1, v___x_3781_);
lean_ctor_set(v___x_3734_, 0, v___x_3778_);
v___x_3783_ = v___x_3734_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3820_, 1, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0));
v___x_3785_ = l_Lean_JsonNumber_fromNat(v_numIndices_3687_);
v___x_3786_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 1, v___x_3786_);
lean_ctor_set(v___x_3724_, 0, v___x_3784_);
v___x_3788_ = v___x_3724_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3784_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v___x_3786_);
v___x_3788_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3789_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
v___x_3790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
lean_ctor_set(v___x_3790_, 1, v_fst_3748_);
v___x_3791_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2));
v___x_3792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3791_);
lean_ctor_set(v___x_3792_, 1, v_fst_3758_);
v___x_3793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__3));
v___x_3794_ = l_Lean_JsonNumber_fromNat(v_numNested_3690_);
v___x_3795_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
v___x_3796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3793_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__4));
v___x_3798_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3798_, 0, v_isRec_3691_);
v___x_3799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3797_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__5));
v___x_3801_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3801_, 0, v_isReflexive_3693_);
v___x_3802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3800_);
lean_ctor_set(v___x_3802_, 1, v___x_3801_);
v___x_3803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_3804_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3804_, 0, v_isUnsafe_3692_);
v___x_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3803_);
lean_ctor_set(v___x_3805_, 1, v___x_3804_);
v___x_3806_ = lean_box(0);
v___x_3807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3805_);
lean_ctor_set(v___x_3807_, 1, v___x_3806_);
v___x_3808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3802_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3799_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
v___x_3810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3796_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
v___x_3811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3792_);
lean_ctor_set(v___x_3811_, 1, v___x_3810_);
v___x_3812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3790_);
lean_ctor_set(v___x_3812_, 1, v___x_3811_);
v___x_3813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3788_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
v___x_3814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3783_);
lean_ctor_set(v___x_3814_, 1, v___x_3813_);
v___x_3815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3777_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
v___x_3816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3771_);
lean_ctor_set(v___x_3816_, 1, v___x_3815_);
v___x_3817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3768_);
lean_ctor_set(v___x_3817_, 1, v___x_3816_);
v___x_3818_ = l_Lean_Json_mkObj(v___x_3817_);
lean_dec_ref_known(v___x_3817_, 2);
v_fst_3700_ = v___x_3818_;
v_snd_3701_ = v_snd_3759_;
goto v___jp_3699_;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3751_);
lean_dec(v_fst_3748_);
lean_del_object(v___x_3746_);
lean_del_object(v___x_3741_);
lean_dec(v_fst_3738_);
lean_del_object(v___x_3734_);
lean_dec(v_fst_3731_);
lean_del_object(v___x_3729_);
lean_del_object(v___x_3724_);
lean_dec(v_fst_3721_);
lean_dec(v_numNested_3690_);
lean_dec(v_numIndices_3687_);
lean_dec(v_numParams_3686_);
v___y_3707_ = v___x_3753_;
goto v___jp_3706_;
}
}
}
}
else
{
lean_del_object(v___x_3741_);
lean_dec(v_fst_3738_);
lean_del_object(v___x_3734_);
lean_dec(v_fst_3731_);
lean_del_object(v___x_3729_);
lean_del_object(v___x_3724_);
lean_dec(v_fst_3721_);
lean_dec(v_numNested_3690_);
lean_dec(v_ctors_3689_);
lean_dec(v_numIndices_3687_);
lean_dec(v_numParams_3686_);
v___y_3707_ = v___x_3743_;
goto v___jp_3706_;
}
}
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
lean_del_object(v___x_3734_);
lean_dec(v_fst_3731_);
lean_del_object(v___x_3729_);
lean_del_object(v___x_3724_);
lean_dec(v_fst_3721_);
lean_dec_ref(v_bs_x27_3698_);
lean_dec(v_numNested_3690_);
lean_dec(v_ctors_3689_);
lean_dec(v_all_3688_);
lean_dec(v_numIndices_3687_);
lean_dec(v_numParams_3686_);
v_a_3832_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3736_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3736_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_3724_);
lean_dec(v_fst_3721_);
lean_dec_ref(v_type_3696_);
lean_dec(v_numNested_3690_);
lean_dec(v_ctors_3689_);
lean_dec(v_all_3688_);
lean_dec(v_numIndices_3687_);
lean_dec(v_numParams_3686_);
v___y_3707_ = v___x_3726_;
goto v___jp_3706_;
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec_ref(v_bs_x27_3698_);
lean_dec_ref(v_type_3696_);
lean_dec(v_levelParams_3695_);
lean_dec(v_numNested_3690_);
lean_dec(v_ctors_3689_);
lean_dec(v_all_3688_);
lean_dec(v_numIndices_3687_);
lean_dec(v_numParams_3686_);
v_a_3843_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3719_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3719_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
v___jp_3699_:
{
size_t v___x_3702_; size_t v___x_3703_; lean_object* v___x_3704_; 
v___x_3702_ = ((size_t)1ULL);
v___x_3703_ = lean_usize_add(v_i_3676_, v___x_3702_);
v___x_3704_ = lean_array_uset(v_bs_x27_3698_, v_i_3676_, v_fst_3700_);
v_i_3676_ = v___x_3703_;
v_bs_3677_ = v___x_3704_;
v___y_3679_ = v_snd_3701_;
goto _start;
}
v___jp_3706_:
{
if (lean_obj_tag(v___y_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v_fst_3709_; lean_object* v_snd_3710_; 
v_a_3708_ = lean_ctor_get(v___y_3707_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v___y_3707_, 1);
v_fst_3709_ = lean_ctor_get(v_a_3708_, 0);
lean_inc(v_fst_3709_);
v_snd_3710_ = lean_ctor_get(v_a_3708_, 1);
lean_inc(v_snd_3710_);
lean_dec(v_a_3708_);
v_fst_3700_ = v_fst_3709_;
v_snd_3701_ = v_snd_3710_;
goto v___jp_3699_;
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
lean_dec_ref(v_bs_x27_3698_);
v_a_3711_ = lean_ctor_get(v___y_3707_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___y_3707_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___y_3707_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___y_3707_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t v_sz_3854_, size_t v_i_3855_, lean_object* v_bs_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
uint8_t v___x_3860_; 
v___x_3860_ = lean_usize_dec_lt(v_i_3855_, v_sz_3854_);
if (v___x_3860_ == 0)
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3861_, 0, v_bs_3856_);
lean_ctor_set(v___x_3861_, 1, v___y_3858_);
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
return v___x_3862_;
}
else
{
lean_object* v_v_3863_; lean_object* v_toConstantVal_3864_; lean_object* v_induct_3865_; lean_object* v_cidx_3866_; lean_object* v_numParams_3867_; lean_object* v_numFields_3868_; uint8_t v_isUnsafe_3869_; lean_object* v_name_3870_; lean_object* v_levelParams_3871_; lean_object* v_type_3872_; lean_object* v___x_3873_; lean_object* v_bs_x27_3874_; lean_object* v_fst_3876_; lean_object* v_snd_3877_; lean_object* v___x_3882_; 
v_v_3863_ = lean_array_uget_borrowed(v_bs_3856_, v_i_3855_);
v_toConstantVal_3864_ = lean_ctor_get(v_v_3863_, 0);
v_induct_3865_ = lean_ctor_get(v_v_3863_, 1);
lean_inc(v_induct_3865_);
v_cidx_3866_ = lean_ctor_get(v_v_3863_, 2);
lean_inc(v_cidx_3866_);
v_numParams_3867_ = lean_ctor_get(v_v_3863_, 3);
lean_inc(v_numParams_3867_);
v_numFields_3868_ = lean_ctor_get(v_v_3863_, 4);
lean_inc(v_numFields_3868_);
v_isUnsafe_3869_ = lean_ctor_get_uint8(v_v_3863_, sizeof(void*)*5);
v_name_3870_ = lean_ctor_get(v_toConstantVal_3864_, 0);
lean_inc(v_name_3870_);
v_levelParams_3871_ = lean_ctor_get(v_toConstantVal_3864_, 1);
lean_inc(v_levelParams_3871_);
v_type_3872_ = lean_ctor_get(v_toConstantVal_3864_, 2);
lean_inc_ref(v_type_3872_);
v___x_3873_ = lean_unsigned_to_nat(0u);
v_bs_x27_3874_ = lean_array_uset(v_bs_3856_, v_i_3855_, v___x_3873_);
v___x_3882_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3870_, v___y_3857_, v___y_3858_);
if (lean_obj_tag(v___x_3882_) == 0)
{
lean_object* v_a_3883_; lean_object* v_fst_3884_; lean_object* v_snd_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_3987_; 
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
lean_inc(v_a_3883_);
lean_dec_ref_known(v___x_3882_, 1);
v_fst_3884_ = lean_ctor_get(v_a_3883_, 0);
v_snd_3885_ = lean_ctor_get(v_a_3883_, 1);
v_isSharedCheck_3987_ = !lean_is_exclusive(v_a_3883_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3887_ = v_a_3883_;
v_isShared_3888_ = v_isSharedCheck_3987_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_snd_3885_);
lean_inc(v_fst_3884_);
lean_dec(v_a_3883_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_3987_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
lean_object* v___x_3889_; 
v___x_3889_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3871_, v___y_3857_, v_snd_3885_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v_fst_3891_; lean_object* v_snd_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3975_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
v_fst_3891_ = lean_ctor_get(v_a_3890_, 0);
v_snd_3892_ = lean_ctor_get(v_a_3890_, 1);
v_isSharedCheck_3975_ = !lean_is_exclusive(v_a_3890_);
if (v_isSharedCheck_3975_ == 0)
{
v___x_3894_ = v_a_3890_;
v_isShared_3895_ = v_isSharedCheck_3975_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_snd_3892_);
lean_inc(v_fst_3891_);
lean_dec(v_a_3890_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3975_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_LeanExport_dumpExpr(v_type_3872_, v___y_3857_, v_snd_3892_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v_fst_3898_; lean_object* v_snd_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3966_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
v_fst_3898_ = lean_ctor_get(v_a_3897_, 0);
v_snd_3899_ = lean_ctor_get(v_a_3897_, 1);
v_isSharedCheck_3966_ = !lean_is_exclusive(v_a_3897_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3901_ = v_a_3897_;
v_isShared_3902_ = v_isSharedCheck_3966_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_snd_3899_);
lean_inc(v_fst_3898_);
lean_dec(v_a_3897_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3966_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3903_; 
v___x_3903_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_induct_3865_, v___y_3857_, v_snd_3899_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; lean_object* v_fst_3905_; lean_object* v_snd_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3957_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3903_, 1);
v_fst_3905_ = lean_ctor_get(v_a_3904_, 0);
v_snd_3906_ = lean_ctor_get(v_a_3904_, 1);
v_isSharedCheck_3957_ = !lean_is_exclusive(v_a_3904_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3908_ = v_a_3904_;
v_isShared_3909_ = v_isSharedCheck_3957_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_snd_3906_);
lean_inc(v_fst_3905_);
lean_dec(v_a_3904_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3957_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3914_; 
v___x_3910_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3911_ = l_Lean_JsonNumber_fromNat(v_fst_3884_);
v___x_3912_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set(v___x_3908_, 1, v___x_3912_);
lean_ctor_set(v___x_3908_, 0, v___x_3910_);
v___x_3914_ = v___x_3908_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v___x_3910_);
lean_ctor_set(v_reuseFailAlloc_3956_, 1, v___x_3912_);
v___x_3914_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
lean_object* v___x_3915_; lean_object* v___x_3917_; 
v___x_3915_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_3902_ == 0)
{
lean_ctor_set(v___x_3901_, 1, v_fst_3891_);
lean_ctor_set(v___x_3901_, 0, v___x_3915_);
v___x_3917_ = v___x_3901_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3915_);
lean_ctor_set(v_reuseFailAlloc_3955_, 1, v_fst_3891_);
v___x_3917_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3922_; 
v___x_3918_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3919_ = l_Lean_JsonNumber_fromNat(v_fst_3898_);
v___x_3920_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
if (v_isShared_3895_ == 0)
{
lean_ctor_set(v___x_3894_, 1, v___x_3920_);
lean_ctor_set(v___x_3894_, 0, v___x_3918_);
v___x_3922_ = v___x_3894_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v___x_3918_);
lean_ctor_set(v_reuseFailAlloc_3954_, 1, v___x_3920_);
v___x_3922_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3927_; 
v___x_3923_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_3924_ = l_Lean_JsonNumber_fromNat(v_fst_3905_);
v___x_3925_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3924_);
if (v_isShared_3888_ == 0)
{
lean_ctor_set(v___x_3887_, 1, v___x_3925_);
lean_ctor_set(v___x_3887_, 0, v___x_3923_);
v___x_3927_ = v___x_3887_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3923_);
lean_ctor_set(v_reuseFailAlloc_3953_, 1, v___x_3925_);
v___x_3927_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v___x_3928_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3));
v___x_3929_ = l_Lean_JsonNumber_fromNat(v_cidx_3866_);
v___x_3930_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
v___x_3931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3928_);
lean_ctor_set(v___x_3931_, 1, v___x_3930_);
v___x_3932_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3933_ = l_Lean_JsonNumber_fromNat(v_numParams_3867_);
v___x_3934_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
v___x_3935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3932_);
lean_ctor_set(v___x_3935_, 1, v___x_3934_);
v___x_3936_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5));
v___x_3937_ = l_Lean_JsonNumber_fromNat(v_numFields_3868_);
v___x_3938_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
v___x_3939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3936_);
lean_ctor_set(v___x_3939_, 1, v___x_3938_);
v___x_3940_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_3941_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3941_, 0, v_isUnsafe_3869_);
v___x_3942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3940_);
lean_ctor_set(v___x_3942_, 1, v___x_3941_);
v___x_3943_ = lean_box(0);
v___x_3944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3942_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3939_);
lean_ctor_set(v___x_3945_, 1, v___x_3944_);
v___x_3946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3935_);
lean_ctor_set(v___x_3946_, 1, v___x_3945_);
v___x_3947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3931_);
lean_ctor_set(v___x_3947_, 1, v___x_3946_);
v___x_3948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3948_, 0, v___x_3927_);
lean_ctor_set(v___x_3948_, 1, v___x_3947_);
v___x_3949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3922_);
lean_ctor_set(v___x_3949_, 1, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3917_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3914_);
lean_ctor_set(v___x_3951_, 1, v___x_3950_);
v___x_3952_ = l_Lean_Json_mkObj(v___x_3951_);
lean_dec_ref_known(v___x_3951_, 2);
v_fst_3876_ = v___x_3952_;
v_snd_3877_ = v_snd_3906_;
goto v___jp_3875_;
}
}
}
}
}
}
else
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3965_; 
lean_del_object(v___x_3901_);
lean_dec(v_fst_3898_);
lean_del_object(v___x_3894_);
lean_dec(v_fst_3891_);
lean_del_object(v___x_3887_);
lean_dec(v_fst_3884_);
lean_dec_ref(v_bs_x27_3874_);
lean_dec(v_numFields_3868_);
lean_dec(v_numParams_3867_);
lean_dec(v_cidx_3866_);
v_a_3958_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3965_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3960_ = v___x_3903_;
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3903_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
return v___x_3963_;
}
}
}
}
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
lean_del_object(v___x_3894_);
lean_dec(v_fst_3891_);
lean_del_object(v___x_3887_);
lean_dec(v_fst_3884_);
lean_dec_ref(v_bs_x27_3874_);
lean_dec(v_numFields_3868_);
lean_dec(v_numParams_3867_);
lean_dec(v_cidx_3866_);
lean_dec(v_induct_3865_);
v_a_3967_ = lean_ctor_get(v___x_3896_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3896_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___x_3896_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3896_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3967_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
}
else
{
lean_del_object(v___x_3887_);
lean_dec(v_fst_3884_);
lean_dec_ref(v_type_3872_);
lean_dec(v_numFields_3868_);
lean_dec(v_numParams_3867_);
lean_dec(v_cidx_3866_);
lean_dec(v_induct_3865_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3976_; lean_object* v_fst_3977_; lean_object* v_snd_3978_; 
v_a_3976_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3976_);
lean_dec_ref_known(v___x_3889_, 1);
v_fst_3977_ = lean_ctor_get(v_a_3976_, 0);
lean_inc(v_fst_3977_);
v_snd_3978_ = lean_ctor_get(v_a_3976_, 1);
lean_inc(v_snd_3978_);
lean_dec(v_a_3976_);
v_fst_3876_ = v_fst_3977_;
v_snd_3877_ = v_snd_3978_;
goto v___jp_3875_;
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
lean_dec_ref(v_bs_x27_3874_);
v_a_3979_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3889_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3889_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3984_; 
if (v_isShared_3982_ == 0)
{
v___x_3984_ = v___x_3981_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_a_3979_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
}
}
else
{
lean_object* v_a_3988_; lean_object* v___x_3990_; uint8_t v_isShared_3991_; uint8_t v_isSharedCheck_3995_; 
lean_dec_ref(v_bs_x27_3874_);
lean_dec_ref(v_type_3872_);
lean_dec(v_levelParams_3871_);
lean_dec(v_numFields_3868_);
lean_dec(v_numParams_3867_);
lean_dec(v_cidx_3866_);
lean_dec(v_induct_3865_);
v_a_3988_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3990_ = v___x_3882_;
v_isShared_3991_ = v_isSharedCheck_3995_;
goto v_resetjp_3989_;
}
else
{
lean_inc(v_a_3988_);
lean_dec(v___x_3882_);
v___x_3990_ = lean_box(0);
v_isShared_3991_ = v_isSharedCheck_3995_;
goto v_resetjp_3989_;
}
v_resetjp_3989_:
{
lean_object* v___x_3993_; 
if (v_isShared_3991_ == 0)
{
v___x_3993_ = v___x_3990_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v_a_3988_);
v___x_3993_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
return v___x_3993_;
}
}
}
v___jp_3875_:
{
size_t v___x_3878_; size_t v___x_3879_; lean_object* v___x_3880_; 
v___x_3878_ = ((size_t)1ULL);
v___x_3879_ = lean_usize_add(v_i_3855_, v___x_3878_);
v___x_3880_ = lean_array_uset(v_bs_x27_3874_, v_i_3855_, v_fst_3876_);
v_i_3855_ = v___x_3879_;
v_bs_3856_ = v___x_3880_;
v___y_3858_ = v_snd_3877_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object* v_rule_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v_ctor_4002_; lean_object* v_nfields_4003_; lean_object* v_rhs_4004_; lean_object* v___x_4005_; 
v_ctor_4002_ = lean_ctor_get(v_rule_3998_, 0);
lean_inc(v_ctor_4002_);
v_nfields_4003_ = lean_ctor_get(v_rule_3998_, 1);
lean_inc(v_nfields_4003_);
v_rhs_4004_ = lean_ctor_get(v_rule_3998_, 2);
lean_inc_ref(v_rhs_4004_);
lean_dec_ref(v_rule_3998_);
v___x_4005_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_ctor_4002_, v___y_3999_, v___y_4000_);
if (lean_obj_tag(v___x_4005_) == 0)
{
lean_object* v_a_4006_; lean_object* v_fst_4007_; lean_object* v_snd_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4057_; 
v_a_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc(v_a_4006_);
lean_dec_ref_known(v___x_4005_, 1);
v_fst_4007_ = lean_ctor_get(v_a_4006_, 0);
v_snd_4008_ = lean_ctor_get(v_a_4006_, 1);
v_isSharedCheck_4057_ = !lean_is_exclusive(v_a_4006_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4010_ = v_a_4006_;
v_isShared_4011_ = v_isSharedCheck_4057_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_snd_4008_);
lean_inc(v_fst_4007_);
lean_dec(v_a_4006_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4057_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4012_; 
v___x_4012_ = l_LeanExport_dumpExpr(v_rhs_4004_, v___y_3999_, v_snd_4008_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4048_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4048_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4048_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v_fst_4017_; lean_object* v_snd_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4047_; 
v_fst_4017_ = lean_ctor_get(v_a_4013_, 0);
v_snd_4018_ = lean_ctor_get(v_a_4013_, 1);
v_isSharedCheck_4047_ = !lean_is_exclusive(v_a_4013_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4020_ = v_a_4013_;
v_isShared_4021_ = v_isSharedCheck_4047_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_snd_4018_);
lean_inc(v_fst_4017_);
lean_dec(v_a_4013_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4047_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4026_; 
v___x_4022_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2));
v___x_4023_ = l_Lean_JsonNumber_fromNat(v_fst_4007_);
v___x_4024_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4023_);
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 1, v___x_4024_);
lean_ctor_set(v___x_4020_, 0, v___x_4022_);
v___x_4026_ = v___x_4020_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v___x_4022_);
lean_ctor_set(v_reuseFailAlloc_4046_, 1, v___x_4024_);
v___x_4026_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4031_; 
v___x_4027_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0));
v___x_4028_ = l_Lean_JsonNumber_fromNat(v_nfields_4003_);
v___x_4029_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4028_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 1, v___x_4029_);
lean_ctor_set(v___x_4010_, 0, v___x_4027_);
v___x_4031_ = v___x_4010_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4027_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_4029_);
v___x_4031_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4043_; 
v___x_4032_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1));
v___x_4033_ = l_Lean_JsonNumber_fromNat(v_fst_4017_);
v___x_4034_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
v___x_4035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4032_);
lean_ctor_set(v___x_4035_, 1, v___x_4034_);
v___x_4036_ = lean_box(0);
v___x_4037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4035_);
lean_ctor_set(v___x_4037_, 1, v___x_4036_);
v___x_4038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4031_);
lean_ctor_set(v___x_4038_, 1, v___x_4037_);
v___x_4039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4026_);
lean_ctor_set(v___x_4039_, 1, v___x_4038_);
v___x_4040_ = l_Lean_Json_mkObj(v___x_4039_);
lean_dec_ref_known(v___x_4039_, 2);
v___x_4041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4041_, 0, v___x_4040_);
lean_ctor_set(v___x_4041_, 1, v_snd_4018_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4041_);
v___x_4043_ = v___x_4015_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v___x_4041_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
}
else
{
lean_object* v_a_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4056_; 
lean_del_object(v___x_4010_);
lean_dec(v_fst_4007_);
lean_dec(v_nfields_4003_);
v_a_4049_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4056_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4056_ == 0)
{
v___x_4051_ = v___x_4012_;
v_isShared_4052_ = v_isSharedCheck_4056_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_a_4049_);
lean_dec(v___x_4012_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4056_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
lean_object* v___x_4054_; 
if (v_isShared_4052_ == 0)
{
v___x_4054_ = v___x_4051_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v_a_4049_);
v___x_4054_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
return v___x_4054_;
}
}
}
}
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4065_; 
lean_dec_ref(v_rhs_4004_);
lean_dec(v_nfields_4003_);
v_a_4058_ = lean_ctor_get(v___x_4005_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4060_ = v___x_4005_;
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4005_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4063_; 
if (v_isShared_4061_ == 0)
{
v___x_4063_ = v___x_4060_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4058_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object* v_x_4066_, lean_object* v_x_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_){
_start:
{
if (lean_obj_tag(v_x_4066_) == 0)
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4071_ = l_List_reverse___redArg(v_x_4067_);
v___x_4072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4071_);
lean_ctor_set(v___x_4072_, 1, v___y_4069_);
v___x_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4073_, 0, v___x_4072_);
return v___x_4073_;
}
else
{
lean_object* v_head_4074_; lean_object* v_tail_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4095_; 
v_head_4074_ = lean_ctor_get(v_x_4066_, 0);
v_tail_4075_ = lean_ctor_get(v_x_4066_, 1);
v_isSharedCheck_4095_ = !lean_is_exclusive(v_x_4066_);
if (v_isSharedCheck_4095_ == 0)
{
v___x_4077_ = v_x_4066_;
v_isShared_4078_ = v_isSharedCheck_4095_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_tail_4075_);
lean_inc(v_head_4074_);
lean_dec(v_x_4066_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4095_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4079_; 
v___x_4079_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_head_4074_, v___y_4068_, v___y_4069_);
if (lean_obj_tag(v___x_4079_) == 0)
{
lean_object* v_a_4080_; lean_object* v_fst_4081_; lean_object* v_snd_4082_; lean_object* v___x_4084_; 
v_a_4080_ = lean_ctor_get(v___x_4079_, 0);
lean_inc(v_a_4080_);
lean_dec_ref_known(v___x_4079_, 1);
v_fst_4081_ = lean_ctor_get(v_a_4080_, 0);
lean_inc(v_fst_4081_);
v_snd_4082_ = lean_ctor_get(v_a_4080_, 1);
lean_inc(v_snd_4082_);
lean_dec(v_a_4080_);
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 1, v_x_4067_);
lean_ctor_set(v___x_4077_, 0, v_fst_4081_);
v___x_4084_ = v___x_4077_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_fst_4081_);
lean_ctor_set(v_reuseFailAlloc_4086_, 1, v_x_4067_);
v___x_4084_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
v_x_4066_ = v_tail_4075_;
v_x_4067_ = v___x_4084_;
v___y_4069_ = v_snd_4082_;
goto _start;
}
}
else
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
lean_del_object(v___x_4077_);
lean_dec(v_tail_4075_);
lean_dec(v_x_4067_);
v_a_4087_ = lean_ctor_get(v___x_4079_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4079_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_4079_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4079_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t v_sz_4100_, size_t v_i_4101_, lean_object* v_bs_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_){
_start:
{
uint8_t v___x_4106_; 
v___x_4106_ = lean_usize_dec_lt(v_i_4101_, v_sz_4100_);
if (v___x_4106_ == 0)
{
lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4107_, 0, v_bs_4102_);
lean_ctor_set(v___x_4107_, 1, v___y_4104_);
v___x_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
return v___x_4108_;
}
else
{
lean_object* v_v_4109_; lean_object* v_toConstantVal_4110_; lean_object* v_all_4111_; lean_object* v_numParams_4112_; lean_object* v_numIndices_4113_; lean_object* v_numMotives_4114_; lean_object* v_numMinors_4115_; lean_object* v_rules_4116_; uint8_t v_k_4117_; uint8_t v_isUnsafe_4118_; lean_object* v_name_4119_; lean_object* v_levelParams_4120_; lean_object* v_type_4121_; lean_object* v___x_4122_; lean_object* v_bs_x27_4123_; lean_object* v_fst_4125_; lean_object* v_snd_4126_; lean_object* v___y_4132_; lean_object* v___x_4144_; 
v_v_4109_ = lean_array_uget_borrowed(v_bs_4102_, v_i_4101_);
v_toConstantVal_4110_ = lean_ctor_get(v_v_4109_, 0);
v_all_4111_ = lean_ctor_get(v_v_4109_, 1);
lean_inc(v_all_4111_);
v_numParams_4112_ = lean_ctor_get(v_v_4109_, 2);
lean_inc(v_numParams_4112_);
v_numIndices_4113_ = lean_ctor_get(v_v_4109_, 3);
lean_inc(v_numIndices_4113_);
v_numMotives_4114_ = lean_ctor_get(v_v_4109_, 4);
lean_inc(v_numMotives_4114_);
v_numMinors_4115_ = lean_ctor_get(v_v_4109_, 5);
lean_inc(v_numMinors_4115_);
v_rules_4116_ = lean_ctor_get(v_v_4109_, 6);
lean_inc(v_rules_4116_);
v_k_4117_ = lean_ctor_get_uint8(v_v_4109_, sizeof(void*)*7);
v_isUnsafe_4118_ = lean_ctor_get_uint8(v_v_4109_, sizeof(void*)*7 + 1);
v_name_4119_ = lean_ctor_get(v_toConstantVal_4110_, 0);
lean_inc(v_name_4119_);
v_levelParams_4120_ = lean_ctor_get(v_toConstantVal_4110_, 1);
lean_inc(v_levelParams_4120_);
v_type_4121_ = lean_ctor_get(v_toConstantVal_4110_, 2);
lean_inc_ref(v_type_4121_);
v___x_4122_ = lean_unsigned_to_nat(0u);
v_bs_x27_4123_ = lean_array_uset(v_bs_4102_, v_i_4101_, v___x_4122_);
v___x_4144_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4119_, v___y_4103_, v___y_4104_);
if (lean_obj_tag(v___x_4144_) == 0)
{
lean_object* v_a_4145_; lean_object* v_fst_4146_; lean_object* v_snd_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4271_; 
v_a_4145_ = lean_ctor_get(v___x_4144_, 0);
lean_inc(v_a_4145_);
lean_dec_ref_known(v___x_4144_, 1);
v_fst_4146_ = lean_ctor_get(v_a_4145_, 0);
v_snd_4147_ = lean_ctor_get(v_a_4145_, 1);
v_isSharedCheck_4271_ = !lean_is_exclusive(v_a_4145_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4149_ = v_a_4145_;
v_isShared_4150_ = v_isSharedCheck_4271_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_snd_4147_);
lean_inc(v_fst_4146_);
lean_dec(v_a_4145_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4271_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4151_; 
v___x_4151_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4120_, v___y_4103_, v_snd_4147_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v_a_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4270_; 
v_a_4152_ = lean_ctor_get(v___x_4151_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4151_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4154_ = v___x_4151_;
v_isShared_4155_ = v_isSharedCheck_4270_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_a_4152_);
lean_dec(v___x_4151_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4270_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v_fst_4156_; lean_object* v_snd_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4269_; 
v_fst_4156_ = lean_ctor_get(v_a_4152_, 0);
v_snd_4157_ = lean_ctor_get(v_a_4152_, 1);
v_isSharedCheck_4269_ = !lean_is_exclusive(v_a_4152_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4159_ = v_a_4152_;
v_isShared_4160_ = v_isSharedCheck_4269_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_snd_4157_);
lean_inc(v_fst_4156_);
lean_dec(v_a_4152_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4269_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4161_; 
v___x_4161_ = l_LeanExport_dumpExpr(v_type_4121_, v___y_4103_, v_snd_4157_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v_fst_4163_; lean_object* v_snd_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4260_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_a_4162_);
lean_dec_ref_known(v___x_4161_, 1);
v_fst_4163_ = lean_ctor_get(v_a_4162_, 0);
v_snd_4164_ = lean_ctor_get(v_a_4162_, 1);
v_isSharedCheck_4260_ = !lean_is_exclusive(v_a_4162_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4166_ = v_a_4162_;
v_isShared_4167_ = v_isSharedCheck_4260_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_snd_4164_);
lean_inc(v_fst_4163_);
lean_dec(v_a_4162_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4260_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4168_; 
v___x_4168_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4111_, v___y_4103_, v_snd_4164_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4259_; 
v_a_4169_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4171_ = v___x_4168_;
v_isShared_4172_ = v_isSharedCheck_4259_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4168_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4259_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v_fst_4173_; lean_object* v_snd_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4258_; 
v_fst_4173_ = lean_ctor_get(v_a_4169_, 0);
v_snd_4174_ = lean_ctor_get(v_a_4169_, 1);
v_isSharedCheck_4258_ = !lean_is_exclusive(v_a_4169_);
if (v_isSharedCheck_4258_ == 0)
{
v___x_4176_ = v_a_4169_;
v_isShared_4177_ = v_isSharedCheck_4258_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_snd_4174_);
lean_inc(v_fst_4173_);
lean_dec(v_a_4169_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4258_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; 
v___x_4178_ = lean_box(0);
v___x_4179_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_rules_4116_, v___x_4178_, v___y_4103_, v_snd_4174_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v_a_4180_; lean_object* v_fst_4181_; lean_object* v_snd_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4249_; 
v_a_4180_ = lean_ctor_get(v___x_4179_, 0);
lean_inc(v_a_4180_);
lean_dec_ref_known(v___x_4179_, 1);
v_fst_4181_ = lean_ctor_get(v_a_4180_, 0);
v_snd_4182_ = lean_ctor_get(v_a_4180_, 1);
v_isSharedCheck_4249_ = !lean_is_exclusive(v_a_4180_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4184_ = v_a_4180_;
v_isShared_4185_ = v_isSharedCheck_4249_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_snd_4182_);
lean_inc(v_fst_4181_);
lean_dec(v_a_4180_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4249_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4189_; 
v___x_4186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4187_ = l_Lean_JsonNumber_fromNat(v_fst_4146_);
if (v_isShared_4172_ == 0)
{
lean_ctor_set_tag(v___x_4171_, 2);
lean_ctor_set(v___x_4171_, 0, v___x_4187_);
v___x_4189_ = v___x_4171_;
goto v_reusejp_4188_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v___x_4187_);
v___x_4189_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4188_;
}
v_reusejp_4188_:
{
lean_object* v___x_4191_; 
if (v_isShared_4185_ == 0)
{
lean_ctor_set(v___x_4184_, 1, v___x_4189_);
lean_ctor_set(v___x_4184_, 0, v___x_4186_);
v___x_4191_ = v___x_4184_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v___x_4186_);
lean_ctor_set(v_reuseFailAlloc_4247_, 1, v___x_4189_);
v___x_4191_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
lean_object* v___x_4192_; lean_object* v___x_4194_; 
v___x_4192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4177_ == 0)
{
lean_ctor_set(v___x_4176_, 1, v_fst_4156_);
lean_ctor_set(v___x_4176_, 0, v___x_4192_);
v___x_4194_ = v___x_4176_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v___x_4192_);
lean_ctor_set(v_reuseFailAlloc_4246_, 1, v_fst_4156_);
v___x_4194_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4198_; 
v___x_4195_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4196_ = l_Lean_JsonNumber_fromNat(v_fst_4163_);
if (v_isShared_4155_ == 0)
{
lean_ctor_set_tag(v___x_4154_, 2);
lean_ctor_set(v___x_4154_, 0, v___x_4196_);
v___x_4198_ = v___x_4154_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v___x_4196_);
v___x_4198_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
lean_object* v___x_4200_; 
if (v_isShared_4167_ == 0)
{
lean_ctor_set(v___x_4166_, 1, v___x_4198_);
lean_ctor_set(v___x_4166_, 0, v___x_4195_);
v___x_4200_ = v___x_4166_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v___x_4195_);
lean_ctor_set(v_reuseFailAlloc_4244_, 1, v___x_4198_);
v___x_4200_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
lean_object* v___x_4201_; lean_object* v___x_4203_; 
v___x_4201_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_4160_ == 0)
{
lean_ctor_set(v___x_4159_, 1, v_fst_4173_);
lean_ctor_set(v___x_4159_, 0, v___x_4201_);
v___x_4203_ = v___x_4159_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4201_);
lean_ctor_set(v_reuseFailAlloc_4243_, 1, v_fst_4173_);
v___x_4203_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4208_; 
v___x_4204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_4205_ = l_Lean_JsonNumber_fromNat(v_numParams_4112_);
v___x_4206_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 1, v___x_4206_);
lean_ctor_set(v___x_4149_, 0, v___x_4204_);
v___x_4208_ = v___x_4149_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v___x_4204_);
lean_ctor_set(v_reuseFailAlloc_4242_, 1, v___x_4206_);
v___x_4208_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
v___x_4209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0));
v___x_4210_ = l_Lean_JsonNumber_fromNat(v_numIndices_4113_);
v___x_4211_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4211_, 0, v___x_4210_);
v___x_4212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4209_);
lean_ctor_set(v___x_4212_, 1, v___x_4211_);
v___x_4213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4214_ = l_Lean_JsonNumber_fromNat(v_numMotives_4114_);
v___x_4215_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
v___x_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4213_);
lean_ctor_set(v___x_4216_, 1, v___x_4215_);
v___x_4217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
v___x_4218_ = l_Lean_JsonNumber_fromNat(v_numMinors_4115_);
v___x_4219_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4218_);
v___x_4220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4217_);
lean_ctor_set(v___x_4220_, 1, v___x_4219_);
v___x_4221_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2));
v___x_4222_ = l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(v_fst_4181_);
v___x_4223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4221_);
lean_ctor_set(v___x_4223_, 1, v___x_4222_);
v___x_4224_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3));
v___x_4225_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4225_, 0, v_k_4117_);
v___x_4226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4224_);
lean_ctor_set(v___x_4226_, 1, v___x_4225_);
v___x_4227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_4228_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4228_, 0, v_isUnsafe_4118_);
v___x_4229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4227_);
lean_ctor_set(v___x_4229_, 1, v___x_4228_);
v___x_4230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4229_);
lean_ctor_set(v___x_4230_, 1, v___x_4178_);
v___x_4231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4226_);
lean_ctor_set(v___x_4231_, 1, v___x_4230_);
v___x_4232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4223_);
lean_ctor_set(v___x_4232_, 1, v___x_4231_);
v___x_4233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4233_, 0, v___x_4220_);
lean_ctor_set(v___x_4233_, 1, v___x_4232_);
v___x_4234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4216_);
lean_ctor_set(v___x_4234_, 1, v___x_4233_);
v___x_4235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4212_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4208_);
lean_ctor_set(v___x_4236_, 1, v___x_4235_);
v___x_4237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4203_);
lean_ctor_set(v___x_4237_, 1, v___x_4236_);
v___x_4238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4200_);
lean_ctor_set(v___x_4238_, 1, v___x_4237_);
v___x_4239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4194_);
lean_ctor_set(v___x_4239_, 1, v___x_4238_);
v___x_4240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4191_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
v___x_4241_ = l_Lean_Json_mkObj(v___x_4240_);
lean_dec_ref_known(v___x_4240_, 2);
v_fst_4125_ = v___x_4241_;
v_snd_4126_ = v_snd_4182_;
goto v___jp_4124_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_4250_; lean_object* v___x_4252_; uint8_t v_isShared_4253_; uint8_t v_isSharedCheck_4257_; 
lean_del_object(v___x_4176_);
lean_dec(v_fst_4173_);
lean_del_object(v___x_4171_);
lean_del_object(v___x_4166_);
lean_dec(v_fst_4163_);
lean_del_object(v___x_4159_);
lean_dec(v_fst_4156_);
lean_del_object(v___x_4154_);
lean_del_object(v___x_4149_);
lean_dec(v_fst_4146_);
lean_dec_ref(v_bs_x27_4123_);
lean_dec(v_numMinors_4115_);
lean_dec(v_numMotives_4114_);
lean_dec(v_numIndices_4113_);
lean_dec(v_numParams_4112_);
v_a_4250_ = lean_ctor_get(v___x_4179_, 0);
v_isSharedCheck_4257_ = !lean_is_exclusive(v___x_4179_);
if (v_isSharedCheck_4257_ == 0)
{
v___x_4252_ = v___x_4179_;
v_isShared_4253_ = v_isSharedCheck_4257_;
goto v_resetjp_4251_;
}
else
{
lean_inc(v_a_4250_);
lean_dec(v___x_4179_);
v___x_4252_ = lean_box(0);
v_isShared_4253_ = v_isSharedCheck_4257_;
goto v_resetjp_4251_;
}
v_resetjp_4251_:
{
lean_object* v___x_4255_; 
if (v_isShared_4253_ == 0)
{
v___x_4255_ = v___x_4252_;
goto v_reusejp_4254_;
}
else
{
lean_object* v_reuseFailAlloc_4256_; 
v_reuseFailAlloc_4256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4256_, 0, v_a_4250_);
v___x_4255_ = v_reuseFailAlloc_4256_;
goto v_reusejp_4254_;
}
v_reusejp_4254_:
{
return v___x_4255_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4166_);
lean_dec(v_fst_4163_);
lean_del_object(v___x_4159_);
lean_dec(v_fst_4156_);
lean_del_object(v___x_4154_);
lean_del_object(v___x_4149_);
lean_dec(v_fst_4146_);
lean_dec(v_rules_4116_);
lean_dec(v_numMinors_4115_);
lean_dec(v_numMotives_4114_);
lean_dec(v_numIndices_4113_);
lean_dec(v_numParams_4112_);
v___y_4132_ = v___x_4168_;
goto v___jp_4131_;
}
}
}
else
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
lean_del_object(v___x_4159_);
lean_dec(v_fst_4156_);
lean_del_object(v___x_4154_);
lean_del_object(v___x_4149_);
lean_dec(v_fst_4146_);
lean_dec_ref(v_bs_x27_4123_);
lean_dec(v_rules_4116_);
lean_dec(v_numMinors_4115_);
lean_dec(v_numMotives_4114_);
lean_dec(v_numIndices_4113_);
lean_dec(v_numParams_4112_);
lean_dec(v_all_4111_);
v_a_4261_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___x_4161_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___x_4161_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4149_);
lean_dec(v_fst_4146_);
lean_dec_ref(v_type_4121_);
lean_dec(v_rules_4116_);
lean_dec(v_numMinors_4115_);
lean_dec(v_numMotives_4114_);
lean_dec(v_numIndices_4113_);
lean_dec(v_numParams_4112_);
lean_dec(v_all_4111_);
v___y_4132_ = v___x_4151_;
goto v___jp_4131_;
}
}
}
else
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4279_; 
lean_dec_ref(v_bs_x27_4123_);
lean_dec_ref(v_type_4121_);
lean_dec(v_levelParams_4120_);
lean_dec(v_rules_4116_);
lean_dec(v_numMinors_4115_);
lean_dec(v_numMotives_4114_);
lean_dec(v_numIndices_4113_);
lean_dec(v_numParams_4112_);
lean_dec(v_all_4111_);
v_a_4272_ = lean_ctor_get(v___x_4144_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4274_ = v___x_4144_;
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v___x_4144_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4277_; 
if (v_isShared_4275_ == 0)
{
v___x_4277_ = v___x_4274_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v_a_4272_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
v___jp_4124_:
{
size_t v___x_4127_; size_t v___x_4128_; lean_object* v___x_4129_; 
v___x_4127_ = ((size_t)1ULL);
v___x_4128_ = lean_usize_add(v_i_4101_, v___x_4127_);
v___x_4129_ = lean_array_uset(v_bs_x27_4123_, v_i_4101_, v_fst_4125_);
v_i_4101_ = v___x_4128_;
v_bs_4102_ = v___x_4129_;
v___y_4104_ = v_snd_4126_;
goto _start;
}
v___jp_4131_:
{
if (lean_obj_tag(v___y_4132_) == 0)
{
lean_object* v_a_4133_; lean_object* v_fst_4134_; lean_object* v_snd_4135_; 
v_a_4133_ = lean_ctor_get(v___y_4132_, 0);
lean_inc(v_a_4133_);
lean_dec_ref_known(v___y_4132_, 1);
v_fst_4134_ = lean_ctor_get(v_a_4133_, 0);
lean_inc(v_fst_4134_);
v_snd_4135_ = lean_ctor_get(v_a_4133_, 1);
lean_inc(v_snd_4135_);
lean_dec(v_a_4133_);
v_fst_4125_ = v_fst_4134_;
v_snd_4126_ = v_snd_4135_;
goto v___jp_4124_;
}
else
{
lean_object* v_a_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4143_; 
lean_dec_ref(v_bs_x27_4123_);
v_a_4136_ = lean_ctor_get(v___y_4132_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___y_4132_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4138_ = v___y_4132_;
v_isShared_4139_ = v_isSharedCheck_4143_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_a_4136_);
lean_dec(v___y_4132_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4143_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4141_; 
if (v_isShared_4139_ == 0)
{
v___x_4141_ = v___x_4138_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_a_4136_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t v___x_4328_, lean_object* v_as_x27_4329_, lean_object* v_b_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_){
_start:
{
if (lean_obj_tag(v_as_x27_4329_) == 0)
{
lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4334_, 0, v_b_4330_);
lean_ctor_set(v___x_4334_, 1, v___y_4332_);
v___x_4335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4335_, 0, v___x_4334_);
return v___x_4335_;
}
else
{
lean_object* v_head_4336_; lean_object* v_tail_4337_; lean_object* v___x_4338_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___x_4369_; 
lean_dec_ref(v_b_4330_);
v_head_4336_ = lean_ctor_get(v_as_x27_4329_, 0);
v_tail_4337_ = lean_ctor_get(v_as_x27_4329_, 1);
v___x_4338_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
lean_inc(v_head_4336_);
lean_inc_ref(v___y_4331_);
v___x_4369_ = l_Lean_Environment_find_x3f(v___y_4331_, v_head_4336_, v___x_4328_);
if (lean_obj_tag(v___x_4369_) == 1)
{
lean_object* v_val_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4493_; 
v_val_4370_ = lean_ctor_get(v___x_4369_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v___x_4369_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4372_ = v___x_4369_;
v_isShared_4373_ = v_isSharedCheck_4493_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_val_4370_);
lean_dec(v___x_4369_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4493_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
if (lean_obj_tag(v_val_4370_) == 4)
{
lean_object* v_val_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4492_; 
v_val_4374_ = lean_ctor_get(v_val_4370_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v_val_4370_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4376_ = v_val_4370_;
v_isShared_4377_ = v_isSharedCheck_4492_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_val_4374_);
lean_dec(v_val_4370_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4492_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v_toConstantVal_4378_; lean_object* v_visitedNames_4379_; lean_object* v_visitedLevels_4380_; lean_object* v_visitedExprs_4381_; lean_object* v_visitedConstants_4382_; lean_object* v_noMDataExprs_4383_; uint8_t v_exportMData_4384_; uint8_t v_exportUnsafe_4385_; uint8_t v_ignoreMissing_4386_; lean_object* v_recursorMap_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4491_; 
v_toConstantVal_4378_ = lean_ctor_get(v_val_4374_, 0);
lean_inc_ref(v_toConstantVal_4378_);
v_visitedNames_4379_ = lean_ctor_get(v___y_4332_, 0);
v_visitedLevels_4380_ = lean_ctor_get(v___y_4332_, 1);
v_visitedExprs_4381_ = lean_ctor_get(v___y_4332_, 2);
v_visitedConstants_4382_ = lean_ctor_get(v___y_4332_, 3);
v_noMDataExprs_4383_ = lean_ctor_get(v___y_4332_, 4);
v_exportMData_4384_ = lean_ctor_get_uint8(v___y_4332_, sizeof(void*)*6);
v_exportUnsafe_4385_ = lean_ctor_get_uint8(v___y_4332_, sizeof(void*)*6 + 1);
v_ignoreMissing_4386_ = lean_ctor_get_uint8(v___y_4332_, sizeof(void*)*6 + 2);
v_recursorMap_4387_ = lean_ctor_get(v___y_4332_, 5);
v_isSharedCheck_4491_ = !lean_is_exclusive(v___y_4332_);
if (v_isSharedCheck_4491_ == 0)
{
v___x_4389_ = v___y_4332_;
v_isShared_4390_ = v_isSharedCheck_4491_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_recursorMap_4387_);
lean_inc(v_noMDataExprs_4383_);
lean_inc(v_visitedConstants_4382_);
lean_inc(v_visitedExprs_4381_);
lean_inc(v_visitedLevels_4380_);
lean_inc(v_visitedNames_4379_);
lean_dec(v___y_4332_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4491_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
uint8_t v_kind_4391_; lean_object* v_name_4392_; lean_object* v_levelParams_4393_; lean_object* v_type_4394_; lean_object* v___x_4395_; lean_object* v___x_4397_; 
v_kind_4391_ = lean_ctor_get_uint8(v_val_4374_, sizeof(void*)*1);
lean_dec_ref(v_val_4374_);
v_name_4392_ = lean_ctor_get(v_toConstantVal_4378_, 0);
lean_inc(v_name_4392_);
v_levelParams_4393_ = lean_ctor_get(v_toConstantVal_4378_, 1);
lean_inc(v_levelParams_4393_);
v_type_4394_ = lean_ctor_get(v_toConstantVal_4378_, 2);
lean_inc_ref(v_type_4394_);
lean_dec_ref(v_toConstantVal_4378_);
lean_inc(v_head_4336_);
v___x_4395_ = l_Lean_NameHashSet_insert(v_visitedConstants_4382_, v_head_4336_);
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 3, v___x_4395_);
v___x_4397_ = v___x_4389_;
goto v_reusejp_4396_;
}
else
{
lean_object* v_reuseFailAlloc_4490_; 
v_reuseFailAlloc_4490_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4490_, 0, v_visitedNames_4379_);
lean_ctor_set(v_reuseFailAlloc_4490_, 1, v_visitedLevels_4380_);
lean_ctor_set(v_reuseFailAlloc_4490_, 2, v_visitedExprs_4381_);
lean_ctor_set(v_reuseFailAlloc_4490_, 3, v___x_4395_);
lean_ctor_set(v_reuseFailAlloc_4490_, 4, v_noMDataExprs_4383_);
lean_ctor_set(v_reuseFailAlloc_4490_, 5, v_recursorMap_4387_);
lean_ctor_set_uint8(v_reuseFailAlloc_4490_, sizeof(void*)*6, v_exportMData_4384_);
lean_ctor_set_uint8(v_reuseFailAlloc_4490_, sizeof(void*)*6 + 1, v_exportUnsafe_4385_);
lean_ctor_set_uint8(v_reuseFailAlloc_4490_, sizeof(void*)*6 + 2, v_ignoreMissing_4386_);
v___x_4397_ = v_reuseFailAlloc_4490_;
goto v_reusejp_4396_;
}
v_reusejp_4396_:
{
lean_object* v___x_4398_; 
v___x_4398_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4392_, v___y_4331_, v___x_4397_);
if (lean_obj_tag(v___x_4398_) == 0)
{
lean_object* v_a_4399_; lean_object* v_fst_4400_; lean_object* v_snd_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4481_; 
v_a_4399_ = lean_ctor_get(v___x_4398_, 0);
lean_inc(v_a_4399_);
lean_dec_ref_known(v___x_4398_, 1);
v_fst_4400_ = lean_ctor_get(v_a_4399_, 0);
v_snd_4401_ = lean_ctor_get(v_a_4399_, 1);
v_isSharedCheck_4481_ = !lean_is_exclusive(v_a_4399_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4403_ = v_a_4399_;
v_isShared_4404_ = v_isSharedCheck_4481_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_snd_4401_);
lean_inc(v_fst_4400_);
lean_dec(v_a_4399_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4481_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4405_; 
v___x_4405_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4393_, v___y_4331_, v_snd_4401_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_a_4406_; lean_object* v_fst_4407_; lean_object* v_snd_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4472_; 
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4406_);
lean_dec_ref_known(v___x_4405_, 1);
v_fst_4407_ = lean_ctor_get(v_a_4406_, 0);
v_snd_4408_ = lean_ctor_get(v_a_4406_, 1);
v_isSharedCheck_4472_ = !lean_is_exclusive(v_a_4406_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4410_ = v_a_4406_;
v_isShared_4411_ = v_isSharedCheck_4472_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_snd_4408_);
lean_inc(v_fst_4407_);
lean_dec(v_a_4406_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4472_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4412_; 
v___x_4412_ = l_LeanExport_dumpExpr(v_type_4394_, v___y_4331_, v_snd_4408_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; lean_object* v_fst_4414_; lean_object* v_snd_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4463_; 
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4412_, 1);
v_fst_4414_ = lean_ctor_get(v_a_4413_, 0);
v_snd_4415_ = lean_ctor_get(v_a_4413_, 1);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_a_4413_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4417_ = v_a_4413_;
v_isShared_4418_ = v_isSharedCheck_4463_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_snd_4415_);
lean_inc(v_fst_4414_);
lean_dec(v_a_4413_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4463_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4423_; 
v___x_4419_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5));
v___x_4420_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4421_ = l_Lean_JsonNumber_fromNat(v_fst_4400_);
if (v_isShared_4377_ == 0)
{
lean_ctor_set_tag(v___x_4376_, 2);
lean_ctor_set(v___x_4376_, 0, v___x_4421_);
v___x_4423_ = v___x_4376_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4421_);
v___x_4423_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
lean_object* v___x_4425_; 
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 1, v___x_4423_);
lean_ctor_set(v___x_4417_, 0, v___x_4420_);
v___x_4425_ = v___x_4417_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v___x_4420_);
lean_ctor_set(v_reuseFailAlloc_4461_, 1, v___x_4423_);
v___x_4425_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
lean_object* v___x_4426_; lean_object* v___x_4428_; 
v___x_4426_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 1, v_fst_4407_);
lean_ctor_set(v___x_4410_, 0, v___x_4426_);
v___x_4428_ = v___x_4410_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v___x_4426_);
lean_ctor_set(v_reuseFailAlloc_4460_, 1, v_fst_4407_);
v___x_4428_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; 
v___x_4429_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4430_ = l_Lean_JsonNumber_fromNat(v_fst_4414_);
if (v_isShared_4373_ == 0)
{
lean_ctor_set_tag(v___x_4372_, 2);
lean_ctor_set(v___x_4372_, 0, v___x_4430_);
v___x_4432_ = v___x_4372_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v___x_4430_);
v___x_4432_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
lean_object* v___x_4434_; 
if (v_isShared_4404_ == 0)
{
lean_ctor_set(v___x_4403_, 1, v___x_4432_);
lean_ctor_set(v___x_4403_, 0, v___x_4429_);
v___x_4434_ = v___x_4403_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v___x_4429_);
lean_ctor_set(v_reuseFailAlloc_4458_, 1, v___x_4432_);
v___x_4434_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v___x_4435_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6));
v___x_4436_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_kind_4391_);
v___x_4437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4435_);
lean_ctor_set(v___x_4437_, 1, v___x_4436_);
v___x_4438_ = lean_box(0);
v___x_4439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4437_);
lean_ctor_set(v___x_4439_, 1, v___x_4438_);
v___x_4440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4434_);
lean_ctor_set(v___x_4440_, 1, v___x_4439_);
v___x_4441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4428_);
lean_ctor_set(v___x_4441_, 1, v___x_4440_);
v___x_4442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4425_);
lean_ctor_set(v___x_4442_, 1, v___x_4441_);
v___x_4443_ = l_Lean_Json_mkObj(v___x_4442_);
lean_dec_ref_known(v___x_4442_, 2);
v___x_4444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4419_);
lean_ctor_set(v___x_4444_, 1, v___x_4443_);
v___x_4445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4445_, 0, v___x_4444_);
lean_ctor_set(v___x_4445_, 1, v___x_4438_);
v___x_4446_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4445_, v_snd_4415_);
lean_dec_ref_known(v___x_4445_, 2);
if (lean_obj_tag(v___x_4446_) == 0)
{
lean_object* v_a_4447_; lean_object* v_snd_4448_; 
v_a_4447_ = lean_ctor_get(v___x_4446_, 0);
lean_inc(v_a_4447_);
lean_dec_ref_known(v___x_4446_, 1);
v_snd_4448_ = lean_ctor_get(v_a_4447_, 1);
lean_inc(v_snd_4448_);
lean_dec(v_a_4447_);
v_as_x27_4329_ = v_tail_4337_;
v_b_4330_ = v___x_4338_;
v___y_4332_ = v_snd_4448_;
goto _start;
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4457_; 
v_a_4450_ = lean_ctor_get(v___x_4446_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4446_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4452_ = v___x_4446_;
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4446_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_4464_; lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4471_; 
lean_del_object(v___x_4410_);
lean_dec(v_fst_4407_);
lean_del_object(v___x_4403_);
lean_dec(v_fst_4400_);
lean_del_object(v___x_4376_);
lean_del_object(v___x_4372_);
v_a_4464_ = lean_ctor_get(v___x_4412_, 0);
v_isSharedCheck_4471_ = !lean_is_exclusive(v___x_4412_);
if (v_isSharedCheck_4471_ == 0)
{
v___x_4466_ = v___x_4412_;
v_isShared_4467_ = v_isSharedCheck_4471_;
goto v_resetjp_4465_;
}
else
{
lean_inc(v_a_4464_);
lean_dec(v___x_4412_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4471_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4469_; 
if (v_isShared_4467_ == 0)
{
v___x_4469_ = v___x_4466_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v_a_4464_);
v___x_4469_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
return v___x_4469_;
}
}
}
}
}
else
{
lean_object* v_a_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4480_; 
lean_del_object(v___x_4403_);
lean_dec(v_fst_4400_);
lean_dec_ref(v_type_4394_);
lean_del_object(v___x_4376_);
lean_del_object(v___x_4372_);
v_a_4473_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4480_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4475_ = v___x_4405_;
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_a_4473_);
lean_dec(v___x_4405_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
lean_object* v___x_4478_; 
if (v_isShared_4476_ == 0)
{
v___x_4478_ = v___x_4475_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_a_4473_);
v___x_4478_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
return v___x_4478_;
}
}
}
}
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
lean_dec_ref(v_type_4394_);
lean_dec(v_levelParams_4393_);
lean_del_object(v___x_4376_);
lean_del_object(v___x_4372_);
v_a_4482_ = lean_ctor_get(v___x_4398_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4398_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4398_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4398_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4372_);
lean_dec(v_val_4370_);
v___y_4340_ = v___y_4331_;
v___y_4341_ = v___y_4332_;
goto v___jp_4339_;
}
}
}
else
{
lean_dec(v___x_4369_);
v___y_4340_ = v___y_4331_;
v___y_4341_ = v___y_4332_;
goto v___jp_4339_;
}
v___jp_4339_:
{
uint8_t v_ignoreMissing_4342_; 
v_ignoreMissing_4342_ = lean_ctor_get_uint8(v___y_4341_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_4342_ == 0)
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; uint8_t v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; 
v___x_4343_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4344_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_4345_ = lean_unsigned_to_nat(313u);
v___x_4346_ = lean_unsigned_to_nat(52u);
v___x_4347_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_4348_ = 1;
lean_inc(v_head_4336_);
v___x_4349_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_4336_, v___x_4348_);
v___x_4350_ = lean_string_append(v___x_4347_, v___x_4349_);
lean_dec_ref(v___x_4349_);
v___x_4351_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_4352_ = lean_string_append(v___x_4350_, v___x_4351_);
v___x_4353_ = l_mkPanicMessageWithDecl(v___x_4343_, v___x_4344_, v___x_4345_, v___x_4346_, v___x_4352_);
lean_dec_ref(v___x_4352_);
v___x_4354_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_4353_, v___y_4340_, v___y_4341_);
if (lean_obj_tag(v___x_4354_) == 0)
{
lean_object* v_a_4355_; lean_object* v_snd_4356_; 
v_a_4355_ = lean_ctor_get(v___x_4354_, 0);
lean_inc(v_a_4355_);
lean_dec_ref_known(v___x_4354_, 1);
v_snd_4356_ = lean_ctor_get(v_a_4355_, 1);
lean_inc(v_snd_4356_);
lean_dec(v_a_4355_);
v_as_x27_4329_ = v_tail_4337_;
v_b_4330_ = v___x_4338_;
v___y_4332_ = v_snd_4356_;
goto _start;
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4365_; 
v_a_4358_ = lean_ctor_get(v___x_4354_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v___x_4354_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4360_ = v___x_4354_;
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v___x_4354_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
else
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v___x_4366_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4));
v___x_4367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4366_);
lean_ctor_set(v___x_4367_, 1, v___y_4341_);
v___x_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4367_);
return v___x_4368_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__21(void){
_start:
{
lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; 
v___x_4496_ = l_Lean_NameSet_empty;
v___x_4497_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4498_, 0, v___x_4497_);
lean_ctor_set(v___x_4498_, 1, v___x_4496_);
return v___x_4498_;
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__22(void){
_start:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v___x_4499_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__21, &l_LeanExport_dumpConstant___closed__21_once, _init_l_LeanExport_dumpConstant___closed__21);
v___x_4500_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4500_);
lean_ctor_set(v___x_4501_, 1, v___x_4499_);
return v___x_4501_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v___x_4503_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__0));
v___x_4504_ = lean_unsigned_to_nat(11u);
v___x_4505_ = lean_unsigned_to_nat(341u);
v___x_4506_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_4507_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4508_ = l_mkPanicMessageWithDecl(v___x_4507_, v___x_4506_, v___x_4505_, v___x_4504_, v___x_4503_);
return v___x_4508_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4510_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__2));
v___x_4511_ = lean_unsigned_to_nat(6u);
v___x_4512_ = lean_unsigned_to_nat(329u);
v___x_4513_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_4514_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4515_ = l_mkPanicMessageWithDecl(v___x_4514_, v___x_4513_, v___x_4512_, v___x_4511_, v___x_4510_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(uint8_t v___x_4516_, lean_object* v_val_4517_, lean_object* v_as_x27_4518_, lean_object* v_b_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
if (lean_obj_tag(v_as_x27_4518_) == 0)
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4523_, 0, v_b_4519_);
lean_ctor_set(v___x_4523_, 1, v___y_4521_);
v___x_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
return v___x_4524_;
}
else
{
lean_object* v_head_4525_; lean_object* v_tail_4526_; lean_object* v___y_4528_; lean_object* v_snd_4559_; lean_object* v_fst_4560_; lean_object* v_fst_4561_; lean_object* v_snd_4562_; lean_object* v___y_4564_; uint8_t v___y_4565_; lean_object* v___y_4645_; lean_object* v___x_4652_; 
v_head_4525_ = lean_ctor_get(v_as_x27_4518_, 0);
v_tail_4526_ = lean_ctor_get(v_as_x27_4518_, 1);
v_snd_4559_ = lean_ctor_get(v_b_4519_, 1);
lean_inc(v_snd_4559_);
v_fst_4560_ = lean_ctor_get(v_b_4519_, 0);
lean_inc(v_fst_4560_);
lean_dec_ref(v_b_4519_);
v_fst_4561_ = lean_ctor_get(v_snd_4559_, 0);
lean_inc(v_fst_4561_);
v_snd_4562_ = lean_ctor_get(v_snd_4559_, 1);
lean_inc(v_snd_4562_);
lean_dec(v_snd_4559_);
lean_inc(v_head_4525_);
lean_inc_ref(v___y_4520_);
v___x_4652_ = l_Lean_Environment_find_x3f(v___y_4520_, v_head_4525_, v___x_4516_);
if (lean_obj_tag(v___x_4652_) == 0)
{
lean_object* v___x_4653_; lean_object* v___x_4654_; 
v___x_4653_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8);
v___x_4654_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_4653_);
v___y_4645_ = v___x_4654_;
goto v___jp_4644_;
}
else
{
lean_object* v_val_4655_; 
v_val_4655_ = lean_ctor_get(v___x_4652_, 0);
lean_inc(v_val_4655_);
lean_dec_ref_known(v___x_4652_, 1);
v___y_4645_ = v_val_4655_;
goto v___jp_4644_;
}
v___jp_4527_:
{
if (lean_obj_tag(v___y_4528_) == 0)
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4550_; 
v_a_4529_ = lean_ctor_get(v___y_4528_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___y_4528_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4531_ = v___y_4528_;
v_isShared_4532_ = v_isSharedCheck_4550_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v___y_4528_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4550_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v_fst_4533_; 
v_fst_4533_ = lean_ctor_get(v_a_4529_, 0);
lean_inc(v_fst_4533_);
if (lean_obj_tag(v_fst_4533_) == 0)
{
lean_object* v_snd_4534_; lean_object* v___x_4536_; uint8_t v_isShared_4537_; uint8_t v_isSharedCheck_4545_; 
v_snd_4534_ = lean_ctor_get(v_a_4529_, 1);
v_isSharedCheck_4545_ = !lean_is_exclusive(v_a_4529_);
if (v_isSharedCheck_4545_ == 0)
{
lean_object* v_unused_4546_; 
v_unused_4546_ = lean_ctor_get(v_a_4529_, 0);
lean_dec(v_unused_4546_);
v___x_4536_ = v_a_4529_;
v_isShared_4537_ = v_isSharedCheck_4545_;
goto v_resetjp_4535_;
}
else
{
lean_inc(v_snd_4534_);
lean_dec(v_a_4529_);
v___x_4536_ = lean_box(0);
v_isShared_4537_ = v_isSharedCheck_4545_;
goto v_resetjp_4535_;
}
v_resetjp_4535_:
{
lean_object* v_a_4538_; lean_object* v___x_4540_; 
v_a_4538_ = lean_ctor_get(v_fst_4533_, 0);
lean_inc(v_a_4538_);
lean_dec_ref_known(v_fst_4533_, 1);
if (v_isShared_4537_ == 0)
{
lean_ctor_set(v___x_4536_, 0, v_a_4538_);
v___x_4540_ = v___x_4536_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v_a_4538_);
lean_ctor_set(v_reuseFailAlloc_4544_, 1, v_snd_4534_);
v___x_4540_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
lean_object* v___x_4542_; 
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 0, v___x_4540_);
v___x_4542_ = v___x_4531_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v___x_4540_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
return v___x_4542_;
}
}
}
}
else
{
lean_object* v_snd_4547_; lean_object* v_a_4548_; 
lean_del_object(v___x_4531_);
v_snd_4547_ = lean_ctor_get(v_a_4529_, 1);
lean_inc(v_snd_4547_);
lean_dec(v_a_4529_);
v_a_4548_ = lean_ctor_get(v_fst_4533_, 0);
lean_inc(v_a_4548_);
lean_dec_ref_known(v_fst_4533_, 1);
v_as_x27_4518_ = v_tail_4526_;
v_b_4519_ = v_a_4548_;
v___y_4521_ = v_snd_4547_;
goto _start;
}
}
}
else
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
v_a_4551_ = lean_ctor_get(v___y_4528_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___y_4528_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v___y_4528_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___y_4528_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
}
}
v___jp_4563_:
{
lean_object* v_toConstantVal_4566_; lean_object* v_ctors_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
v_toConstantVal_4566_ = lean_ctor_get(v___y_4564_, 0);
lean_inc_ref(v_toConstantVal_4566_);
v_ctors_4567_ = lean_ctor_get(v___y_4564_, 4);
lean_inc(v_ctors_4567_);
v___x_4568_ = lean_array_push(v_fst_4560_, v___y_4564_);
v___x_4569_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_4565_, v___x_4516_, v_ctors_4567_, v_fst_4561_, v___y_4520_, v___y_4521_);
lean_dec(v_ctors_4567_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v_snd_4571_; lean_object* v_fst_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4635_; 
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
lean_inc(v_a_4570_);
lean_dec_ref_known(v___x_4569_, 1);
v_snd_4571_ = lean_ctor_get(v_a_4570_, 1);
v_fst_4572_ = lean_ctor_get(v_a_4570_, 0);
v_isSharedCheck_4635_ = !lean_is_exclusive(v_a_4570_);
if (v_isSharedCheck_4635_ == 0)
{
v___x_4574_ = v_a_4570_;
v_isShared_4575_ = v_isSharedCheck_4635_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_snd_4571_);
lean_inc(v_fst_4572_);
lean_dec(v_a_4570_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4635_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v_visitedNames_4576_; lean_object* v_visitedLevels_4577_; lean_object* v_visitedExprs_4578_; lean_object* v_visitedConstants_4579_; lean_object* v_noMDataExprs_4580_; uint8_t v_exportMData_4581_; uint8_t v_exportUnsafe_4582_; uint8_t v_ignoreMissing_4583_; lean_object* v_recursorMap_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4634_; 
v_visitedNames_4576_ = lean_ctor_get(v_snd_4571_, 0);
v_visitedLevels_4577_ = lean_ctor_get(v_snd_4571_, 1);
v_visitedExprs_4578_ = lean_ctor_get(v_snd_4571_, 2);
v_visitedConstants_4579_ = lean_ctor_get(v_snd_4571_, 3);
v_noMDataExprs_4580_ = lean_ctor_get(v_snd_4571_, 4);
v_exportMData_4581_ = lean_ctor_get_uint8(v_snd_4571_, sizeof(void*)*6);
v_exportUnsafe_4582_ = lean_ctor_get_uint8(v_snd_4571_, sizeof(void*)*6 + 1);
v_ignoreMissing_4583_ = lean_ctor_get_uint8(v_snd_4571_, sizeof(void*)*6 + 2);
v_recursorMap_4584_ = lean_ctor_get(v_snd_4571_, 5);
v_isSharedCheck_4634_ = !lean_is_exclusive(v_snd_4571_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4586_ = v_snd_4571_;
v_isShared_4587_ = v_isSharedCheck_4634_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_recursorMap_4584_);
lean_inc(v_noMDataExprs_4580_);
lean_inc(v_visitedConstants_4579_);
lean_inc(v_visitedExprs_4578_);
lean_inc(v_visitedLevels_4577_);
lean_inc(v_visitedNames_4576_);
lean_dec(v_snd_4571_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4634_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v_type_4588_; lean_object* v___x_4589_; lean_object* v___x_4591_; 
v_type_4588_ = lean_ctor_get(v_toConstantVal_4566_, 2);
lean_inc_ref(v_type_4588_);
lean_dec_ref(v_toConstantVal_4566_);
lean_inc(v_head_4525_);
v___x_4589_ = l_Lean_NameHashSet_insert(v_visitedConstants_4579_, v_head_4525_);
if (v_isShared_4587_ == 0)
{
lean_ctor_set(v___x_4586_, 3, v___x_4589_);
v___x_4591_ = v___x_4586_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v_visitedNames_4576_);
lean_ctor_set(v_reuseFailAlloc_4633_, 1, v_visitedLevels_4577_);
lean_ctor_set(v_reuseFailAlloc_4633_, 2, v_visitedExprs_4578_);
lean_ctor_set(v_reuseFailAlloc_4633_, 3, v___x_4589_);
lean_ctor_set(v_reuseFailAlloc_4633_, 4, v_noMDataExprs_4580_);
lean_ctor_set(v_reuseFailAlloc_4633_, 5, v_recursorMap_4584_);
lean_ctor_set_uint8(v_reuseFailAlloc_4633_, sizeof(void*)*6, v_exportMData_4581_);
lean_ctor_set_uint8(v_reuseFailAlloc_4633_, sizeof(void*)*6 + 1, v_exportUnsafe_4582_);
lean_ctor_set_uint8(v_reuseFailAlloc_4633_, sizeof(void*)*6 + 2, v_ignoreMissing_4583_);
v___x_4591_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
lean_object* v___x_4592_; 
v___x_4592_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4588_, v___y_4520_, v___x_4591_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v_snd_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4623_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 0);
lean_inc(v_a_4593_);
lean_dec_ref_known(v___x_4592_, 1);
v_snd_4594_ = lean_ctor_get(v_a_4593_, 1);
v_isSharedCheck_4623_ = !lean_is_exclusive(v_a_4593_);
if (v_isSharedCheck_4623_ == 0)
{
lean_object* v_unused_4624_; 
v_unused_4624_ = lean_ctor_get(v_a_4593_, 0);
lean_dec(v_unused_4624_);
v___x_4596_ = v_a_4593_;
v_isShared_4597_ = v_isSharedCheck_4623_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_snd_4594_);
lean_dec(v_a_4593_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4623_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v_toConstantVal_4598_; lean_object* v_recursorMap_4599_; lean_object* v_name_4600_; lean_object* v___x_4601_; 
v_toConstantVal_4598_ = lean_ctor_get(v_val_4517_, 0);
v_recursorMap_4599_ = lean_ctor_get(v_snd_4594_, 5);
v_name_4600_ = lean_ctor_get(v_toConstantVal_4598_, 0);
v___x_4601_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_recursorMap_4599_, v_name_4600_);
if (lean_obj_tag(v___x_4601_) == 1)
{
lean_object* v_val_4602_; lean_object* v___x_4603_; lean_object* v___x_4605_; 
v_val_4602_ = lean_ctor_get(v___x_4601_, 0);
lean_inc(v_val_4602_);
lean_dec_ref_known(v___x_4601_, 1);
v___x_4603_ = l_Lean_NameSet_union(v_snd_4562_, v_val_4602_);
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 1, v___x_4603_);
lean_ctor_set(v___x_4596_, 0, v_fst_4572_);
v___x_4605_ = v___x_4596_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v_fst_4572_);
lean_ctor_set(v_reuseFailAlloc_4610_, 1, v___x_4603_);
v___x_4605_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
lean_object* v___x_4607_; 
if (v_isShared_4575_ == 0)
{
lean_ctor_set(v___x_4574_, 1, v___x_4605_);
lean_ctor_set(v___x_4574_, 0, v___x_4568_);
v___x_4607_ = v___x_4574_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4609_; 
v_reuseFailAlloc_4609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4609_, 0, v___x_4568_);
lean_ctor_set(v_reuseFailAlloc_4609_, 1, v___x_4605_);
v___x_4607_ = v_reuseFailAlloc_4609_;
goto v_reusejp_4606_;
}
v_reusejp_4606_:
{
v_as_x27_4518_ = v_tail_4526_;
v_b_4519_ = v___x_4607_;
v___y_4521_ = v_snd_4594_;
goto _start;
}
}
}
else
{
lean_object* v___x_4611_; lean_object* v___x_4612_; uint8_t v___x_4613_; 
lean_dec(v___x_4601_);
v___x_4611_ = lean_array_get_size(v_fst_4572_);
v___x_4612_ = lean_unsigned_to_nat(0u);
v___x_4613_ = lean_nat_dec_eq(v___x_4611_, v___x_4612_);
if (v___x_4613_ == 0)
{
lean_object* v___x_4614_; lean_object* v___x_4615_; 
lean_del_object(v___x_4596_);
lean_del_object(v___x_4574_);
lean_dec(v_fst_4572_);
lean_dec_ref(v___x_4568_);
lean_dec(v_snd_4562_);
v___x_4614_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1);
v___x_4615_ = l_panic___at___00LeanExport_dumpConstant_spec__10(v___x_4614_, v___y_4520_, v_snd_4594_);
v___y_4528_ = v___x_4615_;
goto v___jp_4527_;
}
else
{
lean_object* v___x_4617_; 
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 1, v_snd_4562_);
lean_ctor_set(v___x_4596_, 0, v_fst_4572_);
v___x_4617_ = v___x_4596_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v_fst_4572_);
lean_ctor_set(v_reuseFailAlloc_4622_, 1, v_snd_4562_);
v___x_4617_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
lean_object* v___x_4619_; 
if (v_isShared_4575_ == 0)
{
lean_ctor_set(v___x_4574_, 1, v___x_4617_);
lean_ctor_set(v___x_4574_, 0, v___x_4568_);
v___x_4619_ = v___x_4574_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v___x_4568_);
lean_ctor_set(v_reuseFailAlloc_4621_, 1, v___x_4617_);
v___x_4619_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
v_as_x27_4518_ = v_tail_4526_;
v_b_4519_ = v___x_4619_;
v___y_4521_ = v_snd_4594_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4632_; 
lean_del_object(v___x_4574_);
lean_dec(v_fst_4572_);
lean_dec_ref(v___x_4568_);
lean_dec(v_snd_4562_);
v_a_4625_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4627_ = v___x_4592_;
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_a_4625_);
lean_dec(v___x_4592_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v___x_4630_; 
if (v_isShared_4628_ == 0)
{
v___x_4630_ = v___x_4627_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v_a_4625_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4643_; 
lean_dec_ref(v___x_4568_);
lean_dec_ref(v_toConstantVal_4566_);
lean_dec(v_snd_4562_);
v_a_4636_ = lean_ctor_get(v___x_4569_, 0);
v_isSharedCheck_4643_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4643_ == 0)
{
v___x_4638_ = v___x_4569_;
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4569_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4643_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4641_; 
if (v_isShared_4639_ == 0)
{
v___x_4641_ = v___x_4638_;
goto v_reusejp_4640_;
}
else
{
lean_object* v_reuseFailAlloc_4642_; 
v_reuseFailAlloc_4642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4642_, 0, v_a_4636_);
v___x_4641_ = v_reuseFailAlloc_4642_;
goto v_reusejp_4640_;
}
v_reusejp_4640_:
{
return v___x_4641_;
}
}
}
}
v___jp_4644_:
{
lean_object* v___x_4646_; uint8_t v_isUnsafe_4647_; 
v___x_4646_ = l_Lean_ConstantInfo_inductiveVal_x21(v___y_4645_);
lean_dec_ref(v___y_4645_);
v_isUnsafe_4647_ = lean_ctor_get_uint8(v___x_4646_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4647_ == 0)
{
uint8_t v___x_4648_; 
v___x_4648_ = 1;
v___y_4564_ = v___x_4646_;
v___y_4565_ = v___x_4648_;
goto v___jp_4563_;
}
else
{
if (v___x_4516_ == 0)
{
uint8_t v_exportUnsafe_4649_; 
v_exportUnsafe_4649_ = lean_ctor_get_uint8(v___y_4521_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_4649_ == 0)
{
lean_object* v___x_4650_; lean_object* v___x_4651_; 
lean_dec_ref(v___x_4646_);
lean_dec(v_snd_4562_);
lean_dec(v_fst_4561_);
lean_dec(v_fst_4560_);
v___x_4650_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3);
v___x_4651_ = l_panic___at___00LeanExport_dumpConstant_spec__10(v___x_4650_, v___y_4520_, v___y_4521_);
v___y_4528_ = v___x_4651_;
goto v___jp_4527_;
}
else
{
v___y_4564_ = v___x_4646_;
v___y_4565_ = v_exportUnsafe_4649_;
goto v___jp_4563_;
}
}
else
{
v___y_4564_ = v___x_4646_;
v___y_4565_ = v___x_4516_;
goto v___jp_4563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(lean_object* v_as_4656_, size_t v_sz_4657_, size_t v_i_4658_, lean_object* v_b_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
uint8_t v___x_4663_; 
v___x_4663_ = lean_usize_dec_lt(v_i_4658_, v_sz_4657_);
if (v___x_4663_ == 0)
{
lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4664_, 0, v_b_4659_);
lean_ctor_set(v___x_4664_, 1, v___y_4661_);
v___x_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4665_, 0, v___x_4664_);
return v___x_4665_;
}
else
{
lean_object* v_visitedNames_4666_; lean_object* v_visitedLevels_4667_; lean_object* v_visitedExprs_4668_; lean_object* v_visitedConstants_4669_; lean_object* v_noMDataExprs_4670_; uint8_t v_exportMData_4671_; uint8_t v_exportUnsafe_4672_; uint8_t v_ignoreMissing_4673_; lean_object* v_recursorMap_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4693_; 
v_visitedNames_4666_ = lean_ctor_get(v___y_4661_, 0);
v_visitedLevels_4667_ = lean_ctor_get(v___y_4661_, 1);
v_visitedExprs_4668_ = lean_ctor_get(v___y_4661_, 2);
v_visitedConstants_4669_ = lean_ctor_get(v___y_4661_, 3);
v_noMDataExprs_4670_ = lean_ctor_get(v___y_4661_, 4);
v_exportMData_4671_ = lean_ctor_get_uint8(v___y_4661_, sizeof(void*)*6);
v_exportUnsafe_4672_ = lean_ctor_get_uint8(v___y_4661_, sizeof(void*)*6 + 1);
v_ignoreMissing_4673_ = lean_ctor_get_uint8(v___y_4661_, sizeof(void*)*6 + 2);
v_recursorMap_4674_ = lean_ctor_get(v___y_4661_, 5);
v_isSharedCheck_4693_ = !lean_is_exclusive(v___y_4661_);
if (v_isSharedCheck_4693_ == 0)
{
v___x_4676_ = v___y_4661_;
v_isShared_4677_ = v_isSharedCheck_4693_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_recursorMap_4674_);
lean_inc(v_noMDataExprs_4670_);
lean_inc(v_visitedConstants_4669_);
lean_inc(v_visitedExprs_4668_);
lean_inc(v_visitedLevels_4667_);
lean_inc(v_visitedNames_4666_);
lean_dec(v___y_4661_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4693_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v_a_4678_; lean_object* v_toConstantVal_4679_; lean_object* v_name_4680_; lean_object* v_type_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4685_; 
v_a_4678_ = lean_array_uget_borrowed(v_as_4656_, v_i_4658_);
v_toConstantVal_4679_ = lean_ctor_get(v_a_4678_, 0);
v_name_4680_ = lean_ctor_get(v_toConstantVal_4679_, 0);
v_type_4681_ = lean_ctor_get(v_toConstantVal_4679_, 2);
v___x_4682_ = lean_box(0);
lean_inc(v_name_4680_);
v___x_4683_ = l_Lean_NameHashSet_insert(v_visitedConstants_4669_, v_name_4680_);
if (v_isShared_4677_ == 0)
{
lean_ctor_set(v___x_4676_, 3, v___x_4683_);
v___x_4685_ = v___x_4676_;
goto v_reusejp_4684_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_visitedNames_4666_);
lean_ctor_set(v_reuseFailAlloc_4692_, 1, v_visitedLevels_4667_);
lean_ctor_set(v_reuseFailAlloc_4692_, 2, v_visitedExprs_4668_);
lean_ctor_set(v_reuseFailAlloc_4692_, 3, v___x_4683_);
lean_ctor_set(v_reuseFailAlloc_4692_, 4, v_noMDataExprs_4670_);
lean_ctor_set(v_reuseFailAlloc_4692_, 5, v_recursorMap_4674_);
lean_ctor_set_uint8(v_reuseFailAlloc_4692_, sizeof(void*)*6, v_exportMData_4671_);
lean_ctor_set_uint8(v_reuseFailAlloc_4692_, sizeof(void*)*6 + 1, v_exportUnsafe_4672_);
lean_ctor_set_uint8(v_reuseFailAlloc_4692_, sizeof(void*)*6 + 2, v_ignoreMissing_4673_);
v___x_4685_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4684_;
}
v_reusejp_4684_:
{
lean_object* v___x_4686_; 
lean_inc_ref(v_type_4681_);
v___x_4686_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4681_, v___y_4660_, v___x_4685_);
if (lean_obj_tag(v___x_4686_) == 0)
{
lean_object* v_a_4687_; lean_object* v_snd_4688_; size_t v___x_4689_; size_t v___x_4690_; 
v_a_4687_ = lean_ctor_get(v___x_4686_, 0);
lean_inc(v_a_4687_);
lean_dec_ref_known(v___x_4686_, 1);
v_snd_4688_ = lean_ctor_get(v_a_4687_, 1);
lean_inc(v_snd_4688_);
lean_dec(v_a_4687_);
v___x_4689_ = ((size_t)1ULL);
v___x_4690_ = lean_usize_add(v_i_4658_, v___x_4689_);
v_i_4658_ = v___x_4690_;
v_b_4659_ = v___x_4682_;
v___y_4661_ = v_snd_4688_;
goto _start;
}
else
{
return v___x_4686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(lean_object* v_as_x27_4694_, lean_object* v_b_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_){
_start:
{
if (lean_obj_tag(v_as_x27_4694_) == 0)
{
lean_object* v___x_4699_; lean_object* v___x_4700_; 
v___x_4699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4699_, 0, v_b_4695_);
lean_ctor_set(v___x_4699_, 1, v___y_4697_);
v___x_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4700_, 0, v___x_4699_);
return v___x_4700_;
}
else
{
lean_object* v_head_4701_; lean_object* v_tail_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
v_head_4701_ = lean_ctor_get(v_as_x27_4694_, 0);
v_tail_4702_ = lean_ctor_get(v_as_x27_4694_, 1);
v___x_4703_ = lean_box(0);
lean_inc(v_head_4701_);
v___x_4704_ = l_LeanExport_dumpConstant(v_head_4701_, v___y_4696_, v___y_4697_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; lean_object* v_snd_4706_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4705_);
lean_dec_ref_known(v___x_4704_, 1);
v_snd_4706_ = lean_ctor_get(v_a_4705_, 1);
lean_inc(v_snd_4706_);
lean_dec(v_a_4705_);
v_as_x27_4694_ = v_tail_4702_;
v_b_4695_ = v___x_4703_;
v___y_4697_ = v_snd_4706_;
goto _start;
}
else
{
return v___x_4704_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object* v_c_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v___y_4717_; lean_object* v___y_4718_; lean_object* v___y_4719_; lean_object* v_fst_4720_; lean_object* v_snd_4721_; uint8_t v___x_4818_; lean_object* v___x_4819_; 
v___x_4818_ = 0;
lean_inc(v_c_4708_);
lean_inc_ref(v___y_4709_);
v___x_4819_ = l_Lean_Environment_find_x3f(v___y_4709_, v_c_4708_, v___x_4818_);
if (lean_obj_tag(v___x_4819_) == 1)
{
lean_object* v_val_4820_; uint8_t v___y_5559_; uint8_t v___x_5560_; 
v_val_4820_ = lean_ctor_get(v___x_4819_, 0);
lean_inc(v_val_4820_);
lean_dec_ref_known(v___x_4819_, 1);
v___x_5560_ = l_Lean_ConstantInfo_isUnsafe(v_val_4820_);
if (v___x_5560_ == 0)
{
v___y_5559_ = v___x_5560_;
goto v___jp_5558_;
}
else
{
uint8_t v_exportUnsafe_5561_; 
v_exportUnsafe_5561_ = lean_ctor_get_uint8(v___y_4710_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_5561_ == 0)
{
v___y_5559_ = v___x_5560_;
goto v___jp_5558_;
}
else
{
goto v___jp_4821_;
}
}
v___jp_4821_:
{
lean_object* v_visitedNames_4822_; lean_object* v_visitedLevels_4823_; lean_object* v_visitedExprs_4824_; lean_object* v_visitedConstants_4825_; lean_object* v_noMDataExprs_4826_; uint8_t v_exportMData_4827_; uint8_t v_exportUnsafe_4828_; uint8_t v_ignoreMissing_4829_; lean_object* v_recursorMap_4830_; uint8_t v___x_4831_; 
v_visitedNames_4822_ = lean_ctor_get(v___y_4710_, 0);
v_visitedLevels_4823_ = lean_ctor_get(v___y_4710_, 1);
v_visitedExprs_4824_ = lean_ctor_get(v___y_4710_, 2);
v_visitedConstants_4825_ = lean_ctor_get(v___y_4710_, 3);
v_noMDataExprs_4826_ = lean_ctor_get(v___y_4710_, 4);
v_exportMData_4827_ = lean_ctor_get_uint8(v___y_4710_, sizeof(void*)*6);
v_exportUnsafe_4828_ = lean_ctor_get_uint8(v___y_4710_, sizeof(void*)*6 + 1);
v_ignoreMissing_4829_ = lean_ctor_get_uint8(v___y_4710_, sizeof(void*)*6 + 2);
v_recursorMap_4830_ = lean_ctor_get(v___y_4710_, 5);
v___x_4831_ = l_Lean_NameHashSet_contains(v_visitedConstants_4825_, v_c_4708_);
if (v___x_4831_ == 0)
{
lean_object* v___x_4833_; uint8_t v_isShared_4834_; uint8_t v_isSharedCheck_5551_; 
lean_inc(v_recursorMap_4830_);
lean_inc_ref(v_noMDataExprs_4826_);
lean_inc_ref(v_visitedConstants_4825_);
lean_inc_ref(v_visitedExprs_4824_);
lean_inc_ref(v_visitedLevels_4823_);
lean_inc_ref(v_visitedNames_4822_);
v_isSharedCheck_5551_ = !lean_is_exclusive(v___y_4710_);
if (v_isSharedCheck_5551_ == 0)
{
lean_object* v_unused_5552_; lean_object* v_unused_5553_; lean_object* v_unused_5554_; lean_object* v_unused_5555_; lean_object* v_unused_5556_; lean_object* v_unused_5557_; 
v_unused_5552_ = lean_ctor_get(v___y_4710_, 5);
lean_dec(v_unused_5552_);
v_unused_5553_ = lean_ctor_get(v___y_4710_, 4);
lean_dec(v_unused_5553_);
v_unused_5554_ = lean_ctor_get(v___y_4710_, 3);
lean_dec(v_unused_5554_);
v_unused_5555_ = lean_ctor_get(v___y_4710_, 2);
lean_dec(v_unused_5555_);
v_unused_5556_ = lean_ctor_get(v___y_4710_, 1);
lean_dec(v_unused_5556_);
v_unused_5557_ = lean_ctor_get(v___y_4710_, 0);
lean_dec(v_unused_5557_);
v___x_4833_ = v___y_4710_;
v_isShared_4834_ = v_isSharedCheck_5551_;
goto v_resetjp_4832_;
}
else
{
lean_dec(v___y_4710_);
v___x_4833_ = lean_box(0);
v_isShared_4834_ = v_isSharedCheck_5551_;
goto v_resetjp_4832_;
}
v_resetjp_4832_:
{
lean_object* v___x_4835_; lean_object* v___x_4837_; 
v___x_4835_ = l_Lean_NameHashSet_insert(v_visitedConstants_4825_, v_c_4708_);
if (v_isShared_4834_ == 0)
{
lean_ctor_set(v___x_4833_, 3, v___x_4835_);
v___x_4837_ = v___x_4833_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v_visitedNames_4822_);
lean_ctor_set(v_reuseFailAlloc_5550_, 1, v_visitedLevels_4823_);
lean_ctor_set(v_reuseFailAlloc_5550_, 2, v_visitedExprs_4824_);
lean_ctor_set(v_reuseFailAlloc_5550_, 3, v___x_4835_);
lean_ctor_set(v_reuseFailAlloc_5550_, 4, v_noMDataExprs_4826_);
lean_ctor_set(v_reuseFailAlloc_5550_, 5, v_recursorMap_4830_);
lean_ctor_set_uint8(v_reuseFailAlloc_5550_, sizeof(void*)*6, v_exportMData_4827_);
lean_ctor_set_uint8(v_reuseFailAlloc_5550_, sizeof(void*)*6 + 1, v_exportUnsafe_4828_);
lean_ctor_set_uint8(v_reuseFailAlloc_5550_, sizeof(void*)*6 + 2, v_ignoreMissing_4829_);
v___x_4837_ = v_reuseFailAlloc_5550_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
switch(lean_obj_tag(v_val_4820_))
{
case 0:
{
lean_object* v_val_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4942_; 
v_val_4838_ = lean_ctor_get(v_val_4820_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v_val_4820_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4840_ = v_val_4820_;
v_isShared_4841_ = v_isSharedCheck_4942_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_val_4838_);
lean_dec(v_val_4820_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4942_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v_toConstantVal_4842_; uint8_t v_isUnsafe_4843_; lean_object* v_name_4844_; lean_object* v_levelParams_4845_; lean_object* v_type_4846_; lean_object* v___x_4847_; 
v_toConstantVal_4842_ = lean_ctor_get(v_val_4838_, 0);
lean_inc_ref(v_toConstantVal_4842_);
v_isUnsafe_4843_ = lean_ctor_get_uint8(v_val_4838_, sizeof(void*)*1);
lean_dec_ref(v_val_4838_);
v_name_4844_ = lean_ctor_get(v_toConstantVal_4842_, 0);
lean_inc(v_name_4844_);
v_levelParams_4845_ = lean_ctor_get(v_toConstantVal_4842_, 1);
lean_inc(v_levelParams_4845_);
v_type_4846_ = lean_ctor_get(v_toConstantVal_4842_, 2);
lean_inc_ref_n(v_type_4846_, 2);
lean_dec_ref(v_toConstantVal_4842_);
v___x_4847_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4846_, v___y_4709_, v___x_4837_);
if (lean_obj_tag(v___x_4847_) == 0)
{
lean_object* v_a_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4941_; 
v_a_4848_ = lean_ctor_get(v___x_4847_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4847_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4850_ = v___x_4847_;
v_isShared_4851_ = v_isSharedCheck_4941_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_a_4848_);
lean_dec(v___x_4847_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4941_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
lean_object* v_snd_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4939_; 
v_snd_4852_ = lean_ctor_get(v_a_4848_, 1);
v_isSharedCheck_4939_ = !lean_is_exclusive(v_a_4848_);
if (v_isSharedCheck_4939_ == 0)
{
lean_object* v_unused_4940_; 
v_unused_4940_ = lean_ctor_get(v_a_4848_, 0);
lean_dec(v_unused_4940_);
v___x_4854_ = v_a_4848_;
v_isShared_4855_ = v_isSharedCheck_4939_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_snd_4852_);
lean_dec(v_a_4848_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4939_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4856_; 
v___x_4856_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4844_, v___y_4709_, v_snd_4852_);
if (lean_obj_tag(v___x_4856_) == 0)
{
lean_object* v_a_4857_; lean_object* v_fst_4858_; lean_object* v_snd_4859_; lean_object* v___x_4861_; uint8_t v_isShared_4862_; uint8_t v_isSharedCheck_4930_; 
v_a_4857_ = lean_ctor_get(v___x_4856_, 0);
lean_inc(v_a_4857_);
lean_dec_ref_known(v___x_4856_, 1);
v_fst_4858_ = lean_ctor_get(v_a_4857_, 0);
v_snd_4859_ = lean_ctor_get(v_a_4857_, 1);
v_isSharedCheck_4930_ = !lean_is_exclusive(v_a_4857_);
if (v_isSharedCheck_4930_ == 0)
{
v___x_4861_ = v_a_4857_;
v_isShared_4862_ = v_isSharedCheck_4930_;
goto v_resetjp_4860_;
}
else
{
lean_inc(v_snd_4859_);
lean_inc(v_fst_4858_);
lean_dec(v_a_4857_);
v___x_4861_ = lean_box(0);
v_isShared_4862_ = v_isSharedCheck_4930_;
goto v_resetjp_4860_;
}
v_resetjp_4860_:
{
lean_object* v___x_4863_; 
v___x_4863_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4845_, v___y_4709_, v_snd_4859_);
if (lean_obj_tag(v___x_4863_) == 0)
{
lean_object* v_a_4864_; lean_object* v_fst_4865_; lean_object* v_snd_4866_; lean_object* v___x_4868_; uint8_t v_isShared_4869_; uint8_t v_isSharedCheck_4921_; 
v_a_4864_ = lean_ctor_get(v___x_4863_, 0);
lean_inc(v_a_4864_);
lean_dec_ref_known(v___x_4863_, 1);
v_fst_4865_ = lean_ctor_get(v_a_4864_, 0);
v_snd_4866_ = lean_ctor_get(v_a_4864_, 1);
v_isSharedCheck_4921_ = !lean_is_exclusive(v_a_4864_);
if (v_isSharedCheck_4921_ == 0)
{
v___x_4868_ = v_a_4864_;
v_isShared_4869_ = v_isSharedCheck_4921_;
goto v_resetjp_4867_;
}
else
{
lean_inc(v_snd_4866_);
lean_inc(v_fst_4865_);
lean_dec(v_a_4864_);
v___x_4868_ = lean_box(0);
v_isShared_4869_ = v_isSharedCheck_4921_;
goto v_resetjp_4867_;
}
v_resetjp_4867_:
{
lean_object* v___x_4870_; 
v___x_4870_ = l_LeanExport_dumpExpr(v_type_4846_, v___y_4709_, v_snd_4866_);
if (lean_obj_tag(v___x_4870_) == 0)
{
lean_object* v_a_4871_; lean_object* v_fst_4872_; lean_object* v_snd_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4912_; 
v_a_4871_ = lean_ctor_get(v___x_4870_, 0);
lean_inc(v_a_4871_);
lean_dec_ref_known(v___x_4870_, 1);
v_fst_4872_ = lean_ctor_get(v_a_4871_, 0);
v_snd_4873_ = lean_ctor_get(v_a_4871_, 1);
v_isSharedCheck_4912_ = !lean_is_exclusive(v_a_4871_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_4875_ = v_a_4871_;
v_isShared_4876_ = v_isSharedCheck_4912_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_snd_4873_);
lean_inc(v_fst_4872_);
lean_dec(v_a_4871_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4912_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4881_; 
v___x_4877_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__3));
v___x_4878_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4879_ = l_Lean_JsonNumber_fromNat(v_fst_4858_);
if (v_isShared_4851_ == 0)
{
lean_ctor_set_tag(v___x_4850_, 2);
lean_ctor_set(v___x_4850_, 0, v___x_4879_);
v___x_4881_ = v___x_4850_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v___x_4879_);
v___x_4881_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
lean_object* v___x_4883_; 
if (v_isShared_4876_ == 0)
{
lean_ctor_set(v___x_4875_, 1, v___x_4881_);
lean_ctor_set(v___x_4875_, 0, v___x_4878_);
v___x_4883_ = v___x_4875_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4910_; 
v_reuseFailAlloc_4910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4910_, 0, v___x_4878_);
lean_ctor_set(v_reuseFailAlloc_4910_, 1, v___x_4881_);
v___x_4883_ = v_reuseFailAlloc_4910_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
lean_object* v___x_4884_; lean_object* v___x_4886_; 
v___x_4884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4869_ == 0)
{
lean_ctor_set(v___x_4868_, 1, v_fst_4865_);
lean_ctor_set(v___x_4868_, 0, v___x_4884_);
v___x_4886_ = v___x_4868_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v___x_4884_);
lean_ctor_set(v_reuseFailAlloc_4909_, 1, v_fst_4865_);
v___x_4886_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4890_; 
v___x_4887_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4888_ = l_Lean_JsonNumber_fromNat(v_fst_4872_);
if (v_isShared_4841_ == 0)
{
lean_ctor_set_tag(v___x_4840_, 2);
lean_ctor_set(v___x_4840_, 0, v___x_4888_);
v___x_4890_ = v___x_4840_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v___x_4888_);
v___x_4890_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
lean_object* v___x_4892_; 
if (v_isShared_4862_ == 0)
{
lean_ctor_set(v___x_4861_, 1, v___x_4890_);
lean_ctor_set(v___x_4861_, 0, v___x_4887_);
v___x_4892_ = v___x_4861_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v___x_4887_);
lean_ctor_set(v_reuseFailAlloc_4907_, 1, v___x_4890_);
v___x_4892_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4896_; 
v___x_4893_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_4894_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4894_, 0, v_isUnsafe_4843_);
if (v_isShared_4855_ == 0)
{
lean_ctor_set(v___x_4854_, 1, v___x_4894_);
lean_ctor_set(v___x_4854_, 0, v___x_4893_);
v___x_4896_ = v___x_4854_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4906_; 
v_reuseFailAlloc_4906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4906_, 0, v___x_4893_);
lean_ctor_set(v_reuseFailAlloc_4906_, 1, v___x_4894_);
v___x_4896_ = v_reuseFailAlloc_4906_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4897_ = lean_box(0);
v___x_4898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4898_, 0, v___x_4896_);
lean_ctor_set(v___x_4898_, 1, v___x_4897_);
v___x_4899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4892_);
lean_ctor_set(v___x_4899_, 1, v___x_4898_);
v___x_4900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4886_);
lean_ctor_set(v___x_4900_, 1, v___x_4899_);
v___x_4901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4883_);
lean_ctor_set(v___x_4901_, 1, v___x_4900_);
v___x_4902_ = l_Lean_Json_mkObj(v___x_4901_);
lean_dec_ref_known(v___x_4901_, 2);
v___x_4903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4903_, 0, v___x_4877_);
lean_ctor_set(v___x_4903_, 1, v___x_4902_);
v___x_4904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4903_);
lean_ctor_set(v___x_4904_, 1, v___x_4897_);
v___x_4905_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4904_, v_snd_4873_);
lean_dec_ref_known(v___x_4904_, 2);
return v___x_4905_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
lean_del_object(v___x_4868_);
lean_dec(v_fst_4865_);
lean_del_object(v___x_4861_);
lean_dec(v_fst_4858_);
lean_del_object(v___x_4854_);
lean_del_object(v___x_4850_);
lean_del_object(v___x_4840_);
v_a_4913_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4915_ = v___x_4870_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4870_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4913_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
}
}
else
{
lean_object* v_a_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4929_; 
lean_del_object(v___x_4861_);
lean_dec(v_fst_4858_);
lean_del_object(v___x_4854_);
lean_del_object(v___x_4850_);
lean_dec_ref(v_type_4846_);
lean_del_object(v___x_4840_);
v_a_4922_ = lean_ctor_get(v___x_4863_, 0);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4863_);
if (v_isSharedCheck_4929_ == 0)
{
v___x_4924_ = v___x_4863_;
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_a_4922_);
lean_dec(v___x_4863_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4927_; 
if (v_isShared_4925_ == 0)
{
v___x_4927_ = v___x_4924_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4922_);
v___x_4927_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
return v___x_4927_;
}
}
}
}
}
else
{
lean_object* v_a_4931_; lean_object* v___x_4933_; uint8_t v_isShared_4934_; uint8_t v_isSharedCheck_4938_; 
lean_del_object(v___x_4854_);
lean_del_object(v___x_4850_);
lean_dec_ref(v_type_4846_);
lean_dec(v_levelParams_4845_);
lean_del_object(v___x_4840_);
v_a_4931_ = lean_ctor_get(v___x_4856_, 0);
v_isSharedCheck_4938_ = !lean_is_exclusive(v___x_4856_);
if (v_isSharedCheck_4938_ == 0)
{
v___x_4933_ = v___x_4856_;
v_isShared_4934_ = v_isSharedCheck_4938_;
goto v_resetjp_4932_;
}
else
{
lean_inc(v_a_4931_);
lean_dec(v___x_4856_);
v___x_4933_ = lean_box(0);
v_isShared_4934_ = v_isSharedCheck_4938_;
goto v_resetjp_4932_;
}
v_resetjp_4932_:
{
lean_object* v___x_4936_; 
if (v_isShared_4934_ == 0)
{
v___x_4936_ = v___x_4933_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4937_; 
v_reuseFailAlloc_4937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4937_, 0, v_a_4931_);
v___x_4936_ = v_reuseFailAlloc_4937_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
return v___x_4936_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_type_4846_);
lean_dec(v_levelParams_4845_);
lean_dec(v_name_4844_);
lean_del_object(v___x_4840_);
return v___x_4847_;
}
}
}
case 1:
{
lean_object* v_val_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_5114_; 
v_val_4943_ = lean_ctor_get(v_val_4820_, 0);
v_isSharedCheck_5114_ = !lean_is_exclusive(v_val_4820_);
if (v_isSharedCheck_5114_ == 0)
{
v___x_4945_ = v_val_4820_;
v_isShared_4946_ = v_isSharedCheck_5114_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_val_4943_);
lean_dec(v_val_4820_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_5114_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v_toConstantVal_4947_; lean_object* v_value_4948_; lean_object* v_hints_4949_; uint8_t v_safety_4950_; lean_object* v_all_4951_; lean_object* v_name_4952_; lean_object* v_levelParams_4953_; lean_object* v_type_4954_; lean_object* v___x_4955_; 
v_toConstantVal_4947_ = lean_ctor_get(v_val_4943_, 0);
lean_inc_ref(v_toConstantVal_4947_);
v_value_4948_ = lean_ctor_get(v_val_4943_, 1);
lean_inc_ref(v_value_4948_);
v_hints_4949_ = lean_ctor_get(v_val_4943_, 2);
lean_inc(v_hints_4949_);
v_safety_4950_ = lean_ctor_get_uint8(v_val_4943_, sizeof(void*)*4);
v_all_4951_ = lean_ctor_get(v_val_4943_, 3);
lean_inc(v_all_4951_);
lean_dec_ref(v_val_4943_);
v_name_4952_ = lean_ctor_get(v_toConstantVal_4947_, 0);
lean_inc(v_name_4952_);
v_levelParams_4953_ = lean_ctor_get(v_toConstantVal_4947_, 1);
lean_inc(v_levelParams_4953_);
v_type_4954_ = lean_ctor_get(v_toConstantVal_4947_, 2);
lean_inc_ref_n(v_type_4954_, 2);
lean_dec_ref(v_toConstantVal_4947_);
v___x_4955_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4954_, v___y_4709_, v___x_4837_);
if (lean_obj_tag(v___x_4955_) == 0)
{
lean_object* v_a_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_5113_; 
v_a_4956_ = lean_ctor_get(v___x_4955_, 0);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_4955_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_4958_ = v___x_4955_;
v_isShared_4959_ = v_isSharedCheck_5113_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_a_4956_);
lean_dec(v___x_4955_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_5113_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v_snd_4960_; lean_object* v___x_4962_; uint8_t v_isShared_4963_; uint8_t v_isSharedCheck_5111_; 
v_snd_4960_ = lean_ctor_get(v_a_4956_, 1);
v_isSharedCheck_5111_ = !lean_is_exclusive(v_a_4956_);
if (v_isSharedCheck_5111_ == 0)
{
lean_object* v_unused_5112_; 
v_unused_5112_ = lean_ctor_get(v_a_4956_, 0);
lean_dec(v_unused_5112_);
v___x_4962_ = v_a_4956_;
v_isShared_4963_ = v_isSharedCheck_5111_;
goto v_resetjp_4961_;
}
else
{
lean_inc(v_snd_4960_);
lean_dec(v_a_4956_);
v___x_4962_ = lean_box(0);
v_isShared_4963_ = v_isSharedCheck_5111_;
goto v_resetjp_4961_;
}
v_resetjp_4961_:
{
lean_object* v___x_4964_; 
lean_inc_ref(v_value_4948_);
v___x_4964_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_4948_, v___y_4709_, v_snd_4960_);
if (lean_obj_tag(v___x_4964_) == 0)
{
lean_object* v_a_4965_; lean_object* v___x_4967_; uint8_t v_isShared_4968_; uint8_t v_isSharedCheck_5110_; 
v_a_4965_ = lean_ctor_get(v___x_4964_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_4967_ = v___x_4964_;
v_isShared_4968_ = v_isSharedCheck_5110_;
goto v_resetjp_4966_;
}
else
{
lean_inc(v_a_4965_);
lean_dec(v___x_4964_);
v___x_4967_ = lean_box(0);
v_isShared_4968_ = v_isSharedCheck_5110_;
goto v_resetjp_4966_;
}
v_resetjp_4966_:
{
lean_object* v_snd_4969_; lean_object* v___x_4971_; uint8_t v_isShared_4972_; uint8_t v_isSharedCheck_5108_; 
v_snd_4969_ = lean_ctor_get(v_a_4965_, 1);
v_isSharedCheck_5108_ = !lean_is_exclusive(v_a_4965_);
if (v_isSharedCheck_5108_ == 0)
{
lean_object* v_unused_5109_; 
v_unused_5109_ = lean_ctor_get(v_a_4965_, 0);
lean_dec(v_unused_5109_);
v___x_4971_ = v_a_4965_;
v_isShared_4972_ = v_isSharedCheck_5108_;
goto v_resetjp_4970_;
}
else
{
lean_inc(v_snd_4969_);
lean_dec(v_a_4965_);
v___x_4971_ = lean_box(0);
v_isShared_4972_ = v_isSharedCheck_5108_;
goto v_resetjp_4970_;
}
v_resetjp_4970_:
{
lean_object* v___x_4973_; 
v___x_4973_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4952_, v___y_4709_, v_snd_4969_);
if (lean_obj_tag(v___x_4973_) == 0)
{
lean_object* v_a_4974_; lean_object* v_fst_4975_; lean_object* v_snd_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_5099_; 
v_a_4974_ = lean_ctor_get(v___x_4973_, 0);
lean_inc(v_a_4974_);
lean_dec_ref_known(v___x_4973_, 1);
v_fst_4975_ = lean_ctor_get(v_a_4974_, 0);
v_snd_4976_ = lean_ctor_get(v_a_4974_, 1);
v_isSharedCheck_5099_ = !lean_is_exclusive(v_a_4974_);
if (v_isSharedCheck_5099_ == 0)
{
v___x_4978_ = v_a_4974_;
v_isShared_4979_ = v_isSharedCheck_5099_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_snd_4976_);
lean_inc(v_fst_4975_);
lean_dec(v_a_4974_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_5099_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v___x_4980_; 
v___x_4980_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4953_, v___y_4709_, v_snd_4976_);
if (lean_obj_tag(v___x_4980_) == 0)
{
lean_object* v_a_4981_; lean_object* v_fst_4982_; lean_object* v_snd_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_5090_; 
v_a_4981_ = lean_ctor_get(v___x_4980_, 0);
lean_inc(v_a_4981_);
lean_dec_ref_known(v___x_4980_, 1);
v_fst_4982_ = lean_ctor_get(v_a_4981_, 0);
v_snd_4983_ = lean_ctor_get(v_a_4981_, 1);
v_isSharedCheck_5090_ = !lean_is_exclusive(v_a_4981_);
if (v_isSharedCheck_5090_ == 0)
{
v___x_4985_ = v_a_4981_;
v_isShared_4986_ = v_isSharedCheck_5090_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_snd_4983_);
lean_inc(v_fst_4982_);
lean_dec(v_a_4981_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_5090_;
goto v_resetjp_4984_;
}
v_resetjp_4984_:
{
lean_object* v___x_4987_; 
v___x_4987_ = l_LeanExport_dumpExpr(v_type_4954_, v___y_4709_, v_snd_4983_);
if (lean_obj_tag(v___x_4987_) == 0)
{
lean_object* v_a_4988_; lean_object* v_fst_4989_; lean_object* v_snd_4990_; lean_object* v___x_4992_; uint8_t v_isShared_4993_; uint8_t v_isSharedCheck_5081_; 
v_a_4988_ = lean_ctor_get(v___x_4987_, 0);
lean_inc(v_a_4988_);
lean_dec_ref_known(v___x_4987_, 1);
v_fst_4989_ = lean_ctor_get(v_a_4988_, 0);
v_snd_4990_ = lean_ctor_get(v_a_4988_, 1);
v_isSharedCheck_5081_ = !lean_is_exclusive(v_a_4988_);
if (v_isSharedCheck_5081_ == 0)
{
v___x_4992_ = v_a_4988_;
v_isShared_4993_ = v_isSharedCheck_5081_;
goto v_resetjp_4991_;
}
else
{
lean_inc(v_snd_4990_);
lean_inc(v_fst_4989_);
lean_dec(v_a_4988_);
v___x_4992_ = lean_box(0);
v_isShared_4993_ = v_isSharedCheck_5081_;
goto v_resetjp_4991_;
}
v_resetjp_4991_:
{
lean_object* v___x_4994_; 
v___x_4994_ = l_LeanExport_dumpExpr(v_value_4948_, v___y_4709_, v_snd_4990_);
if (lean_obj_tag(v___x_4994_) == 0)
{
lean_object* v_a_4995_; lean_object* v_fst_4996_; lean_object* v_snd_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5072_; 
v_a_4995_ = lean_ctor_get(v___x_4994_, 0);
lean_inc(v_a_4995_);
lean_dec_ref_known(v___x_4994_, 1);
v_fst_4996_ = lean_ctor_get(v_a_4995_, 0);
v_snd_4997_ = lean_ctor_get(v_a_4995_, 1);
v_isSharedCheck_5072_ = !lean_is_exclusive(v_a_4995_);
if (v_isSharedCheck_5072_ == 0)
{
v___x_4999_ = v_a_4995_;
v_isShared_5000_ = v_isSharedCheck_5072_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_snd_4997_);
lean_inc(v_fst_4996_);
lean_dec(v_a_4995_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5072_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5001_; 
v___x_5001_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4951_, v___y_4709_, v_snd_4997_);
if (lean_obj_tag(v___x_5001_) == 0)
{
lean_object* v_a_5002_; lean_object* v_fst_5003_; lean_object* v_snd_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5063_; 
v_a_5002_ = lean_ctor_get(v___x_5001_, 0);
lean_inc(v_a_5002_);
lean_dec_ref_known(v___x_5001_, 1);
v_fst_5003_ = lean_ctor_get(v_a_5002_, 0);
v_snd_5004_ = lean_ctor_get(v_a_5002_, 1);
v_isSharedCheck_5063_ = !lean_is_exclusive(v_a_5002_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5006_ = v_a_5002_;
v_isShared_5007_ = v_isSharedCheck_5063_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_snd_5004_);
lean_inc(v_fst_5003_);
lean_dec(v_a_5002_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5063_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5012_; 
v___x_5008_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__4));
v___x_5009_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_5010_ = l_Lean_JsonNumber_fromNat(v_fst_4975_);
if (v_isShared_4968_ == 0)
{
lean_ctor_set_tag(v___x_4967_, 2);
lean_ctor_set(v___x_4967_, 0, v___x_5010_);
v___x_5012_ = v___x_4967_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v___x_5010_);
v___x_5012_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
lean_object* v___x_5014_; 
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 1, v___x_5012_);
lean_ctor_set(v___x_5006_, 0, v___x_5009_);
v___x_5014_ = v___x_5006_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5061_; 
v_reuseFailAlloc_5061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5061_, 0, v___x_5009_);
lean_ctor_set(v_reuseFailAlloc_5061_, 1, v___x_5012_);
v___x_5014_ = v_reuseFailAlloc_5061_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
lean_object* v___x_5015_; lean_object* v___x_5017_; 
v___x_5015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 1, v_fst_4982_);
lean_ctor_set(v___x_4999_, 0, v___x_5015_);
v___x_5017_ = v___x_4999_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5060_; 
v_reuseFailAlloc_5060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5060_, 0, v___x_5015_);
lean_ctor_set(v_reuseFailAlloc_5060_, 1, v_fst_4982_);
v___x_5017_ = v_reuseFailAlloc_5060_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5021_; 
v___x_5018_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5019_ = l_Lean_JsonNumber_fromNat(v_fst_4989_);
if (v_isShared_4959_ == 0)
{
lean_ctor_set_tag(v___x_4958_, 2);
lean_ctor_set(v___x_4958_, 0, v___x_5019_);
v___x_5021_ = v___x_4958_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5059_; 
v_reuseFailAlloc_5059_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5059_, 0, v___x_5019_);
v___x_5021_ = v_reuseFailAlloc_5059_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
lean_object* v___x_5023_; 
if (v_isShared_4993_ == 0)
{
lean_ctor_set(v___x_4992_, 1, v___x_5021_);
lean_ctor_set(v___x_4992_, 0, v___x_5018_);
v___x_5023_ = v___x_4992_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5058_; 
v_reuseFailAlloc_5058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5058_, 0, v___x_5018_);
lean_ctor_set(v_reuseFailAlloc_5058_, 1, v___x_5021_);
v___x_5023_ = v_reuseFailAlloc_5058_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5027_; 
v___x_5024_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5025_ = l_Lean_JsonNumber_fromNat(v_fst_4996_);
if (v_isShared_4946_ == 0)
{
lean_ctor_set_tag(v___x_4945_, 2);
lean_ctor_set(v___x_4945_, 0, v___x_5025_);
v___x_5027_ = v___x_4945_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v___x_5025_);
v___x_5027_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
lean_object* v___x_5029_; 
if (v_isShared_4986_ == 0)
{
lean_ctor_set(v___x_4985_, 1, v___x_5027_);
lean_ctor_set(v___x_4985_, 0, v___x_5024_);
v___x_5029_ = v___x_4985_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v___x_5024_);
lean_ctor_set(v_reuseFailAlloc_5056_, 1, v___x_5027_);
v___x_5029_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5033_; 
v___x_5030_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__5));
v___x_5031_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_hints_4949_);
lean_dec(v_hints_4949_);
if (v_isShared_4979_ == 0)
{
lean_ctor_set(v___x_4978_, 1, v___x_5031_);
lean_ctor_set(v___x_4978_, 0, v___x_5030_);
v___x_5033_ = v___x_4978_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v___x_5030_);
lean_ctor_set(v_reuseFailAlloc_5055_, 1, v___x_5031_);
v___x_5033_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5037_; 
v___x_5034_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__6));
v___x_5035_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_safety_4950_);
if (v_isShared_4972_ == 0)
{
lean_ctor_set(v___x_4971_, 1, v___x_5035_);
lean_ctor_set(v___x_4971_, 0, v___x_5034_);
v___x_5037_ = v___x_4971_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v___x_5034_);
lean_ctor_set(v_reuseFailAlloc_5054_, 1, v___x_5035_);
v___x_5037_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
lean_object* v___x_5038_; lean_object* v___x_5040_; 
v___x_5038_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_4963_ == 0)
{
lean_ctor_set(v___x_4962_, 1, v_fst_5003_);
lean_ctor_set(v___x_4962_, 0, v___x_5038_);
v___x_5040_ = v___x_4962_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5053_; 
v_reuseFailAlloc_5053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5053_, 0, v___x_5038_);
lean_ctor_set(v_reuseFailAlloc_5053_, 1, v_fst_5003_);
v___x_5040_ = v_reuseFailAlloc_5053_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; 
v___x_5041_ = lean_box(0);
v___x_5042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5040_);
lean_ctor_set(v___x_5042_, 1, v___x_5041_);
v___x_5043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5043_, 0, v___x_5037_);
lean_ctor_set(v___x_5043_, 1, v___x_5042_);
v___x_5044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5044_, 0, v___x_5033_);
lean_ctor_set(v___x_5044_, 1, v___x_5043_);
v___x_5045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5029_);
lean_ctor_set(v___x_5045_, 1, v___x_5044_);
v___x_5046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5023_);
lean_ctor_set(v___x_5046_, 1, v___x_5045_);
v___x_5047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5047_, 0, v___x_5017_);
lean_ctor_set(v___x_5047_, 1, v___x_5046_);
v___x_5048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5014_);
lean_ctor_set(v___x_5048_, 1, v___x_5047_);
v___x_5049_ = l_Lean_Json_mkObj(v___x_5048_);
lean_dec_ref_known(v___x_5048_, 2);
v___x_5050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5050_, 0, v___x_5008_);
lean_ctor_set(v___x_5050_, 1, v___x_5049_);
v___x_5051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5050_);
lean_ctor_set(v___x_5051_, 1, v___x_5041_);
v___x_5052_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5051_, v_snd_5004_);
lean_dec_ref_known(v___x_5051_, 2);
return v___x_5052_;
}
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5071_; 
lean_del_object(v___x_4999_);
lean_dec(v_fst_4996_);
lean_del_object(v___x_4992_);
lean_dec(v_fst_4989_);
lean_del_object(v___x_4985_);
lean_dec(v_fst_4982_);
lean_del_object(v___x_4978_);
lean_dec(v_fst_4975_);
lean_del_object(v___x_4971_);
lean_del_object(v___x_4967_);
lean_del_object(v___x_4962_);
lean_del_object(v___x_4958_);
lean_dec(v_hints_4949_);
lean_del_object(v___x_4945_);
v_a_5064_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5071_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5071_ == 0)
{
v___x_5066_ = v___x_5001_;
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5001_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___x_5069_; 
if (v_isShared_5067_ == 0)
{
v___x_5069_ = v___x_5066_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v_a_5064_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
return v___x_5069_;
}
}
}
}
}
else
{
lean_object* v_a_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5080_; 
lean_del_object(v___x_4992_);
lean_dec(v_fst_4989_);
lean_del_object(v___x_4985_);
lean_dec(v_fst_4982_);
lean_del_object(v___x_4978_);
lean_dec(v_fst_4975_);
lean_del_object(v___x_4971_);
lean_del_object(v___x_4967_);
lean_del_object(v___x_4962_);
lean_del_object(v___x_4958_);
lean_dec(v_all_4951_);
lean_dec(v_hints_4949_);
lean_del_object(v___x_4945_);
v_a_5073_ = lean_ctor_get(v___x_4994_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_4994_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5075_ = v___x_4994_;
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_a_5073_);
lean_dec(v___x_4994_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5078_; 
if (v_isShared_5076_ == 0)
{
v___x_5078_ = v___x_5075_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v_a_5073_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
return v___x_5078_;
}
}
}
}
}
else
{
lean_object* v_a_5082_; lean_object* v___x_5084_; uint8_t v_isShared_5085_; uint8_t v_isSharedCheck_5089_; 
lean_del_object(v___x_4985_);
lean_dec(v_fst_4982_);
lean_del_object(v___x_4978_);
lean_dec(v_fst_4975_);
lean_del_object(v___x_4971_);
lean_del_object(v___x_4967_);
lean_del_object(v___x_4962_);
lean_del_object(v___x_4958_);
lean_dec(v_all_4951_);
lean_dec(v_hints_4949_);
lean_dec_ref(v_value_4948_);
lean_del_object(v___x_4945_);
v_a_5082_ = lean_ctor_get(v___x_4987_, 0);
v_isSharedCheck_5089_ = !lean_is_exclusive(v___x_4987_);
if (v_isSharedCheck_5089_ == 0)
{
v___x_5084_ = v___x_4987_;
v_isShared_5085_ = v_isSharedCheck_5089_;
goto v_resetjp_5083_;
}
else
{
lean_inc(v_a_5082_);
lean_dec(v___x_4987_);
v___x_5084_ = lean_box(0);
v_isShared_5085_ = v_isSharedCheck_5089_;
goto v_resetjp_5083_;
}
v_resetjp_5083_:
{
lean_object* v___x_5087_; 
if (v_isShared_5085_ == 0)
{
v___x_5087_ = v___x_5084_;
goto v_reusejp_5086_;
}
else
{
lean_object* v_reuseFailAlloc_5088_; 
v_reuseFailAlloc_5088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5088_, 0, v_a_5082_);
v___x_5087_ = v_reuseFailAlloc_5088_;
goto v_reusejp_5086_;
}
v_reusejp_5086_:
{
return v___x_5087_;
}
}
}
}
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
lean_del_object(v___x_4978_);
lean_dec(v_fst_4975_);
lean_del_object(v___x_4971_);
lean_del_object(v___x_4967_);
lean_del_object(v___x_4962_);
lean_del_object(v___x_4958_);
lean_dec_ref(v_type_4954_);
lean_dec(v_all_4951_);
lean_dec(v_hints_4949_);
lean_dec_ref(v_value_4948_);
lean_del_object(v___x_4945_);
v_a_5091_ = lean_ctor_get(v___x_4980_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_4980_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v___x_4980_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_4980_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
}
else
{
lean_object* v_a_5100_; lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5107_; 
lean_del_object(v___x_4971_);
lean_del_object(v___x_4967_);
lean_del_object(v___x_4962_);
lean_del_object(v___x_4958_);
lean_dec_ref(v_type_4954_);
lean_dec(v_levelParams_4953_);
lean_dec(v_all_4951_);
lean_dec(v_hints_4949_);
lean_dec_ref(v_value_4948_);
lean_del_object(v___x_4945_);
v_a_5100_ = lean_ctor_get(v___x_4973_, 0);
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_4973_);
if (v_isSharedCheck_5107_ == 0)
{
v___x_5102_ = v___x_4973_;
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
else
{
lean_inc(v_a_5100_);
lean_dec(v___x_4973_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v___x_5105_; 
if (v_isShared_5103_ == 0)
{
v___x_5105_ = v___x_5102_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v_a_5100_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4962_);
lean_del_object(v___x_4958_);
lean_dec_ref(v_type_4954_);
lean_dec(v_levelParams_4953_);
lean_dec(v_name_4952_);
lean_dec(v_all_4951_);
lean_dec(v_hints_4949_);
lean_dec_ref(v_value_4948_);
lean_del_object(v___x_4945_);
return v___x_4964_;
}
}
}
}
else
{
lean_dec_ref(v_type_4954_);
lean_dec(v_levelParams_4953_);
lean_dec(v_name_4952_);
lean_dec(v_all_4951_);
lean_dec(v_hints_4949_);
lean_dec_ref(v_value_4948_);
lean_del_object(v___x_4945_);
return v___x_4955_;
}
}
}
case 2:
{
lean_object* v_val_5115_; lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5276_; 
v_val_5115_ = lean_ctor_get(v_val_4820_, 0);
v_isSharedCheck_5276_ = !lean_is_exclusive(v_val_4820_);
if (v_isSharedCheck_5276_ == 0)
{
v___x_5117_ = v_val_4820_;
v_isShared_5118_ = v_isSharedCheck_5276_;
goto v_resetjp_5116_;
}
else
{
lean_inc(v_val_5115_);
lean_dec(v_val_4820_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5276_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
lean_object* v_toConstantVal_5119_; lean_object* v_value_5120_; lean_object* v_all_5121_; lean_object* v_name_5122_; lean_object* v_levelParams_5123_; lean_object* v_type_5124_; lean_object* v___x_5125_; 
v_toConstantVal_5119_ = lean_ctor_get(v_val_5115_, 0);
lean_inc_ref(v_toConstantVal_5119_);
v_value_5120_ = lean_ctor_get(v_val_5115_, 1);
lean_inc_ref(v_value_5120_);
v_all_5121_ = lean_ctor_get(v_val_5115_, 2);
lean_inc(v_all_5121_);
lean_dec_ref(v_val_5115_);
v_name_5122_ = lean_ctor_get(v_toConstantVal_5119_, 0);
lean_inc(v_name_5122_);
v_levelParams_5123_ = lean_ctor_get(v_toConstantVal_5119_, 1);
lean_inc(v_levelParams_5123_);
v_type_5124_ = lean_ctor_get(v_toConstantVal_5119_, 2);
lean_inc_ref_n(v_type_5124_, 2);
lean_dec_ref(v_toConstantVal_5119_);
v___x_5125_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5124_, v___y_4709_, v___x_4837_);
if (lean_obj_tag(v___x_5125_) == 0)
{
lean_object* v_a_5126_; lean_object* v___x_5128_; uint8_t v_isShared_5129_; uint8_t v_isSharedCheck_5275_; 
v_a_5126_ = lean_ctor_get(v___x_5125_, 0);
v_isSharedCheck_5275_ = !lean_is_exclusive(v___x_5125_);
if (v_isSharedCheck_5275_ == 0)
{
v___x_5128_ = v___x_5125_;
v_isShared_5129_ = v_isSharedCheck_5275_;
goto v_resetjp_5127_;
}
else
{
lean_inc(v_a_5126_);
lean_dec(v___x_5125_);
v___x_5128_ = lean_box(0);
v_isShared_5129_ = v_isSharedCheck_5275_;
goto v_resetjp_5127_;
}
v_resetjp_5127_:
{
lean_object* v_snd_5130_; lean_object* v___x_5132_; uint8_t v_isShared_5133_; uint8_t v_isSharedCheck_5273_; 
v_snd_5130_ = lean_ctor_get(v_a_5126_, 1);
v_isSharedCheck_5273_ = !lean_is_exclusive(v_a_5126_);
if (v_isSharedCheck_5273_ == 0)
{
lean_object* v_unused_5274_; 
v_unused_5274_ = lean_ctor_get(v_a_5126_, 0);
lean_dec(v_unused_5274_);
v___x_5132_ = v_a_5126_;
v_isShared_5133_ = v_isSharedCheck_5273_;
goto v_resetjp_5131_;
}
else
{
lean_inc(v_snd_5130_);
lean_dec(v_a_5126_);
v___x_5132_ = lean_box(0);
v_isShared_5133_ = v_isSharedCheck_5273_;
goto v_resetjp_5131_;
}
v_resetjp_5131_:
{
lean_object* v___x_5134_; 
lean_inc_ref(v_value_5120_);
v___x_5134_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5120_, v___y_4709_, v_snd_5130_);
if (lean_obj_tag(v___x_5134_) == 0)
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5272_; 
v_a_5135_ = lean_ctor_get(v___x_5134_, 0);
v_isSharedCheck_5272_ = !lean_is_exclusive(v___x_5134_);
if (v_isSharedCheck_5272_ == 0)
{
v___x_5137_ = v___x_5134_;
v_isShared_5138_ = v_isSharedCheck_5272_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v___x_5134_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5272_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v_snd_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5270_; 
v_snd_5139_ = lean_ctor_get(v_a_5135_, 1);
v_isSharedCheck_5270_ = !lean_is_exclusive(v_a_5135_);
if (v_isSharedCheck_5270_ == 0)
{
lean_object* v_unused_5271_; 
v_unused_5271_ = lean_ctor_get(v_a_5135_, 0);
lean_dec(v_unused_5271_);
v___x_5141_ = v_a_5135_;
v_isShared_5142_ = v_isSharedCheck_5270_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_snd_5139_);
lean_dec(v_a_5135_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5270_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v___x_5143_; 
v___x_5143_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5122_, v___y_4709_, v_snd_5139_);
if (lean_obj_tag(v___x_5143_) == 0)
{
lean_object* v_a_5144_; lean_object* v_fst_5145_; lean_object* v_snd_5146_; lean_object* v___x_5148_; uint8_t v_isShared_5149_; uint8_t v_isSharedCheck_5261_; 
v_a_5144_ = lean_ctor_get(v___x_5143_, 0);
lean_inc(v_a_5144_);
lean_dec_ref_known(v___x_5143_, 1);
v_fst_5145_ = lean_ctor_get(v_a_5144_, 0);
v_snd_5146_ = lean_ctor_get(v_a_5144_, 1);
v_isSharedCheck_5261_ = !lean_is_exclusive(v_a_5144_);
if (v_isSharedCheck_5261_ == 0)
{
v___x_5148_ = v_a_5144_;
v_isShared_5149_ = v_isSharedCheck_5261_;
goto v_resetjp_5147_;
}
else
{
lean_inc(v_snd_5146_);
lean_inc(v_fst_5145_);
lean_dec(v_a_5144_);
v___x_5148_ = lean_box(0);
v_isShared_5149_ = v_isSharedCheck_5261_;
goto v_resetjp_5147_;
}
v_resetjp_5147_:
{
lean_object* v___x_5150_; 
v___x_5150_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5123_, v___y_4709_, v_snd_5146_);
if (lean_obj_tag(v___x_5150_) == 0)
{
lean_object* v_a_5151_; lean_object* v_fst_5152_; lean_object* v_snd_5153_; lean_object* v___x_5155_; uint8_t v_isShared_5156_; uint8_t v_isSharedCheck_5252_; 
v_a_5151_ = lean_ctor_get(v___x_5150_, 0);
lean_inc(v_a_5151_);
lean_dec_ref_known(v___x_5150_, 1);
v_fst_5152_ = lean_ctor_get(v_a_5151_, 0);
v_snd_5153_ = lean_ctor_get(v_a_5151_, 1);
v_isSharedCheck_5252_ = !lean_is_exclusive(v_a_5151_);
if (v_isSharedCheck_5252_ == 0)
{
v___x_5155_ = v_a_5151_;
v_isShared_5156_ = v_isSharedCheck_5252_;
goto v_resetjp_5154_;
}
else
{
lean_inc(v_snd_5153_);
lean_inc(v_fst_5152_);
lean_dec(v_a_5151_);
v___x_5155_ = lean_box(0);
v_isShared_5156_ = v_isSharedCheck_5252_;
goto v_resetjp_5154_;
}
v_resetjp_5154_:
{
lean_object* v___x_5157_; 
v___x_5157_ = l_LeanExport_dumpExpr(v_type_5124_, v___y_4709_, v_snd_5153_);
if (lean_obj_tag(v___x_5157_) == 0)
{
lean_object* v_a_5158_; lean_object* v_fst_5159_; lean_object* v_snd_5160_; lean_object* v___x_5162_; uint8_t v_isShared_5163_; uint8_t v_isSharedCheck_5243_; 
v_a_5158_ = lean_ctor_get(v___x_5157_, 0);
lean_inc(v_a_5158_);
lean_dec_ref_known(v___x_5157_, 1);
v_fst_5159_ = lean_ctor_get(v_a_5158_, 0);
v_snd_5160_ = lean_ctor_get(v_a_5158_, 1);
v_isSharedCheck_5243_ = !lean_is_exclusive(v_a_5158_);
if (v_isSharedCheck_5243_ == 0)
{
v___x_5162_ = v_a_5158_;
v_isShared_5163_ = v_isSharedCheck_5243_;
goto v_resetjp_5161_;
}
else
{
lean_inc(v_snd_5160_);
lean_inc(v_fst_5159_);
lean_dec(v_a_5158_);
v___x_5162_ = lean_box(0);
v_isShared_5163_ = v_isSharedCheck_5243_;
goto v_resetjp_5161_;
}
v_resetjp_5161_:
{
lean_object* v___x_5164_; 
v___x_5164_ = l_LeanExport_dumpExpr(v_value_5120_, v___y_4709_, v_snd_5160_);
if (lean_obj_tag(v___x_5164_) == 0)
{
lean_object* v_a_5165_; lean_object* v_fst_5166_; lean_object* v_snd_5167_; lean_object* v___x_5169_; uint8_t v_isShared_5170_; uint8_t v_isSharedCheck_5234_; 
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
lean_inc(v_a_5165_);
lean_dec_ref_known(v___x_5164_, 1);
v_fst_5166_ = lean_ctor_get(v_a_5165_, 0);
v_snd_5167_ = lean_ctor_get(v_a_5165_, 1);
v_isSharedCheck_5234_ = !lean_is_exclusive(v_a_5165_);
if (v_isSharedCheck_5234_ == 0)
{
v___x_5169_ = v_a_5165_;
v_isShared_5170_ = v_isSharedCheck_5234_;
goto v_resetjp_5168_;
}
else
{
lean_inc(v_snd_5167_);
lean_inc(v_fst_5166_);
lean_dec(v_a_5165_);
v___x_5169_ = lean_box(0);
v_isShared_5170_ = v_isSharedCheck_5234_;
goto v_resetjp_5168_;
}
v_resetjp_5168_:
{
lean_object* v___x_5171_; 
v___x_5171_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5121_, v___y_4709_, v_snd_5167_);
if (lean_obj_tag(v___x_5171_) == 0)
{
lean_object* v_a_5172_; lean_object* v_fst_5173_; lean_object* v_snd_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5225_; 
v_a_5172_ = lean_ctor_get(v___x_5171_, 0);
lean_inc(v_a_5172_);
lean_dec_ref_known(v___x_5171_, 1);
v_fst_5173_ = lean_ctor_get(v_a_5172_, 0);
v_snd_5174_ = lean_ctor_get(v_a_5172_, 1);
v_isSharedCheck_5225_ = !lean_is_exclusive(v_a_5172_);
if (v_isSharedCheck_5225_ == 0)
{
v___x_5176_ = v_a_5172_;
v_isShared_5177_ = v_isSharedCheck_5225_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_snd_5174_);
lean_inc(v_fst_5173_);
lean_dec(v_a_5172_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5225_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5182_; 
v___x_5178_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__7));
v___x_5179_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_5180_ = l_Lean_JsonNumber_fromNat(v_fst_5145_);
if (v_isShared_5138_ == 0)
{
lean_ctor_set_tag(v___x_5137_, 2);
lean_ctor_set(v___x_5137_, 0, v___x_5180_);
v___x_5182_ = v___x_5137_;
goto v_reusejp_5181_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v___x_5180_);
v___x_5182_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5181_;
}
v_reusejp_5181_:
{
lean_object* v___x_5184_; 
if (v_isShared_5177_ == 0)
{
lean_ctor_set(v___x_5176_, 1, v___x_5182_);
lean_ctor_set(v___x_5176_, 0, v___x_5179_);
v___x_5184_ = v___x_5176_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5223_; 
v_reuseFailAlloc_5223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5223_, 0, v___x_5179_);
lean_ctor_set(v_reuseFailAlloc_5223_, 1, v___x_5182_);
v___x_5184_ = v_reuseFailAlloc_5223_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
lean_object* v___x_5185_; lean_object* v___x_5187_; 
v___x_5185_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5170_ == 0)
{
lean_ctor_set(v___x_5169_, 1, v_fst_5152_);
lean_ctor_set(v___x_5169_, 0, v___x_5185_);
v___x_5187_ = v___x_5169_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v___x_5185_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v_fst_5152_);
v___x_5187_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5191_; 
v___x_5188_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5189_ = l_Lean_JsonNumber_fromNat(v_fst_5159_);
if (v_isShared_5129_ == 0)
{
lean_ctor_set_tag(v___x_5128_, 2);
lean_ctor_set(v___x_5128_, 0, v___x_5189_);
v___x_5191_ = v___x_5128_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v___x_5189_);
v___x_5191_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
lean_object* v___x_5193_; 
if (v_isShared_5163_ == 0)
{
lean_ctor_set(v___x_5162_, 1, v___x_5191_);
lean_ctor_set(v___x_5162_, 0, v___x_5188_);
v___x_5193_ = v___x_5162_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v___x_5188_);
lean_ctor_set(v_reuseFailAlloc_5220_, 1, v___x_5191_);
v___x_5193_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5197_; 
v___x_5194_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5195_ = l_Lean_JsonNumber_fromNat(v_fst_5166_);
if (v_isShared_5118_ == 0)
{
lean_ctor_set(v___x_5117_, 0, v___x_5195_);
v___x_5197_ = v___x_5117_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5219_; 
v_reuseFailAlloc_5219_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5219_, 0, v___x_5195_);
v___x_5197_ = v_reuseFailAlloc_5219_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
lean_object* v___x_5199_; 
if (v_isShared_5156_ == 0)
{
lean_ctor_set(v___x_5155_, 1, v___x_5197_);
lean_ctor_set(v___x_5155_, 0, v___x_5194_);
v___x_5199_ = v___x_5155_;
goto v_reusejp_5198_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v___x_5194_);
lean_ctor_set(v_reuseFailAlloc_5218_, 1, v___x_5197_);
v___x_5199_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5198_;
}
v_reusejp_5198_:
{
lean_object* v___x_5200_; lean_object* v___x_5202_; 
v___x_5200_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_5149_ == 0)
{
lean_ctor_set(v___x_5148_, 1, v_fst_5173_);
lean_ctor_set(v___x_5148_, 0, v___x_5200_);
v___x_5202_ = v___x_5148_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5217_; 
v_reuseFailAlloc_5217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5217_, 0, v___x_5200_);
lean_ctor_set(v_reuseFailAlloc_5217_, 1, v_fst_5173_);
v___x_5202_ = v_reuseFailAlloc_5217_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
lean_object* v___x_5203_; lean_object* v___x_5205_; 
v___x_5203_ = lean_box(0);
if (v_isShared_5133_ == 0)
{
lean_ctor_set_tag(v___x_5132_, 1);
lean_ctor_set(v___x_5132_, 1, v___x_5203_);
lean_ctor_set(v___x_5132_, 0, v___x_5202_);
v___x_5205_ = v___x_5132_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v___x_5202_);
lean_ctor_set(v_reuseFailAlloc_5216_, 1, v___x_5203_);
v___x_5205_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5212_; 
v___x_5206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5206_, 0, v___x_5199_);
lean_ctor_set(v___x_5206_, 1, v___x_5205_);
v___x_5207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5207_, 0, v___x_5193_);
lean_ctor_set(v___x_5207_, 1, v___x_5206_);
v___x_5208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5187_);
lean_ctor_set(v___x_5208_, 1, v___x_5207_);
v___x_5209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5209_, 0, v___x_5184_);
lean_ctor_set(v___x_5209_, 1, v___x_5208_);
v___x_5210_ = l_Lean_Json_mkObj(v___x_5209_);
lean_dec_ref_known(v___x_5209_, 2);
if (v_isShared_5142_ == 0)
{
lean_ctor_set(v___x_5141_, 1, v___x_5210_);
lean_ctor_set(v___x_5141_, 0, v___x_5178_);
v___x_5212_ = v___x_5141_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v___x_5178_);
lean_ctor_set(v_reuseFailAlloc_5215_, 1, v___x_5210_);
v___x_5212_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; 
v___x_5213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5212_);
lean_ctor_set(v___x_5213_, 1, v___x_5203_);
v___x_5214_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5213_, v_snd_5174_);
lean_dec_ref_known(v___x_5213_, 2);
return v___x_5214_;
}
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5233_; 
lean_del_object(v___x_5169_);
lean_dec(v_fst_5166_);
lean_del_object(v___x_5162_);
lean_dec(v_fst_5159_);
lean_del_object(v___x_5155_);
lean_dec(v_fst_5152_);
lean_del_object(v___x_5148_);
lean_dec(v_fst_5145_);
lean_del_object(v___x_5141_);
lean_del_object(v___x_5137_);
lean_del_object(v___x_5132_);
lean_del_object(v___x_5128_);
lean_del_object(v___x_5117_);
v_a_5226_ = lean_ctor_get(v___x_5171_, 0);
v_isSharedCheck_5233_ = !lean_is_exclusive(v___x_5171_);
if (v_isSharedCheck_5233_ == 0)
{
v___x_5228_ = v___x_5171_;
v_isShared_5229_ = v_isSharedCheck_5233_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_a_5226_);
lean_dec(v___x_5171_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5233_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___x_5231_; 
if (v_isShared_5229_ == 0)
{
v___x_5231_ = v___x_5228_;
goto v_reusejp_5230_;
}
else
{
lean_object* v_reuseFailAlloc_5232_; 
v_reuseFailAlloc_5232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5232_, 0, v_a_5226_);
v___x_5231_ = v_reuseFailAlloc_5232_;
goto v_reusejp_5230_;
}
v_reusejp_5230_:
{
return v___x_5231_;
}
}
}
}
}
else
{
lean_object* v_a_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5242_; 
lean_del_object(v___x_5162_);
lean_dec(v_fst_5159_);
lean_del_object(v___x_5155_);
lean_dec(v_fst_5152_);
lean_del_object(v___x_5148_);
lean_dec(v_fst_5145_);
lean_del_object(v___x_5141_);
lean_del_object(v___x_5137_);
lean_del_object(v___x_5132_);
lean_del_object(v___x_5128_);
lean_dec(v_all_5121_);
lean_del_object(v___x_5117_);
v_a_5235_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5237_ = v___x_5164_;
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_a_5235_);
lean_dec(v___x_5164_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5240_; 
if (v_isShared_5238_ == 0)
{
v___x_5240_ = v___x_5237_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_a_5235_);
v___x_5240_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
return v___x_5240_;
}
}
}
}
}
else
{
lean_object* v_a_5244_; lean_object* v___x_5246_; uint8_t v_isShared_5247_; uint8_t v_isSharedCheck_5251_; 
lean_del_object(v___x_5155_);
lean_dec(v_fst_5152_);
lean_del_object(v___x_5148_);
lean_dec(v_fst_5145_);
lean_del_object(v___x_5141_);
lean_del_object(v___x_5137_);
lean_del_object(v___x_5132_);
lean_del_object(v___x_5128_);
lean_dec(v_all_5121_);
lean_dec_ref(v_value_5120_);
lean_del_object(v___x_5117_);
v_a_5244_ = lean_ctor_get(v___x_5157_, 0);
v_isSharedCheck_5251_ = !lean_is_exclusive(v___x_5157_);
if (v_isSharedCheck_5251_ == 0)
{
v___x_5246_ = v___x_5157_;
v_isShared_5247_ = v_isSharedCheck_5251_;
goto v_resetjp_5245_;
}
else
{
lean_inc(v_a_5244_);
lean_dec(v___x_5157_);
v___x_5246_ = lean_box(0);
v_isShared_5247_ = v_isSharedCheck_5251_;
goto v_resetjp_5245_;
}
v_resetjp_5245_:
{
lean_object* v___x_5249_; 
if (v_isShared_5247_ == 0)
{
v___x_5249_ = v___x_5246_;
goto v_reusejp_5248_;
}
else
{
lean_object* v_reuseFailAlloc_5250_; 
v_reuseFailAlloc_5250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5250_, 0, v_a_5244_);
v___x_5249_ = v_reuseFailAlloc_5250_;
goto v_reusejp_5248_;
}
v_reusejp_5248_:
{
return v___x_5249_;
}
}
}
}
}
else
{
lean_object* v_a_5253_; lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5260_; 
lean_del_object(v___x_5148_);
lean_dec(v_fst_5145_);
lean_del_object(v___x_5141_);
lean_del_object(v___x_5137_);
lean_del_object(v___x_5132_);
lean_del_object(v___x_5128_);
lean_dec_ref(v_type_5124_);
lean_dec(v_all_5121_);
lean_dec_ref(v_value_5120_);
lean_del_object(v___x_5117_);
v_a_5253_ = lean_ctor_get(v___x_5150_, 0);
v_isSharedCheck_5260_ = !lean_is_exclusive(v___x_5150_);
if (v_isSharedCheck_5260_ == 0)
{
v___x_5255_ = v___x_5150_;
v_isShared_5256_ = v_isSharedCheck_5260_;
goto v_resetjp_5254_;
}
else
{
lean_inc(v_a_5253_);
lean_dec(v___x_5150_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5260_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
lean_object* v___x_5258_; 
if (v_isShared_5256_ == 0)
{
v___x_5258_ = v___x_5255_;
goto v_reusejp_5257_;
}
else
{
lean_object* v_reuseFailAlloc_5259_; 
v_reuseFailAlloc_5259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5259_, 0, v_a_5253_);
v___x_5258_ = v_reuseFailAlloc_5259_;
goto v_reusejp_5257_;
}
v_reusejp_5257_:
{
return v___x_5258_;
}
}
}
}
}
else
{
lean_object* v_a_5262_; lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5269_; 
lean_del_object(v___x_5141_);
lean_del_object(v___x_5137_);
lean_del_object(v___x_5132_);
lean_del_object(v___x_5128_);
lean_dec_ref(v_type_5124_);
lean_dec(v_levelParams_5123_);
lean_dec(v_all_5121_);
lean_dec_ref(v_value_5120_);
lean_del_object(v___x_5117_);
v_a_5262_ = lean_ctor_get(v___x_5143_, 0);
v_isSharedCheck_5269_ = !lean_is_exclusive(v___x_5143_);
if (v_isSharedCheck_5269_ == 0)
{
v___x_5264_ = v___x_5143_;
v_isShared_5265_ = v_isSharedCheck_5269_;
goto v_resetjp_5263_;
}
else
{
lean_inc(v_a_5262_);
lean_dec(v___x_5143_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5269_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5267_; 
if (v_isShared_5265_ == 0)
{
v___x_5267_ = v___x_5264_;
goto v_reusejp_5266_;
}
else
{
lean_object* v_reuseFailAlloc_5268_; 
v_reuseFailAlloc_5268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5268_, 0, v_a_5262_);
v___x_5267_ = v_reuseFailAlloc_5268_;
goto v_reusejp_5266_;
}
v_reusejp_5266_:
{
return v___x_5267_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5132_);
lean_del_object(v___x_5128_);
lean_dec_ref(v_type_5124_);
lean_dec(v_levelParams_5123_);
lean_dec(v_name_5122_);
lean_dec(v_all_5121_);
lean_dec_ref(v_value_5120_);
lean_del_object(v___x_5117_);
return v___x_5134_;
}
}
}
}
else
{
lean_dec_ref(v_type_5124_);
lean_dec(v_levelParams_5123_);
lean_dec(v_name_5122_);
lean_dec(v_all_5121_);
lean_dec_ref(v_value_5120_);
lean_del_object(v___x_5117_);
return v___x_5125_;
}
}
}
case 3:
{
lean_object* v_val_5277_; lean_object* v___x_5279_; uint8_t v_isShared_5280_; uint8_t v_isSharedCheck_5443_; 
v_val_5277_ = lean_ctor_get(v_val_4820_, 0);
v_isSharedCheck_5443_ = !lean_is_exclusive(v_val_4820_);
if (v_isSharedCheck_5443_ == 0)
{
v___x_5279_ = v_val_4820_;
v_isShared_5280_ = v_isSharedCheck_5443_;
goto v_resetjp_5278_;
}
else
{
lean_inc(v_val_5277_);
lean_dec(v_val_4820_);
v___x_5279_ = lean_box(0);
v_isShared_5280_ = v_isSharedCheck_5443_;
goto v_resetjp_5278_;
}
v_resetjp_5278_:
{
lean_object* v_toConstantVal_5281_; lean_object* v_value_5282_; uint8_t v_isUnsafe_5283_; lean_object* v_all_5284_; lean_object* v_name_5285_; lean_object* v_levelParams_5286_; lean_object* v_type_5287_; lean_object* v___x_5288_; 
v_toConstantVal_5281_ = lean_ctor_get(v_val_5277_, 0);
lean_inc_ref(v_toConstantVal_5281_);
v_value_5282_ = lean_ctor_get(v_val_5277_, 1);
lean_inc_ref(v_value_5282_);
v_isUnsafe_5283_ = lean_ctor_get_uint8(v_val_5277_, sizeof(void*)*3);
v_all_5284_ = lean_ctor_get(v_val_5277_, 2);
lean_inc(v_all_5284_);
lean_dec_ref(v_val_5277_);
v_name_5285_ = lean_ctor_get(v_toConstantVal_5281_, 0);
lean_inc(v_name_5285_);
v_levelParams_5286_ = lean_ctor_get(v_toConstantVal_5281_, 1);
lean_inc(v_levelParams_5286_);
v_type_5287_ = lean_ctor_get(v_toConstantVal_5281_, 2);
lean_inc_ref_n(v_type_5287_, 2);
lean_dec_ref(v_toConstantVal_5281_);
v___x_5288_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5287_, v___y_4709_, v___x_4837_);
if (lean_obj_tag(v___x_5288_) == 0)
{
lean_object* v_a_5289_; lean_object* v___x_5291_; uint8_t v_isShared_5292_; uint8_t v_isSharedCheck_5442_; 
v_a_5289_ = lean_ctor_get(v___x_5288_, 0);
v_isSharedCheck_5442_ = !lean_is_exclusive(v___x_5288_);
if (v_isSharedCheck_5442_ == 0)
{
v___x_5291_ = v___x_5288_;
v_isShared_5292_ = v_isSharedCheck_5442_;
goto v_resetjp_5290_;
}
else
{
lean_inc(v_a_5289_);
lean_dec(v___x_5288_);
v___x_5291_ = lean_box(0);
v_isShared_5292_ = v_isSharedCheck_5442_;
goto v_resetjp_5290_;
}
v_resetjp_5290_:
{
lean_object* v_snd_5293_; lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5440_; 
v_snd_5293_ = lean_ctor_get(v_a_5289_, 1);
v_isSharedCheck_5440_ = !lean_is_exclusive(v_a_5289_);
if (v_isSharedCheck_5440_ == 0)
{
lean_object* v_unused_5441_; 
v_unused_5441_ = lean_ctor_get(v_a_5289_, 0);
lean_dec(v_unused_5441_);
v___x_5295_ = v_a_5289_;
v_isShared_5296_ = v_isSharedCheck_5440_;
goto v_resetjp_5294_;
}
else
{
lean_inc(v_snd_5293_);
lean_dec(v_a_5289_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5440_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v___x_5297_; 
lean_inc_ref(v_value_5282_);
v___x_5297_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5282_, v___y_4709_, v_snd_5293_);
if (lean_obj_tag(v___x_5297_) == 0)
{
lean_object* v_a_5298_; lean_object* v___x_5300_; uint8_t v_isShared_5301_; uint8_t v_isSharedCheck_5439_; 
v_a_5298_ = lean_ctor_get(v___x_5297_, 0);
v_isSharedCheck_5439_ = !lean_is_exclusive(v___x_5297_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5300_ = v___x_5297_;
v_isShared_5301_ = v_isSharedCheck_5439_;
goto v_resetjp_5299_;
}
else
{
lean_inc(v_a_5298_);
lean_dec(v___x_5297_);
v___x_5300_ = lean_box(0);
v_isShared_5301_ = v_isSharedCheck_5439_;
goto v_resetjp_5299_;
}
v_resetjp_5299_:
{
lean_object* v_snd_5302_; lean_object* v___x_5304_; uint8_t v_isShared_5305_; uint8_t v_isSharedCheck_5437_; 
v_snd_5302_ = lean_ctor_get(v_a_5298_, 1);
v_isSharedCheck_5437_ = !lean_is_exclusive(v_a_5298_);
if (v_isSharedCheck_5437_ == 0)
{
lean_object* v_unused_5438_; 
v_unused_5438_ = lean_ctor_get(v_a_5298_, 0);
lean_dec(v_unused_5438_);
v___x_5304_ = v_a_5298_;
v_isShared_5305_ = v_isSharedCheck_5437_;
goto v_resetjp_5303_;
}
else
{
lean_inc(v_snd_5302_);
lean_dec(v_a_5298_);
v___x_5304_ = lean_box(0);
v_isShared_5305_ = v_isSharedCheck_5437_;
goto v_resetjp_5303_;
}
v_resetjp_5303_:
{
lean_object* v___x_5306_; 
v___x_5306_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5285_, v___y_4709_, v_snd_5302_);
if (lean_obj_tag(v___x_5306_) == 0)
{
lean_object* v_a_5307_; lean_object* v_fst_5308_; lean_object* v_snd_5309_; lean_object* v___x_5311_; uint8_t v_isShared_5312_; uint8_t v_isSharedCheck_5428_; 
v_a_5307_ = lean_ctor_get(v___x_5306_, 0);
lean_inc(v_a_5307_);
lean_dec_ref_known(v___x_5306_, 1);
v_fst_5308_ = lean_ctor_get(v_a_5307_, 0);
v_snd_5309_ = lean_ctor_get(v_a_5307_, 1);
v_isSharedCheck_5428_ = !lean_is_exclusive(v_a_5307_);
if (v_isSharedCheck_5428_ == 0)
{
v___x_5311_ = v_a_5307_;
v_isShared_5312_ = v_isSharedCheck_5428_;
goto v_resetjp_5310_;
}
else
{
lean_inc(v_snd_5309_);
lean_inc(v_fst_5308_);
lean_dec(v_a_5307_);
v___x_5311_ = lean_box(0);
v_isShared_5312_ = v_isSharedCheck_5428_;
goto v_resetjp_5310_;
}
v_resetjp_5310_:
{
lean_object* v___x_5313_; 
v___x_5313_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5286_, v___y_4709_, v_snd_5309_);
if (lean_obj_tag(v___x_5313_) == 0)
{
lean_object* v_a_5314_; lean_object* v_fst_5315_; lean_object* v_snd_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5419_; 
v_a_5314_ = lean_ctor_get(v___x_5313_, 0);
lean_inc(v_a_5314_);
lean_dec_ref_known(v___x_5313_, 1);
v_fst_5315_ = lean_ctor_get(v_a_5314_, 0);
v_snd_5316_ = lean_ctor_get(v_a_5314_, 1);
v_isSharedCheck_5419_ = !lean_is_exclusive(v_a_5314_);
if (v_isSharedCheck_5419_ == 0)
{
v___x_5318_ = v_a_5314_;
v_isShared_5319_ = v_isSharedCheck_5419_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_snd_5316_);
lean_inc(v_fst_5315_);
lean_dec(v_a_5314_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5419_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5320_; 
v___x_5320_ = l_LeanExport_dumpExpr(v_type_5287_, v___y_4709_, v_snd_5316_);
if (lean_obj_tag(v___x_5320_) == 0)
{
lean_object* v_a_5321_; lean_object* v_fst_5322_; lean_object* v_snd_5323_; lean_object* v___x_5325_; uint8_t v_isShared_5326_; uint8_t v_isSharedCheck_5410_; 
v_a_5321_ = lean_ctor_get(v___x_5320_, 0);
lean_inc(v_a_5321_);
lean_dec_ref_known(v___x_5320_, 1);
v_fst_5322_ = lean_ctor_get(v_a_5321_, 0);
v_snd_5323_ = lean_ctor_get(v_a_5321_, 1);
v_isSharedCheck_5410_ = !lean_is_exclusive(v_a_5321_);
if (v_isSharedCheck_5410_ == 0)
{
v___x_5325_ = v_a_5321_;
v_isShared_5326_ = v_isSharedCheck_5410_;
goto v_resetjp_5324_;
}
else
{
lean_inc(v_snd_5323_);
lean_inc(v_fst_5322_);
lean_dec(v_a_5321_);
v___x_5325_ = lean_box(0);
v_isShared_5326_ = v_isSharedCheck_5410_;
goto v_resetjp_5324_;
}
v_resetjp_5324_:
{
lean_object* v___x_5327_; 
v___x_5327_ = l_LeanExport_dumpExpr(v_value_5282_, v___y_4709_, v_snd_5323_);
if (lean_obj_tag(v___x_5327_) == 0)
{
lean_object* v_a_5328_; lean_object* v_fst_5329_; lean_object* v_snd_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5401_; 
v_a_5328_ = lean_ctor_get(v___x_5327_, 0);
lean_inc(v_a_5328_);
lean_dec_ref_known(v___x_5327_, 1);
v_fst_5329_ = lean_ctor_get(v_a_5328_, 0);
v_snd_5330_ = lean_ctor_get(v_a_5328_, 1);
v_isSharedCheck_5401_ = !lean_is_exclusive(v_a_5328_);
if (v_isSharedCheck_5401_ == 0)
{
v___x_5332_ = v_a_5328_;
v_isShared_5333_ = v_isSharedCheck_5401_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_snd_5330_);
lean_inc(v_fst_5329_);
lean_dec(v_a_5328_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5401_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5334_; 
v___x_5334_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5284_, v___y_4709_, v_snd_5330_);
if (lean_obj_tag(v___x_5334_) == 0)
{
lean_object* v_a_5335_; lean_object* v_fst_5336_; lean_object* v_snd_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5392_; 
v_a_5335_ = lean_ctor_get(v___x_5334_, 0);
lean_inc(v_a_5335_);
lean_dec_ref_known(v___x_5334_, 1);
v_fst_5336_ = lean_ctor_get(v_a_5335_, 0);
v_snd_5337_ = lean_ctor_get(v_a_5335_, 1);
v_isSharedCheck_5392_ = !lean_is_exclusive(v_a_5335_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5339_ = v_a_5335_;
v_isShared_5340_ = v_isSharedCheck_5392_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_snd_5337_);
lean_inc(v_fst_5336_);
lean_dec(v_a_5335_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5392_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5345_; 
v___x_5341_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0));
v___x_5342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_5343_ = l_Lean_JsonNumber_fromNat(v_fst_5308_);
if (v_isShared_5301_ == 0)
{
lean_ctor_set_tag(v___x_5300_, 2);
lean_ctor_set(v___x_5300_, 0, v___x_5343_);
v___x_5345_ = v___x_5300_;
goto v_reusejp_5344_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v___x_5343_);
v___x_5345_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5344_;
}
v_reusejp_5344_:
{
lean_object* v___x_5347_; 
if (v_isShared_5340_ == 0)
{
lean_ctor_set(v___x_5339_, 1, v___x_5345_);
lean_ctor_set(v___x_5339_, 0, v___x_5342_);
v___x_5347_ = v___x_5339_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5390_; 
v_reuseFailAlloc_5390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5390_, 0, v___x_5342_);
lean_ctor_set(v_reuseFailAlloc_5390_, 1, v___x_5345_);
v___x_5347_ = v_reuseFailAlloc_5390_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
lean_object* v___x_5348_; lean_object* v___x_5350_; 
v___x_5348_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5333_ == 0)
{
lean_ctor_set(v___x_5332_, 1, v_fst_5315_);
lean_ctor_set(v___x_5332_, 0, v___x_5348_);
v___x_5350_ = v___x_5332_;
goto v_reusejp_5349_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v___x_5348_);
lean_ctor_set(v_reuseFailAlloc_5389_, 1, v_fst_5315_);
v___x_5350_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5349_;
}
v_reusejp_5349_:
{
lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5354_; 
v___x_5351_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5352_ = l_Lean_JsonNumber_fromNat(v_fst_5322_);
if (v_isShared_5292_ == 0)
{
lean_ctor_set_tag(v___x_5291_, 2);
lean_ctor_set(v___x_5291_, 0, v___x_5352_);
v___x_5354_ = v___x_5291_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v___x_5352_);
v___x_5354_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
lean_object* v___x_5356_; 
if (v_isShared_5326_ == 0)
{
lean_ctor_set(v___x_5325_, 1, v___x_5354_);
lean_ctor_set(v___x_5325_, 0, v___x_5351_);
v___x_5356_ = v___x_5325_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5387_; 
v_reuseFailAlloc_5387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5387_, 0, v___x_5351_);
lean_ctor_set(v_reuseFailAlloc_5387_, 1, v___x_5354_);
v___x_5356_ = v_reuseFailAlloc_5387_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5360_; 
v___x_5357_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5358_ = l_Lean_JsonNumber_fromNat(v_fst_5329_);
if (v_isShared_5280_ == 0)
{
lean_ctor_set_tag(v___x_5279_, 2);
lean_ctor_set(v___x_5279_, 0, v___x_5358_);
v___x_5360_ = v___x_5279_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5386_; 
v_reuseFailAlloc_5386_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5386_, 0, v___x_5358_);
v___x_5360_ = v_reuseFailAlloc_5386_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
lean_object* v___x_5362_; 
if (v_isShared_5319_ == 0)
{
lean_ctor_set(v___x_5318_, 1, v___x_5360_);
lean_ctor_set(v___x_5318_, 0, v___x_5357_);
v___x_5362_ = v___x_5318_;
goto v_reusejp_5361_;
}
else
{
lean_object* v_reuseFailAlloc_5385_; 
v_reuseFailAlloc_5385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5385_, 0, v___x_5357_);
lean_ctor_set(v_reuseFailAlloc_5385_, 1, v___x_5360_);
v___x_5362_ = v_reuseFailAlloc_5385_;
goto v_reusejp_5361_;
}
v_reusejp_5361_:
{
lean_object* v___x_5363_; lean_object* v___x_5365_; 
v___x_5363_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_5312_ == 0)
{
lean_ctor_set(v___x_5311_, 1, v_fst_5336_);
lean_ctor_set(v___x_5311_, 0, v___x_5363_);
v___x_5365_ = v___x_5311_;
goto v_reusejp_5364_;
}
else
{
lean_object* v_reuseFailAlloc_5384_; 
v_reuseFailAlloc_5384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5384_, 0, v___x_5363_);
lean_ctor_set(v_reuseFailAlloc_5384_, 1, v_fst_5336_);
v___x_5365_ = v_reuseFailAlloc_5384_;
goto v_reusejp_5364_;
}
v_reusejp_5364_:
{
lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5369_; 
v___x_5366_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_5367_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5367_, 0, v_isUnsafe_5283_);
if (v_isShared_5305_ == 0)
{
lean_ctor_set(v___x_5304_, 1, v___x_5367_);
lean_ctor_set(v___x_5304_, 0, v___x_5366_);
v___x_5369_ = v___x_5304_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v___x_5366_);
lean_ctor_set(v_reuseFailAlloc_5383_, 1, v___x_5367_);
v___x_5369_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5379_; 
v___x_5370_ = lean_box(0);
v___x_5371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5371_, 0, v___x_5369_);
lean_ctor_set(v___x_5371_, 1, v___x_5370_);
v___x_5372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5372_, 0, v___x_5365_);
lean_ctor_set(v___x_5372_, 1, v___x_5371_);
v___x_5373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5373_, 0, v___x_5362_);
lean_ctor_set(v___x_5373_, 1, v___x_5372_);
v___x_5374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5374_, 0, v___x_5356_);
lean_ctor_set(v___x_5374_, 1, v___x_5373_);
v___x_5375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5350_);
lean_ctor_set(v___x_5375_, 1, v___x_5374_);
v___x_5376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5376_, 0, v___x_5347_);
lean_ctor_set(v___x_5376_, 1, v___x_5375_);
v___x_5377_ = l_Lean_Json_mkObj(v___x_5376_);
lean_dec_ref_known(v___x_5376_, 2);
if (v_isShared_5296_ == 0)
{
lean_ctor_set(v___x_5295_, 1, v___x_5377_);
lean_ctor_set(v___x_5295_, 0, v___x_5341_);
v___x_5379_ = v___x_5295_;
goto v_reusejp_5378_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v___x_5341_);
lean_ctor_set(v_reuseFailAlloc_5382_, 1, v___x_5377_);
v___x_5379_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5378_;
}
v_reusejp_5378_:
{
lean_object* v___x_5380_; lean_object* v___x_5381_; 
v___x_5380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5380_, 0, v___x_5379_);
lean_ctor_set(v___x_5380_, 1, v___x_5370_);
v___x_5381_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5380_, v_snd_5337_);
lean_dec_ref_known(v___x_5380_, 2);
return v___x_5381_;
}
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_5393_; lean_object* v___x_5395_; uint8_t v_isShared_5396_; uint8_t v_isSharedCheck_5400_; 
lean_del_object(v___x_5332_);
lean_dec(v_fst_5329_);
lean_del_object(v___x_5325_);
lean_dec(v_fst_5322_);
lean_del_object(v___x_5318_);
lean_dec(v_fst_5315_);
lean_del_object(v___x_5311_);
lean_dec(v_fst_5308_);
lean_del_object(v___x_5304_);
lean_del_object(v___x_5300_);
lean_del_object(v___x_5295_);
lean_del_object(v___x_5291_);
lean_del_object(v___x_5279_);
v_a_5393_ = lean_ctor_get(v___x_5334_, 0);
v_isSharedCheck_5400_ = !lean_is_exclusive(v___x_5334_);
if (v_isSharedCheck_5400_ == 0)
{
v___x_5395_ = v___x_5334_;
v_isShared_5396_ = v_isSharedCheck_5400_;
goto v_resetjp_5394_;
}
else
{
lean_inc(v_a_5393_);
lean_dec(v___x_5334_);
v___x_5395_ = lean_box(0);
v_isShared_5396_ = v_isSharedCheck_5400_;
goto v_resetjp_5394_;
}
v_resetjp_5394_:
{
lean_object* v___x_5398_; 
if (v_isShared_5396_ == 0)
{
v___x_5398_ = v___x_5395_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5399_; 
v_reuseFailAlloc_5399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5399_, 0, v_a_5393_);
v___x_5398_ = v_reuseFailAlloc_5399_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
return v___x_5398_;
}
}
}
}
}
else
{
lean_object* v_a_5402_; lean_object* v___x_5404_; uint8_t v_isShared_5405_; uint8_t v_isSharedCheck_5409_; 
lean_del_object(v___x_5325_);
lean_dec(v_fst_5322_);
lean_del_object(v___x_5318_);
lean_dec(v_fst_5315_);
lean_del_object(v___x_5311_);
lean_dec(v_fst_5308_);
lean_del_object(v___x_5304_);
lean_del_object(v___x_5300_);
lean_del_object(v___x_5295_);
lean_del_object(v___x_5291_);
lean_dec(v_all_5284_);
lean_del_object(v___x_5279_);
v_a_5402_ = lean_ctor_get(v___x_5327_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v___x_5327_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5404_ = v___x_5327_;
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
else
{
lean_inc(v_a_5402_);
lean_dec(v___x_5327_);
v___x_5404_ = lean_box(0);
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
v_resetjp_5403_:
{
lean_object* v___x_5407_; 
if (v_isShared_5405_ == 0)
{
v___x_5407_ = v___x_5404_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_a_5402_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
return v___x_5407_;
}
}
}
}
}
else
{
lean_object* v_a_5411_; lean_object* v___x_5413_; uint8_t v_isShared_5414_; uint8_t v_isSharedCheck_5418_; 
lean_del_object(v___x_5318_);
lean_dec(v_fst_5315_);
lean_del_object(v___x_5311_);
lean_dec(v_fst_5308_);
lean_del_object(v___x_5304_);
lean_del_object(v___x_5300_);
lean_del_object(v___x_5295_);
lean_del_object(v___x_5291_);
lean_dec(v_all_5284_);
lean_dec_ref(v_value_5282_);
lean_del_object(v___x_5279_);
v_a_5411_ = lean_ctor_get(v___x_5320_, 0);
v_isSharedCheck_5418_ = !lean_is_exclusive(v___x_5320_);
if (v_isSharedCheck_5418_ == 0)
{
v___x_5413_ = v___x_5320_;
v_isShared_5414_ = v_isSharedCheck_5418_;
goto v_resetjp_5412_;
}
else
{
lean_inc(v_a_5411_);
lean_dec(v___x_5320_);
v___x_5413_ = lean_box(0);
v_isShared_5414_ = v_isSharedCheck_5418_;
goto v_resetjp_5412_;
}
v_resetjp_5412_:
{
lean_object* v___x_5416_; 
if (v_isShared_5414_ == 0)
{
v___x_5416_ = v___x_5413_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v_a_5411_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
}
}
}
}
}
else
{
lean_object* v_a_5420_; lean_object* v___x_5422_; uint8_t v_isShared_5423_; uint8_t v_isSharedCheck_5427_; 
lean_del_object(v___x_5311_);
lean_dec(v_fst_5308_);
lean_del_object(v___x_5304_);
lean_del_object(v___x_5300_);
lean_del_object(v___x_5295_);
lean_del_object(v___x_5291_);
lean_dec_ref(v_type_5287_);
lean_dec(v_all_5284_);
lean_dec_ref(v_value_5282_);
lean_del_object(v___x_5279_);
v_a_5420_ = lean_ctor_get(v___x_5313_, 0);
v_isSharedCheck_5427_ = !lean_is_exclusive(v___x_5313_);
if (v_isSharedCheck_5427_ == 0)
{
v___x_5422_ = v___x_5313_;
v_isShared_5423_ = v_isSharedCheck_5427_;
goto v_resetjp_5421_;
}
else
{
lean_inc(v_a_5420_);
lean_dec(v___x_5313_);
v___x_5422_ = lean_box(0);
v_isShared_5423_ = v_isSharedCheck_5427_;
goto v_resetjp_5421_;
}
v_resetjp_5421_:
{
lean_object* v___x_5425_; 
if (v_isShared_5423_ == 0)
{
v___x_5425_ = v___x_5422_;
goto v_reusejp_5424_;
}
else
{
lean_object* v_reuseFailAlloc_5426_; 
v_reuseFailAlloc_5426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5426_, 0, v_a_5420_);
v___x_5425_ = v_reuseFailAlloc_5426_;
goto v_reusejp_5424_;
}
v_reusejp_5424_:
{
return v___x_5425_;
}
}
}
}
}
else
{
lean_object* v_a_5429_; lean_object* v___x_5431_; uint8_t v_isShared_5432_; uint8_t v_isSharedCheck_5436_; 
lean_del_object(v___x_5304_);
lean_del_object(v___x_5300_);
lean_del_object(v___x_5295_);
lean_del_object(v___x_5291_);
lean_dec_ref(v_type_5287_);
lean_dec(v_levelParams_5286_);
lean_dec(v_all_5284_);
lean_dec_ref(v_value_5282_);
lean_del_object(v___x_5279_);
v_a_5429_ = lean_ctor_get(v___x_5306_, 0);
v_isSharedCheck_5436_ = !lean_is_exclusive(v___x_5306_);
if (v_isSharedCheck_5436_ == 0)
{
v___x_5431_ = v___x_5306_;
v_isShared_5432_ = v_isSharedCheck_5436_;
goto v_resetjp_5430_;
}
else
{
lean_inc(v_a_5429_);
lean_dec(v___x_5306_);
v___x_5431_ = lean_box(0);
v_isShared_5432_ = v_isSharedCheck_5436_;
goto v_resetjp_5430_;
}
v_resetjp_5430_:
{
lean_object* v___x_5434_; 
if (v_isShared_5432_ == 0)
{
v___x_5434_ = v___x_5431_;
goto v_reusejp_5433_;
}
else
{
lean_object* v_reuseFailAlloc_5435_; 
v_reuseFailAlloc_5435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5435_, 0, v_a_5429_);
v___x_5434_ = v_reuseFailAlloc_5435_;
goto v_reusejp_5433_;
}
v_reusejp_5433_:
{
return v___x_5434_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5295_);
lean_del_object(v___x_5291_);
lean_dec_ref(v_type_5287_);
lean_dec(v_levelParams_5286_);
lean_dec(v_name_5285_);
lean_dec(v_all_5284_);
lean_dec_ref(v_value_5282_);
lean_del_object(v___x_5279_);
return v___x_5297_;
}
}
}
}
else
{
lean_dec_ref(v_type_5287_);
lean_dec(v_levelParams_5286_);
lean_dec(v_name_5285_);
lean_dec(v_all_5284_);
lean_dec_ref(v_value_5282_);
lean_del_object(v___x_5279_);
return v___x_5288_;
}
}
}
case 4:
{
lean_object* v___x_5444_; lean_object* v___x_5445_; 
lean_dec_ref_known(v_val_4820_, 1);
v___x_5444_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__9));
v___x_5445_ = l_LeanExport_dumpConstant(v___x_5444_, v___y_4709_, v___x_4837_);
if (lean_obj_tag(v___x_5445_) == 0)
{
lean_object* v_a_5446_; lean_object* v_snd_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; 
v_a_5446_ = lean_ctor_get(v___x_5445_, 0);
lean_inc(v_a_5446_);
lean_dec_ref_known(v___x_5445_, 1);
v_snd_5447_ = lean_ctor_get(v_a_5446_, 1);
lean_inc(v_snd_5447_);
lean_dec(v_a_5446_);
v___x_5448_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__19));
v___x_5449_ = lean_box(0);
v___x_5450_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
v___x_5451_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_4831_, v___x_5448_, v___x_5450_, v___y_4709_, v_snd_5447_);
if (lean_obj_tag(v___x_5451_) == 0)
{
lean_object* v_a_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5478_; 
v_a_5452_ = lean_ctor_get(v___x_5451_, 0);
v_isSharedCheck_5478_ = !lean_is_exclusive(v___x_5451_);
if (v_isSharedCheck_5478_ == 0)
{
v___x_5454_ = v___x_5451_;
v_isShared_5455_ = v_isSharedCheck_5478_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_a_5452_);
lean_dec(v___x_5451_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5478_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v_fst_5456_; lean_object* v_fst_5457_; lean_object* v___x_5459_; uint8_t v_isShared_5460_; uint8_t v_isSharedCheck_5476_; 
v_fst_5456_ = lean_ctor_get(v_a_5452_, 0);
lean_inc(v_fst_5456_);
v_fst_5457_ = lean_ctor_get(v_fst_5456_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v_fst_5456_);
if (v_isSharedCheck_5476_ == 0)
{
lean_object* v_unused_5477_; 
v_unused_5477_ = lean_ctor_get(v_fst_5456_, 1);
lean_dec(v_unused_5477_);
v___x_5459_ = v_fst_5456_;
v_isShared_5460_ = v_isSharedCheck_5476_;
goto v_resetjp_5458_;
}
else
{
lean_inc(v_fst_5457_);
lean_dec(v_fst_5456_);
v___x_5459_ = lean_box(0);
v_isShared_5460_ = v_isSharedCheck_5476_;
goto v_resetjp_5458_;
}
v_resetjp_5458_:
{
if (lean_obj_tag(v_fst_5457_) == 0)
{
lean_object* v_snd_5461_; lean_object* v___x_5463_; 
v_snd_5461_ = lean_ctor_get(v_a_5452_, 1);
lean_inc(v_snd_5461_);
lean_dec(v_a_5452_);
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v_snd_5461_);
lean_ctor_set(v___x_5459_, 0, v___x_5449_);
v___x_5463_ = v___x_5459_;
goto v_reusejp_5462_;
}
else
{
lean_object* v_reuseFailAlloc_5467_; 
v_reuseFailAlloc_5467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5467_, 0, v___x_5449_);
lean_ctor_set(v_reuseFailAlloc_5467_, 1, v_snd_5461_);
v___x_5463_ = v_reuseFailAlloc_5467_;
goto v_reusejp_5462_;
}
v_reusejp_5462_:
{
lean_object* v___x_5465_; 
if (v_isShared_5455_ == 0)
{
lean_ctor_set(v___x_5454_, 0, v___x_5463_);
v___x_5465_ = v___x_5454_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v___x_5463_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
return v___x_5465_;
}
}
}
else
{
lean_object* v_snd_5468_; lean_object* v_val_5469_; lean_object* v___x_5471_; 
v_snd_5468_ = lean_ctor_get(v_a_5452_, 1);
lean_inc(v_snd_5468_);
lean_dec(v_a_5452_);
v_val_5469_ = lean_ctor_get(v_fst_5457_, 0);
lean_inc(v_val_5469_);
lean_dec_ref_known(v_fst_5457_, 1);
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v_snd_5468_);
lean_ctor_set(v___x_5459_, 0, v_val_5469_);
v___x_5471_ = v___x_5459_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_val_5469_);
lean_ctor_set(v_reuseFailAlloc_5475_, 1, v_snd_5468_);
v___x_5471_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
lean_object* v___x_5473_; 
if (v_isShared_5455_ == 0)
{
lean_ctor_set(v___x_5454_, 0, v___x_5471_);
v___x_5473_ = v___x_5454_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v___x_5471_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
}
}
else
{
lean_object* v_a_5479_; lean_object* v___x_5481_; uint8_t v_isShared_5482_; uint8_t v_isSharedCheck_5486_; 
v_a_5479_ = lean_ctor_get(v___x_5451_, 0);
v_isSharedCheck_5486_ = !lean_is_exclusive(v___x_5451_);
if (v_isSharedCheck_5486_ == 0)
{
v___x_5481_ = v___x_5451_;
v_isShared_5482_ = v_isSharedCheck_5486_;
goto v_resetjp_5480_;
}
else
{
lean_inc(v_a_5479_);
lean_dec(v___x_5451_);
v___x_5481_ = lean_box(0);
v_isShared_5482_ = v_isSharedCheck_5486_;
goto v_resetjp_5480_;
}
v_resetjp_5480_:
{
lean_object* v___x_5484_; 
if (v_isShared_5482_ == 0)
{
v___x_5484_ = v___x_5481_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v_a_5479_);
v___x_5484_ = v_reuseFailAlloc_5485_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
return v___x_5484_;
}
}
}
}
else
{
return v___x_5445_;
}
}
case 5:
{
lean_object* v_val_5487_; lean_object* v_all_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; 
v_val_5487_ = lean_ctor_get(v_val_4820_, 0);
lean_inc_ref(v_val_5487_);
lean_dec_ref_known(v_val_4820_, 1);
v_all_5488_ = lean_ctor_get(v_val_5487_, 3);
lean_inc(v_all_5488_);
v___x_5489_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_5490_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__22, &l_LeanExport_dumpConstant___closed__22_once, _init_l_LeanExport_dumpConstant___closed__22);
v___x_5491_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(v___x_4831_, v_val_5487_, v_all_5488_, v___x_5490_, v___y_4709_, v___x_4837_);
lean_dec(v_all_5488_);
lean_dec_ref(v_val_5487_);
if (lean_obj_tag(v___x_5491_) == 0)
{
lean_object* v_a_5492_; lean_object* v_fst_5493_; lean_object* v_snd_5494_; lean_object* v_snd_5495_; lean_object* v_fst_5496_; lean_object* v_fst_5497_; lean_object* v_snd_5498_; lean_object* v___x_5499_; size_t v_sz_5500_; size_t v___x_5501_; lean_object* v___x_5502_; 
v_a_5492_ = lean_ctor_get(v___x_5491_, 0);
lean_inc(v_a_5492_);
lean_dec_ref_known(v___x_5491_, 1);
v_fst_5493_ = lean_ctor_get(v_a_5492_, 0);
lean_inc(v_fst_5493_);
v_snd_5494_ = lean_ctor_get(v_fst_5493_, 1);
lean_inc(v_snd_5494_);
v_snd_5495_ = lean_ctor_get(v_a_5492_, 1);
lean_inc(v_snd_5495_);
lean_dec(v_a_5492_);
v_fst_5496_ = lean_ctor_get(v_fst_5493_, 0);
lean_inc(v_fst_5496_);
lean_dec(v_fst_5493_);
v_fst_5497_ = lean_ctor_get(v_snd_5494_, 0);
lean_inc(v_fst_5497_);
v_snd_5498_ = lean_ctor_get(v_snd_5494_, 1);
lean_inc(v_snd_5498_);
lean_dec(v_snd_5494_);
v___x_5499_ = lean_box(0);
v_sz_5500_ = lean_array_size(v_fst_5497_);
v___x_5501_ = ((size_t)0ULL);
v___x_5502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(v_fst_5497_, v_sz_5500_, v___x_5501_, v___x_5499_, v___y_4709_, v_snd_5495_);
if (lean_obj_tag(v___x_5502_) == 0)
{
lean_object* v_a_5503_; lean_object* v_snd_5504_; lean_object* v___x_5505_; 
v_a_5503_ = lean_ctor_get(v___x_5502_, 0);
lean_inc(v_a_5503_);
lean_dec_ref_known(v___x_5502_, 1);
v_snd_5504_ = lean_ctor_get(v_a_5503_, 1);
lean_inc(v_snd_5504_);
lean_dec(v_a_5503_);
v___x_5505_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(v___x_4831_, v___x_5489_, v_snd_5498_, v___y_4709_, v_snd_5504_);
if (lean_obj_tag(v___x_5505_) == 0)
{
lean_object* v_a_5506_; lean_object* v_fst_5507_; lean_object* v_snd_5508_; lean_object* v_a_5509_; 
v_a_5506_ = lean_ctor_get(v___x_5505_, 0);
lean_inc(v_a_5506_);
lean_dec_ref_known(v___x_5505_, 1);
v_fst_5507_ = lean_ctor_get(v_a_5506_, 0);
lean_inc(v_fst_5507_);
v_snd_5508_ = lean_ctor_get(v_a_5506_, 1);
lean_inc(v_snd_5508_);
lean_dec(v_a_5506_);
v_a_5509_ = lean_ctor_get(v_fst_5507_, 0);
lean_inc(v_a_5509_);
lean_dec(v_fst_5507_);
v___y_4717_ = v___x_5499_;
v___y_4718_ = v_fst_5497_;
v___y_4719_ = v_fst_5496_;
v_fst_4720_ = v_a_5509_;
v_snd_4721_ = v_snd_5508_;
goto v___jp_4716_;
}
else
{
lean_object* v_a_5510_; lean_object* v___x_5512_; uint8_t v_isShared_5513_; uint8_t v_isSharedCheck_5517_; 
lean_dec(v_fst_5497_);
lean_dec(v_fst_5496_);
v_a_5510_ = lean_ctor_get(v___x_5505_, 0);
v_isSharedCheck_5517_ = !lean_is_exclusive(v___x_5505_);
if (v_isSharedCheck_5517_ == 0)
{
v___x_5512_ = v___x_5505_;
v_isShared_5513_ = v_isSharedCheck_5517_;
goto v_resetjp_5511_;
}
else
{
lean_inc(v_a_5510_);
lean_dec(v___x_5505_);
v___x_5512_ = lean_box(0);
v_isShared_5513_ = v_isSharedCheck_5517_;
goto v_resetjp_5511_;
}
v_resetjp_5511_:
{
lean_object* v___x_5515_; 
if (v_isShared_5513_ == 0)
{
v___x_5515_ = v___x_5512_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5516_; 
v_reuseFailAlloc_5516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5516_, 0, v_a_5510_);
v___x_5515_ = v_reuseFailAlloc_5516_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
return v___x_5515_;
}
}
}
}
else
{
lean_dec(v_snd_5498_);
lean_dec(v_fst_5497_);
lean_dec(v_fst_5496_);
return v___x_5502_;
}
}
else
{
lean_object* v_a_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5525_; 
v_a_5518_ = lean_ctor_get(v___x_5491_, 0);
v_isSharedCheck_5525_ = !lean_is_exclusive(v___x_5491_);
if (v_isSharedCheck_5525_ == 0)
{
v___x_5520_ = v___x_5491_;
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_a_5518_);
lean_dec(v___x_5491_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5523_; 
if (v_isShared_5521_ == 0)
{
v___x_5523_ = v___x_5520_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v_a_5518_);
v___x_5523_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5522_;
}
v_reusejp_5522_:
{
return v___x_5523_;
}
}
}
}
case 6:
{
lean_object* v_val_5526_; lean_object* v_induct_5527_; 
v_val_5526_ = lean_ctor_get(v_val_4820_, 0);
lean_inc_ref(v_val_5526_);
lean_dec_ref_known(v_val_4820_, 1);
v_induct_5527_ = lean_ctor_get(v_val_5526_, 1);
lean_inc(v_induct_5527_);
lean_dec_ref(v_val_5526_);
v_c_4708_ = v_induct_5527_;
v___y_4710_ = v___x_4837_;
goto _start;
}
default: 
{
lean_object* v_val_5529_; lean_object* v_all_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; 
v_val_5529_ = lean_ctor_get(v_val_4820_, 0);
lean_inc_ref(v_val_5529_);
lean_dec_ref_known(v_val_4820_, 1);
v_all_5530_ = lean_ctor_get(v_val_5529_, 1);
lean_inc(v_all_5530_);
lean_dec_ref(v_val_5529_);
v___x_5531_ = lean_box(0);
v___x_5532_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(v_all_5530_, v___x_5531_, v___y_4709_, v___x_4837_);
lean_dec(v_all_5530_);
if (lean_obj_tag(v___x_5532_) == 0)
{
lean_object* v_a_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5549_; 
v_a_5533_ = lean_ctor_get(v___x_5532_, 0);
v_isSharedCheck_5549_ = !lean_is_exclusive(v___x_5532_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5535_ = v___x_5532_;
v_isShared_5536_ = v_isSharedCheck_5549_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_a_5533_);
lean_dec(v___x_5532_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5549_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v_snd_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5547_; 
v_snd_5537_ = lean_ctor_get(v_a_5533_, 1);
v_isSharedCheck_5547_ = !lean_is_exclusive(v_a_5533_);
if (v_isSharedCheck_5547_ == 0)
{
lean_object* v_unused_5548_; 
v_unused_5548_ = lean_ctor_get(v_a_5533_, 0);
lean_dec(v_unused_5548_);
v___x_5539_ = v_a_5533_;
v_isShared_5540_ = v_isSharedCheck_5547_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_snd_5537_);
lean_dec(v_a_5533_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5547_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5542_; 
if (v_isShared_5540_ == 0)
{
lean_ctor_set(v___x_5539_, 0, v___x_5531_);
v___x_5542_ = v___x_5539_;
goto v_reusejp_5541_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v___x_5531_);
lean_ctor_set(v_reuseFailAlloc_5546_, 1, v_snd_5537_);
v___x_5542_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5541_;
}
v_reusejp_5541_:
{
lean_object* v___x_5544_; 
if (v_isShared_5536_ == 0)
{
lean_ctor_set(v___x_5535_, 0, v___x_5542_);
v___x_5544_ = v___x_5535_;
goto v_reusejp_5543_;
}
else
{
lean_object* v_reuseFailAlloc_5545_; 
v_reuseFailAlloc_5545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5545_, 0, v___x_5542_);
v___x_5544_ = v_reuseFailAlloc_5545_;
goto v_reusejp_5543_;
}
v_reusejp_5543_:
{
return v___x_5544_;
}
}
}
}
}
else
{
return v___x_5532_;
}
}
}
}
}
}
else
{
lean_dec(v_val_4820_);
lean_dec(v_c_4708_);
goto v___jp_4712_;
}
}
v___jp_5558_:
{
if (v___y_5559_ == 0)
{
goto v___jp_4821_;
}
else
{
lean_dec(v_val_4820_);
lean_dec(v_c_4708_);
goto v___jp_4712_;
}
}
}
else
{
uint8_t v_ignoreMissing_5562_; 
lean_dec(v___x_4819_);
v_ignoreMissing_5562_ = lean_ctor_get_uint8(v___y_4710_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_5562_ == 0)
{
lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; uint8_t v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; 
v___x_5563_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_5564_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_5565_ = lean_unsigned_to_nat(254u);
v___x_5566_ = lean_unsigned_to_nat(48u);
v___x_5567_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_5568_ = 1;
v___x_5569_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_4708_, v___x_5568_);
v___x_5570_ = lean_string_append(v___x_5567_, v___x_5569_);
lean_dec_ref(v___x_5569_);
v___x_5571_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_5572_ = lean_string_append(v___x_5570_, v___x_5571_);
v___x_5573_ = l_mkPanicMessageWithDecl(v___x_5563_, v___x_5564_, v___x_5565_, v___x_5566_, v___x_5572_);
lean_dec_ref(v___x_5572_);
v___x_5574_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_5573_, v___y_4709_, v___y_4710_);
return v___x_5574_;
}
else
{
lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; 
lean_dec(v_c_4708_);
v___x_5575_ = lean_box(0);
v___x_5576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5576_, 0, v___x_5575_);
lean_ctor_set(v___x_5576_, 1, v___y_4710_);
v___x_5577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5577_, 0, v___x_5576_);
return v___x_5577_;
}
}
v___jp_4712_:
{
lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___x_4713_ = lean_box(0);
v___x_4714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
lean_ctor_set(v___x_4714_, 1, v___y_4710_);
v___x_4715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4714_);
return v___x_4715_;
}
v___jp_4716_:
{
size_t v_sz_4722_; size_t v___x_4723_; lean_object* v___x_4724_; 
v_sz_4722_ = lean_array_size(v_fst_4720_);
v___x_4723_ = ((size_t)0ULL);
v___x_4724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(v_fst_4720_, v_sz_4722_, v___x_4723_, v___y_4717_, v___y_4709_, v_snd_4721_);
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v_snd_4726_; lean_object* v___x_4728_; uint8_t v_isShared_4729_; uint8_t v_isSharedCheck_4816_; 
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
lean_inc(v_a_4725_);
lean_dec_ref_known(v___x_4724_, 1);
v_snd_4726_ = lean_ctor_get(v_a_4725_, 1);
v_isSharedCheck_4816_ = !lean_is_exclusive(v_a_4725_);
if (v_isSharedCheck_4816_ == 0)
{
lean_object* v_unused_4817_; 
v_unused_4817_ = lean_ctor_get(v_a_4725_, 0);
lean_dec(v_unused_4817_);
v___x_4728_ = v_a_4725_;
v_isShared_4729_ = v_isSharedCheck_4816_;
goto v_resetjp_4727_;
}
else
{
lean_inc(v_snd_4726_);
lean_dec(v_a_4725_);
v___x_4728_ = lean_box(0);
v_isShared_4729_ = v_isSharedCheck_4816_;
goto v_resetjp_4727_;
}
v_resetjp_4727_:
{
lean_object* v___x_4730_; 
v___x_4730_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_fst_4720_, v_sz_4722_, v___x_4723_, v___y_4717_, v___y_4709_, v_snd_4726_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v_snd_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4814_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
lean_inc(v_a_4731_);
lean_dec_ref_known(v___x_4730_, 1);
v_snd_4732_ = lean_ctor_get(v_a_4731_, 1);
v_isSharedCheck_4814_ = !lean_is_exclusive(v_a_4731_);
if (v_isSharedCheck_4814_ == 0)
{
lean_object* v_unused_4815_; 
v_unused_4815_ = lean_ctor_get(v_a_4731_, 0);
lean_dec(v_unused_4815_);
v___x_4734_ = v_a_4731_;
v_isShared_4735_ = v_isSharedCheck_4814_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_snd_4732_);
lean_dec(v_a_4731_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4814_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
size_t v_sz_4736_; lean_object* v___x_4737_; 
v_sz_4736_ = lean_array_size(v___y_4719_);
v___x_4737_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(v_sz_4736_, v___x_4723_, v___y_4719_, v___y_4709_, v_snd_4732_);
if (lean_obj_tag(v___x_4737_) == 0)
{
lean_object* v_a_4738_; lean_object* v_fst_4739_; lean_object* v_snd_4740_; lean_object* v___x_4742_; uint8_t v_isShared_4743_; uint8_t v_isSharedCheck_4805_; 
v_a_4738_ = lean_ctor_get(v___x_4737_, 0);
lean_inc(v_a_4738_);
lean_dec_ref_known(v___x_4737_, 1);
v_fst_4739_ = lean_ctor_get(v_a_4738_, 0);
v_snd_4740_ = lean_ctor_get(v_a_4738_, 1);
v_isSharedCheck_4805_ = !lean_is_exclusive(v_a_4738_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4742_ = v_a_4738_;
v_isShared_4743_ = v_isSharedCheck_4805_;
goto v_resetjp_4741_;
}
else
{
lean_inc(v_snd_4740_);
lean_inc(v_fst_4739_);
lean_dec(v_a_4738_);
v___x_4742_ = lean_box(0);
v_isShared_4743_ = v_isSharedCheck_4805_;
goto v_resetjp_4741_;
}
v_resetjp_4741_:
{
size_t v_sz_4744_; lean_object* v___x_4745_; 
v_sz_4744_ = lean_array_size(v___y_4718_);
v___x_4745_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_4744_, v___x_4723_, v___y_4718_, v___y_4709_, v_snd_4740_);
if (lean_obj_tag(v___x_4745_) == 0)
{
lean_object* v_a_4746_; lean_object* v_fst_4747_; lean_object* v_snd_4748_; lean_object* v___x_4750_; uint8_t v_isShared_4751_; uint8_t v_isSharedCheck_4796_; 
v_a_4746_ = lean_ctor_get(v___x_4745_, 0);
lean_inc(v_a_4746_);
lean_dec_ref_known(v___x_4745_, 1);
v_fst_4747_ = lean_ctor_get(v_a_4746_, 0);
v_snd_4748_ = lean_ctor_get(v_a_4746_, 1);
v_isSharedCheck_4796_ = !lean_is_exclusive(v_a_4746_);
if (v_isSharedCheck_4796_ == 0)
{
v___x_4750_ = v_a_4746_;
v_isShared_4751_ = v_isSharedCheck_4796_;
goto v_resetjp_4749_;
}
else
{
lean_inc(v_snd_4748_);
lean_inc(v_fst_4747_);
lean_dec(v_a_4746_);
v___x_4750_ = lean_box(0);
v_isShared_4751_ = v_isSharedCheck_4796_;
goto v_resetjp_4749_;
}
v_resetjp_4749_:
{
lean_object* v___x_4752_; 
v___x_4752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_4722_, v___x_4723_, v_fst_4720_, v___y_4709_, v_snd_4748_);
if (lean_obj_tag(v___x_4752_) == 0)
{
lean_object* v_a_4753_; lean_object* v_fst_4754_; lean_object* v_snd_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4787_; 
v_a_4753_ = lean_ctor_get(v___x_4752_, 0);
lean_inc(v_a_4753_);
lean_dec_ref_known(v___x_4752_, 1);
v_fst_4754_ = lean_ctor_get(v_a_4753_, 0);
v_snd_4755_ = lean_ctor_get(v_a_4753_, 1);
v_isSharedCheck_4787_ = !lean_is_exclusive(v_a_4753_);
if (v_isSharedCheck_4787_ == 0)
{
v___x_4757_ = v_a_4753_;
v_isShared_4758_ = v_isSharedCheck_4787_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_snd_4755_);
lean_inc(v_fst_4754_);
lean_dec(v_a_4753_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4787_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4763_; 
v___x_4759_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__0));
v___x_4760_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__1));
v___x_4761_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v_fst_4739_);
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 1, v___x_4761_);
lean_ctor_set(v___x_4757_, 0, v___x_4760_);
v___x_4763_ = v___x_4757_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4786_; 
v_reuseFailAlloc_4786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4786_, 0, v___x_4760_);
lean_ctor_set(v_reuseFailAlloc_4786_, 1, v___x_4761_);
v___x_4763_ = v_reuseFailAlloc_4786_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4767_; 
v___x_4764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2));
v___x_4765_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v_fst_4747_);
if (v_isShared_4751_ == 0)
{
lean_ctor_set(v___x_4750_, 1, v___x_4765_);
lean_ctor_set(v___x_4750_, 0, v___x_4764_);
v___x_4767_ = v___x_4750_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4785_; 
v_reuseFailAlloc_4785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4785_, 0, v___x_4764_);
lean_ctor_set(v_reuseFailAlloc_4785_, 1, v___x_4765_);
v___x_4767_ = v_reuseFailAlloc_4785_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4771_; 
v___x_4768_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__2));
v___x_4769_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v_fst_4754_);
if (v_isShared_4743_ == 0)
{
lean_ctor_set(v___x_4742_, 1, v___x_4769_);
lean_ctor_set(v___x_4742_, 0, v___x_4768_);
v___x_4771_ = v___x_4742_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v___x_4768_);
lean_ctor_set(v_reuseFailAlloc_4784_, 1, v___x_4769_);
v___x_4771_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
lean_object* v___x_4772_; lean_object* v___x_4774_; 
v___x_4772_ = lean_box(0);
if (v_isShared_4729_ == 0)
{
lean_ctor_set_tag(v___x_4728_, 1);
lean_ctor_set(v___x_4728_, 1, v___x_4772_);
lean_ctor_set(v___x_4728_, 0, v___x_4771_);
v___x_4774_ = v___x_4728_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4783_; 
v_reuseFailAlloc_4783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4783_, 0, v___x_4771_);
lean_ctor_set(v_reuseFailAlloc_4783_, 1, v___x_4772_);
v___x_4774_ = v_reuseFailAlloc_4783_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4779_; 
v___x_4775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4767_);
lean_ctor_set(v___x_4775_, 1, v___x_4774_);
v___x_4776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4763_);
lean_ctor_set(v___x_4776_, 1, v___x_4775_);
v___x_4777_ = l_Lean_Json_mkObj(v___x_4776_);
lean_dec_ref_known(v___x_4776_, 2);
if (v_isShared_4735_ == 0)
{
lean_ctor_set(v___x_4734_, 1, v___x_4777_);
lean_ctor_set(v___x_4734_, 0, v___x_4759_);
v___x_4779_ = v___x_4734_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v___x_4759_);
lean_ctor_set(v_reuseFailAlloc_4782_, 1, v___x_4777_);
v___x_4779_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
lean_object* v___x_4780_; lean_object* v___x_4781_; 
v___x_4780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4780_, 0, v___x_4779_);
lean_ctor_set(v___x_4780_, 1, v___x_4772_);
v___x_4781_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4780_, v_snd_4755_);
lean_dec_ref_known(v___x_4780_, 2);
return v___x_4781_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4788_; lean_object* v___x_4790_; uint8_t v_isShared_4791_; uint8_t v_isSharedCheck_4795_; 
lean_del_object(v___x_4750_);
lean_dec(v_fst_4747_);
lean_del_object(v___x_4742_);
lean_dec(v_fst_4739_);
lean_del_object(v___x_4734_);
lean_del_object(v___x_4728_);
v_a_4788_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4795_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4795_ == 0)
{
v___x_4790_ = v___x_4752_;
v_isShared_4791_ = v_isSharedCheck_4795_;
goto v_resetjp_4789_;
}
else
{
lean_inc(v_a_4788_);
lean_dec(v___x_4752_);
v___x_4790_ = lean_box(0);
v_isShared_4791_ = v_isSharedCheck_4795_;
goto v_resetjp_4789_;
}
v_resetjp_4789_:
{
lean_object* v___x_4793_; 
if (v_isShared_4791_ == 0)
{
v___x_4793_ = v___x_4790_;
goto v_reusejp_4792_;
}
else
{
lean_object* v_reuseFailAlloc_4794_; 
v_reuseFailAlloc_4794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4794_, 0, v_a_4788_);
v___x_4793_ = v_reuseFailAlloc_4794_;
goto v_reusejp_4792_;
}
v_reusejp_4792_:
{
return v___x_4793_;
}
}
}
}
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_del_object(v___x_4742_);
lean_dec(v_fst_4739_);
lean_del_object(v___x_4734_);
lean_del_object(v___x_4728_);
lean_dec_ref(v_fst_4720_);
v_a_4797_ = lean_ctor_get(v___x_4745_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4745_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4745_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4745_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4802_; 
if (v_isShared_4800_ == 0)
{
v___x_4802_ = v___x_4799_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4797_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
}
}
else
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4813_; 
lean_del_object(v___x_4734_);
lean_del_object(v___x_4728_);
lean_dec_ref(v_fst_4720_);
lean_dec(v___y_4718_);
v_a_4806_ = lean_ctor_get(v___x_4737_, 0);
v_isSharedCheck_4813_ = !lean_is_exclusive(v___x_4737_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4808_ = v___x_4737_;
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4737_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4811_; 
if (v_isShared_4809_ == 0)
{
v___x_4811_ = v___x_4808_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v_a_4806_);
v___x_4811_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
return v___x_4811_;
}
}
}
}
}
else
{
lean_del_object(v___x_4728_);
lean_dec_ref(v_fst_4720_);
lean_dec(v___y_4719_);
lean_dec(v___y_4718_);
return v___x_4730_;
}
}
}
else
{
lean_dec_ref(v_fst_4720_);
lean_dec(v___y_4719_);
lean_dec(v___y_4718_);
return v___x_4724_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object* v_as_5578_, size_t v_sz_5579_, size_t v_i_5580_, lean_object* v_b_5581_, lean_object* v___y_5582_, lean_object* v___y_5583_){
_start:
{
uint8_t v___x_5585_; 
v___x_5585_ = lean_usize_dec_lt(v_i_5580_, v_sz_5579_);
if (v___x_5585_ == 0)
{
lean_object* v___x_5586_; lean_object* v___x_5587_; 
v___x_5586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5586_, 0, v_b_5581_);
lean_ctor_set(v___x_5586_, 1, v___y_5583_);
v___x_5587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5587_, 0, v___x_5586_);
return v___x_5587_;
}
else
{
lean_object* v___x_5588_; lean_object* v_a_5589_; lean_object* v___x_5590_; 
v___x_5588_ = lean_box(0);
v_a_5589_ = lean_array_uget_borrowed(v_as_5578_, v_i_5580_);
lean_inc(v_a_5589_);
v___x_5590_ = l_LeanExport_dumpConstant(v_a_5589_, v___y_5582_, v___y_5583_);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_a_5591_; lean_object* v_snd_5592_; size_t v___x_5593_; size_t v___x_5594_; 
v_a_5591_ = lean_ctor_get(v___x_5590_, 0);
lean_inc(v_a_5591_);
lean_dec_ref_known(v___x_5590_, 1);
v_snd_5592_ = lean_ctor_get(v_a_5591_, 1);
lean_inc(v_snd_5592_);
lean_dec(v_a_5591_);
v___x_5593_ = ((size_t)1ULL);
v___x_5594_ = lean_usize_add(v_i_5580_, v___x_5593_);
v_i_5580_ = v___x_5594_;
v_b_5581_ = v___x_5588_;
v___y_5583_ = v_snd_5592_;
goto _start;
}
else
{
return v___x_5590_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object* v_e_5596_, lean_object* v___y_5597_, lean_object* v___y_5598_){
_start:
{
lean_object* v___x_5600_; lean_object* v___x_5601_; size_t v_sz_5602_; size_t v___x_5603_; lean_object* v___x_5604_; 
v___x_5600_ = l_Lean_Expr_getUsedConstants(v_e_5596_);
v___x_5601_ = lean_box(0);
v_sz_5602_ = lean_array_size(v___x_5600_);
v___x_5603_ = ((size_t)0ULL);
v___x_5604_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v___x_5600_, v_sz_5602_, v___x_5603_, v___x_5601_, v___y_5597_, v___y_5598_);
lean_dec_ref(v___x_5600_);
if (lean_obj_tag(v___x_5604_) == 0)
{
lean_object* v_a_5605_; lean_object* v___x_5607_; uint8_t v_isShared_5608_; uint8_t v_isSharedCheck_5621_; 
v_a_5605_ = lean_ctor_get(v___x_5604_, 0);
v_isSharedCheck_5621_ = !lean_is_exclusive(v___x_5604_);
if (v_isSharedCheck_5621_ == 0)
{
v___x_5607_ = v___x_5604_;
v_isShared_5608_ = v_isSharedCheck_5621_;
goto v_resetjp_5606_;
}
else
{
lean_inc(v_a_5605_);
lean_dec(v___x_5604_);
v___x_5607_ = lean_box(0);
v_isShared_5608_ = v_isSharedCheck_5621_;
goto v_resetjp_5606_;
}
v_resetjp_5606_:
{
lean_object* v_snd_5609_; lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5619_; 
v_snd_5609_ = lean_ctor_get(v_a_5605_, 1);
v_isSharedCheck_5619_ = !lean_is_exclusive(v_a_5605_);
if (v_isSharedCheck_5619_ == 0)
{
lean_object* v_unused_5620_; 
v_unused_5620_ = lean_ctor_get(v_a_5605_, 0);
lean_dec(v_unused_5620_);
v___x_5611_ = v_a_5605_;
v_isShared_5612_ = v_isSharedCheck_5619_;
goto v_resetjp_5610_;
}
else
{
lean_inc(v_snd_5609_);
lean_dec(v_a_5605_);
v___x_5611_ = lean_box(0);
v_isShared_5612_ = v_isSharedCheck_5619_;
goto v_resetjp_5610_;
}
v_resetjp_5610_:
{
lean_object* v___x_5614_; 
if (v_isShared_5612_ == 0)
{
lean_ctor_set(v___x_5611_, 0, v___x_5601_);
v___x_5614_ = v___x_5611_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5618_; 
v_reuseFailAlloc_5618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5618_, 0, v___x_5601_);
lean_ctor_set(v_reuseFailAlloc_5618_, 1, v_snd_5609_);
v___x_5614_ = v_reuseFailAlloc_5618_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
lean_object* v___x_5616_; 
if (v_isShared_5608_ == 0)
{
lean_ctor_set(v___x_5607_, 0, v___x_5614_);
v___x_5616_ = v___x_5607_;
goto v_reusejp_5615_;
}
else
{
lean_object* v_reuseFailAlloc_5617_; 
v_reuseFailAlloc_5617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5617_, 0, v___x_5614_);
v___x_5616_ = v_reuseFailAlloc_5617_;
goto v_reusejp_5615_;
}
v_reusejp_5615_:
{
return v___x_5616_;
}
}
}
}
}
else
{
return v___x_5604_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object* v_e_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_){
_start:
{
lean_object* v_res_5626_; 
v_res_5626_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_e_5622_, v___y_5623_, v___y_5624_);
lean_dec_ref(v___y_5623_);
return v_res_5626_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg___boxed(lean_object* v_as_x27_5627_, lean_object* v_b_5628_, lean_object* v___y_5629_, lean_object* v___y_5630_, lean_object* v___y_5631_){
_start:
{
lean_object* v_res_5632_; 
v_res_5632_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(v_as_x27_5627_, v_b_5628_, v___y_5629_, v___y_5630_);
lean_dec_ref(v___y_5629_);
lean_dec(v_as_x27_5627_);
return v_res_5632_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object* v_as_x27_5633_, lean_object* v_b_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_){
_start:
{
lean_object* v_res_5638_; 
v_res_5638_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v_as_x27_5633_, v_b_5634_, v___y_5635_, v___y_5636_);
lean_dec_ref(v___y_5635_);
lean_dec(v_as_x27_5633_);
return v_res_5638_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object* v_x_5639_, lean_object* v_x_5640_, lean_object* v___y_5641_, lean_object* v___y_5642_, lean_object* v___y_5643_){
_start:
{
lean_object* v_res_5644_; 
v_res_5644_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_x_5639_, v_x_5640_, v___y_5641_, v___y_5642_);
lean_dec_ref(v___y_5641_);
return v_res_5644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object* v_as_5645_, lean_object* v_sz_5646_, lean_object* v_i_5647_, lean_object* v_b_5648_, lean_object* v___y_5649_, lean_object* v___y_5650_, lean_object* v___y_5651_){
_start:
{
size_t v_sz_boxed_5652_; size_t v_i_boxed_5653_; lean_object* v_res_5654_; 
v_sz_boxed_5652_ = lean_unbox_usize(v_sz_5646_);
lean_dec(v_sz_5646_);
v_i_boxed_5653_ = lean_unbox_usize(v_i_5647_);
lean_dec(v_i_5647_);
v_res_5654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v_as_5645_, v_sz_boxed_5652_, v_i_boxed_5653_, v_b_5648_, v___y_5649_, v___y_5650_);
lean_dec_ref(v___y_5649_);
lean_dec_ref(v_as_5645_);
return v_res_5654_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object* v___y_5655_, lean_object* v___y_5656_, lean_object* v___y_5657_){
_start:
{
lean_object* v_res_5658_; 
v_res_5658_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v___y_5655_, v___y_5656_);
lean_dec_ref(v___y_5655_);
return v_res_5658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object* v_as_5659_, lean_object* v_sz_5660_, lean_object* v_i_5661_, lean_object* v_b_5662_, lean_object* v___y_5663_, lean_object* v___y_5664_, lean_object* v___y_5665_){
_start:
{
size_t v_sz_boxed_5666_; size_t v_i_boxed_5667_; lean_object* v_res_5668_; 
v_sz_boxed_5666_ = lean_unbox_usize(v_sz_5660_);
lean_dec(v_sz_5660_);
v_i_boxed_5667_ = lean_unbox_usize(v_i_5661_);
lean_dec(v_i_5661_);
v_res_5668_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_as_5659_, v_sz_boxed_5666_, v_i_boxed_5667_, v_b_5662_, v___y_5663_, v___y_5664_);
lean_dec_ref(v___y_5663_);
lean_dec_ref(v_as_5659_);
return v_res_5668_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object* v_e_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_){
_start:
{
lean_object* v_res_5673_; 
v_res_5673_ = l_LeanExport_dumpExpr(v_e_5669_, v___y_5670_, v___y_5671_);
lean_dec_ref(v___y_5670_);
return v_res_5673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object* v_as_5674_, lean_object* v_sz_5675_, lean_object* v_i_5676_, lean_object* v_b_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_){
_start:
{
size_t v_sz_boxed_5681_; size_t v_i_boxed_5682_; lean_object* v_res_5683_; 
v_sz_boxed_5681_ = lean_unbox_usize(v_sz_5675_);
lean_dec(v_sz_5675_);
v_i_boxed_5682_ = lean_unbox_usize(v_i_5676_);
lean_dec(v_i_5676_);
v_res_5683_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(v_as_5674_, v_sz_boxed_5681_, v_i_boxed_5682_, v_b_5677_, v___y_5678_, v___y_5679_);
lean_dec_ref(v___y_5678_);
lean_dec_ref(v_as_5674_);
return v_res_5683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19___boxed(lean_object* v_as_5684_, lean_object* v_sz_5685_, lean_object* v_i_5686_, lean_object* v_b_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_){
_start:
{
size_t v_sz_boxed_5691_; size_t v_i_boxed_5692_; lean_object* v_res_5693_; 
v_sz_boxed_5691_ = lean_unbox_usize(v_sz_5685_);
lean_dec(v_sz_5685_);
v_i_boxed_5692_ = lean_unbox_usize(v_i_5686_);
lean_dec(v_i_5686_);
v_res_5693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(v_as_5684_, v_sz_boxed_5691_, v_i_boxed_5692_, v_b_5687_, v___y_5688_, v___y_5689_);
lean_dec_ref(v___y_5688_);
lean_dec_ref(v_as_5684_);
return v_res_5693_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object* v_rule_5694_, lean_object* v___y_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_){
_start:
{
lean_object* v_res_5698_; 
v_res_5698_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_rule_5694_, v___y_5695_, v___y_5696_);
lean_dec_ref(v___y_5695_);
return v_res_5698_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object* v___y_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_){
_start:
{
lean_object* v_res_5702_; 
v_res_5702_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v___y_5699_, v___y_5700_);
lean_dec_ref(v___y_5699_);
return v_res_5702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object* v_sz_5703_, lean_object* v_i_5704_, lean_object* v_bs_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_){
_start:
{
size_t v_sz_boxed_5709_; size_t v_i_boxed_5710_; lean_object* v_res_5711_; 
v_sz_boxed_5709_ = lean_unbox_usize(v_sz_5703_);
lean_dec(v_sz_5703_);
v_i_boxed_5710_ = lean_unbox_usize(v_i_5704_);
lean_dec(v_i_5704_);
v_res_5711_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_boxed_5709_, v_i_boxed_5710_, v_bs_5705_, v___y_5706_, v___y_5707_);
lean_dec_ref(v___y_5706_);
return v_res_5711_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object* v___x_5712_, lean_object* v_as_x27_5713_, lean_object* v_b_5714_, lean_object* v___y_5715_, lean_object* v___y_5716_, lean_object* v___y_5717_){
_start:
{
uint8_t v___x_179660__boxed_5718_; lean_object* v_res_5719_; 
v___x_179660__boxed_5718_ = lean_unbox(v___x_5712_);
v_res_5719_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_179660__boxed_5718_, v_as_x27_5713_, v_b_5714_, v___y_5715_, v___y_5716_);
lean_dec_ref(v___y_5715_);
lean_dec(v_as_x27_5713_);
return v_res_5719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object* v_sz_5720_, lean_object* v_i_5721_, lean_object* v_bs_5722_, lean_object* v___y_5723_, lean_object* v___y_5724_, lean_object* v___y_5725_){
_start:
{
size_t v_sz_boxed_5726_; size_t v_i_boxed_5727_; lean_object* v_res_5728_; 
v_sz_boxed_5726_ = lean_unbox_usize(v_sz_5720_);
lean_dec(v_sz_5720_);
v_i_boxed_5727_ = lean_unbox_usize(v_i_5721_);
lean_dec(v_i_5721_);
v_res_5728_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(v_sz_boxed_5726_, v_i_boxed_5727_, v_bs_5722_, v___y_5723_, v___y_5724_);
lean_dec_ref(v___y_5723_);
return v_res_5728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object* v_sz_5729_, lean_object* v_i_5730_, lean_object* v_bs_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_){
_start:
{
size_t v_sz_boxed_5735_; size_t v_i_boxed_5736_; lean_object* v_res_5737_; 
v_sz_boxed_5735_ = lean_unbox_usize(v_sz_5729_);
lean_dec(v_sz_5729_);
v_i_boxed_5736_ = lean_unbox_usize(v_i_5730_);
lean_dec(v_i_5730_);
v_res_5737_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_boxed_5735_, v_i_boxed_5736_, v_bs_5731_, v___y_5732_, v___y_5733_);
lean_dec_ref(v___y_5732_);
return v_res_5737_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___boxed(lean_object* v___x_5738_, lean_object* v_val_5739_, lean_object* v_as_x27_5740_, lean_object* v_b_5741_, lean_object* v___y_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_){
_start:
{
uint8_t v___x_179964__boxed_5745_; lean_object* v_res_5746_; 
v___x_179964__boxed_5745_ = lean_unbox(v___x_5738_);
v_res_5746_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(v___x_179964__boxed_5745_, v_val_5739_, v_as_x27_5740_, v_b_5741_, v___y_5742_, v___y_5743_);
lean_dec_ref(v___y_5742_);
lean_dec(v_as_x27_5740_);
lean_dec_ref(v_val_5739_);
return v_res_5746_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object* v_e_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_){
_start:
{
lean_object* v_res_5751_; 
v_res_5751_ = l_LeanExport_dumpExprAux(v_e_5747_, v___y_5748_, v___y_5749_);
lean_dec_ref(v___y_5748_);
return v_res_5751_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object* v_c_5752_, lean_object* v___y_5753_, lean_object* v___y_5754_, lean_object* v___y_5755_){
_start:
{
lean_object* v_res_5756_; 
v_res_5756_ = l_LeanExport_dumpConstant(v_c_5752_, v___y_5753_, v___y_5754_);
lean_dec_ref(v___y_5753_);
return v_res_5756_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t v___x_5757_, lean_object* v_as_5758_, lean_object* v_as_x27_5759_, lean_object* v_b_5760_, lean_object* v_a_5761_, lean_object* v___y_5762_, lean_object* v___y_5763_){
_start:
{
lean_object* v___x_5765_; 
v___x_5765_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_5757_, v_as_x27_5759_, v_b_5760_, v___y_5762_, v___y_5763_);
return v___x_5765_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object* v___x_5766_, lean_object* v_as_5767_, lean_object* v_as_x27_5768_, lean_object* v_b_5769_, lean_object* v_a_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_){
_start:
{
uint8_t v___x_184542__boxed_5774_; lean_object* v_res_5775_; 
v___x_184542__boxed_5774_ = lean_unbox(v___x_5766_);
v_res_5775_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(v___x_184542__boxed_5774_, v_as_5767_, v_as_x27_5768_, v_b_5769_, v_a_5770_, v___y_5771_, v___y_5772_);
lean_dec_ref(v___y_5771_);
lean_dec(v_as_x27_5768_);
lean_dec(v_as_5767_);
return v_res_5775_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t v___y_5776_, uint8_t v___x_5777_, lean_object* v_as_5778_, lean_object* v_as_x27_5779_, lean_object* v_b_5780_, lean_object* v_a_5781_, lean_object* v___y_5782_, lean_object* v___y_5783_){
_start:
{
lean_object* v___x_5785_; 
v___x_5785_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_5776_, v___x_5777_, v_as_x27_5779_, v_b_5780_, v___y_5782_, v___y_5783_);
return v___x_5785_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object* v___y_5786_, lean_object* v___x_5787_, lean_object* v_as_5788_, lean_object* v_as_x27_5789_, lean_object* v_b_5790_, lean_object* v_a_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_){
_start:
{
uint8_t v___y_184559__boxed_5795_; uint8_t v___x_184560__boxed_5796_; lean_object* v_res_5797_; 
v___y_184559__boxed_5795_ = lean_unbox(v___y_5786_);
v___x_184560__boxed_5796_ = lean_unbox(v___x_5787_);
v_res_5797_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(v___y_184559__boxed_5795_, v___x_184560__boxed_5796_, v_as_5788_, v_as_x27_5789_, v_b_5790_, v_a_5791_, v___y_5792_, v___y_5793_);
lean_dec_ref(v___y_5792_);
lean_dec(v_as_x27_5789_);
lean_dec(v_as_5788_);
return v_res_5797_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11(uint8_t v___x_5798_, lean_object* v_val_5799_, lean_object* v_as_5800_, lean_object* v_as_x27_5801_, lean_object* v_b_5802_, lean_object* v_a_5803_, lean_object* v___y_5804_, lean_object* v___y_5805_){
_start:
{
lean_object* v___x_5807_; 
v___x_5807_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(v___x_5798_, v_val_5799_, v_as_x27_5801_, v_b_5802_, v___y_5804_, v___y_5805_);
return v___x_5807_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object* v___x_5808_, lean_object* v_val_5809_, lean_object* v_as_5810_, lean_object* v_as_x27_5811_, lean_object* v_b_5812_, lean_object* v_a_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_){
_start:
{
uint8_t v___x_184579__boxed_5817_; lean_object* v_res_5818_; 
v___x_184579__boxed_5817_ = lean_unbox(v___x_5808_);
v_res_5818_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11(v___x_184579__boxed_5817_, v_val_5809_, v_as_5810_, v_as_x27_5811_, v_b_5812_, v_a_5813_, v___y_5814_, v___y_5815_);
lean_dec_ref(v___y_5814_);
lean_dec(v_as_x27_5811_);
lean_dec(v_as_5810_);
lean_dec_ref(v_val_5809_);
return v_res_5818_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(lean_object* v_as_5819_, lean_object* v_as_x27_5820_, lean_object* v_b_5821_, lean_object* v_a_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_){
_start:
{
lean_object* v___x_5826_; 
v___x_5826_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v_as_x27_5820_, v_b_5821_, v___y_5823_, v___y_5824_);
return v___x_5826_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object* v_as_5827_, lean_object* v_as_x27_5828_, lean_object* v_b_5829_, lean_object* v_a_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_){
_start:
{
lean_object* v_res_5834_; 
v_res_5834_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(v_as_5827_, v_as_x27_5828_, v_b_5829_, v_a_5830_, v___y_5831_, v___y_5832_);
lean_dec_ref(v___y_5831_);
lean_dec(v_as_x27_5828_);
lean_dec(v_as_5827_);
return v_res_5834_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21(lean_object* v_as_5835_, lean_object* v_as_x27_5836_, lean_object* v_b_5837_, lean_object* v_a_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_){
_start:
{
lean_object* v___x_5842_; 
v___x_5842_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(v_as_x27_5836_, v_b_5837_, v___y_5839_, v___y_5840_);
return v___x_5842_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object* v_as_5843_, lean_object* v_as_x27_5844_, lean_object* v_b_5845_, lean_object* v_a_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_){
_start:
{
lean_object* v_res_5850_; 
v_res_5850_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21(v_as_5843_, v_as_x27_5844_, v_b_5845_, v_a_5846_, v___y_5847_, v___y_5848_);
lean_dec_ref(v___y_5847_);
lean_dec(v_as_x27_5844_);
lean_dec(v_as_5843_);
return v_res_5850_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1(void){
_start:
{
lean_object* v___x_5852_; lean_object* v___x_5853_; 
v___x_5852_ = l_Lean_versionString;
v___x_5853_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5853_, 0, v___x_5852_);
return v___x_5853_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2(void){
_start:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; 
v___x_5854_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1);
v___x_5855_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0));
v___x_5856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5856_, 0, v___x_5855_);
lean_ctor_set(v___x_5856_, 1, v___x_5854_);
return v___x_5856_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4(void){
_start:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = l_Lean_githash;
v___x_5859_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5859_, 0, v___x_5858_);
return v___x_5859_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5(void){
_start:
{
lean_object* v___x_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; 
v___x_5860_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4);
v___x_5861_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3));
v___x_5862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5862_, 0, v___x_5861_);
lean_ctor_set(v___x_5862_, 1, v___x_5860_);
return v___x_5862_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6(void){
_start:
{
lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; 
v___x_5863_ = lean_box(0);
v___x_5864_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5);
v___x_5865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5865_, 0, v___x_5864_);
lean_ctor_set(v___x_5865_, 1, v___x_5863_);
return v___x_5865_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7(void){
_start:
{
lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; 
v___x_5866_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6);
v___x_5867_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2);
v___x_5868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5868_, 0, v___x_5867_);
lean_ctor_set(v___x_5868_, 1, v___x_5866_);
return v___x_5868_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8(void){
_start:
{
lean_object* v___x_5869_; lean_object* v_leanMeta_5870_; 
v___x_5869_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7);
v_leanMeta_5870_ = l_Lean_Json_mkObj(v___x_5869_);
return v_leanMeta_5870_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17(void){
_start:
{
lean_object* v___x_5889_; lean_object* v_exporterMeta_5890_; 
v___x_5889_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16));
v_exporterMeta_5890_ = l_Lean_Json_mkObj(v___x_5889_);
return v_exporterMeta_5890_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18(void){
_start:
{
lean_object* v___x_5891_; lean_object* v_formatMeta_5892_; 
v___x_5891_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15));
v_formatMeta_5892_ = l_Lean_Json_mkObj(v___x_5891_);
return v_formatMeta_5892_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21(void){
_start:
{
lean_object* v_exporterMeta_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; 
v_exporterMeta_5895_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17);
v___x_5896_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20));
v___x_5897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5897_, 0, v___x_5896_);
lean_ctor_set(v___x_5897_, 1, v_exporterMeta_5895_);
return v___x_5897_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23(void){
_start:
{
lean_object* v_leanMeta_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; 
v_leanMeta_5899_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8);
v___x_5900_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22));
v___x_5901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5901_, 0, v___x_5900_);
lean_ctor_set(v___x_5901_, 1, v_leanMeta_5899_);
return v___x_5901_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25(void){
_start:
{
lean_object* v_formatMeta_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; 
v_formatMeta_5903_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18);
v___x_5904_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24));
v___x_5905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5905_, 0, v___x_5904_);
lean_ctor_set(v___x_5905_, 1, v_formatMeta_5903_);
return v___x_5905_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26(void){
_start:
{
lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v___x_5906_ = lean_box(0);
v___x_5907_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25);
v___x_5908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5907_);
lean_ctor_set(v___x_5908_, 1, v___x_5906_);
return v___x_5908_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27(void){
_start:
{
lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; 
v___x_5909_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26);
v___x_5910_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23);
v___x_5911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5911_, 0, v___x_5910_);
lean_ctor_set(v___x_5911_, 1, v___x_5909_);
return v___x_5911_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28(void){
_start:
{
lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; 
v___x_5912_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27);
v___x_5913_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21);
v___x_5914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5914_, 0, v___x_5913_);
lean_ctor_set(v___x_5914_, 1, v___x_5912_);
return v___x_5914_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29(void){
_start:
{
lean_object* v___x_5915_; lean_object* v___x_5916_; 
v___x_5915_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28);
v___x_5916_ = l_Lean_Json_mkObj(v___x_5915_);
return v___x_5916_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30(void){
_start:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v___x_5917_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29);
v___x_5918_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19));
v___x_5919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5919_, 0, v___x_5918_);
lean_ctor_set(v___x_5919_, 1, v___x_5917_);
return v___x_5919_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31(void){
_start:
{
lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v___x_5920_ = lean_box(0);
v___x_5921_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30);
v___x_5922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5921_);
lean_ctor_set(v___x_5922_, 1, v___x_5920_);
return v___x_5922_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32(void){
_start:
{
lean_object* v___x_5923_; lean_object* v___x_5924_; 
v___x_5923_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31);
v___x_5924_ = l_Lean_Json_mkObj(v___x_5923_);
return v___x_5924_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata(void){
_start:
{
lean_object* v___x_5925_; 
v___x_5925_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32);
return v___x_5925_;
}
}
static lean_object* _init_l_LeanExport_dumpMetadata___redArg___closed__0(void){
_start:
{
lean_object* v___x_5926_; lean_object* v___x_5927_; 
v___x_5926_ = l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
v___x_5927_ = l_Lean_Json_compress(v___x_5926_);
return v___x_5927_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object* v___y_5928_){
_start:
{
lean_object* v___x_5930_; lean_object* v___x_5931_; 
v___x_5930_ = lean_obj_once(&l_LeanExport_dumpMetadata___redArg___closed__0, &l_LeanExport_dumpMetadata___redArg___closed__0_once, _init_l_LeanExport_dumpMetadata___redArg___closed__0);
v___x_5931_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_5930_);
if (lean_obj_tag(v___x_5931_) == 0)
{
lean_object* v_a_5932_; lean_object* v___x_5934_; uint8_t v_isShared_5935_; uint8_t v_isSharedCheck_5940_; 
v_a_5932_ = lean_ctor_get(v___x_5931_, 0);
v_isSharedCheck_5940_ = !lean_is_exclusive(v___x_5931_);
if (v_isSharedCheck_5940_ == 0)
{
v___x_5934_ = v___x_5931_;
v_isShared_5935_ = v_isSharedCheck_5940_;
goto v_resetjp_5933_;
}
else
{
lean_inc(v_a_5932_);
lean_dec(v___x_5931_);
v___x_5934_ = lean_box(0);
v_isShared_5935_ = v_isSharedCheck_5940_;
goto v_resetjp_5933_;
}
v_resetjp_5933_:
{
lean_object* v___x_5936_; lean_object* v___x_5938_; 
v___x_5936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5936_, 0, v_a_5932_);
lean_ctor_set(v___x_5936_, 1, v___y_5928_);
if (v_isShared_5935_ == 0)
{
lean_ctor_set(v___x_5934_, 0, v___x_5936_);
v___x_5938_ = v___x_5934_;
goto v_reusejp_5937_;
}
else
{
lean_object* v_reuseFailAlloc_5939_; 
v_reuseFailAlloc_5939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5939_, 0, v___x_5936_);
v___x_5938_ = v_reuseFailAlloc_5939_;
goto v_reusejp_5937_;
}
v_reusejp_5937_:
{
return v___x_5938_;
}
}
}
else
{
lean_object* v_a_5941_; lean_object* v___x_5943_; uint8_t v_isShared_5944_; uint8_t v_isSharedCheck_5948_; 
lean_dec_ref(v___y_5928_);
v_a_5941_ = lean_ctor_get(v___x_5931_, 0);
v_isSharedCheck_5948_ = !lean_is_exclusive(v___x_5931_);
if (v_isSharedCheck_5948_ == 0)
{
v___x_5943_ = v___x_5931_;
v_isShared_5944_ = v_isSharedCheck_5948_;
goto v_resetjp_5942_;
}
else
{
lean_inc(v_a_5941_);
lean_dec(v___x_5931_);
v___x_5943_ = lean_box(0);
v_isShared_5944_ = v_isSharedCheck_5948_;
goto v_resetjp_5942_;
}
v_resetjp_5942_:
{
lean_object* v___x_5946_; 
if (v_isShared_5944_ == 0)
{
v___x_5946_ = v___x_5943_;
goto v_reusejp_5945_;
}
else
{
lean_object* v_reuseFailAlloc_5947_; 
v_reuseFailAlloc_5947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5947_, 0, v_a_5941_);
v___x_5946_ = v_reuseFailAlloc_5947_;
goto v_reusejp_5945_;
}
v_reusejp_5945_:
{
return v___x_5946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object* v___y_5949_, lean_object* v___y_5950_){
_start:
{
lean_object* v_res_5951_; 
v_res_5951_ = l_LeanExport_dumpMetadata___redArg(v___y_5949_);
return v_res_5951_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object* v___y_5952_, lean_object* v___y_5953_){
_start:
{
lean_object* v___x_5955_; 
v___x_5955_ = l_LeanExport_dumpMetadata___redArg(v___y_5953_);
return v___x_5955_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object* v___y_5956_, lean_object* v___y_5957_, lean_object* v___y_5958_){
_start:
{
lean_object* v_res_5959_; 
v_res_5959_ = l_LeanExport_dumpMetadata(v___y_5956_, v___y_5957_);
lean_dec_ref(v___y_5956_);
return v_res_5959_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object* v_as_x27_5960_, lean_object* v_b_5961_, lean_object* v___y_5962_, lean_object* v___y_5963_){
_start:
{
if (lean_obj_tag(v_as_x27_5960_) == 0)
{
lean_object* v___x_5965_; lean_object* v___x_5966_; 
v___x_5965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5965_, 0, v_b_5961_);
lean_ctor_set(v___x_5965_, 1, v___y_5963_);
v___x_5966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5965_);
return v___x_5966_;
}
else
{
lean_object* v_head_5967_; lean_object* v_tail_5968_; lean_object* v_visitedNames_5969_; lean_object* v_visitedLevels_5970_; lean_object* v_visitedExprs_5971_; lean_object* v_visitedConstants_5972_; uint8_t v_exportMData_5973_; uint8_t v_exportUnsafe_5974_; uint8_t v_ignoreMissing_5975_; lean_object* v_recursorMap_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_5989_; 
v_head_5967_ = lean_ctor_get(v_as_x27_5960_, 0);
v_tail_5968_ = lean_ctor_get(v_as_x27_5960_, 1);
v_visitedNames_5969_ = lean_ctor_get(v___y_5963_, 0);
v_visitedLevels_5970_ = lean_ctor_get(v___y_5963_, 1);
v_visitedExprs_5971_ = lean_ctor_get(v___y_5963_, 2);
v_visitedConstants_5972_ = lean_ctor_get(v___y_5963_, 3);
v_exportMData_5973_ = lean_ctor_get_uint8(v___y_5963_, sizeof(void*)*6);
v_exportUnsafe_5974_ = lean_ctor_get_uint8(v___y_5963_, sizeof(void*)*6 + 1);
v_ignoreMissing_5975_ = lean_ctor_get_uint8(v___y_5963_, sizeof(void*)*6 + 2);
v_recursorMap_5976_ = lean_ctor_get(v___y_5963_, 5);
v_isSharedCheck_5989_ = !lean_is_exclusive(v___y_5963_);
if (v_isSharedCheck_5989_ == 0)
{
lean_object* v_unused_5990_; 
v_unused_5990_ = lean_ctor_get(v___y_5963_, 4);
lean_dec(v_unused_5990_);
v___x_5978_ = v___y_5963_;
v_isShared_5979_ = v_isSharedCheck_5989_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_recursorMap_5976_);
lean_inc(v_visitedConstants_5972_);
lean_inc(v_visitedExprs_5971_);
lean_inc(v_visitedLevels_5970_);
lean_inc(v_visitedNames_5969_);
lean_dec(v___y_5963_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_5989_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5983_; 
v___x_5980_ = lean_box(0);
v___x_5981_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_5979_ == 0)
{
lean_ctor_set(v___x_5978_, 4, v___x_5981_);
v___x_5983_ = v___x_5978_;
goto v_reusejp_5982_;
}
else
{
lean_object* v_reuseFailAlloc_5988_; 
v_reuseFailAlloc_5988_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5988_, 0, v_visitedNames_5969_);
lean_ctor_set(v_reuseFailAlloc_5988_, 1, v_visitedLevels_5970_);
lean_ctor_set(v_reuseFailAlloc_5988_, 2, v_visitedExprs_5971_);
lean_ctor_set(v_reuseFailAlloc_5988_, 3, v_visitedConstants_5972_);
lean_ctor_set(v_reuseFailAlloc_5988_, 4, v___x_5981_);
lean_ctor_set(v_reuseFailAlloc_5988_, 5, v_recursorMap_5976_);
lean_ctor_set_uint8(v_reuseFailAlloc_5988_, sizeof(void*)*6, v_exportMData_5973_);
lean_ctor_set_uint8(v_reuseFailAlloc_5988_, sizeof(void*)*6 + 1, v_exportUnsafe_5974_);
lean_ctor_set_uint8(v_reuseFailAlloc_5988_, sizeof(void*)*6 + 2, v_ignoreMissing_5975_);
v___x_5983_ = v_reuseFailAlloc_5988_;
goto v_reusejp_5982_;
}
v_reusejp_5982_:
{
lean_object* v___x_5984_; 
lean_inc(v_head_5967_);
v___x_5984_ = l_LeanExport_dumpConstant(v_head_5967_, v___y_5962_, v___x_5983_);
if (lean_obj_tag(v___x_5984_) == 0)
{
lean_object* v_a_5985_; lean_object* v_snd_5986_; 
v_a_5985_ = lean_ctor_get(v___x_5984_, 0);
lean_inc(v_a_5985_);
lean_dec_ref_known(v___x_5984_, 1);
v_snd_5986_ = lean_ctor_get(v_a_5985_, 1);
lean_inc(v_snd_5986_);
lean_dec(v_a_5985_);
v_as_x27_5960_ = v_tail_5968_;
v_b_5961_ = v___x_5980_;
v___y_5963_ = v_snd_5986_;
goto _start;
}
else
{
return v___x_5984_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object* v_as_x27_5991_, lean_object* v_b_5992_, lean_object* v___y_5993_, lean_object* v___y_5994_, lean_object* v___y_5995_){
_start:
{
lean_object* v_res_5996_; 
v_res_5996_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_5991_, v_b_5992_, v___y_5993_, v___y_5994_);
lean_dec_ref(v___y_5993_);
lean_dec(v_as_x27_5991_);
return v_res_5996_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object* v_env_5997_, lean_object* v_cliOptions_5998_, lean_object* v___y_5999_, lean_object* v___y_6000_, lean_object* v___y_6001_){
_start:
{
lean_object* v___x_6003_; 
v___x_6003_ = l_LeanExport_initState(v_env_5997_, v_cliOptions_5998_, v___y_6000_, v___y_6001_);
if (lean_obj_tag(v___x_6003_) == 0)
{
lean_object* v_a_6004_; lean_object* v_snd_6005_; lean_object* v___x_6006_; 
v_a_6004_ = lean_ctor_get(v___x_6003_, 0);
lean_inc(v_a_6004_);
lean_dec_ref_known(v___x_6003_, 1);
v_snd_6005_ = lean_ctor_get(v_a_6004_, 1);
lean_inc(v_snd_6005_);
lean_dec(v_a_6004_);
v___x_6006_ = l_LeanExport_dumpMetadata___redArg(v_snd_6005_);
if (lean_obj_tag(v___x_6006_) == 0)
{
lean_object* v_a_6007_; lean_object* v_snd_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; 
v_a_6007_ = lean_ctor_get(v___x_6006_, 0);
lean_inc(v_a_6007_);
lean_dec_ref_known(v___x_6006_, 1);
v_snd_6008_ = lean_ctor_get(v_a_6007_, 1);
lean_inc(v_snd_6008_);
lean_dec(v_a_6007_);
v___x_6009_ = lean_box(0);
v___x_6010_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v___y_5999_, v___x_6009_, v___y_6000_, v_snd_6008_);
if (lean_obj_tag(v___x_6010_) == 0)
{
lean_object* v_a_6011_; lean_object* v___x_6013_; uint8_t v_isShared_6014_; uint8_t v_isSharedCheck_6027_; 
v_a_6011_ = lean_ctor_get(v___x_6010_, 0);
v_isSharedCheck_6027_ = !lean_is_exclusive(v___x_6010_);
if (v_isSharedCheck_6027_ == 0)
{
v___x_6013_ = v___x_6010_;
v_isShared_6014_ = v_isSharedCheck_6027_;
goto v_resetjp_6012_;
}
else
{
lean_inc(v_a_6011_);
lean_dec(v___x_6010_);
v___x_6013_ = lean_box(0);
v_isShared_6014_ = v_isSharedCheck_6027_;
goto v_resetjp_6012_;
}
v_resetjp_6012_:
{
lean_object* v_snd_6015_; lean_object* v___x_6017_; uint8_t v_isShared_6018_; uint8_t v_isSharedCheck_6025_; 
v_snd_6015_ = lean_ctor_get(v_a_6011_, 1);
v_isSharedCheck_6025_ = !lean_is_exclusive(v_a_6011_);
if (v_isSharedCheck_6025_ == 0)
{
lean_object* v_unused_6026_; 
v_unused_6026_ = lean_ctor_get(v_a_6011_, 0);
lean_dec(v_unused_6026_);
v___x_6017_ = v_a_6011_;
v_isShared_6018_ = v_isSharedCheck_6025_;
goto v_resetjp_6016_;
}
else
{
lean_inc(v_snd_6015_);
lean_dec(v_a_6011_);
v___x_6017_ = lean_box(0);
v_isShared_6018_ = v_isSharedCheck_6025_;
goto v_resetjp_6016_;
}
v_resetjp_6016_:
{
lean_object* v___x_6020_; 
if (v_isShared_6018_ == 0)
{
lean_ctor_set(v___x_6017_, 0, v___x_6009_);
v___x_6020_ = v___x_6017_;
goto v_reusejp_6019_;
}
else
{
lean_object* v_reuseFailAlloc_6024_; 
v_reuseFailAlloc_6024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6024_, 0, v___x_6009_);
lean_ctor_set(v_reuseFailAlloc_6024_, 1, v_snd_6015_);
v___x_6020_ = v_reuseFailAlloc_6024_;
goto v_reusejp_6019_;
}
v_reusejp_6019_:
{
lean_object* v___x_6022_; 
if (v_isShared_6014_ == 0)
{
lean_ctor_set(v___x_6013_, 0, v___x_6020_);
v___x_6022_ = v___x_6013_;
goto v_reusejp_6021_;
}
else
{
lean_object* v_reuseFailAlloc_6023_; 
v_reuseFailAlloc_6023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6023_, 0, v___x_6020_);
v___x_6022_ = v_reuseFailAlloc_6023_;
goto v_reusejp_6021_;
}
v_reusejp_6021_:
{
return v___x_6022_;
}
}
}
}
}
else
{
return v___x_6010_;
}
}
else
{
return v___x_6006_;
}
}
else
{
return v___x_6003_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object* v_env_6028_, lean_object* v_cliOptions_6029_, lean_object* v___y_6030_, lean_object* v___y_6031_, lean_object* v___y_6032_, lean_object* v___y_6033_){
_start:
{
lean_object* v_res_6034_; 
v_res_6034_ = l_LeanExport_dumpEnv___lam__0(v_env_6028_, v_cliOptions_6029_, v___y_6030_, v___y_6031_, v___y_6032_);
lean_dec_ref(v___y_6031_);
lean_dec(v___y_6030_);
lean_dec(v_cliOptions_6029_);
return v_res_6034_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0(lean_object* v_es_6035_, lean_object* v_a_6036_, lean_object* v_b_6037_){
_start:
{
lean_object* v___x_6038_; lean_object* v___x_6039_; 
v___x_6038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6038_, 0, v_a_6036_);
lean_ctor_set(v___x_6038_, 1, v_b_6037_);
v___x_6039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6039_, 0, v___x_6038_);
lean_ctor_set(v___x_6039_, 1, v_es_6035_);
return v___x_6039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(lean_object* v_f_6040_, lean_object* v_x_6041_, lean_object* v_x_6042_){
_start:
{
if (lean_obj_tag(v_x_6042_) == 0)
{
lean_dec(v_f_6040_);
return v_x_6041_;
}
else
{
lean_object* v_key_6043_; lean_object* v_value_6044_; lean_object* v_tail_6045_; lean_object* v___x_6046_; 
v_key_6043_ = lean_ctor_get(v_x_6042_, 0);
lean_inc(v_key_6043_);
v_value_6044_ = lean_ctor_get(v_x_6042_, 1);
lean_inc(v_value_6044_);
v_tail_6045_ = lean_ctor_get(v_x_6042_, 2);
lean_inc(v_tail_6045_);
lean_dec_ref_known(v_x_6042_, 3);
lean_inc(v_f_6040_);
v___x_6046_ = lean_apply_3(v_f_6040_, v_x_6041_, v_key_6043_, v_value_6044_);
v_x_6041_ = v___x_6046_;
v_x_6042_ = v_tail_6045_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(lean_object* v_f_6048_, lean_object* v_as_6049_, size_t v_i_6050_, size_t v_stop_6051_, lean_object* v_b_6052_){
_start:
{
uint8_t v___x_6053_; 
v___x_6053_ = lean_usize_dec_eq(v_i_6050_, v_stop_6051_);
if (v___x_6053_ == 0)
{
lean_object* v___x_6054_; lean_object* v___x_6055_; size_t v___x_6056_; size_t v___x_6057_; 
v___x_6054_ = lean_array_uget_borrowed(v_as_6049_, v_i_6050_);
lean_inc(v___x_6054_);
lean_inc(v_f_6048_);
v___x_6055_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(v_f_6048_, v_b_6052_, v___x_6054_);
v___x_6056_ = ((size_t)1ULL);
v___x_6057_ = lean_usize_add(v_i_6050_, v___x_6056_);
v_i_6050_ = v___x_6057_;
v_b_6052_ = v___x_6055_;
goto _start;
}
else
{
lean_dec(v_f_6048_);
return v_b_6052_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_f_6059_, lean_object* v_as_6060_, lean_object* v_i_6061_, lean_object* v_stop_6062_, lean_object* v_b_6063_){
_start:
{
size_t v_i_boxed_6064_; size_t v_stop_boxed_6065_; lean_object* v_res_6066_; 
v_i_boxed_6064_ = lean_unbox_usize(v_i_6061_);
lean_dec(v_i_6061_);
v_stop_boxed_6065_ = lean_unbox_usize(v_stop_6062_);
lean_dec(v_stop_6062_);
v_res_6066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6059_, v_as_6060_, v_i_boxed_6064_, v_stop_boxed_6065_, v_b_6063_);
lean_dec_ref(v_as_6060_);
return v_res_6066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0(lean_object* v_f_6067_, lean_object* v_x1_6068_, lean_object* v_x2_6069_, lean_object* v_x3_6070_){
_start:
{
lean_object* v___x_6071_; 
v___x_6071_ = lean_apply_3(v_f_6067_, v_x1_6068_, v_x2_6069_, v_x3_6070_);
return v___x_6071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(lean_object* v_f_6072_, lean_object* v_keys_6073_, lean_object* v_vals_6074_, lean_object* v_i_6075_, lean_object* v_acc_6076_){
_start:
{
lean_object* v___x_6077_; uint8_t v___x_6078_; 
v___x_6077_ = lean_array_get_size(v_keys_6073_);
v___x_6078_ = lean_nat_dec_lt(v_i_6075_, v___x_6077_);
if (v___x_6078_ == 0)
{
lean_dec(v_i_6075_);
lean_dec(v_f_6072_);
return v_acc_6076_;
}
else
{
lean_object* v_k_6079_; lean_object* v_v_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; 
v_k_6079_ = lean_array_fget_borrowed(v_keys_6073_, v_i_6075_);
v_v_6080_ = lean_array_fget_borrowed(v_vals_6074_, v_i_6075_);
lean_inc(v_f_6072_);
lean_inc(v_v_6080_);
lean_inc(v_k_6079_);
v___x_6081_ = lean_apply_3(v_f_6072_, v_acc_6076_, v_k_6079_, v_v_6080_);
v___x_6082_ = lean_unsigned_to_nat(1u);
v___x_6083_ = lean_nat_add(v_i_6075_, v___x_6082_);
lean_dec(v_i_6075_);
v_i_6075_ = v___x_6083_;
v_acc_6076_ = v___x_6081_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg___boxed(lean_object* v_f_6085_, lean_object* v_keys_6086_, lean_object* v_vals_6087_, lean_object* v_i_6088_, lean_object* v_acc_6089_){
_start:
{
lean_object* v_res_6090_; 
v_res_6090_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6085_, v_keys_6086_, v_vals_6087_, v_i_6088_, v_acc_6089_);
lean_dec_ref(v_vals_6087_);
lean_dec_ref(v_keys_6086_);
return v_res_6090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(lean_object* v_f_6091_, lean_object* v_as_6092_, size_t v_i_6093_, size_t v_stop_6094_, lean_object* v_b_6095_){
_start:
{
lean_object* v___y_6097_; uint8_t v___x_6101_; 
v___x_6101_ = lean_usize_dec_eq(v_i_6093_, v_stop_6094_);
if (v___x_6101_ == 0)
{
lean_object* v___x_6102_; 
v___x_6102_ = lean_array_uget_borrowed(v_as_6092_, v_i_6093_);
switch(lean_obj_tag(v___x_6102_))
{
case 0:
{
lean_object* v_key_6103_; lean_object* v_val_6104_; lean_object* v___x_6105_; 
v_key_6103_ = lean_ctor_get(v___x_6102_, 0);
v_val_6104_ = lean_ctor_get(v___x_6102_, 1);
lean_inc(v_f_6091_);
lean_inc(v_val_6104_);
lean_inc(v_key_6103_);
v___x_6105_ = lean_apply_3(v_f_6091_, v_b_6095_, v_key_6103_, v_val_6104_);
v___y_6097_ = v___x_6105_;
goto v___jp_6096_;
}
case 1:
{
lean_object* v_node_6106_; lean_object* v___x_6107_; 
v_node_6106_ = lean_ctor_get(v___x_6102_, 0);
lean_inc(v_f_6091_);
v___x_6107_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6091_, v_node_6106_, v_b_6095_);
v___y_6097_ = v___x_6107_;
goto v___jp_6096_;
}
default: 
{
v___y_6097_ = v_b_6095_;
goto v___jp_6096_;
}
}
}
else
{
lean_dec(v_f_6091_);
return v_b_6095_;
}
v___jp_6096_:
{
size_t v___x_6098_; size_t v___x_6099_; 
v___x_6098_ = ((size_t)1ULL);
v___x_6099_ = lean_usize_add(v_i_6093_, v___x_6098_);
v_i_6093_ = v___x_6099_;
v_b_6095_ = v___y_6097_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object* v_f_6108_, lean_object* v_x_6109_, lean_object* v_x_6110_){
_start:
{
if (lean_obj_tag(v_x_6109_) == 0)
{
lean_object* v_es_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; uint8_t v___x_6114_; 
v_es_6111_ = lean_ctor_get(v_x_6109_, 0);
v___x_6112_ = lean_unsigned_to_nat(0u);
v___x_6113_ = lean_array_get_size(v_es_6111_);
v___x_6114_ = lean_nat_dec_lt(v___x_6112_, v___x_6113_);
if (v___x_6114_ == 0)
{
lean_dec(v_f_6108_);
return v_x_6110_;
}
else
{
size_t v___x_6115_; size_t v___x_6116_; lean_object* v___x_6117_; 
v___x_6115_ = ((size_t)0ULL);
v___x_6116_ = lean_usize_of_nat(v___x_6113_);
v___x_6117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6108_, v_es_6111_, v___x_6115_, v___x_6116_, v_x_6110_);
return v___x_6117_;
}
}
else
{
lean_object* v_ks_6118_; lean_object* v_vs_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; 
v_ks_6118_ = lean_ctor_get(v_x_6109_, 0);
v_vs_6119_ = lean_ctor_get(v_x_6109_, 1);
v___x_6120_ = lean_unsigned_to_nat(0u);
v___x_6121_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6108_, v_ks_6118_, v_vs_6119_, v___x_6120_, v_x_6110_);
return v___x_6121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg___boxed(lean_object* v_f_6122_, lean_object* v_x_6123_, lean_object* v_x_6124_){
_start:
{
lean_object* v_res_6125_; 
v_res_6125_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6122_, v_x_6123_, v_x_6124_);
lean_dec_ref(v_x_6123_);
return v_res_6125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_f_6126_, lean_object* v_as_6127_, lean_object* v_i_6128_, lean_object* v_stop_6129_, lean_object* v_b_6130_){
_start:
{
size_t v_i_boxed_6131_; size_t v_stop_boxed_6132_; lean_object* v_res_6133_; 
v_i_boxed_6131_ = lean_unbox_usize(v_i_6128_);
lean_dec(v_i_6128_);
v_stop_boxed_6132_ = lean_unbox_usize(v_stop_6129_);
lean_dec(v_stop_6129_);
v_res_6133_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6126_, v_as_6127_, v_i_boxed_6131_, v_stop_boxed_6132_, v_b_6130_);
lean_dec_ref(v_as_6127_);
return v_res_6133_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(lean_object* v_map_6134_, lean_object* v_f_6135_, lean_object* v_init_6136_){
_start:
{
lean_object* v___f_6137_; lean_object* v___x_6138_; 
v___f_6137_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6137_, 0, v_f_6135_);
v___x_6138_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v___f_6137_, v_map_6134_, v_init_6136_);
return v___x_6138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_map_6139_, lean_object* v_f_6140_, lean_object* v_init_6141_){
_start:
{
lean_object* v_res_6142_; 
v_res_6142_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_6139_, v_f_6140_, v_init_6141_);
lean_dec_ref(v_map_6139_);
return v_res_6142_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(lean_object* v_f_6143_, lean_object* v_init_6144_, lean_object* v_m_6145_){
_start:
{
lean_object* v_map_u2081_6146_; lean_object* v_map_u2082_6147_; lean_object* v_buckets_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; uint8_t v___x_6151_; 
v_map_u2081_6146_ = lean_ctor_get(v_m_6145_, 0);
v_map_u2082_6147_ = lean_ctor_get(v_m_6145_, 1);
v_buckets_6148_ = lean_ctor_get(v_map_u2081_6146_, 1);
v___x_6149_ = lean_unsigned_to_nat(0u);
v___x_6150_ = lean_array_get_size(v_buckets_6148_);
v___x_6151_ = lean_nat_dec_lt(v___x_6149_, v___x_6150_);
if (v___x_6151_ == 0)
{
lean_object* v___x_6152_; 
v___x_6152_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_u2082_6147_, v_f_6143_, v_init_6144_);
return v___x_6152_;
}
else
{
size_t v___x_6153_; size_t v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; 
v___x_6153_ = ((size_t)0ULL);
v___x_6154_ = lean_usize_of_nat(v___x_6150_);
lean_inc(v_f_6143_);
v___x_6155_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6143_, v_buckets_6148_, v___x_6153_, v___x_6154_, v_init_6144_);
v___x_6156_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_u2082_6147_, v_f_6143_, v___x_6155_);
return v___x_6156_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg___boxed(lean_object* v_f_6157_, lean_object* v_init_6158_, lean_object* v_m_6159_){
_start:
{
lean_object* v_res_6160_; 
v_res_6160_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v_f_6157_, v_init_6158_, v_m_6159_);
lean_dec_ref(v_m_6159_);
return v_res_6160_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(lean_object* v_m_6162_){
_start:
{
lean_object* v___f_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; 
v___f_6163_ = ((lean_object*)(l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0));
v___x_6164_ = lean_box(0);
v___x_6165_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v___f_6163_, v___x_6164_, v_m_6162_);
return v___x_6165_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___boxed(lean_object* v_m_6166_){
_start:
{
lean_object* v_res_6167_; 
v_res_6167_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v_m_6166_);
lean_dec_ref(v_m_6166_);
return v_res_6167_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(lean_object* v_a_6168_, lean_object* v_a_6169_){
_start:
{
if (lean_obj_tag(v_a_6168_) == 0)
{
lean_object* v___x_6170_; 
v___x_6170_ = l_List_reverse___redArg(v_a_6169_);
return v___x_6170_;
}
else
{
lean_object* v_head_6171_; lean_object* v_tail_6172_; lean_object* v___x_6174_; uint8_t v_isShared_6175_; uint8_t v_isSharedCheck_6182_; 
v_head_6171_ = lean_ctor_get(v_a_6168_, 0);
v_tail_6172_ = lean_ctor_get(v_a_6168_, 1);
v_isSharedCheck_6182_ = !lean_is_exclusive(v_a_6168_);
if (v_isSharedCheck_6182_ == 0)
{
v___x_6174_ = v_a_6168_;
v_isShared_6175_ = v_isSharedCheck_6182_;
goto v_resetjp_6173_;
}
else
{
lean_inc(v_tail_6172_);
lean_inc(v_head_6171_);
lean_dec(v_a_6168_);
v___x_6174_ = lean_box(0);
v_isShared_6175_ = v_isSharedCheck_6182_;
goto v_resetjp_6173_;
}
v_resetjp_6173_:
{
uint8_t v___x_6176_; 
v___x_6176_ = l_Lean_Name_isInternal(v_head_6171_);
if (v___x_6176_ == 0)
{
lean_object* v___x_6178_; 
if (v_isShared_6175_ == 0)
{
lean_ctor_set(v___x_6174_, 1, v_a_6169_);
v___x_6178_ = v___x_6174_;
goto v_reusejp_6177_;
}
else
{
lean_object* v_reuseFailAlloc_6180_; 
v_reuseFailAlloc_6180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6180_, 0, v_head_6171_);
lean_ctor_set(v_reuseFailAlloc_6180_, 1, v_a_6169_);
v___x_6178_ = v_reuseFailAlloc_6180_;
goto v_reusejp_6177_;
}
v_reusejp_6177_:
{
v_a_6168_ = v_tail_6172_;
v_a_6169_ = v___x_6178_;
goto _start;
}
}
else
{
lean_del_object(v___x_6174_);
lean_dec(v_head_6171_);
v_a_6168_ = v_tail_6172_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object* v_a_6183_, lean_object* v_a_6184_){
_start:
{
if (lean_obj_tag(v_a_6183_) == 0)
{
lean_object* v___x_6185_; 
v___x_6185_ = l_List_reverse___redArg(v_a_6184_);
return v___x_6185_;
}
else
{
lean_object* v_head_6186_; lean_object* v_tail_6187_; lean_object* v___x_6189_; uint8_t v_isShared_6190_; uint8_t v_isSharedCheck_6196_; 
v_head_6186_ = lean_ctor_get(v_a_6183_, 0);
v_tail_6187_ = lean_ctor_get(v_a_6183_, 1);
v_isSharedCheck_6196_ = !lean_is_exclusive(v_a_6183_);
if (v_isSharedCheck_6196_ == 0)
{
v___x_6189_ = v_a_6183_;
v_isShared_6190_ = v_isSharedCheck_6196_;
goto v_resetjp_6188_;
}
else
{
lean_inc(v_tail_6187_);
lean_inc(v_head_6186_);
lean_dec(v_a_6183_);
v___x_6189_ = lean_box(0);
v_isShared_6190_ = v_isSharedCheck_6196_;
goto v_resetjp_6188_;
}
v_resetjp_6188_:
{
lean_object* v_fst_6191_; lean_object* v___x_6193_; 
v_fst_6191_ = lean_ctor_get(v_head_6186_, 0);
lean_inc(v_fst_6191_);
lean_dec(v_head_6186_);
if (v_isShared_6190_ == 0)
{
lean_ctor_set(v___x_6189_, 1, v_a_6184_);
lean_ctor_set(v___x_6189_, 0, v_fst_6191_);
v___x_6193_ = v___x_6189_;
goto v_reusejp_6192_;
}
else
{
lean_object* v_reuseFailAlloc_6195_; 
v_reuseFailAlloc_6195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6195_, 0, v_fst_6191_);
lean_ctor_set(v_reuseFailAlloc_6195_, 1, v_a_6184_);
v___x_6193_ = v_reuseFailAlloc_6195_;
goto v_reusejp_6192_;
}
v_reusejp_6192_:
{
v_a_6183_ = v_tail_6187_;
v_a_6184_ = v___x_6193_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object* v_env_6197_, lean_object* v_constants_x3f_6198_, lean_object* v_cliOptions_6199_){
_start:
{
lean_object* v___y_6202_; 
if (lean_obj_tag(v_constants_x3f_6198_) == 0)
{
lean_object* v___x_6205_; lean_object* v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; 
lean_inc_ref(v_env_6197_);
v___x_6205_ = l_Lean_Environment_constants(v_env_6197_);
v___x_6206_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v___x_6205_);
lean_dec_ref(v___x_6205_);
v___x_6207_ = lean_box(0);
v___x_6208_ = l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(v___x_6206_, v___x_6207_);
v___x_6209_ = l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(v___x_6208_, v___x_6207_);
v___y_6202_ = v___x_6209_;
goto v___jp_6201_;
}
else
{
lean_object* v_val_6210_; 
v_val_6210_ = lean_ctor_get(v_constants_x3f_6198_, 0);
lean_inc(v_val_6210_);
lean_dec_ref_known(v_constants_x3f_6198_, 1);
v___y_6202_ = v_val_6210_;
goto v___jp_6201_;
}
v___jp_6201_:
{
lean_object* v___f_6203_; lean_object* v___x_6204_; 
lean_inc_ref(v_env_6197_);
v___f_6203_ = lean_alloc_closure((void*)(l_LeanExport_dumpEnv___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6203_, 0, v_env_6197_);
lean_closure_set(v___f_6203_, 1, v_cliOptions_6199_);
lean_closure_set(v___f_6203_, 2, v___y_6202_);
v___x_6204_ = l_LeanExport_M_run___redArg(v_env_6197_, v___f_6203_);
return v___x_6204_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object* v_env_6211_, lean_object* v_constants_x3f_6212_, lean_object* v_cliOptions_6213_, lean_object* v___y_6214_){
_start:
{
lean_object* v_res_6215_; 
v_res_6215_ = l_LeanExport_dumpEnv(v_env_6211_, v_constants_x3f_6212_, v_cliOptions_6213_);
return v_res_6215_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object* v_as_6216_, lean_object* v_as_x27_6217_, lean_object* v_b_6218_, lean_object* v_a_6219_, lean_object* v___y_6220_, lean_object* v___y_6221_){
_start:
{
lean_object* v___x_6223_; 
v___x_6223_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6217_, v_b_6218_, v___y_6220_, v___y_6221_);
return v___x_6223_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object* v_as_6224_, lean_object* v_as_x27_6225_, lean_object* v_b_6226_, lean_object* v_a_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_){
_start:
{
lean_object* v_res_6231_; 
v_res_6231_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(v_as_6224_, v_as_x27_6225_, v_b_6226_, v_a_6227_, v___y_6228_, v___y_6229_);
lean_dec_ref(v___y_6228_);
lean_dec(v_as_x27_6225_);
lean_dec(v_as_6224_);
return v_res_6231_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(lean_object* v_00_u03b2_6232_, lean_object* v_m_6233_){
_start:
{
lean_object* v___x_6234_; 
v___x_6234_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v_m_6233_);
return v___x_6234_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___boxed(lean_object* v_00_u03b2_6235_, lean_object* v_m_6236_){
_start:
{
lean_object* v_res_6237_; 
v_res_6237_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(v_00_u03b2_6235_, v_m_6236_);
lean_dec_ref(v_m_6236_);
return v_res_6237_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(lean_object* v_00_u03b2_6238_, lean_object* v_00_u03c3_6239_, lean_object* v_f_6240_, lean_object* v_init_6241_, lean_object* v_m_6242_){
_start:
{
lean_object* v___x_6243_; 
v___x_6243_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v_f_6240_, v_init_6241_, v_m_6242_);
return v___x_6243_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___boxed(lean_object* v_00_u03b2_6244_, lean_object* v_00_u03c3_6245_, lean_object* v_f_6246_, lean_object* v_init_6247_, lean_object* v_m_6248_){
_start:
{
lean_object* v_res_6249_; 
v_res_6249_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(v_00_u03b2_6244_, v_00_u03c3_6245_, v_f_6246_, v_init_6247_, v_m_6248_);
lean_dec_ref(v_m_6248_);
return v_res_6249_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_6250_, lean_object* v_00_u03c3_6251_, lean_object* v_f_6252_, lean_object* v_x_6253_, lean_object* v_x_6254_){
_start:
{
lean_object* v___x_6255_; 
v___x_6255_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(v_f_6252_, v_x_6253_, v_x_6254_);
return v___x_6255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(lean_object* v_00_u03c3_6256_, lean_object* v_00_u03b2_6257_, lean_object* v_map_6258_, lean_object* v_f_6259_, lean_object* v_init_6260_){
_start:
{
lean_object* v___x_6261_; 
v___x_6261_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_6258_, v_f_6259_, v_init_6260_);
return v___x_6261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6262_, lean_object* v_00_u03b2_6263_, lean_object* v_map_6264_, lean_object* v_f_6265_, lean_object* v_init_6266_){
_start:
{
lean_object* v_res_6267_; 
v_res_6267_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(v_00_u03c3_6262_, v_00_u03b2_6263_, v_map_6264_, v_f_6265_, v_init_6266_);
lean_dec_ref(v_map_6264_);
return v_res_6267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_6268_, lean_object* v_00_u03c3_6269_, lean_object* v_f_6270_, lean_object* v_as_6271_, size_t v_i_6272_, size_t v_stop_6273_, lean_object* v_b_6274_){
_start:
{
lean_object* v___x_6275_; 
v___x_6275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6270_, v_as_6271_, v_i_6272_, v_stop_6273_, v_b_6274_);
return v___x_6275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_6276_, lean_object* v_00_u03c3_6277_, lean_object* v_f_6278_, lean_object* v_as_6279_, lean_object* v_i_6280_, lean_object* v_stop_6281_, lean_object* v_b_6282_){
_start:
{
size_t v_i_boxed_6283_; size_t v_stop_boxed_6284_; lean_object* v_res_6285_; 
v_i_boxed_6283_ = lean_unbox_usize(v_i_6280_);
lean_dec(v_i_6280_);
v_stop_boxed_6284_ = lean_unbox_usize(v_stop_6281_);
lean_dec(v_stop_6281_);
v_res_6285_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(v_00_u03b2_6276_, v_00_u03c3_6277_, v_f_6278_, v_as_6279_, v_i_boxed_6283_, v_stop_boxed_6284_, v_b_6282_);
lean_dec_ref(v_as_6279_);
return v_res_6285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(lean_object* v_map_6286_, lean_object* v_f_6287_, lean_object* v_init_6288_){
_start:
{
lean_object* v___x_6289_; 
v___x_6289_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6287_, v_map_6286_, v_init_6288_);
return v___x_6289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_map_6290_, lean_object* v_f_6291_, lean_object* v_init_6292_){
_start:
{
lean_object* v_res_6293_; 
v_res_6293_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(v_map_6290_, v_f_6291_, v_init_6292_);
lean_dec_ref(v_map_6290_);
return v_res_6293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(lean_object* v_00_u03c3_6294_, lean_object* v_00_u03b2_6295_, lean_object* v_map_6296_, lean_object* v_f_6297_, lean_object* v_init_6298_){
_start:
{
lean_object* v___x_6299_; 
v___x_6299_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6297_, v_map_6296_, v_init_6298_);
return v___x_6299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03c3_6300_, lean_object* v_00_u03b2_6301_, lean_object* v_map_6302_, lean_object* v_f_6303_, lean_object* v_init_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(v_00_u03c3_6300_, v_00_u03b2_6301_, v_map_6302_, v_f_6303_, v_init_6304_);
lean_dec_ref(v_map_6302_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object* v_00_u03c3_6306_, lean_object* v_00_u03b1_6307_, lean_object* v_00_u03b2_6308_, lean_object* v_f_6309_, lean_object* v_x_6310_, lean_object* v_x_6311_){
_start:
{
lean_object* v___x_6312_; 
v___x_6312_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6309_, v_x_6310_, v_x_6311_);
return v___x_6312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_00_u03c3_6313_, lean_object* v_00_u03b1_6314_, lean_object* v_00_u03b2_6315_, lean_object* v_f_6316_, lean_object* v_x_6317_, lean_object* v_x_6318_){
_start:
{
lean_object* v_res_6319_; 
v_res_6319_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(v_00_u03c3_6313_, v_00_u03b1_6314_, v_00_u03b2_6315_, v_f_6316_, v_x_6317_, v_x_6318_);
lean_dec_ref(v_x_6317_);
return v_res_6319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_6320_, lean_object* v_00_u03b2_6321_, lean_object* v_00_u03c3_6322_, lean_object* v_f_6323_, lean_object* v_as_6324_, size_t v_i_6325_, size_t v_stop_6326_, lean_object* v_b_6327_){
_start:
{
lean_object* v___x_6328_; 
v___x_6328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6323_, v_as_6324_, v_i_6325_, v_stop_6326_, v_b_6327_);
return v___x_6328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_6329_, lean_object* v_00_u03b2_6330_, lean_object* v_00_u03c3_6331_, lean_object* v_f_6332_, lean_object* v_as_6333_, lean_object* v_i_6334_, lean_object* v_stop_6335_, lean_object* v_b_6336_){
_start:
{
size_t v_i_boxed_6337_; size_t v_stop_boxed_6338_; lean_object* v_res_6339_; 
v_i_boxed_6337_ = lean_unbox_usize(v_i_6334_);
lean_dec(v_i_6334_);
v_stop_boxed_6338_ = lean_unbox_usize(v_stop_6335_);
lean_dec(v_stop_6335_);
v_res_6339_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(v_00_u03b1_6329_, v_00_u03b2_6330_, v_00_u03c3_6331_, v_f_6332_, v_as_6333_, v_i_boxed_6337_, v_stop_boxed_6338_, v_b_6336_);
lean_dec_ref(v_as_6333_);
return v_res_6339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(lean_object* v_00_u03c3_6340_, lean_object* v_00_u03b1_6341_, lean_object* v_00_u03b2_6342_, lean_object* v_f_6343_, lean_object* v_keys_6344_, lean_object* v_vals_6345_, lean_object* v_heq_6346_, lean_object* v_i_6347_, lean_object* v_acc_6348_){
_start:
{
lean_object* v___x_6349_; 
v___x_6349_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6343_, v_keys_6344_, v_vals_6345_, v_i_6347_, v_acc_6348_);
return v___x_6349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___boxed(lean_object* v_00_u03c3_6350_, lean_object* v_00_u03b1_6351_, lean_object* v_00_u03b2_6352_, lean_object* v_f_6353_, lean_object* v_keys_6354_, lean_object* v_vals_6355_, lean_object* v_heq_6356_, lean_object* v_i_6357_, lean_object* v_acc_6358_){
_start:
{
lean_object* v_res_6359_; 
v_res_6359_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(v_00_u03c3_6350_, v_00_u03b1_6351_, v_00_u03b2_6352_, v_f_6353_, v_keys_6354_, v_vals_6355_, v_heq_6356_, v_i_6357_, v_acc_6358_);
lean_dec_ref(v_vals_6355_);
lean_dec_ref(v_keys_6354_);
return v_res_6359_;
}
}
lean_object* runtime_initialize_Lean(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_LeanExport_Basic_0__LeanExport_exportMetadata = _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata();
lean_mark_persistent(l___private_LeanExport_Basic_0__LeanExport_exportMetadata);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanExport_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanExport_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanExport_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
