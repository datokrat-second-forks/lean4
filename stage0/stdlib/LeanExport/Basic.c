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
lean_object* l_instMonadEIO___redArg();
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
static lean_once_cell_t l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0;
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
static lean_object* _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_instMonadEIO___redArg();
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object* v_msg_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1282_; lean_object* v___f_1283_; lean_object* v___f_1284_; lean_object* v___f_1285_; lean_object* v___f_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_2133__overap_1296_; lean_object* v___x_1297_; 
v___x_1282_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_1283_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1283_, 0, v___x_1282_);
v___f_1284_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1284_, 0, v___x_1282_);
v___f_1285_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1285_, 0, v___x_1282_);
v___f_1286_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1286_, 0, v___x_1282_);
v___x_1287_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1287_, 0, lean_box(0));
lean_closure_set(v___x_1287_, 1, lean_box(0));
lean_closure_set(v___x_1287_, 2, v___x_1282_);
v___x_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___f_1283_);
v___x_1289_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1289_, 0, lean_box(0));
lean_closure_set(v___x_1289_, 1, lean_box(0));
lean_closure_set(v___x_1289_, 2, v___x_1282_);
v___x_1290_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
lean_ctor_set(v___x_1290_, 2, v___f_1284_);
lean_ctor_set(v___x_1290_, 3, v___f_1285_);
lean_ctor_set(v___x_1290_, 4, v___f_1286_);
v___x_1291_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1291_, 0, lean_box(0));
lean_closure_set(v___x_1291_, 1, lean_box(0));
lean_closure_set(v___x_1291_, 2, v___x_1282_);
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1290_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_box(0);
v___x_1294_ = l_instInhabitedOfMonad___redArg(v___x_1292_, v___x_1293_);
v___x_1295_ = l_instInhabitedReaderT___redArg(v___x_1294_);
v___x_2133__overap_1296_ = lean_panic_fn_borrowed(v___x_1295_, v_msg_1278_);
lean_dec(v___x_1295_);
lean_inc_ref(v___y_1279_);
v___x_1297_ = lean_apply_3(v___x_2133__overap_1296_, v___y_1279_, v___y_1280_, lean_box(0));
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object* v_msg_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v_msg_1298_, v___y_1299_, v___y_1300_);
lean_dec_ref(v___y_1299_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object* v_a_1303_, lean_object* v_x_1304_){
_start:
{
if (lean_obj_tag(v_x_1304_) == 0)
{
lean_object* v___x_1305_; 
v___x_1305_ = lean_box(0);
return v___x_1305_;
}
else
{
lean_object* v_key_1306_; lean_object* v_value_1307_; lean_object* v_tail_1308_; uint8_t v___x_1309_; 
v_key_1306_ = lean_ctor_get(v_x_1304_, 0);
v_value_1307_ = lean_ctor_get(v_x_1304_, 1);
v_tail_1308_ = lean_ctor_get(v_x_1304_, 2);
v___x_1309_ = lean_name_eq(v_key_1306_, v_a_1303_);
if (v___x_1309_ == 0)
{
v_x_1304_ = v_tail_1308_;
goto _start;
}
else
{
lean_object* v___x_1311_; 
lean_inc(v_value_1307_);
v___x_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1311_, 0, v_value_1307_);
return v___x_1311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object* v_a_1312_, lean_object* v_x_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1312_, v_x_1313_);
lean_dec(v_x_1313_);
lean_dec(v_a_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object* v_m_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_buckets_1317_; lean_object* v___x_1318_; uint64_t v___y_1320_; 
v_buckets_1317_ = lean_ctor_get(v_m_1315_, 1);
v___x_1318_ = lean_array_get_size(v_buckets_1317_);
if (lean_obj_tag(v_a_1316_) == 0)
{
uint64_t v___x_1334_; 
v___x_1334_ = 1723ULL;
v___y_1320_ = v___x_1334_;
goto v___jp_1319_;
}
else
{
uint64_t v_hash_1335_; 
v_hash_1335_ = lean_ctor_get_uint64(v_a_1316_, sizeof(void*)*2);
v___y_1320_ = v_hash_1335_;
goto v___jp_1319_;
}
v___jp_1319_:
{
uint64_t v___x_1321_; uint64_t v___x_1322_; uint64_t v_fold_1323_; uint64_t v___x_1324_; uint64_t v___x_1325_; uint64_t v___x_1326_; size_t v___x_1327_; size_t v___x_1328_; size_t v___x_1329_; size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1321_ = 32ULL;
v___x_1322_ = lean_uint64_shift_right(v___y_1320_, v___x_1321_);
v_fold_1323_ = lean_uint64_xor(v___y_1320_, v___x_1322_);
v___x_1324_ = 16ULL;
v___x_1325_ = lean_uint64_shift_right(v_fold_1323_, v___x_1324_);
v___x_1326_ = lean_uint64_xor(v_fold_1323_, v___x_1325_);
v___x_1327_ = lean_uint64_to_usize(v___x_1326_);
v___x_1328_ = lean_usize_of_nat(v___x_1318_);
v___x_1329_ = ((size_t)1ULL);
v___x_1330_ = lean_usize_sub(v___x_1328_, v___x_1329_);
v___x_1331_ = lean_usize_land(v___x_1327_, v___x_1330_);
v___x_1332_ = lean_array_uget_borrowed(v_buckets_1317_, v___x_1331_);
v___x_1333_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1316_, v___x_1332_);
return v___x_1333_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object* v_m_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1336_, v_a_1337_);
lean_dec(v_a_1337_);
lean_dec_ref(v_m_1336_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object* v_s_1339_){
_start:
{
lean_object* v___x_1341_; lean_object* v_putStr_1342_; lean_object* v___x_1343_; 
v___x_1341_ = lean_get_stdout();
v_putStr_1342_ = lean_ctor_get(v___x_1341_, 4);
lean_inc_ref(v_putStr_1342_);
lean_dec_ref(v___x_1341_);
v___x_1343_ = lean_apply_2(v_putStr_1342_, v_s_1339_, lean_box(0));
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object* v_s_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v_s_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object* v_s_1347_){
_start:
{
uint32_t v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1349_ = 10;
v___x_1350_ = lean_string_push(v_s_1347_, v___x_1349_);
v___x_1351_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v___x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object* v_s_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v_s_1352_);
return v_res_1354_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1359_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1360_ = lean_unsigned_to_nat(18u);
v___x_1361_ = lean_unsigned_to_nat(114u);
v___x_1362_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2));
v___x_1363_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1364_ = l_mkPanicMessageWithDecl(v___x_1363_, v___x_1362_, v___x_1361_, v___x_1360_, v___x_1359_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object* v_n_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_visitedNames_1373_; lean_object* v___x_1374_; 
v_visitedNames_1373_ = lean_ctor_get(v___y_1371_, 0);
v___x_1374_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_visitedNames_1373_, v_n_1369_);
if (lean_obj_tag(v___x_1374_) == 1)
{
lean_object* v_val_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1383_; 
lean_dec(v_n_1369_);
v_val_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1383_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_val_1375_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1383_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1379_, 0, v_val_1375_);
lean_ctor_set(v___x_1379_, 1, v___y_1371_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set_tag(v___x_1377_, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1379_);
v___x_1381_ = v___x_1377_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
else
{
lean_object* v___x_1384_; lean_object* v_fst_1386_; lean_object* v_snd_1387_; 
lean_dec(v___x_1374_);
v___x_1384_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0));
switch(lean_obj_tag(v_n_1369_))
{
case 0:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4, &l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4);
v___x_1429_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1428_, v___y_1370_, v___y_1371_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v_fst_1431_; lean_object* v_snd_1432_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_a_1430_);
lean_dec_ref_known(v___x_1429_, 1);
v_fst_1431_ = lean_ctor_get(v_a_1430_, 0);
lean_inc(v_fst_1431_);
v_snd_1432_ = lean_ctor_get(v_a_1430_, 1);
lean_inc(v_snd_1432_);
lean_dec(v_a_1430_);
v_fst_1386_ = v_fst_1431_;
v_snd_1387_ = v_snd_1432_;
goto v___jp_1385_;
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
v_a_1433_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1429_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1429_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
case 1:
{
lean_object* v_pre_1441_; lean_object* v_str_1442_; lean_object* v___x_1443_; 
v_pre_1441_ = lean_ctor_get(v_n_1369_, 0);
v_str_1442_ = lean_ctor_get(v_n_1369_, 1);
lean_inc(v_pre_1441_);
v___x_1443_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1441_, v___y_1370_, v___y_1371_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1472_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1446_ = v___x_1443_;
v_isShared_1447_ = v_isSharedCheck_1472_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1443_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1472_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v_fst_1448_; lean_object* v_snd_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1471_; 
v_fst_1448_ = lean_ctor_get(v_a_1444_, 0);
v_snd_1449_ = lean_ctor_get(v_a_1444_, 1);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_a_1444_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1451_ = v_a_1444_;
v_isShared_1452_ = v_isSharedCheck_1471_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_snd_1449_);
lean_inc(v_fst_1448_);
lean_dec(v_a_1444_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1471_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1457_; 
v___x_1453_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5));
v___x_1454_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1455_ = l_Lean_JsonNumber_fromNat(v_fst_1448_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set_tag(v___x_1446_, 2);
lean_ctor_set(v___x_1446_, 0, v___x_1455_);
v___x_1457_ = v___x_1446_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1459_; 
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 1, v___x_1457_);
lean_ctor_set(v___x_1451_, 0, v___x_1454_);
v___x_1459_ = v___x_1451_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1454_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_inc_ref(v_str_1442_);
v___x_1460_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1460_, 0, v_str_1442_);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1453_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = lean_box(0);
v___x_1463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1461_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1459_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
v___x_1465_ = l_Lean_Json_mkObj(v___x_1464_);
lean_dec_ref_known(v___x_1464_, 2);
v___x_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1453_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
v___x_1467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v___x_1462_);
v___x_1468_ = l_Lean_Json_mkObj(v___x_1467_);
lean_dec_ref_known(v___x_1467_, 2);
v_fst_1386_ = v___x_1468_;
v_snd_1387_ = v_snd_1449_;
goto v___jp_1385_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1369_, 2);
return v___x_1443_;
}
}
default: 
{
lean_object* v_pre_1473_; lean_object* v_i_1474_; lean_object* v___x_1475_; 
v_pre_1473_ = lean_ctor_get(v_n_1369_, 0);
v_i_1474_ = lean_ctor_get(v_n_1369_, 1);
lean_inc(v_pre_1473_);
v___x_1475_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1473_, v___y_1370_, v___y_1371_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1506_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1478_ = v___x_1475_;
v_isShared_1479_ = v_isSharedCheck_1506_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1475_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1506_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v_fst_1480_; lean_object* v_snd_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1505_; 
v_fst_1480_ = lean_ctor_get(v_a_1476_, 0);
v_snd_1481_ = lean_ctor_get(v_a_1476_, 1);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_a_1476_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1483_ = v_a_1476_;
v_isShared_1484_ = v_isSharedCheck_1505_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_snd_1481_);
lean_inc(v_fst_1480_);
lean_dec(v_a_1476_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1505_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1489_; 
v___x_1485_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7));
v___x_1486_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1487_ = l_Lean_JsonNumber_fromNat(v_fst_1480_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set_tag(v___x_1478_, 2);
lean_ctor_set(v___x_1478_, 0, v___x_1487_);
v___x_1489_ = v___x_1478_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1491_; 
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 1, v___x_1489_);
lean_ctor_set(v___x_1483_, 0, v___x_1486_);
v___x_1491_ = v___x_1483_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1492_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8));
lean_inc(v_i_1474_);
v___x_1493_ = l_Lean_JsonNumber_fromNat(v_i_1474_);
v___x_1494_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
v___x_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1492_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
v___x_1496_ = lean_box(0);
v___x_1497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1495_);
lean_ctor_set(v___x_1497_, 1, v___x_1496_);
v___x_1498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1491_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = l_Lean_Json_mkObj(v___x_1498_);
lean_dec_ref_known(v___x_1498_, 2);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1485_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
lean_ctor_set(v___x_1501_, 1, v___x_1496_);
v___x_1502_ = l_Lean_Json_mkObj(v___x_1501_);
lean_dec_ref_known(v___x_1501_, 2);
v_fst_1386_ = v___x_1502_;
v_snd_1387_ = v_snd_1481_;
goto v___jp_1385_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1369_, 2);
return v___x_1475_;
}
}
}
v___jp_1385_:
{
lean_object* v_visitedNames_1388_; lean_object* v_visitedLevels_1389_; lean_object* v_visitedExprs_1390_; lean_object* v_visitedConstants_1391_; lean_object* v_noMDataExprs_1392_; uint8_t v_exportMData_1393_; uint8_t v_exportUnsafe_1394_; uint8_t v_ignoreMissing_1395_; lean_object* v_recursorMap_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1427_; 
v_visitedNames_1388_ = lean_ctor_get(v_snd_1387_, 0);
v_visitedLevels_1389_ = lean_ctor_get(v_snd_1387_, 1);
v_visitedExprs_1390_ = lean_ctor_get(v_snd_1387_, 2);
v_visitedConstants_1391_ = lean_ctor_get(v_snd_1387_, 3);
v_noMDataExprs_1392_ = lean_ctor_get(v_snd_1387_, 4);
v_exportMData_1393_ = lean_ctor_get_uint8(v_snd_1387_, sizeof(void*)*6);
v_exportUnsafe_1394_ = lean_ctor_get_uint8(v_snd_1387_, sizeof(void*)*6 + 1);
v_ignoreMissing_1395_ = lean_ctor_get_uint8(v_snd_1387_, sizeof(void*)*6 + 2);
v_recursorMap_1396_ = lean_ctor_get(v_snd_1387_, 5);
v_isSharedCheck_1427_ = !lean_is_exclusive(v_snd_1387_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1398_ = v_snd_1387_;
v_isShared_1399_ = v_isSharedCheck_1427_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_recursorMap_1396_);
lean_inc(v_noMDataExprs_1392_);
lean_inc(v_visitedConstants_1391_);
lean_inc(v_visitedExprs_1390_);
lean_inc(v_visitedLevels_1389_);
lean_inc(v_visitedNames_1388_);
lean_dec(v_snd_1387_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1427_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v_size_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_size_1400_ = lean_ctor_get(v_visitedNames_1388_, 0);
lean_inc_n(v_size_1400_, 2);
v___x_1401_ = l_Lean_JsonNumber_fromNat(v_size_1400_);
v___x_1402_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
v___x_1403_ = l_Lean_Json_setObjVal_x21(v_fst_1386_, v___x_1384_, v___x_1402_);
v___x_1404_ = l_Lean_Json_compress(v___x_1403_);
v___x_1405_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1404_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1417_; 
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1417_ == 0)
{
lean_object* v_unused_1418_; 
v_unused_1418_ = lean_ctor_get(v___x_1405_, 0);
lean_dec(v_unused_1418_);
v___x_1407_ = v___x_1405_;
v_isShared_1408_ = v_isSharedCheck_1417_;
goto v_resetjp_1406_;
}
else
{
lean_dec(v___x_1405_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1417_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1411_; 
lean_inc(v_size_1400_);
v___x_1409_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_visitedNames_1388_, v_n_1369_, v_size_1400_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___x_1409_);
v___x_1411_ = v___x_1398_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_visitedLevels_1389_);
lean_ctor_set(v_reuseFailAlloc_1416_, 2, v_visitedExprs_1390_);
lean_ctor_set(v_reuseFailAlloc_1416_, 3, v_visitedConstants_1391_);
lean_ctor_set(v_reuseFailAlloc_1416_, 4, v_noMDataExprs_1392_);
lean_ctor_set(v_reuseFailAlloc_1416_, 5, v_recursorMap_1396_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*6, v_exportMData_1393_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*6 + 1, v_exportUnsafe_1394_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*6 + 2, v_ignoreMissing_1395_);
v___x_1411_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1412_; lean_object* v___x_1414_; 
v___x_1412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1412_, 0, v_size_1400_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 0, v___x_1412_);
v___x_1414_ = v___x_1407_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec(v_size_1400_);
lean_del_object(v___x_1398_);
lean_dec(v_recursorMap_1396_);
lean_dec_ref(v_noMDataExprs_1392_);
lean_dec_ref(v_visitedConstants_1391_);
lean_dec_ref(v_visitedExprs_1390_);
lean_dec_ref(v_visitedLevels_1389_);
lean_dec_ref(v_visitedNames_1388_);
lean_dec(v_n_1369_);
v_a_1419_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1405_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1405_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object* v_n_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_n_1507_, v___y_1508_, v___y_1509_);
lean_dec_ref(v___y_1508_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object* v_00_u03b2_1512_, lean_object* v_m_1513_, lean_object* v_a_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1513_, v_a_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object* v_00_u03b2_1516_, lean_object* v_m_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(v_00_u03b2_1516_, v_m_1517_, v_a_1518_);
lean_dec(v_a_1518_);
lean_dec_ref(v_m_1517_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object* v_00_u03b2_1520_, lean_object* v_a_1521_, lean_object* v_x_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1521_, v_x_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1524_, lean_object* v_a_1525_, lean_object* v_x_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(v_00_u03b2_1524_, v_a_1525_, v_x_1526_);
lean_dec(v_x_1526_);
lean_dec(v_a_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object* v_a_1528_, lean_object* v_x_1529_){
_start:
{
if (lean_obj_tag(v_x_1529_) == 0)
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_box(0);
return v___x_1530_;
}
else
{
lean_object* v_key_1531_; lean_object* v_value_1532_; lean_object* v_tail_1533_; uint8_t v___x_1534_; 
v_key_1531_ = lean_ctor_get(v_x_1529_, 0);
v_value_1532_ = lean_ctor_get(v_x_1529_, 1);
v_tail_1533_ = lean_ctor_get(v_x_1529_, 2);
v___x_1534_ = lean_level_eq(v_key_1531_, v_a_1528_);
if (v___x_1534_ == 0)
{
v_x_1529_ = v_tail_1533_;
goto _start;
}
else
{
lean_object* v___x_1536_; 
lean_inc(v_value_1532_);
v___x_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1536_, 0, v_value_1532_);
return v___x_1536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object* v_a_1537_, lean_object* v_x_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1537_, v_x_1538_);
lean_dec(v_x_1538_);
lean_dec(v_a_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object* v_m_1540_, lean_object* v_a_1541_){
_start:
{
lean_object* v_buckets_1542_; lean_object* v___x_1543_; uint64_t v___x_1544_; uint64_t v___x_1545_; uint64_t v___x_1546_; uint64_t v_fold_1547_; uint64_t v___x_1548_; uint64_t v___x_1549_; uint64_t v___x_1550_; size_t v___x_1551_; size_t v___x_1552_; size_t v___x_1553_; size_t v___x_1554_; size_t v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_buckets_1542_ = lean_ctor_get(v_m_1540_, 1);
v___x_1543_ = lean_array_get_size(v_buckets_1542_);
v___x_1544_ = l_Lean_Level_hash(v_a_1541_);
v___x_1545_ = 32ULL;
v___x_1546_ = lean_uint64_shift_right(v___x_1544_, v___x_1545_);
v_fold_1547_ = lean_uint64_xor(v___x_1544_, v___x_1546_);
v___x_1548_ = 16ULL;
v___x_1549_ = lean_uint64_shift_right(v_fold_1547_, v___x_1548_);
v___x_1550_ = lean_uint64_xor(v_fold_1547_, v___x_1549_);
v___x_1551_ = lean_uint64_to_usize(v___x_1550_);
v___x_1552_ = lean_usize_of_nat(v___x_1543_);
v___x_1553_ = ((size_t)1ULL);
v___x_1554_ = lean_usize_sub(v___x_1552_, v___x_1553_);
v___x_1555_ = lean_usize_land(v___x_1551_, v___x_1554_);
v___x_1556_ = lean_array_uget_borrowed(v_buckets_1542_, v___x_1555_);
v___x_1557_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1541_, v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object* v_m_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1558_, v_a_1559_);
lean_dec(v_a_1559_);
lean_dec_ref(v_m_1558_);
return v_res_1560_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1567_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1568_ = lean_unsigned_to_nat(23u);
v___x_1569_ = lean_unsigned_to_nat(132u);
v___x_1570_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5));
v___x_1571_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1572_ = l_mkPanicMessageWithDecl(v___x_1571_, v___x_1570_, v___x_1569_, v___x_1568_, v___x_1567_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object* v_l_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_visitedLevels_1577_; lean_object* v___x_1578_; 
v_visitedLevels_1577_ = lean_ctor_get(v___y_1575_, 1);
v___x_1578_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_visitedLevels_1577_, v_l_1573_);
if (lean_obj_tag(v___x_1578_) == 1)
{
lean_object* v_val_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1587_; 
lean_dec(v_l_1573_);
v_val_1579_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1581_ = v___x_1578_;
v_isShared_1582_ = v_isSharedCheck_1587_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_val_1579_);
lean_dec(v___x_1578_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1587_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1585_; 
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v_val_1579_);
lean_ctor_set(v___x_1583_, 1, v___y_1575_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set_tag(v___x_1581_, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1583_);
v___x_1585_ = v___x_1581_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___x_1583_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
else
{
lean_object* v___x_1588_; lean_object* v_fst_1590_; lean_object* v_snd_1591_; 
lean_dec(v___x_1578_);
v___x_1588_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0));
switch(lean_obj_tag(v_l_1573_))
{
case 1:
{
lean_object* v_a_1632_; lean_object* v___x_1633_; 
v_a_1632_ = lean_ctor_get(v_l_1573_, 0);
lean_inc(v_a_1632_);
v___x_1633_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1632_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1655_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1655_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1655_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v_fst_1638_; lean_object* v_snd_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1654_; 
v_fst_1638_ = lean_ctor_get(v_a_1634_, 0);
v_snd_1639_ = lean_ctor_get(v_a_1634_, 1);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_a_1634_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1641_ = v_a_1634_;
v_isShared_1642_ = v_isSharedCheck_1654_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_snd_1639_);
lean_inc(v_fst_1638_);
lean_dec(v_a_1634_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1654_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1646_; 
v___x_1643_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1));
v___x_1644_ = l_Lean_JsonNumber_fromNat(v_fst_1638_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set_tag(v___x_1636_, 2);
lean_ctor_set(v___x_1636_, 0, v___x_1644_);
v___x_1646_ = v___x_1636_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1648_; 
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 1, v___x_1646_);
lean_ctor_set(v___x_1641_, 0, v___x_1643_);
v___x_1648_ = v___x_1641_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1643_);
lean_ctor_set(v_reuseFailAlloc_1652_, 1, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1649_ = lean_box(0);
v___x_1650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1648_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
v___x_1651_ = l_Lean_Json_mkObj(v___x_1650_);
lean_dec_ref_known(v___x_1650_, 2);
v_fst_1590_ = v___x_1651_;
v_snd_1591_ = v_snd_1639_;
goto v___jp_1589_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1573_, 1);
return v___x_1633_;
}
}
case 2:
{
lean_object* v_a_1656_; lean_object* v_a_1657_; lean_object* v___x_1658_; 
v_a_1656_ = lean_ctor_get(v_l_1573_, 0);
v_a_1657_ = lean_ctor_get(v_l_1573_, 1);
lean_inc(v_a_1656_);
v___x_1658_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1656_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1703_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1703_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1703_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v_fst_1663_; lean_object* v_snd_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1702_; 
v_fst_1663_ = lean_ctor_get(v_a_1659_, 0);
v_snd_1664_ = lean_ctor_get(v_a_1659_, 1);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_a_1659_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1666_ = v_a_1659_;
v_isShared_1667_ = v_isSharedCheck_1702_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_snd_1664_);
lean_inc(v_fst_1663_);
lean_dec(v_a_1659_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1702_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; 
lean_inc(v_a_1657_);
v___x_1668_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1657_, v___y_1574_, v_snd_1664_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1701_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1671_ = v___x_1668_;
v_isShared_1672_ = v_isSharedCheck_1701_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1701_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v_fst_1673_; lean_object* v_snd_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1700_; 
v_fst_1673_ = lean_ctor_get(v_a_1669_, 0);
v_snd_1674_ = lean_ctor_get(v_a_1669_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_a_1669_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1676_ = v_a_1669_;
v_isShared_1677_ = v_isSharedCheck_1700_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_snd_1674_);
lean_inc(v_fst_1673_);
lean_dec(v_a_1669_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1700_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1678_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2));
v___x_1679_ = l_Lean_JsonNumber_fromNat(v_fst_1663_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set_tag(v___x_1671_, 2);
lean_ctor_set(v___x_1671_, 0, v___x_1679_);
v___x_1681_ = v___x_1671_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = l_Lean_JsonNumber_fromNat(v_fst_1673_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set_tag(v___x_1661_, 2);
lean_ctor_set(v___x_1661_, 0, v___x_1682_);
v___x_1684_ = v___x_1661_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1691_; 
v___x_1685_ = lean_unsigned_to_nat(2u);
v___x_1686_ = lean_mk_empty_array_with_capacity(v___x_1685_);
v___x_1687_ = lean_array_push(v___x_1686_, v___x_1681_);
v___x_1688_ = lean_array_push(v___x_1687_, v___x_1684_);
v___x_1689_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1689_);
lean_ctor_set(v___x_1676_, 0, v___x_1678_);
v___x_1691_ = v___x_1676_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1678_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v___x_1689_);
v___x_1691_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1692_ = lean_box(0);
if (v_isShared_1667_ == 0)
{
lean_ctor_set_tag(v___x_1666_, 1);
lean_ctor_set(v___x_1666_, 1, v___x_1692_);
lean_ctor_set(v___x_1666_, 0, v___x_1691_);
v___x_1694_ = v___x_1666_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_Json_mkObj(v___x_1694_);
lean_dec_ref(v___x_1694_);
v_fst_1590_ = v___x_1695_;
v_snd_1591_ = v_snd_1674_;
goto v___jp_1589_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1666_);
lean_dec(v_fst_1663_);
lean_del_object(v___x_1661_);
lean_dec_ref_known(v_l_1573_, 2);
return v___x_1668_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1573_, 2);
return v___x_1658_;
}
}
case 3:
{
lean_object* v_a_1704_; lean_object* v_a_1705_; lean_object* v___x_1706_; 
v_a_1704_ = lean_ctor_get(v_l_1573_, 0);
v_a_1705_ = lean_ctor_get(v_l_1573_, 1);
lean_inc(v_a_1704_);
v___x_1706_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1704_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1751_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1751_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1751_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v_fst_1711_; lean_object* v_snd_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1750_; 
v_fst_1711_ = lean_ctor_get(v_a_1707_, 0);
v_snd_1712_ = lean_ctor_get(v_a_1707_, 1);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_a_1707_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1714_ = v_a_1707_;
v_isShared_1715_ = v_isSharedCheck_1750_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_snd_1712_);
lean_inc(v_fst_1711_);
lean_dec(v_a_1707_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1750_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; 
lean_inc(v_a_1705_);
v___x_1716_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1705_, v___y_1574_, v_snd_1712_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1749_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1719_ = v___x_1716_;
v_isShared_1720_ = v_isSharedCheck_1749_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1716_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1749_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v_fst_1721_; lean_object* v_snd_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1748_; 
v_fst_1721_ = lean_ctor_get(v_a_1717_, 0);
v_snd_1722_ = lean_ctor_get(v_a_1717_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_a_1717_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1724_ = v_a_1717_;
v_isShared_1725_ = v_isSharedCheck_1748_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_snd_1722_);
lean_inc(v_fst_1721_);
lean_dec(v_a_1717_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1748_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1726_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3));
v___x_1727_ = l_Lean_JsonNumber_fromNat(v_fst_1711_);
if (v_isShared_1720_ == 0)
{
lean_ctor_set_tag(v___x_1719_, 2);
lean_ctor_set(v___x_1719_, 0, v___x_1727_);
v___x_1729_ = v___x_1719_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1727_);
v___x_1729_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1732_; 
v___x_1730_ = l_Lean_JsonNumber_fromNat(v_fst_1721_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set_tag(v___x_1709_, 2);
lean_ctor_set(v___x_1709_, 0, v___x_1730_);
v___x_1732_ = v___x_1709_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1739_; 
v___x_1733_ = lean_unsigned_to_nat(2u);
v___x_1734_ = lean_mk_empty_array_with_capacity(v___x_1733_);
v___x_1735_ = lean_array_push(v___x_1734_, v___x_1729_);
v___x_1736_ = lean_array_push(v___x_1735_, v___x_1732_);
v___x_1737_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 1, v___x_1737_);
lean_ctor_set(v___x_1724_, 0, v___x_1726_);
v___x_1739_ = v___x_1724_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1745_, 1, v___x_1737_);
v___x_1739_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1740_ = lean_box(0);
if (v_isShared_1715_ == 0)
{
lean_ctor_set_tag(v___x_1714_, 1);
lean_ctor_set(v___x_1714_, 1, v___x_1740_);
lean_ctor_set(v___x_1714_, 0, v___x_1739_);
v___x_1742_ = v___x_1714_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1739_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Lean_Json_mkObj(v___x_1742_);
lean_dec_ref(v___x_1742_);
v_fst_1590_ = v___x_1743_;
v_snd_1591_ = v_snd_1722_;
goto v___jp_1589_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1714_);
lean_dec(v_fst_1711_);
lean_del_object(v___x_1709_);
lean_dec_ref_known(v_l_1573_, 2);
return v___x_1716_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1573_, 2);
return v___x_1706_;
}
}
case 4:
{
lean_object* v_a_1752_; lean_object* v___x_1753_; 
v_a_1752_ = lean_ctor_get(v_l_1573_, 0);
lean_inc(v_a_1752_);
v___x_1753_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_a_1752_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1775_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1756_ = v___x_1753_;
v_isShared_1757_ = v_isSharedCheck_1775_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1753_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1775_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v_fst_1758_; lean_object* v_snd_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1774_; 
v_fst_1758_ = lean_ctor_get(v_a_1754_, 0);
v_snd_1759_ = lean_ctor_get(v_a_1754_, 1);
v_isSharedCheck_1774_ = !lean_is_exclusive(v_a_1754_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1761_ = v_a_1754_;
v_isShared_1762_ = v_isSharedCheck_1774_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_snd_1759_);
lean_inc(v_fst_1758_);
lean_dec(v_a_1754_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1774_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1763_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4));
v___x_1764_ = l_Lean_JsonNumber_fromNat(v_fst_1758_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set_tag(v___x_1756_, 2);
lean_ctor_set(v___x_1756_, 0, v___x_1764_);
v___x_1766_ = v___x_1756_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1768_; 
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 1, v___x_1766_);
lean_ctor_set(v___x_1761_, 0, v___x_1763_);
v___x_1768_ = v___x_1761_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = lean_box(0);
v___x_1770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1768_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
v___x_1771_ = l_Lean_Json_mkObj(v___x_1770_);
lean_dec_ref_known(v___x_1770_, 2);
v_fst_1590_ = v___x_1771_;
v_snd_1591_ = v_snd_1759_;
goto v___jp_1589_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1573_, 1);
return v___x_1753_;
}
}
default: 
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6, &l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6);
v___x_1777_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1776_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v_fst_1779_; lean_object* v_snd_1780_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1777_, 1);
v_fst_1779_ = lean_ctor_get(v_a_1778_, 0);
lean_inc(v_fst_1779_);
v_snd_1780_ = lean_ctor_get(v_a_1778_, 1);
lean_inc(v_snd_1780_);
lean_dec(v_a_1778_);
v_fst_1590_ = v_fst_1779_;
v_snd_1591_ = v_snd_1780_;
goto v___jp_1589_;
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec(v_l_1573_);
v_a_1781_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1777_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1777_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
}
v___jp_1589_:
{
lean_object* v_visitedLevels_1592_; lean_object* v_visitedNames_1593_; lean_object* v_visitedExprs_1594_; lean_object* v_visitedConstants_1595_; lean_object* v_noMDataExprs_1596_; uint8_t v_exportMData_1597_; uint8_t v_exportUnsafe_1598_; uint8_t v_ignoreMissing_1599_; lean_object* v_recursorMap_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1631_; 
v_visitedLevels_1592_ = lean_ctor_get(v_snd_1591_, 1);
v_visitedNames_1593_ = lean_ctor_get(v_snd_1591_, 0);
v_visitedExprs_1594_ = lean_ctor_get(v_snd_1591_, 2);
v_visitedConstants_1595_ = lean_ctor_get(v_snd_1591_, 3);
v_noMDataExprs_1596_ = lean_ctor_get(v_snd_1591_, 4);
v_exportMData_1597_ = lean_ctor_get_uint8(v_snd_1591_, sizeof(void*)*6);
v_exportUnsafe_1598_ = lean_ctor_get_uint8(v_snd_1591_, sizeof(void*)*6 + 1);
v_ignoreMissing_1599_ = lean_ctor_get_uint8(v_snd_1591_, sizeof(void*)*6 + 2);
v_recursorMap_1600_ = lean_ctor_get(v_snd_1591_, 5);
v_isSharedCheck_1631_ = !lean_is_exclusive(v_snd_1591_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1602_ = v_snd_1591_;
v_isShared_1603_ = v_isSharedCheck_1631_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_recursorMap_1600_);
lean_inc(v_noMDataExprs_1596_);
lean_inc(v_visitedConstants_1595_);
lean_inc(v_visitedExprs_1594_);
lean_inc(v_visitedLevels_1592_);
lean_inc(v_visitedNames_1593_);
lean_dec(v_snd_1591_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1631_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v_size_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v_size_1604_ = lean_ctor_get(v_visitedLevels_1592_, 0);
lean_inc_n(v_size_1604_, 2);
v___x_1605_ = l_Lean_JsonNumber_fromNat(v_size_1604_);
v___x_1606_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
v___x_1607_ = l_Lean_Json_setObjVal_x21(v_fst_1590_, v___x_1588_, v___x_1606_);
v___x_1608_ = l_Lean_Json_compress(v___x_1607_);
v___x_1609_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1608_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1621_; 
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1621_ == 0)
{
lean_object* v_unused_1622_; 
v_unused_1622_ = lean_ctor_get(v___x_1609_, 0);
lean_dec(v_unused_1622_);
v___x_1611_ = v___x_1609_;
v_isShared_1612_ = v_isSharedCheck_1621_;
goto v_resetjp_1610_;
}
else
{
lean_dec(v___x_1609_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1621_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1615_; 
lean_inc(v_size_1604_);
v___x_1613_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_visitedLevels_1592_, v_l_1573_, v_size_1604_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 1, v___x_1613_);
v___x_1615_ = v___x_1602_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_visitedNames_1593_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v___x_1613_);
lean_ctor_set(v_reuseFailAlloc_1620_, 2, v_visitedExprs_1594_);
lean_ctor_set(v_reuseFailAlloc_1620_, 3, v_visitedConstants_1595_);
lean_ctor_set(v_reuseFailAlloc_1620_, 4, v_noMDataExprs_1596_);
lean_ctor_set(v_reuseFailAlloc_1620_, 5, v_recursorMap_1600_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, sizeof(void*)*6, v_exportMData_1597_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, sizeof(void*)*6 + 1, v_exportUnsafe_1598_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, sizeof(void*)*6 + 2, v_ignoreMissing_1599_);
v___x_1615_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
lean_object* v___x_1616_; lean_object* v___x_1618_; 
v___x_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1616_, 0, v_size_1604_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v___x_1616_);
v___x_1618_ = v___x_1611_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
lean_dec(v_size_1604_);
lean_del_object(v___x_1602_);
lean_dec(v_recursorMap_1600_);
lean_dec_ref(v_noMDataExprs_1596_);
lean_dec_ref(v_visitedConstants_1595_);
lean_dec_ref(v_visitedExprs_1594_);
lean_dec_ref(v_visitedNames_1593_);
lean_dec_ref(v_visitedLevels_1592_);
lean_dec(v_l_1573_);
v_a_1623_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1609_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1609_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object* v_l_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_l_1789_, v___y_1790_, v___y_1791_);
lean_dec_ref(v___y_1790_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object* v_00_u03b2_1794_, lean_object* v_m_1795_, lean_object* v_a_1796_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1795_, v_a_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object* v_00_u03b2_1798_, lean_object* v_m_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(v_00_u03b2_1798_, v_m_1799_, v_a_1800_);
lean_dec(v_a_1800_);
lean_dec_ref(v_m_1799_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object* v_00_u03b2_1802_, lean_object* v_a_1803_, lean_object* v_x_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1803_, v_x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1806_, lean_object* v_a_1807_, lean_object* v_x_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(v_00_u03b2_1806_, v_a_1807_, v_x_1808_);
lean_dec(v_x_1808_);
lean_dec(v_a_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
if (lean_obj_tag(v_a_1810_) == 0)
{
lean_object* v___x_1812_; 
v___x_1812_ = l_List_reverse___redArg(v_a_1811_);
return v___x_1812_;
}
else
{
lean_object* v_head_1813_; lean_object* v_tail_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1823_; 
v_head_1813_ = lean_ctor_get(v_a_1810_, 0);
v_tail_1814_ = lean_ctor_get(v_a_1810_, 1);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_a_1810_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1816_ = v_a_1810_;
v_isShared_1817_ = v_isSharedCheck_1823_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_tail_1814_);
lean_inc(v_head_1813_);
lean_dec(v_a_1810_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1823_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1818_; lean_object* v___x_1820_; 
v___x_1818_ = l_Lean_Level_param___override(v_head_1813_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 1, v_a_1811_);
lean_ctor_set(v___x_1816_, 0, v___x_1818_);
v___x_1820_ = v___x_1816_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_a_1811_);
v___x_1820_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
v_a_1810_ = v_tail_1814_;
v_a_1811_ = v___x_1820_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t v_sz_1824_, size_t v_i_1825_, lean_object* v_bs_1826_){
_start:
{
uint8_t v___x_1827_; 
v___x_1827_ = lean_usize_dec_lt(v_i_1825_, v_sz_1824_);
if (v___x_1827_ == 0)
{
return v_bs_1826_;
}
else
{
lean_object* v_v_1828_; lean_object* v___x_1829_; lean_object* v_bs_x27_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; size_t v___x_1833_; size_t v___x_1834_; lean_object* v___x_1835_; 
v_v_1828_ = lean_array_uget(v_bs_1826_, v_i_1825_);
v___x_1829_ = lean_unsigned_to_nat(0u);
v_bs_x27_1830_ = lean_array_uset(v_bs_1826_, v_i_1825_, v___x_1829_);
v___x_1831_ = l_Lean_JsonNumber_fromNat(v_v_1828_);
v___x_1832_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
v___x_1833_ = ((size_t)1ULL);
v___x_1834_ = lean_usize_add(v_i_1825_, v___x_1833_);
v___x_1835_ = lean_array_uset(v_bs_x27_1830_, v_i_1825_, v___x_1832_);
v_i_1825_ = v___x_1834_;
v_bs_1826_ = v___x_1835_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_1837_, lean_object* v_i_1838_, lean_object* v_bs_1839_){
_start:
{
size_t v_sz_boxed_1840_; size_t v_i_boxed_1841_; lean_object* v_res_1842_; 
v_sz_boxed_1840_ = lean_unbox_usize(v_sz_1837_);
lean_dec(v_sz_1837_);
v_i_boxed_1841_ = lean_unbox_usize(v_i_1838_);
lean_dec(v_i_1838_);
v_res_1842_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_boxed_1840_, v_i_boxed_1841_, v_bs_1839_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object* v_a_1843_){
_start:
{
size_t v_sz_1844_; size_t v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v_sz_1844_ = lean_array_size(v_a_1843_);
v___x_1845_ = ((size_t)0ULL);
v___x_1846_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_1844_, v___x_1845_, v_a_1843_);
v___x_1847_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object* v_a_1848_){
_start:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = lean_array_mk(v_a_1848_);
v___x_1850_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(v___x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object* v_x_1851_, lean_object* v_x_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
if (lean_obj_tag(v_x_1851_) == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1856_ = l_List_reverse___redArg(v_x_1852_);
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1856_);
lean_ctor_set(v___x_1857_, 1, v___y_1854_);
v___x_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
return v___x_1858_;
}
else
{
lean_object* v_head_1859_; lean_object* v_tail_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1880_; 
v_head_1859_ = lean_ctor_get(v_x_1851_, 0);
v_tail_1860_ = lean_ctor_get(v_x_1851_, 1);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_x_1851_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1862_ = v_x_1851_;
v_isShared_1863_ = v_isSharedCheck_1880_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_tail_1860_);
lean_inc(v_head_1859_);
lean_dec(v_x_1851_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1880_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; 
v___x_1864_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_head_1859_, v___y_1853_, v___y_1854_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v_fst_1866_; lean_object* v_snd_1867_; lean_object* v___x_1869_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1864_, 1);
v_fst_1866_ = lean_ctor_get(v_a_1865_, 0);
lean_inc(v_fst_1866_);
v_snd_1867_ = lean_ctor_get(v_a_1865_, 1);
lean_inc(v_snd_1867_);
lean_dec(v_a_1865_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 1, v_x_1852_);
lean_ctor_set(v___x_1862_, 0, v_fst_1866_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_fst_1866_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_x_1852_);
v___x_1869_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
v_x_1851_ = v_tail_1860_;
v_x_1852_ = v___x_1869_;
v___y_1854_ = v_snd_1867_;
goto _start;
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_del_object(v___x_1862_);
lean_dec(v_tail_1860_);
lean_dec(v_x_1852_);
v_a_1872_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1864_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1864_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object* v_x_1881_, lean_object* v_x_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_x_1881_, v_x_1882_, v___y_1883_, v___y_1884_);
lean_dec_ref(v___y_1883_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object* v_x_1887_, lean_object* v_x_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
if (lean_obj_tag(v_x_1887_) == 0)
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1892_ = l_List_reverse___redArg(v_x_1888_);
v___x_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
lean_ctor_set(v___x_1893_, 1, v___y_1890_);
v___x_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
return v___x_1894_;
}
else
{
lean_object* v_head_1895_; lean_object* v_tail_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1916_; 
v_head_1895_ = lean_ctor_get(v_x_1887_, 0);
v_tail_1896_ = lean_ctor_get(v_x_1887_, 1);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_x_1887_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1898_ = v_x_1887_;
v_isShared_1899_ = v_isSharedCheck_1916_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_tail_1896_);
lean_inc(v_head_1895_);
lean_dec(v_x_1887_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1916_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; 
v___x_1900_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_head_1895_, v___y_1889_, v___y_1890_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v_fst_1902_; lean_object* v_snd_1903_; lean_object* v___x_1905_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v_fst_1902_ = lean_ctor_get(v_a_1901_, 0);
lean_inc(v_fst_1902_);
v_snd_1903_ = lean_ctor_get(v_a_1901_, 1);
lean_inc(v_snd_1903_);
lean_dec(v_a_1901_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 1, v_x_1888_);
lean_ctor_set(v___x_1898_, 0, v_fst_1902_);
v___x_1905_ = v___x_1898_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_fst_1902_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_x_1888_);
v___x_1905_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
v_x_1887_ = v_tail_1896_;
v_x_1888_ = v___x_1905_;
v___y_1890_ = v_snd_1903_;
goto _start;
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_del_object(v___x_1898_);
lean_dec(v_tail_1896_);
lean_dec(v_x_1888_);
v_a_1908_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1900_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1900_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object* v_x_1917_, lean_object* v_x_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_x_1917_, v_x_1918_, v___y_1919_, v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object* v_uparams_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = lean_box(0);
lean_inc(v_uparams_1923_);
v___x_1928_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_1923_, v___x_1927_, v___y_1924_, v___y_1925_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v_fst_1930_; lean_object* v_snd_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v_fst_1930_ = lean_ctor_get(v_a_1929_, 0);
lean_inc(v_fst_1930_);
v_snd_1931_ = lean_ctor_get(v_a_1929_, 1);
lean_inc(v_snd_1931_);
lean_dec(v_a_1929_);
v___x_1932_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(v_uparams_1923_, v___x_1927_);
v___x_1933_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v___x_1932_, v___x_1927_, v___y_1924_, v_snd_1931_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1951_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1936_ = v___x_1933_;
v_isShared_1937_ = v_isSharedCheck_1951_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1933_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1951_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v_snd_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1949_; 
v_snd_1938_ = lean_ctor_get(v_a_1934_, 1);
v_isSharedCheck_1949_ = !lean_is_exclusive(v_a_1934_);
if (v_isSharedCheck_1949_ == 0)
{
lean_object* v_unused_1950_; 
v_unused_1950_ = lean_ctor_get(v_a_1934_, 0);
lean_dec(v_unused_1950_);
v___x_1940_ = v_a_1934_;
v_isShared_1941_ = v_isSharedCheck_1949_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_snd_1938_);
lean_dec(v_a_1934_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1949_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1944_; 
v___x_1942_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_1930_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 0, v___x_1942_);
v___x_1944_ = v___x_1940_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v___x_1942_);
lean_ctor_set(v_reuseFailAlloc_1948_, 1, v_snd_1938_);
v___x_1944_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
lean_object* v___x_1946_; 
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1944_);
v___x_1946_ = v___x_1936_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec(v_fst_1930_);
v_a_1952_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1933_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1933_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
lean_dec(v_uparams_1923_);
v_a_1960_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1928_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1928_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object* v_uparams_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_uparams_1968_, v___y_1969_, v___y_1970_);
lean_dec_ref(v___y_1969_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object* v_uparams_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = lean_box(0);
v___x_1978_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_1973_, v___x_1977_, v___y_1974_, v___y_1975_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1996_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_1996_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1996_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v_fst_1983_; lean_object* v_snd_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1995_; 
v_fst_1983_ = lean_ctor_get(v_a_1979_, 0);
v_snd_1984_ = lean_ctor_get(v_a_1979_, 1);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_a_1979_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1986_ = v_a_1979_;
v_isShared_1987_ = v_isSharedCheck_1995_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_snd_1984_);
lean_inc(v_fst_1983_);
lean_dec(v_a_1979_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1995_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1988_; lean_object* v___x_1990_; 
v___x_1988_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_1983_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1988_);
v___x_1990_ = v___x_1986_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1988_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v_snd_1984_);
v___x_1990_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
lean_object* v___x_1992_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v___x_1990_);
v___x_1992_ = v___x_1981_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1990_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2004_; 
v_a_1997_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1999_ = v___x_1978_;
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1978_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object* v_uparams_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_uparams_2005_, v___y_2006_, v___y_2007_);
lean_dec_ref(v___y_2006_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object* v_msg_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v___f_2015_; lean_object* v___f_2016_; lean_object* v___f_2017_; lean_object* v___f_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_18425__overap_2028_; lean_object* v___x_2029_; 
v___x_2014_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2015_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2015_, 0, v___x_2014_);
v___f_2016_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2016_, 0, v___x_2014_);
v___f_2017_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2017_, 0, v___x_2014_);
v___f_2018_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2018_, 0, v___x_2014_);
v___x_2019_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2019_, 0, lean_box(0));
lean_closure_set(v___x_2019_, 1, lean_box(0));
lean_closure_set(v___x_2019_, 2, v___x_2014_);
v___x_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
lean_ctor_set(v___x_2020_, 1, v___f_2015_);
v___x_2021_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2021_, 0, lean_box(0));
lean_closure_set(v___x_2021_, 1, lean_box(0));
lean_closure_set(v___x_2021_, 2, v___x_2014_);
v___x_2022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2020_);
lean_ctor_set(v___x_2022_, 1, v___x_2021_);
lean_ctor_set(v___x_2022_, 2, v___f_2016_);
lean_ctor_set(v___x_2022_, 3, v___f_2017_);
lean_ctor_set(v___x_2022_, 4, v___f_2018_);
v___x_2023_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2023_, 0, lean_box(0));
lean_closure_set(v___x_2023_, 1, lean_box(0));
lean_closure_set(v___x_2023_, 2, v___x_2014_);
v___x_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2022_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___x_2025_ = l_Lean_instInhabitedExpr;
v___x_2026_ = l_instInhabitedOfMonad___redArg(v___x_2024_, v___x_2025_);
v___x_2027_ = l_instInhabitedReaderT___redArg(v___x_2026_);
v___x_18425__overap_2028_ = lean_panic_fn_borrowed(v___x_2027_, v_msg_2010_);
lean_dec(v___x_2027_);
lean_inc_ref(v___y_2011_);
v___x_2029_ = lean_apply_3(v___x_18425__overap_2028_, v___y_2011_, v___y_2012_, lean_box(0));
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object* v_msg_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v_msg_2030_, v___y_2031_, v___y_2032_);
lean_dec_ref(v___y_2031_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object* v_a_2035_, lean_object* v_b_2036_, lean_object* v_x_2037_){
_start:
{
if (lean_obj_tag(v_x_2037_) == 0)
{
lean_dec(v_b_2036_);
lean_dec_ref(v_a_2035_);
return v_x_2037_;
}
else
{
lean_object* v_key_2038_; lean_object* v_value_2039_; lean_object* v_tail_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2052_; 
v_key_2038_ = lean_ctor_get(v_x_2037_, 0);
v_value_2039_ = lean_ctor_get(v_x_2037_, 1);
v_tail_2040_ = lean_ctor_get(v_x_2037_, 2);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_x_2037_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2042_ = v_x_2037_;
v_isShared_2043_ = v_isSharedCheck_2052_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_tail_2040_);
lean_inc(v_value_2039_);
lean_inc(v_key_2038_);
lean_dec(v_x_2037_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2052_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
uint8_t v___x_2044_; 
v___x_2044_ = lean_expr_eqv(v_key_2038_, v_a_2035_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2045_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2035_, v_b_2036_, v_tail_2040_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 2, v___x_2045_);
v___x_2047_ = v___x_2042_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_key_2038_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_value_2039_);
lean_ctor_set(v_reuseFailAlloc_2048_, 2, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
else
{
lean_object* v___x_2050_; 
lean_dec(v_value_2039_);
lean_dec(v_key_2038_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 1, v_b_2036_);
lean_ctor_set(v___x_2042_, 0, v_a_2035_);
v___x_2050_ = v___x_2042_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2035_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v_b_2036_);
lean_ctor_set(v_reuseFailAlloc_2051_, 2, v_tail_2040_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_2053_, lean_object* v_x_2054_){
_start:
{
if (lean_obj_tag(v_x_2054_) == 0)
{
return v_x_2053_;
}
else
{
lean_object* v_key_2055_; lean_object* v_value_2056_; lean_object* v_tail_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2080_; 
v_key_2055_ = lean_ctor_get(v_x_2054_, 0);
v_value_2056_ = lean_ctor_get(v_x_2054_, 1);
v_tail_2057_ = lean_ctor_get(v_x_2054_, 2);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_x_2054_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2059_ = v_x_2054_;
v_isShared_2060_ = v_isSharedCheck_2080_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_tail_2057_);
lean_inc(v_value_2056_);
lean_inc(v_key_2055_);
lean_dec(v_x_2054_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2080_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2061_; uint64_t v___x_2062_; uint64_t v___x_2063_; uint64_t v___x_2064_; uint64_t v_fold_2065_; uint64_t v___x_2066_; uint64_t v___x_2067_; uint64_t v___x_2068_; size_t v___x_2069_; size_t v___x_2070_; size_t v___x_2071_; size_t v___x_2072_; size_t v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2061_ = lean_array_get_size(v_x_2053_);
v___x_2062_ = l_Lean_Expr_hash(v_key_2055_);
v___x_2063_ = 32ULL;
v___x_2064_ = lean_uint64_shift_right(v___x_2062_, v___x_2063_);
v_fold_2065_ = lean_uint64_xor(v___x_2062_, v___x_2064_);
v___x_2066_ = 16ULL;
v___x_2067_ = lean_uint64_shift_right(v_fold_2065_, v___x_2066_);
v___x_2068_ = lean_uint64_xor(v_fold_2065_, v___x_2067_);
v___x_2069_ = lean_uint64_to_usize(v___x_2068_);
v___x_2070_ = lean_usize_of_nat(v___x_2061_);
v___x_2071_ = ((size_t)1ULL);
v___x_2072_ = lean_usize_sub(v___x_2070_, v___x_2071_);
v___x_2073_ = lean_usize_land(v___x_2069_, v___x_2072_);
v___x_2074_ = lean_array_uget_borrowed(v_x_2053_, v___x_2073_);
lean_inc(v___x_2074_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 2, v___x_2074_);
v___x_2076_ = v___x_2059_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_key_2055_);
lean_ctor_set(v_reuseFailAlloc_2079_, 1, v_value_2056_);
lean_ctor_set(v_reuseFailAlloc_2079_, 2, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2077_; 
v___x_2077_ = lean_array_uset(v_x_2053_, v___x_2073_, v___x_2076_);
v_x_2053_ = v___x_2077_;
v_x_2054_ = v_tail_2057_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2081_, lean_object* v_source_2082_, lean_object* v_target_2083_){
_start:
{
lean_object* v___x_2084_; uint8_t v___x_2085_; 
v___x_2084_ = lean_array_get_size(v_source_2082_);
v___x_2085_ = lean_nat_dec_lt(v_i_2081_, v___x_2084_);
if (v___x_2085_ == 0)
{
lean_dec_ref(v_source_2082_);
lean_dec(v_i_2081_);
return v_target_2083_;
}
else
{
lean_object* v_es_2086_; lean_object* v___x_2087_; lean_object* v_source_2088_; lean_object* v_target_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v_es_2086_ = lean_array_fget(v_source_2082_, v_i_2081_);
v___x_2087_ = lean_box(0);
v_source_2088_ = lean_array_fset(v_source_2082_, v_i_2081_, v___x_2087_);
v_target_2089_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_target_2083_, v_es_2086_);
v___x_2090_ = lean_unsigned_to_nat(1u);
v___x_2091_ = lean_nat_add(v_i_2081_, v___x_2090_);
lean_dec(v_i_2081_);
v_i_2081_ = v___x_2091_;
v_source_2082_ = v_source_2088_;
v_target_2083_ = v_target_2089_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object* v_data_2093_){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v_nbuckets_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2094_ = lean_array_get_size(v_data_2093_);
v___x_2095_ = lean_unsigned_to_nat(2u);
v_nbuckets_2096_ = lean_nat_mul(v___x_2094_, v___x_2095_);
v___x_2097_ = lean_unsigned_to_nat(0u);
v___x_2098_ = lean_box(0);
v___x_2099_ = lean_mk_array(v_nbuckets_2096_, v___x_2098_);
v___x_2100_ = lean_array_propagate_mark(v_data_2093_, v___x_2099_);
v___x_2101_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v___x_2097_, v_data_2093_, v___x_2100_);
return v___x_2101_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object* v_a_2102_, lean_object* v_x_2103_){
_start:
{
if (lean_obj_tag(v_x_2103_) == 0)
{
uint8_t v___x_2104_; 
v___x_2104_ = 0;
return v___x_2104_;
}
else
{
lean_object* v_key_2105_; lean_object* v_tail_2106_; uint8_t v___x_2107_; 
v_key_2105_ = lean_ctor_get(v_x_2103_, 0);
v_tail_2106_ = lean_ctor_get(v_x_2103_, 2);
v___x_2107_ = lean_expr_eqv(v_key_2105_, v_a_2102_);
if (v___x_2107_ == 0)
{
v_x_2103_ = v_tail_2106_;
goto _start;
}
else
{
return v___x_2107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object* v_a_2109_, lean_object* v_x_2110_){
_start:
{
uint8_t v_res_2111_; lean_object* v_r_2112_; 
v_res_2111_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2109_, v_x_2110_);
lean_dec(v_x_2110_);
lean_dec_ref(v_a_2109_);
v_r_2112_ = lean_box(v_res_2111_);
return v_r_2112_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object* v_m_2113_, lean_object* v_a_2114_, lean_object* v_b_2115_){
_start:
{
lean_object* v_size_2116_; lean_object* v_buckets_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2160_; 
v_size_2116_ = lean_ctor_get(v_m_2113_, 0);
v_buckets_2117_ = lean_ctor_get(v_m_2113_, 1);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_m_2113_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2119_ = v_m_2113_;
v_isShared_2120_ = v_isSharedCheck_2160_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_buckets_2117_);
lean_inc(v_size_2116_);
lean_dec(v_m_2113_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2160_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2121_; uint64_t v___x_2122_; uint64_t v___x_2123_; uint64_t v___x_2124_; uint64_t v_fold_2125_; uint64_t v___x_2126_; uint64_t v___x_2127_; uint64_t v___x_2128_; size_t v___x_2129_; size_t v___x_2130_; size_t v___x_2131_; size_t v___x_2132_; size_t v___x_2133_; lean_object* v_bkt_2134_; uint8_t v___x_2135_; 
v___x_2121_ = lean_array_get_size(v_buckets_2117_);
v___x_2122_ = l_Lean_Expr_hash(v_a_2114_);
v___x_2123_ = 32ULL;
v___x_2124_ = lean_uint64_shift_right(v___x_2122_, v___x_2123_);
v_fold_2125_ = lean_uint64_xor(v___x_2122_, v___x_2124_);
v___x_2126_ = 16ULL;
v___x_2127_ = lean_uint64_shift_right(v_fold_2125_, v___x_2126_);
v___x_2128_ = lean_uint64_xor(v_fold_2125_, v___x_2127_);
v___x_2129_ = lean_uint64_to_usize(v___x_2128_);
v___x_2130_ = lean_usize_of_nat(v___x_2121_);
v___x_2131_ = ((size_t)1ULL);
v___x_2132_ = lean_usize_sub(v___x_2130_, v___x_2131_);
v___x_2133_ = lean_usize_land(v___x_2129_, v___x_2132_);
v_bkt_2134_ = lean_array_uget_borrowed(v_buckets_2117_, v___x_2133_);
v___x_2135_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2114_, v_bkt_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v_size_x27_2137_; lean_object* v___x_2138_; lean_object* v_buckets_x27_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2136_ = lean_unsigned_to_nat(1u);
v_size_x27_2137_ = lean_nat_add(v_size_2116_, v___x_2136_);
lean_dec(v_size_2116_);
lean_inc(v_bkt_2134_);
v___x_2138_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2138_, 0, v_a_2114_);
lean_ctor_set(v___x_2138_, 1, v_b_2115_);
lean_ctor_set(v___x_2138_, 2, v_bkt_2134_);
v_buckets_x27_2139_ = lean_array_uset(v_buckets_2117_, v___x_2133_, v___x_2138_);
v___x_2140_ = lean_unsigned_to_nat(4u);
v___x_2141_ = lean_nat_mul(v_size_x27_2137_, v___x_2140_);
v___x_2142_ = lean_unsigned_to_nat(3u);
v___x_2143_ = lean_nat_div(v___x_2141_, v___x_2142_);
lean_dec(v___x_2141_);
v___x_2144_ = lean_array_get_size(v_buckets_x27_2139_);
v___x_2145_ = lean_nat_dec_le(v___x_2143_, v___x_2144_);
lean_dec(v___x_2143_);
if (v___x_2145_ == 0)
{
lean_object* v_val_2146_; lean_object* v___x_2148_; 
v_val_2146_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_buckets_x27_2139_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 1, v_val_2146_);
lean_ctor_set(v___x_2119_, 0, v_size_x27_2137_);
v___x_2148_ = v___x_2119_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_size_x27_2137_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_val_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
else
{
lean_object* v___x_2151_; 
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 1, v_buckets_x27_2139_);
lean_ctor_set(v___x_2119_, 0, v_size_x27_2137_);
v___x_2151_ = v___x_2119_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_size_x27_2137_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v_buckets_x27_2139_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
else
{
lean_object* v___x_2153_; lean_object* v_buckets_x27_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2158_; 
lean_inc(v_bkt_2134_);
v___x_2153_ = lean_box(0);
v_buckets_x27_2154_ = lean_array_uset(v_buckets_2117_, v___x_2133_, v___x_2153_);
v___x_2155_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2114_, v_b_2115_, v_bkt_2134_);
v___x_2156_ = lean_array_uset(v_buckets_x27_2154_, v___x_2133_, v___x_2155_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 1, v___x_2156_);
v___x_2158_ = v___x_2119_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_size_2116_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object* v_a_2161_, lean_object* v_x_2162_){
_start:
{
if (lean_obj_tag(v_x_2162_) == 0)
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_box(0);
return v___x_2163_;
}
else
{
lean_object* v_key_2164_; lean_object* v_value_2165_; lean_object* v_tail_2166_; uint8_t v___x_2167_; 
v_key_2164_ = lean_ctor_get(v_x_2162_, 0);
v_value_2165_ = lean_ctor_get(v_x_2162_, 1);
v_tail_2166_ = lean_ctor_get(v_x_2162_, 2);
v___x_2167_ = lean_expr_eqv(v_key_2164_, v_a_2161_);
if (v___x_2167_ == 0)
{
v_x_2162_ = v_tail_2166_;
goto _start;
}
else
{
lean_object* v___x_2169_; 
lean_inc(v_value_2165_);
v___x_2169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2169_, 0, v_value_2165_);
return v___x_2169_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object* v_a_2170_, lean_object* v_x_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2170_, v_x_2171_);
lean_dec(v_x_2171_);
lean_dec_ref(v_a_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object* v_m_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_buckets_2175_; lean_object* v___x_2176_; uint64_t v___x_2177_; uint64_t v___x_2178_; uint64_t v___x_2179_; uint64_t v_fold_2180_; uint64_t v___x_2181_; uint64_t v___x_2182_; uint64_t v___x_2183_; size_t v___x_2184_; size_t v___x_2185_; size_t v___x_2186_; size_t v___x_2187_; size_t v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v_buckets_2175_ = lean_ctor_get(v_m_2173_, 1);
v___x_2176_ = lean_array_get_size(v_buckets_2175_);
v___x_2177_ = l_Lean_Expr_hash(v_a_2174_);
v___x_2178_ = 32ULL;
v___x_2179_ = lean_uint64_shift_right(v___x_2177_, v___x_2178_);
v_fold_2180_ = lean_uint64_xor(v___x_2177_, v___x_2179_);
v___x_2181_ = 16ULL;
v___x_2182_ = lean_uint64_shift_right(v_fold_2180_, v___x_2181_);
v___x_2183_ = lean_uint64_xor(v_fold_2180_, v___x_2182_);
v___x_2184_ = lean_uint64_to_usize(v___x_2183_);
v___x_2185_ = lean_usize_of_nat(v___x_2176_);
v___x_2186_ = ((size_t)1ULL);
v___x_2187_ = lean_usize_sub(v___x_2185_, v___x_2186_);
v___x_2188_ = lean_usize_land(v___x_2184_, v___x_2187_);
v___x_2189_ = lean_array_uget_borrowed(v_buckets_2175_, v___x_2188_);
v___x_2190_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2174_, v___x_2189_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object* v_m_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2191_, v_a_2192_);
lean_dec_ref(v_a_2192_);
lean_dec_ref(v_m_2191_);
return v_res_2193_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2195_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_2196_ = lean_unsigned_to_nat(26u);
v___x_2197_ = lean_unsigned_to_nat(152u);
v___x_2198_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0));
v___x_2199_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2200_ = l_mkPanicMessageWithDecl(v___x_2199_, v___x_2198_, v___x_2197_, v___x_2196_, v___x_2195_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object* v_e_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_e_x27_2206_; lean_object* v_visitedNames_2207_; lean_object* v_visitedLevels_2208_; lean_object* v_visitedExprs_2209_; lean_object* v_visitedConstants_2210_; lean_object* v_noMDataExprs_2211_; uint8_t v_exportMData_2212_; uint8_t v_exportUnsafe_2213_; uint8_t v_ignoreMissing_2214_; lean_object* v_recursorMap_2215_; lean_object* v_e_x27_2221_; lean_object* v___y_2222_; lean_object* v_visitedNames_2232_; lean_object* v_visitedLevels_2233_; lean_object* v_visitedExprs_2234_; lean_object* v_visitedConstants_2235_; lean_object* v_noMDataExprs_2236_; uint8_t v_exportMData_2237_; uint8_t v_exportUnsafe_2238_; uint8_t v_ignoreMissing_2239_; lean_object* v_recursorMap_2240_; lean_object* v___x_2241_; 
v_visitedNames_2232_ = lean_ctor_get(v___y_2203_, 0);
v_visitedLevels_2233_ = lean_ctor_get(v___y_2203_, 1);
v_visitedExprs_2234_ = lean_ctor_get(v___y_2203_, 2);
v_visitedConstants_2235_ = lean_ctor_get(v___y_2203_, 3);
v_noMDataExprs_2236_ = lean_ctor_get(v___y_2203_, 4);
v_exportMData_2237_ = lean_ctor_get_uint8(v___y_2203_, sizeof(void*)*6);
v_exportUnsafe_2238_ = lean_ctor_get_uint8(v___y_2203_, sizeof(void*)*6 + 1);
v_ignoreMissing_2239_ = lean_ctor_get_uint8(v___y_2203_, sizeof(void*)*6 + 2);
v_recursorMap_2240_ = lean_ctor_get(v___y_2203_, 5);
v___x_2241_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_noMDataExprs_2236_, v_e_2201_);
if (lean_obj_tag(v___x_2241_) == 1)
{
lean_object* v_val_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2250_; 
lean_dec_ref(v_e_2201_);
v_val_2242_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2244_ = v___x_2241_;
v_isShared_2245_ = v_isSharedCheck_2250_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_val_2242_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2250_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2246_; lean_object* v___x_2248_; 
v___x_2246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2246_, 0, v_val_2242_);
lean_ctor_set(v___x_2246_, 1, v___y_2203_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set_tag(v___x_2244_, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2246_);
v___x_2248_ = v___x_2244_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2246_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
else
{
lean_dec(v___x_2241_);
switch(lean_obj_tag(v_e_2201_))
{
case 1:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2252_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2251_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v_fst_2254_; lean_object* v_snd_2255_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
v_fst_2254_ = lean_ctor_get(v_a_2253_, 0);
lean_inc(v_fst_2254_);
v_snd_2255_ = lean_ctor_get(v_a_2253_, 1);
lean_inc(v_snd_2255_);
lean_dec(v_a_2253_);
v_e_x27_2221_ = v_fst_2254_;
v___y_2222_ = v_snd_2255_;
goto v___jp_2220_;
}
else
{
lean_dec_ref_known(v_e_2201_, 1);
return v___x_2252_;
}
}
case 2:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2256_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2257_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2256_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v_fst_2259_; lean_object* v_snd_2260_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2258_);
lean_dec_ref_known(v___x_2257_, 1);
v_fst_2259_ = lean_ctor_get(v_a_2258_, 0);
lean_inc(v_fst_2259_);
v_snd_2260_ = lean_ctor_get(v_a_2258_, 1);
lean_inc(v_snd_2260_);
lean_dec(v_a_2258_);
v_e_x27_2221_ = v_fst_2259_;
v___y_2222_ = v_snd_2260_;
goto v___jp_2220_;
}
else
{
lean_dec_ref_known(v_e_2201_, 1);
return v___x_2257_;
}
}
case 5:
{
lean_object* v_fn_2261_; lean_object* v_arg_2262_; lean_object* v___x_2263_; 
v_fn_2261_ = lean_ctor_get(v_e_2201_, 0);
v_arg_2262_ = lean_ctor_get(v_e_2201_, 1);
lean_inc_ref(v_fn_2261_);
v___x_2263_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_fn_2261_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v_fst_2265_; lean_object* v_snd_2266_; lean_object* v___x_2267_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v___x_2263_, 1);
v_fst_2265_ = lean_ctor_get(v_a_2264_, 0);
lean_inc(v_fst_2265_);
v_snd_2266_ = lean_ctor_get(v_a_2264_, 1);
lean_inc(v_snd_2266_);
lean_dec(v_a_2264_);
lean_inc_ref(v_arg_2262_);
v___x_2267_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_arg_2262_, v___y_2202_, v_snd_2266_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v_fst_2269_; lean_object* v_snd_2270_; size_t v___x_2271_; size_t v___x_2272_; uint8_t v___x_2273_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2267_, 1);
v_fst_2269_ = lean_ctor_get(v_a_2268_, 0);
lean_inc(v_fst_2269_);
v_snd_2270_ = lean_ctor_get(v_a_2268_, 1);
lean_inc(v_snd_2270_);
lean_dec(v_a_2268_);
v___x_2271_ = lean_ptr_addr(v_fn_2261_);
v___x_2272_ = lean_ptr_addr(v_fst_2265_);
v___x_2273_ = lean_usize_dec_eq(v___x_2271_, v___x_2272_);
if (v___x_2273_ == 0)
{
lean_object* v___x_2274_; 
v___x_2274_ = l_Lean_Expr_app___override(v_fst_2265_, v_fst_2269_);
v_e_x27_2221_ = v___x_2274_;
v___y_2222_ = v_snd_2270_;
goto v___jp_2220_;
}
else
{
size_t v___x_2275_; size_t v___x_2276_; uint8_t v___x_2277_; 
v___x_2275_ = lean_ptr_addr(v_arg_2262_);
v___x_2276_ = lean_ptr_addr(v_fst_2269_);
v___x_2277_ = lean_usize_dec_eq(v___x_2275_, v___x_2276_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; 
v___x_2278_ = l_Lean_Expr_app___override(v_fst_2265_, v_fst_2269_);
v_e_x27_2221_ = v___x_2278_;
v___y_2222_ = v_snd_2270_;
goto v___jp_2220_;
}
else
{
lean_dec(v_fst_2269_);
lean_dec(v_fst_2265_);
lean_inc_ref(v_e_2201_);
v_e_x27_2221_ = v_e_2201_;
v___y_2222_ = v_snd_2270_;
goto v___jp_2220_;
}
}
}
else
{
lean_dec(v_fst_2265_);
lean_dec_ref_known(v_e_2201_, 2);
return v___x_2267_;
}
}
else
{
lean_dec_ref_known(v_e_2201_, 2);
return v___x_2263_;
}
}
case 6:
{
lean_object* v_binderName_2279_; lean_object* v_binderType_2280_; lean_object* v_body_2281_; uint8_t v_binderInfo_2282_; lean_object* v___x_2283_; 
v_binderName_2279_ = lean_ctor_get(v_e_2201_, 0);
v_binderType_2280_ = lean_ctor_get(v_e_2201_, 1);
v_body_2281_ = lean_ctor_get(v_e_2201_, 2);
v_binderInfo_2282_ = lean_ctor_get_uint8(v_e_2201_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2280_);
v___x_2283_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2280_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v_fst_2285_; lean_object* v_snd_2286_; lean_object* v___x_2287_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2283_, 1);
v_fst_2285_ = lean_ctor_get(v_a_2284_, 0);
lean_inc(v_fst_2285_);
v_snd_2286_ = lean_ctor_get(v_a_2284_, 1);
lean_inc(v_snd_2286_);
lean_dec(v_a_2284_);
lean_inc_ref(v_body_2281_);
v___x_2287_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2281_, v___y_2202_, v_snd_2286_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v_fst_2289_; lean_object* v_snd_2290_; size_t v___x_2291_; size_t v___x_2292_; uint8_t v___x_2293_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v_fst_2289_ = lean_ctor_get(v_a_2288_, 0);
lean_inc(v_fst_2289_);
v_snd_2290_ = lean_ctor_get(v_a_2288_, 1);
lean_inc(v_snd_2290_);
lean_dec(v_a_2288_);
v___x_2291_ = lean_ptr_addr(v_binderType_2280_);
v___x_2292_ = lean_ptr_addr(v_fst_2285_);
v___x_2293_ = lean_usize_dec_eq(v___x_2291_, v___x_2292_);
if (v___x_2293_ == 0)
{
lean_object* v___x_2294_; 
lean_inc(v_binderName_2279_);
v___x_2294_ = l_Lean_Expr_lam___override(v_binderName_2279_, v_fst_2285_, v_fst_2289_, v_binderInfo_2282_);
v_e_x27_2221_ = v___x_2294_;
v___y_2222_ = v_snd_2290_;
goto v___jp_2220_;
}
else
{
size_t v___x_2295_; size_t v___x_2296_; uint8_t v___x_2297_; 
v___x_2295_ = lean_ptr_addr(v_body_2281_);
v___x_2296_ = lean_ptr_addr(v_fst_2289_);
v___x_2297_ = lean_usize_dec_eq(v___x_2295_, v___x_2296_);
if (v___x_2297_ == 0)
{
lean_object* v___x_2298_; 
lean_inc(v_binderName_2279_);
v___x_2298_ = l_Lean_Expr_lam___override(v_binderName_2279_, v_fst_2285_, v_fst_2289_, v_binderInfo_2282_);
v_e_x27_2221_ = v___x_2298_;
v___y_2222_ = v_snd_2290_;
goto v___jp_2220_;
}
else
{
uint8_t v___x_2299_; 
v___x_2299_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2282_, v_binderInfo_2282_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; 
lean_inc(v_binderName_2279_);
v___x_2300_ = l_Lean_Expr_lam___override(v_binderName_2279_, v_fst_2285_, v_fst_2289_, v_binderInfo_2282_);
v_e_x27_2221_ = v___x_2300_;
v___y_2222_ = v_snd_2290_;
goto v___jp_2220_;
}
else
{
lean_dec(v_fst_2289_);
lean_dec(v_fst_2285_);
lean_inc_ref(v_e_2201_);
v_e_x27_2221_ = v_e_2201_;
v___y_2222_ = v_snd_2290_;
goto v___jp_2220_;
}
}
}
}
else
{
lean_dec(v_fst_2285_);
lean_dec_ref_known(v_e_2201_, 3);
return v___x_2287_;
}
}
else
{
lean_dec_ref_known(v_e_2201_, 3);
return v___x_2283_;
}
}
case 7:
{
lean_object* v_binderName_2301_; lean_object* v_binderType_2302_; lean_object* v_body_2303_; uint8_t v_binderInfo_2304_; lean_object* v___x_2305_; 
v_binderName_2301_ = lean_ctor_get(v_e_2201_, 0);
v_binderType_2302_ = lean_ctor_get(v_e_2201_, 1);
v_body_2303_ = lean_ctor_get(v_e_2201_, 2);
v_binderInfo_2304_ = lean_ctor_get_uint8(v_e_2201_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2302_);
v___x_2305_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2302_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v_fst_2307_; lean_object* v_snd_2308_; lean_object* v___x_2309_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v_fst_2307_ = lean_ctor_get(v_a_2306_, 0);
lean_inc(v_fst_2307_);
v_snd_2308_ = lean_ctor_get(v_a_2306_, 1);
lean_inc(v_snd_2308_);
lean_dec(v_a_2306_);
lean_inc_ref(v_body_2303_);
v___x_2309_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2303_, v___y_2202_, v_snd_2308_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v_fst_2311_; lean_object* v_snd_2312_; size_t v___x_2313_; size_t v___x_2314_; uint8_t v___x_2315_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v_fst_2311_ = lean_ctor_get(v_a_2310_, 0);
lean_inc(v_fst_2311_);
v_snd_2312_ = lean_ctor_get(v_a_2310_, 1);
lean_inc(v_snd_2312_);
lean_dec(v_a_2310_);
v___x_2313_ = lean_ptr_addr(v_binderType_2302_);
v___x_2314_ = lean_ptr_addr(v_fst_2307_);
v___x_2315_ = lean_usize_dec_eq(v___x_2313_, v___x_2314_);
if (v___x_2315_ == 0)
{
lean_object* v___x_2316_; 
lean_inc(v_binderName_2301_);
v___x_2316_ = l_Lean_Expr_forallE___override(v_binderName_2301_, v_fst_2307_, v_fst_2311_, v_binderInfo_2304_);
v_e_x27_2221_ = v___x_2316_;
v___y_2222_ = v_snd_2312_;
goto v___jp_2220_;
}
else
{
size_t v___x_2317_; size_t v___x_2318_; uint8_t v___x_2319_; 
v___x_2317_ = lean_ptr_addr(v_body_2303_);
v___x_2318_ = lean_ptr_addr(v_fst_2311_);
v___x_2319_ = lean_usize_dec_eq(v___x_2317_, v___x_2318_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; 
lean_inc(v_binderName_2301_);
v___x_2320_ = l_Lean_Expr_forallE___override(v_binderName_2301_, v_fst_2307_, v_fst_2311_, v_binderInfo_2304_);
v_e_x27_2221_ = v___x_2320_;
v___y_2222_ = v_snd_2312_;
goto v___jp_2220_;
}
else
{
uint8_t v___x_2321_; 
v___x_2321_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2304_, v_binderInfo_2304_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; 
lean_inc(v_binderName_2301_);
v___x_2322_ = l_Lean_Expr_forallE___override(v_binderName_2301_, v_fst_2307_, v_fst_2311_, v_binderInfo_2304_);
v_e_x27_2221_ = v___x_2322_;
v___y_2222_ = v_snd_2312_;
goto v___jp_2220_;
}
else
{
lean_dec(v_fst_2311_);
lean_dec(v_fst_2307_);
lean_inc_ref(v_e_2201_);
v_e_x27_2221_ = v_e_2201_;
v___y_2222_ = v_snd_2312_;
goto v___jp_2220_;
}
}
}
}
else
{
lean_dec(v_fst_2307_);
lean_dec_ref_known(v_e_2201_, 3);
return v___x_2309_;
}
}
else
{
lean_dec_ref_known(v_e_2201_, 3);
return v___x_2305_;
}
}
case 8:
{
lean_object* v_declName_2323_; lean_object* v_type_2324_; lean_object* v_value_2325_; lean_object* v_body_2326_; uint8_t v_nondep_2327_; lean_object* v___x_2328_; 
v_declName_2323_ = lean_ctor_get(v_e_2201_, 0);
v_type_2324_ = lean_ctor_get(v_e_2201_, 1);
v_value_2325_ = lean_ctor_get(v_e_2201_, 2);
v_body_2326_ = lean_ctor_get(v_e_2201_, 3);
v_nondep_2327_ = lean_ctor_get_uint8(v_e_2201_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2324_);
v___x_2328_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_type_2324_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; lean_object* v_fst_2330_; lean_object* v_snd_2331_; lean_object* v___x_2332_; 
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2328_, 1);
v_fst_2330_ = lean_ctor_get(v_a_2329_, 0);
lean_inc(v_fst_2330_);
v_snd_2331_ = lean_ctor_get(v_a_2329_, 1);
lean_inc(v_snd_2331_);
lean_dec(v_a_2329_);
lean_inc_ref(v_value_2325_);
v___x_2332_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_value_2325_, v___y_2202_, v_snd_2331_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v_fst_2334_; lean_object* v_snd_2335_; lean_object* v___x_2336_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v_fst_2334_ = lean_ctor_get(v_a_2333_, 0);
lean_inc(v_fst_2334_);
v_snd_2335_ = lean_ctor_get(v_a_2333_, 1);
lean_inc(v_snd_2335_);
lean_dec(v_a_2333_);
lean_inc_ref(v_body_2326_);
v___x_2336_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2326_, v___y_2202_, v_snd_2335_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v_fst_2338_; lean_object* v_snd_2339_; uint8_t v___x_2340_; size_t v___x_2341_; size_t v___x_2342_; uint8_t v___x_2343_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v_fst_2338_ = lean_ctor_get(v_a_2337_, 0);
lean_inc(v_fst_2338_);
v_snd_2339_ = lean_ctor_get(v_a_2337_, 1);
lean_inc(v_snd_2339_);
lean_dec(v_a_2337_);
v___x_2340_ = 0;
v___x_2341_ = lean_ptr_addr(v_type_2324_);
v___x_2342_ = lean_ptr_addr(v_fst_2330_);
v___x_2343_ = lean_usize_dec_eq(v___x_2341_, v___x_2342_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2344_; 
lean_inc(v_declName_2323_);
v___x_2344_ = l_Lean_Expr_letE___override(v_declName_2323_, v_fst_2330_, v_fst_2334_, v_fst_2338_, v___x_2340_);
v_e_x27_2221_ = v___x_2344_;
v___y_2222_ = v_snd_2339_;
goto v___jp_2220_;
}
else
{
size_t v___x_2345_; size_t v___x_2346_; uint8_t v___x_2347_; 
v___x_2345_ = lean_ptr_addr(v_value_2325_);
v___x_2346_ = lean_ptr_addr(v_fst_2334_);
v___x_2347_ = lean_usize_dec_eq(v___x_2345_, v___x_2346_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; 
lean_inc(v_declName_2323_);
v___x_2348_ = l_Lean_Expr_letE___override(v_declName_2323_, v_fst_2330_, v_fst_2334_, v_fst_2338_, v___x_2340_);
v_e_x27_2221_ = v___x_2348_;
v___y_2222_ = v_snd_2339_;
goto v___jp_2220_;
}
else
{
size_t v___x_2349_; size_t v___x_2350_; uint8_t v___x_2351_; 
v___x_2349_ = lean_ptr_addr(v_body_2326_);
v___x_2350_ = lean_ptr_addr(v_fst_2338_);
v___x_2351_ = lean_usize_dec_eq(v___x_2349_, v___x_2350_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
lean_inc(v_declName_2323_);
v___x_2352_ = l_Lean_Expr_letE___override(v_declName_2323_, v_fst_2330_, v_fst_2334_, v_fst_2338_, v___x_2340_);
v_e_x27_2221_ = v___x_2352_;
v___y_2222_ = v_snd_2339_;
goto v___jp_2220_;
}
else
{
if (v_nondep_2327_ == 0)
{
lean_dec(v_fst_2338_);
lean_dec(v_fst_2334_);
lean_dec(v_fst_2330_);
lean_inc_ref(v_e_2201_);
v_e_x27_2221_ = v_e_2201_;
v___y_2222_ = v_snd_2339_;
goto v___jp_2220_;
}
else
{
lean_object* v___x_2353_; 
lean_inc(v_declName_2323_);
v___x_2353_ = l_Lean_Expr_letE___override(v_declName_2323_, v_fst_2330_, v_fst_2334_, v_fst_2338_, v___x_2340_);
v_e_x27_2221_ = v___x_2353_;
v___y_2222_ = v_snd_2339_;
goto v___jp_2220_;
}
}
}
}
}
else
{
lean_dec(v_fst_2334_);
lean_dec(v_fst_2330_);
lean_dec_ref_known(v_e_2201_, 4);
return v___x_2336_;
}
}
else
{
lean_dec(v_fst_2330_);
lean_dec_ref_known(v_e_2201_, 4);
return v___x_2332_;
}
}
else
{
lean_dec_ref_known(v_e_2201_, 4);
return v___x_2328_;
}
}
case 10:
{
lean_object* v_expr_2354_; lean_object* v___x_2355_; 
v_expr_2354_ = lean_ctor_get(v_e_2201_, 1);
lean_inc_ref(v_expr_2354_);
v___x_2355_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_expr_2354_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v_fst_2357_; lean_object* v_snd_2358_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2355_, 1);
v_fst_2357_ = lean_ctor_get(v_a_2356_, 0);
lean_inc(v_fst_2357_);
v_snd_2358_ = lean_ctor_get(v_a_2356_, 1);
lean_inc(v_snd_2358_);
lean_dec(v_a_2356_);
v_e_x27_2221_ = v_fst_2357_;
v___y_2222_ = v_snd_2358_;
goto v___jp_2220_;
}
else
{
lean_dec_ref_known(v_e_2201_, 2);
return v___x_2355_;
}
}
case 11:
{
lean_object* v_typeName_2359_; lean_object* v_idx_2360_; lean_object* v_struct_2361_; lean_object* v___x_2362_; 
v_typeName_2359_ = lean_ctor_get(v_e_2201_, 0);
v_idx_2360_ = lean_ctor_get(v_e_2201_, 1);
v_struct_2361_ = lean_ctor_get(v_e_2201_, 2);
lean_inc_ref(v_struct_2361_);
v___x_2362_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_struct_2361_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v_fst_2364_; lean_object* v_snd_2365_; size_t v___x_2366_; size_t v___x_2367_; uint8_t v___x_2368_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref_known(v___x_2362_, 1);
v_fst_2364_ = lean_ctor_get(v_a_2363_, 0);
lean_inc(v_fst_2364_);
v_snd_2365_ = lean_ctor_get(v_a_2363_, 1);
lean_inc(v_snd_2365_);
lean_dec(v_a_2363_);
v___x_2366_ = lean_ptr_addr(v_struct_2361_);
v___x_2367_ = lean_ptr_addr(v_fst_2364_);
v___x_2368_ = lean_usize_dec_eq(v___x_2366_, v___x_2367_);
if (v___x_2368_ == 0)
{
lean_object* v___x_2369_; 
lean_inc(v_idx_2360_);
lean_inc(v_typeName_2359_);
v___x_2369_ = l_Lean_Expr_proj___override(v_typeName_2359_, v_idx_2360_, v_fst_2364_);
v_e_x27_2221_ = v___x_2369_;
v___y_2222_ = v_snd_2365_;
goto v___jp_2220_;
}
else
{
lean_dec(v_fst_2364_);
lean_inc_ref(v_e_2201_);
v_e_x27_2221_ = v_e_2201_;
v___y_2222_ = v_snd_2365_;
goto v___jp_2220_;
}
}
else
{
lean_dec_ref_known(v_e_2201_, 3);
return v___x_2362_;
}
}
default: 
{
lean_inc(v_recursorMap_2240_);
lean_inc_ref(v_noMDataExprs_2236_);
lean_inc_ref(v_visitedConstants_2235_);
lean_inc_ref(v_visitedExprs_2234_);
lean_inc_ref(v_visitedLevels_2233_);
lean_inc_ref(v_visitedNames_2232_);
lean_dec_ref(v___y_2203_);
lean_inc_ref(v_e_2201_);
v_e_x27_2206_ = v_e_2201_;
v_visitedNames_2207_ = v_visitedNames_2232_;
v_visitedLevels_2208_ = v_visitedLevels_2233_;
v_visitedExprs_2209_ = v_visitedExprs_2234_;
v_visitedConstants_2210_ = v_visitedConstants_2235_;
v_noMDataExprs_2211_ = v_noMDataExprs_2236_;
v_exportMData_2212_ = v_exportMData_2237_;
v_exportUnsafe_2213_ = v_exportUnsafe_2238_;
v_ignoreMissing_2214_ = v_ignoreMissing_2239_;
v_recursorMap_2215_ = v_recursorMap_2240_;
goto v___jp_2205_;
}
}
}
v___jp_2205_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
lean_inc_ref(v_e_x27_2206_);
v___x_2216_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_noMDataExprs_2211_, v_e_2201_, v_e_x27_2206_);
v___x_2217_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2217_, 0, v_visitedNames_2207_);
lean_ctor_set(v___x_2217_, 1, v_visitedLevels_2208_);
lean_ctor_set(v___x_2217_, 2, v_visitedExprs_2209_);
lean_ctor_set(v___x_2217_, 3, v_visitedConstants_2210_);
lean_ctor_set(v___x_2217_, 4, v___x_2216_);
lean_ctor_set(v___x_2217_, 5, v_recursorMap_2215_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*6, v_exportMData_2212_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*6 + 1, v_exportUnsafe_2213_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*6 + 2, v_ignoreMissing_2214_);
v___x_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2218_, 0, v_e_x27_2206_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
return v___x_2219_;
}
v___jp_2220_:
{
lean_object* v_visitedNames_2223_; lean_object* v_visitedLevels_2224_; lean_object* v_visitedExprs_2225_; lean_object* v_visitedConstants_2226_; lean_object* v_noMDataExprs_2227_; uint8_t v_exportMData_2228_; uint8_t v_exportUnsafe_2229_; uint8_t v_ignoreMissing_2230_; lean_object* v_recursorMap_2231_; 
v_visitedNames_2223_ = lean_ctor_get(v___y_2222_, 0);
lean_inc_ref(v_visitedNames_2223_);
v_visitedLevels_2224_ = lean_ctor_get(v___y_2222_, 1);
lean_inc_ref(v_visitedLevels_2224_);
v_visitedExprs_2225_ = lean_ctor_get(v___y_2222_, 2);
lean_inc_ref(v_visitedExprs_2225_);
v_visitedConstants_2226_ = lean_ctor_get(v___y_2222_, 3);
lean_inc_ref(v_visitedConstants_2226_);
v_noMDataExprs_2227_ = lean_ctor_get(v___y_2222_, 4);
lean_inc_ref(v_noMDataExprs_2227_);
v_exportMData_2228_ = lean_ctor_get_uint8(v___y_2222_, sizeof(void*)*6);
v_exportUnsafe_2229_ = lean_ctor_get_uint8(v___y_2222_, sizeof(void*)*6 + 1);
v_ignoreMissing_2230_ = lean_ctor_get_uint8(v___y_2222_, sizeof(void*)*6 + 2);
v_recursorMap_2231_ = lean_ctor_get(v___y_2222_, 5);
lean_inc(v_recursorMap_2231_);
lean_dec_ref(v___y_2222_);
v_e_x27_2206_ = v_e_x27_2221_;
v_visitedNames_2207_ = v_visitedNames_2223_;
v_visitedLevels_2208_ = v_visitedLevels_2224_;
v_visitedExprs_2209_ = v_visitedExprs_2225_;
v_visitedConstants_2210_ = v_visitedConstants_2226_;
v_noMDataExprs_2211_ = v_noMDataExprs_2227_;
v_exportMData_2212_ = v_exportMData_2228_;
v_exportUnsafe_2213_ = v_exportUnsafe_2229_;
v_ignoreMissing_2214_ = v_ignoreMissing_2230_;
v_recursorMap_2215_ = v_recursorMap_2231_;
goto v___jp_2205_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object* v_e_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_2370_, v___y_2371_, v___y_2372_);
lean_dec_ref(v___y_2371_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object* v_00_u03b2_2375_, lean_object* v_m_2376_, lean_object* v_a_2377_, lean_object* v_b_2378_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_m_2376_, v_a_2377_, v_b_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object* v_00_u03b2_2380_, lean_object* v_m_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2381_, v_a_2382_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object* v_00_u03b2_2384_, lean_object* v_m_2385_, lean_object* v_a_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(v_00_u03b2_2384_, v_m_2385_, v_a_2386_);
lean_dec_ref(v_a_2386_);
lean_dec_ref(v_m_2385_);
return v_res_2387_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object* v_00_u03b2_2388_, lean_object* v_a_2389_, lean_object* v_x_2390_){
_start:
{
uint8_t v___x_2391_; 
v___x_2391_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2389_, v_x_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2392_, lean_object* v_a_2393_, lean_object* v_x_2394_){
_start:
{
uint8_t v_res_2395_; lean_object* v_r_2396_; 
v_res_2395_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(v_00_u03b2_2392_, v_a_2393_, v_x_2394_);
lean_dec(v_x_2394_);
lean_dec_ref(v_a_2393_);
v_r_2396_ = lean_box(v_res_2395_);
return v_r_2396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object* v_00_u03b2_2397_, lean_object* v_data_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_data_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object* v_00_u03b2_2400_, lean_object* v_a_2401_, lean_object* v_b_2402_, lean_object* v_x_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2401_, v_b_2402_, v_x_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object* v_00_u03b2_2405_, lean_object* v_a_2406_, lean_object* v_x_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2406_, v_x_2407_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2409_, lean_object* v_a_2410_, lean_object* v_x_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(v_00_u03b2_2409_, v_a_2410_, v_x_2411_);
lean_dec(v_x_2411_);
lean_dec_ref(v_a_2410_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2413_, lean_object* v_i_2414_, lean_object* v_source_2415_, lean_object* v_target_2416_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v_i_2414_, v_source_2415_, v_target_2416_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_2418_, lean_object* v_x_2419_, lean_object* v_x_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_x_2419_, v_x_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object* v_fields_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = l_Lean_Json_mkObj(v_fields_2422_);
v___x_2426_ = l_Lean_Json_compress(v___x_2425_);
v___x_2427_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_2426_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2436_; 
v_a_2428_ = lean_ctor_get(v___x_2427_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2430_ = v___x_2427_;
v_isShared_2431_ = v_isSharedCheck_2436_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2427_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2436_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_a_2428_);
lean_ctor_set(v___x_2432_, 1, v___y_2423_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v___x_2432_);
v___x_2434_ = v___x_2430_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
lean_dec_ref(v___y_2423_);
v_a_2437_ = lean_ctor_get(v___x_2427_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___x_2427_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2427_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
v___x_2442_ = v___x_2439_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object* v_fields_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2445_, v___y_2446_);
lean_dec(v_fields_2445_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object* v_fields_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2449_, v___y_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object* v_fields_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(v_fields_2454_, v___y_2455_, v___y_2456_);
lean_dec_ref(v___y_2455_);
lean_dec(v_fields_2454_);
return v_res_2458_;
}
}
static lean_object* _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = l_Array_instInhabited___redArg();
return v___x_2459_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object* v_msg_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v___x_2464_; lean_object* v___f_2465_; lean_object* v___f_2466_; lean_object* v___f_2467_; lean_object* v___f_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_205242__overap_2479_; lean_object* v___x_2480_; 
v___x_2464_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2465_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2465_, 0, v___x_2464_);
v___f_2466_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2466_, 0, v___x_2464_);
v___f_2467_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2467_, 0, v___x_2464_);
v___f_2468_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2468_, 0, v___x_2464_);
v___x_2469_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2469_, 0, lean_box(0));
lean_closure_set(v___x_2469_, 1, lean_box(0));
lean_closure_set(v___x_2469_, 2, v___x_2464_);
v___x_2470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
lean_ctor_set(v___x_2470_, 1, v___f_2465_);
v___x_2471_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2471_, 0, lean_box(0));
lean_closure_set(v___x_2471_, 1, lean_box(0));
lean_closure_set(v___x_2471_, 2, v___x_2464_);
v___x_2472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2470_);
lean_ctor_set(v___x_2472_, 1, v___x_2471_);
lean_ctor_set(v___x_2472_, 2, v___f_2466_);
lean_ctor_set(v___x_2472_, 3, v___f_2467_);
lean_ctor_set(v___x_2472_, 4, v___f_2468_);
v___x_2473_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2473_, 0, lean_box(0));
lean_closure_set(v___x_2473_, 1, lean_box(0));
lean_closure_set(v___x_2473_, 2, v___x_2464_);
v___x_2474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2472_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
v___x_2475_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0);
v___x_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2475_);
v___x_2477_ = l_instInhabitedOfMonad___redArg(v___x_2474_, v___x_2476_);
v___x_2478_ = l_instInhabitedReaderT___redArg(v___x_2477_);
v___x_205242__overap_2479_ = lean_panic_fn_borrowed(v___x_2478_, v_msg_2460_);
lean_dec(v___x_2478_);
lean_inc_ref(v___y_2461_);
v___x_2480_ = lean_apply_3(v___x_205242__overap_2479_, v___y_2461_, v___y_2462_, lean_box(0));
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object* v_msg_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v_msg_2481_, v___y_2482_, v___y_2483_);
lean_dec_ref(v___y_2482_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object* v_msg_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v___x_2490_; lean_object* v___f_2491_; lean_object* v___f_2492_; lean_object* v___f_2493_; lean_object* v___f_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_205254__overap_2504_; lean_object* v___x_2505_; 
v___x_2490_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2491_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2491_, 0, v___x_2490_);
v___f_2492_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2492_, 0, v___x_2490_);
v___f_2493_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2493_, 0, v___x_2490_);
v___f_2494_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2494_, 0, v___x_2490_);
v___x_2495_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2495_, 0, lean_box(0));
lean_closure_set(v___x_2495_, 1, lean_box(0));
lean_closure_set(v___x_2495_, 2, v___x_2490_);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
lean_ctor_set(v___x_2496_, 1, v___f_2491_);
v___x_2497_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2497_, 0, lean_box(0));
lean_closure_set(v___x_2497_, 1, lean_box(0));
lean_closure_set(v___x_2497_, 2, v___x_2490_);
v___x_2498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2496_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
lean_ctor_set(v___x_2498_, 2, v___f_2492_);
lean_ctor_set(v___x_2498_, 3, v___f_2493_);
lean_ctor_set(v___x_2498_, 4, v___f_2494_);
v___x_2499_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2499_, 0, lean_box(0));
lean_closure_set(v___x_2499_, 1, lean_box(0));
lean_closure_set(v___x_2499_, 2, v___x_2490_);
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2498_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = lean_box(0);
v___x_2502_ = l_instInhabitedOfMonad___redArg(v___x_2500_, v___x_2501_);
v___x_2503_ = l_instInhabitedReaderT___redArg(v___x_2502_);
v___x_205254__overap_2504_ = lean_panic_fn_borrowed(v___x_2503_, v_msg_2486_);
lean_dec(v___x_2503_);
lean_inc_ref(v___y_2487_);
v___x_2505_ = lean_apply_3(v___x_205254__overap_2504_, v___y_2487_, v___y_2488_, lean_box(0));
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object* v_msg_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v_msg_2506_, v___y_2507_, v___y_2508_);
lean_dec_ref(v___y_2507_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object* v_msg_2511_){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = l_Lean_instInhabitedConstantInfo_default;
v___x_2513_ = lean_panic_fn_borrowed(v___x_2512_, v_msg_2511_);
return v___x_2513_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2516_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__1));
v___x_2517_ = lean_unsigned_to_nat(8u);
v___x_2518_ = lean_unsigned_to_nat(354u);
v___x_2519_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2520_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2521_ = l_mkPanicMessageWithDecl(v___x_2520_, v___x_2519_, v___x_2518_, v___x_2517_, v___x_2516_);
return v___x_2521_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2523_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__3));
v___x_2524_ = lean_unsigned_to_nat(13u);
v___x_2525_ = lean_unsigned_to_nat(356u);
v___x_2526_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2527_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2528_ = l_mkPanicMessageWithDecl(v___x_2527_, v___x_2526_, v___x_2525_, v___x_2524_, v___x_2523_);
return v___x_2528_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2532_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__7));
v___x_2533_ = lean_unsigned_to_nat(14u);
v___x_2534_ = lean_unsigned_to_nat(22u);
v___x_2535_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__6));
v___x_2536_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__5));
v___x_2537_ = l_mkPanicMessageWithDecl(v___x_2536_, v___x_2535_, v___x_2534_, v___x_2533_, v___x_2532_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(uint8_t v___x_2538_, lean_object* v_init_2539_, lean_object* v_x_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_d_2545_; lean_object* v___y_2546_; 
if (lean_obj_tag(v_x_2540_) == 0)
{
lean_object* v_k_2550_; lean_object* v_l_2551_; lean_object* v_r_2552_; lean_object* v___x_2553_; 
v_k_2550_ = lean_ctor_get(v_x_2540_, 1);
lean_inc(v_k_2550_);
v_l_2551_ = lean_ctor_get(v_x_2540_, 3);
lean_inc(v_l_2551_);
v_r_2552_ = lean_ctor_get(v_x_2540_, 4);
lean_inc(v_r_2552_);
lean_dec_ref_known(v_x_2540_, 5);
v___x_2553_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(v___x_2538_, v_init_2539_, v_l_2551_, v___y_2541_, v___y_2542_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v_fst_2555_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
v_fst_2555_ = lean_ctor_get(v_a_2554_, 0);
lean_inc(v_fst_2555_);
if (lean_obj_tag(v_fst_2555_) == 0)
{
lean_object* v_snd_2556_; lean_object* v_a_2557_; 
lean_dec(v_r_2552_);
lean_dec(v_k_2550_);
v_snd_2556_ = lean_ctor_get(v_a_2554_, 1);
lean_inc(v_snd_2556_);
lean_dec(v_a_2554_);
v_a_2557_ = lean_ctor_get(v_fst_2555_, 0);
lean_inc(v_a_2557_);
lean_dec_ref_known(v_fst_2555_, 1);
v_d_2545_ = v_a_2557_;
v___y_2546_ = v_snd_2556_;
goto v___jp_2544_;
}
else
{
lean_object* v_snd_2558_; lean_object* v_a_2559_; lean_object* v___y_2561_; lean_object* v___y_2565_; lean_object* v___x_2591_; 
v_snd_2558_ = lean_ctor_get(v_a_2554_, 1);
lean_inc(v_snd_2558_);
lean_dec(v_a_2554_);
v_a_2559_ = lean_ctor_get(v_fst_2555_, 0);
lean_inc(v_a_2559_);
lean_dec_ref_known(v_fst_2555_, 1);
lean_inc_ref(v___y_2541_);
v___x_2591_ = l_Lean_Environment_find_x3f(v___y_2541_, v_k_2550_, v___x_2538_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8);
v___x_2593_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2592_);
v___y_2565_ = v___x_2593_;
goto v___jp_2564_;
}
else
{
lean_object* v_val_2594_; 
v_val_2594_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_val_2594_);
lean_dec_ref_known(v___x_2591_, 1);
v___y_2565_ = v_val_2594_;
goto v___jp_2564_;
}
v___jp_2560_:
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_array_push(v_a_2559_, v___y_2561_);
v_init_2539_ = v___x_2562_;
v_x_2540_ = v_r_2552_;
v___y_2542_ = v_snd_2558_;
goto _start;
}
v___jp_2564_:
{
if (lean_obj_tag(v___y_2565_) == 7)
{
lean_object* v_val_2566_; uint8_t v_isUnsafe_2567_; 
v_val_2566_ = lean_ctor_get(v___y_2565_, 0);
lean_inc_ref(v_val_2566_);
lean_dec_ref_known(v___y_2565_, 1);
v_isUnsafe_2567_ = lean_ctor_get_uint8(v_val_2566_, sizeof(void*)*7 + 1);
if (v_isUnsafe_2567_ == 0)
{
v___y_2561_ = v_val_2566_;
goto v___jp_2560_;
}
else
{
if (v___x_2538_ == 0)
{
uint8_t v_exportUnsafe_2568_; 
v_exportUnsafe_2568_ = lean_ctor_get_uint8(v_snd_2558_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2568_ == 0)
{
lean_object* v___x_2569_; lean_object* v___x_2570_; 
lean_dec_ref(v_val_2566_);
lean_dec(v_a_2559_);
v___x_2569_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__2);
v___x_2570_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v___x_2569_, v___y_2541_, v_snd_2558_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v_fst_2572_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
v_fst_2572_ = lean_ctor_get(v_a_2571_, 0);
lean_inc(v_fst_2572_);
if (lean_obj_tag(v_fst_2572_) == 0)
{
lean_object* v_snd_2573_; lean_object* v_a_2574_; 
lean_dec(v_r_2552_);
v_snd_2573_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2573_);
lean_dec(v_a_2571_);
v_a_2574_ = lean_ctor_get(v_fst_2572_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v_fst_2572_, 1);
v_d_2545_ = v_a_2574_;
v___y_2546_ = v_snd_2573_;
goto v___jp_2544_;
}
else
{
lean_object* v_snd_2575_; lean_object* v_a_2576_; 
v_snd_2575_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2575_);
lean_dec(v_a_2571_);
v_a_2576_ = lean_ctor_get(v_fst_2572_, 0);
lean_inc(v_a_2576_);
lean_dec_ref_known(v_fst_2572_, 1);
v_init_2539_ = v_a_2576_;
v_x_2540_ = v_r_2552_;
v___y_2542_ = v_snd_2575_;
goto _start;
}
}
else
{
lean_dec(v_r_2552_);
return v___x_2570_;
}
}
else
{
v___y_2561_ = v_val_2566_;
goto v___jp_2560_;
}
}
else
{
v___y_2561_ = v_val_2566_;
goto v___jp_2560_;
}
}
}
else
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
lean_dec_ref(v___y_2565_);
v___x_2578_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__4);
v___x_2579_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2578_, v___y_2541_, v_snd_2558_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v_snd_2581_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
v_snd_2581_ = lean_ctor_get(v_a_2580_, 1);
lean_inc(v_snd_2581_);
lean_dec(v_a_2580_);
v_init_2539_ = v_a_2559_;
v_x_2540_ = v_r_2552_;
v___y_2542_ = v_snd_2581_;
goto _start;
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2590_; 
lean_dec(v_a_2559_);
lean_dec(v_r_2552_);
v_a_2583_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2585_ = v___x_2579_;
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2579_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2588_; 
if (v_isShared_2586_ == 0)
{
v___x_2588_ = v___x_2585_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2583_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
}
}
}
else
{
lean_dec(v_r_2552_);
lean_dec(v_k_2550_);
return v___x_2553_;
}
}
else
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2595_, 0, v_init_2539_);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
lean_ctor_set(v___x_2596_, 1, v___y_2542_);
v___x_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
return v___x_2597_;
}
v___jp_2544_:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2547_, 0, v_d_2545_);
v___x_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
lean_ctor_set(v___x_2548_, 1, v___y_2546_);
v___x_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
return v___x_2549_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object* v___x_2598_, lean_object* v_init_2599_, lean_object* v_x_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
uint8_t v___x_220271__boxed_2604_; lean_object* v_res_2605_; 
v___x_220271__boxed_2604_ = lean_unbox(v___x_2598_);
v_res_2605_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(v___x_220271__boxed_2604_, v_init_2599_, v_x_2600_, v___y_2601_, v___y_2602_);
lean_dec_ref(v___y_2601_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(size_t v_sz_2606_, size_t v_i_2607_, lean_object* v_bs_2608_){
_start:
{
uint8_t v___x_2609_; 
v___x_2609_ = lean_usize_dec_lt(v_i_2607_, v_sz_2606_);
if (v___x_2609_ == 0)
{
return v_bs_2608_;
}
else
{
lean_object* v_v_2610_; lean_object* v___x_2611_; lean_object* v_bs_x27_2612_; size_t v___x_2613_; size_t v___x_2614_; lean_object* v___x_2615_; 
v_v_2610_ = lean_array_uget(v_bs_2608_, v_i_2607_);
v___x_2611_ = lean_unsigned_to_nat(0u);
v_bs_x27_2612_ = lean_array_uset(v_bs_2608_, v_i_2607_, v___x_2611_);
v___x_2613_ = ((size_t)1ULL);
v___x_2614_ = lean_usize_add(v_i_2607_, v___x_2613_);
v___x_2615_ = lean_array_uset(v_bs_x27_2612_, v_i_2607_, v_v_2610_);
v_i_2607_ = v___x_2614_;
v_bs_2608_ = v___x_2615_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22___boxed(lean_object* v_sz_2617_, lean_object* v_i_2618_, lean_object* v_bs_2619_){
_start:
{
size_t v_sz_boxed_2620_; size_t v_i_boxed_2621_; lean_object* v_res_2622_; 
v_sz_boxed_2620_ = lean_unbox_usize(v_sz_2617_);
lean_dec(v_sz_2617_);
v_i_boxed_2621_ = lean_unbox_usize(v_i_2618_);
lean_dec(v_i_2618_);
v_res_2622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(v_sz_boxed_2620_, v_i_boxed_2621_, v_bs_2619_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(lean_object* v_a_2623_){
_start:
{
size_t v_sz_2624_; size_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_sz_2624_ = lean_array_size(v_a_2623_);
v___x_2625_ = ((size_t)0ULL);
v___x_2626_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18_spec__22(v_sz_2624_, v___x_2625_, v_a_2623_);
v___x_2627_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object* v_a_2628_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2629_ = lean_array_mk(v_a_2628_);
v___x_2630_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v___x_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object* v_msg_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___x_2635_; lean_object* v___f_2636_; lean_object* v___f_2637_; lean_object* v___f_2638_; lean_object* v___f_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_206478__overap_2650_; lean_object* v___x_2651_; 
v___x_2635_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2636_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2636_, 0, v___x_2635_);
v___f_2637_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2637_, 0, v___x_2635_);
v___f_2638_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2638_, 0, v___x_2635_);
v___f_2639_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2639_, 0, v___x_2635_);
v___x_2640_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2640_, 0, lean_box(0));
lean_closure_set(v___x_2640_, 1, lean_box(0));
lean_closure_set(v___x_2640_, 2, v___x_2635_);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v___f_2636_);
v___x_2642_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2642_, 0, lean_box(0));
lean_closure_set(v___x_2642_, 1, lean_box(0));
lean_closure_set(v___x_2642_, 2, v___x_2635_);
v___x_2643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
lean_ctor_set(v___x_2643_, 2, v___f_2637_);
lean_ctor_set(v___x_2643_, 3, v___f_2638_);
lean_ctor_set(v___x_2643_, 4, v___f_2639_);
v___x_2644_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2644_, 0, lean_box(0));
lean_closure_set(v___x_2644_, 1, lean_box(0));
lean_closure_set(v___x_2644_, 2, v___x_2635_);
v___x_2645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2643_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0);
v___x_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
v___x_2648_ = l_instInhabitedOfMonad___redArg(v___x_2645_, v___x_2647_);
v___x_2649_ = l_instInhabitedReaderT___redArg(v___x_2648_);
v___x_206478__overap_2650_ = lean_panic_fn_borrowed(v___x_2649_, v_msg_2631_);
lean_dec(v___x_2649_);
lean_inc_ref(v___y_2632_);
v___x_2651_ = lean_apply_3(v___x_206478__overap_2650_, v___y_2632_, v___y_2633_, lean_box(0));
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object* v_msg_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v_msg_2652_, v___y_2653_, v___y_2654_);
lean_dec_ref(v___y_2653_);
return v_res_2656_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2658_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2659_ = lean_unsigned_to_nat(10u);
v___x_2660_ = lean_unsigned_to_nat(334u);
v___x_2661_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2662_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2663_ = l_mkPanicMessageWithDecl(v___x_2662_, v___x_2661_, v___x_2660_, v___x_2659_, v___x_2658_);
return v___x_2663_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2665_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2));
v___x_2666_ = lean_unsigned_to_nat(15u);
v___x_2667_ = lean_unsigned_to_nat(336u);
v___x_2668_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_2669_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2670_ = l_mkPanicMessageWithDecl(v___x_2669_, v___x_2668_, v___x_2667_, v___x_2666_, v___x_2665_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t v___y_2671_, uint8_t v___x_2672_, lean_object* v_as_x27_2673_, lean_object* v_b_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
if (lean_obj_tag(v_as_x27_2673_) == 0)
{
lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2678_, 0, v_b_2674_);
lean_ctor_set(v___x_2678_, 1, v___y_2676_);
v___x_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2678_);
return v___x_2679_;
}
else
{
lean_object* v_head_2680_; lean_object* v_tail_2681_; lean_object* v___y_2683_; lean_object* v___y_2687_; uint8_t v___y_2688_; lean_object* v___y_2723_; lean_object* v___x_2739_; 
v_head_2680_ = lean_ctor_get(v_as_x27_2673_, 0);
v_tail_2681_ = lean_ctor_get(v_as_x27_2673_, 1);
lean_inc(v_head_2680_);
lean_inc_ref(v___y_2675_);
v___x_2739_ = l_Lean_Environment_find_x3f(v___y_2675_, v_head_2680_, v___x_2672_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2740_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8);
v___x_2741_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2740_);
v___y_2723_ = v___x_2741_;
goto v___jp_2722_;
}
else
{
lean_object* v_val_2742_; 
v_val_2742_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_val_2742_);
lean_dec_ref_known(v___x_2739_, 1);
v___y_2723_ = v_val_2742_;
goto v___jp_2722_;
}
v___jp_2682_:
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_array_push(v_b_2674_, v___y_2683_);
v_as_x27_2673_ = v_tail_2681_;
v_b_2674_ = v___x_2684_;
goto _start;
}
v___jp_2686_:
{
if (v___y_2688_ == 0)
{
uint8_t v_exportUnsafe_2689_; 
v_exportUnsafe_2689_ = lean_ctor_get_uint8(v___y_2676_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2689_ == 0)
{
lean_object* v___x_2690_; lean_object* v___x_2691_; 
lean_dec_ref(v___y_2687_);
lean_dec_ref(v_b_2674_);
v___x_2690_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1);
v___x_2691_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v___x_2690_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2713_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2694_ = v___x_2691_;
v_isShared_2695_ = v_isSharedCheck_2713_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2691_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2713_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v_fst_2696_; 
v_fst_2696_ = lean_ctor_get(v_a_2692_, 0);
lean_inc(v_fst_2696_);
if (lean_obj_tag(v_fst_2696_) == 0)
{
lean_object* v_snd_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2708_; 
v_snd_2697_ = lean_ctor_get(v_a_2692_, 1);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_a_2692_);
if (v_isSharedCheck_2708_ == 0)
{
lean_object* v_unused_2709_; 
v_unused_2709_ = lean_ctor_get(v_a_2692_, 0);
lean_dec(v_unused_2709_);
v___x_2699_ = v_a_2692_;
v_isShared_2700_ = v_isSharedCheck_2708_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_snd_2697_);
lean_dec(v_a_2692_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2708_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v_a_2701_; lean_object* v___x_2703_; 
v_a_2701_ = lean_ctor_get(v_fst_2696_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v_fst_2696_, 1);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 0, v_a_2701_);
v___x_2703_ = v___x_2699_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
lean_ctor_set(v_reuseFailAlloc_2707_, 1, v_snd_2697_);
v___x_2703_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
lean_object* v___x_2705_; 
if (v_isShared_2695_ == 0)
{
lean_ctor_set(v___x_2694_, 0, v___x_2703_);
v___x_2705_ = v___x_2694_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
else
{
lean_object* v_snd_2710_; lean_object* v_a_2711_; 
lean_del_object(v___x_2694_);
v_snd_2710_ = lean_ctor_get(v_a_2692_, 1);
lean_inc(v_snd_2710_);
lean_dec(v_a_2692_);
v_a_2711_ = lean_ctor_get(v_fst_2696_, 0);
lean_inc(v_a_2711_);
lean_dec_ref_known(v_fst_2696_, 1);
v_as_x27_2673_ = v_tail_2681_;
v_b_2674_ = v_a_2711_;
v___y_2676_ = v_snd_2710_;
goto _start;
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2721_; 
v_a_2714_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2716_ = v___x_2691_;
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_dec(v___x_2691_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2719_; 
if (v_isShared_2717_ == 0)
{
v___x_2719_ = v___x_2716_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_a_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
else
{
v___y_2683_ = v___y_2687_;
goto v___jp_2682_;
}
}
else
{
v___y_2683_ = v___y_2687_;
goto v___jp_2682_;
}
}
v___jp_2722_:
{
if (lean_obj_tag(v___y_2723_) == 6)
{
lean_object* v_val_2724_; uint8_t v_isUnsafe_2725_; 
v_val_2724_ = lean_ctor_get(v___y_2723_, 0);
lean_inc_ref(v_val_2724_);
lean_dec_ref_known(v___y_2723_, 1);
v_isUnsafe_2725_ = lean_ctor_get_uint8(v_val_2724_, sizeof(void*)*5);
if (v_isUnsafe_2725_ == 0)
{
v___y_2687_ = v_val_2724_;
v___y_2688_ = v___y_2671_;
goto v___jp_2686_;
}
else
{
v___y_2687_ = v_val_2724_;
v___y_2688_ = v___x_2672_;
goto v___jp_2686_;
}
}
else
{
lean_object* v___x_2726_; lean_object* v___x_2727_; 
lean_dec_ref(v___y_2723_);
v___x_2726_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3);
v___x_2727_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2726_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v_snd_2729_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2727_, 1);
v_snd_2729_ = lean_ctor_get(v_a_2728_, 1);
lean_inc(v_snd_2729_);
lean_dec(v_a_2728_);
v_as_x27_2673_ = v_tail_2681_;
v___y_2676_ = v_snd_2729_;
goto _start;
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec_ref(v_b_2674_);
v_a_2731_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2727_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2727_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object* v___y_2743_, lean_object* v___x_2744_, lean_object* v_as_x27_2745_, lean_object* v_b_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
uint8_t v___y_220523__boxed_2750_; uint8_t v___x_220524__boxed_2751_; lean_object* v_res_2752_; 
v___y_220523__boxed_2750_ = lean_unbox(v___y_2743_);
v___x_220524__boxed_2751_ = lean_unbox(v___x_2744_);
v_res_2752_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_220523__boxed_2750_, v___x_220524__boxed_2751_, v_as_x27_2745_, v_b_2746_, v___y_2747_, v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v_as_x27_2745_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__10(lean_object* v_msg_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v___x_2757_; lean_object* v___f_2758_; lean_object* v___f_2759_; lean_object* v___f_2760_; lean_object* v___f_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_207637__overap_2775_; lean_object* v___x_2776_; 
v___x_2757_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2758_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2758_, 0, v___x_2757_);
v___f_2759_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2759_, 0, v___x_2757_);
v___f_2760_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2760_, 0, v___x_2757_);
v___f_2761_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2761_, 0, v___x_2757_);
v___x_2762_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2762_, 0, lean_box(0));
lean_closure_set(v___x_2762_, 1, lean_box(0));
lean_closure_set(v___x_2762_, 2, v___x_2757_);
v___x_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2762_);
lean_ctor_set(v___x_2763_, 1, v___f_2758_);
v___x_2764_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2764_, 0, lean_box(0));
lean_closure_set(v___x_2764_, 1, lean_box(0));
lean_closure_set(v___x_2764_, 2, v___x_2757_);
v___x_2765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
lean_ctor_set(v___x_2765_, 2, v___f_2759_);
lean_ctor_set(v___x_2765_, 3, v___f_2760_);
lean_ctor_set(v___x_2765_, 4, v___f_2761_);
v___x_2766_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2766_, 0, lean_box(0));
lean_closure_set(v___x_2766_, 1, lean_box(0));
lean_closure_set(v___x_2766_, 2, v___x_2757_);
v___x_2767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__4___closed__0);
v___x_2769_ = lean_box(1);
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2768_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2768_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
v___x_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
v___x_2773_ = l_instInhabitedOfMonad___redArg(v___x_2767_, v___x_2772_);
v___x_2774_ = l_instInhabitedReaderT___redArg(v___x_2773_);
v___x_207637__overap_2775_ = lean_panic_fn_borrowed(v___x_2774_, v_msg_2753_);
lean_dec(v___x_2774_);
lean_inc_ref(v___y_2754_);
v___x_2776_ = lean_apply_3(v___x_207637__overap_2775_, v___y_2754_, v___y_2755_, lean_box(0));
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object* v_msg_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_panic___at___00LeanExport_dumpConstant_spec__10(v_msg_2777_, v___y_2778_, v___y_2779_);
lean_dec_ref(v___y_2778_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(lean_object* v_as_2782_, size_t v_sz_2783_, size_t v_i_2784_, lean_object* v_b_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
uint8_t v___x_2789_; 
v___x_2789_ = lean_usize_dec_lt(v_i_2784_, v_sz_2783_);
if (v___x_2789_ == 0)
{
lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2790_, 0, v_b_2785_);
lean_ctor_set(v___x_2790_, 1, v___y_2787_);
v___x_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
return v___x_2791_;
}
else
{
lean_object* v_visitedNames_2792_; lean_object* v_visitedLevels_2793_; lean_object* v_visitedExprs_2794_; lean_object* v_visitedConstants_2795_; lean_object* v_noMDataExprs_2796_; uint8_t v_exportMData_2797_; uint8_t v_exportUnsafe_2798_; uint8_t v_ignoreMissing_2799_; lean_object* v_recursorMap_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2819_; 
v_visitedNames_2792_ = lean_ctor_get(v___y_2787_, 0);
v_visitedLevels_2793_ = lean_ctor_get(v___y_2787_, 1);
v_visitedExprs_2794_ = lean_ctor_get(v___y_2787_, 2);
v_visitedConstants_2795_ = lean_ctor_get(v___y_2787_, 3);
v_noMDataExprs_2796_ = lean_ctor_get(v___y_2787_, 4);
v_exportMData_2797_ = lean_ctor_get_uint8(v___y_2787_, sizeof(void*)*6);
v_exportUnsafe_2798_ = lean_ctor_get_uint8(v___y_2787_, sizeof(void*)*6 + 1);
v_ignoreMissing_2799_ = lean_ctor_get_uint8(v___y_2787_, sizeof(void*)*6 + 2);
v_recursorMap_2800_ = lean_ctor_get(v___y_2787_, 5);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___y_2787_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2802_ = v___y_2787_;
v_isShared_2803_ = v_isSharedCheck_2819_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_recursorMap_2800_);
lean_inc(v_noMDataExprs_2796_);
lean_inc(v_visitedConstants_2795_);
lean_inc(v_visitedExprs_2794_);
lean_inc(v_visitedLevels_2793_);
lean_inc(v_visitedNames_2792_);
lean_dec(v___y_2787_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2819_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v_a_2804_; lean_object* v_toConstantVal_2805_; lean_object* v_name_2806_; lean_object* v_type_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v_a_2804_ = lean_array_uget_borrowed(v_as_2782_, v_i_2784_);
v_toConstantVal_2805_ = lean_ctor_get(v_a_2804_, 0);
v_name_2806_ = lean_ctor_get(v_toConstantVal_2805_, 0);
v_type_2807_ = lean_ctor_get(v_toConstantVal_2805_, 2);
v___x_2808_ = lean_box(0);
lean_inc(v_name_2806_);
v___x_2809_ = l_Lean_NameHashSet_insert(v_visitedConstants_2795_, v_name_2806_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 3, v___x_2809_);
v___x_2811_ = v___x_2802_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_visitedNames_2792_);
lean_ctor_set(v_reuseFailAlloc_2818_, 1, v_visitedLevels_2793_);
lean_ctor_set(v_reuseFailAlloc_2818_, 2, v_visitedExprs_2794_);
lean_ctor_set(v_reuseFailAlloc_2818_, 3, v___x_2809_);
lean_ctor_set(v_reuseFailAlloc_2818_, 4, v_noMDataExprs_2796_);
lean_ctor_set(v_reuseFailAlloc_2818_, 5, v_recursorMap_2800_);
lean_ctor_set_uint8(v_reuseFailAlloc_2818_, sizeof(void*)*6, v_exportMData_2797_);
lean_ctor_set_uint8(v_reuseFailAlloc_2818_, sizeof(void*)*6 + 1, v_exportUnsafe_2798_);
lean_ctor_set_uint8(v_reuseFailAlloc_2818_, sizeof(void*)*6 + 2, v_ignoreMissing_2799_);
v___x_2811_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2812_; 
lean_inc_ref(v_type_2807_);
v___x_2812_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_2807_, v___y_2786_, v___x_2811_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v_snd_2814_; size_t v___x_2815_; size_t v___x_2816_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v___x_2812_, 1);
v_snd_2814_ = lean_ctor_get(v_a_2813_, 1);
lean_inc(v_snd_2814_);
lean_dec(v_a_2813_);
v___x_2815_ = ((size_t)1ULL);
v___x_2816_ = lean_usize_add(v_i_2784_, v___x_2815_);
v_i_2784_ = v___x_2816_;
v_b_2785_ = v___x_2808_;
v___y_2787_ = v_snd_2814_;
goto _start;
}
else
{
return v___x_2812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(lean_object* v_as_x27_2820_, lean_object* v_b_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
if (lean_obj_tag(v_as_x27_2820_) == 0)
{
lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2825_, 0, v_b_2821_);
lean_ctor_set(v___x_2825_, 1, v___y_2823_);
v___x_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
return v___x_2826_;
}
else
{
lean_object* v_head_2827_; lean_object* v_tail_2828_; lean_object* v_rhs_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v_head_2827_ = lean_ctor_get(v_as_x27_2820_, 0);
v_tail_2828_ = lean_ctor_get(v_as_x27_2820_, 1);
v_rhs_2829_ = lean_ctor_get(v_head_2827_, 2);
v___x_2830_ = lean_box(0);
lean_inc_ref(v_rhs_2829_);
v___x_2831_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_rhs_2829_, v___y_2822_, v___y_2823_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v_snd_2833_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2831_, 1);
v_snd_2833_ = lean_ctor_get(v_a_2832_, 1);
lean_inc(v_snd_2833_);
lean_dec(v_a_2832_);
v_as_x27_2820_ = v_tail_2828_;
v_b_2821_ = v___x_2830_;
v___y_2823_ = v_snd_2833_;
goto _start;
}
else
{
return v___x_2831_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object* v_as_2835_, size_t v_sz_2836_, size_t v_i_2837_, lean_object* v_b_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
uint8_t v___x_2842_; 
v___x_2842_ = lean_usize_dec_lt(v_i_2837_, v_sz_2836_);
if (v___x_2842_ == 0)
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v_b_2838_);
lean_ctor_set(v___x_2843_, 1, v___y_2840_);
v___x_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2843_);
return v___x_2844_;
}
else
{
lean_object* v_a_2845_; lean_object* v_rules_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v_a_2845_ = lean_array_uget_borrowed(v_as_2835_, v_i_2837_);
v_rules_2846_ = lean_ctor_get(v_a_2845_, 6);
v___x_2847_ = lean_box(0);
v___x_2848_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v_rules_2846_, v___x_2847_, v___y_2839_, v___y_2840_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v_snd_2850_; size_t v___x_2851_; size_t v___x_2852_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref_known(v___x_2848_, 1);
v_snd_2850_ = lean_ctor_get(v_a_2849_, 1);
lean_inc(v_snd_2850_);
lean_dec(v_a_2849_);
v___x_2851_ = ((size_t)1ULL);
v___x_2852_ = lean_usize_add(v_i_2837_, v___x_2851_);
v_i_2837_ = v___x_2852_;
v_b_2838_ = v___x_2847_;
v___y_2840_ = v_snd_2850_;
goto _start;
}
else
{
return v___x_2848_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__0(void){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_unsigned_to_nat(16u);
v___x_2856_ = lean_mk_array(v___x_2855_, v___x_2854_);
return v___x_2856_;
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__1(void){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2857_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__0, &l_LeanExport_dumpExpr___closed__0_once, _init_l_LeanExport_dumpExpr___closed__0);
v___x_2858_ = lean_unsigned_to_nat(0u);
v___x_2859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
lean_ctor_set(v___x_2859_, 1, v___x_2857_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
lean_object* v_visitedConstants_2886_; lean_object* v_nat_2887_; uint8_t v___x_2888_; 
v_visitedConstants_2886_ = lean_ctor_get(v___y_2880_, 3);
v_nat_2887_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1));
v___x_2888_ = l_Lean_NameHashSet_contains(v_visitedConstants_2886_, v_nat_2887_);
if (v___x_2888_ == 0)
{
lean_object* v___x_2889_; 
lean_inc_ref(v___y_2879_);
v___x_2889_ = l_Lean_Environment_find_x3f(v___y_2879_, v_nat_2887_, v___x_2888_);
if (lean_obj_tag(v___x_2889_) == 0)
{
goto v___jp_2882_;
}
else
{
lean_object* v___x_2890_; 
lean_dec_ref_known(v___x_2889_, 1);
v___x_2890_ = l_LeanExport_dumpConstant(v_nat_2887_, v___y_2879_, v___y_2880_);
return v___x_2890_;
}
}
else
{
goto v___jp_2882_;
}
v___jp_2882_:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2883_ = lean_box(0);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
lean_ctor_set(v___x_2884_, 1, v___y_2880_);
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
return v___x_2885_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v___y_2906_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v_visitedConstants_2913_; lean_object* v_visitedConstants_2918_; lean_object* v_charOfNat_2919_; uint8_t v___x_2920_; 
v_visitedConstants_2918_ = lean_ctor_get(v___y_2903_, 3);
v_charOfNat_2919_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5));
v___x_2920_ = l_Lean_NameHashSet_contains(v_visitedConstants_2918_, v_charOfNat_2919_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; 
lean_inc_ref(v___y_2902_);
v___x_2921_ = l_Lean_Environment_find_x3f(v___y_2902_, v_charOfNat_2919_, v___x_2920_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_inc_ref(v_visitedConstants_2918_);
v___y_2911_ = v___y_2902_;
v___y_2912_ = v___y_2903_;
v_visitedConstants_2913_ = v_visitedConstants_2918_;
goto v___jp_2910_;
}
else
{
lean_object* v___x_2922_; 
lean_dec_ref_known(v___x_2921_, 1);
v___x_2922_ = l_LeanExport_dumpConstant(v_charOfNat_2919_, v___y_2902_, v___y_2903_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v_a_2923_; lean_object* v_snd_2924_; lean_object* v_visitedConstants_2925_; 
v_a_2923_ = lean_ctor_get(v___x_2922_, 0);
lean_inc(v_a_2923_);
lean_dec_ref_known(v___x_2922_, 1);
v_snd_2924_ = lean_ctor_get(v_a_2923_, 1);
lean_inc(v_snd_2924_);
lean_dec(v_a_2923_);
v_visitedConstants_2925_ = lean_ctor_get(v_snd_2924_, 3);
lean_inc_ref(v_visitedConstants_2925_);
v___y_2911_ = v___y_2902_;
v___y_2912_ = v_snd_2924_;
v_visitedConstants_2913_ = v_visitedConstants_2925_;
goto v___jp_2910_;
}
else
{
return v___x_2922_;
}
}
}
else
{
lean_inc_ref(v_visitedConstants_2918_);
v___y_2911_ = v___y_2902_;
v___y_2912_ = v___y_2903_;
v_visitedConstants_2913_ = v_visitedConstants_2918_;
goto v___jp_2910_;
}
v___jp_2905_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
lean_ctor_set(v___x_2908_, 1, v___y_2906_);
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
v___jp_2910_:
{
lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___x_2914_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2));
v___x_2915_ = l_Lean_NameHashSet_contains(v_visitedConstants_2913_, v___x_2914_);
lean_dec_ref(v_visitedConstants_2913_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
lean_inc_ref(v___y_2911_);
v___x_2916_ = l_Lean_Environment_find_x3f(v___y_2911_, v___x_2914_, v___x_2915_);
if (lean_obj_tag(v___x_2916_) == 0)
{
v___y_2906_ = v___y_2912_;
goto v___jp_2905_;
}
else
{
lean_object* v___x_2917_; 
lean_dec_ref_known(v___x_2916_, 1);
v___x_2917_ = l_LeanExport_dumpConstant(v___x_2914_, v___y_2911_, v___y_2912_);
return v___x_2917_;
}
}
else
{
v___y_2906_ = v___y_2912_;
goto v___jp_2905_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExprAux___closed__26(void){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2936_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__25));
v___x_2937_ = lean_unsigned_to_nat(29u);
v___x_2938_ = lean_unsigned_to_nat(177u);
v___x_2939_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__24));
v___x_2940_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2941_ = l_mkPanicMessageWithDecl(v___x_2940_, v___x_2939_, v___x_2938_, v___x_2937_, v___x_2936_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object* v_e_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v_visitedNames_2946_; lean_object* v_visitedLevels_2947_; lean_object* v_visitedExprs_2948_; lean_object* v_visitedConstants_2949_; lean_object* v_noMDataExprs_2950_; uint8_t v_exportMData_2951_; uint8_t v_exportUnsafe_2952_; uint8_t v_ignoreMissing_2953_; lean_object* v_recursorMap_2954_; lean_object* v___x_2955_; 
v_visitedNames_2946_ = lean_ctor_get(v___y_2944_, 0);
v_visitedLevels_2947_ = lean_ctor_get(v___y_2944_, 1);
v_visitedExprs_2948_ = lean_ctor_get(v___y_2944_, 2);
v_visitedConstants_2949_ = lean_ctor_get(v___y_2944_, 3);
v_noMDataExprs_2950_ = lean_ctor_get(v___y_2944_, 4);
v_exportMData_2951_ = lean_ctor_get_uint8(v___y_2944_, sizeof(void*)*6);
v_exportUnsafe_2952_ = lean_ctor_get_uint8(v___y_2944_, sizeof(void*)*6 + 1);
v_ignoreMissing_2953_ = lean_ctor_get_uint8(v___y_2944_, sizeof(void*)*6 + 2);
v_recursorMap_2954_ = lean_ctor_get(v___y_2944_, 5);
v___x_2955_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_visitedExprs_2948_, v_e_2942_);
if (lean_obj_tag(v___x_2955_) == 1)
{
lean_object* v_val_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2964_; 
lean_dec_ref(v_e_2942_);
v_val_2956_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2958_ = v___x_2955_;
v_isShared_2959_ = v_isSharedCheck_2964_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_val_2956_);
lean_dec(v___x_2955_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2964_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2960_; lean_object* v___x_2962_; 
v___x_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2960_, 0, v_val_2956_);
lean_ctor_set(v___x_2960_, 1, v___y_2944_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set_tag(v___x_2958_, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2960_);
v___x_2962_ = v___x_2958_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2960_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
else
{
lean_object* v___x_2965_; lean_object* v_fst_2967_; lean_object* v_visitedNames_2968_; lean_object* v_visitedLevels_2969_; lean_object* v_visitedExprs_2970_; lean_object* v_visitedConstants_2971_; lean_object* v_noMDataExprs_2972_; uint8_t v_exportMData_2973_; uint8_t v_exportUnsafe_2974_; uint8_t v_ignoreMissing_2975_; lean_object* v_recursorMap_2976_; lean_object* v_fst_3003_; lean_object* v_snd_3004_; 
lean_dec(v___x_2955_);
v___x_2965_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__0));
switch(lean_obj_tag(v_e_2942_))
{
case 0:
{
lean_object* v_deBruijnIndex_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
lean_inc(v_recursorMap_2954_);
lean_inc_ref(v_noMDataExprs_2950_);
lean_inc_ref(v_visitedConstants_2949_);
lean_inc_ref(v_visitedExprs_2948_);
lean_inc_ref(v_visitedLevels_2947_);
lean_inc_ref(v_visitedNames_2946_);
lean_dec_ref(v___y_2944_);
v_deBruijnIndex_3014_ = lean_ctor_get(v_e_2942_, 0);
v___x_3015_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__1));
lean_inc(v_deBruijnIndex_3014_);
v___x_3016_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_3014_);
v___x_3017_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
v___x_3018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3015_);
lean_ctor_set(v___x_3018_, 1, v___x_3017_);
v___x_3019_ = lean_box(0);
v___x_3020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = l_Lean_Json_mkObj(v___x_3020_);
lean_dec_ref_known(v___x_3020_, 2);
v_fst_2967_ = v___x_3021_;
v_visitedNames_2968_ = v_visitedNames_2946_;
v_visitedLevels_2969_ = v_visitedLevels_2947_;
v_visitedExprs_2970_ = v_visitedExprs_2948_;
v_visitedConstants_2971_ = v_visitedConstants_2949_;
v_noMDataExprs_2972_ = v_noMDataExprs_2950_;
v_exportMData_2973_ = v_exportMData_2951_;
v_exportUnsafe_2974_ = v_exportUnsafe_2952_;
v_ignoreMissing_2975_ = v_ignoreMissing_2953_;
v_recursorMap_2976_ = v_recursorMap_2954_;
goto v___jp_2966_;
}
case 3:
{
lean_object* v_u_3022_; lean_object* v___x_3023_; 
v_u_3022_ = lean_ctor_get(v_e_2942_, 0);
lean_inc(v_u_3022_);
v___x_3023_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_u_3022_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3045_; 
v_a_3024_ = lean_ctor_get(v___x_3023_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3026_ = v___x_3023_;
v_isShared_3027_ = v_isSharedCheck_3045_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3023_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3045_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v_fst_3028_; lean_object* v_snd_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3044_; 
v_fst_3028_ = lean_ctor_get(v_a_3024_, 0);
v_snd_3029_ = lean_ctor_get(v_a_3024_, 1);
v_isSharedCheck_3044_ = !lean_is_exclusive(v_a_3024_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3031_ = v_a_3024_;
v_isShared_3032_ = v_isSharedCheck_3044_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_snd_3029_);
lean_inc(v_fst_3028_);
lean_dec(v_a_3024_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3044_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3036_; 
v___x_3033_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__2));
v___x_3034_ = l_Lean_JsonNumber_fromNat(v_fst_3028_);
if (v_isShared_3027_ == 0)
{
lean_ctor_set_tag(v___x_3026_, 2);
lean_ctor_set(v___x_3026_, 0, v___x_3034_);
v___x_3036_ = v___x_3026_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v___x_3034_);
v___x_3036_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v___x_3038_; 
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 1, v___x_3036_);
lean_ctor_set(v___x_3031_, 0, v___x_3033_);
v___x_3038_ = v___x_3031_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v___x_3036_);
v___x_3038_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3039_ = lean_box(0);
v___x_3040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3038_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
v___x_3041_ = l_Lean_Json_mkObj(v___x_3040_);
lean_dec_ref_known(v___x_3040_, 2);
v_fst_3003_ = v___x_3041_;
v_snd_3004_ = v_snd_3029_;
goto v___jp_3002_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 1);
return v___x_3023_;
}
}
case 4:
{
lean_object* v_declName_3046_; lean_object* v_us_3047_; lean_object* v___x_3048_; 
v_declName_3046_ = lean_ctor_get(v_e_2942_, 0);
v_us_3047_ = lean_ctor_get(v_e_2942_, 1);
lean_inc(v_declName_3046_);
v___x_3048_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3046_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3048_) == 0)
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3096_; 
v_a_3049_ = lean_ctor_get(v___x_3048_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3048_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3051_ = v___x_3048_;
v_isShared_3052_ = v_isSharedCheck_3096_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_3048_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3096_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v_fst_3053_; lean_object* v_snd_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3095_; 
v_fst_3053_ = lean_ctor_get(v_a_3049_, 0);
v_snd_3054_ = lean_ctor_get(v_a_3049_, 1);
v_isSharedCheck_3095_ = !lean_is_exclusive(v_a_3049_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3056_ = v_a_3049_;
v_isShared_3057_ = v_isSharedCheck_3095_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_snd_3054_);
lean_inc(v_fst_3053_);
lean_dec(v_a_3049_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3095_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3058_ = lean_box(0);
lean_inc(v_us_3047_);
v___x_3059_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_us_3047_, v___x_3058_, v___y_2943_, v_snd_3054_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_a_3060_; lean_object* v_fst_3061_; lean_object* v_snd_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3086_; 
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___x_3059_, 1);
v_fst_3061_ = lean_ctor_get(v_a_3060_, 0);
v_snd_3062_ = lean_ctor_get(v_a_3060_, 1);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_a_3060_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3064_ = v_a_3060_;
v_isShared_3065_ = v_isSharedCheck_3086_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_snd_3062_);
lean_inc(v_fst_3061_);
lean_dec(v_a_3060_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3086_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3070_; 
v___x_3066_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__3));
v___x_3067_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3068_ = l_Lean_JsonNumber_fromNat(v_fst_3053_);
if (v_isShared_3052_ == 0)
{
lean_ctor_set_tag(v___x_3051_, 2);
lean_ctor_set(v___x_3051_, 0, v___x_3068_);
v___x_3070_ = v___x_3051_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3068_);
v___x_3070_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
lean_object* v___x_3072_; 
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 1, v___x_3070_);
lean_ctor_set(v___x_3064_, 0, v___x_3067_);
v___x_3072_ = v___x_3064_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v___x_3067_);
lean_ctor_set(v_reuseFailAlloc_3084_, 1, v___x_3070_);
v___x_3072_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3076_; 
v___x_3073_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__4));
v___x_3074_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_3061_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 1, v___x_3074_);
lean_ctor_set(v___x_3056_, 0, v___x_3073_);
v___x_3076_ = v___x_3056_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v___x_3073_);
lean_ctor_set(v_reuseFailAlloc_3083_, 1, v___x_3074_);
v___x_3076_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
lean_ctor_set(v___x_3077_, 1, v___x_3058_);
v___x_3078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3072_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
v___x_3079_ = l_Lean_Json_mkObj(v___x_3078_);
lean_dec_ref_known(v___x_3078_, 2);
v___x_3080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3066_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
lean_ctor_set(v___x_3081_, 1, v___x_3058_);
v___x_3082_ = l_Lean_Json_mkObj(v___x_3081_);
lean_dec_ref_known(v___x_3081_, 2);
v_fst_3003_ = v___x_3082_;
v_snd_3004_ = v_snd_3062_;
goto v___jp_3002_;
}
}
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_del_object(v___x_3056_);
lean_dec(v_fst_3053_);
lean_del_object(v___x_3051_);
lean_dec_ref_known(v_e_2942_, 2);
v_a_3087_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3059_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3059_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 2);
return v___x_3048_;
}
}
case 5:
{
lean_object* v_fn_3097_; lean_object* v_arg_3098_; lean_object* v___x_3099_; 
v_fn_3097_ = lean_ctor_get(v_e_2942_, 0);
v_arg_3098_ = lean_ctor_get(v_e_2942_, 1);
lean_inc_ref(v_fn_3097_);
v___x_3099_ = l_LeanExport_dumpExprAux(v_fn_3097_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3146_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3102_ = v___x_3099_;
v_isShared_3103_ = v_isSharedCheck_3146_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3099_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3146_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v_fst_3104_; lean_object* v_snd_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3145_; 
v_fst_3104_ = lean_ctor_get(v_a_3100_, 0);
v_snd_3105_ = lean_ctor_get(v_a_3100_, 1);
v_isSharedCheck_3145_ = !lean_is_exclusive(v_a_3100_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3107_ = v_a_3100_;
v_isShared_3108_ = v_isSharedCheck_3145_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_snd_3105_);
lean_inc(v_fst_3104_);
lean_dec(v_a_3100_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3145_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3109_; 
lean_inc_ref(v_arg_3098_);
v___x_3109_ = l_LeanExport_dumpExprAux(v_arg_3098_, v___y_2943_, v_snd_3105_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3144_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3112_ = v___x_3109_;
v_isShared_3113_ = v_isSharedCheck_3144_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3109_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3144_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v_fst_3114_; lean_object* v_snd_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3143_; 
v_fst_3114_ = lean_ctor_get(v_a_3110_, 0);
v_snd_3115_ = lean_ctor_get(v_a_3110_, 1);
v_isSharedCheck_3143_ = !lean_is_exclusive(v_a_3110_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3117_ = v_a_3110_;
v_isShared_3118_ = v_isSharedCheck_3143_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_snd_3115_);
lean_inc(v_fst_3114_);
lean_dec(v_a_3110_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3143_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3119_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__5));
v___x_3120_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__6));
v___x_3121_ = l_Lean_JsonNumber_fromNat(v_fst_3104_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set_tag(v___x_3112_, 2);
lean_ctor_set(v___x_3112_, 0, v___x_3121_);
v___x_3123_ = v___x_3112_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
lean_object* v___x_3125_; 
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 1, v___x_3123_);
lean_ctor_set(v___x_3117_, 0, v___x_3120_);
v___x_3125_ = v___x_3117_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v___x_3120_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3126_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__7));
v___x_3127_ = l_Lean_JsonNumber_fromNat(v_fst_3114_);
if (v_isShared_3103_ == 0)
{
lean_ctor_set_tag(v___x_3102_, 2);
lean_ctor_set(v___x_3102_, 0, v___x_3127_);
v___x_3129_ = v___x_3102_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3131_; 
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 1, v___x_3129_);
lean_ctor_set(v___x_3107_, 0, v___x_3126_);
v___x_3131_ = v___x_3107_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3126_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v___x_3129_);
v___x_3131_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3132_ = lean_box(0);
v___x_3133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3131_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3125_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
v___x_3135_ = l_Lean_Json_mkObj(v___x_3134_);
lean_dec_ref_known(v___x_3134_, 2);
v___x_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3119_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3132_);
v___x_3138_ = l_Lean_Json_mkObj(v___x_3137_);
lean_dec_ref_known(v___x_3137_, 2);
v_fst_3003_ = v___x_3138_;
v_snd_3004_ = v_snd_3115_;
goto v___jp_3002_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3107_);
lean_dec(v_fst_3104_);
lean_del_object(v___x_3102_);
lean_dec_ref_known(v_e_2942_, 2);
return v___x_3109_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 2);
return v___x_3099_;
}
}
case 6:
{
lean_object* v_binderName_3147_; lean_object* v_binderType_3148_; lean_object* v_body_3149_; uint8_t v_binderInfo_3150_; lean_object* v___x_3151_; 
v_binderName_3147_ = lean_ctor_get(v_e_2942_, 0);
v_binderType_3148_ = lean_ctor_get(v_e_2942_, 1);
v_body_3149_ = lean_ctor_get(v_e_2942_, 2);
v_binderInfo_3150_ = lean_ctor_get_uint8(v_e_2942_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3147_);
v___x_3151_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3147_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3223_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3151_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3154_ = v___x_3151_;
v_isShared_3155_ = v_isSharedCheck_3223_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3151_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3223_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v_fst_3156_; lean_object* v_snd_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3222_; 
v_fst_3156_ = lean_ctor_get(v_a_3152_, 0);
v_snd_3157_ = lean_ctor_get(v_a_3152_, 1);
v_isSharedCheck_3222_ = !lean_is_exclusive(v_a_3152_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3159_ = v_a_3152_;
v_isShared_3160_ = v_isSharedCheck_3222_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_snd_3157_);
lean_inc(v_fst_3156_);
lean_dec(v_a_3152_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3222_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3161_; 
lean_inc_ref(v_binderType_3148_);
v___x_3161_ = l_LeanExport_dumpExprAux(v_binderType_3148_, v___y_2943_, v_snd_3157_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3221_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3161_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3164_ = v___x_3161_;
v_isShared_3165_ = v_isSharedCheck_3221_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3161_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3221_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v_fst_3166_; lean_object* v_snd_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3220_; 
v_fst_3166_ = lean_ctor_get(v_a_3162_, 0);
v_snd_3167_ = lean_ctor_get(v_a_3162_, 1);
v_isSharedCheck_3220_ = !lean_is_exclusive(v_a_3162_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3169_ = v_a_3162_;
v_isShared_3170_ = v_isSharedCheck_3220_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_snd_3167_);
lean_inc(v_fst_3166_);
lean_dec(v_a_3162_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3220_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3171_; 
lean_inc_ref(v_body_3149_);
v___x_3171_ = l_LeanExport_dumpExprAux(v_body_3149_, v___y_2943_, v_snd_3167_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3219_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3174_ = v___x_3171_;
v_isShared_3175_ = v_isSharedCheck_3219_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3171_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3219_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v_fst_3176_; lean_object* v_snd_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3218_; 
v_fst_3176_ = lean_ctor_get(v_a_3172_, 0);
v_snd_3177_ = lean_ctor_get(v_a_3172_, 1);
v_isSharedCheck_3218_ = !lean_is_exclusive(v_a_3172_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3179_ = v_a_3172_;
v_isShared_3180_ = v_isSharedCheck_3218_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_snd_3177_);
lean_inc(v_fst_3176_);
lean_dec(v_a_3172_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3218_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3185_; 
v___x_3181_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__8));
v___x_3182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3183_ = l_Lean_JsonNumber_fromNat(v_fst_3156_);
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 2);
lean_ctor_set(v___x_3174_, 0, v___x_3183_);
v___x_3185_ = v___x_3174_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v___x_3183_);
v___x_3185_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
lean_object* v___x_3187_; 
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 1, v___x_3185_);
lean_ctor_set(v___x_3179_, 0, v___x_3182_);
v___x_3187_ = v___x_3179_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v___x_3182_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v___x_3185_);
v___x_3187_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3191_; 
v___x_3188_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3189_ = l_Lean_JsonNumber_fromNat(v_fst_3166_);
if (v_isShared_3165_ == 0)
{
lean_ctor_set_tag(v___x_3164_, 2);
lean_ctor_set(v___x_3164_, 0, v___x_3189_);
v___x_3191_ = v___x_3164_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3189_);
v___x_3191_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
lean_object* v___x_3193_; 
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 1, v___x_3191_);
lean_ctor_set(v___x_3169_, 0, v___x_3188_);
v___x_3193_ = v___x_3169_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3214_, 1, v___x_3191_);
v___x_3193_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3197_; 
v___x_3194_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3195_ = l_Lean_JsonNumber_fromNat(v_fst_3176_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set_tag(v___x_3154_, 2);
lean_ctor_set(v___x_3154_, 0, v___x_3195_);
v___x_3197_ = v___x_3154_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v___x_3195_);
v___x_3197_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3199_; 
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 1, v___x_3197_);
lean_ctor_set(v___x_3159_, 0, v___x_3194_);
v___x_3199_ = v___x_3159_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3194_);
lean_ctor_set(v_reuseFailAlloc_3212_, 1, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3200_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3201_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3150_);
v___x_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3200_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = lean_box(0);
v___x_3204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3202_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
v___x_3205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3199_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3193_);
lean_ctor_set(v___x_3206_, 1, v___x_3205_);
v___x_3207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3187_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
v___x_3208_ = l_Lean_Json_mkObj(v___x_3207_);
lean_dec_ref_known(v___x_3207_, 2);
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3181_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
lean_ctor_set(v___x_3210_, 1, v___x_3203_);
v___x_3211_ = l_Lean_Json_mkObj(v___x_3210_);
lean_dec_ref_known(v___x_3210_, 2);
v_fst_3003_ = v___x_3211_;
v_snd_3004_ = v_snd_3177_;
goto v___jp_3002_;
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
lean_del_object(v___x_3169_);
lean_dec(v_fst_3166_);
lean_del_object(v___x_3164_);
lean_del_object(v___x_3159_);
lean_dec(v_fst_3156_);
lean_del_object(v___x_3154_);
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3171_;
}
}
}
}
else
{
lean_del_object(v___x_3159_);
lean_dec(v_fst_3156_);
lean_del_object(v___x_3154_);
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3161_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3151_;
}
}
case 7:
{
lean_object* v_binderName_3224_; lean_object* v_binderType_3225_; lean_object* v_body_3226_; uint8_t v_binderInfo_3227_; lean_object* v___x_3228_; 
v_binderName_3224_ = lean_ctor_get(v_e_2942_, 0);
v_binderType_3225_ = lean_ctor_get(v_e_2942_, 1);
v_body_3226_ = lean_ctor_get(v_e_2942_, 2);
v_binderInfo_3227_ = lean_ctor_get_uint8(v_e_2942_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3224_);
v___x_3228_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3224_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3300_; 
v_a_3229_ = lean_ctor_get(v___x_3228_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3231_ = v___x_3228_;
v_isShared_3232_ = v_isSharedCheck_3300_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3228_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3300_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v_fst_3233_; lean_object* v_snd_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3299_; 
v_fst_3233_ = lean_ctor_get(v_a_3229_, 0);
v_snd_3234_ = lean_ctor_get(v_a_3229_, 1);
v_isSharedCheck_3299_ = !lean_is_exclusive(v_a_3229_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3236_ = v_a_3229_;
v_isShared_3237_ = v_isSharedCheck_3299_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_snd_3234_);
lean_inc(v_fst_3233_);
lean_dec(v_a_3229_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3299_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3238_; 
lean_inc_ref(v_binderType_3225_);
v___x_3238_ = l_LeanExport_dumpExprAux(v_binderType_3225_, v___y_2943_, v_snd_3234_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3298_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3241_ = v___x_3238_;
v_isShared_3242_ = v_isSharedCheck_3298_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3238_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3298_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v_fst_3243_; lean_object* v_snd_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3297_; 
v_fst_3243_ = lean_ctor_get(v_a_3239_, 0);
v_snd_3244_ = lean_ctor_get(v_a_3239_, 1);
v_isSharedCheck_3297_ = !lean_is_exclusive(v_a_3239_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3246_ = v_a_3239_;
v_isShared_3247_ = v_isSharedCheck_3297_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_snd_3244_);
lean_inc(v_fst_3243_);
lean_dec(v_a_3239_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3297_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3248_; 
lean_inc_ref(v_body_3226_);
v___x_3248_ = l_LeanExport_dumpExprAux(v_body_3226_, v___y_2943_, v_snd_3244_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3296_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3251_ = v___x_3248_;
v_isShared_3252_ = v_isSharedCheck_3296_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3248_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3296_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v_fst_3253_; lean_object* v_snd_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3295_; 
v_fst_3253_ = lean_ctor_get(v_a_3249_, 0);
v_snd_3254_ = lean_ctor_get(v_a_3249_, 1);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_a_3249_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3256_ = v_a_3249_;
v_isShared_3257_ = v_isSharedCheck_3295_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_snd_3254_);
lean_inc(v_fst_3253_);
lean_dec(v_a_3249_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3295_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3262_; 
v___x_3258_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__11));
v___x_3259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3260_ = l_Lean_JsonNumber_fromNat(v_fst_3233_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set_tag(v___x_3251_, 2);
lean_ctor_set(v___x_3251_, 0, v___x_3260_);
v___x_3262_ = v___x_3251_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v___x_3260_);
v___x_3262_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3264_; 
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 1, v___x_3262_);
lean_ctor_set(v___x_3256_, 0, v___x_3259_);
v___x_3264_ = v___x_3256_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3293_, 1, v___x_3262_);
v___x_3264_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3268_; 
v___x_3265_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3266_ = l_Lean_JsonNumber_fromNat(v_fst_3243_);
if (v_isShared_3242_ == 0)
{
lean_ctor_set_tag(v___x_3241_, 2);
lean_ctor_set(v___x_3241_, 0, v___x_3266_);
v___x_3268_ = v___x_3241_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3266_);
v___x_3268_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
lean_object* v___x_3270_; 
if (v_isShared_3247_ == 0)
{
lean_ctor_set(v___x_3246_, 1, v___x_3268_);
lean_ctor_set(v___x_3246_, 0, v___x_3265_);
v___x_3270_ = v___x_3246_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3265_);
lean_ctor_set(v_reuseFailAlloc_3291_, 1, v___x_3268_);
v___x_3270_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3271_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3272_ = l_Lean_JsonNumber_fromNat(v_fst_3253_);
if (v_isShared_3232_ == 0)
{
lean_ctor_set_tag(v___x_3231_, 2);
lean_ctor_set(v___x_3231_, 0, v___x_3272_);
v___x_3274_ = v___x_3231_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3276_; 
if (v_isShared_3237_ == 0)
{
lean_ctor_set(v___x_3236_, 1, v___x_3274_);
lean_ctor_set(v___x_3236_, 0, v___x_3271_);
v___x_3276_ = v___x_3236_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v___x_3271_);
lean_ctor_set(v_reuseFailAlloc_3289_, 1, v___x_3274_);
v___x_3276_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; 
v___x_3277_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3278_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3227_);
v___x_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3277_);
lean_ctor_set(v___x_3279_, 1, v___x_3278_);
v___x_3280_ = lean_box(0);
v___x_3281_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3279_);
lean_ctor_set(v___x_3281_, 1, v___x_3280_);
v___x_3282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3276_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3270_);
lean_ctor_set(v___x_3283_, 1, v___x_3282_);
v___x_3284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3264_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = l_Lean_Json_mkObj(v___x_3284_);
lean_dec_ref_known(v___x_3284_, 2);
v___x_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3258_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
lean_ctor_set(v___x_3287_, 1, v___x_3280_);
v___x_3288_ = l_Lean_Json_mkObj(v___x_3287_);
lean_dec_ref_known(v___x_3287_, 2);
v_fst_3003_ = v___x_3288_;
v_snd_3004_ = v_snd_3254_;
goto v___jp_3002_;
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
lean_del_object(v___x_3246_);
lean_dec(v_fst_3243_);
lean_del_object(v___x_3241_);
lean_del_object(v___x_3236_);
lean_dec(v_fst_3233_);
lean_del_object(v___x_3231_);
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3248_;
}
}
}
}
else
{
lean_del_object(v___x_3236_);
lean_dec(v_fst_3233_);
lean_del_object(v___x_3231_);
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3238_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3228_;
}
}
case 8:
{
lean_object* v_declName_3301_; lean_object* v_type_3302_; lean_object* v_value_3303_; lean_object* v_body_3304_; uint8_t v_nondep_3305_; lean_object* v___x_3306_; 
v_declName_3301_ = lean_ctor_get(v_e_2942_, 0);
v_type_3302_ = lean_ctor_get(v_e_2942_, 1);
v_value_3303_ = lean_ctor_get(v_e_2942_, 2);
v_body_3304_ = lean_ctor_get(v_e_2942_, 3);
v_nondep_3305_ = lean_ctor_get_uint8(v_e_2942_, sizeof(void*)*4 + 8);
lean_inc(v_declName_3301_);
v___x_3306_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3301_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3399_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3309_ = v___x_3306_;
v_isShared_3310_ = v_isSharedCheck_3399_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_a_3307_);
lean_dec(v___x_3306_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3399_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v_fst_3311_; lean_object* v_snd_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3398_; 
v_fst_3311_ = lean_ctor_get(v_a_3307_, 0);
v_snd_3312_ = lean_ctor_get(v_a_3307_, 1);
v_isSharedCheck_3398_ = !lean_is_exclusive(v_a_3307_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3314_ = v_a_3307_;
v_isShared_3315_ = v_isSharedCheck_3398_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_snd_3312_);
lean_inc(v_fst_3311_);
lean_dec(v_a_3307_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3398_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3316_; 
lean_inc_ref(v_type_3302_);
v___x_3316_ = l_LeanExport_dumpExprAux(v_type_3302_, v___y_2943_, v_snd_3312_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3397_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3397_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3397_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v_fst_3321_; lean_object* v_snd_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3396_; 
v_fst_3321_ = lean_ctor_get(v_a_3317_, 0);
v_snd_3322_ = lean_ctor_get(v_a_3317_, 1);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_a_3317_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3324_ = v_a_3317_;
v_isShared_3325_ = v_isSharedCheck_3396_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_snd_3322_);
lean_inc(v_fst_3321_);
lean_dec(v_a_3317_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3396_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3326_; 
lean_inc_ref(v_value_3303_);
v___x_3326_ = l_LeanExport_dumpExprAux(v_value_3303_, v___y_2943_, v_snd_3322_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3395_; 
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3329_ = v___x_3326_;
v_isShared_3330_ = v_isSharedCheck_3395_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3326_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3395_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v_fst_3331_; lean_object* v_snd_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3394_; 
v_fst_3331_ = lean_ctor_get(v_a_3327_, 0);
v_snd_3332_ = lean_ctor_get(v_a_3327_, 1);
v_isSharedCheck_3394_ = !lean_is_exclusive(v_a_3327_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3334_ = v_a_3327_;
v_isShared_3335_ = v_isSharedCheck_3394_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_snd_3332_);
lean_inc(v_fst_3331_);
lean_dec(v_a_3327_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3394_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3336_; 
lean_inc_ref(v_body_3304_);
v___x_3336_ = l_LeanExport_dumpExprAux(v_body_3304_, v___y_2943_, v_snd_3332_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3393_; 
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3339_ = v___x_3336_;
v_isShared_3340_ = v_isSharedCheck_3393_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v___x_3336_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3393_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v_fst_3341_; lean_object* v_snd_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3392_; 
v_fst_3341_ = lean_ctor_get(v_a_3337_, 0);
v_snd_3342_ = lean_ctor_get(v_a_3337_, 1);
v_isSharedCheck_3392_ = !lean_is_exclusive(v_a_3337_);
if (v_isSharedCheck_3392_ == 0)
{
v___x_3344_ = v_a_3337_;
v_isShared_3345_ = v_isSharedCheck_3392_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_snd_3342_);
lean_inc(v_fst_3341_);
lean_dec(v_a_3337_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3392_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3350_; 
v___x_3346_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__12));
v___x_3347_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3348_ = l_Lean_JsonNumber_fromNat(v_fst_3311_);
if (v_isShared_3340_ == 0)
{
lean_ctor_set_tag(v___x_3339_, 2);
lean_ctor_set(v___x_3339_, 0, v___x_3348_);
v___x_3350_ = v___x_3339_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v___x_3348_);
v___x_3350_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3352_; 
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 1, v___x_3350_);
lean_ctor_set(v___x_3344_, 0, v___x_3347_);
v___x_3352_ = v___x_3344_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3347_);
lean_ctor_set(v_reuseFailAlloc_3390_, 1, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3356_; 
v___x_3353_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3354_ = l_Lean_JsonNumber_fromNat(v_fst_3321_);
if (v_isShared_3330_ == 0)
{
lean_ctor_set_tag(v___x_3329_, 2);
lean_ctor_set(v___x_3329_, 0, v___x_3354_);
v___x_3356_ = v___x_3329_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v___x_3354_);
v___x_3356_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
lean_object* v___x_3358_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 1, v___x_3356_);
lean_ctor_set(v___x_3334_, 0, v___x_3353_);
v___x_3358_ = v___x_3334_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v___x_3353_);
lean_ctor_set(v_reuseFailAlloc_3388_, 1, v___x_3356_);
v___x_3358_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3362_; 
v___x_3359_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_3360_ = l_Lean_JsonNumber_fromNat(v_fst_3331_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set_tag(v___x_3319_, 2);
lean_ctor_set(v___x_3319_, 0, v___x_3360_);
v___x_3362_ = v___x_3319_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v___x_3360_);
v___x_3362_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
lean_object* v___x_3364_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 1, v___x_3362_);
lean_ctor_set(v___x_3324_, 0, v___x_3359_);
v___x_3364_ = v___x_3324_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v___x_3359_);
lean_ctor_set(v_reuseFailAlloc_3386_, 1, v___x_3362_);
v___x_3364_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3368_; 
v___x_3365_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3366_ = l_Lean_JsonNumber_fromNat(v_fst_3341_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set_tag(v___x_3309_, 2);
lean_ctor_set(v___x_3309_, 0, v___x_3366_);
v___x_3368_ = v___x_3309_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v___x_3366_);
v___x_3368_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3370_; 
if (v_isShared_3315_ == 0)
{
lean_ctor_set(v___x_3314_, 1, v___x_3368_);
lean_ctor_set(v___x_3314_, 0, v___x_3365_);
v___x_3370_ = v___x_3314_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3365_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v___x_3368_);
v___x_3370_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3371_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__14));
v___x_3372_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3372_, 0, v_nondep_3305_);
v___x_3373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3371_);
lean_ctor_set(v___x_3373_, 1, v___x_3372_);
v___x_3374_ = lean_box(0);
v___x_3375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3373_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3370_);
lean_ctor_set(v___x_3376_, 1, v___x_3375_);
v___x_3377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3364_);
lean_ctor_set(v___x_3377_, 1, v___x_3376_);
v___x_3378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3358_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3352_);
lean_ctor_set(v___x_3379_, 1, v___x_3378_);
v___x_3380_ = l_Lean_Json_mkObj(v___x_3379_);
lean_dec_ref_known(v___x_3379_, 2);
v___x_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3346_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
v___x_3382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3381_);
lean_ctor_set(v___x_3382_, 1, v___x_3374_);
v___x_3383_ = l_Lean_Json_mkObj(v___x_3382_);
lean_dec_ref_known(v___x_3382_, 2);
v_fst_3003_ = v___x_3383_;
v_snd_3004_ = v_snd_3342_;
goto v___jp_3002_;
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
lean_del_object(v___x_3334_);
lean_dec(v_fst_3331_);
lean_del_object(v___x_3329_);
lean_del_object(v___x_3324_);
lean_dec(v_fst_3321_);
lean_del_object(v___x_3319_);
lean_del_object(v___x_3314_);
lean_dec(v_fst_3311_);
lean_del_object(v___x_3309_);
lean_dec_ref_known(v_e_2942_, 4);
return v___x_3336_;
}
}
}
}
else
{
lean_del_object(v___x_3324_);
lean_dec(v_fst_3321_);
lean_del_object(v___x_3319_);
lean_del_object(v___x_3314_);
lean_dec(v_fst_3311_);
lean_del_object(v___x_3309_);
lean_dec_ref_known(v_e_2942_, 4);
return v___x_3326_;
}
}
}
}
else
{
lean_del_object(v___x_3314_);
lean_dec(v_fst_3311_);
lean_del_object(v___x_3309_);
lean_dec_ref_known(v_e_2942_, 4);
return v___x_3316_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 4);
return v___x_3306_;
}
}
case 9:
{
lean_object* v_a_3400_; 
v_a_3400_ = lean_ctor_get(v_e_2942_, 0);
lean_inc_ref(v_a_3400_);
if (lean_obj_tag(v_a_3400_) == 0)
{
lean_object* v_val_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3432_; 
v_val_3401_ = lean_ctor_get(v_a_3400_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_a_3400_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3403_ = v_a_3400_;
v_isShared_3404_ = v_isSharedCheck_3432_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_val_3401_);
lean_dec(v_a_3400_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3432_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; 
v___x_3405_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; lean_object* v_snd_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3422_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3405_, 1);
v_snd_3407_ = lean_ctor_get(v_a_3406_, 1);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_a_3406_);
if (v_isSharedCheck_3422_ == 0)
{
lean_object* v_unused_3423_; 
v_unused_3423_ = lean_ctor_get(v_a_3406_, 0);
lean_dec(v_unused_3423_);
v___x_3409_ = v_a_3406_;
v_isShared_3410_ = v_isSharedCheck_3422_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_snd_3407_);
lean_dec(v_a_3406_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3422_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
v___x_3411_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__15));
v___x_3412_ = l_Nat_reprFast(v_val_3401_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set_tag(v___x_3403_, 3);
lean_ctor_set(v___x_3403_, 0, v___x_3412_);
v___x_3414_ = v___x_3403_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v___x_3412_);
v___x_3414_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
lean_object* v___x_3416_; 
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 1, v___x_3414_);
lean_ctor_set(v___x_3409_, 0, v___x_3411_);
v___x_3416_ = v___x_3409_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3411_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3417_ = lean_box(0);
v___x_3418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3416_);
lean_ctor_set(v___x_3418_, 1, v___x_3417_);
v___x_3419_ = l_Lean_Json_mkObj(v___x_3418_);
lean_dec_ref_known(v___x_3418_, 2);
v_fst_3003_ = v___x_3419_;
v_snd_3004_ = v_snd_3407_;
goto v___jp_3002_;
}
}
}
}
else
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_del_object(v___x_3403_);
lean_dec(v_val_3401_);
lean_dec_ref_known(v_e_2942_, 1);
v_a_3424_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3405_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v___x_3405_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_a_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
}
}
else
{
lean_object* v_val_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3463_; 
v_val_3433_ = lean_ctor_get(v_a_3400_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v_a_3400_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3435_ = v_a_3400_;
v_isShared_3436_ = v_isSharedCheck_3463_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_val_3433_);
lean_dec(v_a_3400_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3463_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3437_; 
v___x_3437_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v_snd_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3453_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3438_);
lean_dec_ref_known(v___x_3437_, 1);
v_snd_3439_ = lean_ctor_get(v_a_3438_, 1);
v_isSharedCheck_3453_ = !lean_is_exclusive(v_a_3438_);
if (v_isSharedCheck_3453_ == 0)
{
lean_object* v_unused_3454_; 
v_unused_3454_ = lean_ctor_get(v_a_3438_, 0);
lean_dec(v_unused_3454_);
v___x_3441_ = v_a_3438_;
v_isShared_3442_ = v_isSharedCheck_3453_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_snd_3439_);
lean_dec(v_a_3438_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3453_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3445_; 
v___x_3443_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__16));
if (v_isShared_3436_ == 0)
{
lean_ctor_set_tag(v___x_3435_, 3);
v___x_3445_ = v___x_3435_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_val_3433_);
v___x_3445_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___x_3447_; 
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 1, v___x_3445_);
lean_ctor_set(v___x_3441_, 0, v___x_3443_);
v___x_3447_ = v___x_3441_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3443_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v___x_3445_);
v___x_3447_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3448_ = lean_box(0);
v___x_3449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3447_);
lean_ctor_set(v___x_3449_, 1, v___x_3448_);
v___x_3450_ = l_Lean_Json_mkObj(v___x_3449_);
lean_dec_ref_known(v___x_3449_, 2);
v_fst_3003_ = v___x_3450_;
v_snd_3004_ = v_snd_3439_;
goto v___jp_3002_;
}
}
}
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_del_object(v___x_3435_);
lean_dec_ref(v_val_3433_);
lean_dec_ref_known(v_e_2942_, 1);
v_a_3455_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3437_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3437_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_3464_; lean_object* v_expr_3465_; lean_object* v___x_3466_; 
v_data_3464_ = lean_ctor_get(v_e_2942_, 0);
v_expr_3465_ = lean_ctor_get(v_e_2942_, 1);
lean_inc_ref(v_expr_3465_);
v___x_3466_ = l_LeanExport_dumpExprAux(v_expr_3465_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3496_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3469_ = v___x_3466_;
v_isShared_3470_ = v_isSharedCheck_3496_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3466_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3496_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v_fst_3471_; lean_object* v_snd_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3495_; 
v_fst_3471_ = lean_ctor_get(v_a_3467_, 0);
v_snd_3472_ = lean_ctor_get(v_a_3467_, 1);
v_isSharedCheck_3495_ = !lean_is_exclusive(v_a_3467_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3474_ = v_a_3467_;
v_isShared_3475_ = v_isSharedCheck_3495_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_snd_3472_);
lean_inc(v_fst_3471_);
lean_dec(v_a_3467_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3495_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3480_; 
v___x_3476_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__17));
v___x_3477_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__18));
lean_inc(v_data_3464_);
v___x_3478_ = l___private_LeanExport_Basic_0__Lean_KVMap_toJson(v_data_3464_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 1, v___x_3478_);
lean_ctor_set(v___x_3474_, 0, v___x_3477_);
v___x_3480_ = v___x_3474_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3477_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3484_; 
v___x_3481_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__19));
v___x_3482_ = l_Lean_JsonNumber_fromNat(v_fst_3471_);
if (v_isShared_3470_ == 0)
{
lean_ctor_set_tag(v___x_3469_, 2);
lean_ctor_set(v___x_3469_, 0, v___x_3482_);
v___x_3484_ = v___x_3469_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3481_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = lean_box(0);
v___x_3487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3485_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3480_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = l_Lean_Json_mkObj(v___x_3488_);
lean_dec_ref_known(v___x_3488_, 2);
v___x_3490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3476_);
lean_ctor_set(v___x_3490_, 1, v___x_3489_);
v___x_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3490_);
lean_ctor_set(v___x_3491_, 1, v___x_3486_);
v___x_3492_ = l_Lean_Json_mkObj(v___x_3491_);
lean_dec_ref_known(v___x_3491_, 2);
v_fst_3003_ = v___x_3492_;
v_snd_3004_ = v_snd_3472_;
goto v___jp_3002_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 2);
return v___x_3466_;
}
}
case 11:
{
lean_object* v_typeName_3497_; lean_object* v_idx_3498_; lean_object* v_struct_3499_; lean_object* v___x_3500_; 
v_typeName_3497_ = lean_ctor_get(v_e_2942_, 0);
v_idx_3498_ = lean_ctor_get(v_e_2942_, 1);
v_struct_3499_ = lean_ctor_get(v_e_2942_, 2);
lean_inc(v_typeName_3497_);
v___x_3500_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_typeName_3497_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3552_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3503_ = v___x_3500_;
v_isShared_3504_ = v_isSharedCheck_3552_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3500_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3552_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v_fst_3505_; lean_object* v_snd_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3551_; 
v_fst_3505_ = lean_ctor_get(v_a_3501_, 0);
v_snd_3506_ = lean_ctor_get(v_a_3501_, 1);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_a_3501_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3508_ = v_a_3501_;
v_isShared_3509_ = v_isSharedCheck_3551_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_snd_3506_);
lean_inc(v_fst_3505_);
lean_dec(v_a_3501_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3551_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3510_; 
lean_inc_ref(v_struct_3499_);
v___x_3510_ = l_LeanExport_dumpExprAux(v_struct_3499_, v___y_2943_, v_snd_3506_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3550_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3513_ = v___x_3510_;
v_isShared_3514_ = v_isSharedCheck_3550_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3550_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v_fst_3515_; lean_object* v_snd_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3549_; 
v_fst_3515_ = lean_ctor_get(v_a_3511_, 0);
v_snd_3516_ = lean_ctor_get(v_a_3511_, 1);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_a_3511_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3518_ = v_a_3511_;
v_isShared_3519_ = v_isSharedCheck_3549_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_snd_3516_);
lean_inc(v_fst_3515_);
lean_dec(v_a_3511_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3549_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3524_; 
v___x_3520_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__20));
v___x_3521_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__21));
v___x_3522_ = l_Lean_JsonNumber_fromNat(v_fst_3505_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set_tag(v___x_3513_, 2);
lean_ctor_set(v___x_3513_, 0, v___x_3522_);
v___x_3524_ = v___x_3513_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v___x_3522_);
v___x_3524_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
lean_object* v___x_3526_; 
if (v_isShared_3519_ == 0)
{
lean_ctor_set(v___x_3518_, 1, v___x_3524_);
lean_ctor_set(v___x_3518_, 0, v___x_3521_);
v___x_3526_ = v___x_3518_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v___x_3521_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v___x_3524_);
v___x_3526_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3527_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__22));
lean_inc(v_idx_3498_);
v___x_3528_ = l_Lean_JsonNumber_fromNat(v_idx_3498_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set_tag(v___x_3503_, 2);
lean_ctor_set(v___x_3503_, 0, v___x_3528_);
v___x_3530_ = v___x_3503_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3532_; 
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 1, v___x_3530_);
lean_ctor_set(v___x_3508_, 0, v___x_3527_);
v___x_3532_ = v___x_3508_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v___x_3527_);
lean_ctor_set(v_reuseFailAlloc_3545_, 1, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3533_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__23));
v___x_3534_ = l_Lean_JsonNumber_fromNat(v_fst_3515_);
v___x_3535_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3534_);
v___x_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3533_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_box(0);
v___x_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3536_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___x_3539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3532_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3526_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v___x_3541_ = l_Lean_Json_mkObj(v___x_3540_);
lean_dec_ref_known(v___x_3540_, 2);
v___x_3542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3520_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___x_3543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
lean_ctor_set(v___x_3543_, 1, v___x_3537_);
v___x_3544_ = l_Lean_Json_mkObj(v___x_3543_);
lean_dec_ref_known(v___x_3543_, 2);
v_fst_3003_ = v___x_3544_;
v_snd_3004_ = v_snd_3516_;
goto v___jp_3002_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3508_);
lean_dec(v_fst_3505_);
lean_del_object(v___x_3503_);
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3510_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2942_, 3);
return v___x_3500_;
}
}
default: 
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_obj_once(&l_LeanExport_dumpExprAux___closed__26, &l_LeanExport_dumpExprAux___closed__26_once, _init_l_LeanExport_dumpExprAux___closed__26);
v___x_3554_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_3553_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v_fst_3556_; lean_object* v_snd_3557_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3554_, 1);
v_fst_3556_ = lean_ctor_get(v_a_3555_, 0);
lean_inc(v_fst_3556_);
v_snd_3557_ = lean_ctor_get(v_a_3555_, 1);
lean_inc(v_snd_3557_);
lean_dec(v_a_3555_);
v_fst_3003_ = v_fst_3556_;
v_snd_3004_ = v_snd_3557_;
goto v___jp_3002_;
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec_ref(v_e_2942_);
v_a_3558_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3554_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3554_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
}
v___jp_2966_:
{
lean_object* v_size_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v_size_2977_ = lean_ctor_get(v_visitedExprs_2970_, 0);
lean_inc_n(v_size_2977_, 2);
v___x_2978_ = l_Lean_JsonNumber_fromNat(v_size_2977_);
v___x_2979_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
v___x_2980_ = l_Lean_Json_setObjVal_x21(v_fst_2967_, v___x_2965_, v___x_2979_);
v___x_2981_ = l_Lean_Json_compress(v___x_2980_);
v___x_2982_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_2981_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2992_; 
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2992_ == 0)
{
lean_object* v_unused_2993_; 
v_unused_2993_ = lean_ctor_get(v___x_2982_, 0);
lean_dec(v_unused_2993_);
v___x_2984_ = v___x_2982_;
v_isShared_2985_ = v_isSharedCheck_2992_;
goto v_resetjp_2983_;
}
else
{
lean_dec(v___x_2982_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2992_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2990_; 
lean_inc(v_size_2977_);
v___x_2986_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_visitedExprs_2970_, v_e_2942_, v_size_2977_);
v___x_2987_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2987_, 0, v_visitedNames_2968_);
lean_ctor_set(v___x_2987_, 1, v_visitedLevels_2969_);
lean_ctor_set(v___x_2987_, 2, v___x_2986_);
lean_ctor_set(v___x_2987_, 3, v_visitedConstants_2971_);
lean_ctor_set(v___x_2987_, 4, v_noMDataExprs_2972_);
lean_ctor_set(v___x_2987_, 5, v_recursorMap_2976_);
lean_ctor_set_uint8(v___x_2987_, sizeof(void*)*6, v_exportMData_2973_);
lean_ctor_set_uint8(v___x_2987_, sizeof(void*)*6 + 1, v_exportUnsafe_2974_);
lean_ctor_set_uint8(v___x_2987_, sizeof(void*)*6 + 2, v_ignoreMissing_2975_);
v___x_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2988_, 0, v_size_2977_);
lean_ctor_set(v___x_2988_, 1, v___x_2987_);
if (v_isShared_2985_ == 0)
{
lean_ctor_set(v___x_2984_, 0, v___x_2988_);
v___x_2990_ = v___x_2984_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2988_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
else
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3001_; 
lean_dec(v_size_2977_);
lean_dec(v_recursorMap_2976_);
lean_dec_ref(v_noMDataExprs_2972_);
lean_dec_ref(v_visitedConstants_2971_);
lean_dec_ref(v_visitedExprs_2970_);
lean_dec_ref(v_visitedLevels_2969_);
lean_dec_ref(v_visitedNames_2968_);
lean_dec_ref(v_e_2942_);
v_a_2994_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2996_ = v___x_2982_;
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2982_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
}
v___jp_3002_:
{
lean_object* v_visitedNames_3005_; lean_object* v_visitedLevels_3006_; lean_object* v_visitedExprs_3007_; lean_object* v_visitedConstants_3008_; lean_object* v_noMDataExprs_3009_; uint8_t v_exportMData_3010_; uint8_t v_exportUnsafe_3011_; uint8_t v_ignoreMissing_3012_; lean_object* v_recursorMap_3013_; 
v_visitedNames_3005_ = lean_ctor_get(v_snd_3004_, 0);
lean_inc_ref(v_visitedNames_3005_);
v_visitedLevels_3006_ = lean_ctor_get(v_snd_3004_, 1);
lean_inc_ref(v_visitedLevels_3006_);
v_visitedExprs_3007_ = lean_ctor_get(v_snd_3004_, 2);
lean_inc_ref(v_visitedExprs_3007_);
v_visitedConstants_3008_ = lean_ctor_get(v_snd_3004_, 3);
lean_inc_ref(v_visitedConstants_3008_);
v_noMDataExprs_3009_ = lean_ctor_get(v_snd_3004_, 4);
lean_inc_ref(v_noMDataExprs_3009_);
v_exportMData_3010_ = lean_ctor_get_uint8(v_snd_3004_, sizeof(void*)*6);
v_exportUnsafe_3011_ = lean_ctor_get_uint8(v_snd_3004_, sizeof(void*)*6 + 1);
v_ignoreMissing_3012_ = lean_ctor_get_uint8(v_snd_3004_, sizeof(void*)*6 + 2);
v_recursorMap_3013_ = lean_ctor_get(v_snd_3004_, 5);
lean_inc(v_recursorMap_3013_);
lean_dec_ref(v_snd_3004_);
v_fst_2967_ = v_fst_3003_;
v_visitedNames_2968_ = v_visitedNames_3005_;
v_visitedLevels_2969_ = v_visitedLevels_3006_;
v_visitedExprs_2970_ = v_visitedExprs_3007_;
v_visitedConstants_2971_ = v_visitedConstants_3008_;
v_noMDataExprs_2972_ = v_noMDataExprs_3009_;
v_exportMData_2973_ = v_exportMData_3010_;
v_exportUnsafe_2974_ = v_exportUnsafe_3011_;
v_ignoreMissing_2975_ = v_ignoreMissing_3012_;
v_recursorMap_2976_ = v_recursorMap_3013_;
goto v___jp_2966_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object* v_e_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_){
_start:
{
uint8_t v_exportMData_3570_; 
v_exportMData_3570_ = lean_ctor_get_uint8(v___y_3568_, sizeof(void*)*6);
if (v_exportMData_3570_ == 0)
{
lean_object* v_visitedNames_3571_; lean_object* v_visitedLevels_3572_; lean_object* v_visitedExprs_3573_; lean_object* v_visitedConstants_3574_; uint8_t v_exportUnsafe_3575_; uint8_t v_ignoreMissing_3576_; lean_object* v_recursorMap_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3598_; 
v_visitedNames_3571_ = lean_ctor_get(v___y_3568_, 0);
v_visitedLevels_3572_ = lean_ctor_get(v___y_3568_, 1);
v_visitedExprs_3573_ = lean_ctor_get(v___y_3568_, 2);
v_visitedConstants_3574_ = lean_ctor_get(v___y_3568_, 3);
v_exportUnsafe_3575_ = lean_ctor_get_uint8(v___y_3568_, sizeof(void*)*6 + 1);
v_ignoreMissing_3576_ = lean_ctor_get_uint8(v___y_3568_, sizeof(void*)*6 + 2);
v_recursorMap_3577_ = lean_ctor_get(v___y_3568_, 5);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___y_3568_);
if (v_isSharedCheck_3598_ == 0)
{
lean_object* v_unused_3599_; 
v_unused_3599_ = lean_ctor_get(v___y_3568_, 4);
lean_dec(v_unused_3599_);
v___x_3579_ = v___y_3568_;
v_isShared_3580_ = v_isSharedCheck_3598_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_recursorMap_3577_);
lean_inc(v_visitedConstants_3574_);
lean_inc(v_visitedExprs_3573_);
lean_inc(v_visitedLevels_3572_);
lean_inc(v_visitedNames_3571_);
lean_dec(v___y_3568_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3598_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3581_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 4, v___x_3581_);
v___x_3583_ = v___x_3579_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_visitedNames_3571_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v_visitedLevels_3572_);
lean_ctor_set(v_reuseFailAlloc_3597_, 2, v_visitedExprs_3573_);
lean_ctor_set(v_reuseFailAlloc_3597_, 3, v_visitedConstants_3574_);
lean_ctor_set(v_reuseFailAlloc_3597_, 4, v___x_3581_);
lean_ctor_set(v_reuseFailAlloc_3597_, 5, v_recursorMap_3577_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, sizeof(void*)*6, v_exportMData_3570_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, sizeof(void*)*6 + 1, v_exportUnsafe_3575_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, sizeof(void*)*6 + 2, v_ignoreMissing_3576_);
v___x_3583_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
lean_object* v___x_3584_; 
v___x_3584_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_3566_, v___y_3567_, v___x_3583_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; lean_object* v_fst_3586_; lean_object* v_snd_3587_; lean_object* v___x_3588_; 
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_a_3585_);
lean_dec_ref_known(v___x_3584_, 1);
v_fst_3586_ = lean_ctor_get(v_a_3585_, 0);
lean_inc(v_fst_3586_);
v_snd_3587_ = lean_ctor_get(v_a_3585_, 1);
lean_inc(v_snd_3587_);
lean_dec(v_a_3585_);
v___x_3588_ = l_LeanExport_dumpExprAux(v_fst_3586_, v___y_3567_, v_snd_3587_);
return v___x_3588_;
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
v_a_3589_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3584_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3584_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
}
}
else
{
lean_object* v___x_3600_; 
v___x_3600_ = l_LeanExport_dumpExprAux(v_e_3566_, v___y_3567_, v___y_3568_);
return v___x_3600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(size_t v_sz_3610_, size_t v_i_3611_, lean_object* v_bs_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
uint8_t v___x_3616_; 
v___x_3616_ = lean_usize_dec_lt(v_i_3611_, v_sz_3610_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3617_, 0, v_bs_3612_);
lean_ctor_set(v___x_3617_, 1, v___y_3614_);
v___x_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
return v___x_3618_;
}
else
{
lean_object* v_v_3619_; lean_object* v_toConstantVal_3620_; lean_object* v_numParams_3621_; lean_object* v_numIndices_3622_; lean_object* v_all_3623_; lean_object* v_ctors_3624_; lean_object* v_numNested_3625_; uint8_t v_isRec_3626_; uint8_t v_isUnsafe_3627_; uint8_t v_isReflexive_3628_; lean_object* v_name_3629_; lean_object* v_levelParams_3630_; lean_object* v_type_3631_; lean_object* v___x_3632_; lean_object* v_bs_x27_3633_; lean_object* v_fst_3635_; lean_object* v_snd_3636_; lean_object* v___y_3642_; lean_object* v___x_3654_; 
v_v_3619_ = lean_array_uget_borrowed(v_bs_3612_, v_i_3611_);
v_toConstantVal_3620_ = lean_ctor_get(v_v_3619_, 0);
v_numParams_3621_ = lean_ctor_get(v_v_3619_, 1);
lean_inc(v_numParams_3621_);
v_numIndices_3622_ = lean_ctor_get(v_v_3619_, 2);
lean_inc(v_numIndices_3622_);
v_all_3623_ = lean_ctor_get(v_v_3619_, 3);
lean_inc(v_all_3623_);
v_ctors_3624_ = lean_ctor_get(v_v_3619_, 4);
lean_inc(v_ctors_3624_);
v_numNested_3625_ = lean_ctor_get(v_v_3619_, 5);
lean_inc(v_numNested_3625_);
v_isRec_3626_ = lean_ctor_get_uint8(v_v_3619_, sizeof(void*)*6);
v_isUnsafe_3627_ = lean_ctor_get_uint8(v_v_3619_, sizeof(void*)*6 + 1);
v_isReflexive_3628_ = lean_ctor_get_uint8(v_v_3619_, sizeof(void*)*6 + 2);
v_name_3629_ = lean_ctor_get(v_toConstantVal_3620_, 0);
lean_inc(v_name_3629_);
v_levelParams_3630_ = lean_ctor_get(v_toConstantVal_3620_, 1);
lean_inc(v_levelParams_3630_);
v_type_3631_ = lean_ctor_get(v_toConstantVal_3620_, 2);
lean_inc_ref(v_type_3631_);
v___x_3632_ = lean_unsigned_to_nat(0u);
v_bs_x27_3633_ = lean_array_uset(v_bs_3612_, v_i_3611_, v___x_3632_);
v___x_3654_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3629_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; lean_object* v_fst_3656_; lean_object* v_snd_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3777_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
lean_inc(v_a_3655_);
lean_dec_ref_known(v___x_3654_, 1);
v_fst_3656_ = lean_ctor_get(v_a_3655_, 0);
v_snd_3657_ = lean_ctor_get(v_a_3655_, 1);
v_isSharedCheck_3777_ = !lean_is_exclusive(v_a_3655_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3659_ = v_a_3655_;
v_isShared_3660_ = v_isSharedCheck_3777_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_snd_3657_);
lean_inc(v_fst_3656_);
lean_dec(v_a_3655_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3777_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3661_; 
v___x_3661_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3630_, v___y_3613_, v_snd_3657_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3776_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3776_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3776_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v_fst_3666_; lean_object* v_snd_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3775_; 
v_fst_3666_ = lean_ctor_get(v_a_3662_, 0);
v_snd_3667_ = lean_ctor_get(v_a_3662_, 1);
v_isSharedCheck_3775_ = !lean_is_exclusive(v_a_3662_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3669_ = v_a_3662_;
v_isShared_3670_ = v_isSharedCheck_3775_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_snd_3667_);
lean_inc(v_fst_3666_);
lean_dec(v_a_3662_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3775_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3671_; 
v___x_3671_ = l_LeanExport_dumpExpr(v_type_3631_, v___y_3613_, v_snd_3667_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v_fst_3673_; lean_object* v_snd_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3766_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
lean_inc(v_a_3672_);
lean_dec_ref_known(v___x_3671_, 1);
v_fst_3673_ = lean_ctor_get(v_a_3672_, 0);
v_snd_3674_ = lean_ctor_get(v_a_3672_, 1);
v_isSharedCheck_3766_ = !lean_is_exclusive(v_a_3672_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3676_ = v_a_3672_;
v_isShared_3677_ = v_isSharedCheck_3766_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_snd_3674_);
lean_inc(v_fst_3673_);
lean_dec(v_a_3672_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3766_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3678_; 
v___x_3678_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_3623_, v___y_3613_, v_snd_3674_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3765_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3765_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3765_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v_fst_3683_; lean_object* v_snd_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3764_; 
v_fst_3683_ = lean_ctor_get(v_a_3679_, 0);
v_snd_3684_ = lean_ctor_get(v_a_3679_, 1);
v_isSharedCheck_3764_ = !lean_is_exclusive(v_a_3679_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3686_ = v_a_3679_;
v_isShared_3687_ = v_isSharedCheck_3764_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_snd_3684_);
lean_inc(v_fst_3683_);
lean_dec(v_a_3679_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3764_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3688_; 
v___x_3688_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_ctors_3624_, v___y_3613_, v_snd_3684_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3763_; 
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3691_ = v___x_3688_;
v_isShared_3692_ = v_isSharedCheck_3763_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3688_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3763_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v_fst_3693_; lean_object* v_snd_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3762_; 
v_fst_3693_ = lean_ctor_get(v_a_3689_, 0);
v_snd_3694_ = lean_ctor_get(v_a_3689_, 1);
v_isSharedCheck_3762_ = !lean_is_exclusive(v_a_3689_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3696_ = v_a_3689_;
v_isShared_3697_ = v_isSharedCheck_3762_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_snd_3694_);
lean_inc(v_fst_3693_);
lean_dec(v_a_3689_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3762_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3701_; 
v___x_3698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3699_ = l_Lean_JsonNumber_fromNat(v_fst_3656_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set_tag(v___x_3691_, 2);
lean_ctor_set(v___x_3691_, 0, v___x_3699_);
v___x_3701_ = v___x_3691_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v___x_3699_);
v___x_3701_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
lean_object* v___x_3703_; 
if (v_isShared_3697_ == 0)
{
lean_ctor_set(v___x_3696_, 1, v___x_3701_);
lean_ctor_set(v___x_3696_, 0, v___x_3698_);
v___x_3703_ = v___x_3696_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v___x_3698_);
lean_ctor_set(v_reuseFailAlloc_3760_, 1, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3704_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_3687_ == 0)
{
lean_ctor_set(v___x_3686_, 1, v_fst_3666_);
lean_ctor_set(v___x_3686_, 0, v___x_3704_);
v___x_3706_ = v___x_3686_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v___x_3704_);
lean_ctor_set(v_reuseFailAlloc_3759_, 1, v_fst_3666_);
v___x_3706_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3707_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3708_ = l_Lean_JsonNumber_fromNat(v_fst_3673_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set_tag(v___x_3681_, 2);
lean_ctor_set(v___x_3681_, 0, v___x_3708_);
v___x_3710_ = v___x_3681_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
lean_object* v___x_3712_; 
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 1, v___x_3710_);
lean_ctor_set(v___x_3676_, 0, v___x_3707_);
v___x_3712_ = v___x_3676_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v___x_3707_);
lean_ctor_set(v_reuseFailAlloc_3757_, 1, v___x_3710_);
v___x_3712_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3716_; 
v___x_3713_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3714_ = l_Lean_JsonNumber_fromNat(v_numParams_3621_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set_tag(v___x_3664_, 2);
lean_ctor_set(v___x_3664_, 0, v___x_3714_);
v___x_3716_ = v___x_3664_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v___x_3714_);
v___x_3716_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
lean_object* v___x_3718_; 
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 1, v___x_3716_);
lean_ctor_set(v___x_3669_, 0, v___x_3713_);
v___x_3718_ = v___x_3669_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v___x_3713_);
lean_ctor_set(v_reuseFailAlloc_3755_, 1, v___x_3716_);
v___x_3718_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3723_; 
v___x_3719_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0));
v___x_3720_ = l_Lean_JsonNumber_fromNat(v_numIndices_3622_);
v___x_3721_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 1, v___x_3721_);
lean_ctor_set(v___x_3659_, 0, v___x_3719_);
v___x_3723_ = v___x_3659_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v___x_3719_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
v___x_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
lean_ctor_set(v___x_3725_, 1, v_fst_3683_);
v___x_3726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2));
v___x_3727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3726_);
lean_ctor_set(v___x_3727_, 1, v_fst_3693_);
v___x_3728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__3));
v___x_3729_ = l_Lean_JsonNumber_fromNat(v_numNested_3625_);
v___x_3730_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3729_);
v___x_3731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3728_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__4));
v___x_3733_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3733_, 0, v_isRec_3626_);
v___x_3734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3732_);
lean_ctor_set(v___x_3734_, 1, v___x_3733_);
v___x_3735_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__5));
v___x_3736_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3736_, 0, v_isReflexive_3628_);
v___x_3737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3735_);
lean_ctor_set(v___x_3737_, 1, v___x_3736_);
v___x_3738_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_3739_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3739_, 0, v_isUnsafe_3627_);
v___x_3740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3738_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = lean_box(0);
v___x_3742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3737_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
v___x_3744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3734_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3731_);
lean_ctor_set(v___x_3745_, 1, v___x_3744_);
v___x_3746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3727_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3725_);
lean_ctor_set(v___x_3747_, 1, v___x_3746_);
v___x_3748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3723_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
v___x_3749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3718_);
lean_ctor_set(v___x_3749_, 1, v___x_3748_);
v___x_3750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3712_);
lean_ctor_set(v___x_3750_, 1, v___x_3749_);
v___x_3751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3706_);
lean_ctor_set(v___x_3751_, 1, v___x_3750_);
v___x_3752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3703_);
lean_ctor_set(v___x_3752_, 1, v___x_3751_);
v___x_3753_ = l_Lean_Json_mkObj(v___x_3752_);
lean_dec_ref_known(v___x_3752_, 2);
v_fst_3635_ = v___x_3753_;
v_snd_3636_ = v_snd_3694_;
goto v___jp_3634_;
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
lean_del_object(v___x_3686_);
lean_dec(v_fst_3683_);
lean_del_object(v___x_3681_);
lean_del_object(v___x_3676_);
lean_dec(v_fst_3673_);
lean_del_object(v___x_3669_);
lean_dec(v_fst_3666_);
lean_del_object(v___x_3664_);
lean_del_object(v___x_3659_);
lean_dec(v_fst_3656_);
lean_dec(v_numNested_3625_);
lean_dec(v_numIndices_3622_);
lean_dec(v_numParams_3621_);
v___y_3642_ = v___x_3688_;
goto v___jp_3641_;
}
}
}
}
else
{
lean_del_object(v___x_3676_);
lean_dec(v_fst_3673_);
lean_del_object(v___x_3669_);
lean_dec(v_fst_3666_);
lean_del_object(v___x_3664_);
lean_del_object(v___x_3659_);
lean_dec(v_fst_3656_);
lean_dec(v_numNested_3625_);
lean_dec(v_ctors_3624_);
lean_dec(v_numIndices_3622_);
lean_dec(v_numParams_3621_);
v___y_3642_ = v___x_3678_;
goto v___jp_3641_;
}
}
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
lean_del_object(v___x_3669_);
lean_dec(v_fst_3666_);
lean_del_object(v___x_3664_);
lean_del_object(v___x_3659_);
lean_dec(v_fst_3656_);
lean_dec_ref(v_bs_x27_3633_);
lean_dec(v_numNested_3625_);
lean_dec(v_ctors_3624_);
lean_dec(v_all_3623_);
lean_dec(v_numIndices_3622_);
lean_dec(v_numParams_3621_);
v_a_3767_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3671_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3671_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_3659_);
lean_dec(v_fst_3656_);
lean_dec_ref(v_type_3631_);
lean_dec(v_numNested_3625_);
lean_dec(v_ctors_3624_);
lean_dec(v_all_3623_);
lean_dec(v_numIndices_3622_);
lean_dec(v_numParams_3621_);
v___y_3642_ = v___x_3661_;
goto v___jp_3641_;
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
lean_dec_ref(v_bs_x27_3633_);
lean_dec_ref(v_type_3631_);
lean_dec(v_levelParams_3630_);
lean_dec(v_numNested_3625_);
lean_dec(v_ctors_3624_);
lean_dec(v_all_3623_);
lean_dec(v_numIndices_3622_);
lean_dec(v_numParams_3621_);
v_a_3778_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3654_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3654_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
v___jp_3634_:
{
size_t v___x_3637_; size_t v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = ((size_t)1ULL);
v___x_3638_ = lean_usize_add(v_i_3611_, v___x_3637_);
v___x_3639_ = lean_array_uset(v_bs_x27_3633_, v_i_3611_, v_fst_3635_);
v_i_3611_ = v___x_3638_;
v_bs_3612_ = v___x_3639_;
v___y_3614_ = v_snd_3636_;
goto _start;
}
v___jp_3641_:
{
if (lean_obj_tag(v___y_3642_) == 0)
{
lean_object* v_a_3643_; lean_object* v_fst_3644_; lean_object* v_snd_3645_; 
v_a_3643_ = lean_ctor_get(v___y_3642_, 0);
lean_inc(v_a_3643_);
lean_dec_ref_known(v___y_3642_, 1);
v_fst_3644_ = lean_ctor_get(v_a_3643_, 0);
lean_inc(v_fst_3644_);
v_snd_3645_ = lean_ctor_get(v_a_3643_, 1);
lean_inc(v_snd_3645_);
lean_dec(v_a_3643_);
v_fst_3635_ = v_fst_3644_;
v_snd_3636_ = v_snd_3645_;
goto v___jp_3634_;
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_dec_ref(v_bs_x27_3633_);
v_a_3646_ = lean_ctor_get(v___y_3642_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___y_3642_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___y_3642_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___y_3642_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t v_sz_3789_, size_t v_i_3790_, lean_object* v_bs_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
uint8_t v___x_3795_; 
v___x_3795_ = lean_usize_dec_lt(v_i_3790_, v_sz_3789_);
if (v___x_3795_ == 0)
{
lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3796_, 0, v_bs_3791_);
lean_ctor_set(v___x_3796_, 1, v___y_3793_);
v___x_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
return v___x_3797_;
}
else
{
lean_object* v_v_3798_; lean_object* v_toConstantVal_3799_; lean_object* v_induct_3800_; lean_object* v_cidx_3801_; lean_object* v_numParams_3802_; lean_object* v_numFields_3803_; uint8_t v_isUnsafe_3804_; lean_object* v_name_3805_; lean_object* v_levelParams_3806_; lean_object* v_type_3807_; lean_object* v___x_3808_; lean_object* v_bs_x27_3809_; lean_object* v_fst_3811_; lean_object* v_snd_3812_; lean_object* v___x_3817_; 
v_v_3798_ = lean_array_uget_borrowed(v_bs_3791_, v_i_3790_);
v_toConstantVal_3799_ = lean_ctor_get(v_v_3798_, 0);
v_induct_3800_ = lean_ctor_get(v_v_3798_, 1);
lean_inc(v_induct_3800_);
v_cidx_3801_ = lean_ctor_get(v_v_3798_, 2);
lean_inc(v_cidx_3801_);
v_numParams_3802_ = lean_ctor_get(v_v_3798_, 3);
lean_inc(v_numParams_3802_);
v_numFields_3803_ = lean_ctor_get(v_v_3798_, 4);
lean_inc(v_numFields_3803_);
v_isUnsafe_3804_ = lean_ctor_get_uint8(v_v_3798_, sizeof(void*)*5);
v_name_3805_ = lean_ctor_get(v_toConstantVal_3799_, 0);
lean_inc(v_name_3805_);
v_levelParams_3806_ = lean_ctor_get(v_toConstantVal_3799_, 1);
lean_inc(v_levelParams_3806_);
v_type_3807_ = lean_ctor_get(v_toConstantVal_3799_, 2);
lean_inc_ref(v_type_3807_);
v___x_3808_ = lean_unsigned_to_nat(0u);
v_bs_x27_3809_ = lean_array_uset(v_bs_3791_, v_i_3790_, v___x_3808_);
v___x_3817_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3805_, v___y_3792_, v___y_3793_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; lean_object* v_fst_3819_; lean_object* v_snd_3820_; lean_object* v___x_3822_; uint8_t v_isShared_3823_; uint8_t v_isSharedCheck_3922_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v___x_3817_, 1);
v_fst_3819_ = lean_ctor_get(v_a_3818_, 0);
v_snd_3820_ = lean_ctor_get(v_a_3818_, 1);
v_isSharedCheck_3922_ = !lean_is_exclusive(v_a_3818_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3822_ = v_a_3818_;
v_isShared_3823_ = v_isSharedCheck_3922_;
goto v_resetjp_3821_;
}
else
{
lean_inc(v_snd_3820_);
lean_inc(v_fst_3819_);
lean_dec(v_a_3818_);
v___x_3822_ = lean_box(0);
v_isShared_3823_ = v_isSharedCheck_3922_;
goto v_resetjp_3821_;
}
v_resetjp_3821_:
{
lean_object* v___x_3824_; 
v___x_3824_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3806_, v___y_3792_, v_snd_3820_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v_fst_3826_; lean_object* v_snd_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3910_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v_fst_3826_ = lean_ctor_get(v_a_3825_, 0);
v_snd_3827_ = lean_ctor_get(v_a_3825_, 1);
v_isSharedCheck_3910_ = !lean_is_exclusive(v_a_3825_);
if (v_isSharedCheck_3910_ == 0)
{
v___x_3829_ = v_a_3825_;
v_isShared_3830_ = v_isSharedCheck_3910_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_snd_3827_);
lean_inc(v_fst_3826_);
lean_dec(v_a_3825_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3910_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3831_; 
v___x_3831_ = l_LeanExport_dumpExpr(v_type_3807_, v___y_3792_, v_snd_3827_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v_fst_3833_; lean_object* v_snd_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3901_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc(v_a_3832_);
lean_dec_ref_known(v___x_3831_, 1);
v_fst_3833_ = lean_ctor_get(v_a_3832_, 0);
v_snd_3834_ = lean_ctor_get(v_a_3832_, 1);
v_isSharedCheck_3901_ = !lean_is_exclusive(v_a_3832_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3836_ = v_a_3832_;
v_isShared_3837_ = v_isSharedCheck_3901_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_snd_3834_);
lean_inc(v_fst_3833_);
lean_dec(v_a_3832_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3901_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3838_; 
v___x_3838_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_induct_3800_, v___y_3792_, v_snd_3834_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; lean_object* v_fst_3840_; lean_object* v_snd_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3892_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
lean_inc(v_a_3839_);
lean_dec_ref_known(v___x_3838_, 1);
v_fst_3840_ = lean_ctor_get(v_a_3839_, 0);
v_snd_3841_ = lean_ctor_get(v_a_3839_, 1);
v_isSharedCheck_3892_ = !lean_is_exclusive(v_a_3839_);
if (v_isSharedCheck_3892_ == 0)
{
v___x_3843_ = v_a_3839_;
v_isShared_3844_ = v_isSharedCheck_3892_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_snd_3841_);
lean_inc(v_fst_3840_);
lean_dec(v_a_3839_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3892_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3849_; 
v___x_3845_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3846_ = l_Lean_JsonNumber_fromNat(v_fst_3819_);
v___x_3847_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3846_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 1, v___x_3847_);
lean_ctor_set(v___x_3843_, 0, v___x_3845_);
v___x_3849_ = v___x_3843_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v___x_3845_);
lean_ctor_set(v_reuseFailAlloc_3891_, 1, v___x_3847_);
v___x_3849_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
lean_object* v___x_3850_; lean_object* v___x_3852_; 
v___x_3850_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 1, v_fst_3826_);
lean_ctor_set(v___x_3836_, 0, v___x_3850_);
v___x_3852_ = v___x_3836_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3850_);
lean_ctor_set(v_reuseFailAlloc_3890_, 1, v_fst_3826_);
v___x_3852_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3857_; 
v___x_3853_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3854_ = l_Lean_JsonNumber_fromNat(v_fst_3833_);
v___x_3855_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3854_);
if (v_isShared_3830_ == 0)
{
lean_ctor_set(v___x_3829_, 1, v___x_3855_);
lean_ctor_set(v___x_3829_, 0, v___x_3853_);
v___x_3857_ = v___x_3829_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v___x_3853_);
lean_ctor_set(v_reuseFailAlloc_3889_, 1, v___x_3855_);
v___x_3857_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3862_; 
v___x_3858_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_3859_ = l_Lean_JsonNumber_fromNat(v_fst_3840_);
v___x_3860_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
if (v_isShared_3823_ == 0)
{
lean_ctor_set(v___x_3822_, 1, v___x_3860_);
lean_ctor_set(v___x_3822_, 0, v___x_3858_);
v___x_3862_ = v___x_3822_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v___x_3858_);
lean_ctor_set(v_reuseFailAlloc_3888_, 1, v___x_3860_);
v___x_3862_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3863_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3));
v___x_3864_ = l_Lean_JsonNumber_fromNat(v_cidx_3801_);
v___x_3865_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3864_);
v___x_3866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3863_);
lean_ctor_set(v___x_3866_, 1, v___x_3865_);
v___x_3867_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3868_ = l_Lean_JsonNumber_fromNat(v_numParams_3802_);
v___x_3869_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3869_, 0, v___x_3868_);
v___x_3870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3867_);
lean_ctor_set(v___x_3870_, 1, v___x_3869_);
v___x_3871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5));
v___x_3872_ = l_Lean_JsonNumber_fromNat(v_numFields_3803_);
v___x_3873_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
v___x_3874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3871_);
lean_ctor_set(v___x_3874_, 1, v___x_3873_);
v___x_3875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_3876_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3876_, 0, v_isUnsafe_3804_);
v___x_3877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3875_);
lean_ctor_set(v___x_3877_, 1, v___x_3876_);
v___x_3878_ = lean_box(0);
v___x_3879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3877_);
lean_ctor_set(v___x_3879_, 1, v___x_3878_);
v___x_3880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3874_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
v___x_3881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3870_);
lean_ctor_set(v___x_3881_, 1, v___x_3880_);
v___x_3882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3866_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3862_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
v___x_3884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3857_);
lean_ctor_set(v___x_3884_, 1, v___x_3883_);
v___x_3885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3852_);
lean_ctor_set(v___x_3885_, 1, v___x_3884_);
v___x_3886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3849_);
lean_ctor_set(v___x_3886_, 1, v___x_3885_);
v___x_3887_ = l_Lean_Json_mkObj(v___x_3886_);
lean_dec_ref_known(v___x_3886_, 2);
v_fst_3811_ = v___x_3887_;
v_snd_3812_ = v_snd_3841_;
goto v___jp_3810_;
}
}
}
}
}
}
else
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3900_; 
lean_del_object(v___x_3836_);
lean_dec(v_fst_3833_);
lean_del_object(v___x_3829_);
lean_dec(v_fst_3826_);
lean_del_object(v___x_3822_);
lean_dec(v_fst_3819_);
lean_dec_ref(v_bs_x27_3809_);
lean_dec(v_numFields_3803_);
lean_dec(v_numParams_3802_);
lean_dec(v_cidx_3801_);
v_a_3893_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3895_ = v___x_3838_;
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3838_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
lean_del_object(v___x_3829_);
lean_dec(v_fst_3826_);
lean_del_object(v___x_3822_);
lean_dec(v_fst_3819_);
lean_dec_ref(v_bs_x27_3809_);
lean_dec(v_numFields_3803_);
lean_dec(v_numParams_3802_);
lean_dec(v_cidx_3801_);
lean_dec(v_induct_3800_);
v_a_3902_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3831_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3831_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3902_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
}
}
}
}
}
else
{
lean_del_object(v___x_3822_);
lean_dec(v_fst_3819_);
lean_dec_ref(v_type_3807_);
lean_dec(v_numFields_3803_);
lean_dec(v_numParams_3802_);
lean_dec(v_cidx_3801_);
lean_dec(v_induct_3800_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3911_; lean_object* v_fst_3912_; lean_object* v_snd_3913_; 
v_a_3911_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3911_);
lean_dec_ref_known(v___x_3824_, 1);
v_fst_3912_ = lean_ctor_get(v_a_3911_, 0);
lean_inc(v_fst_3912_);
v_snd_3913_ = lean_ctor_get(v_a_3911_, 1);
lean_inc(v_snd_3913_);
lean_dec(v_a_3911_);
v_fst_3811_ = v_fst_3912_;
v_snd_3812_ = v_snd_3913_;
goto v___jp_3810_;
}
else
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3921_; 
lean_dec_ref(v_bs_x27_3809_);
v_a_3914_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3916_ = v___x_3824_;
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3824_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3919_; 
if (v_isShared_3917_ == 0)
{
v___x_3919_ = v___x_3916_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3914_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
}
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
lean_dec_ref(v_bs_x27_3809_);
lean_dec_ref(v_type_3807_);
lean_dec(v_levelParams_3806_);
lean_dec(v_numFields_3803_);
lean_dec(v_numParams_3802_);
lean_dec(v_cidx_3801_);
lean_dec(v_induct_3800_);
v_a_3923_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3817_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3817_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
v___jp_3810_:
{
size_t v___x_3813_; size_t v___x_3814_; lean_object* v___x_3815_; 
v___x_3813_ = ((size_t)1ULL);
v___x_3814_ = lean_usize_add(v_i_3790_, v___x_3813_);
v___x_3815_ = lean_array_uset(v_bs_x27_3809_, v_i_3790_, v_fst_3811_);
v_i_3790_ = v___x_3814_;
v_bs_3791_ = v___x_3815_;
v___y_3793_ = v_snd_3812_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object* v_rule_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v_ctor_3937_; lean_object* v_nfields_3938_; lean_object* v_rhs_3939_; lean_object* v___x_3940_; 
v_ctor_3937_ = lean_ctor_get(v_rule_3933_, 0);
lean_inc(v_ctor_3937_);
v_nfields_3938_ = lean_ctor_get(v_rule_3933_, 1);
lean_inc(v_nfields_3938_);
v_rhs_3939_ = lean_ctor_get(v_rule_3933_, 2);
lean_inc_ref(v_rhs_3939_);
lean_dec_ref(v_rule_3933_);
v___x_3940_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_ctor_3937_, v___y_3934_, v___y_3935_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v_fst_3942_; lean_object* v_snd_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3992_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v___x_3940_, 1);
v_fst_3942_ = lean_ctor_get(v_a_3941_, 0);
v_snd_3943_ = lean_ctor_get(v_a_3941_, 1);
v_isSharedCheck_3992_ = !lean_is_exclusive(v_a_3941_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3945_ = v_a_3941_;
v_isShared_3946_ = v_isSharedCheck_3992_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_snd_3943_);
lean_inc(v_fst_3942_);
lean_dec(v_a_3941_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3992_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3947_; 
v___x_3947_ = l_LeanExport_dumpExpr(v_rhs_3939_, v___y_3934_, v_snd_3943_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3983_; 
v_a_3948_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3983_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3950_ = v___x_3947_;
v_isShared_3951_ = v_isSharedCheck_3983_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3947_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3983_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v_fst_3952_; lean_object* v_snd_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3982_; 
v_fst_3952_ = lean_ctor_get(v_a_3948_, 0);
v_snd_3953_ = lean_ctor_get(v_a_3948_, 1);
v_isSharedCheck_3982_ = !lean_is_exclusive(v_a_3948_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3955_ = v_a_3948_;
v_isShared_3956_ = v_isSharedCheck_3982_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_snd_3953_);
lean_inc(v_fst_3952_);
lean_dec(v_a_3948_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3982_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3961_; 
v___x_3957_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2));
v___x_3958_ = l_Lean_JsonNumber_fromNat(v_fst_3942_);
v___x_3959_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 1, v___x_3959_);
lean_ctor_set(v___x_3955_, 0, v___x_3957_);
v___x_3961_ = v___x_3955_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v___x_3957_);
lean_ctor_set(v_reuseFailAlloc_3981_, 1, v___x_3959_);
v___x_3961_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
v___x_3962_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0));
v___x_3963_ = l_Lean_JsonNumber_fromNat(v_nfields_3938_);
v___x_3964_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
if (v_isShared_3946_ == 0)
{
lean_ctor_set(v___x_3945_, 1, v___x_3964_);
lean_ctor_set(v___x_3945_, 0, v___x_3962_);
v___x_3966_ = v___x_3945_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3962_);
lean_ctor_set(v_reuseFailAlloc_3980_, 1, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3978_; 
v___x_3967_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1));
v___x_3968_ = l_Lean_JsonNumber_fromNat(v_fst_3952_);
v___x_3969_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
v___x_3970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3967_);
lean_ctor_set(v___x_3970_, 1, v___x_3969_);
v___x_3971_ = lean_box(0);
v___x_3972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3970_);
lean_ctor_set(v___x_3972_, 1, v___x_3971_);
v___x_3973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3966_);
lean_ctor_set(v___x_3973_, 1, v___x_3972_);
v___x_3974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3961_);
lean_ctor_set(v___x_3974_, 1, v___x_3973_);
v___x_3975_ = l_Lean_Json_mkObj(v___x_3974_);
lean_dec_ref_known(v___x_3974_, 2);
v___x_3976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
lean_ctor_set(v___x_3976_, 1, v_snd_3953_);
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 0, v___x_3976_);
v___x_3978_ = v___x_3950_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v___x_3976_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
}
else
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3991_; 
lean_del_object(v___x_3945_);
lean_dec(v_fst_3942_);
lean_dec(v_nfields_3938_);
v_a_3984_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3986_ = v___x_3947_;
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v___x_3947_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
return v___x_3989_;
}
}
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4000_; 
lean_dec_ref(v_rhs_3939_);
lean_dec(v_nfields_3938_);
v_a_3993_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3995_ = v___x_3940_;
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3940_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3998_; 
if (v_isShared_3996_ == 0)
{
v___x_3998_ = v___x_3995_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3993_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object* v_x_4001_, lean_object* v_x_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_){
_start:
{
if (lean_obj_tag(v_x_4001_) == 0)
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4006_ = l_List_reverse___redArg(v_x_4002_);
v___x_4007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4006_);
lean_ctor_set(v___x_4007_, 1, v___y_4004_);
v___x_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4008_, 0, v___x_4007_);
return v___x_4008_;
}
else
{
lean_object* v_head_4009_; lean_object* v_tail_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4030_; 
v_head_4009_ = lean_ctor_get(v_x_4001_, 0);
v_tail_4010_ = lean_ctor_get(v_x_4001_, 1);
v_isSharedCheck_4030_ = !lean_is_exclusive(v_x_4001_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4012_ = v_x_4001_;
v_isShared_4013_ = v_isSharedCheck_4030_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_tail_4010_);
lean_inc(v_head_4009_);
lean_dec(v_x_4001_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4030_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4014_; 
v___x_4014_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_head_4009_, v___y_4003_, v___y_4004_);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_object* v_a_4015_; lean_object* v_fst_4016_; lean_object* v_snd_4017_; lean_object* v___x_4019_; 
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
lean_inc(v_a_4015_);
lean_dec_ref_known(v___x_4014_, 1);
v_fst_4016_ = lean_ctor_get(v_a_4015_, 0);
lean_inc(v_fst_4016_);
v_snd_4017_ = lean_ctor_get(v_a_4015_, 1);
lean_inc(v_snd_4017_);
lean_dec(v_a_4015_);
if (v_isShared_4013_ == 0)
{
lean_ctor_set(v___x_4012_, 1, v_x_4002_);
lean_ctor_set(v___x_4012_, 0, v_fst_4016_);
v___x_4019_ = v___x_4012_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_fst_4016_);
lean_ctor_set(v_reuseFailAlloc_4021_, 1, v_x_4002_);
v___x_4019_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
v_x_4001_ = v_tail_4010_;
v_x_4002_ = v___x_4019_;
v___y_4004_ = v_snd_4017_;
goto _start;
}
}
else
{
lean_object* v_a_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4029_; 
lean_del_object(v___x_4012_);
lean_dec(v_tail_4010_);
lean_dec(v_x_4002_);
v_a_4022_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4029_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4029_ == 0)
{
v___x_4024_ = v___x_4014_;
v_isShared_4025_ = v_isSharedCheck_4029_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_a_4022_);
lean_dec(v___x_4014_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4029_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4027_; 
if (v_isShared_4025_ == 0)
{
v___x_4027_ = v___x_4024_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v_a_4022_);
v___x_4027_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
return v___x_4027_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t v_sz_4035_, size_t v_i_4036_, lean_object* v_bs_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_){
_start:
{
uint8_t v___x_4041_; 
v___x_4041_ = lean_usize_dec_lt(v_i_4036_, v_sz_4035_);
if (v___x_4041_ == 0)
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4042_, 0, v_bs_4037_);
lean_ctor_set(v___x_4042_, 1, v___y_4039_);
v___x_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
return v___x_4043_;
}
else
{
lean_object* v_v_4044_; lean_object* v_toConstantVal_4045_; lean_object* v_all_4046_; lean_object* v_numParams_4047_; lean_object* v_numIndices_4048_; lean_object* v_numMotives_4049_; lean_object* v_numMinors_4050_; lean_object* v_rules_4051_; uint8_t v_k_4052_; uint8_t v_isUnsafe_4053_; lean_object* v_name_4054_; lean_object* v_levelParams_4055_; lean_object* v_type_4056_; lean_object* v___x_4057_; lean_object* v_bs_x27_4058_; lean_object* v_fst_4060_; lean_object* v_snd_4061_; lean_object* v___y_4067_; lean_object* v___x_4079_; 
v_v_4044_ = lean_array_uget_borrowed(v_bs_4037_, v_i_4036_);
v_toConstantVal_4045_ = lean_ctor_get(v_v_4044_, 0);
v_all_4046_ = lean_ctor_get(v_v_4044_, 1);
lean_inc(v_all_4046_);
v_numParams_4047_ = lean_ctor_get(v_v_4044_, 2);
lean_inc(v_numParams_4047_);
v_numIndices_4048_ = lean_ctor_get(v_v_4044_, 3);
lean_inc(v_numIndices_4048_);
v_numMotives_4049_ = lean_ctor_get(v_v_4044_, 4);
lean_inc(v_numMotives_4049_);
v_numMinors_4050_ = lean_ctor_get(v_v_4044_, 5);
lean_inc(v_numMinors_4050_);
v_rules_4051_ = lean_ctor_get(v_v_4044_, 6);
lean_inc(v_rules_4051_);
v_k_4052_ = lean_ctor_get_uint8(v_v_4044_, sizeof(void*)*7);
v_isUnsafe_4053_ = lean_ctor_get_uint8(v_v_4044_, sizeof(void*)*7 + 1);
v_name_4054_ = lean_ctor_get(v_toConstantVal_4045_, 0);
lean_inc(v_name_4054_);
v_levelParams_4055_ = lean_ctor_get(v_toConstantVal_4045_, 1);
lean_inc(v_levelParams_4055_);
v_type_4056_ = lean_ctor_get(v_toConstantVal_4045_, 2);
lean_inc_ref(v_type_4056_);
v___x_4057_ = lean_unsigned_to_nat(0u);
v_bs_x27_4058_ = lean_array_uset(v_bs_4037_, v_i_4036_, v___x_4057_);
v___x_4079_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4054_, v___y_4038_, v___y_4039_);
if (lean_obj_tag(v___x_4079_) == 0)
{
lean_object* v_a_4080_; lean_object* v_fst_4081_; lean_object* v_snd_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4206_; 
v_a_4080_ = lean_ctor_get(v___x_4079_, 0);
lean_inc(v_a_4080_);
lean_dec_ref_known(v___x_4079_, 1);
v_fst_4081_ = lean_ctor_get(v_a_4080_, 0);
v_snd_4082_ = lean_ctor_get(v_a_4080_, 1);
v_isSharedCheck_4206_ = !lean_is_exclusive(v_a_4080_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4084_ = v_a_4080_;
v_isShared_4085_ = v_isSharedCheck_4206_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_snd_4082_);
lean_inc(v_fst_4081_);
lean_dec(v_a_4080_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4206_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4086_; 
v___x_4086_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4055_, v___y_4038_, v_snd_4082_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4205_; 
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4089_ = v___x_4086_;
v_isShared_4090_ = v_isSharedCheck_4205_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4086_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4205_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v_fst_4091_; lean_object* v_snd_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4204_; 
v_fst_4091_ = lean_ctor_get(v_a_4087_, 0);
v_snd_4092_ = lean_ctor_get(v_a_4087_, 1);
v_isSharedCheck_4204_ = !lean_is_exclusive(v_a_4087_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4094_ = v_a_4087_;
v_isShared_4095_ = v_isSharedCheck_4204_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_snd_4092_);
lean_inc(v_fst_4091_);
lean_dec(v_a_4087_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4204_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4096_; 
v___x_4096_ = l_LeanExport_dumpExpr(v_type_4056_, v___y_4038_, v_snd_4092_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_object* v_a_4097_; lean_object* v_fst_4098_; lean_object* v_snd_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4195_; 
v_a_4097_ = lean_ctor_get(v___x_4096_, 0);
lean_inc(v_a_4097_);
lean_dec_ref_known(v___x_4096_, 1);
v_fst_4098_ = lean_ctor_get(v_a_4097_, 0);
v_snd_4099_ = lean_ctor_get(v_a_4097_, 1);
v_isSharedCheck_4195_ = !lean_is_exclusive(v_a_4097_);
if (v_isSharedCheck_4195_ == 0)
{
v___x_4101_ = v_a_4097_;
v_isShared_4102_ = v_isSharedCheck_4195_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_snd_4099_);
lean_inc(v_fst_4098_);
lean_dec(v_a_4097_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4195_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v___x_4103_; 
v___x_4103_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4046_, v___y_4038_, v_snd_4099_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4194_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4106_ = v___x_4103_;
v_isShared_4107_ = v_isSharedCheck_4194_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v___x_4103_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4194_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v_fst_4108_; lean_object* v_snd_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4193_; 
v_fst_4108_ = lean_ctor_get(v_a_4104_, 0);
v_snd_4109_ = lean_ctor_get(v_a_4104_, 1);
v_isSharedCheck_4193_ = !lean_is_exclusive(v_a_4104_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4111_ = v_a_4104_;
v_isShared_4112_ = v_isSharedCheck_4193_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_snd_4109_);
lean_inc(v_fst_4108_);
lean_dec(v_a_4104_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4193_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4113_ = lean_box(0);
v___x_4114_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_rules_4051_, v___x_4113_, v___y_4038_, v_snd_4109_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_a_4115_; lean_object* v_fst_4116_; lean_object* v_snd_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4184_; 
v_a_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4115_);
lean_dec_ref_known(v___x_4114_, 1);
v_fst_4116_ = lean_ctor_get(v_a_4115_, 0);
v_snd_4117_ = lean_ctor_get(v_a_4115_, 1);
v_isSharedCheck_4184_ = !lean_is_exclusive(v_a_4115_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4119_ = v_a_4115_;
v_isShared_4120_ = v_isSharedCheck_4184_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_snd_4117_);
lean_inc(v_fst_4116_);
lean_dec(v_a_4115_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4184_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4124_; 
v___x_4121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4122_ = l_Lean_JsonNumber_fromNat(v_fst_4081_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set_tag(v___x_4106_, 2);
lean_ctor_set(v___x_4106_, 0, v___x_4122_);
v___x_4124_ = v___x_4106_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4122_);
v___x_4124_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
lean_object* v___x_4126_; 
if (v_isShared_4120_ == 0)
{
lean_ctor_set(v___x_4119_, 1, v___x_4124_);
lean_ctor_set(v___x_4119_, 0, v___x_4121_);
v___x_4126_ = v___x_4119_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v___x_4121_);
lean_ctor_set(v_reuseFailAlloc_4182_, 1, v___x_4124_);
v___x_4126_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
lean_object* v___x_4127_; lean_object* v___x_4129_; 
v___x_4127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4112_ == 0)
{
lean_ctor_set(v___x_4111_, 1, v_fst_4091_);
lean_ctor_set(v___x_4111_, 0, v___x_4127_);
v___x_4129_ = v___x_4111_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v___x_4127_);
lean_ctor_set(v_reuseFailAlloc_4181_, 1, v_fst_4091_);
v___x_4129_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4133_; 
v___x_4130_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4131_ = l_Lean_JsonNumber_fromNat(v_fst_4098_);
if (v_isShared_4090_ == 0)
{
lean_ctor_set_tag(v___x_4089_, 2);
lean_ctor_set(v___x_4089_, 0, v___x_4131_);
v___x_4133_ = v___x_4089_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4131_);
v___x_4133_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
lean_object* v___x_4135_; 
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 1, v___x_4133_);
lean_ctor_set(v___x_4101_, 0, v___x_4130_);
v___x_4135_ = v___x_4101_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v___x_4130_);
lean_ctor_set(v_reuseFailAlloc_4179_, 1, v___x_4133_);
v___x_4135_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
lean_object* v___x_4136_; lean_object* v___x_4138_; 
v___x_4136_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 1, v_fst_4108_);
lean_ctor_set(v___x_4094_, 0, v___x_4136_);
v___x_4138_ = v___x_4094_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v___x_4136_);
lean_ctor_set(v_reuseFailAlloc_4178_, 1, v_fst_4108_);
v___x_4138_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4143_; 
v___x_4139_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_4140_ = l_Lean_JsonNumber_fromNat(v_numParams_4047_);
v___x_4141_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4141_, 0, v___x_4140_);
if (v_isShared_4085_ == 0)
{
lean_ctor_set(v___x_4084_, 1, v___x_4141_);
lean_ctor_set(v___x_4084_, 0, v___x_4139_);
v___x_4143_ = v___x_4084_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4139_);
lean_ctor_set(v_reuseFailAlloc_4177_, 1, v___x_4141_);
v___x_4143_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4144_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__0));
v___x_4145_ = l_Lean_JsonNumber_fromNat(v_numIndices_4048_);
v___x_4146_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4145_);
v___x_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4144_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
v___x_4148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4149_ = l_Lean_JsonNumber_fromNat(v_numMotives_4049_);
v___x_4150_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4149_);
v___x_4151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4148_);
lean_ctor_set(v___x_4151_, 1, v___x_4150_);
v___x_4152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
v___x_4153_ = l_Lean_JsonNumber_fromNat(v_numMinors_4050_);
v___x_4154_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
v___x_4155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4152_);
lean_ctor_set(v___x_4155_, 1, v___x_4154_);
v___x_4156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2));
v___x_4157_ = l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(v_fst_4116_);
v___x_4158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4156_);
lean_ctor_set(v___x_4158_, 1, v___x_4157_);
v___x_4159_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3));
v___x_4160_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4160_, 0, v_k_4052_);
v___x_4161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4159_);
lean_ctor_set(v___x_4161_, 1, v___x_4160_);
v___x_4162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_4163_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4163_, 0, v_isUnsafe_4053_);
v___x_4164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4162_);
lean_ctor_set(v___x_4164_, 1, v___x_4163_);
v___x_4165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4164_);
lean_ctor_set(v___x_4165_, 1, v___x_4113_);
v___x_4166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4161_);
lean_ctor_set(v___x_4166_, 1, v___x_4165_);
v___x_4167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4158_);
lean_ctor_set(v___x_4167_, 1, v___x_4166_);
v___x_4168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4155_);
lean_ctor_set(v___x_4168_, 1, v___x_4167_);
v___x_4169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4151_);
lean_ctor_set(v___x_4169_, 1, v___x_4168_);
v___x_4170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4147_);
lean_ctor_set(v___x_4170_, 1, v___x_4169_);
v___x_4171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4143_);
lean_ctor_set(v___x_4171_, 1, v___x_4170_);
v___x_4172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4138_);
lean_ctor_set(v___x_4172_, 1, v___x_4171_);
v___x_4173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4135_);
lean_ctor_set(v___x_4173_, 1, v___x_4172_);
v___x_4174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4129_);
lean_ctor_set(v___x_4174_, 1, v___x_4173_);
v___x_4175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4175_, 0, v___x_4126_);
lean_ctor_set(v___x_4175_, 1, v___x_4174_);
v___x_4176_ = l_Lean_Json_mkObj(v___x_4175_);
lean_dec_ref_known(v___x_4175_, 2);
v_fst_4060_ = v___x_4176_;
v_snd_4061_ = v_snd_4117_;
goto v___jp_4059_;
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
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_del_object(v___x_4111_);
lean_dec(v_fst_4108_);
lean_del_object(v___x_4106_);
lean_del_object(v___x_4101_);
lean_dec(v_fst_4098_);
lean_del_object(v___x_4094_);
lean_dec(v_fst_4091_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4084_);
lean_dec(v_fst_4081_);
lean_dec_ref(v_bs_x27_4058_);
lean_dec(v_numMinors_4050_);
lean_dec(v_numMotives_4049_);
lean_dec(v_numIndices_4048_);
lean_dec(v_numParams_4047_);
v_a_4185_ = lean_ctor_get(v___x_4114_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4114_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4114_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4114_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4101_);
lean_dec(v_fst_4098_);
lean_del_object(v___x_4094_);
lean_dec(v_fst_4091_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4084_);
lean_dec(v_fst_4081_);
lean_dec(v_rules_4051_);
lean_dec(v_numMinors_4050_);
lean_dec(v_numMotives_4049_);
lean_dec(v_numIndices_4048_);
lean_dec(v_numParams_4047_);
v___y_4067_ = v___x_4103_;
goto v___jp_4066_;
}
}
}
else
{
lean_object* v_a_4196_; lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4203_; 
lean_del_object(v___x_4094_);
lean_dec(v_fst_4091_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4084_);
lean_dec(v_fst_4081_);
lean_dec_ref(v_bs_x27_4058_);
lean_dec(v_rules_4051_);
lean_dec(v_numMinors_4050_);
lean_dec(v_numMotives_4049_);
lean_dec(v_numIndices_4048_);
lean_dec(v_numParams_4047_);
lean_dec(v_all_4046_);
v_a_4196_ = lean_ctor_get(v___x_4096_, 0);
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4096_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4198_ = v___x_4096_;
v_isShared_4199_ = v_isSharedCheck_4203_;
goto v_resetjp_4197_;
}
else
{
lean_inc(v_a_4196_);
lean_dec(v___x_4096_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4203_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v___x_4201_; 
if (v_isShared_4199_ == 0)
{
v___x_4201_ = v___x_4198_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_a_4196_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4084_);
lean_dec(v_fst_4081_);
lean_dec_ref(v_type_4056_);
lean_dec(v_rules_4051_);
lean_dec(v_numMinors_4050_);
lean_dec(v_numMotives_4049_);
lean_dec(v_numIndices_4048_);
lean_dec(v_numParams_4047_);
lean_dec(v_all_4046_);
v___y_4067_ = v___x_4086_;
goto v___jp_4066_;
}
}
}
else
{
lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4214_; 
lean_dec_ref(v_bs_x27_4058_);
lean_dec_ref(v_type_4056_);
lean_dec(v_levelParams_4055_);
lean_dec(v_rules_4051_);
lean_dec(v_numMinors_4050_);
lean_dec(v_numMotives_4049_);
lean_dec(v_numIndices_4048_);
lean_dec(v_numParams_4047_);
lean_dec(v_all_4046_);
v_a_4207_ = lean_ctor_get(v___x_4079_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4079_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4209_ = v___x_4079_;
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_dec(v___x_4079_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4212_; 
if (v_isShared_4210_ == 0)
{
v___x_4212_ = v___x_4209_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4207_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
v___jp_4059_:
{
size_t v___x_4062_; size_t v___x_4063_; lean_object* v___x_4064_; 
v___x_4062_ = ((size_t)1ULL);
v___x_4063_ = lean_usize_add(v_i_4036_, v___x_4062_);
v___x_4064_ = lean_array_uset(v_bs_x27_4058_, v_i_4036_, v_fst_4060_);
v_i_4036_ = v___x_4063_;
v_bs_4037_ = v___x_4064_;
v___y_4039_ = v_snd_4061_;
goto _start;
}
v___jp_4066_:
{
if (lean_obj_tag(v___y_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v_fst_4069_; lean_object* v_snd_4070_; 
v_a_4068_ = lean_ctor_get(v___y_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___y_4067_, 1);
v_fst_4069_ = lean_ctor_get(v_a_4068_, 0);
lean_inc(v_fst_4069_);
v_snd_4070_ = lean_ctor_get(v_a_4068_, 1);
lean_inc(v_snd_4070_);
lean_dec(v_a_4068_);
v_fst_4060_ = v_fst_4069_;
v_snd_4061_ = v_snd_4070_;
goto v___jp_4059_;
}
else
{
lean_object* v_a_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4078_; 
lean_dec_ref(v_bs_x27_4058_);
v_a_4071_ = lean_ctor_get(v___y_4067_, 0);
v_isSharedCheck_4078_ = !lean_is_exclusive(v___y_4067_);
if (v_isSharedCheck_4078_ == 0)
{
v___x_4073_ = v___y_4067_;
v_isShared_4074_ = v_isSharedCheck_4078_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_a_4071_);
lean_dec(v___y_4067_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4078_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v___x_4076_; 
if (v_isShared_4074_ == 0)
{
v___x_4076_ = v___x_4073_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_a_4071_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t v___x_4263_, lean_object* v_as_x27_4264_, lean_object* v_b_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_){
_start:
{
if (lean_obj_tag(v_as_x27_4264_) == 0)
{
lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4269_, 0, v_b_4265_);
lean_ctor_set(v___x_4269_, 1, v___y_4267_);
v___x_4270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4269_);
return v___x_4270_;
}
else
{
lean_object* v_head_4271_; lean_object* v_tail_4272_; lean_object* v___x_4273_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___x_4304_; 
lean_dec_ref(v_b_4265_);
v_head_4271_ = lean_ctor_get(v_as_x27_4264_, 0);
v_tail_4272_ = lean_ctor_get(v_as_x27_4264_, 1);
v___x_4273_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
lean_inc(v_head_4271_);
lean_inc_ref(v___y_4266_);
v___x_4304_ = l_Lean_Environment_find_x3f(v___y_4266_, v_head_4271_, v___x_4263_);
if (lean_obj_tag(v___x_4304_) == 1)
{
lean_object* v_val_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4428_; 
v_val_4305_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4428_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4428_ == 0)
{
v___x_4307_ = v___x_4304_;
v_isShared_4308_ = v_isSharedCheck_4428_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_val_4305_);
lean_dec(v___x_4304_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4428_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
if (lean_obj_tag(v_val_4305_) == 4)
{
lean_object* v_val_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4427_; 
v_val_4309_ = lean_ctor_get(v_val_4305_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v_val_4305_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4311_ = v_val_4305_;
v_isShared_4312_ = v_isSharedCheck_4427_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_val_4309_);
lean_dec(v_val_4305_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4427_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v_toConstantVal_4313_; lean_object* v_visitedNames_4314_; lean_object* v_visitedLevels_4315_; lean_object* v_visitedExprs_4316_; lean_object* v_visitedConstants_4317_; lean_object* v_noMDataExprs_4318_; uint8_t v_exportMData_4319_; uint8_t v_exportUnsafe_4320_; uint8_t v_ignoreMissing_4321_; lean_object* v_recursorMap_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4426_; 
v_toConstantVal_4313_ = lean_ctor_get(v_val_4309_, 0);
lean_inc_ref(v_toConstantVal_4313_);
v_visitedNames_4314_ = lean_ctor_get(v___y_4267_, 0);
v_visitedLevels_4315_ = lean_ctor_get(v___y_4267_, 1);
v_visitedExprs_4316_ = lean_ctor_get(v___y_4267_, 2);
v_visitedConstants_4317_ = lean_ctor_get(v___y_4267_, 3);
v_noMDataExprs_4318_ = lean_ctor_get(v___y_4267_, 4);
v_exportMData_4319_ = lean_ctor_get_uint8(v___y_4267_, sizeof(void*)*6);
v_exportUnsafe_4320_ = lean_ctor_get_uint8(v___y_4267_, sizeof(void*)*6 + 1);
v_ignoreMissing_4321_ = lean_ctor_get_uint8(v___y_4267_, sizeof(void*)*6 + 2);
v_recursorMap_4322_ = lean_ctor_get(v___y_4267_, 5);
v_isSharedCheck_4426_ = !lean_is_exclusive(v___y_4267_);
if (v_isSharedCheck_4426_ == 0)
{
v___x_4324_ = v___y_4267_;
v_isShared_4325_ = v_isSharedCheck_4426_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_recursorMap_4322_);
lean_inc(v_noMDataExprs_4318_);
lean_inc(v_visitedConstants_4317_);
lean_inc(v_visitedExprs_4316_);
lean_inc(v_visitedLevels_4315_);
lean_inc(v_visitedNames_4314_);
lean_dec(v___y_4267_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4426_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
uint8_t v_kind_4326_; lean_object* v_name_4327_; lean_object* v_levelParams_4328_; lean_object* v_type_4329_; lean_object* v___x_4330_; lean_object* v___x_4332_; 
v_kind_4326_ = lean_ctor_get_uint8(v_val_4309_, sizeof(void*)*1);
lean_dec_ref(v_val_4309_);
v_name_4327_ = lean_ctor_get(v_toConstantVal_4313_, 0);
lean_inc(v_name_4327_);
v_levelParams_4328_ = lean_ctor_get(v_toConstantVal_4313_, 1);
lean_inc(v_levelParams_4328_);
v_type_4329_ = lean_ctor_get(v_toConstantVal_4313_, 2);
lean_inc_ref(v_type_4329_);
lean_dec_ref(v_toConstantVal_4313_);
lean_inc(v_head_4271_);
v___x_4330_ = l_Lean_NameHashSet_insert(v_visitedConstants_4317_, v_head_4271_);
if (v_isShared_4325_ == 0)
{
lean_ctor_set(v___x_4324_, 3, v___x_4330_);
v___x_4332_ = v___x_4324_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v_visitedNames_4314_);
lean_ctor_set(v_reuseFailAlloc_4425_, 1, v_visitedLevels_4315_);
lean_ctor_set(v_reuseFailAlloc_4425_, 2, v_visitedExprs_4316_);
lean_ctor_set(v_reuseFailAlloc_4425_, 3, v___x_4330_);
lean_ctor_set(v_reuseFailAlloc_4425_, 4, v_noMDataExprs_4318_);
lean_ctor_set(v_reuseFailAlloc_4425_, 5, v_recursorMap_4322_);
lean_ctor_set_uint8(v_reuseFailAlloc_4425_, sizeof(void*)*6, v_exportMData_4319_);
lean_ctor_set_uint8(v_reuseFailAlloc_4425_, sizeof(void*)*6 + 1, v_exportUnsafe_4320_);
lean_ctor_set_uint8(v_reuseFailAlloc_4425_, sizeof(void*)*6 + 2, v_ignoreMissing_4321_);
v___x_4332_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
lean_object* v___x_4333_; 
v___x_4333_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4327_, v___y_4266_, v___x_4332_);
if (lean_obj_tag(v___x_4333_) == 0)
{
lean_object* v_a_4334_; lean_object* v_fst_4335_; lean_object* v_snd_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4416_; 
v_a_4334_ = lean_ctor_get(v___x_4333_, 0);
lean_inc(v_a_4334_);
lean_dec_ref_known(v___x_4333_, 1);
v_fst_4335_ = lean_ctor_get(v_a_4334_, 0);
v_snd_4336_ = lean_ctor_get(v_a_4334_, 1);
v_isSharedCheck_4416_ = !lean_is_exclusive(v_a_4334_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4338_ = v_a_4334_;
v_isShared_4339_ = v_isSharedCheck_4416_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_snd_4336_);
lean_inc(v_fst_4335_);
lean_dec(v_a_4334_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4416_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
lean_object* v___x_4340_; 
v___x_4340_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4328_, v___y_4266_, v_snd_4336_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4341_; lean_object* v_fst_4342_; lean_object* v_snd_4343_; lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4407_; 
v_a_4341_ = lean_ctor_get(v___x_4340_, 0);
lean_inc(v_a_4341_);
lean_dec_ref_known(v___x_4340_, 1);
v_fst_4342_ = lean_ctor_get(v_a_4341_, 0);
v_snd_4343_ = lean_ctor_get(v_a_4341_, 1);
v_isSharedCheck_4407_ = !lean_is_exclusive(v_a_4341_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4345_ = v_a_4341_;
v_isShared_4346_ = v_isSharedCheck_4407_;
goto v_resetjp_4344_;
}
else
{
lean_inc(v_snd_4343_);
lean_inc(v_fst_4342_);
lean_dec(v_a_4341_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4407_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4347_; 
v___x_4347_ = l_LeanExport_dumpExpr(v_type_4329_, v___y_4266_, v_snd_4343_);
if (lean_obj_tag(v___x_4347_) == 0)
{
lean_object* v_a_4348_; lean_object* v_fst_4349_; lean_object* v_snd_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4398_; 
v_a_4348_ = lean_ctor_get(v___x_4347_, 0);
lean_inc(v_a_4348_);
lean_dec_ref_known(v___x_4347_, 1);
v_fst_4349_ = lean_ctor_get(v_a_4348_, 0);
v_snd_4350_ = lean_ctor_get(v_a_4348_, 1);
v_isSharedCheck_4398_ = !lean_is_exclusive(v_a_4348_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4352_ = v_a_4348_;
v_isShared_4353_ = v_isSharedCheck_4398_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_snd_4350_);
lean_inc(v_fst_4349_);
lean_dec(v_a_4348_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4398_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4358_; 
v___x_4354_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5));
v___x_4355_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4356_ = l_Lean_JsonNumber_fromNat(v_fst_4335_);
if (v_isShared_4312_ == 0)
{
lean_ctor_set_tag(v___x_4311_, 2);
lean_ctor_set(v___x_4311_, 0, v___x_4356_);
v___x_4358_ = v___x_4311_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v___x_4356_);
v___x_4358_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
lean_object* v___x_4360_; 
if (v_isShared_4353_ == 0)
{
lean_ctor_set(v___x_4352_, 1, v___x_4358_);
lean_ctor_set(v___x_4352_, 0, v___x_4355_);
v___x_4360_ = v___x_4352_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v___x_4355_);
lean_ctor_set(v_reuseFailAlloc_4396_, 1, v___x_4358_);
v___x_4360_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
lean_object* v___x_4361_; lean_object* v___x_4363_; 
v___x_4361_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4346_ == 0)
{
lean_ctor_set(v___x_4345_, 1, v_fst_4342_);
lean_ctor_set(v___x_4345_, 0, v___x_4361_);
v___x_4363_ = v___x_4345_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v___x_4361_);
lean_ctor_set(v_reuseFailAlloc_4395_, 1, v_fst_4342_);
v___x_4363_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4367_; 
v___x_4364_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4365_ = l_Lean_JsonNumber_fromNat(v_fst_4349_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set_tag(v___x_4307_, 2);
lean_ctor_set(v___x_4307_, 0, v___x_4365_);
v___x_4367_ = v___x_4307_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v___x_4365_);
v___x_4367_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
lean_object* v___x_4369_; 
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 1, v___x_4367_);
lean_ctor_set(v___x_4338_, 0, v___x_4364_);
v___x_4369_ = v___x_4338_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v___x_4364_);
lean_ctor_set(v_reuseFailAlloc_4393_, 1, v___x_4367_);
v___x_4369_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4370_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6));
v___x_4371_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_kind_4326_);
v___x_4372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4370_);
lean_ctor_set(v___x_4372_, 1, v___x_4371_);
v___x_4373_ = lean_box(0);
v___x_4374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4372_);
lean_ctor_set(v___x_4374_, 1, v___x_4373_);
v___x_4375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4369_);
lean_ctor_set(v___x_4375_, 1, v___x_4374_);
v___x_4376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4363_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
v___x_4377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4360_);
lean_ctor_set(v___x_4377_, 1, v___x_4376_);
v___x_4378_ = l_Lean_Json_mkObj(v___x_4377_);
lean_dec_ref_known(v___x_4377_, 2);
v___x_4379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4354_);
lean_ctor_set(v___x_4379_, 1, v___x_4378_);
v___x_4380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4380_, 0, v___x_4379_);
lean_ctor_set(v___x_4380_, 1, v___x_4373_);
v___x_4381_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4380_, v_snd_4350_);
lean_dec_ref_known(v___x_4380_, 2);
if (lean_obj_tag(v___x_4381_) == 0)
{
lean_object* v_a_4382_; lean_object* v_snd_4383_; 
v_a_4382_ = lean_ctor_get(v___x_4381_, 0);
lean_inc(v_a_4382_);
lean_dec_ref_known(v___x_4381_, 1);
v_snd_4383_ = lean_ctor_get(v_a_4382_, 1);
lean_inc(v_snd_4383_);
lean_dec(v_a_4382_);
v_as_x27_4264_ = v_tail_4272_;
v_b_4265_ = v___x_4273_;
v___y_4267_ = v_snd_4383_;
goto _start;
}
else
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
v_a_4385_ = lean_ctor_get(v___x_4381_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4381_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v___x_4381_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4381_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
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
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_del_object(v___x_4345_);
lean_dec(v_fst_4342_);
lean_del_object(v___x_4338_);
lean_dec(v_fst_4335_);
lean_del_object(v___x_4311_);
lean_del_object(v___x_4307_);
v_a_4399_ = lean_ctor_get(v___x_4347_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4347_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4347_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4347_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
lean_del_object(v___x_4338_);
lean_dec(v_fst_4335_);
lean_dec_ref(v_type_4329_);
lean_del_object(v___x_4311_);
lean_del_object(v___x_4307_);
v_a_4408_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4340_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4340_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
lean_dec_ref(v_type_4329_);
lean_dec(v_levelParams_4328_);
lean_del_object(v___x_4311_);
lean_del_object(v___x_4307_);
v_a_4417_ = lean_ctor_get(v___x_4333_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4333_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4419_ = v___x_4333_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_a_4417_);
lean_dec(v___x_4333_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4417_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4307_);
lean_dec(v_val_4305_);
v___y_4275_ = v___y_4266_;
v___y_4276_ = v___y_4267_;
goto v___jp_4274_;
}
}
}
else
{
lean_dec(v___x_4304_);
v___y_4275_ = v___y_4266_;
v___y_4276_ = v___y_4267_;
goto v___jp_4274_;
}
v___jp_4274_:
{
uint8_t v_ignoreMissing_4277_; 
v_ignoreMissing_4277_ = lean_ctor_get_uint8(v___y_4276_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_4277_ == 0)
{
lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; uint8_t v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; 
v___x_4278_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4279_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_4280_ = lean_unsigned_to_nat(313u);
v___x_4281_ = lean_unsigned_to_nat(52u);
v___x_4282_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_4283_ = 1;
lean_inc(v_head_4271_);
v___x_4284_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_4271_, v___x_4283_);
v___x_4285_ = lean_string_append(v___x_4282_, v___x_4284_);
lean_dec_ref(v___x_4284_);
v___x_4286_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_4287_ = lean_string_append(v___x_4285_, v___x_4286_);
v___x_4288_ = l_mkPanicMessageWithDecl(v___x_4278_, v___x_4279_, v___x_4280_, v___x_4281_, v___x_4287_);
lean_dec_ref(v___x_4287_);
v___x_4289_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_4288_, v___y_4275_, v___y_4276_);
if (lean_obj_tag(v___x_4289_) == 0)
{
lean_object* v_a_4290_; lean_object* v_snd_4291_; 
v_a_4290_ = lean_ctor_get(v___x_4289_, 0);
lean_inc(v_a_4290_);
lean_dec_ref_known(v___x_4289_, 1);
v_snd_4291_ = lean_ctor_get(v_a_4290_, 1);
lean_inc(v_snd_4291_);
lean_dec(v_a_4290_);
v_as_x27_4264_ = v_tail_4272_;
v_b_4265_ = v___x_4273_;
v___y_4267_ = v_snd_4291_;
goto _start;
}
else
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4300_; 
v_a_4293_ = lean_ctor_get(v___x_4289_, 0);
v_isSharedCheck_4300_ = !lean_is_exclusive(v___x_4289_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4295_ = v___x_4289_;
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v___x_4289_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
else
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; 
v___x_4301_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4));
v___x_4302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4301_);
lean_ctor_set(v___x_4302_, 1, v___y_4276_);
v___x_4303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4303_, 0, v___x_4302_);
return v___x_4303_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__21(void){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4431_ = l_Lean_NameSet_empty;
v___x_4432_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4432_);
lean_ctor_set(v___x_4433_, 1, v___x_4431_);
return v___x_4433_;
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__22(void){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4434_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__21, &l_LeanExport_dumpConstant___closed__21_once, _init_l_LeanExport_dumpConstant___closed__21);
v___x_4435_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4436_, 0, v___x_4435_);
lean_ctor_set(v___x_4436_, 1, v___x_4434_);
return v___x_4436_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4438_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__0));
v___x_4439_ = lean_unsigned_to_nat(11u);
v___x_4440_ = lean_unsigned_to_nat(341u);
v___x_4441_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_4442_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4443_ = l_mkPanicMessageWithDecl(v___x_4442_, v___x_4441_, v___x_4440_, v___x_4439_, v___x_4438_);
return v___x_4443_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4445_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__2));
v___x_4446_ = lean_unsigned_to_nat(6u);
v___x_4447_ = lean_unsigned_to_nat(329u);
v___x_4448_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_4449_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4450_ = l_mkPanicMessageWithDecl(v___x_4449_, v___x_4448_, v___x_4447_, v___x_4446_, v___x_4445_);
return v___x_4450_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(uint8_t v___x_4451_, lean_object* v_val_4452_, lean_object* v_as_x27_4453_, lean_object* v_b_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_){
_start:
{
if (lean_obj_tag(v_as_x27_4453_) == 0)
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4458_, 0, v_b_4454_);
lean_ctor_set(v___x_4458_, 1, v___y_4456_);
v___x_4459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4458_);
return v___x_4459_;
}
else
{
lean_object* v_head_4460_; lean_object* v_tail_4461_; lean_object* v___y_4463_; lean_object* v_snd_4494_; lean_object* v_fst_4495_; lean_object* v_fst_4496_; lean_object* v_snd_4497_; lean_object* v___y_4499_; uint8_t v___y_4500_; lean_object* v___y_4580_; lean_object* v___x_4587_; 
v_head_4460_ = lean_ctor_get(v_as_x27_4453_, 0);
v_tail_4461_ = lean_ctor_get(v_as_x27_4453_, 1);
v_snd_4494_ = lean_ctor_get(v_b_4454_, 1);
lean_inc(v_snd_4494_);
v_fst_4495_ = lean_ctor_get(v_b_4454_, 0);
lean_inc(v_fst_4495_);
lean_dec_ref(v_b_4454_);
v_fst_4496_ = lean_ctor_get(v_snd_4494_, 0);
lean_inc(v_fst_4496_);
v_snd_4497_ = lean_ctor_get(v_snd_4494_, 1);
lean_inc(v_snd_4497_);
lean_dec(v_snd_4494_);
lean_inc(v_head_4460_);
lean_inc_ref(v___y_4455_);
v___x_4587_ = l_Lean_Environment_find_x3f(v___y_4455_, v_head_4460_, v___x_4451_);
if (lean_obj_tag(v___x_4587_) == 0)
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4588_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__8);
v___x_4589_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_4588_);
v___y_4580_ = v___x_4589_;
goto v___jp_4579_;
}
else
{
lean_object* v_val_4590_; 
v_val_4590_ = lean_ctor_get(v___x_4587_, 0);
lean_inc(v_val_4590_);
lean_dec_ref_known(v___x_4587_, 1);
v___y_4580_ = v_val_4590_;
goto v___jp_4579_;
}
v___jp_4462_:
{
if (lean_obj_tag(v___y_4463_) == 0)
{
lean_object* v_a_4464_; lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4485_; 
v_a_4464_ = lean_ctor_get(v___y_4463_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v___y_4463_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4466_ = v___y_4463_;
v_isShared_4467_ = v_isSharedCheck_4485_;
goto v_resetjp_4465_;
}
else
{
lean_inc(v_a_4464_);
lean_dec(v___y_4463_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4485_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v_fst_4468_; 
v_fst_4468_ = lean_ctor_get(v_a_4464_, 0);
lean_inc(v_fst_4468_);
if (lean_obj_tag(v_fst_4468_) == 0)
{
lean_object* v_snd_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4480_; 
v_snd_4469_ = lean_ctor_get(v_a_4464_, 1);
v_isSharedCheck_4480_ = !lean_is_exclusive(v_a_4464_);
if (v_isSharedCheck_4480_ == 0)
{
lean_object* v_unused_4481_; 
v_unused_4481_ = lean_ctor_get(v_a_4464_, 0);
lean_dec(v_unused_4481_);
v___x_4471_ = v_a_4464_;
v_isShared_4472_ = v_isSharedCheck_4480_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_snd_4469_);
lean_dec(v_a_4464_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4480_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v_a_4473_; lean_object* v___x_4475_; 
v_a_4473_ = lean_ctor_get(v_fst_4468_, 0);
lean_inc(v_a_4473_);
lean_dec_ref_known(v_fst_4468_, 1);
if (v_isShared_4472_ == 0)
{
lean_ctor_set(v___x_4471_, 0, v_a_4473_);
v___x_4475_ = v___x_4471_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_a_4473_);
lean_ctor_set(v_reuseFailAlloc_4479_, 1, v_snd_4469_);
v___x_4475_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
lean_object* v___x_4477_; 
if (v_isShared_4467_ == 0)
{
lean_ctor_set(v___x_4466_, 0, v___x_4475_);
v___x_4477_ = v___x_4466_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v___x_4475_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
}
else
{
lean_object* v_snd_4482_; lean_object* v_a_4483_; 
lean_del_object(v___x_4466_);
v_snd_4482_ = lean_ctor_get(v_a_4464_, 1);
lean_inc(v_snd_4482_);
lean_dec(v_a_4464_);
v_a_4483_ = lean_ctor_get(v_fst_4468_, 0);
lean_inc(v_a_4483_);
lean_dec_ref_known(v_fst_4468_, 1);
v_as_x27_4453_ = v_tail_4461_;
v_b_4454_ = v_a_4483_;
v___y_4456_ = v_snd_4482_;
goto _start;
}
}
}
else
{
lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4493_; 
v_a_4486_ = lean_ctor_get(v___y_4463_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v___y_4463_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4488_ = v___y_4463_;
v_isShared_4489_ = v_isSharedCheck_4493_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v___y_4463_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4493_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4491_; 
if (v_isShared_4489_ == 0)
{
v___x_4491_ = v___x_4488_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v_a_4486_);
v___x_4491_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
return v___x_4491_;
}
}
}
}
v___jp_4498_:
{
lean_object* v_toConstantVal_4501_; lean_object* v_ctors_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_toConstantVal_4501_ = lean_ctor_get(v___y_4499_, 0);
lean_inc_ref(v_toConstantVal_4501_);
v_ctors_4502_ = lean_ctor_get(v___y_4499_, 4);
lean_inc(v_ctors_4502_);
v___x_4503_ = lean_array_push(v_fst_4495_, v___y_4499_);
v___x_4504_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_4500_, v___x_4451_, v_ctors_4502_, v_fst_4496_, v___y_4455_, v___y_4456_);
lean_dec(v_ctors_4502_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; lean_object* v_snd_4506_; lean_object* v_fst_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4570_; 
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref_known(v___x_4504_, 1);
v_snd_4506_ = lean_ctor_get(v_a_4505_, 1);
v_fst_4507_ = lean_ctor_get(v_a_4505_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v_a_4505_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4509_ = v_a_4505_;
v_isShared_4510_ = v_isSharedCheck_4570_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_snd_4506_);
lean_inc(v_fst_4507_);
lean_dec(v_a_4505_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4570_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v_visitedNames_4511_; lean_object* v_visitedLevels_4512_; lean_object* v_visitedExprs_4513_; lean_object* v_visitedConstants_4514_; lean_object* v_noMDataExprs_4515_; uint8_t v_exportMData_4516_; uint8_t v_exportUnsafe_4517_; uint8_t v_ignoreMissing_4518_; lean_object* v_recursorMap_4519_; lean_object* v___x_4521_; uint8_t v_isShared_4522_; uint8_t v_isSharedCheck_4569_; 
v_visitedNames_4511_ = lean_ctor_get(v_snd_4506_, 0);
v_visitedLevels_4512_ = lean_ctor_get(v_snd_4506_, 1);
v_visitedExprs_4513_ = lean_ctor_get(v_snd_4506_, 2);
v_visitedConstants_4514_ = lean_ctor_get(v_snd_4506_, 3);
v_noMDataExprs_4515_ = lean_ctor_get(v_snd_4506_, 4);
v_exportMData_4516_ = lean_ctor_get_uint8(v_snd_4506_, sizeof(void*)*6);
v_exportUnsafe_4517_ = lean_ctor_get_uint8(v_snd_4506_, sizeof(void*)*6 + 1);
v_ignoreMissing_4518_ = lean_ctor_get_uint8(v_snd_4506_, sizeof(void*)*6 + 2);
v_recursorMap_4519_ = lean_ctor_get(v_snd_4506_, 5);
v_isSharedCheck_4569_ = !lean_is_exclusive(v_snd_4506_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4521_ = v_snd_4506_;
v_isShared_4522_ = v_isSharedCheck_4569_;
goto v_resetjp_4520_;
}
else
{
lean_inc(v_recursorMap_4519_);
lean_inc(v_noMDataExprs_4515_);
lean_inc(v_visitedConstants_4514_);
lean_inc(v_visitedExprs_4513_);
lean_inc(v_visitedLevels_4512_);
lean_inc(v_visitedNames_4511_);
lean_dec(v_snd_4506_);
v___x_4521_ = lean_box(0);
v_isShared_4522_ = v_isSharedCheck_4569_;
goto v_resetjp_4520_;
}
v_resetjp_4520_:
{
lean_object* v_type_4523_; lean_object* v___x_4524_; lean_object* v___x_4526_; 
v_type_4523_ = lean_ctor_get(v_toConstantVal_4501_, 2);
lean_inc_ref(v_type_4523_);
lean_dec_ref(v_toConstantVal_4501_);
lean_inc(v_head_4460_);
v___x_4524_ = l_Lean_NameHashSet_insert(v_visitedConstants_4514_, v_head_4460_);
if (v_isShared_4522_ == 0)
{
lean_ctor_set(v___x_4521_, 3, v___x_4524_);
v___x_4526_ = v___x_4521_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_visitedNames_4511_);
lean_ctor_set(v_reuseFailAlloc_4568_, 1, v_visitedLevels_4512_);
lean_ctor_set(v_reuseFailAlloc_4568_, 2, v_visitedExprs_4513_);
lean_ctor_set(v_reuseFailAlloc_4568_, 3, v___x_4524_);
lean_ctor_set(v_reuseFailAlloc_4568_, 4, v_noMDataExprs_4515_);
lean_ctor_set(v_reuseFailAlloc_4568_, 5, v_recursorMap_4519_);
lean_ctor_set_uint8(v_reuseFailAlloc_4568_, sizeof(void*)*6, v_exportMData_4516_);
lean_ctor_set_uint8(v_reuseFailAlloc_4568_, sizeof(void*)*6 + 1, v_exportUnsafe_4517_);
lean_ctor_set_uint8(v_reuseFailAlloc_4568_, sizeof(void*)*6 + 2, v_ignoreMissing_4518_);
v___x_4526_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
lean_object* v___x_4527_; 
v___x_4527_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4523_, v___y_4455_, v___x_4526_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; lean_object* v_snd_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4558_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_a_4528_);
lean_dec_ref_known(v___x_4527_, 1);
v_snd_4529_ = lean_ctor_get(v_a_4528_, 1);
v_isSharedCheck_4558_ = !lean_is_exclusive(v_a_4528_);
if (v_isSharedCheck_4558_ == 0)
{
lean_object* v_unused_4559_; 
v_unused_4559_ = lean_ctor_get(v_a_4528_, 0);
lean_dec(v_unused_4559_);
v___x_4531_ = v_a_4528_;
v_isShared_4532_ = v_isSharedCheck_4558_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_snd_4529_);
lean_dec(v_a_4528_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4558_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v_toConstantVal_4533_; lean_object* v_recursorMap_4534_; lean_object* v_name_4535_; lean_object* v___x_4536_; 
v_toConstantVal_4533_ = lean_ctor_get(v_val_4452_, 0);
v_recursorMap_4534_ = lean_ctor_get(v_snd_4529_, 5);
v_name_4535_ = lean_ctor_get(v_toConstantVal_4533_, 0);
v___x_4536_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_recursorMap_4534_, v_name_4535_);
if (lean_obj_tag(v___x_4536_) == 1)
{
lean_object* v_val_4537_; lean_object* v___x_4538_; lean_object* v___x_4540_; 
v_val_4537_ = lean_ctor_get(v___x_4536_, 0);
lean_inc(v_val_4537_);
lean_dec_ref_known(v___x_4536_, 1);
v___x_4538_ = l_Lean_NameSet_union(v_snd_4497_, v_val_4537_);
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 1, v___x_4538_);
lean_ctor_set(v___x_4531_, 0, v_fst_4507_);
v___x_4540_ = v___x_4531_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_fst_4507_);
lean_ctor_set(v_reuseFailAlloc_4545_, 1, v___x_4538_);
v___x_4540_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
lean_object* v___x_4542_; 
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 1, v___x_4540_);
lean_ctor_set(v___x_4509_, 0, v___x_4503_);
v___x_4542_ = v___x_4509_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v___x_4503_);
lean_ctor_set(v_reuseFailAlloc_4544_, 1, v___x_4540_);
v___x_4542_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
v_as_x27_4453_ = v_tail_4461_;
v_b_4454_ = v___x_4542_;
v___y_4456_ = v_snd_4529_;
goto _start;
}
}
}
else
{
lean_object* v___x_4546_; lean_object* v___x_4547_; uint8_t v___x_4548_; 
lean_dec(v___x_4536_);
v___x_4546_ = lean_array_get_size(v_fst_4507_);
v___x_4547_ = lean_unsigned_to_nat(0u);
v___x_4548_ = lean_nat_dec_eq(v___x_4546_, v___x_4547_);
if (v___x_4548_ == 0)
{
lean_object* v___x_4549_; lean_object* v___x_4550_; 
lean_del_object(v___x_4531_);
lean_del_object(v___x_4509_);
lean_dec(v_fst_4507_);
lean_dec_ref(v___x_4503_);
lean_dec(v_snd_4497_);
v___x_4549_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__1);
v___x_4550_ = l_panic___at___00LeanExport_dumpConstant_spec__10(v___x_4549_, v___y_4455_, v_snd_4529_);
v___y_4463_ = v___x_4550_;
goto v___jp_4462_;
}
else
{
lean_object* v___x_4552_; 
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 1, v_snd_4497_);
lean_ctor_set(v___x_4531_, 0, v_fst_4507_);
v___x_4552_ = v___x_4531_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_fst_4507_);
lean_ctor_set(v_reuseFailAlloc_4557_, 1, v_snd_4497_);
v___x_4552_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
lean_object* v___x_4554_; 
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 1, v___x_4552_);
lean_ctor_set(v___x_4509_, 0, v___x_4503_);
v___x_4554_ = v___x_4509_;
goto v_reusejp_4553_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v___x_4503_);
lean_ctor_set(v_reuseFailAlloc_4556_, 1, v___x_4552_);
v___x_4554_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4553_;
}
v_reusejp_4553_:
{
v_as_x27_4453_ = v_tail_4461_;
v_b_4454_ = v___x_4554_;
v___y_4456_ = v_snd_4529_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4567_; 
lean_del_object(v___x_4509_);
lean_dec(v_fst_4507_);
lean_dec_ref(v___x_4503_);
lean_dec(v_snd_4497_);
v_a_4560_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4567_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4562_ = v___x_4527_;
v_isShared_4563_ = v_isSharedCheck_4567_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_a_4560_);
lean_dec(v___x_4527_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4567_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v___x_4565_; 
if (v_isShared_4563_ == 0)
{
v___x_4565_ = v___x_4562_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_a_4560_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
return v___x_4565_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4571_; lean_object* v___x_4573_; uint8_t v_isShared_4574_; uint8_t v_isSharedCheck_4578_; 
lean_dec_ref(v___x_4503_);
lean_dec_ref(v_toConstantVal_4501_);
lean_dec(v_snd_4497_);
v_a_4571_ = lean_ctor_get(v___x_4504_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4504_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4573_ = v___x_4504_;
v_isShared_4574_ = v_isSharedCheck_4578_;
goto v_resetjp_4572_;
}
else
{
lean_inc(v_a_4571_);
lean_dec(v___x_4504_);
v___x_4573_ = lean_box(0);
v_isShared_4574_ = v_isSharedCheck_4578_;
goto v_resetjp_4572_;
}
v_resetjp_4572_:
{
lean_object* v___x_4576_; 
if (v_isShared_4574_ == 0)
{
v___x_4576_ = v___x_4573_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v_a_4571_);
v___x_4576_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
return v___x_4576_;
}
}
}
}
v___jp_4579_:
{
lean_object* v___x_4581_; uint8_t v_isUnsafe_4582_; 
v___x_4581_ = l_Lean_ConstantInfo_inductiveVal_x21(v___y_4580_);
lean_dec_ref(v___y_4580_);
v_isUnsafe_4582_ = lean_ctor_get_uint8(v___x_4581_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4582_ == 0)
{
uint8_t v___x_4583_; 
v___x_4583_ = 1;
v___y_4499_ = v___x_4581_;
v___y_4500_ = v___x_4583_;
goto v___jp_4498_;
}
else
{
if (v___x_4451_ == 0)
{
uint8_t v_exportUnsafe_4584_; 
v_exportUnsafe_4584_ = lean_ctor_get_uint8(v___y_4456_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_4584_ == 0)
{
lean_object* v___x_4585_; lean_object* v___x_4586_; 
lean_dec_ref(v___x_4581_);
lean_dec(v_snd_4497_);
lean_dec(v_fst_4496_);
lean_dec(v_fst_4495_);
v___x_4585_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___closed__3);
v___x_4586_ = l_panic___at___00LeanExport_dumpConstant_spec__10(v___x_4585_, v___y_4455_, v___y_4456_);
v___y_4463_ = v___x_4586_;
goto v___jp_4462_;
}
else
{
v___y_4499_ = v___x_4581_;
v___y_4500_ = v_exportUnsafe_4584_;
goto v___jp_4498_;
}
}
else
{
v___y_4499_ = v___x_4581_;
v___y_4500_ = v___x_4451_;
goto v___jp_4498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(lean_object* v_as_4591_, size_t v_sz_4592_, size_t v_i_4593_, lean_object* v_b_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
uint8_t v___x_4598_; 
v___x_4598_ = lean_usize_dec_lt(v_i_4593_, v_sz_4592_);
if (v___x_4598_ == 0)
{
lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4599_, 0, v_b_4594_);
lean_ctor_set(v___x_4599_, 1, v___y_4596_);
v___x_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
return v___x_4600_;
}
else
{
lean_object* v_visitedNames_4601_; lean_object* v_visitedLevels_4602_; lean_object* v_visitedExprs_4603_; lean_object* v_visitedConstants_4604_; lean_object* v_noMDataExprs_4605_; uint8_t v_exportMData_4606_; uint8_t v_exportUnsafe_4607_; uint8_t v_ignoreMissing_4608_; lean_object* v_recursorMap_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4628_; 
v_visitedNames_4601_ = lean_ctor_get(v___y_4596_, 0);
v_visitedLevels_4602_ = lean_ctor_get(v___y_4596_, 1);
v_visitedExprs_4603_ = lean_ctor_get(v___y_4596_, 2);
v_visitedConstants_4604_ = lean_ctor_get(v___y_4596_, 3);
v_noMDataExprs_4605_ = lean_ctor_get(v___y_4596_, 4);
v_exportMData_4606_ = lean_ctor_get_uint8(v___y_4596_, sizeof(void*)*6);
v_exportUnsafe_4607_ = lean_ctor_get_uint8(v___y_4596_, sizeof(void*)*6 + 1);
v_ignoreMissing_4608_ = lean_ctor_get_uint8(v___y_4596_, sizeof(void*)*6 + 2);
v_recursorMap_4609_ = lean_ctor_get(v___y_4596_, 5);
v_isSharedCheck_4628_ = !lean_is_exclusive(v___y_4596_);
if (v_isSharedCheck_4628_ == 0)
{
v___x_4611_ = v___y_4596_;
v_isShared_4612_ = v_isSharedCheck_4628_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_recursorMap_4609_);
lean_inc(v_noMDataExprs_4605_);
lean_inc(v_visitedConstants_4604_);
lean_inc(v_visitedExprs_4603_);
lean_inc(v_visitedLevels_4602_);
lean_inc(v_visitedNames_4601_);
lean_dec(v___y_4596_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4628_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v_a_4613_; lean_object* v_toConstantVal_4614_; lean_object* v_name_4615_; lean_object* v_type_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4620_; 
v_a_4613_ = lean_array_uget_borrowed(v_as_4591_, v_i_4593_);
v_toConstantVal_4614_ = lean_ctor_get(v_a_4613_, 0);
v_name_4615_ = lean_ctor_get(v_toConstantVal_4614_, 0);
v_type_4616_ = lean_ctor_get(v_toConstantVal_4614_, 2);
v___x_4617_ = lean_box(0);
lean_inc(v_name_4615_);
v___x_4618_ = l_Lean_NameHashSet_insert(v_visitedConstants_4604_, v_name_4615_);
if (v_isShared_4612_ == 0)
{
lean_ctor_set(v___x_4611_, 3, v___x_4618_);
v___x_4620_ = v___x_4611_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v_visitedNames_4601_);
lean_ctor_set(v_reuseFailAlloc_4627_, 1, v_visitedLevels_4602_);
lean_ctor_set(v_reuseFailAlloc_4627_, 2, v_visitedExprs_4603_);
lean_ctor_set(v_reuseFailAlloc_4627_, 3, v___x_4618_);
lean_ctor_set(v_reuseFailAlloc_4627_, 4, v_noMDataExprs_4605_);
lean_ctor_set(v_reuseFailAlloc_4627_, 5, v_recursorMap_4609_);
lean_ctor_set_uint8(v_reuseFailAlloc_4627_, sizeof(void*)*6, v_exportMData_4606_);
lean_ctor_set_uint8(v_reuseFailAlloc_4627_, sizeof(void*)*6 + 1, v_exportUnsafe_4607_);
lean_ctor_set_uint8(v_reuseFailAlloc_4627_, sizeof(void*)*6 + 2, v_ignoreMissing_4608_);
v___x_4620_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
lean_object* v___x_4621_; 
lean_inc_ref(v_type_4616_);
v___x_4621_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4616_, v___y_4595_, v___x_4620_);
if (lean_obj_tag(v___x_4621_) == 0)
{
lean_object* v_a_4622_; lean_object* v_snd_4623_; size_t v___x_4624_; size_t v___x_4625_; 
v_a_4622_ = lean_ctor_get(v___x_4621_, 0);
lean_inc(v_a_4622_);
lean_dec_ref_known(v___x_4621_, 1);
v_snd_4623_ = lean_ctor_get(v_a_4622_, 1);
lean_inc(v_snd_4623_);
lean_dec(v_a_4622_);
v___x_4624_ = ((size_t)1ULL);
v___x_4625_ = lean_usize_add(v_i_4593_, v___x_4624_);
v_i_4593_ = v___x_4625_;
v_b_4594_ = v___x_4617_;
v___y_4596_ = v_snd_4623_;
goto _start;
}
else
{
return v___x_4621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(lean_object* v_as_x27_4629_, lean_object* v_b_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_){
_start:
{
if (lean_obj_tag(v_as_x27_4629_) == 0)
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
v___x_4634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4634_, 0, v_b_4630_);
lean_ctor_set(v___x_4634_, 1, v___y_4632_);
v___x_4635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4635_, 0, v___x_4634_);
return v___x_4635_;
}
else
{
lean_object* v_head_4636_; lean_object* v_tail_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v_head_4636_ = lean_ctor_get(v_as_x27_4629_, 0);
v_tail_4637_ = lean_ctor_get(v_as_x27_4629_, 1);
v___x_4638_ = lean_box(0);
lean_inc(v_head_4636_);
v___x_4639_ = l_LeanExport_dumpConstant(v_head_4636_, v___y_4631_, v___y_4632_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_object* v_a_4640_; lean_object* v_snd_4641_; 
v_a_4640_ = lean_ctor_get(v___x_4639_, 0);
lean_inc(v_a_4640_);
lean_dec_ref_known(v___x_4639_, 1);
v_snd_4641_ = lean_ctor_get(v_a_4640_, 1);
lean_inc(v_snd_4641_);
lean_dec(v_a_4640_);
v_as_x27_4629_ = v_tail_4637_;
v_b_4630_ = v___x_4638_;
v___y_4632_ = v_snd_4641_;
goto _start;
}
else
{
return v___x_4639_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object* v_c_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v___y_4652_; lean_object* v___y_4653_; lean_object* v___y_4654_; lean_object* v_fst_4655_; lean_object* v_snd_4656_; uint8_t v___x_4753_; lean_object* v___x_4754_; 
v___x_4753_ = 0;
lean_inc(v_c_4643_);
lean_inc_ref(v___y_4644_);
v___x_4754_ = l_Lean_Environment_find_x3f(v___y_4644_, v_c_4643_, v___x_4753_);
if (lean_obj_tag(v___x_4754_) == 1)
{
lean_object* v_val_4755_; uint8_t v___y_5494_; uint8_t v___x_5495_; 
v_val_4755_ = lean_ctor_get(v___x_4754_, 0);
lean_inc(v_val_4755_);
lean_dec_ref_known(v___x_4754_, 1);
v___x_5495_ = l_Lean_ConstantInfo_isUnsafe(v_val_4755_);
if (v___x_5495_ == 0)
{
v___y_5494_ = v___x_5495_;
goto v___jp_5493_;
}
else
{
uint8_t v_exportUnsafe_5496_; 
v_exportUnsafe_5496_ = lean_ctor_get_uint8(v___y_4645_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_5496_ == 0)
{
v___y_5494_ = v___x_5495_;
goto v___jp_5493_;
}
else
{
goto v___jp_4756_;
}
}
v___jp_4756_:
{
lean_object* v_visitedNames_4757_; lean_object* v_visitedLevels_4758_; lean_object* v_visitedExprs_4759_; lean_object* v_visitedConstants_4760_; lean_object* v_noMDataExprs_4761_; uint8_t v_exportMData_4762_; uint8_t v_exportUnsafe_4763_; uint8_t v_ignoreMissing_4764_; lean_object* v_recursorMap_4765_; uint8_t v___x_4766_; 
v_visitedNames_4757_ = lean_ctor_get(v___y_4645_, 0);
v_visitedLevels_4758_ = lean_ctor_get(v___y_4645_, 1);
v_visitedExprs_4759_ = lean_ctor_get(v___y_4645_, 2);
v_visitedConstants_4760_ = lean_ctor_get(v___y_4645_, 3);
v_noMDataExprs_4761_ = lean_ctor_get(v___y_4645_, 4);
v_exportMData_4762_ = lean_ctor_get_uint8(v___y_4645_, sizeof(void*)*6);
v_exportUnsafe_4763_ = lean_ctor_get_uint8(v___y_4645_, sizeof(void*)*6 + 1);
v_ignoreMissing_4764_ = lean_ctor_get_uint8(v___y_4645_, sizeof(void*)*6 + 2);
v_recursorMap_4765_ = lean_ctor_get(v___y_4645_, 5);
v___x_4766_ = l_Lean_NameHashSet_contains(v_visitedConstants_4760_, v_c_4643_);
if (v___x_4766_ == 0)
{
lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_5486_; 
lean_inc(v_recursorMap_4765_);
lean_inc_ref(v_noMDataExprs_4761_);
lean_inc_ref(v_visitedConstants_4760_);
lean_inc_ref(v_visitedExprs_4759_);
lean_inc_ref(v_visitedLevels_4758_);
lean_inc_ref(v_visitedNames_4757_);
v_isSharedCheck_5486_ = !lean_is_exclusive(v___y_4645_);
if (v_isSharedCheck_5486_ == 0)
{
lean_object* v_unused_5487_; lean_object* v_unused_5488_; lean_object* v_unused_5489_; lean_object* v_unused_5490_; lean_object* v_unused_5491_; lean_object* v_unused_5492_; 
v_unused_5487_ = lean_ctor_get(v___y_4645_, 5);
lean_dec(v_unused_5487_);
v_unused_5488_ = lean_ctor_get(v___y_4645_, 4);
lean_dec(v_unused_5488_);
v_unused_5489_ = lean_ctor_get(v___y_4645_, 3);
lean_dec(v_unused_5489_);
v_unused_5490_ = lean_ctor_get(v___y_4645_, 2);
lean_dec(v_unused_5490_);
v_unused_5491_ = lean_ctor_get(v___y_4645_, 1);
lean_dec(v_unused_5491_);
v_unused_5492_ = lean_ctor_get(v___y_4645_, 0);
lean_dec(v_unused_5492_);
v___x_4768_ = v___y_4645_;
v_isShared_4769_ = v_isSharedCheck_5486_;
goto v_resetjp_4767_;
}
else
{
lean_dec(v___y_4645_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_5486_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4770_; lean_object* v___x_4772_; 
v___x_4770_ = l_Lean_NameHashSet_insert(v_visitedConstants_4760_, v_c_4643_);
if (v_isShared_4769_ == 0)
{
lean_ctor_set(v___x_4768_, 3, v___x_4770_);
v___x_4772_ = v___x_4768_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v_visitedNames_4757_);
lean_ctor_set(v_reuseFailAlloc_5485_, 1, v_visitedLevels_4758_);
lean_ctor_set(v_reuseFailAlloc_5485_, 2, v_visitedExprs_4759_);
lean_ctor_set(v_reuseFailAlloc_5485_, 3, v___x_4770_);
lean_ctor_set(v_reuseFailAlloc_5485_, 4, v_noMDataExprs_4761_);
lean_ctor_set(v_reuseFailAlloc_5485_, 5, v_recursorMap_4765_);
lean_ctor_set_uint8(v_reuseFailAlloc_5485_, sizeof(void*)*6, v_exportMData_4762_);
lean_ctor_set_uint8(v_reuseFailAlloc_5485_, sizeof(void*)*6 + 1, v_exportUnsafe_4763_);
lean_ctor_set_uint8(v_reuseFailAlloc_5485_, sizeof(void*)*6 + 2, v_ignoreMissing_4764_);
v___x_4772_ = v_reuseFailAlloc_5485_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
switch(lean_obj_tag(v_val_4755_))
{
case 0:
{
lean_object* v_val_4773_; lean_object* v___x_4775_; uint8_t v_isShared_4776_; uint8_t v_isSharedCheck_4877_; 
v_val_4773_ = lean_ctor_get(v_val_4755_, 0);
v_isSharedCheck_4877_ = !lean_is_exclusive(v_val_4755_);
if (v_isSharedCheck_4877_ == 0)
{
v___x_4775_ = v_val_4755_;
v_isShared_4776_ = v_isSharedCheck_4877_;
goto v_resetjp_4774_;
}
else
{
lean_inc(v_val_4773_);
lean_dec(v_val_4755_);
v___x_4775_ = lean_box(0);
v_isShared_4776_ = v_isSharedCheck_4877_;
goto v_resetjp_4774_;
}
v_resetjp_4774_:
{
lean_object* v_toConstantVal_4777_; uint8_t v_isUnsafe_4778_; lean_object* v_name_4779_; lean_object* v_levelParams_4780_; lean_object* v_type_4781_; lean_object* v___x_4782_; 
v_toConstantVal_4777_ = lean_ctor_get(v_val_4773_, 0);
lean_inc_ref(v_toConstantVal_4777_);
v_isUnsafe_4778_ = lean_ctor_get_uint8(v_val_4773_, sizeof(void*)*1);
lean_dec_ref(v_val_4773_);
v_name_4779_ = lean_ctor_get(v_toConstantVal_4777_, 0);
lean_inc(v_name_4779_);
v_levelParams_4780_ = lean_ctor_get(v_toConstantVal_4777_, 1);
lean_inc(v_levelParams_4780_);
v_type_4781_ = lean_ctor_get(v_toConstantVal_4777_, 2);
lean_inc_ref_n(v_type_4781_, 2);
lean_dec_ref(v_toConstantVal_4777_);
v___x_4782_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4781_, v___y_4644_, v___x_4772_);
if (lean_obj_tag(v___x_4782_) == 0)
{
lean_object* v_a_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4876_; 
v_a_4783_ = lean_ctor_get(v___x_4782_, 0);
v_isSharedCheck_4876_ = !lean_is_exclusive(v___x_4782_);
if (v_isSharedCheck_4876_ == 0)
{
v___x_4785_ = v___x_4782_;
v_isShared_4786_ = v_isSharedCheck_4876_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_a_4783_);
lean_dec(v___x_4782_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4876_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v_snd_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4874_; 
v_snd_4787_ = lean_ctor_get(v_a_4783_, 1);
v_isSharedCheck_4874_ = !lean_is_exclusive(v_a_4783_);
if (v_isSharedCheck_4874_ == 0)
{
lean_object* v_unused_4875_; 
v_unused_4875_ = lean_ctor_get(v_a_4783_, 0);
lean_dec(v_unused_4875_);
v___x_4789_ = v_a_4783_;
v_isShared_4790_ = v_isSharedCheck_4874_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_snd_4787_);
lean_dec(v_a_4783_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4874_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4791_; 
v___x_4791_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4779_, v___y_4644_, v_snd_4787_);
if (lean_obj_tag(v___x_4791_) == 0)
{
lean_object* v_a_4792_; lean_object* v_fst_4793_; lean_object* v_snd_4794_; lean_object* v___x_4796_; uint8_t v_isShared_4797_; uint8_t v_isSharedCheck_4865_; 
v_a_4792_ = lean_ctor_get(v___x_4791_, 0);
lean_inc(v_a_4792_);
lean_dec_ref_known(v___x_4791_, 1);
v_fst_4793_ = lean_ctor_get(v_a_4792_, 0);
v_snd_4794_ = lean_ctor_get(v_a_4792_, 1);
v_isSharedCheck_4865_ = !lean_is_exclusive(v_a_4792_);
if (v_isSharedCheck_4865_ == 0)
{
v___x_4796_ = v_a_4792_;
v_isShared_4797_ = v_isSharedCheck_4865_;
goto v_resetjp_4795_;
}
else
{
lean_inc(v_snd_4794_);
lean_inc(v_fst_4793_);
lean_dec(v_a_4792_);
v___x_4796_ = lean_box(0);
v_isShared_4797_ = v_isSharedCheck_4865_;
goto v_resetjp_4795_;
}
v_resetjp_4795_:
{
lean_object* v___x_4798_; 
v___x_4798_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4780_, v___y_4644_, v_snd_4794_);
if (lean_obj_tag(v___x_4798_) == 0)
{
lean_object* v_a_4799_; lean_object* v_fst_4800_; lean_object* v_snd_4801_; lean_object* v___x_4803_; uint8_t v_isShared_4804_; uint8_t v_isSharedCheck_4856_; 
v_a_4799_ = lean_ctor_get(v___x_4798_, 0);
lean_inc(v_a_4799_);
lean_dec_ref_known(v___x_4798_, 1);
v_fst_4800_ = lean_ctor_get(v_a_4799_, 0);
v_snd_4801_ = lean_ctor_get(v_a_4799_, 1);
v_isSharedCheck_4856_ = !lean_is_exclusive(v_a_4799_);
if (v_isSharedCheck_4856_ == 0)
{
v___x_4803_ = v_a_4799_;
v_isShared_4804_ = v_isSharedCheck_4856_;
goto v_resetjp_4802_;
}
else
{
lean_inc(v_snd_4801_);
lean_inc(v_fst_4800_);
lean_dec(v_a_4799_);
v___x_4803_ = lean_box(0);
v_isShared_4804_ = v_isSharedCheck_4856_;
goto v_resetjp_4802_;
}
v_resetjp_4802_:
{
lean_object* v___x_4805_; 
v___x_4805_ = l_LeanExport_dumpExpr(v_type_4781_, v___y_4644_, v_snd_4801_);
if (lean_obj_tag(v___x_4805_) == 0)
{
lean_object* v_a_4806_; lean_object* v_fst_4807_; lean_object* v_snd_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4847_; 
v_a_4806_ = lean_ctor_get(v___x_4805_, 0);
lean_inc(v_a_4806_);
lean_dec_ref_known(v___x_4805_, 1);
v_fst_4807_ = lean_ctor_get(v_a_4806_, 0);
v_snd_4808_ = lean_ctor_get(v_a_4806_, 1);
v_isSharedCheck_4847_ = !lean_is_exclusive(v_a_4806_);
if (v_isSharedCheck_4847_ == 0)
{
v___x_4810_ = v_a_4806_;
v_isShared_4811_ = v_isSharedCheck_4847_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_snd_4808_);
lean_inc(v_fst_4807_);
lean_dec(v_a_4806_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4847_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4816_; 
v___x_4812_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__3));
v___x_4813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4814_ = l_Lean_JsonNumber_fromNat(v_fst_4793_);
if (v_isShared_4786_ == 0)
{
lean_ctor_set_tag(v___x_4785_, 2);
lean_ctor_set(v___x_4785_, 0, v___x_4814_);
v___x_4816_ = v___x_4785_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v___x_4814_);
v___x_4816_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
lean_object* v___x_4818_; 
if (v_isShared_4811_ == 0)
{
lean_ctor_set(v___x_4810_, 1, v___x_4816_);
lean_ctor_set(v___x_4810_, 0, v___x_4813_);
v___x_4818_ = v___x_4810_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v___x_4813_);
lean_ctor_set(v_reuseFailAlloc_4845_, 1, v___x_4816_);
v___x_4818_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
lean_object* v___x_4819_; lean_object* v___x_4821_; 
v___x_4819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4804_ == 0)
{
lean_ctor_set(v___x_4803_, 1, v_fst_4800_);
lean_ctor_set(v___x_4803_, 0, v___x_4819_);
v___x_4821_ = v___x_4803_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v___x_4819_);
lean_ctor_set(v_reuseFailAlloc_4844_, 1, v_fst_4800_);
v___x_4821_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4825_; 
v___x_4822_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4823_ = l_Lean_JsonNumber_fromNat(v_fst_4807_);
if (v_isShared_4776_ == 0)
{
lean_ctor_set_tag(v___x_4775_, 2);
lean_ctor_set(v___x_4775_, 0, v___x_4823_);
v___x_4825_ = v___x_4775_;
goto v_reusejp_4824_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v___x_4823_);
v___x_4825_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4824_;
}
v_reusejp_4824_:
{
lean_object* v___x_4827_; 
if (v_isShared_4797_ == 0)
{
lean_ctor_set(v___x_4796_, 1, v___x_4825_);
lean_ctor_set(v___x_4796_, 0, v___x_4822_);
v___x_4827_ = v___x_4796_;
goto v_reusejp_4826_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v___x_4822_);
lean_ctor_set(v_reuseFailAlloc_4842_, 1, v___x_4825_);
v___x_4827_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4826_;
}
v_reusejp_4826_:
{
lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4831_; 
v___x_4828_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_4829_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4829_, 0, v_isUnsafe_4778_);
if (v_isShared_4790_ == 0)
{
lean_ctor_set(v___x_4789_, 1, v___x_4829_);
lean_ctor_set(v___x_4789_, 0, v___x_4828_);
v___x_4831_ = v___x_4789_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v___x_4828_);
lean_ctor_set(v_reuseFailAlloc_4841_, 1, v___x_4829_);
v___x_4831_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
v___x_4832_ = lean_box(0);
v___x_4833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4831_);
lean_ctor_set(v___x_4833_, 1, v___x_4832_);
v___x_4834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4834_, 0, v___x_4827_);
lean_ctor_set(v___x_4834_, 1, v___x_4833_);
v___x_4835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4821_);
lean_ctor_set(v___x_4835_, 1, v___x_4834_);
v___x_4836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4836_, 0, v___x_4818_);
lean_ctor_set(v___x_4836_, 1, v___x_4835_);
v___x_4837_ = l_Lean_Json_mkObj(v___x_4836_);
lean_dec_ref_known(v___x_4836_, 2);
v___x_4838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4812_);
lean_ctor_set(v___x_4838_, 1, v___x_4837_);
v___x_4839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4839_, 0, v___x_4838_);
lean_ctor_set(v___x_4839_, 1, v___x_4832_);
v___x_4840_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4839_, v_snd_4808_);
lean_dec_ref_known(v___x_4839_, 2);
return v___x_4840_;
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
lean_object* v_a_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4855_; 
lean_del_object(v___x_4803_);
lean_dec(v_fst_4800_);
lean_del_object(v___x_4796_);
lean_dec(v_fst_4793_);
lean_del_object(v___x_4789_);
lean_del_object(v___x_4785_);
lean_del_object(v___x_4775_);
v_a_4848_ = lean_ctor_get(v___x_4805_, 0);
v_isSharedCheck_4855_ = !lean_is_exclusive(v___x_4805_);
if (v_isSharedCheck_4855_ == 0)
{
v___x_4850_ = v___x_4805_;
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_a_4848_);
lean_dec(v___x_4805_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
lean_object* v___x_4853_; 
if (v_isShared_4851_ == 0)
{
v___x_4853_ = v___x_4850_;
goto v_reusejp_4852_;
}
else
{
lean_object* v_reuseFailAlloc_4854_; 
v_reuseFailAlloc_4854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4854_, 0, v_a_4848_);
v___x_4853_ = v_reuseFailAlloc_4854_;
goto v_reusejp_4852_;
}
v_reusejp_4852_:
{
return v___x_4853_;
}
}
}
}
}
else
{
lean_object* v_a_4857_; lean_object* v___x_4859_; uint8_t v_isShared_4860_; uint8_t v_isSharedCheck_4864_; 
lean_del_object(v___x_4796_);
lean_dec(v_fst_4793_);
lean_del_object(v___x_4789_);
lean_del_object(v___x_4785_);
lean_dec_ref(v_type_4781_);
lean_del_object(v___x_4775_);
v_a_4857_ = lean_ctor_get(v___x_4798_, 0);
v_isSharedCheck_4864_ = !lean_is_exclusive(v___x_4798_);
if (v_isSharedCheck_4864_ == 0)
{
v___x_4859_ = v___x_4798_;
v_isShared_4860_ = v_isSharedCheck_4864_;
goto v_resetjp_4858_;
}
else
{
lean_inc(v_a_4857_);
lean_dec(v___x_4798_);
v___x_4859_ = lean_box(0);
v_isShared_4860_ = v_isSharedCheck_4864_;
goto v_resetjp_4858_;
}
v_resetjp_4858_:
{
lean_object* v___x_4862_; 
if (v_isShared_4860_ == 0)
{
v___x_4862_ = v___x_4859_;
goto v_reusejp_4861_;
}
else
{
lean_object* v_reuseFailAlloc_4863_; 
v_reuseFailAlloc_4863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4863_, 0, v_a_4857_);
v___x_4862_ = v_reuseFailAlloc_4863_;
goto v_reusejp_4861_;
}
v_reusejp_4861_:
{
return v___x_4862_;
}
}
}
}
}
else
{
lean_object* v_a_4866_; lean_object* v___x_4868_; uint8_t v_isShared_4869_; uint8_t v_isSharedCheck_4873_; 
lean_del_object(v___x_4789_);
lean_del_object(v___x_4785_);
lean_dec_ref(v_type_4781_);
lean_dec(v_levelParams_4780_);
lean_del_object(v___x_4775_);
v_a_4866_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4873_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4873_ == 0)
{
v___x_4868_ = v___x_4791_;
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
else
{
lean_inc(v_a_4866_);
lean_dec(v___x_4791_);
v___x_4868_ = lean_box(0);
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
v_resetjp_4867_:
{
lean_object* v___x_4871_; 
if (v_isShared_4869_ == 0)
{
v___x_4871_ = v___x_4868_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v_a_4866_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_type_4781_);
lean_dec(v_levelParams_4780_);
lean_dec(v_name_4779_);
lean_del_object(v___x_4775_);
return v___x_4782_;
}
}
}
case 1:
{
lean_object* v_val_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_5049_; 
v_val_4878_ = lean_ctor_get(v_val_4755_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v_val_4755_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_4880_ = v_val_4755_;
v_isShared_4881_ = v_isSharedCheck_5049_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_val_4878_);
lean_dec(v_val_4755_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_5049_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v_toConstantVal_4882_; lean_object* v_value_4883_; lean_object* v_hints_4884_; uint8_t v_safety_4885_; lean_object* v_all_4886_; lean_object* v_name_4887_; lean_object* v_levelParams_4888_; lean_object* v_type_4889_; lean_object* v___x_4890_; 
v_toConstantVal_4882_ = lean_ctor_get(v_val_4878_, 0);
lean_inc_ref(v_toConstantVal_4882_);
v_value_4883_ = lean_ctor_get(v_val_4878_, 1);
lean_inc_ref(v_value_4883_);
v_hints_4884_ = lean_ctor_get(v_val_4878_, 2);
lean_inc(v_hints_4884_);
v_safety_4885_ = lean_ctor_get_uint8(v_val_4878_, sizeof(void*)*4);
v_all_4886_ = lean_ctor_get(v_val_4878_, 3);
lean_inc(v_all_4886_);
lean_dec_ref(v_val_4878_);
v_name_4887_ = lean_ctor_get(v_toConstantVal_4882_, 0);
lean_inc(v_name_4887_);
v_levelParams_4888_ = lean_ctor_get(v_toConstantVal_4882_, 1);
lean_inc(v_levelParams_4888_);
v_type_4889_ = lean_ctor_get(v_toConstantVal_4882_, 2);
lean_inc_ref_n(v_type_4889_, 2);
lean_dec_ref(v_toConstantVal_4882_);
v___x_4890_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4889_, v___y_4644_, v___x_4772_);
if (lean_obj_tag(v___x_4890_) == 0)
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_5048_; 
v_a_4891_ = lean_ctor_get(v___x_4890_, 0);
v_isSharedCheck_5048_ = !lean_is_exclusive(v___x_4890_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_4893_ = v___x_4890_;
v_isShared_4894_ = v_isSharedCheck_5048_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v___x_4890_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_5048_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v_snd_4895_; lean_object* v___x_4897_; uint8_t v_isShared_4898_; uint8_t v_isSharedCheck_5046_; 
v_snd_4895_ = lean_ctor_get(v_a_4891_, 1);
v_isSharedCheck_5046_ = !lean_is_exclusive(v_a_4891_);
if (v_isSharedCheck_5046_ == 0)
{
lean_object* v_unused_5047_; 
v_unused_5047_ = lean_ctor_get(v_a_4891_, 0);
lean_dec(v_unused_5047_);
v___x_4897_ = v_a_4891_;
v_isShared_4898_ = v_isSharedCheck_5046_;
goto v_resetjp_4896_;
}
else
{
lean_inc(v_snd_4895_);
lean_dec(v_a_4891_);
v___x_4897_ = lean_box(0);
v_isShared_4898_ = v_isSharedCheck_5046_;
goto v_resetjp_4896_;
}
v_resetjp_4896_:
{
lean_object* v___x_4899_; 
lean_inc_ref(v_value_4883_);
v___x_4899_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_4883_, v___y_4644_, v_snd_4895_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_5045_; 
v_a_4900_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_5045_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_5045_ == 0)
{
v___x_4902_ = v___x_4899_;
v_isShared_4903_ = v_isSharedCheck_5045_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v___x_4899_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_5045_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v_snd_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_5043_; 
v_snd_4904_ = lean_ctor_get(v_a_4900_, 1);
v_isSharedCheck_5043_ = !lean_is_exclusive(v_a_4900_);
if (v_isSharedCheck_5043_ == 0)
{
lean_object* v_unused_5044_; 
v_unused_5044_ = lean_ctor_get(v_a_4900_, 0);
lean_dec(v_unused_5044_);
v___x_4906_ = v_a_4900_;
v_isShared_4907_ = v_isSharedCheck_5043_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_snd_4904_);
lean_dec(v_a_4900_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_5043_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4908_; 
v___x_4908_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4887_, v___y_4644_, v_snd_4904_);
if (lean_obj_tag(v___x_4908_) == 0)
{
lean_object* v_a_4909_; lean_object* v_fst_4910_; lean_object* v_snd_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_5034_; 
v_a_4909_ = lean_ctor_get(v___x_4908_, 0);
lean_inc(v_a_4909_);
lean_dec_ref_known(v___x_4908_, 1);
v_fst_4910_ = lean_ctor_get(v_a_4909_, 0);
v_snd_4911_ = lean_ctor_get(v_a_4909_, 1);
v_isSharedCheck_5034_ = !lean_is_exclusive(v_a_4909_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_4913_ = v_a_4909_;
v_isShared_4914_ = v_isSharedCheck_5034_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_snd_4911_);
lean_inc(v_fst_4910_);
lean_dec(v_a_4909_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_5034_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4915_; 
v___x_4915_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4888_, v___y_4644_, v_snd_4911_);
if (lean_obj_tag(v___x_4915_) == 0)
{
lean_object* v_a_4916_; lean_object* v_fst_4917_; lean_object* v_snd_4918_; lean_object* v___x_4920_; uint8_t v_isShared_4921_; uint8_t v_isSharedCheck_5025_; 
v_a_4916_ = lean_ctor_get(v___x_4915_, 0);
lean_inc(v_a_4916_);
lean_dec_ref_known(v___x_4915_, 1);
v_fst_4917_ = lean_ctor_get(v_a_4916_, 0);
v_snd_4918_ = lean_ctor_get(v_a_4916_, 1);
v_isSharedCheck_5025_ = !lean_is_exclusive(v_a_4916_);
if (v_isSharedCheck_5025_ == 0)
{
v___x_4920_ = v_a_4916_;
v_isShared_4921_ = v_isSharedCheck_5025_;
goto v_resetjp_4919_;
}
else
{
lean_inc(v_snd_4918_);
lean_inc(v_fst_4917_);
lean_dec(v_a_4916_);
v___x_4920_ = lean_box(0);
v_isShared_4921_ = v_isSharedCheck_5025_;
goto v_resetjp_4919_;
}
v_resetjp_4919_:
{
lean_object* v___x_4922_; 
v___x_4922_ = l_LeanExport_dumpExpr(v_type_4889_, v___y_4644_, v_snd_4918_);
if (lean_obj_tag(v___x_4922_) == 0)
{
lean_object* v_a_4923_; lean_object* v_fst_4924_; lean_object* v_snd_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_5016_; 
v_a_4923_ = lean_ctor_get(v___x_4922_, 0);
lean_inc(v_a_4923_);
lean_dec_ref_known(v___x_4922_, 1);
v_fst_4924_ = lean_ctor_get(v_a_4923_, 0);
v_snd_4925_ = lean_ctor_get(v_a_4923_, 1);
v_isSharedCheck_5016_ = !lean_is_exclusive(v_a_4923_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_4927_ = v_a_4923_;
v_isShared_4928_ = v_isSharedCheck_5016_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_snd_4925_);
lean_inc(v_fst_4924_);
lean_dec(v_a_4923_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_5016_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4929_; 
v___x_4929_ = l_LeanExport_dumpExpr(v_value_4883_, v___y_4644_, v_snd_4925_);
if (lean_obj_tag(v___x_4929_) == 0)
{
lean_object* v_a_4930_; lean_object* v_fst_4931_; lean_object* v_snd_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_5007_; 
v_a_4930_ = lean_ctor_get(v___x_4929_, 0);
lean_inc(v_a_4930_);
lean_dec_ref_known(v___x_4929_, 1);
v_fst_4931_ = lean_ctor_get(v_a_4930_, 0);
v_snd_4932_ = lean_ctor_get(v_a_4930_, 1);
v_isSharedCheck_5007_ = !lean_is_exclusive(v_a_4930_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_4934_ = v_a_4930_;
v_isShared_4935_ = v_isSharedCheck_5007_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_snd_4932_);
lean_inc(v_fst_4931_);
lean_dec(v_a_4930_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_5007_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4936_; 
v___x_4936_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4886_, v___y_4644_, v_snd_4932_);
if (lean_obj_tag(v___x_4936_) == 0)
{
lean_object* v_a_4937_; lean_object* v_fst_4938_; lean_object* v_snd_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4998_; 
v_a_4937_ = lean_ctor_get(v___x_4936_, 0);
lean_inc(v_a_4937_);
lean_dec_ref_known(v___x_4936_, 1);
v_fst_4938_ = lean_ctor_get(v_a_4937_, 0);
v_snd_4939_ = lean_ctor_get(v_a_4937_, 1);
v_isSharedCheck_4998_ = !lean_is_exclusive(v_a_4937_);
if (v_isSharedCheck_4998_ == 0)
{
v___x_4941_ = v_a_4937_;
v_isShared_4942_ = v_isSharedCheck_4998_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_snd_4939_);
lean_inc(v_fst_4938_);
lean_dec(v_a_4937_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4998_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4947_; 
v___x_4943_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__4));
v___x_4944_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4945_ = l_Lean_JsonNumber_fromNat(v_fst_4910_);
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 2);
lean_ctor_set(v___x_4902_, 0, v___x_4945_);
v___x_4947_ = v___x_4902_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v___x_4945_);
v___x_4947_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
lean_object* v___x_4949_; 
if (v_isShared_4942_ == 0)
{
lean_ctor_set(v___x_4941_, 1, v___x_4947_);
lean_ctor_set(v___x_4941_, 0, v___x_4944_);
v___x_4949_ = v___x_4941_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v___x_4944_);
lean_ctor_set(v_reuseFailAlloc_4996_, 1, v___x_4947_);
v___x_4949_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
lean_object* v___x_4950_; lean_object* v___x_4952_; 
v___x_4950_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4935_ == 0)
{
lean_ctor_set(v___x_4934_, 1, v_fst_4917_);
lean_ctor_set(v___x_4934_, 0, v___x_4950_);
v___x_4952_ = v___x_4934_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v___x_4950_);
lean_ctor_set(v_reuseFailAlloc_4995_, 1, v_fst_4917_);
v___x_4952_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4956_; 
v___x_4953_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4954_ = l_Lean_JsonNumber_fromNat(v_fst_4924_);
if (v_isShared_4894_ == 0)
{
lean_ctor_set_tag(v___x_4893_, 2);
lean_ctor_set(v___x_4893_, 0, v___x_4954_);
v___x_4956_ = v___x_4893_;
goto v_reusejp_4955_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v___x_4954_);
v___x_4956_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4955_;
}
v_reusejp_4955_:
{
lean_object* v___x_4958_; 
if (v_isShared_4928_ == 0)
{
lean_ctor_set(v___x_4927_, 1, v___x_4956_);
lean_ctor_set(v___x_4927_, 0, v___x_4953_);
v___x_4958_ = v___x_4927_;
goto v_reusejp_4957_;
}
else
{
lean_object* v_reuseFailAlloc_4993_; 
v_reuseFailAlloc_4993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4993_, 0, v___x_4953_);
lean_ctor_set(v_reuseFailAlloc_4993_, 1, v___x_4956_);
v___x_4958_ = v_reuseFailAlloc_4993_;
goto v_reusejp_4957_;
}
v_reusejp_4957_:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4962_; 
v___x_4959_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_4960_ = l_Lean_JsonNumber_fromNat(v_fst_4931_);
if (v_isShared_4881_ == 0)
{
lean_ctor_set_tag(v___x_4880_, 2);
lean_ctor_set(v___x_4880_, 0, v___x_4960_);
v___x_4962_ = v___x_4880_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v___x_4960_);
v___x_4962_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
lean_object* v___x_4964_; 
if (v_isShared_4921_ == 0)
{
lean_ctor_set(v___x_4920_, 1, v___x_4962_);
lean_ctor_set(v___x_4920_, 0, v___x_4959_);
v___x_4964_ = v___x_4920_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4991_; 
v_reuseFailAlloc_4991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4991_, 0, v___x_4959_);
lean_ctor_set(v_reuseFailAlloc_4991_, 1, v___x_4962_);
v___x_4964_ = v_reuseFailAlloc_4991_;
goto v_reusejp_4963_;
}
v_reusejp_4963_:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4968_; 
v___x_4965_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__5));
v___x_4966_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_hints_4884_);
lean_dec(v_hints_4884_);
if (v_isShared_4914_ == 0)
{
lean_ctor_set(v___x_4913_, 1, v___x_4966_);
lean_ctor_set(v___x_4913_, 0, v___x_4965_);
v___x_4968_ = v___x_4913_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4990_; 
v_reuseFailAlloc_4990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4990_, 0, v___x_4965_);
lean_ctor_set(v_reuseFailAlloc_4990_, 1, v___x_4966_);
v___x_4968_ = v_reuseFailAlloc_4990_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4972_; 
v___x_4969_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__6));
v___x_4970_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_safety_4885_);
if (v_isShared_4907_ == 0)
{
lean_ctor_set(v___x_4906_, 1, v___x_4970_);
lean_ctor_set(v___x_4906_, 0, v___x_4969_);
v___x_4972_ = v___x_4906_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v___x_4969_);
lean_ctor_set(v_reuseFailAlloc_4989_, 1, v___x_4970_);
v___x_4972_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
lean_object* v___x_4973_; lean_object* v___x_4975_; 
v___x_4973_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_4898_ == 0)
{
lean_ctor_set(v___x_4897_, 1, v_fst_4938_);
lean_ctor_set(v___x_4897_, 0, v___x_4973_);
v___x_4975_ = v___x_4897_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4988_; 
v_reuseFailAlloc_4988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4988_, 0, v___x_4973_);
lean_ctor_set(v_reuseFailAlloc_4988_, 1, v_fst_4938_);
v___x_4975_ = v_reuseFailAlloc_4988_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; 
v___x_4976_ = lean_box(0);
v___x_4977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4975_);
lean_ctor_set(v___x_4977_, 1, v___x_4976_);
v___x_4978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4972_);
lean_ctor_set(v___x_4978_, 1, v___x_4977_);
v___x_4979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4968_);
lean_ctor_set(v___x_4979_, 1, v___x_4978_);
v___x_4980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4964_);
lean_ctor_set(v___x_4980_, 1, v___x_4979_);
v___x_4981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4981_, 0, v___x_4958_);
lean_ctor_set(v___x_4981_, 1, v___x_4980_);
v___x_4982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4982_, 0, v___x_4952_);
lean_ctor_set(v___x_4982_, 1, v___x_4981_);
v___x_4983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4949_);
lean_ctor_set(v___x_4983_, 1, v___x_4982_);
v___x_4984_ = l_Lean_Json_mkObj(v___x_4983_);
lean_dec_ref_known(v___x_4983_, 2);
v___x_4985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4985_, 0, v___x_4943_);
lean_ctor_set(v___x_4985_, 1, v___x_4984_);
v___x_4986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4986_, 0, v___x_4985_);
lean_ctor_set(v___x_4986_, 1, v___x_4976_);
v___x_4987_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4986_, v_snd_4939_);
lean_dec_ref_known(v___x_4986_, 2);
return v___x_4987_;
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
lean_object* v_a_4999_; lean_object* v___x_5001_; uint8_t v_isShared_5002_; uint8_t v_isSharedCheck_5006_; 
lean_del_object(v___x_4934_);
lean_dec(v_fst_4931_);
lean_del_object(v___x_4927_);
lean_dec(v_fst_4924_);
lean_del_object(v___x_4920_);
lean_dec(v_fst_4917_);
lean_del_object(v___x_4913_);
lean_dec(v_fst_4910_);
lean_del_object(v___x_4906_);
lean_del_object(v___x_4902_);
lean_del_object(v___x_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_hints_4884_);
lean_del_object(v___x_4880_);
v_a_4999_ = lean_ctor_get(v___x_4936_, 0);
v_isSharedCheck_5006_ = !lean_is_exclusive(v___x_4936_);
if (v_isSharedCheck_5006_ == 0)
{
v___x_5001_ = v___x_4936_;
v_isShared_5002_ = v_isSharedCheck_5006_;
goto v_resetjp_5000_;
}
else
{
lean_inc(v_a_4999_);
lean_dec(v___x_4936_);
v___x_5001_ = lean_box(0);
v_isShared_5002_ = v_isSharedCheck_5006_;
goto v_resetjp_5000_;
}
v_resetjp_5000_:
{
lean_object* v___x_5004_; 
if (v_isShared_5002_ == 0)
{
v___x_5004_ = v___x_5001_;
goto v_reusejp_5003_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v_a_4999_);
v___x_5004_ = v_reuseFailAlloc_5005_;
goto v_reusejp_5003_;
}
v_reusejp_5003_:
{
return v___x_5004_;
}
}
}
}
}
else
{
lean_object* v_a_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5015_; 
lean_del_object(v___x_4927_);
lean_dec(v_fst_4924_);
lean_del_object(v___x_4920_);
lean_dec(v_fst_4917_);
lean_del_object(v___x_4913_);
lean_dec(v_fst_4910_);
lean_del_object(v___x_4906_);
lean_del_object(v___x_4902_);
lean_del_object(v___x_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_all_4886_);
lean_dec(v_hints_4884_);
lean_del_object(v___x_4880_);
v_a_5008_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5010_ = v___x_4929_;
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
else
{
lean_inc(v_a_5008_);
lean_dec(v___x_4929_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5013_; 
if (v_isShared_5011_ == 0)
{
v___x_5013_ = v___x_5010_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_a_5008_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
}
}
else
{
lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5024_; 
lean_del_object(v___x_4920_);
lean_dec(v_fst_4917_);
lean_del_object(v___x_4913_);
lean_dec(v_fst_4910_);
lean_del_object(v___x_4906_);
lean_del_object(v___x_4902_);
lean_del_object(v___x_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_all_4886_);
lean_dec(v_hints_4884_);
lean_dec_ref(v_value_4883_);
lean_del_object(v___x_4880_);
v_a_5017_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_5019_ = v___x_4922_;
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_4922_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5022_; 
if (v_isShared_5020_ == 0)
{
v___x_5022_ = v___x_5019_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5023_; 
v_reuseFailAlloc_5023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v_a_5017_);
v___x_5022_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
return v___x_5022_;
}
}
}
}
}
else
{
lean_object* v_a_5026_; lean_object* v___x_5028_; uint8_t v_isShared_5029_; uint8_t v_isSharedCheck_5033_; 
lean_del_object(v___x_4913_);
lean_dec(v_fst_4910_);
lean_del_object(v___x_4906_);
lean_del_object(v___x_4902_);
lean_del_object(v___x_4897_);
lean_del_object(v___x_4893_);
lean_dec_ref(v_type_4889_);
lean_dec(v_all_4886_);
lean_dec(v_hints_4884_);
lean_dec_ref(v_value_4883_);
lean_del_object(v___x_4880_);
v_a_5026_ = lean_ctor_get(v___x_4915_, 0);
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_4915_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5028_ = v___x_4915_;
v_isShared_5029_ = v_isSharedCheck_5033_;
goto v_resetjp_5027_;
}
else
{
lean_inc(v_a_5026_);
lean_dec(v___x_4915_);
v___x_5028_ = lean_box(0);
v_isShared_5029_ = v_isSharedCheck_5033_;
goto v_resetjp_5027_;
}
v_resetjp_5027_:
{
lean_object* v___x_5031_; 
if (v_isShared_5029_ == 0)
{
v___x_5031_ = v___x_5028_;
goto v_reusejp_5030_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v_a_5026_);
v___x_5031_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5030_;
}
v_reusejp_5030_:
{
return v___x_5031_;
}
}
}
}
}
else
{
lean_object* v_a_5035_; lean_object* v___x_5037_; uint8_t v_isShared_5038_; uint8_t v_isSharedCheck_5042_; 
lean_del_object(v___x_4906_);
lean_del_object(v___x_4902_);
lean_del_object(v___x_4897_);
lean_del_object(v___x_4893_);
lean_dec_ref(v_type_4889_);
lean_dec(v_levelParams_4888_);
lean_dec(v_all_4886_);
lean_dec(v_hints_4884_);
lean_dec_ref(v_value_4883_);
lean_del_object(v___x_4880_);
v_a_5035_ = lean_ctor_get(v___x_4908_, 0);
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_5042_ == 0)
{
v___x_5037_ = v___x_4908_;
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
else
{
lean_inc(v_a_5035_);
lean_dec(v___x_4908_);
v___x_5037_ = lean_box(0);
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
v_resetjp_5036_:
{
lean_object* v___x_5040_; 
if (v_isShared_5038_ == 0)
{
v___x_5040_ = v___x_5037_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v_a_5035_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
return v___x_5040_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4897_);
lean_del_object(v___x_4893_);
lean_dec_ref(v_type_4889_);
lean_dec(v_levelParams_4888_);
lean_dec(v_name_4887_);
lean_dec(v_all_4886_);
lean_dec(v_hints_4884_);
lean_dec_ref(v_value_4883_);
lean_del_object(v___x_4880_);
return v___x_4899_;
}
}
}
}
else
{
lean_dec_ref(v_type_4889_);
lean_dec(v_levelParams_4888_);
lean_dec(v_name_4887_);
lean_dec(v_all_4886_);
lean_dec(v_hints_4884_);
lean_dec_ref(v_value_4883_);
lean_del_object(v___x_4880_);
return v___x_4890_;
}
}
}
case 2:
{
lean_object* v_val_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5211_; 
v_val_5050_ = lean_ctor_get(v_val_4755_, 0);
v_isSharedCheck_5211_ = !lean_is_exclusive(v_val_4755_);
if (v_isSharedCheck_5211_ == 0)
{
v___x_5052_ = v_val_4755_;
v_isShared_5053_ = v_isSharedCheck_5211_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_val_5050_);
lean_dec(v_val_4755_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5211_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v_toConstantVal_5054_; lean_object* v_value_5055_; lean_object* v_all_5056_; lean_object* v_name_5057_; lean_object* v_levelParams_5058_; lean_object* v_type_5059_; lean_object* v___x_5060_; 
v_toConstantVal_5054_ = lean_ctor_get(v_val_5050_, 0);
lean_inc_ref(v_toConstantVal_5054_);
v_value_5055_ = lean_ctor_get(v_val_5050_, 1);
lean_inc_ref(v_value_5055_);
v_all_5056_ = lean_ctor_get(v_val_5050_, 2);
lean_inc(v_all_5056_);
lean_dec_ref(v_val_5050_);
v_name_5057_ = lean_ctor_get(v_toConstantVal_5054_, 0);
lean_inc(v_name_5057_);
v_levelParams_5058_ = lean_ctor_get(v_toConstantVal_5054_, 1);
lean_inc(v_levelParams_5058_);
v_type_5059_ = lean_ctor_get(v_toConstantVal_5054_, 2);
lean_inc_ref_n(v_type_5059_, 2);
lean_dec_ref(v_toConstantVal_5054_);
v___x_5060_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5059_, v___y_4644_, v___x_4772_);
if (lean_obj_tag(v___x_5060_) == 0)
{
lean_object* v_a_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5210_; 
v_a_5061_ = lean_ctor_get(v___x_5060_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___x_5060_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5063_ = v___x_5060_;
v_isShared_5064_ = v_isSharedCheck_5210_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_a_5061_);
lean_dec(v___x_5060_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5210_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v_snd_5065_; lean_object* v___x_5067_; uint8_t v_isShared_5068_; uint8_t v_isSharedCheck_5208_; 
v_snd_5065_ = lean_ctor_get(v_a_5061_, 1);
v_isSharedCheck_5208_ = !lean_is_exclusive(v_a_5061_);
if (v_isSharedCheck_5208_ == 0)
{
lean_object* v_unused_5209_; 
v_unused_5209_ = lean_ctor_get(v_a_5061_, 0);
lean_dec(v_unused_5209_);
v___x_5067_ = v_a_5061_;
v_isShared_5068_ = v_isSharedCheck_5208_;
goto v_resetjp_5066_;
}
else
{
lean_inc(v_snd_5065_);
lean_dec(v_a_5061_);
v___x_5067_ = lean_box(0);
v_isShared_5068_ = v_isSharedCheck_5208_;
goto v_resetjp_5066_;
}
v_resetjp_5066_:
{
lean_object* v___x_5069_; 
lean_inc_ref(v_value_5055_);
v___x_5069_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5055_, v___y_4644_, v_snd_5065_);
if (lean_obj_tag(v___x_5069_) == 0)
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5207_; 
v_a_5070_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5072_ = v___x_5069_;
v_isShared_5073_ = v_isSharedCheck_5207_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5069_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5207_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v_snd_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5205_; 
v_snd_5074_ = lean_ctor_get(v_a_5070_, 1);
v_isSharedCheck_5205_ = !lean_is_exclusive(v_a_5070_);
if (v_isSharedCheck_5205_ == 0)
{
lean_object* v_unused_5206_; 
v_unused_5206_ = lean_ctor_get(v_a_5070_, 0);
lean_dec(v_unused_5206_);
v___x_5076_ = v_a_5070_;
v_isShared_5077_ = v_isSharedCheck_5205_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_snd_5074_);
lean_dec(v_a_5070_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5205_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5078_; 
v___x_5078_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5057_, v___y_4644_, v_snd_5074_);
if (lean_obj_tag(v___x_5078_) == 0)
{
lean_object* v_a_5079_; lean_object* v_fst_5080_; lean_object* v_snd_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5196_; 
v_a_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc(v_a_5079_);
lean_dec_ref_known(v___x_5078_, 1);
v_fst_5080_ = lean_ctor_get(v_a_5079_, 0);
v_snd_5081_ = lean_ctor_get(v_a_5079_, 1);
v_isSharedCheck_5196_ = !lean_is_exclusive(v_a_5079_);
if (v_isSharedCheck_5196_ == 0)
{
v___x_5083_ = v_a_5079_;
v_isShared_5084_ = v_isSharedCheck_5196_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_snd_5081_);
lean_inc(v_fst_5080_);
lean_dec(v_a_5079_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5196_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
lean_object* v___x_5085_; 
v___x_5085_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5058_, v___y_4644_, v_snd_5081_);
if (lean_obj_tag(v___x_5085_) == 0)
{
lean_object* v_a_5086_; lean_object* v_fst_5087_; lean_object* v_snd_5088_; lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5187_; 
v_a_5086_ = lean_ctor_get(v___x_5085_, 0);
lean_inc(v_a_5086_);
lean_dec_ref_known(v___x_5085_, 1);
v_fst_5087_ = lean_ctor_get(v_a_5086_, 0);
v_snd_5088_ = lean_ctor_get(v_a_5086_, 1);
v_isSharedCheck_5187_ = !lean_is_exclusive(v_a_5086_);
if (v_isSharedCheck_5187_ == 0)
{
v___x_5090_ = v_a_5086_;
v_isShared_5091_ = v_isSharedCheck_5187_;
goto v_resetjp_5089_;
}
else
{
lean_inc(v_snd_5088_);
lean_inc(v_fst_5087_);
lean_dec(v_a_5086_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5187_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
lean_object* v___x_5092_; 
v___x_5092_ = l_LeanExport_dumpExpr(v_type_5059_, v___y_4644_, v_snd_5088_);
if (lean_obj_tag(v___x_5092_) == 0)
{
lean_object* v_a_5093_; lean_object* v_fst_5094_; lean_object* v_snd_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5178_; 
v_a_5093_ = lean_ctor_get(v___x_5092_, 0);
lean_inc(v_a_5093_);
lean_dec_ref_known(v___x_5092_, 1);
v_fst_5094_ = lean_ctor_get(v_a_5093_, 0);
v_snd_5095_ = lean_ctor_get(v_a_5093_, 1);
v_isSharedCheck_5178_ = !lean_is_exclusive(v_a_5093_);
if (v_isSharedCheck_5178_ == 0)
{
v___x_5097_ = v_a_5093_;
v_isShared_5098_ = v_isSharedCheck_5178_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_snd_5095_);
lean_inc(v_fst_5094_);
lean_dec(v_a_5093_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5178_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5099_; 
v___x_5099_ = l_LeanExport_dumpExpr(v_value_5055_, v___y_4644_, v_snd_5095_);
if (lean_obj_tag(v___x_5099_) == 0)
{
lean_object* v_a_5100_; lean_object* v_fst_5101_; lean_object* v_snd_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5169_; 
v_a_5100_ = lean_ctor_get(v___x_5099_, 0);
lean_inc(v_a_5100_);
lean_dec_ref_known(v___x_5099_, 1);
v_fst_5101_ = lean_ctor_get(v_a_5100_, 0);
v_snd_5102_ = lean_ctor_get(v_a_5100_, 1);
v_isSharedCheck_5169_ = !lean_is_exclusive(v_a_5100_);
if (v_isSharedCheck_5169_ == 0)
{
v___x_5104_ = v_a_5100_;
v_isShared_5105_ = v_isSharedCheck_5169_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_snd_5102_);
lean_inc(v_fst_5101_);
lean_dec(v_a_5100_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5169_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___x_5106_; 
v___x_5106_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5056_, v___y_4644_, v_snd_5102_);
if (lean_obj_tag(v___x_5106_) == 0)
{
lean_object* v_a_5107_; lean_object* v_fst_5108_; lean_object* v_snd_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5160_; 
v_a_5107_ = lean_ctor_get(v___x_5106_, 0);
lean_inc(v_a_5107_);
lean_dec_ref_known(v___x_5106_, 1);
v_fst_5108_ = lean_ctor_get(v_a_5107_, 0);
v_snd_5109_ = lean_ctor_get(v_a_5107_, 1);
v_isSharedCheck_5160_ = !lean_is_exclusive(v_a_5107_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5111_ = v_a_5107_;
v_isShared_5112_ = v_isSharedCheck_5160_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_snd_5109_);
lean_inc(v_fst_5108_);
lean_dec(v_a_5107_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5160_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5117_; 
v___x_5113_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__7));
v___x_5114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_5115_ = l_Lean_JsonNumber_fromNat(v_fst_5080_);
if (v_isShared_5073_ == 0)
{
lean_ctor_set_tag(v___x_5072_, 2);
lean_ctor_set(v___x_5072_, 0, v___x_5115_);
v___x_5117_ = v___x_5072_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v___x_5115_);
v___x_5117_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
lean_object* v___x_5119_; 
if (v_isShared_5112_ == 0)
{
lean_ctor_set(v___x_5111_, 1, v___x_5117_);
lean_ctor_set(v___x_5111_, 0, v___x_5114_);
v___x_5119_ = v___x_5111_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5158_; 
v_reuseFailAlloc_5158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5158_, 0, v___x_5114_);
lean_ctor_set(v_reuseFailAlloc_5158_, 1, v___x_5117_);
v___x_5119_ = v_reuseFailAlloc_5158_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
lean_object* v___x_5120_; lean_object* v___x_5122_; 
v___x_5120_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5105_ == 0)
{
lean_ctor_set(v___x_5104_, 1, v_fst_5087_);
lean_ctor_set(v___x_5104_, 0, v___x_5120_);
v___x_5122_ = v___x_5104_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v___x_5120_);
lean_ctor_set(v_reuseFailAlloc_5157_, 1, v_fst_5087_);
v___x_5122_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5126_; 
v___x_5123_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5124_ = l_Lean_JsonNumber_fromNat(v_fst_5094_);
if (v_isShared_5064_ == 0)
{
lean_ctor_set_tag(v___x_5063_, 2);
lean_ctor_set(v___x_5063_, 0, v___x_5124_);
v___x_5126_ = v___x_5063_;
goto v_reusejp_5125_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v___x_5124_);
v___x_5126_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5125_;
}
v_reusejp_5125_:
{
lean_object* v___x_5128_; 
if (v_isShared_5098_ == 0)
{
lean_ctor_set(v___x_5097_, 1, v___x_5126_);
lean_ctor_set(v___x_5097_, 0, v___x_5123_);
v___x_5128_ = v___x_5097_;
goto v_reusejp_5127_;
}
else
{
lean_object* v_reuseFailAlloc_5155_; 
v_reuseFailAlloc_5155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5155_, 0, v___x_5123_);
lean_ctor_set(v_reuseFailAlloc_5155_, 1, v___x_5126_);
v___x_5128_ = v_reuseFailAlloc_5155_;
goto v_reusejp_5127_;
}
v_reusejp_5127_:
{
lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5132_; 
v___x_5129_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5130_ = l_Lean_JsonNumber_fromNat(v_fst_5101_);
if (v_isShared_5053_ == 0)
{
lean_ctor_set(v___x_5052_, 0, v___x_5130_);
v___x_5132_ = v___x_5052_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5154_; 
v_reuseFailAlloc_5154_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5154_, 0, v___x_5130_);
v___x_5132_ = v_reuseFailAlloc_5154_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
lean_object* v___x_5134_; 
if (v_isShared_5091_ == 0)
{
lean_ctor_set(v___x_5090_, 1, v___x_5132_);
lean_ctor_set(v___x_5090_, 0, v___x_5129_);
v___x_5134_ = v___x_5090_;
goto v_reusejp_5133_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v___x_5129_);
lean_ctor_set(v_reuseFailAlloc_5153_, 1, v___x_5132_);
v___x_5134_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5133_;
}
v_reusejp_5133_:
{
lean_object* v___x_5135_; lean_object* v___x_5137_; 
v___x_5135_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_5084_ == 0)
{
lean_ctor_set(v___x_5083_, 1, v_fst_5108_);
lean_ctor_set(v___x_5083_, 0, v___x_5135_);
v___x_5137_ = v___x_5083_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5152_; 
v_reuseFailAlloc_5152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5152_, 0, v___x_5135_);
lean_ctor_set(v_reuseFailAlloc_5152_, 1, v_fst_5108_);
v___x_5137_ = v_reuseFailAlloc_5152_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
lean_object* v___x_5138_; lean_object* v___x_5140_; 
v___x_5138_ = lean_box(0);
if (v_isShared_5068_ == 0)
{
lean_ctor_set_tag(v___x_5067_, 1);
lean_ctor_set(v___x_5067_, 1, v___x_5138_);
lean_ctor_set(v___x_5067_, 0, v___x_5137_);
v___x_5140_ = v___x_5067_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5151_; 
v_reuseFailAlloc_5151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5151_, 0, v___x_5137_);
lean_ctor_set(v_reuseFailAlloc_5151_, 1, v___x_5138_);
v___x_5140_ = v_reuseFailAlloc_5151_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5147_; 
v___x_5141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5141_, 0, v___x_5134_);
lean_ctor_set(v___x_5141_, 1, v___x_5140_);
v___x_5142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5142_, 0, v___x_5128_);
lean_ctor_set(v___x_5142_, 1, v___x_5141_);
v___x_5143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5143_, 0, v___x_5122_);
lean_ctor_set(v___x_5143_, 1, v___x_5142_);
v___x_5144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5144_, 0, v___x_5119_);
lean_ctor_set(v___x_5144_, 1, v___x_5143_);
v___x_5145_ = l_Lean_Json_mkObj(v___x_5144_);
lean_dec_ref_known(v___x_5144_, 2);
if (v_isShared_5077_ == 0)
{
lean_ctor_set(v___x_5076_, 1, v___x_5145_);
lean_ctor_set(v___x_5076_, 0, v___x_5113_);
v___x_5147_ = v___x_5076_;
goto v_reusejp_5146_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v___x_5113_);
lean_ctor_set(v_reuseFailAlloc_5150_, 1, v___x_5145_);
v___x_5147_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5146_;
}
v_reusejp_5146_:
{
lean_object* v___x_5148_; lean_object* v___x_5149_; 
v___x_5148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5148_, 0, v___x_5147_);
lean_ctor_set(v___x_5148_, 1, v___x_5138_);
v___x_5149_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5148_, v_snd_5109_);
lean_dec_ref_known(v___x_5148_, 2);
return v___x_5149_;
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
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5168_; 
lean_del_object(v___x_5104_);
lean_dec(v_fst_5101_);
lean_del_object(v___x_5097_);
lean_dec(v_fst_5094_);
lean_del_object(v___x_5090_);
lean_dec(v_fst_5087_);
lean_del_object(v___x_5083_);
lean_dec(v_fst_5080_);
lean_del_object(v___x_5076_);
lean_del_object(v___x_5072_);
lean_del_object(v___x_5067_);
lean_del_object(v___x_5063_);
lean_del_object(v___x_5052_);
v_a_5161_ = lean_ctor_get(v___x_5106_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v___x_5106_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5163_ = v___x_5106_;
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v___x_5106_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
return v___x_5166_;
}
}
}
}
}
else
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5177_; 
lean_del_object(v___x_5097_);
lean_dec(v_fst_5094_);
lean_del_object(v___x_5090_);
lean_dec(v_fst_5087_);
lean_del_object(v___x_5083_);
lean_dec(v_fst_5080_);
lean_del_object(v___x_5076_);
lean_del_object(v___x_5072_);
lean_del_object(v___x_5067_);
lean_del_object(v___x_5063_);
lean_dec(v_all_5056_);
lean_del_object(v___x_5052_);
v_a_5170_ = lean_ctor_get(v___x_5099_, 0);
v_isSharedCheck_5177_ = !lean_is_exclusive(v___x_5099_);
if (v_isSharedCheck_5177_ == 0)
{
v___x_5172_ = v___x_5099_;
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v___x_5099_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v___x_5175_; 
if (v_isShared_5173_ == 0)
{
v___x_5175_ = v___x_5172_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v_a_5170_);
v___x_5175_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
return v___x_5175_;
}
}
}
}
}
else
{
lean_object* v_a_5179_; lean_object* v___x_5181_; uint8_t v_isShared_5182_; uint8_t v_isSharedCheck_5186_; 
lean_del_object(v___x_5090_);
lean_dec(v_fst_5087_);
lean_del_object(v___x_5083_);
lean_dec(v_fst_5080_);
lean_del_object(v___x_5076_);
lean_del_object(v___x_5072_);
lean_del_object(v___x_5067_);
lean_del_object(v___x_5063_);
lean_dec(v_all_5056_);
lean_dec_ref(v_value_5055_);
lean_del_object(v___x_5052_);
v_a_5179_ = lean_ctor_get(v___x_5092_, 0);
v_isSharedCheck_5186_ = !lean_is_exclusive(v___x_5092_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_5181_ = v___x_5092_;
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
else
{
lean_inc(v_a_5179_);
lean_dec(v___x_5092_);
v___x_5181_ = lean_box(0);
v_isShared_5182_ = v_isSharedCheck_5186_;
goto v_resetjp_5180_;
}
v_resetjp_5180_:
{
lean_object* v___x_5184_; 
if (v_isShared_5182_ == 0)
{
v___x_5184_ = v___x_5181_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_a_5179_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
return v___x_5184_;
}
}
}
}
}
else
{
lean_object* v_a_5188_; lean_object* v___x_5190_; uint8_t v_isShared_5191_; uint8_t v_isSharedCheck_5195_; 
lean_del_object(v___x_5083_);
lean_dec(v_fst_5080_);
lean_del_object(v___x_5076_);
lean_del_object(v___x_5072_);
lean_del_object(v___x_5067_);
lean_del_object(v___x_5063_);
lean_dec_ref(v_type_5059_);
lean_dec(v_all_5056_);
lean_dec_ref(v_value_5055_);
lean_del_object(v___x_5052_);
v_a_5188_ = lean_ctor_get(v___x_5085_, 0);
v_isSharedCheck_5195_ = !lean_is_exclusive(v___x_5085_);
if (v_isSharedCheck_5195_ == 0)
{
v___x_5190_ = v___x_5085_;
v_isShared_5191_ = v_isSharedCheck_5195_;
goto v_resetjp_5189_;
}
else
{
lean_inc(v_a_5188_);
lean_dec(v___x_5085_);
v___x_5190_ = lean_box(0);
v_isShared_5191_ = v_isSharedCheck_5195_;
goto v_resetjp_5189_;
}
v_resetjp_5189_:
{
lean_object* v___x_5193_; 
if (v_isShared_5191_ == 0)
{
v___x_5193_ = v___x_5190_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5194_; 
v_reuseFailAlloc_5194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5194_, 0, v_a_5188_);
v___x_5193_ = v_reuseFailAlloc_5194_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
return v___x_5193_;
}
}
}
}
}
else
{
lean_object* v_a_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5204_; 
lean_del_object(v___x_5076_);
lean_del_object(v___x_5072_);
lean_del_object(v___x_5067_);
lean_del_object(v___x_5063_);
lean_dec_ref(v_type_5059_);
lean_dec(v_levelParams_5058_);
lean_dec(v_all_5056_);
lean_dec_ref(v_value_5055_);
lean_del_object(v___x_5052_);
v_a_5197_ = lean_ctor_get(v___x_5078_, 0);
v_isSharedCheck_5204_ = !lean_is_exclusive(v___x_5078_);
if (v_isSharedCheck_5204_ == 0)
{
v___x_5199_ = v___x_5078_;
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_a_5197_);
lean_dec(v___x_5078_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5202_; 
if (v_isShared_5200_ == 0)
{
v___x_5202_ = v___x_5199_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5203_; 
v_reuseFailAlloc_5203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5203_, 0, v_a_5197_);
v___x_5202_ = v_reuseFailAlloc_5203_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
return v___x_5202_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5067_);
lean_del_object(v___x_5063_);
lean_dec_ref(v_type_5059_);
lean_dec(v_levelParams_5058_);
lean_dec(v_name_5057_);
lean_dec(v_all_5056_);
lean_dec_ref(v_value_5055_);
lean_del_object(v___x_5052_);
return v___x_5069_;
}
}
}
}
else
{
lean_dec_ref(v_type_5059_);
lean_dec(v_levelParams_5058_);
lean_dec(v_name_5057_);
lean_dec(v_all_5056_);
lean_dec_ref(v_value_5055_);
lean_del_object(v___x_5052_);
return v___x_5060_;
}
}
}
case 3:
{
lean_object* v_val_5212_; lean_object* v___x_5214_; uint8_t v_isShared_5215_; uint8_t v_isSharedCheck_5378_; 
v_val_5212_ = lean_ctor_get(v_val_4755_, 0);
v_isSharedCheck_5378_ = !lean_is_exclusive(v_val_4755_);
if (v_isSharedCheck_5378_ == 0)
{
v___x_5214_ = v_val_4755_;
v_isShared_5215_ = v_isSharedCheck_5378_;
goto v_resetjp_5213_;
}
else
{
lean_inc(v_val_5212_);
lean_dec(v_val_4755_);
v___x_5214_ = lean_box(0);
v_isShared_5215_ = v_isSharedCheck_5378_;
goto v_resetjp_5213_;
}
v_resetjp_5213_:
{
lean_object* v_toConstantVal_5216_; lean_object* v_value_5217_; uint8_t v_isUnsafe_5218_; lean_object* v_all_5219_; lean_object* v_name_5220_; lean_object* v_levelParams_5221_; lean_object* v_type_5222_; lean_object* v___x_5223_; 
v_toConstantVal_5216_ = lean_ctor_get(v_val_5212_, 0);
lean_inc_ref(v_toConstantVal_5216_);
v_value_5217_ = lean_ctor_get(v_val_5212_, 1);
lean_inc_ref(v_value_5217_);
v_isUnsafe_5218_ = lean_ctor_get_uint8(v_val_5212_, sizeof(void*)*3);
v_all_5219_ = lean_ctor_get(v_val_5212_, 2);
lean_inc(v_all_5219_);
lean_dec_ref(v_val_5212_);
v_name_5220_ = lean_ctor_get(v_toConstantVal_5216_, 0);
lean_inc(v_name_5220_);
v_levelParams_5221_ = lean_ctor_get(v_toConstantVal_5216_, 1);
lean_inc(v_levelParams_5221_);
v_type_5222_ = lean_ctor_get(v_toConstantVal_5216_, 2);
lean_inc_ref_n(v_type_5222_, 2);
lean_dec_ref(v_toConstantVal_5216_);
v___x_5223_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5222_, v___y_4644_, v___x_4772_);
if (lean_obj_tag(v___x_5223_) == 0)
{
lean_object* v_a_5224_; lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5377_; 
v_a_5224_ = lean_ctor_get(v___x_5223_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v___x_5223_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5226_ = v___x_5223_;
v_isShared_5227_ = v_isSharedCheck_5377_;
goto v_resetjp_5225_;
}
else
{
lean_inc(v_a_5224_);
lean_dec(v___x_5223_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5377_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v_snd_5228_; lean_object* v___x_5230_; uint8_t v_isShared_5231_; uint8_t v_isSharedCheck_5375_; 
v_snd_5228_ = lean_ctor_get(v_a_5224_, 1);
v_isSharedCheck_5375_ = !lean_is_exclusive(v_a_5224_);
if (v_isSharedCheck_5375_ == 0)
{
lean_object* v_unused_5376_; 
v_unused_5376_ = lean_ctor_get(v_a_5224_, 0);
lean_dec(v_unused_5376_);
v___x_5230_ = v_a_5224_;
v_isShared_5231_ = v_isSharedCheck_5375_;
goto v_resetjp_5229_;
}
else
{
lean_inc(v_snd_5228_);
lean_dec(v_a_5224_);
v___x_5230_ = lean_box(0);
v_isShared_5231_ = v_isSharedCheck_5375_;
goto v_resetjp_5229_;
}
v_resetjp_5229_:
{
lean_object* v___x_5232_; 
lean_inc_ref(v_value_5217_);
v___x_5232_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5217_, v___y_4644_, v_snd_5228_);
if (lean_obj_tag(v___x_5232_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5374_; 
v_a_5233_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5374_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5374_ == 0)
{
v___x_5235_ = v___x_5232_;
v_isShared_5236_ = v_isSharedCheck_5374_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5232_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5374_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v_snd_5237_; lean_object* v___x_5239_; uint8_t v_isShared_5240_; uint8_t v_isSharedCheck_5372_; 
v_snd_5237_ = lean_ctor_get(v_a_5233_, 1);
v_isSharedCheck_5372_ = !lean_is_exclusive(v_a_5233_);
if (v_isSharedCheck_5372_ == 0)
{
lean_object* v_unused_5373_; 
v_unused_5373_ = lean_ctor_get(v_a_5233_, 0);
lean_dec(v_unused_5373_);
v___x_5239_ = v_a_5233_;
v_isShared_5240_ = v_isSharedCheck_5372_;
goto v_resetjp_5238_;
}
else
{
lean_inc(v_snd_5237_);
lean_dec(v_a_5233_);
v___x_5239_ = lean_box(0);
v_isShared_5240_ = v_isSharedCheck_5372_;
goto v_resetjp_5238_;
}
v_resetjp_5238_:
{
lean_object* v___x_5241_; 
v___x_5241_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5220_, v___y_4644_, v_snd_5237_);
if (lean_obj_tag(v___x_5241_) == 0)
{
lean_object* v_a_5242_; lean_object* v_fst_5243_; lean_object* v_snd_5244_; lean_object* v___x_5246_; uint8_t v_isShared_5247_; uint8_t v_isSharedCheck_5363_; 
v_a_5242_ = lean_ctor_get(v___x_5241_, 0);
lean_inc(v_a_5242_);
lean_dec_ref_known(v___x_5241_, 1);
v_fst_5243_ = lean_ctor_get(v_a_5242_, 0);
v_snd_5244_ = lean_ctor_get(v_a_5242_, 1);
v_isSharedCheck_5363_ = !lean_is_exclusive(v_a_5242_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5246_ = v_a_5242_;
v_isShared_5247_ = v_isSharedCheck_5363_;
goto v_resetjp_5245_;
}
else
{
lean_inc(v_snd_5244_);
lean_inc(v_fst_5243_);
lean_dec(v_a_5242_);
v___x_5246_ = lean_box(0);
v_isShared_5247_ = v_isSharedCheck_5363_;
goto v_resetjp_5245_;
}
v_resetjp_5245_:
{
lean_object* v___x_5248_; 
v___x_5248_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5221_, v___y_4644_, v_snd_5244_);
if (lean_obj_tag(v___x_5248_) == 0)
{
lean_object* v_a_5249_; lean_object* v_fst_5250_; lean_object* v_snd_5251_; lean_object* v___x_5253_; uint8_t v_isShared_5254_; uint8_t v_isSharedCheck_5354_; 
v_a_5249_ = lean_ctor_get(v___x_5248_, 0);
lean_inc(v_a_5249_);
lean_dec_ref_known(v___x_5248_, 1);
v_fst_5250_ = lean_ctor_get(v_a_5249_, 0);
v_snd_5251_ = lean_ctor_get(v_a_5249_, 1);
v_isSharedCheck_5354_ = !lean_is_exclusive(v_a_5249_);
if (v_isSharedCheck_5354_ == 0)
{
v___x_5253_ = v_a_5249_;
v_isShared_5254_ = v_isSharedCheck_5354_;
goto v_resetjp_5252_;
}
else
{
lean_inc(v_snd_5251_);
lean_inc(v_fst_5250_);
lean_dec(v_a_5249_);
v___x_5253_ = lean_box(0);
v_isShared_5254_ = v_isSharedCheck_5354_;
goto v_resetjp_5252_;
}
v_resetjp_5252_:
{
lean_object* v___x_5255_; 
v___x_5255_ = l_LeanExport_dumpExpr(v_type_5222_, v___y_4644_, v_snd_5251_);
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_object* v_a_5256_; lean_object* v_fst_5257_; lean_object* v_snd_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5345_; 
v_a_5256_ = lean_ctor_get(v___x_5255_, 0);
lean_inc(v_a_5256_);
lean_dec_ref_known(v___x_5255_, 1);
v_fst_5257_ = lean_ctor_get(v_a_5256_, 0);
v_snd_5258_ = lean_ctor_get(v_a_5256_, 1);
v_isSharedCheck_5345_ = !lean_is_exclusive(v_a_5256_);
if (v_isSharedCheck_5345_ == 0)
{
v___x_5260_ = v_a_5256_;
v_isShared_5261_ = v_isSharedCheck_5345_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_snd_5258_);
lean_inc(v_fst_5257_);
lean_dec(v_a_5256_);
v___x_5260_ = lean_box(0);
v_isShared_5261_ = v_isSharedCheck_5345_;
goto v_resetjp_5259_;
}
v_resetjp_5259_:
{
lean_object* v___x_5262_; 
v___x_5262_ = l_LeanExport_dumpExpr(v_value_5217_, v___y_4644_, v_snd_5258_);
if (lean_obj_tag(v___x_5262_) == 0)
{
lean_object* v_a_5263_; lean_object* v_fst_5264_; lean_object* v_snd_5265_; lean_object* v___x_5267_; uint8_t v_isShared_5268_; uint8_t v_isSharedCheck_5336_; 
v_a_5263_ = lean_ctor_get(v___x_5262_, 0);
lean_inc(v_a_5263_);
lean_dec_ref_known(v___x_5262_, 1);
v_fst_5264_ = lean_ctor_get(v_a_5263_, 0);
v_snd_5265_ = lean_ctor_get(v_a_5263_, 1);
v_isSharedCheck_5336_ = !lean_is_exclusive(v_a_5263_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5267_ = v_a_5263_;
v_isShared_5268_ = v_isSharedCheck_5336_;
goto v_resetjp_5266_;
}
else
{
lean_inc(v_snd_5265_);
lean_inc(v_fst_5264_);
lean_dec(v_a_5263_);
v___x_5267_ = lean_box(0);
v_isShared_5268_ = v_isSharedCheck_5336_;
goto v_resetjp_5266_;
}
v_resetjp_5266_:
{
lean_object* v___x_5269_; 
v___x_5269_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5219_, v___y_4644_, v_snd_5265_);
if (lean_obj_tag(v___x_5269_) == 0)
{
lean_object* v_a_5270_; lean_object* v_fst_5271_; lean_object* v_snd_5272_; lean_object* v___x_5274_; uint8_t v_isShared_5275_; uint8_t v_isSharedCheck_5327_; 
v_a_5270_ = lean_ctor_get(v___x_5269_, 0);
lean_inc(v_a_5270_);
lean_dec_ref_known(v___x_5269_, 1);
v_fst_5271_ = lean_ctor_get(v_a_5270_, 0);
v_snd_5272_ = lean_ctor_get(v_a_5270_, 1);
v_isSharedCheck_5327_ = !lean_is_exclusive(v_a_5270_);
if (v_isSharedCheck_5327_ == 0)
{
v___x_5274_ = v_a_5270_;
v_isShared_5275_ = v_isSharedCheck_5327_;
goto v_resetjp_5273_;
}
else
{
lean_inc(v_snd_5272_);
lean_inc(v_fst_5271_);
lean_dec(v_a_5270_);
v___x_5274_ = lean_box(0);
v_isShared_5275_ = v_isSharedCheck_5327_;
goto v_resetjp_5273_;
}
v_resetjp_5273_:
{
lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5280_; 
v___x_5276_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0));
v___x_5277_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_5278_ = l_Lean_JsonNumber_fromNat(v_fst_5243_);
if (v_isShared_5236_ == 0)
{
lean_ctor_set_tag(v___x_5235_, 2);
lean_ctor_set(v___x_5235_, 0, v___x_5278_);
v___x_5280_ = v___x_5235_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5326_; 
v_reuseFailAlloc_5326_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5326_, 0, v___x_5278_);
v___x_5280_ = v_reuseFailAlloc_5326_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
lean_object* v___x_5282_; 
if (v_isShared_5275_ == 0)
{
lean_ctor_set(v___x_5274_, 1, v___x_5280_);
lean_ctor_set(v___x_5274_, 0, v___x_5277_);
v___x_5282_ = v___x_5274_;
goto v_reusejp_5281_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v___x_5277_);
lean_ctor_set(v_reuseFailAlloc_5325_, 1, v___x_5280_);
v___x_5282_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5281_;
}
v_reusejp_5281_:
{
lean_object* v___x_5283_; lean_object* v___x_5285_; 
v___x_5283_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5268_ == 0)
{
lean_ctor_set(v___x_5267_, 1, v_fst_5250_);
lean_ctor_set(v___x_5267_, 0, v___x_5283_);
v___x_5285_ = v___x_5267_;
goto v_reusejp_5284_;
}
else
{
lean_object* v_reuseFailAlloc_5324_; 
v_reuseFailAlloc_5324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5324_, 0, v___x_5283_);
lean_ctor_set(v_reuseFailAlloc_5324_, 1, v_fst_5250_);
v___x_5285_ = v_reuseFailAlloc_5324_;
goto v_reusejp_5284_;
}
v_reusejp_5284_:
{
lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5289_; 
v___x_5286_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5287_ = l_Lean_JsonNumber_fromNat(v_fst_5257_);
if (v_isShared_5227_ == 0)
{
lean_ctor_set_tag(v___x_5226_, 2);
lean_ctor_set(v___x_5226_, 0, v___x_5287_);
v___x_5289_ = v___x_5226_;
goto v_reusejp_5288_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v___x_5287_);
v___x_5289_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5288_;
}
v_reusejp_5288_:
{
lean_object* v___x_5291_; 
if (v_isShared_5261_ == 0)
{
lean_ctor_set(v___x_5260_, 1, v___x_5289_);
lean_ctor_set(v___x_5260_, 0, v___x_5286_);
v___x_5291_ = v___x_5260_;
goto v_reusejp_5290_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v___x_5286_);
lean_ctor_set(v_reuseFailAlloc_5322_, 1, v___x_5289_);
v___x_5291_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5290_;
}
v_reusejp_5290_:
{
lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5295_; 
v___x_5292_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5293_ = l_Lean_JsonNumber_fromNat(v_fst_5264_);
if (v_isShared_5215_ == 0)
{
lean_ctor_set_tag(v___x_5214_, 2);
lean_ctor_set(v___x_5214_, 0, v___x_5293_);
v___x_5295_ = v___x_5214_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v___x_5293_);
v___x_5295_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
lean_object* v___x_5297_; 
if (v_isShared_5254_ == 0)
{
lean_ctor_set(v___x_5253_, 1, v___x_5295_);
lean_ctor_set(v___x_5253_, 0, v___x_5292_);
v___x_5297_ = v___x_5253_;
goto v_reusejp_5296_;
}
else
{
lean_object* v_reuseFailAlloc_5320_; 
v_reuseFailAlloc_5320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5320_, 0, v___x_5292_);
lean_ctor_set(v_reuseFailAlloc_5320_, 1, v___x_5295_);
v___x_5297_ = v_reuseFailAlloc_5320_;
goto v_reusejp_5296_;
}
v_reusejp_5296_:
{
lean_object* v___x_5298_; lean_object* v___x_5300_; 
v___x_5298_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__1));
if (v_isShared_5247_ == 0)
{
lean_ctor_set(v___x_5246_, 1, v_fst_5271_);
lean_ctor_set(v___x_5246_, 0, v___x_5298_);
v___x_5300_ = v___x_5246_;
goto v_reusejp_5299_;
}
else
{
lean_object* v_reuseFailAlloc_5319_; 
v_reuseFailAlloc_5319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5319_, 0, v___x_5298_);
lean_ctor_set(v_reuseFailAlloc_5319_, 1, v_fst_5271_);
v___x_5300_ = v_reuseFailAlloc_5319_;
goto v_reusejp_5299_;
}
v_reusejp_5299_:
{
lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5304_; 
v___x_5301_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__6));
v___x_5302_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5302_, 0, v_isUnsafe_5218_);
if (v_isShared_5240_ == 0)
{
lean_ctor_set(v___x_5239_, 1, v___x_5302_);
lean_ctor_set(v___x_5239_, 0, v___x_5301_);
v___x_5304_ = v___x_5239_;
goto v_reusejp_5303_;
}
else
{
lean_object* v_reuseFailAlloc_5318_; 
v_reuseFailAlloc_5318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5318_, 0, v___x_5301_);
lean_ctor_set(v_reuseFailAlloc_5318_, 1, v___x_5302_);
v___x_5304_ = v_reuseFailAlloc_5318_;
goto v_reusejp_5303_;
}
v_reusejp_5303_:
{
lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5314_; 
v___x_5305_ = lean_box(0);
v___x_5306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5306_, 0, v___x_5304_);
lean_ctor_set(v___x_5306_, 1, v___x_5305_);
v___x_5307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5300_);
lean_ctor_set(v___x_5307_, 1, v___x_5306_);
v___x_5308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5308_, 0, v___x_5297_);
lean_ctor_set(v___x_5308_, 1, v___x_5307_);
v___x_5309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5309_, 0, v___x_5291_);
lean_ctor_set(v___x_5309_, 1, v___x_5308_);
v___x_5310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5310_, 0, v___x_5285_);
lean_ctor_set(v___x_5310_, 1, v___x_5309_);
v___x_5311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5311_, 0, v___x_5282_);
lean_ctor_set(v___x_5311_, 1, v___x_5310_);
v___x_5312_ = l_Lean_Json_mkObj(v___x_5311_);
lean_dec_ref_known(v___x_5311_, 2);
if (v_isShared_5231_ == 0)
{
lean_ctor_set(v___x_5230_, 1, v___x_5312_);
lean_ctor_set(v___x_5230_, 0, v___x_5276_);
v___x_5314_ = v___x_5230_;
goto v_reusejp_5313_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v___x_5276_);
lean_ctor_set(v_reuseFailAlloc_5317_, 1, v___x_5312_);
v___x_5314_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5313_;
}
v_reusejp_5313_:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
v___x_5315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5315_, 0, v___x_5314_);
lean_ctor_set(v___x_5315_, 1, v___x_5305_);
v___x_5316_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5315_, v_snd_5272_);
lean_dec_ref_known(v___x_5315_, 2);
return v___x_5316_;
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
lean_object* v_a_5328_; lean_object* v___x_5330_; uint8_t v_isShared_5331_; uint8_t v_isSharedCheck_5335_; 
lean_del_object(v___x_5267_);
lean_dec(v_fst_5264_);
lean_del_object(v___x_5260_);
lean_dec(v_fst_5257_);
lean_del_object(v___x_5253_);
lean_dec(v_fst_5250_);
lean_del_object(v___x_5246_);
lean_dec(v_fst_5243_);
lean_del_object(v___x_5239_);
lean_del_object(v___x_5235_);
lean_del_object(v___x_5230_);
lean_del_object(v___x_5226_);
lean_del_object(v___x_5214_);
v_a_5328_ = lean_ctor_get(v___x_5269_, 0);
v_isSharedCheck_5335_ = !lean_is_exclusive(v___x_5269_);
if (v_isSharedCheck_5335_ == 0)
{
v___x_5330_ = v___x_5269_;
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
else
{
lean_inc(v_a_5328_);
lean_dec(v___x_5269_);
v___x_5330_ = lean_box(0);
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
v_resetjp_5329_:
{
lean_object* v___x_5333_; 
if (v_isShared_5331_ == 0)
{
v___x_5333_ = v___x_5330_;
goto v_reusejp_5332_;
}
else
{
lean_object* v_reuseFailAlloc_5334_; 
v_reuseFailAlloc_5334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5334_, 0, v_a_5328_);
v___x_5333_ = v_reuseFailAlloc_5334_;
goto v_reusejp_5332_;
}
v_reusejp_5332_:
{
return v___x_5333_;
}
}
}
}
}
else
{
lean_object* v_a_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5344_; 
lean_del_object(v___x_5260_);
lean_dec(v_fst_5257_);
lean_del_object(v___x_5253_);
lean_dec(v_fst_5250_);
lean_del_object(v___x_5246_);
lean_dec(v_fst_5243_);
lean_del_object(v___x_5239_);
lean_del_object(v___x_5235_);
lean_del_object(v___x_5230_);
lean_del_object(v___x_5226_);
lean_dec(v_all_5219_);
lean_del_object(v___x_5214_);
v_a_5337_ = lean_ctor_get(v___x_5262_, 0);
v_isSharedCheck_5344_ = !lean_is_exclusive(v___x_5262_);
if (v_isSharedCheck_5344_ == 0)
{
v___x_5339_ = v___x_5262_;
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_a_5337_);
lean_dec(v___x_5262_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v___x_5342_; 
if (v_isShared_5340_ == 0)
{
v___x_5342_ = v___x_5339_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v_a_5337_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
return v___x_5342_;
}
}
}
}
}
else
{
lean_object* v_a_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5353_; 
lean_del_object(v___x_5253_);
lean_dec(v_fst_5250_);
lean_del_object(v___x_5246_);
lean_dec(v_fst_5243_);
lean_del_object(v___x_5239_);
lean_del_object(v___x_5235_);
lean_del_object(v___x_5230_);
lean_del_object(v___x_5226_);
lean_dec(v_all_5219_);
lean_dec_ref(v_value_5217_);
lean_del_object(v___x_5214_);
v_a_5346_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5353_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5353_ == 0)
{
v___x_5348_ = v___x_5255_;
v_isShared_5349_ = v_isSharedCheck_5353_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_a_5346_);
lean_dec(v___x_5255_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5353_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
lean_object* v___x_5351_; 
if (v_isShared_5349_ == 0)
{
v___x_5351_ = v___x_5348_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v_a_5346_);
v___x_5351_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
return v___x_5351_;
}
}
}
}
}
else
{
lean_object* v_a_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5362_; 
lean_del_object(v___x_5246_);
lean_dec(v_fst_5243_);
lean_del_object(v___x_5239_);
lean_del_object(v___x_5235_);
lean_del_object(v___x_5230_);
lean_del_object(v___x_5226_);
lean_dec_ref(v_type_5222_);
lean_dec(v_all_5219_);
lean_dec_ref(v_value_5217_);
lean_del_object(v___x_5214_);
v_a_5355_ = lean_ctor_get(v___x_5248_, 0);
v_isSharedCheck_5362_ = !lean_is_exclusive(v___x_5248_);
if (v_isSharedCheck_5362_ == 0)
{
v___x_5357_ = v___x_5248_;
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_a_5355_);
lean_dec(v___x_5248_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
lean_object* v___x_5360_; 
if (v_isShared_5358_ == 0)
{
v___x_5360_ = v___x_5357_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v_a_5355_);
v___x_5360_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
return v___x_5360_;
}
}
}
}
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
lean_del_object(v___x_5239_);
lean_del_object(v___x_5235_);
lean_del_object(v___x_5230_);
lean_del_object(v___x_5226_);
lean_dec_ref(v_type_5222_);
lean_dec(v_levelParams_5221_);
lean_dec(v_all_5219_);
lean_dec_ref(v_value_5217_);
lean_del_object(v___x_5214_);
v_a_5364_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5241_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5241_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5230_);
lean_del_object(v___x_5226_);
lean_dec_ref(v_type_5222_);
lean_dec(v_levelParams_5221_);
lean_dec(v_name_5220_);
lean_dec(v_all_5219_);
lean_dec_ref(v_value_5217_);
lean_del_object(v___x_5214_);
return v___x_5232_;
}
}
}
}
else
{
lean_dec_ref(v_type_5222_);
lean_dec(v_levelParams_5221_);
lean_dec(v_name_5220_);
lean_dec(v_all_5219_);
lean_dec_ref(v_value_5217_);
lean_del_object(v___x_5214_);
return v___x_5223_;
}
}
}
case 4:
{
lean_object* v___x_5379_; lean_object* v___x_5380_; 
lean_dec_ref_known(v_val_4755_, 1);
v___x_5379_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__9));
v___x_5380_ = l_LeanExport_dumpConstant(v___x_5379_, v___y_4644_, v___x_4772_);
if (lean_obj_tag(v___x_5380_) == 0)
{
lean_object* v_a_5381_; lean_object* v_snd_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; 
v_a_5381_ = lean_ctor_get(v___x_5380_, 0);
lean_inc(v_a_5381_);
lean_dec_ref_known(v___x_5380_, 1);
v_snd_5382_ = lean_ctor_get(v_a_5381_, 1);
lean_inc(v_snd_5382_);
lean_dec(v_a_5381_);
v___x_5383_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__19));
v___x_5384_ = lean_box(0);
v___x_5385_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
v___x_5386_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_4766_, v___x_5383_, v___x_5385_, v___y_4644_, v_snd_5382_);
if (lean_obj_tag(v___x_5386_) == 0)
{
lean_object* v_a_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5413_; 
v_a_5387_ = lean_ctor_get(v___x_5386_, 0);
v_isSharedCheck_5413_ = !lean_is_exclusive(v___x_5386_);
if (v_isSharedCheck_5413_ == 0)
{
v___x_5389_ = v___x_5386_;
v_isShared_5390_ = v_isSharedCheck_5413_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_a_5387_);
lean_dec(v___x_5386_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5413_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v_fst_5391_; lean_object* v_fst_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5411_; 
v_fst_5391_ = lean_ctor_get(v_a_5387_, 0);
lean_inc(v_fst_5391_);
v_fst_5392_ = lean_ctor_get(v_fst_5391_, 0);
v_isSharedCheck_5411_ = !lean_is_exclusive(v_fst_5391_);
if (v_isSharedCheck_5411_ == 0)
{
lean_object* v_unused_5412_; 
v_unused_5412_ = lean_ctor_get(v_fst_5391_, 1);
lean_dec(v_unused_5412_);
v___x_5394_ = v_fst_5391_;
v_isShared_5395_ = v_isSharedCheck_5411_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_fst_5392_);
lean_dec(v_fst_5391_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5411_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
if (lean_obj_tag(v_fst_5392_) == 0)
{
lean_object* v_snd_5396_; lean_object* v___x_5398_; 
v_snd_5396_ = lean_ctor_get(v_a_5387_, 1);
lean_inc(v_snd_5396_);
lean_dec(v_a_5387_);
if (v_isShared_5395_ == 0)
{
lean_ctor_set(v___x_5394_, 1, v_snd_5396_);
lean_ctor_set(v___x_5394_, 0, v___x_5384_);
v___x_5398_ = v___x_5394_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5402_; 
v_reuseFailAlloc_5402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5402_, 0, v___x_5384_);
lean_ctor_set(v_reuseFailAlloc_5402_, 1, v_snd_5396_);
v___x_5398_ = v_reuseFailAlloc_5402_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
lean_object* v___x_5400_; 
if (v_isShared_5390_ == 0)
{
lean_ctor_set(v___x_5389_, 0, v___x_5398_);
v___x_5400_ = v___x_5389_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v___x_5398_);
v___x_5400_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
return v___x_5400_;
}
}
}
else
{
lean_object* v_snd_5403_; lean_object* v_val_5404_; lean_object* v___x_5406_; 
v_snd_5403_ = lean_ctor_get(v_a_5387_, 1);
lean_inc(v_snd_5403_);
lean_dec(v_a_5387_);
v_val_5404_ = lean_ctor_get(v_fst_5392_, 0);
lean_inc(v_val_5404_);
lean_dec_ref_known(v_fst_5392_, 1);
if (v_isShared_5395_ == 0)
{
lean_ctor_set(v___x_5394_, 1, v_snd_5403_);
lean_ctor_set(v___x_5394_, 0, v_val_5404_);
v___x_5406_ = v___x_5394_;
goto v_reusejp_5405_;
}
else
{
lean_object* v_reuseFailAlloc_5410_; 
v_reuseFailAlloc_5410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5410_, 0, v_val_5404_);
lean_ctor_set(v_reuseFailAlloc_5410_, 1, v_snd_5403_);
v___x_5406_ = v_reuseFailAlloc_5410_;
goto v_reusejp_5405_;
}
v_reusejp_5405_:
{
lean_object* v___x_5408_; 
if (v_isShared_5390_ == 0)
{
lean_ctor_set(v___x_5389_, 0, v___x_5406_);
v___x_5408_ = v___x_5389_;
goto v_reusejp_5407_;
}
else
{
lean_object* v_reuseFailAlloc_5409_; 
v_reuseFailAlloc_5409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5409_, 0, v___x_5406_);
v___x_5408_ = v_reuseFailAlloc_5409_;
goto v_reusejp_5407_;
}
v_reusejp_5407_:
{
return v___x_5408_;
}
}
}
}
}
}
else
{
lean_object* v_a_5414_; lean_object* v___x_5416_; uint8_t v_isShared_5417_; uint8_t v_isSharedCheck_5421_; 
v_a_5414_ = lean_ctor_get(v___x_5386_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v___x_5386_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5416_ = v___x_5386_;
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
else
{
lean_inc(v_a_5414_);
lean_dec(v___x_5386_);
v___x_5416_ = lean_box(0);
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
v_resetjp_5415_:
{
lean_object* v___x_5419_; 
if (v_isShared_5417_ == 0)
{
v___x_5419_ = v___x_5416_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v_a_5414_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
return v___x_5419_;
}
}
}
}
else
{
return v___x_5380_;
}
}
case 5:
{
lean_object* v_val_5422_; lean_object* v_all_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
v_val_5422_ = lean_ctor_get(v_val_4755_, 0);
lean_inc_ref(v_val_5422_);
lean_dec_ref_known(v_val_4755_, 1);
v_all_5423_ = lean_ctor_get(v_val_5422_, 3);
lean_inc(v_all_5423_);
v___x_5424_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_5425_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__22, &l_LeanExport_dumpConstant___closed__22_once, _init_l_LeanExport_dumpConstant___closed__22);
v___x_5426_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(v___x_4766_, v_val_5422_, v_all_5423_, v___x_5425_, v___y_4644_, v___x_4772_);
lean_dec(v_all_5423_);
lean_dec_ref(v_val_5422_);
if (lean_obj_tag(v___x_5426_) == 0)
{
lean_object* v_a_5427_; lean_object* v_fst_5428_; lean_object* v_snd_5429_; lean_object* v_snd_5430_; lean_object* v_fst_5431_; lean_object* v_fst_5432_; lean_object* v_snd_5433_; lean_object* v___x_5434_; size_t v_sz_5435_; size_t v___x_5436_; lean_object* v___x_5437_; 
v_a_5427_ = lean_ctor_get(v___x_5426_, 0);
lean_inc(v_a_5427_);
lean_dec_ref_known(v___x_5426_, 1);
v_fst_5428_ = lean_ctor_get(v_a_5427_, 0);
lean_inc(v_fst_5428_);
v_snd_5429_ = lean_ctor_get(v_fst_5428_, 1);
lean_inc(v_snd_5429_);
v_snd_5430_ = lean_ctor_get(v_a_5427_, 1);
lean_inc(v_snd_5430_);
lean_dec(v_a_5427_);
v_fst_5431_ = lean_ctor_get(v_fst_5428_, 0);
lean_inc(v_fst_5431_);
lean_dec(v_fst_5428_);
v_fst_5432_ = lean_ctor_get(v_snd_5429_, 0);
lean_inc(v_fst_5432_);
v_snd_5433_ = lean_ctor_get(v_snd_5429_, 1);
lean_inc(v_snd_5433_);
lean_dec(v_snd_5429_);
v___x_5434_ = lean_box(0);
v_sz_5435_ = lean_array_size(v_fst_5432_);
v___x_5436_ = ((size_t)0ULL);
v___x_5437_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(v_fst_5432_, v_sz_5435_, v___x_5436_, v___x_5434_, v___y_4644_, v_snd_5430_);
if (lean_obj_tag(v___x_5437_) == 0)
{
lean_object* v_a_5438_; lean_object* v_snd_5439_; lean_object* v___x_5440_; 
v_a_5438_ = lean_ctor_get(v___x_5437_, 0);
lean_inc(v_a_5438_);
lean_dec_ref_known(v___x_5437_, 1);
v_snd_5439_ = lean_ctor_get(v_a_5438_, 1);
lean_inc(v_snd_5439_);
lean_dec(v_a_5438_);
v___x_5440_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20(v___x_4766_, v___x_5424_, v_snd_5433_, v___y_4644_, v_snd_5439_);
if (lean_obj_tag(v___x_5440_) == 0)
{
lean_object* v_a_5441_; lean_object* v_fst_5442_; lean_object* v_snd_5443_; lean_object* v_a_5444_; 
v_a_5441_ = lean_ctor_get(v___x_5440_, 0);
lean_inc(v_a_5441_);
lean_dec_ref_known(v___x_5440_, 1);
v_fst_5442_ = lean_ctor_get(v_a_5441_, 0);
lean_inc(v_fst_5442_);
v_snd_5443_ = lean_ctor_get(v_a_5441_, 1);
lean_inc(v_snd_5443_);
lean_dec(v_a_5441_);
v_a_5444_ = lean_ctor_get(v_fst_5442_, 0);
lean_inc(v_a_5444_);
lean_dec(v_fst_5442_);
v___y_4652_ = v_fst_5432_;
v___y_4653_ = v___x_5434_;
v___y_4654_ = v_fst_5431_;
v_fst_4655_ = v_a_5444_;
v_snd_4656_ = v_snd_5443_;
goto v___jp_4651_;
}
else
{
lean_object* v_a_5445_; lean_object* v___x_5447_; uint8_t v_isShared_5448_; uint8_t v_isSharedCheck_5452_; 
lean_dec(v_fst_5432_);
lean_dec(v_fst_5431_);
v_a_5445_ = lean_ctor_get(v___x_5440_, 0);
v_isSharedCheck_5452_ = !lean_is_exclusive(v___x_5440_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5447_ = v___x_5440_;
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
else
{
lean_inc(v_a_5445_);
lean_dec(v___x_5440_);
v___x_5447_ = lean_box(0);
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
v_resetjp_5446_:
{
lean_object* v___x_5450_; 
if (v_isShared_5448_ == 0)
{
v___x_5450_ = v___x_5447_;
goto v_reusejp_5449_;
}
else
{
lean_object* v_reuseFailAlloc_5451_; 
v_reuseFailAlloc_5451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5451_, 0, v_a_5445_);
v___x_5450_ = v_reuseFailAlloc_5451_;
goto v_reusejp_5449_;
}
v_reusejp_5449_:
{
return v___x_5450_;
}
}
}
}
else
{
lean_dec(v_snd_5433_);
lean_dec(v_fst_5432_);
lean_dec(v_fst_5431_);
return v___x_5437_;
}
}
else
{
lean_object* v_a_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5460_; 
v_a_5453_ = lean_ctor_get(v___x_5426_, 0);
v_isSharedCheck_5460_ = !lean_is_exclusive(v___x_5426_);
if (v_isSharedCheck_5460_ == 0)
{
v___x_5455_ = v___x_5426_;
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_a_5453_);
lean_dec(v___x_5426_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___x_5458_; 
if (v_isShared_5456_ == 0)
{
v___x_5458_ = v___x_5455_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5459_; 
v_reuseFailAlloc_5459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5459_, 0, v_a_5453_);
v___x_5458_ = v_reuseFailAlloc_5459_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
return v___x_5458_;
}
}
}
}
case 6:
{
lean_object* v_val_5461_; lean_object* v_induct_5462_; 
v_val_5461_ = lean_ctor_get(v_val_4755_, 0);
lean_inc_ref(v_val_5461_);
lean_dec_ref_known(v_val_4755_, 1);
v_induct_5462_ = lean_ctor_get(v_val_5461_, 1);
lean_inc(v_induct_5462_);
lean_dec_ref(v_val_5461_);
v_c_4643_ = v_induct_5462_;
v___y_4645_ = v___x_4772_;
goto _start;
}
default: 
{
lean_object* v_val_5464_; lean_object* v_all_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; 
v_val_5464_ = lean_ctor_get(v_val_4755_, 0);
lean_inc_ref(v_val_5464_);
lean_dec_ref_known(v_val_4755_, 1);
v_all_5465_ = lean_ctor_get(v_val_5464_, 1);
lean_inc(v_all_5465_);
lean_dec_ref(v_val_5464_);
v___x_5466_ = lean_box(0);
v___x_5467_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(v_all_5465_, v___x_5466_, v___y_4644_, v___x_4772_);
lean_dec(v_all_5465_);
if (lean_obj_tag(v___x_5467_) == 0)
{
lean_object* v_a_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5484_; 
v_a_5468_ = lean_ctor_get(v___x_5467_, 0);
v_isSharedCheck_5484_ = !lean_is_exclusive(v___x_5467_);
if (v_isSharedCheck_5484_ == 0)
{
v___x_5470_ = v___x_5467_;
v_isShared_5471_ = v_isSharedCheck_5484_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_a_5468_);
lean_dec(v___x_5467_);
v___x_5470_ = lean_box(0);
v_isShared_5471_ = v_isSharedCheck_5484_;
goto v_resetjp_5469_;
}
v_resetjp_5469_:
{
lean_object* v_snd_5472_; lean_object* v___x_5474_; uint8_t v_isShared_5475_; uint8_t v_isSharedCheck_5482_; 
v_snd_5472_ = lean_ctor_get(v_a_5468_, 1);
v_isSharedCheck_5482_ = !lean_is_exclusive(v_a_5468_);
if (v_isSharedCheck_5482_ == 0)
{
lean_object* v_unused_5483_; 
v_unused_5483_ = lean_ctor_get(v_a_5468_, 0);
lean_dec(v_unused_5483_);
v___x_5474_ = v_a_5468_;
v_isShared_5475_ = v_isSharedCheck_5482_;
goto v_resetjp_5473_;
}
else
{
lean_inc(v_snd_5472_);
lean_dec(v_a_5468_);
v___x_5474_ = lean_box(0);
v_isShared_5475_ = v_isSharedCheck_5482_;
goto v_resetjp_5473_;
}
v_resetjp_5473_:
{
lean_object* v___x_5477_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 0, v___x_5466_);
v___x_5477_ = v___x_5474_;
goto v_reusejp_5476_;
}
else
{
lean_object* v_reuseFailAlloc_5481_; 
v_reuseFailAlloc_5481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5481_, 0, v___x_5466_);
lean_ctor_set(v_reuseFailAlloc_5481_, 1, v_snd_5472_);
v___x_5477_ = v_reuseFailAlloc_5481_;
goto v_reusejp_5476_;
}
v_reusejp_5476_:
{
lean_object* v___x_5479_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 0, v___x_5477_);
v___x_5479_ = v___x_5470_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v___x_5477_);
v___x_5479_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
return v___x_5479_;
}
}
}
}
}
else
{
return v___x_5467_;
}
}
}
}
}
}
else
{
lean_dec(v_val_4755_);
lean_dec(v_c_4643_);
goto v___jp_4647_;
}
}
v___jp_5493_:
{
if (v___y_5494_ == 0)
{
goto v___jp_4756_;
}
else
{
lean_dec(v_val_4755_);
lean_dec(v_c_4643_);
goto v___jp_4647_;
}
}
}
else
{
uint8_t v_ignoreMissing_5497_; 
lean_dec(v___x_4754_);
v_ignoreMissing_5497_ = lean_ctor_get_uint8(v___y_4645_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_5497_ == 0)
{
lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; uint8_t v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; 
v___x_5498_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_5499_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__20___closed__0));
v___x_5500_ = lean_unsigned_to_nat(254u);
v___x_5501_ = lean_unsigned_to_nat(48u);
v___x_5502_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_5503_ = 1;
v___x_5504_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_4643_, v___x_5503_);
v___x_5505_ = lean_string_append(v___x_5502_, v___x_5504_);
lean_dec_ref(v___x_5504_);
v___x_5506_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_5507_ = lean_string_append(v___x_5505_, v___x_5506_);
v___x_5508_ = l_mkPanicMessageWithDecl(v___x_5498_, v___x_5499_, v___x_5500_, v___x_5501_, v___x_5507_);
lean_dec_ref(v___x_5507_);
v___x_5509_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_5508_, v___y_4644_, v___y_4645_);
return v___x_5509_;
}
else
{
lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; 
lean_dec(v_c_4643_);
v___x_5510_ = lean_box(0);
v___x_5511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5511_, 0, v___x_5510_);
lean_ctor_set(v___x_5511_, 1, v___y_4645_);
v___x_5512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5512_, 0, v___x_5511_);
return v___x_5512_;
}
}
v___jp_4647_:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4648_ = lean_box(0);
v___x_4649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4648_);
lean_ctor_set(v___x_4649_, 1, v___y_4645_);
v___x_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4649_);
return v___x_4650_;
}
v___jp_4651_:
{
size_t v_sz_4657_; size_t v___x_4658_; lean_object* v___x_4659_; 
v_sz_4657_ = lean_array_size(v_fst_4655_);
v___x_4658_ = ((size_t)0ULL);
v___x_4659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(v_fst_4655_, v_sz_4657_, v___x_4658_, v___y_4653_, v___y_4644_, v_snd_4656_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; lean_object* v_snd_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4751_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
lean_inc(v_a_4660_);
lean_dec_ref_known(v___x_4659_, 1);
v_snd_4661_ = lean_ctor_get(v_a_4660_, 1);
v_isSharedCheck_4751_ = !lean_is_exclusive(v_a_4660_);
if (v_isSharedCheck_4751_ == 0)
{
lean_object* v_unused_4752_; 
v_unused_4752_ = lean_ctor_get(v_a_4660_, 0);
lean_dec(v_unused_4752_);
v___x_4663_ = v_a_4660_;
v_isShared_4664_ = v_isSharedCheck_4751_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_snd_4661_);
lean_dec(v_a_4660_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4751_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4665_; 
v___x_4665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_fst_4655_, v_sz_4657_, v___x_4658_, v___y_4653_, v___y_4644_, v_snd_4661_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v_a_4666_; lean_object* v_snd_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4749_; 
v_a_4666_ = lean_ctor_get(v___x_4665_, 0);
lean_inc(v_a_4666_);
lean_dec_ref_known(v___x_4665_, 1);
v_snd_4667_ = lean_ctor_get(v_a_4666_, 1);
v_isSharedCheck_4749_ = !lean_is_exclusive(v_a_4666_);
if (v_isSharedCheck_4749_ == 0)
{
lean_object* v_unused_4750_; 
v_unused_4750_ = lean_ctor_get(v_a_4666_, 0);
lean_dec(v_unused_4750_);
v___x_4669_ = v_a_4666_;
v_isShared_4670_ = v_isSharedCheck_4749_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_snd_4667_);
lean_dec(v_a_4666_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4749_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
size_t v_sz_4671_; lean_object* v___x_4672_; 
v_sz_4671_ = lean_array_size(v___y_4654_);
v___x_4672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(v_sz_4671_, v___x_4658_, v___y_4654_, v___y_4644_, v_snd_4667_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v_fst_4674_; lean_object* v_snd_4675_; lean_object* v___x_4677_; uint8_t v_isShared_4678_; uint8_t v_isSharedCheck_4740_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
lean_inc(v_a_4673_);
lean_dec_ref_known(v___x_4672_, 1);
v_fst_4674_ = lean_ctor_get(v_a_4673_, 0);
v_snd_4675_ = lean_ctor_get(v_a_4673_, 1);
v_isSharedCheck_4740_ = !lean_is_exclusive(v_a_4673_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4677_ = v_a_4673_;
v_isShared_4678_ = v_isSharedCheck_4740_;
goto v_resetjp_4676_;
}
else
{
lean_inc(v_snd_4675_);
lean_inc(v_fst_4674_);
lean_dec(v_a_4673_);
v___x_4677_ = lean_box(0);
v_isShared_4678_ = v_isSharedCheck_4740_;
goto v_resetjp_4676_;
}
v_resetjp_4676_:
{
size_t v_sz_4679_; lean_object* v___x_4680_; 
v_sz_4679_ = lean_array_size(v___y_4652_);
v___x_4680_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_4679_, v___x_4658_, v___y_4652_, v___y_4644_, v_snd_4675_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v_a_4681_; lean_object* v_fst_4682_; lean_object* v_snd_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4731_; 
v_a_4681_ = lean_ctor_get(v___x_4680_, 0);
lean_inc(v_a_4681_);
lean_dec_ref_known(v___x_4680_, 1);
v_fst_4682_ = lean_ctor_get(v_a_4681_, 0);
v_snd_4683_ = lean_ctor_get(v_a_4681_, 1);
v_isSharedCheck_4731_ = !lean_is_exclusive(v_a_4681_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4685_ = v_a_4681_;
v_isShared_4686_ = v_isSharedCheck_4731_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_snd_4683_);
lean_inc(v_fst_4682_);
lean_dec(v_a_4681_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4731_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4687_; 
v___x_4687_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_4657_, v___x_4658_, v_fst_4655_, v___y_4644_, v_snd_4683_);
if (lean_obj_tag(v___x_4687_) == 0)
{
lean_object* v_a_4688_; lean_object* v_fst_4689_; lean_object* v_snd_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4722_; 
v_a_4688_ = lean_ctor_get(v___x_4687_, 0);
lean_inc(v_a_4688_);
lean_dec_ref_known(v___x_4687_, 1);
v_fst_4689_ = lean_ctor_get(v_a_4688_, 0);
v_snd_4690_ = lean_ctor_get(v_a_4688_, 1);
v_isSharedCheck_4722_ = !lean_is_exclusive(v_a_4688_);
if (v_isSharedCheck_4722_ == 0)
{
v___x_4692_ = v_a_4688_;
v_isShared_4693_ = v_isSharedCheck_4722_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_snd_4690_);
lean_inc(v_fst_4689_);
lean_dec(v_a_4688_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4722_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4698_; 
v___x_4694_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__0));
v___x_4695_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__1));
v___x_4696_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v_fst_4674_);
if (v_isShared_4693_ == 0)
{
lean_ctor_set(v___x_4692_, 1, v___x_4696_);
lean_ctor_set(v___x_4692_, 0, v___x_4695_);
v___x_4698_ = v___x_4692_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4721_; 
v_reuseFailAlloc_4721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4721_, 0, v___x_4695_);
lean_ctor_set(v_reuseFailAlloc_4721_, 1, v___x_4696_);
v___x_4698_ = v_reuseFailAlloc_4721_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4702_; 
v___x_4699_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___closed__2));
v___x_4700_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v_fst_4682_);
if (v_isShared_4686_ == 0)
{
lean_ctor_set(v___x_4685_, 1, v___x_4700_);
lean_ctor_set(v___x_4685_, 0, v___x_4699_);
v___x_4702_ = v___x_4685_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4720_; 
v_reuseFailAlloc_4720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4720_, 0, v___x_4699_);
lean_ctor_set(v_reuseFailAlloc_4720_, 1, v___x_4700_);
v___x_4702_ = v_reuseFailAlloc_4720_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4706_; 
v___x_4703_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__2));
v___x_4704_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__18(v_fst_4689_);
if (v_isShared_4678_ == 0)
{
lean_ctor_set(v___x_4677_, 1, v___x_4704_);
lean_ctor_set(v___x_4677_, 0, v___x_4703_);
v___x_4706_ = v___x_4677_;
goto v_reusejp_4705_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v___x_4703_);
lean_ctor_set(v_reuseFailAlloc_4719_, 1, v___x_4704_);
v___x_4706_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4705_;
}
v_reusejp_4705_:
{
lean_object* v___x_4707_; lean_object* v___x_4709_; 
v___x_4707_ = lean_box(0);
if (v_isShared_4664_ == 0)
{
lean_ctor_set_tag(v___x_4663_, 1);
lean_ctor_set(v___x_4663_, 1, v___x_4707_);
lean_ctor_set(v___x_4663_, 0, v___x_4706_);
v___x_4709_ = v___x_4663_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v___x_4706_);
lean_ctor_set(v_reuseFailAlloc_4718_, 1, v___x_4707_);
v___x_4709_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4714_; 
v___x_4710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4702_);
lean_ctor_set(v___x_4710_, 1, v___x_4709_);
v___x_4711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4711_, 0, v___x_4698_);
lean_ctor_set(v___x_4711_, 1, v___x_4710_);
v___x_4712_ = l_Lean_Json_mkObj(v___x_4711_);
lean_dec_ref_known(v___x_4711_, 2);
if (v_isShared_4670_ == 0)
{
lean_ctor_set(v___x_4669_, 1, v___x_4712_);
lean_ctor_set(v___x_4669_, 0, v___x_4694_);
v___x_4714_ = v___x_4669_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v___x_4694_);
lean_ctor_set(v_reuseFailAlloc_4717_, 1, v___x_4712_);
v___x_4714_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4714_);
lean_ctor_set(v___x_4715_, 1, v___x_4707_);
v___x_4716_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4715_, v_snd_4690_);
lean_dec_ref_known(v___x_4715_, 2);
return v___x_4716_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4723_; lean_object* v___x_4725_; uint8_t v_isShared_4726_; uint8_t v_isSharedCheck_4730_; 
lean_del_object(v___x_4685_);
lean_dec(v_fst_4682_);
lean_del_object(v___x_4677_);
lean_dec(v_fst_4674_);
lean_del_object(v___x_4669_);
lean_del_object(v___x_4663_);
v_a_4723_ = lean_ctor_get(v___x_4687_, 0);
v_isSharedCheck_4730_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4730_ == 0)
{
v___x_4725_ = v___x_4687_;
v_isShared_4726_ = v_isSharedCheck_4730_;
goto v_resetjp_4724_;
}
else
{
lean_inc(v_a_4723_);
lean_dec(v___x_4687_);
v___x_4725_ = lean_box(0);
v_isShared_4726_ = v_isSharedCheck_4730_;
goto v_resetjp_4724_;
}
v_resetjp_4724_:
{
lean_object* v___x_4728_; 
if (v_isShared_4726_ == 0)
{
v___x_4728_ = v___x_4725_;
goto v_reusejp_4727_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v_a_4723_);
v___x_4728_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4727_;
}
v_reusejp_4727_:
{
return v___x_4728_;
}
}
}
}
}
else
{
lean_object* v_a_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4739_; 
lean_del_object(v___x_4677_);
lean_dec(v_fst_4674_);
lean_del_object(v___x_4669_);
lean_del_object(v___x_4663_);
lean_dec_ref(v_fst_4655_);
v_a_4732_ = lean_ctor_get(v___x_4680_, 0);
v_isSharedCheck_4739_ = !lean_is_exclusive(v___x_4680_);
if (v_isSharedCheck_4739_ == 0)
{
v___x_4734_ = v___x_4680_;
v_isShared_4735_ = v_isSharedCheck_4739_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_a_4732_);
lean_dec(v___x_4680_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4739_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
lean_object* v___x_4737_; 
if (v_isShared_4735_ == 0)
{
v___x_4737_ = v___x_4734_;
goto v_reusejp_4736_;
}
else
{
lean_object* v_reuseFailAlloc_4738_; 
v_reuseFailAlloc_4738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4738_, 0, v_a_4732_);
v___x_4737_ = v_reuseFailAlloc_4738_;
goto v_reusejp_4736_;
}
v_reusejp_4736_:
{
return v___x_4737_;
}
}
}
}
}
else
{
lean_object* v_a_4741_; lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4748_; 
lean_del_object(v___x_4669_);
lean_del_object(v___x_4663_);
lean_dec_ref(v_fst_4655_);
lean_dec(v___y_4652_);
v_a_4741_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4748_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4743_ = v___x_4672_;
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
else
{
lean_inc(v_a_4741_);
lean_dec(v___x_4672_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
lean_object* v___x_4746_; 
if (v_isShared_4744_ == 0)
{
v___x_4746_ = v___x_4743_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v_a_4741_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
return v___x_4746_;
}
}
}
}
}
else
{
lean_del_object(v___x_4663_);
lean_dec_ref(v_fst_4655_);
lean_dec(v___y_4654_);
lean_dec(v___y_4652_);
return v___x_4665_;
}
}
}
else
{
lean_dec_ref(v_fst_4655_);
lean_dec(v___y_4654_);
lean_dec(v___y_4652_);
return v___x_4659_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object* v_as_5513_, size_t v_sz_5514_, size_t v_i_5515_, lean_object* v_b_5516_, lean_object* v___y_5517_, lean_object* v___y_5518_){
_start:
{
uint8_t v___x_5520_; 
v___x_5520_ = lean_usize_dec_lt(v_i_5515_, v_sz_5514_);
if (v___x_5520_ == 0)
{
lean_object* v___x_5521_; lean_object* v___x_5522_; 
v___x_5521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5521_, 0, v_b_5516_);
lean_ctor_set(v___x_5521_, 1, v___y_5518_);
v___x_5522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5522_, 0, v___x_5521_);
return v___x_5522_;
}
else
{
lean_object* v___x_5523_; lean_object* v_a_5524_; lean_object* v___x_5525_; 
v___x_5523_ = lean_box(0);
v_a_5524_ = lean_array_uget_borrowed(v_as_5513_, v_i_5515_);
lean_inc(v_a_5524_);
v___x_5525_ = l_LeanExport_dumpConstant(v_a_5524_, v___y_5517_, v___y_5518_);
if (lean_obj_tag(v___x_5525_) == 0)
{
lean_object* v_a_5526_; lean_object* v_snd_5527_; size_t v___x_5528_; size_t v___x_5529_; 
v_a_5526_ = lean_ctor_get(v___x_5525_, 0);
lean_inc(v_a_5526_);
lean_dec_ref_known(v___x_5525_, 1);
v_snd_5527_ = lean_ctor_get(v_a_5526_, 1);
lean_inc(v_snd_5527_);
lean_dec(v_a_5526_);
v___x_5528_ = ((size_t)1ULL);
v___x_5529_ = lean_usize_add(v_i_5515_, v___x_5528_);
v_i_5515_ = v___x_5529_;
v_b_5516_ = v___x_5523_;
v___y_5518_ = v_snd_5527_;
goto _start;
}
else
{
return v___x_5525_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object* v_e_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_){
_start:
{
lean_object* v___x_5535_; lean_object* v___x_5536_; size_t v_sz_5537_; size_t v___x_5538_; lean_object* v___x_5539_; 
v___x_5535_ = l_Lean_Expr_getUsedConstants(v_e_5531_);
v___x_5536_ = lean_box(0);
v_sz_5537_ = lean_array_size(v___x_5535_);
v___x_5538_ = ((size_t)0ULL);
v___x_5539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v___x_5535_, v_sz_5537_, v___x_5538_, v___x_5536_, v___y_5532_, v___y_5533_);
lean_dec_ref(v___x_5535_);
if (lean_obj_tag(v___x_5539_) == 0)
{
lean_object* v_a_5540_; lean_object* v___x_5542_; uint8_t v_isShared_5543_; uint8_t v_isSharedCheck_5556_; 
v_a_5540_ = lean_ctor_get(v___x_5539_, 0);
v_isSharedCheck_5556_ = !lean_is_exclusive(v___x_5539_);
if (v_isSharedCheck_5556_ == 0)
{
v___x_5542_ = v___x_5539_;
v_isShared_5543_ = v_isSharedCheck_5556_;
goto v_resetjp_5541_;
}
else
{
lean_inc(v_a_5540_);
lean_dec(v___x_5539_);
v___x_5542_ = lean_box(0);
v_isShared_5543_ = v_isSharedCheck_5556_;
goto v_resetjp_5541_;
}
v_resetjp_5541_:
{
lean_object* v_snd_5544_; lean_object* v___x_5546_; uint8_t v_isShared_5547_; uint8_t v_isSharedCheck_5554_; 
v_snd_5544_ = lean_ctor_get(v_a_5540_, 1);
v_isSharedCheck_5554_ = !lean_is_exclusive(v_a_5540_);
if (v_isSharedCheck_5554_ == 0)
{
lean_object* v_unused_5555_; 
v_unused_5555_ = lean_ctor_get(v_a_5540_, 0);
lean_dec(v_unused_5555_);
v___x_5546_ = v_a_5540_;
v_isShared_5547_ = v_isSharedCheck_5554_;
goto v_resetjp_5545_;
}
else
{
lean_inc(v_snd_5544_);
lean_dec(v_a_5540_);
v___x_5546_ = lean_box(0);
v_isShared_5547_ = v_isSharedCheck_5554_;
goto v_resetjp_5545_;
}
v_resetjp_5545_:
{
lean_object* v___x_5549_; 
if (v_isShared_5547_ == 0)
{
lean_ctor_set(v___x_5546_, 0, v___x_5536_);
v___x_5549_ = v___x_5546_;
goto v_reusejp_5548_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v___x_5536_);
lean_ctor_set(v_reuseFailAlloc_5553_, 1, v_snd_5544_);
v___x_5549_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5548_;
}
v_reusejp_5548_:
{
lean_object* v___x_5551_; 
if (v_isShared_5543_ == 0)
{
lean_ctor_set(v___x_5542_, 0, v___x_5549_);
v___x_5551_ = v___x_5542_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v___x_5549_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
}
else
{
return v___x_5539_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object* v_e_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_){
_start:
{
lean_object* v_res_5561_; 
v_res_5561_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_e_5557_, v___y_5558_, v___y_5559_);
lean_dec_ref(v___y_5558_);
return v_res_5561_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg___boxed(lean_object* v_as_x27_5562_, lean_object* v_b_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_){
_start:
{
lean_object* v_res_5567_; 
v_res_5567_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(v_as_x27_5562_, v_b_5563_, v___y_5564_, v___y_5565_);
lean_dec_ref(v___y_5564_);
lean_dec(v_as_x27_5562_);
return v_res_5567_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object* v_as_x27_5568_, lean_object* v_b_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_, lean_object* v___y_5572_){
_start:
{
lean_object* v_res_5573_; 
v_res_5573_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v_as_x27_5568_, v_b_5569_, v___y_5570_, v___y_5571_);
lean_dec_ref(v___y_5570_);
lean_dec(v_as_x27_5568_);
return v_res_5573_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object* v_x_5574_, lean_object* v_x_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_){
_start:
{
lean_object* v_res_5579_; 
v_res_5579_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_x_5574_, v_x_5575_, v___y_5576_, v___y_5577_);
lean_dec_ref(v___y_5576_);
return v_res_5579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object* v_as_5580_, lean_object* v_sz_5581_, lean_object* v_i_5582_, lean_object* v_b_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_, lean_object* v___y_5586_){
_start:
{
size_t v_sz_boxed_5587_; size_t v_i_boxed_5588_; lean_object* v_res_5589_; 
v_sz_boxed_5587_ = lean_unbox_usize(v_sz_5581_);
lean_dec(v_sz_5581_);
v_i_boxed_5588_ = lean_unbox_usize(v_i_5582_);
lean_dec(v_i_5582_);
v_res_5589_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v_as_5580_, v_sz_boxed_5587_, v_i_boxed_5588_, v_b_5583_, v___y_5584_, v___y_5585_);
lean_dec_ref(v___y_5584_);
lean_dec_ref(v_as_5580_);
return v_res_5589_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_){
_start:
{
lean_object* v_res_5593_; 
v_res_5593_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v___y_5590_, v___y_5591_);
lean_dec_ref(v___y_5590_);
return v_res_5593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object* v_as_5594_, lean_object* v_sz_5595_, lean_object* v_i_5596_, lean_object* v_b_5597_, lean_object* v___y_5598_, lean_object* v___y_5599_, lean_object* v___y_5600_){
_start:
{
size_t v_sz_boxed_5601_; size_t v_i_boxed_5602_; lean_object* v_res_5603_; 
v_sz_boxed_5601_ = lean_unbox_usize(v_sz_5595_);
lean_dec(v_sz_5595_);
v_i_boxed_5602_ = lean_unbox_usize(v_i_5596_);
lean_dec(v_i_5596_);
v_res_5603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_as_5594_, v_sz_boxed_5601_, v_i_boxed_5602_, v_b_5597_, v___y_5598_, v___y_5599_);
lean_dec_ref(v___y_5598_);
lean_dec_ref(v_as_5594_);
return v_res_5603_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object* v_e_5604_, lean_object* v___y_5605_, lean_object* v___y_5606_, lean_object* v___y_5607_){
_start:
{
lean_object* v_res_5608_; 
v_res_5608_ = l_LeanExport_dumpExpr(v_e_5604_, v___y_5605_, v___y_5606_);
lean_dec_ref(v___y_5605_);
return v_res_5608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object* v_as_5609_, lean_object* v_sz_5610_, lean_object* v_i_5611_, lean_object* v_b_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_, lean_object* v___y_5615_){
_start:
{
size_t v_sz_boxed_5616_; size_t v_i_boxed_5617_; lean_object* v_res_5618_; 
v_sz_boxed_5616_ = lean_unbox_usize(v_sz_5610_);
lean_dec(v_sz_5610_);
v_i_boxed_5617_ = lean_unbox_usize(v_i_5611_);
lean_dec(v_i_5611_);
v_res_5618_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__13(v_as_5609_, v_sz_boxed_5616_, v_i_boxed_5617_, v_b_5612_, v___y_5613_, v___y_5614_);
lean_dec_ref(v___y_5613_);
lean_dec_ref(v_as_5609_);
return v_res_5618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19___boxed(lean_object* v_as_5619_, lean_object* v_sz_5620_, lean_object* v_i_5621_, lean_object* v_b_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_){
_start:
{
size_t v_sz_boxed_5626_; size_t v_i_boxed_5627_; lean_object* v_res_5628_; 
v_sz_boxed_5626_ = lean_unbox_usize(v_sz_5620_);
lean_dec(v_sz_5620_);
v_i_boxed_5627_ = lean_unbox_usize(v_i_5621_);
lean_dec(v_i_5621_);
v_res_5628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__19(v_as_5619_, v_sz_boxed_5626_, v_i_boxed_5627_, v_b_5622_, v___y_5623_, v___y_5624_);
lean_dec_ref(v___y_5623_);
lean_dec_ref(v_as_5619_);
return v_res_5628_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object* v_rule_5629_, lean_object* v___y_5630_, lean_object* v___y_5631_, lean_object* v___y_5632_){
_start:
{
lean_object* v_res_5633_; 
v_res_5633_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_rule_5629_, v___y_5630_, v___y_5631_);
lean_dec_ref(v___y_5630_);
return v_res_5633_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_){
_start:
{
lean_object* v_res_5637_; 
v_res_5637_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v___y_5634_, v___y_5635_);
lean_dec_ref(v___y_5634_);
return v_res_5637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object* v_sz_5638_, lean_object* v_i_5639_, lean_object* v_bs_5640_, lean_object* v___y_5641_, lean_object* v___y_5642_, lean_object* v___y_5643_){
_start:
{
size_t v_sz_boxed_5644_; size_t v_i_boxed_5645_; lean_object* v_res_5646_; 
v_sz_boxed_5644_ = lean_unbox_usize(v_sz_5638_);
lean_dec(v_sz_5638_);
v_i_boxed_5645_ = lean_unbox_usize(v_i_5639_);
lean_dec(v_i_5639_);
v_res_5646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_boxed_5644_, v_i_boxed_5645_, v_bs_5640_, v___y_5641_, v___y_5642_);
lean_dec_ref(v___y_5641_);
return v_res_5646_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object* v___x_5647_, lean_object* v_as_x27_5648_, lean_object* v_b_5649_, lean_object* v___y_5650_, lean_object* v___y_5651_, lean_object* v___y_5652_){
_start:
{
uint8_t v___x_221262__boxed_5653_; lean_object* v_res_5654_; 
v___x_221262__boxed_5653_ = lean_unbox(v___x_5647_);
v_res_5654_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_221262__boxed_5653_, v_as_x27_5648_, v_b_5649_, v___y_5650_, v___y_5651_);
lean_dec_ref(v___y_5650_);
lean_dec(v_as_x27_5648_);
return v_res_5654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object* v_sz_5655_, lean_object* v_i_5656_, lean_object* v_bs_5657_, lean_object* v___y_5658_, lean_object* v___y_5659_, lean_object* v___y_5660_){
_start:
{
size_t v_sz_boxed_5661_; size_t v_i_boxed_5662_; lean_object* v_res_5663_; 
v_sz_boxed_5661_ = lean_unbox_usize(v_sz_5655_);
lean_dec(v_sz_5655_);
v_i_boxed_5662_ = lean_unbox_usize(v_i_5656_);
lean_dec(v_i_5656_);
v_res_5663_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__15(v_sz_boxed_5661_, v_i_boxed_5662_, v_bs_5657_, v___y_5658_, v___y_5659_);
lean_dec_ref(v___y_5658_);
return v_res_5663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object* v_sz_5664_, lean_object* v_i_5665_, lean_object* v_bs_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_){
_start:
{
size_t v_sz_boxed_5670_; size_t v_i_boxed_5671_; lean_object* v_res_5672_; 
v_sz_boxed_5670_ = lean_unbox_usize(v_sz_5664_);
lean_dec(v_sz_5664_);
v_i_boxed_5671_ = lean_unbox_usize(v_i_5665_);
lean_dec(v_i_5665_);
v_res_5672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_boxed_5670_, v_i_boxed_5671_, v_bs_5666_, v___y_5667_, v___y_5668_);
lean_dec_ref(v___y_5667_);
return v_res_5672_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg___boxed(lean_object* v___x_5673_, lean_object* v_val_5674_, lean_object* v_as_x27_5675_, lean_object* v_b_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_){
_start:
{
uint8_t v___x_221566__boxed_5680_; lean_object* v_res_5681_; 
v___x_221566__boxed_5680_ = lean_unbox(v___x_5673_);
v_res_5681_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(v___x_221566__boxed_5680_, v_val_5674_, v_as_x27_5675_, v_b_5676_, v___y_5677_, v___y_5678_);
lean_dec_ref(v___y_5677_);
lean_dec(v_as_x27_5675_);
lean_dec_ref(v_val_5674_);
return v_res_5681_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object* v_e_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_){
_start:
{
lean_object* v_res_5686_; 
v_res_5686_ = l_LeanExport_dumpExprAux(v_e_5682_, v___y_5683_, v___y_5684_);
lean_dec_ref(v___y_5683_);
return v_res_5686_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object* v_c_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_){
_start:
{
lean_object* v_res_5691_; 
v_res_5691_ = l_LeanExport_dumpConstant(v_c_5687_, v___y_5688_, v___y_5689_);
lean_dec_ref(v___y_5688_);
return v_res_5691_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t v___x_5692_, lean_object* v_as_5693_, lean_object* v_as_x27_5694_, lean_object* v_b_5695_, lean_object* v_a_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_){
_start:
{
lean_object* v___x_5700_; 
v___x_5700_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_5692_, v_as_x27_5694_, v_b_5695_, v___y_5697_, v___y_5698_);
return v___x_5700_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object* v___x_5701_, lean_object* v_as_5702_, lean_object* v_as_x27_5703_, lean_object* v_b_5704_, lean_object* v_a_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_){
_start:
{
uint8_t v___x_226144__boxed_5709_; lean_object* v_res_5710_; 
v___x_226144__boxed_5709_ = lean_unbox(v___x_5701_);
v_res_5710_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(v___x_226144__boxed_5709_, v_as_5702_, v_as_x27_5703_, v_b_5704_, v_a_5705_, v___y_5706_, v___y_5707_);
lean_dec_ref(v___y_5706_);
lean_dec(v_as_x27_5703_);
lean_dec(v_as_5702_);
return v_res_5710_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t v___y_5711_, uint8_t v___x_5712_, lean_object* v_as_5713_, lean_object* v_as_x27_5714_, lean_object* v_b_5715_, lean_object* v_a_5716_, lean_object* v___y_5717_, lean_object* v___y_5718_){
_start:
{
lean_object* v___x_5720_; 
v___x_5720_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_5711_, v___x_5712_, v_as_x27_5714_, v_b_5715_, v___y_5717_, v___y_5718_);
return v___x_5720_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object* v___y_5721_, lean_object* v___x_5722_, lean_object* v_as_5723_, lean_object* v_as_x27_5724_, lean_object* v_b_5725_, lean_object* v_a_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_){
_start:
{
uint8_t v___y_226161__boxed_5730_; uint8_t v___x_226162__boxed_5731_; lean_object* v_res_5732_; 
v___y_226161__boxed_5730_ = lean_unbox(v___y_5721_);
v___x_226162__boxed_5731_ = lean_unbox(v___x_5722_);
v_res_5732_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(v___y_226161__boxed_5730_, v___x_226162__boxed_5731_, v_as_5723_, v_as_x27_5724_, v_b_5725_, v_a_5726_, v___y_5727_, v___y_5728_);
lean_dec_ref(v___y_5727_);
lean_dec(v_as_x27_5724_);
lean_dec(v_as_5723_);
return v_res_5732_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11(uint8_t v___x_5733_, lean_object* v_val_5734_, lean_object* v_as_5735_, lean_object* v_as_x27_5736_, lean_object* v_b_5737_, lean_object* v_a_5738_, lean_object* v___y_5739_, lean_object* v___y_5740_){
_start:
{
lean_object* v___x_5742_; 
v___x_5742_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___redArg(v___x_5733_, v_val_5734_, v_as_x27_5736_, v_b_5737_, v___y_5739_, v___y_5740_);
return v___x_5742_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object* v___x_5743_, lean_object* v_val_5744_, lean_object* v_as_5745_, lean_object* v_as_x27_5746_, lean_object* v_b_5747_, lean_object* v_a_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
uint8_t v___x_226181__boxed_5752_; lean_object* v_res_5753_; 
v___x_226181__boxed_5752_ = lean_unbox(v___x_5743_);
v_res_5753_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__11(v___x_226181__boxed_5752_, v_val_5744_, v_as_5745_, v_as_x27_5746_, v_b_5747_, v_a_5748_, v___y_5749_, v___y_5750_);
lean_dec_ref(v___y_5749_);
lean_dec(v_as_x27_5746_);
lean_dec(v_as_5745_);
lean_dec_ref(v_val_5744_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(lean_object* v_as_5754_, lean_object* v_as_x27_5755_, lean_object* v_b_5756_, lean_object* v_a_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_){
_start:
{
lean_object* v___x_5761_; 
v___x_5761_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v_as_x27_5755_, v_b_5756_, v___y_5758_, v___y_5759_);
return v___x_5761_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object* v_as_5762_, lean_object* v_as_x27_5763_, lean_object* v_b_5764_, lean_object* v_a_5765_, lean_object* v___y_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_){
_start:
{
lean_object* v_res_5769_; 
v_res_5769_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(v_as_5762_, v_as_x27_5763_, v_b_5764_, v_a_5765_, v___y_5766_, v___y_5767_);
lean_dec_ref(v___y_5766_);
lean_dec(v_as_x27_5763_);
lean_dec(v_as_5762_);
return v_res_5769_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21(lean_object* v_as_5770_, lean_object* v_as_x27_5771_, lean_object* v_b_5772_, lean_object* v_a_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_){
_start:
{
lean_object* v___x_5777_; 
v___x_5777_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___redArg(v_as_x27_5771_, v_b_5772_, v___y_5774_, v___y_5775_);
return v___x_5777_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object* v_as_5778_, lean_object* v_as_x27_5779_, lean_object* v_b_5780_, lean_object* v_a_5781_, lean_object* v___y_5782_, lean_object* v___y_5783_, lean_object* v___y_5784_){
_start:
{
lean_object* v_res_5785_; 
v_res_5785_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__21(v_as_5778_, v_as_x27_5779_, v_b_5780_, v_a_5781_, v___y_5782_, v___y_5783_);
lean_dec_ref(v___y_5782_);
lean_dec(v_as_x27_5779_);
lean_dec(v_as_5778_);
return v_res_5785_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1(void){
_start:
{
lean_object* v___x_5787_; lean_object* v___x_5788_; 
v___x_5787_ = l_Lean_versionString;
v___x_5788_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5788_, 0, v___x_5787_);
return v___x_5788_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2(void){
_start:
{
lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; 
v___x_5789_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1);
v___x_5790_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0));
v___x_5791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5791_, 0, v___x_5790_);
lean_ctor_set(v___x_5791_, 1, v___x_5789_);
return v___x_5791_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4(void){
_start:
{
lean_object* v___x_5793_; lean_object* v___x_5794_; 
v___x_5793_ = l_Lean_githash;
v___x_5794_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5794_, 0, v___x_5793_);
return v___x_5794_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5(void){
_start:
{
lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; 
v___x_5795_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4);
v___x_5796_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3));
v___x_5797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5797_, 0, v___x_5796_);
lean_ctor_set(v___x_5797_, 1, v___x_5795_);
return v___x_5797_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6(void){
_start:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; 
v___x_5798_ = lean_box(0);
v___x_5799_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5);
v___x_5800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5800_, 0, v___x_5799_);
lean_ctor_set(v___x_5800_, 1, v___x_5798_);
return v___x_5800_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7(void){
_start:
{
lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; 
v___x_5801_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6);
v___x_5802_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2);
v___x_5803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5803_, 0, v___x_5802_);
lean_ctor_set(v___x_5803_, 1, v___x_5801_);
return v___x_5803_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8(void){
_start:
{
lean_object* v___x_5804_; lean_object* v_leanMeta_5805_; 
v___x_5804_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7);
v_leanMeta_5805_ = l_Lean_Json_mkObj(v___x_5804_);
return v_leanMeta_5805_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17(void){
_start:
{
lean_object* v___x_5824_; lean_object* v_exporterMeta_5825_; 
v___x_5824_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16));
v_exporterMeta_5825_ = l_Lean_Json_mkObj(v___x_5824_);
return v_exporterMeta_5825_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18(void){
_start:
{
lean_object* v___x_5826_; lean_object* v_formatMeta_5827_; 
v___x_5826_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15));
v_formatMeta_5827_ = l_Lean_Json_mkObj(v___x_5826_);
return v_formatMeta_5827_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21(void){
_start:
{
lean_object* v_exporterMeta_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; 
v_exporterMeta_5830_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17);
v___x_5831_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20));
v___x_5832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5832_, 0, v___x_5831_);
lean_ctor_set(v___x_5832_, 1, v_exporterMeta_5830_);
return v___x_5832_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23(void){
_start:
{
lean_object* v_leanMeta_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; 
v_leanMeta_5834_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8);
v___x_5835_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22));
v___x_5836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5836_, 0, v___x_5835_);
lean_ctor_set(v___x_5836_, 1, v_leanMeta_5834_);
return v___x_5836_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25(void){
_start:
{
lean_object* v_formatMeta_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; 
v_formatMeta_5838_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18);
v___x_5839_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24));
v___x_5840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5840_, 0, v___x_5839_);
lean_ctor_set(v___x_5840_, 1, v_formatMeta_5838_);
return v___x_5840_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26(void){
_start:
{
lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; 
v___x_5841_ = lean_box(0);
v___x_5842_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25);
v___x_5843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5843_, 0, v___x_5842_);
lean_ctor_set(v___x_5843_, 1, v___x_5841_);
return v___x_5843_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27(void){
_start:
{
lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; 
v___x_5844_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26);
v___x_5845_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23);
v___x_5846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5846_, 0, v___x_5845_);
lean_ctor_set(v___x_5846_, 1, v___x_5844_);
return v___x_5846_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28(void){
_start:
{
lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; 
v___x_5847_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27);
v___x_5848_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21);
v___x_5849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5849_, 0, v___x_5848_);
lean_ctor_set(v___x_5849_, 1, v___x_5847_);
return v___x_5849_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29(void){
_start:
{
lean_object* v___x_5850_; lean_object* v___x_5851_; 
v___x_5850_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28);
v___x_5851_ = l_Lean_Json_mkObj(v___x_5850_);
return v___x_5851_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30(void){
_start:
{
lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; 
v___x_5852_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29);
v___x_5853_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19));
v___x_5854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5854_, 0, v___x_5853_);
lean_ctor_set(v___x_5854_, 1, v___x_5852_);
return v___x_5854_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31(void){
_start:
{
lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5855_ = lean_box(0);
v___x_5856_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30);
v___x_5857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5856_);
lean_ctor_set(v___x_5857_, 1, v___x_5855_);
return v___x_5857_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32(void){
_start:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31);
v___x_5859_ = l_Lean_Json_mkObj(v___x_5858_);
return v___x_5859_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata(void){
_start:
{
lean_object* v___x_5860_; 
v___x_5860_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32);
return v___x_5860_;
}
}
static lean_object* _init_l_LeanExport_dumpMetadata___redArg___closed__0(void){
_start:
{
lean_object* v___x_5861_; lean_object* v___x_5862_; 
v___x_5861_ = l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
v___x_5862_ = l_Lean_Json_compress(v___x_5861_);
return v___x_5862_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object* v___y_5863_){
_start:
{
lean_object* v___x_5865_; lean_object* v___x_5866_; 
v___x_5865_ = lean_obj_once(&l_LeanExport_dumpMetadata___redArg___closed__0, &l_LeanExport_dumpMetadata___redArg___closed__0_once, _init_l_LeanExport_dumpMetadata___redArg___closed__0);
v___x_5866_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_5865_);
if (lean_obj_tag(v___x_5866_) == 0)
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5875_; 
v_a_5867_ = lean_ctor_get(v___x_5866_, 0);
v_isSharedCheck_5875_ = !lean_is_exclusive(v___x_5866_);
if (v_isSharedCheck_5875_ == 0)
{
v___x_5869_ = v___x_5866_;
v_isShared_5870_ = v_isSharedCheck_5875_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v___x_5866_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5875_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5871_; lean_object* v___x_5873_; 
v___x_5871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5871_, 0, v_a_5867_);
lean_ctor_set(v___x_5871_, 1, v___y_5863_);
if (v_isShared_5870_ == 0)
{
lean_ctor_set(v___x_5869_, 0, v___x_5871_);
v___x_5873_ = v___x_5869_;
goto v_reusejp_5872_;
}
else
{
lean_object* v_reuseFailAlloc_5874_; 
v_reuseFailAlloc_5874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5874_, 0, v___x_5871_);
v___x_5873_ = v_reuseFailAlloc_5874_;
goto v_reusejp_5872_;
}
v_reusejp_5872_:
{
return v___x_5873_;
}
}
}
else
{
lean_object* v_a_5876_; lean_object* v___x_5878_; uint8_t v_isShared_5879_; uint8_t v_isSharedCheck_5883_; 
lean_dec_ref(v___y_5863_);
v_a_5876_ = lean_ctor_get(v___x_5866_, 0);
v_isSharedCheck_5883_ = !lean_is_exclusive(v___x_5866_);
if (v_isSharedCheck_5883_ == 0)
{
v___x_5878_ = v___x_5866_;
v_isShared_5879_ = v_isSharedCheck_5883_;
goto v_resetjp_5877_;
}
else
{
lean_inc(v_a_5876_);
lean_dec(v___x_5866_);
v___x_5878_ = lean_box(0);
v_isShared_5879_ = v_isSharedCheck_5883_;
goto v_resetjp_5877_;
}
v_resetjp_5877_:
{
lean_object* v___x_5881_; 
if (v_isShared_5879_ == 0)
{
v___x_5881_ = v___x_5878_;
goto v_reusejp_5880_;
}
else
{
lean_object* v_reuseFailAlloc_5882_; 
v_reuseFailAlloc_5882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5882_, 0, v_a_5876_);
v___x_5881_ = v_reuseFailAlloc_5882_;
goto v_reusejp_5880_;
}
v_reusejp_5880_:
{
return v___x_5881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object* v___y_5884_, lean_object* v___y_5885_){
_start:
{
lean_object* v_res_5886_; 
v_res_5886_ = l_LeanExport_dumpMetadata___redArg(v___y_5884_);
return v_res_5886_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object* v___y_5887_, lean_object* v___y_5888_){
_start:
{
lean_object* v___x_5890_; 
v___x_5890_ = l_LeanExport_dumpMetadata___redArg(v___y_5888_);
return v___x_5890_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object* v___y_5891_, lean_object* v___y_5892_, lean_object* v___y_5893_){
_start:
{
lean_object* v_res_5894_; 
v_res_5894_ = l_LeanExport_dumpMetadata(v___y_5891_, v___y_5892_);
lean_dec_ref(v___y_5891_);
return v_res_5894_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object* v_as_x27_5895_, lean_object* v_b_5896_, lean_object* v___y_5897_, lean_object* v___y_5898_){
_start:
{
if (lean_obj_tag(v_as_x27_5895_) == 0)
{
lean_object* v___x_5900_; lean_object* v___x_5901_; 
v___x_5900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5900_, 0, v_b_5896_);
lean_ctor_set(v___x_5900_, 1, v___y_5898_);
v___x_5901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5901_, 0, v___x_5900_);
return v___x_5901_;
}
else
{
lean_object* v_head_5902_; lean_object* v_tail_5903_; lean_object* v_visitedNames_5904_; lean_object* v_visitedLevels_5905_; lean_object* v_visitedExprs_5906_; lean_object* v_visitedConstants_5907_; uint8_t v_exportMData_5908_; uint8_t v_exportUnsafe_5909_; uint8_t v_ignoreMissing_5910_; lean_object* v_recursorMap_5911_; lean_object* v___x_5913_; uint8_t v_isShared_5914_; uint8_t v_isSharedCheck_5924_; 
v_head_5902_ = lean_ctor_get(v_as_x27_5895_, 0);
v_tail_5903_ = lean_ctor_get(v_as_x27_5895_, 1);
v_visitedNames_5904_ = lean_ctor_get(v___y_5898_, 0);
v_visitedLevels_5905_ = lean_ctor_get(v___y_5898_, 1);
v_visitedExprs_5906_ = lean_ctor_get(v___y_5898_, 2);
v_visitedConstants_5907_ = lean_ctor_get(v___y_5898_, 3);
v_exportMData_5908_ = lean_ctor_get_uint8(v___y_5898_, sizeof(void*)*6);
v_exportUnsafe_5909_ = lean_ctor_get_uint8(v___y_5898_, sizeof(void*)*6 + 1);
v_ignoreMissing_5910_ = lean_ctor_get_uint8(v___y_5898_, sizeof(void*)*6 + 2);
v_recursorMap_5911_ = lean_ctor_get(v___y_5898_, 5);
v_isSharedCheck_5924_ = !lean_is_exclusive(v___y_5898_);
if (v_isSharedCheck_5924_ == 0)
{
lean_object* v_unused_5925_; 
v_unused_5925_ = lean_ctor_get(v___y_5898_, 4);
lean_dec(v_unused_5925_);
v___x_5913_ = v___y_5898_;
v_isShared_5914_ = v_isSharedCheck_5924_;
goto v_resetjp_5912_;
}
else
{
lean_inc(v_recursorMap_5911_);
lean_inc(v_visitedConstants_5907_);
lean_inc(v_visitedExprs_5906_);
lean_inc(v_visitedLevels_5905_);
lean_inc(v_visitedNames_5904_);
lean_dec(v___y_5898_);
v___x_5913_ = lean_box(0);
v_isShared_5914_ = v_isSharedCheck_5924_;
goto v_resetjp_5912_;
}
v_resetjp_5912_:
{
lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5918_; 
v___x_5915_ = lean_box(0);
v___x_5916_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_5914_ == 0)
{
lean_ctor_set(v___x_5913_, 4, v___x_5916_);
v___x_5918_ = v___x_5913_;
goto v_reusejp_5917_;
}
else
{
lean_object* v_reuseFailAlloc_5923_; 
v_reuseFailAlloc_5923_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5923_, 0, v_visitedNames_5904_);
lean_ctor_set(v_reuseFailAlloc_5923_, 1, v_visitedLevels_5905_);
lean_ctor_set(v_reuseFailAlloc_5923_, 2, v_visitedExprs_5906_);
lean_ctor_set(v_reuseFailAlloc_5923_, 3, v_visitedConstants_5907_);
lean_ctor_set(v_reuseFailAlloc_5923_, 4, v___x_5916_);
lean_ctor_set(v_reuseFailAlloc_5923_, 5, v_recursorMap_5911_);
lean_ctor_set_uint8(v_reuseFailAlloc_5923_, sizeof(void*)*6, v_exportMData_5908_);
lean_ctor_set_uint8(v_reuseFailAlloc_5923_, sizeof(void*)*6 + 1, v_exportUnsafe_5909_);
lean_ctor_set_uint8(v_reuseFailAlloc_5923_, sizeof(void*)*6 + 2, v_ignoreMissing_5910_);
v___x_5918_ = v_reuseFailAlloc_5923_;
goto v_reusejp_5917_;
}
v_reusejp_5917_:
{
lean_object* v___x_5919_; 
lean_inc(v_head_5902_);
v___x_5919_ = l_LeanExport_dumpConstant(v_head_5902_, v___y_5897_, v___x_5918_);
if (lean_obj_tag(v___x_5919_) == 0)
{
lean_object* v_a_5920_; lean_object* v_snd_5921_; 
v_a_5920_ = lean_ctor_get(v___x_5919_, 0);
lean_inc(v_a_5920_);
lean_dec_ref_known(v___x_5919_, 1);
v_snd_5921_ = lean_ctor_get(v_a_5920_, 1);
lean_inc(v_snd_5921_);
lean_dec(v_a_5920_);
v_as_x27_5895_ = v_tail_5903_;
v_b_5896_ = v___x_5915_;
v___y_5898_ = v_snd_5921_;
goto _start;
}
else
{
return v___x_5919_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object* v_as_x27_5926_, lean_object* v_b_5927_, lean_object* v___y_5928_, lean_object* v___y_5929_, lean_object* v___y_5930_){
_start:
{
lean_object* v_res_5931_; 
v_res_5931_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_5926_, v_b_5927_, v___y_5928_, v___y_5929_);
lean_dec_ref(v___y_5928_);
lean_dec(v_as_x27_5926_);
return v_res_5931_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object* v_env_5932_, lean_object* v_cliOptions_5933_, lean_object* v___y_5934_, lean_object* v___y_5935_, lean_object* v___y_5936_){
_start:
{
lean_object* v___x_5938_; 
v___x_5938_ = l_LeanExport_initState(v_env_5932_, v_cliOptions_5933_, v___y_5935_, v___y_5936_);
if (lean_obj_tag(v___x_5938_) == 0)
{
lean_object* v_a_5939_; lean_object* v_snd_5940_; lean_object* v___x_5941_; 
v_a_5939_ = lean_ctor_get(v___x_5938_, 0);
lean_inc(v_a_5939_);
lean_dec_ref_known(v___x_5938_, 1);
v_snd_5940_ = lean_ctor_get(v_a_5939_, 1);
lean_inc(v_snd_5940_);
lean_dec(v_a_5939_);
v___x_5941_ = l_LeanExport_dumpMetadata___redArg(v_snd_5940_);
if (lean_obj_tag(v___x_5941_) == 0)
{
lean_object* v_a_5942_; lean_object* v_snd_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; 
v_a_5942_ = lean_ctor_get(v___x_5941_, 0);
lean_inc(v_a_5942_);
lean_dec_ref_known(v___x_5941_, 1);
v_snd_5943_ = lean_ctor_get(v_a_5942_, 1);
lean_inc(v_snd_5943_);
lean_dec(v_a_5942_);
v___x_5944_ = lean_box(0);
v___x_5945_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v___y_5934_, v___x_5944_, v___y_5935_, v_snd_5943_);
if (lean_obj_tag(v___x_5945_) == 0)
{
lean_object* v_a_5946_; lean_object* v___x_5948_; uint8_t v_isShared_5949_; uint8_t v_isSharedCheck_5962_; 
v_a_5946_ = lean_ctor_get(v___x_5945_, 0);
v_isSharedCheck_5962_ = !lean_is_exclusive(v___x_5945_);
if (v_isSharedCheck_5962_ == 0)
{
v___x_5948_ = v___x_5945_;
v_isShared_5949_ = v_isSharedCheck_5962_;
goto v_resetjp_5947_;
}
else
{
lean_inc(v_a_5946_);
lean_dec(v___x_5945_);
v___x_5948_ = lean_box(0);
v_isShared_5949_ = v_isSharedCheck_5962_;
goto v_resetjp_5947_;
}
v_resetjp_5947_:
{
lean_object* v_snd_5950_; lean_object* v___x_5952_; uint8_t v_isShared_5953_; uint8_t v_isSharedCheck_5960_; 
v_snd_5950_ = lean_ctor_get(v_a_5946_, 1);
v_isSharedCheck_5960_ = !lean_is_exclusive(v_a_5946_);
if (v_isSharedCheck_5960_ == 0)
{
lean_object* v_unused_5961_; 
v_unused_5961_ = lean_ctor_get(v_a_5946_, 0);
lean_dec(v_unused_5961_);
v___x_5952_ = v_a_5946_;
v_isShared_5953_ = v_isSharedCheck_5960_;
goto v_resetjp_5951_;
}
else
{
lean_inc(v_snd_5950_);
lean_dec(v_a_5946_);
v___x_5952_ = lean_box(0);
v_isShared_5953_ = v_isSharedCheck_5960_;
goto v_resetjp_5951_;
}
v_resetjp_5951_:
{
lean_object* v___x_5955_; 
if (v_isShared_5953_ == 0)
{
lean_ctor_set(v___x_5952_, 0, v___x_5944_);
v___x_5955_ = v___x_5952_;
goto v_reusejp_5954_;
}
else
{
lean_object* v_reuseFailAlloc_5959_; 
v_reuseFailAlloc_5959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5959_, 0, v___x_5944_);
lean_ctor_set(v_reuseFailAlloc_5959_, 1, v_snd_5950_);
v___x_5955_ = v_reuseFailAlloc_5959_;
goto v_reusejp_5954_;
}
v_reusejp_5954_:
{
lean_object* v___x_5957_; 
if (v_isShared_5949_ == 0)
{
lean_ctor_set(v___x_5948_, 0, v___x_5955_);
v___x_5957_ = v___x_5948_;
goto v_reusejp_5956_;
}
else
{
lean_object* v_reuseFailAlloc_5958_; 
v_reuseFailAlloc_5958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5958_, 0, v___x_5955_);
v___x_5957_ = v_reuseFailAlloc_5958_;
goto v_reusejp_5956_;
}
v_reusejp_5956_:
{
return v___x_5957_;
}
}
}
}
}
else
{
return v___x_5945_;
}
}
else
{
return v___x_5941_;
}
}
else
{
return v___x_5938_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object* v_env_5963_, lean_object* v_cliOptions_5964_, lean_object* v___y_5965_, lean_object* v___y_5966_, lean_object* v___y_5967_, lean_object* v___y_5968_){
_start:
{
lean_object* v_res_5969_; 
v_res_5969_ = l_LeanExport_dumpEnv___lam__0(v_env_5963_, v_cliOptions_5964_, v___y_5965_, v___y_5966_, v___y_5967_);
lean_dec_ref(v___y_5966_);
lean_dec(v___y_5965_);
lean_dec(v_cliOptions_5964_);
return v_res_5969_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0(lean_object* v_es_5970_, lean_object* v_a_5971_, lean_object* v_b_5972_){
_start:
{
lean_object* v___x_5973_; lean_object* v___x_5974_; 
v___x_5973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5973_, 0, v_a_5971_);
lean_ctor_set(v___x_5973_, 1, v_b_5972_);
v___x_5974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5974_, 0, v___x_5973_);
lean_ctor_set(v___x_5974_, 1, v_es_5970_);
return v___x_5974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(lean_object* v_f_5975_, lean_object* v_x_5976_, lean_object* v_x_5977_){
_start:
{
if (lean_obj_tag(v_x_5977_) == 0)
{
lean_dec(v_f_5975_);
return v_x_5976_;
}
else
{
lean_object* v_key_5978_; lean_object* v_value_5979_; lean_object* v_tail_5980_; lean_object* v___x_5981_; 
v_key_5978_ = lean_ctor_get(v_x_5977_, 0);
lean_inc(v_key_5978_);
v_value_5979_ = lean_ctor_get(v_x_5977_, 1);
lean_inc(v_value_5979_);
v_tail_5980_ = lean_ctor_get(v_x_5977_, 2);
lean_inc(v_tail_5980_);
lean_dec_ref_known(v_x_5977_, 3);
lean_inc(v_f_5975_);
v___x_5981_ = lean_apply_3(v_f_5975_, v_x_5976_, v_key_5978_, v_value_5979_);
v_x_5976_ = v___x_5981_;
v_x_5977_ = v_tail_5980_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(lean_object* v_f_5983_, lean_object* v_as_5984_, size_t v_i_5985_, size_t v_stop_5986_, lean_object* v_b_5987_){
_start:
{
uint8_t v___x_5988_; 
v___x_5988_ = lean_usize_dec_eq(v_i_5985_, v_stop_5986_);
if (v___x_5988_ == 0)
{
lean_object* v___x_5989_; lean_object* v___x_5990_; size_t v___x_5991_; size_t v___x_5992_; 
v___x_5989_ = lean_array_uget_borrowed(v_as_5984_, v_i_5985_);
lean_inc(v___x_5989_);
lean_inc(v_f_5983_);
v___x_5990_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(v_f_5983_, v_b_5987_, v___x_5989_);
v___x_5991_ = ((size_t)1ULL);
v___x_5992_ = lean_usize_add(v_i_5985_, v___x_5991_);
v_i_5985_ = v___x_5992_;
v_b_5987_ = v___x_5990_;
goto _start;
}
else
{
lean_dec(v_f_5983_);
return v_b_5987_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_f_5994_, lean_object* v_as_5995_, lean_object* v_i_5996_, lean_object* v_stop_5997_, lean_object* v_b_5998_){
_start:
{
size_t v_i_boxed_5999_; size_t v_stop_boxed_6000_; lean_object* v_res_6001_; 
v_i_boxed_5999_ = lean_unbox_usize(v_i_5996_);
lean_dec(v_i_5996_);
v_stop_boxed_6000_ = lean_unbox_usize(v_stop_5997_);
lean_dec(v_stop_5997_);
v_res_6001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_5994_, v_as_5995_, v_i_boxed_5999_, v_stop_boxed_6000_, v_b_5998_);
lean_dec_ref(v_as_5995_);
return v_res_6001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0(lean_object* v_f_6002_, lean_object* v_x1_6003_, lean_object* v_x2_6004_, lean_object* v_x3_6005_){
_start:
{
lean_object* v___x_6006_; 
v___x_6006_ = lean_apply_3(v_f_6002_, v_x1_6003_, v_x2_6004_, v_x3_6005_);
return v___x_6006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(lean_object* v_f_6007_, lean_object* v_keys_6008_, lean_object* v_vals_6009_, lean_object* v_i_6010_, lean_object* v_acc_6011_){
_start:
{
lean_object* v___x_6012_; uint8_t v___x_6013_; 
v___x_6012_ = lean_array_get_size(v_keys_6008_);
v___x_6013_ = lean_nat_dec_lt(v_i_6010_, v___x_6012_);
if (v___x_6013_ == 0)
{
lean_dec(v_i_6010_);
lean_dec(v_f_6007_);
return v_acc_6011_;
}
else
{
lean_object* v_k_6014_; lean_object* v_v_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; 
v_k_6014_ = lean_array_fget_borrowed(v_keys_6008_, v_i_6010_);
v_v_6015_ = lean_array_fget_borrowed(v_vals_6009_, v_i_6010_);
lean_inc(v_f_6007_);
lean_inc(v_v_6015_);
lean_inc(v_k_6014_);
v___x_6016_ = lean_apply_3(v_f_6007_, v_acc_6011_, v_k_6014_, v_v_6015_);
v___x_6017_ = lean_unsigned_to_nat(1u);
v___x_6018_ = lean_nat_add(v_i_6010_, v___x_6017_);
lean_dec(v_i_6010_);
v_i_6010_ = v___x_6018_;
v_acc_6011_ = v___x_6016_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg___boxed(lean_object* v_f_6020_, lean_object* v_keys_6021_, lean_object* v_vals_6022_, lean_object* v_i_6023_, lean_object* v_acc_6024_){
_start:
{
lean_object* v_res_6025_; 
v_res_6025_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6020_, v_keys_6021_, v_vals_6022_, v_i_6023_, v_acc_6024_);
lean_dec_ref(v_vals_6022_);
lean_dec_ref(v_keys_6021_);
return v_res_6025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(lean_object* v_f_6026_, lean_object* v_as_6027_, size_t v_i_6028_, size_t v_stop_6029_, lean_object* v_b_6030_){
_start:
{
lean_object* v___y_6032_; uint8_t v___x_6036_; 
v___x_6036_ = lean_usize_dec_eq(v_i_6028_, v_stop_6029_);
if (v___x_6036_ == 0)
{
lean_object* v___x_6037_; 
v___x_6037_ = lean_array_uget_borrowed(v_as_6027_, v_i_6028_);
switch(lean_obj_tag(v___x_6037_))
{
case 0:
{
lean_object* v_key_6038_; lean_object* v_val_6039_; lean_object* v___x_6040_; 
v_key_6038_ = lean_ctor_get(v___x_6037_, 0);
v_val_6039_ = lean_ctor_get(v___x_6037_, 1);
lean_inc(v_f_6026_);
lean_inc(v_val_6039_);
lean_inc(v_key_6038_);
v___x_6040_ = lean_apply_3(v_f_6026_, v_b_6030_, v_key_6038_, v_val_6039_);
v___y_6032_ = v___x_6040_;
goto v___jp_6031_;
}
case 1:
{
lean_object* v_node_6041_; lean_object* v___x_6042_; 
v_node_6041_ = lean_ctor_get(v___x_6037_, 0);
lean_inc(v_f_6026_);
v___x_6042_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6026_, v_node_6041_, v_b_6030_);
v___y_6032_ = v___x_6042_;
goto v___jp_6031_;
}
default: 
{
v___y_6032_ = v_b_6030_;
goto v___jp_6031_;
}
}
}
else
{
lean_dec(v_f_6026_);
return v_b_6030_;
}
v___jp_6031_:
{
size_t v___x_6033_; size_t v___x_6034_; 
v___x_6033_ = ((size_t)1ULL);
v___x_6034_ = lean_usize_add(v_i_6028_, v___x_6033_);
v_i_6028_ = v___x_6034_;
v_b_6030_ = v___y_6032_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object* v_f_6043_, lean_object* v_x_6044_, lean_object* v_x_6045_){
_start:
{
if (lean_obj_tag(v_x_6044_) == 0)
{
lean_object* v_es_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; uint8_t v___x_6049_; 
v_es_6046_ = lean_ctor_get(v_x_6044_, 0);
v___x_6047_ = lean_unsigned_to_nat(0u);
v___x_6048_ = lean_array_get_size(v_es_6046_);
v___x_6049_ = lean_nat_dec_lt(v___x_6047_, v___x_6048_);
if (v___x_6049_ == 0)
{
lean_dec(v_f_6043_);
return v_x_6045_;
}
else
{
size_t v___x_6050_; size_t v___x_6051_; lean_object* v___x_6052_; 
v___x_6050_ = ((size_t)0ULL);
v___x_6051_ = lean_usize_of_nat(v___x_6048_);
v___x_6052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6043_, v_es_6046_, v___x_6050_, v___x_6051_, v_x_6045_);
return v___x_6052_;
}
}
else
{
lean_object* v_ks_6053_; lean_object* v_vs_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; 
v_ks_6053_ = lean_ctor_get(v_x_6044_, 0);
v_vs_6054_ = lean_ctor_get(v_x_6044_, 1);
v___x_6055_ = lean_unsigned_to_nat(0u);
v___x_6056_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6043_, v_ks_6053_, v_vs_6054_, v___x_6055_, v_x_6045_);
return v___x_6056_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg___boxed(lean_object* v_f_6057_, lean_object* v_x_6058_, lean_object* v_x_6059_){
_start:
{
lean_object* v_res_6060_; 
v_res_6060_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6057_, v_x_6058_, v_x_6059_);
lean_dec_ref(v_x_6058_);
return v_res_6060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_f_6061_, lean_object* v_as_6062_, lean_object* v_i_6063_, lean_object* v_stop_6064_, lean_object* v_b_6065_){
_start:
{
size_t v_i_boxed_6066_; size_t v_stop_boxed_6067_; lean_object* v_res_6068_; 
v_i_boxed_6066_ = lean_unbox_usize(v_i_6063_);
lean_dec(v_i_6063_);
v_stop_boxed_6067_ = lean_unbox_usize(v_stop_6064_);
lean_dec(v_stop_6064_);
v_res_6068_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6061_, v_as_6062_, v_i_boxed_6066_, v_stop_boxed_6067_, v_b_6065_);
lean_dec_ref(v_as_6062_);
return v_res_6068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(lean_object* v_map_6069_, lean_object* v_f_6070_, lean_object* v_init_6071_){
_start:
{
lean_object* v___f_6072_; lean_object* v___x_6073_; 
v___f_6072_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6072_, 0, v_f_6070_);
v___x_6073_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v___f_6072_, v_map_6069_, v_init_6071_);
return v___x_6073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_map_6074_, lean_object* v_f_6075_, lean_object* v_init_6076_){
_start:
{
lean_object* v_res_6077_; 
v_res_6077_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_6074_, v_f_6075_, v_init_6076_);
lean_dec_ref(v_map_6074_);
return v_res_6077_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(lean_object* v_f_6078_, lean_object* v_init_6079_, lean_object* v_m_6080_){
_start:
{
lean_object* v_map_u2081_6081_; lean_object* v_map_u2082_6082_; lean_object* v_buckets_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; uint8_t v___x_6086_; 
v_map_u2081_6081_ = lean_ctor_get(v_m_6080_, 0);
v_map_u2082_6082_ = lean_ctor_get(v_m_6080_, 1);
v_buckets_6083_ = lean_ctor_get(v_map_u2081_6081_, 1);
v___x_6084_ = lean_unsigned_to_nat(0u);
v___x_6085_ = lean_array_get_size(v_buckets_6083_);
v___x_6086_ = lean_nat_dec_lt(v___x_6084_, v___x_6085_);
if (v___x_6086_ == 0)
{
lean_object* v___x_6087_; 
v___x_6087_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_u2082_6082_, v_f_6078_, v_init_6079_);
return v___x_6087_;
}
else
{
size_t v___x_6088_; size_t v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; 
v___x_6088_ = ((size_t)0ULL);
v___x_6089_ = lean_usize_of_nat(v___x_6085_);
lean_inc(v_f_6078_);
v___x_6090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6078_, v_buckets_6083_, v___x_6088_, v___x_6089_, v_init_6079_);
v___x_6091_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_u2082_6082_, v_f_6078_, v___x_6090_);
return v___x_6091_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg___boxed(lean_object* v_f_6092_, lean_object* v_init_6093_, lean_object* v_m_6094_){
_start:
{
lean_object* v_res_6095_; 
v_res_6095_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v_f_6092_, v_init_6093_, v_m_6094_);
lean_dec_ref(v_m_6094_);
return v_res_6095_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(lean_object* v_m_6097_){
_start:
{
lean_object* v___f_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; 
v___f_6098_ = ((lean_object*)(l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0));
v___x_6099_ = lean_box(0);
v___x_6100_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v___f_6098_, v___x_6099_, v_m_6097_);
return v___x_6100_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___boxed(lean_object* v_m_6101_){
_start:
{
lean_object* v_res_6102_; 
v_res_6102_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v_m_6101_);
lean_dec_ref(v_m_6101_);
return v_res_6102_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(lean_object* v_a_6103_, lean_object* v_a_6104_){
_start:
{
if (lean_obj_tag(v_a_6103_) == 0)
{
lean_object* v___x_6105_; 
v___x_6105_ = l_List_reverse___redArg(v_a_6104_);
return v___x_6105_;
}
else
{
lean_object* v_head_6106_; lean_object* v_tail_6107_; lean_object* v___x_6109_; uint8_t v_isShared_6110_; uint8_t v_isSharedCheck_6117_; 
v_head_6106_ = lean_ctor_get(v_a_6103_, 0);
v_tail_6107_ = lean_ctor_get(v_a_6103_, 1);
v_isSharedCheck_6117_ = !lean_is_exclusive(v_a_6103_);
if (v_isSharedCheck_6117_ == 0)
{
v___x_6109_ = v_a_6103_;
v_isShared_6110_ = v_isSharedCheck_6117_;
goto v_resetjp_6108_;
}
else
{
lean_inc(v_tail_6107_);
lean_inc(v_head_6106_);
lean_dec(v_a_6103_);
v___x_6109_ = lean_box(0);
v_isShared_6110_ = v_isSharedCheck_6117_;
goto v_resetjp_6108_;
}
v_resetjp_6108_:
{
uint8_t v___x_6111_; 
v___x_6111_ = l_Lean_Name_isInternal(v_head_6106_);
if (v___x_6111_ == 0)
{
lean_object* v___x_6113_; 
if (v_isShared_6110_ == 0)
{
lean_ctor_set(v___x_6109_, 1, v_a_6104_);
v___x_6113_ = v___x_6109_;
goto v_reusejp_6112_;
}
else
{
lean_object* v_reuseFailAlloc_6115_; 
v_reuseFailAlloc_6115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6115_, 0, v_head_6106_);
lean_ctor_set(v_reuseFailAlloc_6115_, 1, v_a_6104_);
v___x_6113_ = v_reuseFailAlloc_6115_;
goto v_reusejp_6112_;
}
v_reusejp_6112_:
{
v_a_6103_ = v_tail_6107_;
v_a_6104_ = v___x_6113_;
goto _start;
}
}
else
{
lean_del_object(v___x_6109_);
lean_dec(v_head_6106_);
v_a_6103_ = v_tail_6107_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object* v_a_6118_, lean_object* v_a_6119_){
_start:
{
if (lean_obj_tag(v_a_6118_) == 0)
{
lean_object* v___x_6120_; 
v___x_6120_ = l_List_reverse___redArg(v_a_6119_);
return v___x_6120_;
}
else
{
lean_object* v_head_6121_; lean_object* v_tail_6122_; lean_object* v___x_6124_; uint8_t v_isShared_6125_; uint8_t v_isSharedCheck_6131_; 
v_head_6121_ = lean_ctor_get(v_a_6118_, 0);
v_tail_6122_ = lean_ctor_get(v_a_6118_, 1);
v_isSharedCheck_6131_ = !lean_is_exclusive(v_a_6118_);
if (v_isSharedCheck_6131_ == 0)
{
v___x_6124_ = v_a_6118_;
v_isShared_6125_ = v_isSharedCheck_6131_;
goto v_resetjp_6123_;
}
else
{
lean_inc(v_tail_6122_);
lean_inc(v_head_6121_);
lean_dec(v_a_6118_);
v___x_6124_ = lean_box(0);
v_isShared_6125_ = v_isSharedCheck_6131_;
goto v_resetjp_6123_;
}
v_resetjp_6123_:
{
lean_object* v_fst_6126_; lean_object* v___x_6128_; 
v_fst_6126_ = lean_ctor_get(v_head_6121_, 0);
lean_inc(v_fst_6126_);
lean_dec(v_head_6121_);
if (v_isShared_6125_ == 0)
{
lean_ctor_set(v___x_6124_, 1, v_a_6119_);
lean_ctor_set(v___x_6124_, 0, v_fst_6126_);
v___x_6128_ = v___x_6124_;
goto v_reusejp_6127_;
}
else
{
lean_object* v_reuseFailAlloc_6130_; 
v_reuseFailAlloc_6130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6130_, 0, v_fst_6126_);
lean_ctor_set(v_reuseFailAlloc_6130_, 1, v_a_6119_);
v___x_6128_ = v_reuseFailAlloc_6130_;
goto v_reusejp_6127_;
}
v_reusejp_6127_:
{
v_a_6118_ = v_tail_6122_;
v_a_6119_ = v___x_6128_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object* v_env_6132_, lean_object* v_constants_x3f_6133_, lean_object* v_cliOptions_6134_){
_start:
{
lean_object* v___y_6137_; 
if (lean_obj_tag(v_constants_x3f_6133_) == 0)
{
lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; 
lean_inc_ref(v_env_6132_);
v___x_6140_ = l_Lean_Environment_constants(v_env_6132_);
v___x_6141_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v___x_6140_);
lean_dec_ref(v___x_6140_);
v___x_6142_ = lean_box(0);
v___x_6143_ = l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(v___x_6141_, v___x_6142_);
v___x_6144_ = l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(v___x_6143_, v___x_6142_);
v___y_6137_ = v___x_6144_;
goto v___jp_6136_;
}
else
{
lean_object* v_val_6145_; 
v_val_6145_ = lean_ctor_get(v_constants_x3f_6133_, 0);
lean_inc(v_val_6145_);
lean_dec_ref_known(v_constants_x3f_6133_, 1);
v___y_6137_ = v_val_6145_;
goto v___jp_6136_;
}
v___jp_6136_:
{
lean_object* v___f_6138_; lean_object* v___x_6139_; 
lean_inc_ref(v_env_6132_);
v___f_6138_ = lean_alloc_closure((void*)(l_LeanExport_dumpEnv___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6138_, 0, v_env_6132_);
lean_closure_set(v___f_6138_, 1, v_cliOptions_6134_);
lean_closure_set(v___f_6138_, 2, v___y_6137_);
v___x_6139_ = l_LeanExport_M_run___redArg(v_env_6132_, v___f_6138_);
return v___x_6139_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object* v_env_6146_, lean_object* v_constants_x3f_6147_, lean_object* v_cliOptions_6148_, lean_object* v___y_6149_){
_start:
{
lean_object* v_res_6150_; 
v_res_6150_ = l_LeanExport_dumpEnv(v_env_6146_, v_constants_x3f_6147_, v_cliOptions_6148_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object* v_as_6151_, lean_object* v_as_x27_6152_, lean_object* v_b_6153_, lean_object* v_a_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_){
_start:
{
lean_object* v___x_6158_; 
v___x_6158_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6152_, v_b_6153_, v___y_6155_, v___y_6156_);
return v___x_6158_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object* v_as_6159_, lean_object* v_as_x27_6160_, lean_object* v_b_6161_, lean_object* v_a_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_){
_start:
{
lean_object* v_res_6166_; 
v_res_6166_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(v_as_6159_, v_as_x27_6160_, v_b_6161_, v_a_6162_, v___y_6163_, v___y_6164_);
lean_dec_ref(v___y_6163_);
lean_dec(v_as_x27_6160_);
lean_dec(v_as_6159_);
return v_res_6166_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(lean_object* v_00_u03b2_6167_, lean_object* v_m_6168_){
_start:
{
lean_object* v___x_6169_; 
v___x_6169_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v_m_6168_);
return v___x_6169_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___boxed(lean_object* v_00_u03b2_6170_, lean_object* v_m_6171_){
_start:
{
lean_object* v_res_6172_; 
v_res_6172_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(v_00_u03b2_6170_, v_m_6171_);
lean_dec_ref(v_m_6171_);
return v_res_6172_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(lean_object* v_00_u03b2_6173_, lean_object* v_00_u03c3_6174_, lean_object* v_f_6175_, lean_object* v_init_6176_, lean_object* v_m_6177_){
_start:
{
lean_object* v___x_6178_; 
v___x_6178_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v_f_6175_, v_init_6176_, v_m_6177_);
return v___x_6178_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___boxed(lean_object* v_00_u03b2_6179_, lean_object* v_00_u03c3_6180_, lean_object* v_f_6181_, lean_object* v_init_6182_, lean_object* v_m_6183_){
_start:
{
lean_object* v_res_6184_; 
v_res_6184_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(v_00_u03b2_6179_, v_00_u03c3_6180_, v_f_6181_, v_init_6182_, v_m_6183_);
lean_dec_ref(v_m_6183_);
return v_res_6184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_6185_, lean_object* v_00_u03c3_6186_, lean_object* v_f_6187_, lean_object* v_x_6188_, lean_object* v_x_6189_){
_start:
{
lean_object* v___x_6190_; 
v___x_6190_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(v_f_6187_, v_x_6188_, v_x_6189_);
return v___x_6190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(lean_object* v_00_u03c3_6191_, lean_object* v_00_u03b2_6192_, lean_object* v_map_6193_, lean_object* v_f_6194_, lean_object* v_init_6195_){
_start:
{
lean_object* v___x_6196_; 
v___x_6196_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_6193_, v_f_6194_, v_init_6195_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6197_, lean_object* v_00_u03b2_6198_, lean_object* v_map_6199_, lean_object* v_f_6200_, lean_object* v_init_6201_){
_start:
{
lean_object* v_res_6202_; 
v_res_6202_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(v_00_u03c3_6197_, v_00_u03b2_6198_, v_map_6199_, v_f_6200_, v_init_6201_);
lean_dec_ref(v_map_6199_);
return v_res_6202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_6203_, lean_object* v_00_u03c3_6204_, lean_object* v_f_6205_, lean_object* v_as_6206_, size_t v_i_6207_, size_t v_stop_6208_, lean_object* v_b_6209_){
_start:
{
lean_object* v___x_6210_; 
v___x_6210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6205_, v_as_6206_, v_i_6207_, v_stop_6208_, v_b_6209_);
return v___x_6210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_6211_, lean_object* v_00_u03c3_6212_, lean_object* v_f_6213_, lean_object* v_as_6214_, lean_object* v_i_6215_, lean_object* v_stop_6216_, lean_object* v_b_6217_){
_start:
{
size_t v_i_boxed_6218_; size_t v_stop_boxed_6219_; lean_object* v_res_6220_; 
v_i_boxed_6218_ = lean_unbox_usize(v_i_6215_);
lean_dec(v_i_6215_);
v_stop_boxed_6219_ = lean_unbox_usize(v_stop_6216_);
lean_dec(v_stop_6216_);
v_res_6220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(v_00_u03b2_6211_, v_00_u03c3_6212_, v_f_6213_, v_as_6214_, v_i_boxed_6218_, v_stop_boxed_6219_, v_b_6217_);
lean_dec_ref(v_as_6214_);
return v_res_6220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(lean_object* v_map_6221_, lean_object* v_f_6222_, lean_object* v_init_6223_){
_start:
{
lean_object* v___x_6224_; 
v___x_6224_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6222_, v_map_6221_, v_init_6223_);
return v___x_6224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_map_6225_, lean_object* v_f_6226_, lean_object* v_init_6227_){
_start:
{
lean_object* v_res_6228_; 
v_res_6228_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(v_map_6225_, v_f_6226_, v_init_6227_);
lean_dec_ref(v_map_6225_);
return v_res_6228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(lean_object* v_00_u03c3_6229_, lean_object* v_00_u03b2_6230_, lean_object* v_map_6231_, lean_object* v_f_6232_, lean_object* v_init_6233_){
_start:
{
lean_object* v___x_6234_; 
v___x_6234_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6232_, v_map_6231_, v_init_6233_);
return v___x_6234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03c3_6235_, lean_object* v_00_u03b2_6236_, lean_object* v_map_6237_, lean_object* v_f_6238_, lean_object* v_init_6239_){
_start:
{
lean_object* v_res_6240_; 
v_res_6240_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(v_00_u03c3_6235_, v_00_u03b2_6236_, v_map_6237_, v_f_6238_, v_init_6239_);
lean_dec_ref(v_map_6237_);
return v_res_6240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object* v_00_u03c3_6241_, lean_object* v_00_u03b1_6242_, lean_object* v_00_u03b2_6243_, lean_object* v_f_6244_, lean_object* v_x_6245_, lean_object* v_x_6246_){
_start:
{
lean_object* v___x_6247_; 
v___x_6247_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6244_, v_x_6245_, v_x_6246_);
return v___x_6247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_00_u03c3_6248_, lean_object* v_00_u03b1_6249_, lean_object* v_00_u03b2_6250_, lean_object* v_f_6251_, lean_object* v_x_6252_, lean_object* v_x_6253_){
_start:
{
lean_object* v_res_6254_; 
v_res_6254_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(v_00_u03c3_6248_, v_00_u03b1_6249_, v_00_u03b2_6250_, v_f_6251_, v_x_6252_, v_x_6253_);
lean_dec_ref(v_x_6252_);
return v_res_6254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_6255_, lean_object* v_00_u03b2_6256_, lean_object* v_00_u03c3_6257_, lean_object* v_f_6258_, lean_object* v_as_6259_, size_t v_i_6260_, size_t v_stop_6261_, lean_object* v_b_6262_){
_start:
{
lean_object* v___x_6263_; 
v___x_6263_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6258_, v_as_6259_, v_i_6260_, v_stop_6261_, v_b_6262_);
return v___x_6263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_6264_, lean_object* v_00_u03b2_6265_, lean_object* v_00_u03c3_6266_, lean_object* v_f_6267_, lean_object* v_as_6268_, lean_object* v_i_6269_, lean_object* v_stop_6270_, lean_object* v_b_6271_){
_start:
{
size_t v_i_boxed_6272_; size_t v_stop_boxed_6273_; lean_object* v_res_6274_; 
v_i_boxed_6272_ = lean_unbox_usize(v_i_6269_);
lean_dec(v_i_6269_);
v_stop_boxed_6273_ = lean_unbox_usize(v_stop_6270_);
lean_dec(v_stop_6270_);
v_res_6274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(v_00_u03b1_6264_, v_00_u03b2_6265_, v_00_u03c3_6266_, v_f_6267_, v_as_6268_, v_i_boxed_6272_, v_stop_boxed_6273_, v_b_6271_);
lean_dec_ref(v_as_6268_);
return v_res_6274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(lean_object* v_00_u03c3_6275_, lean_object* v_00_u03b1_6276_, lean_object* v_00_u03b2_6277_, lean_object* v_f_6278_, lean_object* v_keys_6279_, lean_object* v_vals_6280_, lean_object* v_heq_6281_, lean_object* v_i_6282_, lean_object* v_acc_6283_){
_start:
{
lean_object* v___x_6284_; 
v___x_6284_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6278_, v_keys_6279_, v_vals_6280_, v_i_6282_, v_acc_6283_);
return v___x_6284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___boxed(lean_object* v_00_u03c3_6285_, lean_object* v_00_u03b1_6286_, lean_object* v_00_u03b2_6287_, lean_object* v_f_6288_, lean_object* v_keys_6289_, lean_object* v_vals_6290_, lean_object* v_heq_6291_, lean_object* v_i_6292_, lean_object* v_acc_6293_){
_start:
{
lean_object* v_res_6294_; 
v_res_6294_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(v_00_u03c3_6285_, v_00_u03b1_6286_, v_00_u03b2_6287_, v_f_6288_, v_keys_6289_, v_vals_6290_, v_heq_6291_, v_i_6292_, v_acc_6293_);
lean_dec_ref(v_vals_6290_);
lean_dec_ref(v_keys_6289_);
return v_res_6294_;
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
