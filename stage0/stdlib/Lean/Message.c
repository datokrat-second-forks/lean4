// Lean compiler output
// Module: Lean.Message
// Imports: public import Init.Data.Slice.Array public import Lean.Util.PPExt public import Lean.Util.Sorry import Init.Data.String.Search import Init.Data.Format.Macro import Init.Data.Iterators.Consumers.Collect import Init.Data.String.Length
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_formatRawGoal(lean_object*);
lean_object* l_Lean_ppGoal(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
double lean_float_sub(double, double);
lean_object* lean_float_to_string(double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_beq(double, double);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ppTerm(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_ppExprWithInfos(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_instToJsonPosition_toJson(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_simpMacroScopes(lean_object*);
lean_object* l_Lean_ppConstNameWithInfos(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_merge(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_ofKernelEnv(lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Level_format(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_ppLevel(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_List_getLast_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Option_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
extern lean_object* l_Lean_instInhabitedPosition_default;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__0 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__0_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__1 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__1_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__2 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__2_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__3 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__3_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__4 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__4_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__5 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedMessageSeverity_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedMessageSeverity;
LEAN_EXPORT uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqMessageSeverity_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqMessageSeverity_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instBEqMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqMessageSeverity = (const lean_object*)&l_Lean_instBEqMessageSeverity___closed__0_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "information"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__0_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__0_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__1 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__1_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__2 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__3 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__3_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__4 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__5 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonMessageSeverity_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instToJsonMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonMessageSeverity = (const lean_object*)&l_Lean_instToJsonMessageSeverity___closed__0_value;
static const lean_string_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value)}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__1_value;
static const lean_string_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__2 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value)}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__3 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__5 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__6 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonMessageSeverity_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonMessageSeverity = (const lean_object*)&l_Lean_instFromJsonMessageSeverity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString___boxed(lean_object*);
static const lean_closure_object l_Lean_instToStringMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageSeverity_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instToStringMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringMessageSeverity = (const lean_object*)&l_Lean_instToStringMessageSeverity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedTraceResult_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedTraceResult;
LEAN_EXPORT uint8_t l_Lean_instBEqTraceResult_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqTraceResult_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqTraceResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqTraceResult_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqTraceResult___closed__0 = (const lean_object*)&l_Lean_instBEqTraceResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqTraceResult = (const lean_object*)&l_Lean_instBEqTraceResult___closed__0_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TraceResult.success"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__0 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__1 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__1_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TraceResult.failure"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__2 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__3 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__3_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.TraceResult.error"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__4 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__5 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprTraceResult_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTraceResult_repr___closed__6;
static lean_once_cell_t l_Lean_instReprTraceResult_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTraceResult_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprTraceResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprTraceResult_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprTraceResult___closed__0 = (const lean_object*)&l_Lean_instReprTraceResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprTraceResult = (const lean_object*)&l_Lean_instReprTraceResult___closed__0_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "✅️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__0 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__0_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "❌️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__1 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__1_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 2, .m_data = "💥️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__2 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedMessageData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedMessageData_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedMessageData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedMessageData_default = (const lean_object*)&l_Lean_instInhabitedMessageData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedMessageData = (const lean_object*)&l_Lean_instInhabitedMessageData_default___closed__0_value;
static const lean_string_object l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
static const lean_string_object l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
static const lean_ctor_object l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value_aux_0),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
LEAN_EXPORT const lean_object* l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_ = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
LEAN_EXPORT const lean_object* l_Lean_instTypeNameMessageData = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hasTag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_kind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_originatingSyntax_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_isTrace(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isTrace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_composePreservingKind(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MessageData_nil___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_nil___closed__0;
LEAN_EXPORT lean_object* l_Lean_MessageData_nil;
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofSyntax___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofSyntax___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofSyntax___closed__0 = (const lean_object*)&l_Lean_MessageData_ofSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofExpr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofLevel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofLevel___closed__0 = (const lean_object*)&l_Lean_MessageData_ofLevel___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofName(lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofConstName___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__0 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__0_value;
static const lean_string_object l_Lean_MessageData_ofConstName___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fullNames"};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__1 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_ofConstName___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_MessageData_ofConstName___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 29, 178, 193, 83, 135, 18, 31)}};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__2 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_withExprHover___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Delab"};
static const lean_object* l_Lean_MessageData_withExprHover___closed__0 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__0_value;
static const lean_string_object l_Lean_MessageData_withExprHover___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withExprHover"};
static const lean_object* l_Lean_MessageData_withExprHover___closed__1 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_withExprHover___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 78, 224, 2, 255, 4, 162, 217)}};
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value_aux_0),((lean_object*)&l_Lean_MessageData_withExprHover___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 205, 246, 77, 218, 147, 213, 253)}};
static const lean_object* l_Lean_MessageData_withExprHover___closed__2 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value;
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MessageData_withExprHover___closed__3 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0;
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1;
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2;
LEAN_EXPORT uint8_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hasSyntheticSorry___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "maxTraceChildren"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(148, 113, 99, 32, 64, 25, 169, 239)}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Maximum number of trace node children to display"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(175, 61, 140, 215, 80, 247, 40, 222)}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_maxTraceChildren;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_MessageData_formatAux_spec__0(lean_object*);
static const lean_closure_object l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0 = (const lean_object*)&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__1 = (const lean_object*)&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__2 = (const lean_object*)&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__3 = (const lean_object*)&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__4 = (const lean_object*)&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__5 = (const lean_object*)&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__5_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_mkErrorStringWithPos___closed__1_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__0 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__0_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_MessageData_formatAux___closed__1 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__1_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__2 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__2_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_MessageData_formatAux___closed__3 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__3_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__4 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__4_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_MessageData_formatAux___closed__5 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__5_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__5_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__6 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__6_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l_Lean_MessageData_formatAux___closed__7 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__7_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__7_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__8 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__8_value;
static lean_once_cell_t l_Lean_MessageData_formatAux___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_MessageData_formatAux___closed__9;
static const lean_string_object l_Lean_MessageData_formatAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.Message"};
static const lean_object* l_Lean_MessageData_formatAux___closed__10 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__10_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.MessageData.formatAux"};
static const lean_object* l_Lean_MessageData_formatAux___closed__11 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__11_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "MessageData.ofLazy: expected MessageData in Dynamic, got "};
static const lean_object* l_Lean_MessageData_formatAux___closed__12 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MessageData_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MessageData_format___closed__0 = (const lean_object*)&l_Lean_MessageData_format___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_instAppend___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instAppend___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instAppend___closed__0 = (const lean_object*)&l_Lean_MessageData_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instAppend = (const lean_object*)&l_Lean_MessageData_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeString___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormat, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value),((lean_object*)&l_Lean_MessageData_instCoeString___closed__0_value)} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__2 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeString = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeFormat = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
static const lean_closure_object l_Lean_MessageData_instCoeLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofLevel, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeLevel___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeLevel = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeExpr = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeName___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeName = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofSyntax, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeSyntax___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeSyntax = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeMVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeMVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeMVarId___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeMVarId = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
static const lean_string_object l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeOptionExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeOptionExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeOptionExpr = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_arrayExpr_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__0;
static const lean_string_object l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__1 = (const lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_arrayExpr_toMessageData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value)}};
static const lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__2 = (const lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeArrayExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeArrayExpr = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_bracket(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_paren(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_sbracket(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_Lean_MessageData_ofList___closed__0 = (const lean_object*)&l_Lean_MessageData_ofList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_ofList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_ofList___closed__1 = (const lean_object*)&l_Lean_MessageData_ofList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__2;
static const lean_string_object l_Lean_MessageData_ofList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_MessageData_ofList___closed__3 = (const lean_object*)&l_Lean_MessageData_ofList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_ofList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_ofList___closed__4 = (const lean_object*)&l_Lean_MessageData_ofList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__5;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__6;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__7;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofArray(lean_object*);
static const lean_string_object l_Lean_MessageData_orList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "– none –"};
static const lean_object* l_Lean_MessageData_orList___closed__0 = (const lean_object*)&l_Lean_MessageData_orList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__1 = (const lean_object*)&l_Lean_MessageData_orList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__2;
static const lean_string_object l_Lean_MessageData_orList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l_Lean_MessageData_orList___closed__3 = (const lean_object*)&l_Lean_MessageData_orList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__4 = (const lean_object*)&l_Lean_MessageData_orList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__5;
static const lean_string_object l_Lean_MessageData_orList___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", or "};
static const lean_object* l_Lean_MessageData_orList___closed__6 = (const lean_object*)&l_Lean_MessageData_orList___closed__6_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__6_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__7 = (const lean_object*)&l_Lean_MessageData_orList___closed__7_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__8;
LEAN_EXPORT lean_object* l_Lean_MessageData_orList(lean_object*);
static const lean_string_object l_Lean_MessageData_andList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* l_Lean_MessageData_andList___closed__0 = (const lean_object*)&l_Lean_MessageData_andList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_andList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_andList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_andList___closed__1 = (const lean_object*)&l_Lean_MessageData_andList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_andList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_andList___closed__2;
static const lean_string_object l_Lean_MessageData_andList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", and "};
static const lean_object* l_Lean_MessageData_andList___closed__3 = (const lean_object*)&l_Lean_MessageData_andList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_andList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_andList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_andList___closed__4 = (const lean_object*)&l_Lean_MessageData_andList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_andList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_andList___closed__5;
LEAN_EXPORT lean_object* l_Lean_MessageData_andList(lean_object*);
static lean_once_cell_t l_Lean_MessageData_note___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__0;
static const lean_string_object l_Lean_MessageData_note___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Note: "};
static const lean_object* l_Lean_MessageData_note___closed__1 = (const lean_object*)&l_Lean_MessageData_note___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_note___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_note___closed__1_value)}};
static const lean_object* l_Lean_MessageData_note___closed__2 = (const lean_object*)&l_Lean_MessageData_note___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_note___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__3;
static lean_once_cell_t l_Lean_MessageData_note___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__4;
LEAN_EXPORT lean_object* l_Lean_MessageData_note(lean_object*);
static const lean_string_object l_Lean_MessageData_hint_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Hint: "};
static const lean_object* l_Lean_MessageData_hint_x27___closed__0 = (const lean_object*)&l_Lean_MessageData_hint_x27___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_hint_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_hint_x27___closed__0_value)}};
static const lean_object* l_Lean_MessageData_hint_x27___closed__1 = (const lean_object*)&l_Lean_MessageData_hint_x27___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_hint_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint_x27___closed__2;
static lean_once_cell_t l_Lean_MessageData_hint_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint_x27___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_hint_x27(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofList, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeList___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeList___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeList = (const lean_object*)&l_Lean_MessageData_instCoeList___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeListExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeListExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeListExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeListExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeListExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeListExpr = (const lean_object*)&l_Lean_MessageData_instCoeListExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPosition_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fileName"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "endPos"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "keepFullRange"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "severity"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isSilent"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caption"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value;
static const lean_closure_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9_value;
static const lean_array_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getStr_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0_value;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "BaseMessage"};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 105, 232, 242, 0, 63, 252, 70)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 201, 140, 230, 1, 55, 95, 217)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonPosition_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Option_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value)} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 71, 4, 163, 123, 133, 137, 84)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getBool_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 109, 20, 206, 1, 23, 246, 165)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(220, 87, 21, 107, 78, 188, 130, 35)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(6, 63, 220, 237, 219, 125, 166, 5)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(42, 121, 35, 234, 39, 185, 10, 205)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(157, 185, 242, 82, 251, 25, 14, 198)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41;
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToJsonSerialMessage_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_instToJsonSerialMessage_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonSerialMessage_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonSerialMessage_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonSerialMessage_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonSerialMessage___closed__0 = (const lean_object*)&l_Lean_instToJsonSerialMessage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonSerialMessage = (const lean_object*)&l_Lean_instToJsonSerialMessage___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SerialMessage"};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 10, 29, 109, 171, 11, 228, 164)}};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__2;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__3;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__4;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__5;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__6;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__7;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__8;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__9;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__10;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__11;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__12;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__13;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__14;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__15;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__16;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__17;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__18;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__19;
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonSerialMessage_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 186, 66, 236, 16, 221, 215, 158)}};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__20 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__20_value;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__21;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__22;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__23;
LEAN_EXPORT lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonSerialMessage_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonSerialMessage___closed__0 = (const lean_object*)&l_Lean_instFromJsonSerialMessage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonSerialMessage = (const lean_object*)&l_Lean_instFromJsonSerialMessage___closed__0_value;
static const lean_string_object l_Lean_errorNameSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_errorNameSuffix___closed__0 = (const lean_object*)&l_Lean_errorNameSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_errorNameSuffix = (const lean_object*)&l_Lean_errorNameSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_kindOfErrorName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagWithErrorName(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nested"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0 = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_stripNestedTags(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toMessage(lean_object*);
static const lean_ctor_object l_Lean_SerialMessage_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value)}};
static const lean_object* l_Lean_SerialMessage_toString___closed__0 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__0_value;
static const lean_ctor_object l_Lean_SerialMessage_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value)}};
static const lean_object* l_Lean_SerialMessage_toString___closed__1 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__1_value;
static const lean_string_object l_Lean_SerialMessage_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l_Lean_SerialMessage_toString___closed__2 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lean_SerialMessage_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SerialMessage_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SerialMessage_instToString___closed__0 = (const lean_object*)&l_Lean_SerialMessage_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SerialMessage_instToString = (const lean_object*)&l_Lean_SerialMessage_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Message_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_kind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Message_isTrace(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_isTrace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_serialize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_serialize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Message_toString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toJson___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageLog_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageLog;
LEAN_EXPORT lean_object* l_Lean_MessageLog_empty;
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasUnreported(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasUnreported___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageLog_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageLog_append, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageLog_instAppend___closed__0 = (const lean_object*)&l_Lean_MessageLog_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageLog_instAppend = (const lean_object*)&l_Lean_MessageLog_instAppend___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasErrors___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_markAllReported(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToWarnings(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_getInfoMessages(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_getWarningMessages(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nestD(lean_object*);
LEAN_EXPORT lean_object* l_Lean_indentD(lean_object*);
LEAN_EXPORT lean_object* l_Lean_indentExpr(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_inlineExpr_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__0;
static const lean_string_object l_Lean_inlineExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_inlineExpr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExpr___lam__0___closed__1_value)}};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__2 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__3;
static const lean_string_object l_Lean_inlineExpr___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__4 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_inlineExpr___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExpr___lam__0___closed__4_value)}};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__5 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_inlineExprTrailing___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_inlineExprTrailing___lam__0___closed__0 = (const lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_inlineExprTrailing___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__0_value)}};
static const lean_object* l_Lean_inlineExprTrailing___lam__0___closed__1 = (const lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_inlineExprTrailing___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExprTrailing___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing(lean_object*, lean_object*);
static const lean_string_object l_Lean_aquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "「"};
static const lean_object* l_Lean_aquote___closed__0 = (const lean_object*)&l_Lean_aquote___closed__0_value;
static const lean_ctor_object l_Lean_aquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_aquote___closed__0_value)}};
static const lean_object* l_Lean_aquote___closed__1 = (const lean_object*)&l_Lean_aquote___closed__1_value;
static lean_once_cell_t l_Lean_aquote___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_aquote___closed__2;
static const lean_string_object l_Lean_aquote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "」"};
static const lean_object* l_Lean_aquote___closed__3 = (const lean_object*)&l_Lean_aquote___closed__3_value;
static const lean_ctor_object l_Lean_aquote___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_aquote___closed__3_value)}};
static const lean_object* l_Lean_aquote___closed__4 = (const lean_object*)&l_Lean_aquote___closed__4_value;
static lean_once_cell_t l_Lean_aquote___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_aquote___closed__5;
LEAN_EXPORT lean_object* l_Lean_aquote(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_stringToMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_stringToMessageData___closed__0 = (const lean_object*)&l_Lean_stringToMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataExpr = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataLevel = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataName = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
static const lean_closure_object l_Lean_instToMessageDataString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_stringToMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataString___closed__0 = (const lean_object*)&l_Lean_instToMessageDataString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataString = (const lean_object*)&l_Lean_instToMessageDataString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataSyntax = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataFormat = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataMVarId = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
static const lean_closure_object l_Lean_instToMessageDataMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToMessageDataMessageData___closed__0 = (const lean_object*)&l_Lean_instToMessageDataMessageData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataMessageData = (const lean_object*)&l_Lean_instToMessageDataMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToMessageDataSubarray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToMessageDataSubarray___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataSubarray___redArg___closed__0 = (const lean_object*)&l_Lean_instToMessageDataSubarray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "some ("};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instToMessageDataOption___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__2;
static const lean_ctor_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_mkErrorStringWithPos___closed__4_value)}};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_instToMessageDataOption___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instToMessageDataOptionExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instToMessageDataOptionExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOptionExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToMessageDataOptionExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToMessageDataOptionExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataOptionExpr___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataOptionExpr = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___closed__0_value;
static const lean_string_object l_Lean_termM_x21___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l_Lean_termM_x21___00__closed__0 = (const lean_object*)&l_Lean_termM_x21___00__closed__0_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_termM_x21___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__1_value_aux_0),((lean_object*)&l_Lean_termM_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l_Lean_termM_x21___00__closed__1 = (const lean_object*)&l_Lean_termM_x21___00__closed__1_value;
static const lean_string_object l_Lean_termM_x21___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_termM_x21___00__closed__2 = (const lean_object*)&l_Lean_termM_x21___00__closed__2_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_termM_x21___00__closed__3 = (const lean_object*)&l_Lean_termM_x21___00__closed__3_value;
static const lean_string_object l_Lean_termM_x21___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l_Lean_termM_x21___00__closed__4 = (const lean_object*)&l_Lean_termM_x21___00__closed__4_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__4_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__5 = (const lean_object*)&l_Lean_termM_x21___00__closed__5_value;
static const lean_string_object l_Lean_termM_x21___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_termM_x21___00__closed__6 = (const lean_object*)&l_Lean_termM_x21___00__closed__6_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_termM_x21___00__closed__7 = (const lean_object*)&l_Lean_termM_x21___00__closed__7_value;
static const lean_string_object l_Lean_termM_x21___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_termM_x21___00__closed__8 = (const lean_object*)&l_Lean_termM_x21___00__closed__8_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_termM_x21___00__closed__9 = (const lean_object*)&l_Lean_termM_x21___00__closed__9_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_termM_x21___00__closed__10 = (const lean_object*)&l_Lean_termM_x21___00__closed__10_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__7_value),((lean_object*)&l_Lean_termM_x21___00__closed__10_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__11 = (const lean_object*)&l_Lean_termM_x21___00__closed__11_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__3_value),((lean_object*)&l_Lean_termM_x21___00__closed__5_value),((lean_object*)&l_Lean_termM_x21___00__closed__11_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__12 = (const lean_object*)&l_Lean_termM_x21___00__closed__12_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__12_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__13 = (const lean_object*)&l_Lean_termM_x21___00__closed__13_value;
LEAN_EXPORT const lean_object* l_Lean_termM_x21__ = (const lean_object*)&l_Lean_termM_x21___00__closed__13_value;
static lean_once_cell_t l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5_value;
static const lean_string_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "toMessageData"};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value;
static lean_once_cell_t l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(214, 4, 57, 33, 167, 136, 170, 64)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8_value;
static const lean_string_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ToMessageData"};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_139__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(14, 83, 41, 225, 154, 14, 42, 20)}};
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(167, 56, 87, 160, 191, 253, 244, 156)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_toMessageList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_toMessageList___closed__0 = (const lean_object*)&l_Lean_toMessageList___closed__0_value;
static lean_once_cell_t l_Lean_toMessageList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toMessageList___closed__1;
LEAN_EXPORT lean_object* l_Lean_toMessageList(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "(kernel) declaration type mismatch, '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "' has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nbut it is expected to have type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__0;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__1;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "(kernel) unknown constant '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__2 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__2_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__3;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__4 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__4_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__5;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "(kernel) constant has already been declared '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__6 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__6_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__7;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "(kernel) declaration type mismatch"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__8 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__8_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__8_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__9 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__9_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__10;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(kernel) declaration has metavariables '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__11 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__11_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__12;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "(kernel) declaration has free variables '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__13 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__13_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__14;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "', expression: "};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__15 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__15_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__16;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(kernel) function expected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__17 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__17_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__18;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "(kernel) type expected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__19 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__19_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__20;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(kernel) let-declaration type mismatch '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__21 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__21_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__22;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "(kernel) type mismatch at"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__23 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__23_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__24;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "(kernel) application type mismatch"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__25 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__25_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__26;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "\nargument has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__27 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__27_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__28;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nbut function has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__29 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__29_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__30;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "(kernel) invalid projection"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__31 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__31_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__32;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(kernel) type of theorem '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__33 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__33_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__34;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "' is not a proposition"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__35 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__35_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__36;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(kernel) "};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__37 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__37_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__38;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "(kernel) deterministic timeout"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__39 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__39_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__39_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__40 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__40_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__41;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "(kernel) excessive memory consumption detected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__42 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__42_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__42_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__43 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__43_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__44;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "(kernel) deep recursion detected, use `set_option maxRecDepth <num>` to increase the limit"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__45 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__45_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__45_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__46 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__46_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__47;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "(kernel) interrupted"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__48 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__48_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__48_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__49 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__49_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__50;
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toTraceElem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toTraceElem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos(lean_object* v_fileName_7_, lean_object* v_pos_8_, lean_object* v_msg_9_, lean_object* v_endPos_10_, lean_object* v_kind_11_, lean_object* v_name_12_){
_start:
{
lean_object* v___y_14_; lean_object* v___y_15_; lean_object* v___y_32_; lean_object* v___y_33_; lean_object* v___y_34_; lean_object* v___y_39_; lean_object* v___y_40_; lean_object* v___y_41_; lean_object* v___y_42_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___y_53_; uint8_t v___y_54_; lean_object* v___y_70_; 
if (lean_obj_tag(v_endPos_10_) == 0)
{
lean_object* v___x_74_; 
v___x_74_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_70_ = v___x_74_;
goto v___jp_69_;
}
else
{
lean_object* v_val_75_; lean_object* v_line_76_; lean_object* v_column_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_val_75_ = lean_ctor_get(v_endPos_10_, 0);
lean_inc(v_val_75_);
lean_dec_ref_known(v_endPos_10_, 1);
v_line_76_ = lean_ctor_get(v_val_75_, 0);
lean_inc(v_line_76_);
v_column_77_ = lean_ctor_get(v_val_75_, 1);
lean_inc(v_column_77_);
lean_dec(v_val_75_);
v___x_78_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__5));
v___x_79_ = l_Nat_reprFast(v_line_76_);
v___x_80_ = lean_string_append(v___x_78_, v___x_79_);
lean_dec_ref(v___x_79_);
v___x_81_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
v___x_83_ = l_Nat_reprFast(v_column_77_);
v___x_84_ = lean_string_append(v___x_82_, v___x_83_);
lean_dec_ref(v___x_83_);
v___y_70_ = v___x_84_;
goto v___jp_69_;
}
v___jp_13_:
{
lean_object* v_line_16_; lean_object* v_column_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_line_16_ = lean_ctor_get(v_pos_8_, 0);
lean_inc(v_line_16_);
v_column_17_ = lean_ctor_get(v_pos_8_, 1);
lean_inc(v_column_17_);
lean_dec_ref(v_pos_8_);
v___x_18_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_19_ = lean_string_append(v_fileName_7_, v___x_18_);
v___x_20_ = l_Nat_reprFast(v_line_16_);
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
lean_dec_ref(v___x_20_);
v___x_22_ = lean_string_append(v___x_21_, v___x_18_);
v___x_23_ = l_Nat_reprFast(v_column_17_);
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
lean_dec_ref(v___x_23_);
v___x_25_ = lean_string_append(v___x_24_, v___y_14_);
lean_dec_ref(v___y_14_);
v___x_26_ = lean_string_append(v___x_25_, v___x_18_);
v___x_27_ = lean_string_append(v___x_26_, v___y_15_);
lean_dec_ref(v___y_15_);
v___x_28_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__1));
v___x_29_ = lean_string_append(v___x_27_, v___x_28_);
v___x_30_ = lean_string_append(v___x_29_, v_msg_9_);
return v___x_30_;
}
v___jp_31_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_string_append(v___y_32_, v___y_34_);
lean_dec_ref(v___y_34_);
v___x_36_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
v___y_14_ = v___y_33_;
v___y_15_ = v___x_37_;
goto v___jp_13_;
}
v___jp_38_:
{
lean_object* v___x_43_; 
lean_inc_ref(v___y_39_);
v___x_43_ = lean_string_append(v___y_39_, v___y_42_);
if (lean_obj_tag(v___y_41_) == 0)
{
lean_object* v___x_44_; 
v___x_44_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_32_ = v___x_43_;
v___y_33_ = v___y_40_;
v___y_34_ = v___x_44_;
goto v___jp_31_;
}
else
{
lean_object* v_val_45_; 
v_val_45_ = lean_ctor_get(v___y_41_, 0);
lean_inc(v_val_45_);
lean_dec_ref_known(v___y_41_, 1);
v___y_32_ = v___x_43_;
v___y_33_ = v___y_40_;
v___y_34_ = v_val_45_;
goto v___jp_31_;
}
}
v___jp_46_:
{
lean_object* v___x_49_; 
v___x_49_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__1));
if (lean_obj_tag(v_kind_11_) == 0)
{
lean_object* v___x_50_; 
v___x_50_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_39_ = v___x_49_;
v___y_40_ = v___y_47_;
v___y_41_ = v___y_48_;
v___y_42_ = v___x_50_;
goto v___jp_38_;
}
else
{
lean_object* v_val_51_; 
v_val_51_ = lean_ctor_get(v_kind_11_, 0);
v___y_39_ = v___x_49_;
v___y_40_ = v___y_47_;
v___y_41_ = v___y_48_;
v___y_42_ = v_val_51_;
goto v___jp_38_;
}
}
v___jp_52_:
{
if (lean_obj_tag(v_name_12_) == 0)
{
lean_object* v___x_55_; 
v___x_55_ = lean_box(0);
v___y_47_ = v___y_53_;
v___y_48_ = v___x_55_;
goto v___jp_46_;
}
else
{
lean_object* v_val_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_68_; 
v_val_56_ = lean_ctor_get(v_name_12_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_name_12_);
if (v_isSharedCheck_68_ == 0)
{
v___x_58_ = v_name_12_;
v_isShared_59_ = v_isSharedCheck_68_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_val_56_);
lean_dec(v_name_12_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_68_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_60_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__3));
v___x_61_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_56_, v___y_54_);
v___x_62_ = lean_string_append(v___x_60_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__4));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_64_);
v___x_66_ = v___x_58_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
v___y_47_ = v___y_53_;
v___y_48_ = v___x_66_;
goto v___jp_46_;
}
}
}
}
v___jp_69_:
{
if (lean_obj_tag(v_name_12_) == 0)
{
if (lean_obj_tag(v_kind_11_) == 0)
{
lean_object* v___x_71_; 
v___x_71_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_14_ = v___y_70_;
v___y_15_ = v___x_71_;
goto v___jp_13_;
}
else
{
uint8_t v___x_72_; 
v___x_72_ = 1;
v___y_53_ = v___y_70_;
v___y_54_ = v___x_72_;
goto v___jp_52_;
}
}
else
{
uint8_t v___x_73_; 
v___x_73_ = 1;
v___y_53_ = v___y_70_;
v___y_54_ = v___x_73_;
goto v___jp_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos___boxed(lean_object* v_fileName_85_, lean_object* v_pos_86_, lean_object* v_msg_87_, lean_object* v_endPos_88_, lean_object* v_kind_89_, lean_object* v_name_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_mkErrorStringWithPos(v_fileName_85_, v_pos_86_, v_msg_87_, v_endPos_88_, v_kind_89_, v_name_90_);
lean_dec(v_kind_89_);
lean_dec_ref(v_msg_87_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx(uint8_t v_x_92_){
_start:
{
switch(v_x_92_)
{
case 0:
{
lean_object* v___x_93_; 
v___x_93_ = lean_unsigned_to_nat(0u);
return v___x_93_;
}
case 1:
{
lean_object* v___x_94_; 
v___x_94_ = lean_unsigned_to_nat(1u);
return v___x_94_;
}
default: 
{
lean_object* v___x_95_; 
v___x_95_ = lean_unsigned_to_nat(2u);
return v___x_95_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx___boxed(lean_object* v_x_96_){
_start:
{
uint8_t v_x_boxed_97_; lean_object* v_res_98_; 
v_x_boxed_97_ = lean_unbox(v_x_96_);
v_res_98_ = l_Lean_MessageSeverity_ctorIdx(v_x_boxed_97_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg(lean_object* v_k_99_){
_start:
{
lean_inc(v_k_99_);
return v_k_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg___boxed(lean_object* v_k_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_MessageSeverity_ctorElim___redArg(v_k_100_);
lean_dec(v_k_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim(lean_object* v_motive_102_, lean_object* v_ctorIdx_103_, uint8_t v_t_104_, lean_object* v_h_105_, lean_object* v_k_106_){
_start:
{
lean_inc(v_k_106_);
return v_k_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___boxed(lean_object* v_motive_107_, lean_object* v_ctorIdx_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_k_111_){
_start:
{
uint8_t v_t_boxed_112_; lean_object* v_res_113_; 
v_t_boxed_112_ = lean_unbox(v_t_109_);
v_res_113_ = l_Lean_MessageSeverity_ctorElim(v_motive_107_, v_ctorIdx_108_, v_t_boxed_112_, v_h_110_, v_k_111_);
lean_dec(v_k_111_);
lean_dec(v_ctorIdx_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg(lean_object* v_information_114_){
_start:
{
lean_inc(v_information_114_);
return v_information_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg___boxed(lean_object* v_information_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_MessageSeverity_information_elim___redArg(v_information_115_);
lean_dec(v_information_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim(lean_object* v_motive_117_, uint8_t v_t_118_, lean_object* v_h_119_, lean_object* v_information_120_){
_start:
{
lean_inc(v_information_120_);
return v_information_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___boxed(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_information_124_){
_start:
{
uint8_t v_t_boxed_125_; lean_object* v_res_126_; 
v_t_boxed_125_ = lean_unbox(v_t_122_);
v_res_126_ = l_Lean_MessageSeverity_information_elim(v_motive_121_, v_t_boxed_125_, v_h_123_, v_information_124_);
lean_dec(v_information_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg(lean_object* v_warning_127_){
_start:
{
lean_inc(v_warning_127_);
return v_warning_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg___boxed(lean_object* v_warning_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_MessageSeverity_warning_elim___redArg(v_warning_128_);
lean_dec(v_warning_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim(lean_object* v_motive_130_, uint8_t v_t_131_, lean_object* v_h_132_, lean_object* v_warning_133_){
_start:
{
lean_inc(v_warning_133_);
return v_warning_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___boxed(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_warning_137_){
_start:
{
uint8_t v_t_boxed_138_; lean_object* v_res_139_; 
v_t_boxed_138_ = lean_unbox(v_t_135_);
v_res_139_ = l_Lean_MessageSeverity_warning_elim(v_motive_134_, v_t_boxed_138_, v_h_136_, v_warning_137_);
lean_dec(v_warning_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg(lean_object* v_error_140_){
_start:
{
lean_inc(v_error_140_);
return v_error_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg___boxed(lean_object* v_error_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_MessageSeverity_error_elim___redArg(v_error_141_);
lean_dec(v_error_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim(lean_object* v_motive_143_, uint8_t v_t_144_, lean_object* v_h_145_, lean_object* v_error_146_){
_start:
{
lean_inc(v_error_146_);
return v_error_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___boxed(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_error_150_){
_start:
{
uint8_t v_t_boxed_151_; lean_object* v_res_152_; 
v_t_boxed_151_ = lean_unbox(v_t_148_);
v_res_152_ = l_Lean_MessageSeverity_error_elim(v_motive_147_, v_t_boxed_151_, v_h_149_, v_error_150_);
lean_dec(v_error_150_);
return v_res_152_;
}
}
static uint8_t _init_l_Lean_instInhabitedMessageSeverity_default(void){
_start:
{
uint8_t v___x_153_; 
v___x_153_ = 0;
return v___x_153_;
}
}
static uint8_t _init_l_Lean_instInhabitedMessageSeverity(void){
_start:
{
uint8_t v___x_154_; 
v___x_154_ = 0;
return v___x_154_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t v_x_155_, uint8_t v_y_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = l_Lean_MessageSeverity_ctorIdx(v_x_155_);
v___x_158_ = l_Lean_MessageSeverity_ctorIdx(v_y_156_);
v___x_159_ = lean_nat_dec_eq(v___x_157_, v___x_158_);
lean_dec(v___x_158_);
lean_dec(v___x_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqMessageSeverity_beq___boxed(lean_object* v_x_160_, lean_object* v_y_161_){
_start:
{
uint8_t v_x_21__boxed_162_; uint8_t v_y_22__boxed_163_; uint8_t v_res_164_; lean_object* v_r_165_; 
v_x_21__boxed_162_ = lean_unbox(v_x_160_);
v_y_22__boxed_163_ = lean_unbox(v_y_161_);
v_res_164_ = l_Lean_instBEqMessageSeverity_beq(v_x_21__boxed_162_, v_y_22__boxed_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t v_x_177_){
_start:
{
switch(v_x_177_)
{
case 0:
{
lean_object* v___x_178_; 
v___x_178_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__1));
return v___x_178_;
}
case 1:
{
lean_object* v___x_179_; 
v___x_179_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__3));
return v___x_179_;
}
default: 
{
lean_object* v___x_180_; 
v___x_180_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__5));
return v___x_180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson___boxed(lean_object* v_x_181_){
_start:
{
uint8_t v_x_67__boxed_182_; lean_object* v_res_183_; 
v_x_67__boxed_182_ = lean_unbox(v_x_181_);
v_res_183_ = l_Lean_instToJsonMessageSeverity_toJson(v_x_67__boxed_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object* v_json_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lean_Json_getTag_x3f(v_json_201_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__1));
return v___x_203_;
}
else
{
lean_object* v_val_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v_val_204_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_202_, 1);
v___x_205_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__4));
v___x_206_ = lean_string_dec_eq(v_val_204_, v___x_205_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__0));
v___x_208_ = lean_string_dec_eq(v_val_204_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__2));
v___x_210_ = lean_string_dec_eq(v_val_204_, v___x_209_);
lean_dec(v_val_204_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
v___x_211_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__3));
return v___x_211_;
}
else
{
lean_object* v___x_212_; 
v___x_212_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__4));
return v___x_212_;
}
}
else
{
lean_object* v___x_213_; 
lean_dec(v_val_204_);
v___x_213_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__5));
return v___x_213_;
}
}
else
{
lean_object* v___x_214_; 
lean_dec(v_val_204_);
v___x_214_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__6));
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString(uint8_t v_x_217_){
_start:
{
switch(v_x_217_)
{
case 0:
{
lean_object* v___x_218_; 
v___x_218_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__0));
return v___x_218_;
}
case 1:
{
lean_object* v___x_219_; 
v___x_219_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__2));
return v___x_219_;
}
default: 
{
lean_object* v___x_220_; 
v___x_220_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__4));
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString___boxed(lean_object* v_x_221_){
_start:
{
uint8_t v_x_28__boxed_222_; lean_object* v_res_223_; 
v_x_28__boxed_222_ = lean_unbox(v_x_221_);
v_res_223_ = l_Lean_MessageSeverity_toString(v_x_28__boxed_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx(uint8_t v_x_226_){
_start:
{
switch(v_x_226_)
{
case 0:
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(0u);
return v___x_227_;
}
case 1:
{
lean_object* v___x_228_; 
v___x_228_ = lean_unsigned_to_nat(1u);
return v___x_228_;
}
default: 
{
lean_object* v___x_229_; 
v___x_229_ = lean_unsigned_to_nat(2u);
return v___x_229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx___boxed(lean_object* v_x_230_){
_start:
{
uint8_t v_x_boxed_231_; lean_object* v_res_232_; 
v_x_boxed_231_ = lean_unbox(v_x_230_);
v_res_232_ = l_Lean_TraceResult_ctorIdx(v_x_boxed_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg(lean_object* v_k_233_){
_start:
{
lean_inc(v_k_233_);
return v_k_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg___boxed(lean_object* v_k_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_TraceResult_ctorElim___redArg(v_k_234_);
lean_dec(v_k_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim(lean_object* v_motive_236_, lean_object* v_ctorIdx_237_, uint8_t v_t_238_, lean_object* v_h_239_, lean_object* v_k_240_){
_start:
{
lean_inc(v_k_240_);
return v_k_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___boxed(lean_object* v_motive_241_, lean_object* v_ctorIdx_242_, lean_object* v_t_243_, lean_object* v_h_244_, lean_object* v_k_245_){
_start:
{
uint8_t v_t_boxed_246_; lean_object* v_res_247_; 
v_t_boxed_246_ = lean_unbox(v_t_243_);
v_res_247_ = l_Lean_TraceResult_ctorElim(v_motive_241_, v_ctorIdx_242_, v_t_boxed_246_, v_h_244_, v_k_245_);
lean_dec(v_k_245_);
lean_dec(v_ctorIdx_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg(lean_object* v_success_248_){
_start:
{
lean_inc(v_success_248_);
return v_success_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg___boxed(lean_object* v_success_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_TraceResult_success_elim___redArg(v_success_249_);
lean_dec(v_success_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim(lean_object* v_motive_251_, uint8_t v_t_252_, lean_object* v_h_253_, lean_object* v_success_254_){
_start:
{
lean_inc(v_success_254_);
return v_success_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___boxed(lean_object* v_motive_255_, lean_object* v_t_256_, lean_object* v_h_257_, lean_object* v_success_258_){
_start:
{
uint8_t v_t_boxed_259_; lean_object* v_res_260_; 
v_t_boxed_259_ = lean_unbox(v_t_256_);
v_res_260_ = l_Lean_TraceResult_success_elim(v_motive_255_, v_t_boxed_259_, v_h_257_, v_success_258_);
lean_dec(v_success_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg(lean_object* v_failure_261_){
_start:
{
lean_inc(v_failure_261_);
return v_failure_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg___boxed(lean_object* v_failure_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_TraceResult_failure_elim___redArg(v_failure_262_);
lean_dec(v_failure_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim(lean_object* v_motive_264_, uint8_t v_t_265_, lean_object* v_h_266_, lean_object* v_failure_267_){
_start:
{
lean_inc(v_failure_267_);
return v_failure_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___boxed(lean_object* v_motive_268_, lean_object* v_t_269_, lean_object* v_h_270_, lean_object* v_failure_271_){
_start:
{
uint8_t v_t_boxed_272_; lean_object* v_res_273_; 
v_t_boxed_272_ = lean_unbox(v_t_269_);
v_res_273_ = l_Lean_TraceResult_failure_elim(v_motive_268_, v_t_boxed_272_, v_h_270_, v_failure_271_);
lean_dec(v_failure_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg(lean_object* v_error_274_){
_start:
{
lean_inc(v_error_274_);
return v_error_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg___boxed(lean_object* v_error_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_TraceResult_error_elim___redArg(v_error_275_);
lean_dec(v_error_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim(lean_object* v_motive_277_, uint8_t v_t_278_, lean_object* v_h_279_, lean_object* v_error_280_){
_start:
{
lean_inc(v_error_280_);
return v_error_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___boxed(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_error_284_){
_start:
{
uint8_t v_t_boxed_285_; lean_object* v_res_286_; 
v_t_boxed_285_ = lean_unbox(v_t_282_);
v_res_286_ = l_Lean_TraceResult_error_elim(v_motive_281_, v_t_boxed_285_, v_h_283_, v_error_284_);
lean_dec(v_error_284_);
return v_res_286_;
}
}
static uint8_t _init_l_Lean_instInhabitedTraceResult_default(void){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = 0;
return v___x_287_;
}
}
static uint8_t _init_l_Lean_instInhabitedTraceResult(void){
_start:
{
uint8_t v___x_288_; 
v___x_288_ = 0;
return v___x_288_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqTraceResult_beq(uint8_t v_x_289_, uint8_t v_y_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = l_Lean_TraceResult_ctorIdx(v_x_289_);
v___x_292_ = l_Lean_TraceResult_ctorIdx(v_y_290_);
v___x_293_ = lean_nat_dec_eq(v___x_291_, v___x_292_);
lean_dec(v___x_292_);
lean_dec(v___x_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqTraceResult_beq___boxed(lean_object* v_x_294_, lean_object* v_y_295_){
_start:
{
uint8_t v_x_21__boxed_296_; uint8_t v_y_22__boxed_297_; uint8_t v_res_298_; lean_object* v_r_299_; 
v_x_21__boxed_296_ = lean_unbox(v_x_294_);
v_y_22__boxed_297_ = lean_unbox(v_y_295_);
v_res_298_ = l_Lean_instBEqTraceResult_beq(v_x_21__boxed_296_, v_y_22__boxed_297_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
static lean_object* _init_l_Lean_instReprTraceResult_repr___closed__6(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(2u);
v___x_312_ = lean_nat_to_int(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_instReprTraceResult_repr___closed__7(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_to_int(v___x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr(uint8_t v_x_315_, lean_object* v_prec_316_){
_start:
{
lean_object* v___y_318_; lean_object* v___y_325_; lean_object* v___y_332_; 
switch(v_x_315_)
{
case 0:
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(1024u);
v___x_339_ = lean_nat_dec_le(v___x_338_, v_prec_316_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_318_ = v___x_340_;
goto v___jp_317_;
}
else
{
lean_object* v___x_341_; 
v___x_341_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_318_ = v___x_341_;
goto v___jp_317_;
}
}
case 1:
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(1024u);
v___x_343_ = lean_nat_dec_le(v___x_342_, v_prec_316_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_325_ = v___x_344_;
goto v___jp_324_;
}
else
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_325_ = v___x_345_;
goto v___jp_324_;
}
}
default: 
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1024u);
v___x_347_ = lean_nat_dec_le(v___x_346_, v_prec_316_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_332_ = v___x_348_;
goto v___jp_331_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_332_ = v___x_349_;
goto v___jp_331_;
}
}
}
v___jp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__1));
lean_inc(v___y_318_);
v___x_320_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_320_, 0, v___y_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = 0;
v___x_322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*1, v___x_321_);
v___x_323_ = l_Repr_addAppParen(v___x_322_, v_prec_316_);
return v___x_323_;
}
v___jp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_326_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__3));
lean_inc(v___y_325_);
v___x_327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_327_, 0, v___y_325_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = 0;
v___x_329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_329_, 0, v___x_327_);
lean_ctor_set_uint8(v___x_329_, sizeof(void*)*1, v___x_328_);
v___x_330_ = l_Repr_addAppParen(v___x_329_, v_prec_316_);
return v___x_330_;
}
v___jp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_333_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__5));
lean_inc(v___y_332_);
v___x_334_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_334_, 0, v___y_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = 0;
v___x_336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*1, v___x_335_);
v___x_337_ = l_Repr_addAppParen(v___x_336_, v_prec_316_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr___boxed(lean_object* v_x_350_, lean_object* v_prec_351_){
_start:
{
uint8_t v_x_171__boxed_352_; lean_object* v_res_353_; 
v_x_171__boxed_352_ = lean_unbox(v_x_350_);
v_res_353_ = l_Lean_instReprTraceResult_repr(v_x_171__boxed_352_, v_prec_351_);
lean_dec(v_prec_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji(uint8_t v_x_359_){
_start:
{
switch(v_x_359_)
{
case 0:
{
lean_object* v___x_360_; 
v___x_360_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__0));
return v___x_360_;
}
case 1:
{
lean_object* v___x_361_; 
v___x_361_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__1));
return v___x_361_;
}
default: 
{
lean_object* v___x_362_; 
v___x_362_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__2));
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji___boxed(lean_object* v_x_363_){
_start:
{
uint8_t v_x_31__boxed_364_; lean_object* v_res_365_; 
v_x_31__boxed_364_ = lean_unbox(v_x_363_);
v_res_365_ = l_Lean_TraceResult_toEmoji(v_x_31__boxed_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx(lean_object* v_x_366_){
_start:
{
switch(lean_obj_tag(v_x_366_))
{
case 0:
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(0u);
return v___x_367_;
}
case 1:
{
lean_object* v___x_368_; 
v___x_368_ = lean_unsigned_to_nat(1u);
return v___x_368_;
}
case 2:
{
lean_object* v___x_369_; 
v___x_369_ = lean_unsigned_to_nat(2u);
return v___x_369_;
}
case 3:
{
lean_object* v___x_370_; 
v___x_370_ = lean_unsigned_to_nat(3u);
return v___x_370_;
}
case 4:
{
lean_object* v___x_371_; 
v___x_371_ = lean_unsigned_to_nat(4u);
return v___x_371_;
}
case 5:
{
lean_object* v___x_372_; 
v___x_372_ = lean_unsigned_to_nat(5u);
return v___x_372_;
}
case 6:
{
lean_object* v___x_373_; 
v___x_373_ = lean_unsigned_to_nat(6u);
return v___x_373_;
}
case 7:
{
lean_object* v___x_374_; 
v___x_374_ = lean_unsigned_to_nat(7u);
return v___x_374_;
}
case 8:
{
lean_object* v___x_375_; 
v___x_375_ = lean_unsigned_to_nat(8u);
return v___x_375_;
}
case 9:
{
lean_object* v___x_376_; 
v___x_376_ = lean_unsigned_to_nat(9u);
return v___x_376_;
}
case 10:
{
lean_object* v___x_377_; 
v___x_377_ = lean_unsigned_to_nat(10u);
return v___x_377_;
}
default: 
{
lean_object* v___x_378_; 
v___x_378_ = lean_unsigned_to_nat(11u);
return v___x_378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx___boxed(lean_object* v_x_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_MessageData_ctorIdx(v_x_379_);
lean_dec_ref(v_x_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___redArg(lean_object* v_t_381_, lean_object* v_k_382_){
_start:
{
switch(lean_obj_tag(v_t_381_))
{
case 0:
{
lean_object* v_a_383_; lean_object* v___x_384_; 
v_a_383_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_a_383_);
lean_dec_ref_known(v_t_381_, 1);
v___x_384_ = lean_apply_1(v_k_382_, v_a_383_);
return v___x_384_;
}
case 1:
{
lean_object* v_a_385_; lean_object* v___x_386_; 
v_a_385_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v_t_381_, 1);
v___x_386_ = lean_apply_1(v_k_382_, v_a_385_);
return v___x_386_;
}
case 5:
{
lean_object* v_a_387_; lean_object* v_a_388_; lean_object* v___x_389_; 
v_a_387_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_387_);
v_a_388_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_388_);
lean_dec_ref_known(v_t_381_, 2);
v___x_389_ = lean_apply_2(v_k_382_, v_a_387_, v_a_388_);
return v___x_389_;
}
case 6:
{
lean_object* v_a_390_; lean_object* v___x_391_; 
v_a_390_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_a_390_);
lean_dec_ref_known(v_t_381_, 1);
v___x_391_ = lean_apply_1(v_k_382_, v_a_390_);
return v___x_391_;
}
case 8:
{
lean_object* v_a_392_; lean_object* v_a_393_; lean_object* v___x_394_; 
v_a_392_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_392_);
v_a_393_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_393_);
lean_dec_ref_known(v_t_381_, 2);
v___x_394_ = lean_apply_2(v_k_382_, v_a_392_, v_a_393_);
return v___x_394_;
}
case 9:
{
lean_object* v_data_395_; lean_object* v_msg_396_; lean_object* v_children_397_; lean_object* v___x_398_; 
v_data_395_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_data_395_);
v_msg_396_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_msg_396_);
v_children_397_ = lean_ctor_get(v_t_381_, 2);
lean_inc_ref(v_children_397_);
lean_dec_ref_known(v_t_381_, 3);
v___x_398_ = lean_apply_3(v_k_382_, v_data_395_, v_msg_396_, v_children_397_);
return v___x_398_;
}
case 11:
{
lean_object* v_a_399_; lean_object* v_a_400_; lean_object* v___x_401_; 
v_a_399_ = lean_ctor_get(v_t_381_, 0);
lean_inc(v_a_399_);
v_a_400_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_400_);
lean_dec_ref_known(v_t_381_, 2);
v___x_401_ = lean_apply_2(v_k_382_, v_a_399_, v_a_400_);
return v___x_401_;
}
default: 
{
lean_object* v_a_402_; lean_object* v_a_403_; lean_object* v___x_404_; 
v_a_402_ = lean_ctor_get(v_t_381_, 0);
lean_inc_ref(v_a_402_);
v_a_403_ = lean_ctor_get(v_t_381_, 1);
lean_inc_ref(v_a_403_);
lean_dec_ref(v_t_381_);
v___x_404_ = lean_apply_2(v_k_382_, v_a_402_, v_a_403_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim(lean_object* v_motive__1_405_, lean_object* v_ctorIdx_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_k_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_MessageData_ctorElim___redArg(v_t_407_, v_k_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___boxed(lean_object* v_motive__1_411_, lean_object* v_ctorIdx_412_, lean_object* v_t_413_, lean_object* v_h_414_, lean_object* v_k_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_MessageData_ctorElim(v_motive__1_411_, v_ctorIdx_412_, v_t_413_, v_h_414_, v_k_415_);
lean_dec(v_ctorIdx_412_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim___redArg(lean_object* v_t_417_, lean_object* v_ofFormatWithInfos_418_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = l_Lean_MessageData_ctorElim___redArg(v_t_417_, v_ofFormatWithInfos_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim(lean_object* v_motive__1_420_, lean_object* v_t_421_, lean_object* v_h_422_, lean_object* v_ofFormatWithInfos_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_MessageData_ctorElim___redArg(v_t_421_, v_ofFormatWithInfos_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim___redArg(lean_object* v_t_425_, lean_object* v_ofGoal_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_MessageData_ctorElim___redArg(v_t_425_, v_ofGoal_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim(lean_object* v_motive__1_428_, lean_object* v_t_429_, lean_object* v_h_430_, lean_object* v_ofGoal_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_MessageData_ctorElim___redArg(v_t_429_, v_ofGoal_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim___redArg(lean_object* v_t_433_, lean_object* v_ofWidget_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_MessageData_ctorElim___redArg(v_t_433_, v_ofWidget_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim(lean_object* v_motive__1_436_, lean_object* v_t_437_, lean_object* v_h_438_, lean_object* v_ofWidget_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_MessageData_ctorElim___redArg(v_t_437_, v_ofWidget_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim___redArg(lean_object* v_t_441_, lean_object* v_withContext_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_MessageData_ctorElim___redArg(v_t_441_, v_withContext_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim(lean_object* v_motive__1_444_, lean_object* v_t_445_, lean_object* v_h_446_, lean_object* v_withContext_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_MessageData_ctorElim___redArg(v_t_445_, v_withContext_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim___redArg(lean_object* v_t_449_, lean_object* v_withNamingContext_450_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_MessageData_ctorElim___redArg(v_t_449_, v_withNamingContext_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim(lean_object* v_motive__1_452_, lean_object* v_t_453_, lean_object* v_h_454_, lean_object* v_withNamingContext_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lean_MessageData_ctorElim___redArg(v_t_453_, v_withNamingContext_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim___redArg(lean_object* v_t_457_, lean_object* v_nest_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_MessageData_ctorElim___redArg(v_t_457_, v_nest_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim(lean_object* v_motive__1_460_, lean_object* v_t_461_, lean_object* v_h_462_, lean_object* v_nest_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_MessageData_ctorElim___redArg(v_t_461_, v_nest_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim___redArg(lean_object* v_t_465_, lean_object* v_group_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_MessageData_ctorElim___redArg(v_t_465_, v_group_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim(lean_object* v_motive__1_468_, lean_object* v_t_469_, lean_object* v_h_470_, lean_object* v_group_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Lean_MessageData_ctorElim___redArg(v_t_469_, v_group_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim___redArg(lean_object* v_t_473_, lean_object* v_compose_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_MessageData_ctorElim___redArg(v_t_473_, v_compose_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim(lean_object* v_motive__1_476_, lean_object* v_t_477_, lean_object* v_h_478_, lean_object* v_compose_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_MessageData_ctorElim___redArg(v_t_477_, v_compose_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim___redArg(lean_object* v_t_481_, lean_object* v_tagged_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_MessageData_ctorElim___redArg(v_t_481_, v_tagged_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim(lean_object* v_motive__1_484_, lean_object* v_t_485_, lean_object* v_h_486_, lean_object* v_tagged_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_MessageData_ctorElim___redArg(v_t_485_, v_tagged_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim___redArg(lean_object* v_t_489_, lean_object* v_trace_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_MessageData_ctorElim___redArg(v_t_489_, v_trace_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim(lean_object* v_motive__1_492_, lean_object* v_t_493_, lean_object* v_h_494_, lean_object* v_trace_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_MessageData_ctorElim___redArg(v_t_493_, v_trace_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim___redArg(lean_object* v_t_497_, lean_object* v_ofLazy_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lean_MessageData_ctorElim___redArg(v_t_497_, v_ofLazy_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim(lean_object* v_motive__1_500_, lean_object* v_t_501_, lean_object* v_h_502_, lean_object* v_ofLazy_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_MessageData_ctorElim___redArg(v_t_501_, v_ofLazy_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim___redArg(lean_object* v_t_505_, lean_object* v_ofOriginatingSyntax_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_MessageData_ctorElim___redArg(v_t_505_, v_ofOriginatingSyntax_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim(lean_object* v_motive__1_508_, lean_object* v_t_509_, lean_object* v_h_510_, lean_object* v_ofOriginatingSyntax_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_MessageData_ctorElim___redArg(v_t_509_, v_ofOriginatingSyntax_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormat(lean_object* v_fmt_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = lean_box(1);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_fmt_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0(lean_object* v___x_528_, lean_object* v_onMissingContext_529_, lean_object* v_f_530_, lean_object* v_ctx_x3f_531_){
_start:
{
lean_object* v_msg_534_; 
if (lean_obj_tag(v_ctx_x3f_531_) == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec_ref(v_f_530_);
v___x_536_ = lean_box(0);
v___x_537_ = lean_apply_2(v_onMissingContext_529_, v___x_536_, lean_box(0));
v_msg_534_ = v___x_537_;
goto v___jp_533_;
}
else
{
lean_object* v_val_538_; lean_object* v___x_539_; 
lean_dec_ref(v_onMissingContext_529_);
v_val_538_ = lean_ctor_get(v_ctx_x3f_531_, 0);
lean_inc(v_val_538_);
lean_dec_ref_known(v_ctx_x3f_531_, 1);
v___x_539_ = lean_apply_2(v_f_530_, v_val_538_, lean_box(0));
v_msg_534_ = v___x_539_;
goto v___jp_533_;
}
v___jp_533_:
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_528_);
lean_ctor_set(v___x_535_, 1, v_msg_534_);
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0___boxed(lean_object* v___x_540_, lean_object* v_onMissingContext_541_, lean_object* v_f_542_, lean_object* v_ctx_x3f_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_MessageData_lazy___lam__0(v___x_540_, v_onMissingContext_541_, v_f_542_, v_ctx_x3f_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy(lean_object* v_f_546_, lean_object* v_hasSyntheticSorry_547_, lean_object* v_onMissingContext_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___f_550_; lean_object* v___x_551_; 
v___x_549_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___f_550_ = lean_alloc_closure((void*)(l_Lean_MessageData_lazy___lam__0___boxed), 5, 3);
lean_closure_set(v___f_550_, 0, v___x_549_);
lean_closure_set(v___f_550_, 1, v_onMissingContext_548_);
lean_closure_set(v___f_550_, 2, v_f_546_);
v___x_551_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_551_, 0, v___f_550_);
lean_ctor_set(v___x_551_, 1, v_hasSyntheticSorry_547_);
return v___x_551_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_hasTag(lean_object* v_p_552_, lean_object* v_x_553_){
_start:
{
switch(lean_obj_tag(v_x_553_))
{
case 3:
{
lean_object* v_a_554_; 
v_a_554_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_a_554_);
lean_dec_ref_known(v_x_553_, 2);
v_x_553_ = v_a_554_;
goto _start;
}
case 4:
{
lean_object* v_a_556_; 
v_a_556_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_a_556_);
lean_dec_ref_known(v_x_553_, 2);
v_x_553_ = v_a_556_;
goto _start;
}
case 5:
{
lean_object* v_a_558_; 
v_a_558_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_a_558_);
lean_dec_ref_known(v_x_553_, 2);
v_x_553_ = v_a_558_;
goto _start;
}
case 6:
{
lean_object* v_a_560_; 
v_a_560_ = lean_ctor_get(v_x_553_, 0);
lean_inc_ref(v_a_560_);
lean_dec_ref_known(v_x_553_, 1);
v_x_553_ = v_a_560_;
goto _start;
}
case 7:
{
lean_object* v_a_562_; lean_object* v_a_563_; uint8_t v___x_564_; 
v_a_562_ = lean_ctor_get(v_x_553_, 0);
lean_inc_ref(v_a_562_);
v_a_563_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_a_563_);
lean_dec_ref_known(v_x_553_, 2);
lean_inc_ref(v_p_552_);
v___x_564_ = l_Lean_MessageData_hasTag(v_p_552_, v_a_562_);
if (v___x_564_ == 0)
{
v_x_553_ = v_a_563_;
goto _start;
}
else
{
lean_dec_ref(v_a_563_);
lean_dec_ref(v_p_552_);
return v___x_564_;
}
}
case 8:
{
lean_object* v_a_566_; lean_object* v_a_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
v_a_566_ = lean_ctor_get(v_x_553_, 0);
lean_inc(v_a_566_);
v_a_567_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_a_567_);
lean_dec_ref_known(v_x_553_, 2);
lean_inc_ref(v_p_552_);
v___x_568_ = lean_apply_1(v_p_552_, v_a_566_);
v___x_569_ = lean_unbox(v___x_568_);
if (v___x_569_ == 0)
{
v_x_553_ = v_a_567_;
goto _start;
}
else
{
uint8_t v___x_571_; 
lean_dec_ref(v_a_567_);
lean_dec_ref(v_p_552_);
v___x_571_ = lean_unbox(v___x_568_);
return v___x_571_;
}
}
case 9:
{
lean_object* v_data_572_; lean_object* v_msg_573_; lean_object* v_children_574_; lean_object* v_cls_575_; lean_object* v___x_576_; uint8_t v___x_577_; 
v_data_572_ = lean_ctor_get(v_x_553_, 0);
lean_inc_ref(v_data_572_);
v_msg_573_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_msg_573_);
v_children_574_ = lean_ctor_get(v_x_553_, 2);
lean_inc_ref(v_children_574_);
lean_dec_ref_known(v_x_553_, 3);
v_cls_575_ = lean_ctor_get(v_data_572_, 0);
lean_inc(v_cls_575_);
lean_dec_ref(v_data_572_);
lean_inc_ref(v_p_552_);
v___x_576_ = lean_apply_1(v_p_552_, v_cls_575_);
v___x_577_ = lean_unbox(v___x_576_);
if (v___x_577_ == 0)
{
uint8_t v___x_578_; 
lean_inc_ref(v_p_552_);
v___x_578_ = l_Lean_MessageData_hasTag(v_p_552_, v_msg_573_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_580_ = lean_array_get_size(v_children_574_);
v___x_581_ = lean_nat_dec_lt(v___x_579_, v___x_580_);
if (v___x_581_ == 0)
{
lean_dec_ref(v_children_574_);
lean_dec_ref(v_p_552_);
return v___x_581_;
}
else
{
if (v___x_581_ == 0)
{
lean_dec_ref(v_children_574_);
lean_dec_ref(v_p_552_);
return v___x_581_;
}
else
{
size_t v___x_582_; size_t v___x_583_; uint8_t v___x_584_; 
v___x_582_ = ((size_t)0ULL);
v___x_583_ = lean_usize_of_nat(v___x_580_);
v___x_584_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(v_p_552_, v_children_574_, v___x_582_, v___x_583_);
lean_dec_ref(v_children_574_);
return v___x_584_;
}
}
}
else
{
lean_dec_ref(v_children_574_);
lean_dec_ref(v_p_552_);
return v___x_578_;
}
}
else
{
uint8_t v___x_585_; 
lean_dec_ref(v_children_574_);
lean_dec_ref(v_msg_573_);
lean_dec_ref(v_p_552_);
v___x_585_ = lean_unbox(v___x_576_);
return v___x_585_;
}
}
case 11:
{
lean_object* v_a_586_; 
v_a_586_ = lean_ctor_get(v_x_553_, 1);
lean_inc_ref(v_a_586_);
lean_dec_ref_known(v_x_553_, 2);
v_x_553_ = v_a_586_;
goto _start;
}
default: 
{
uint8_t v___x_588_; 
lean_dec_ref(v_x_553_);
lean_dec_ref(v_p_552_);
v___x_588_ = 0;
return v___x_588_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(lean_object* v_p_589_, lean_object* v_as_590_, size_t v_i_591_, size_t v_stop_592_){
_start:
{
uint8_t v___x_593_; 
v___x_593_ = lean_usize_dec_eq(v_i_591_, v_stop_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = lean_array_uget_borrowed(v_as_590_, v_i_591_);
lean_inc(v___x_594_);
lean_inc_ref(v_p_589_);
v___x_595_ = l_Lean_MessageData_hasTag(v_p_589_, v___x_594_);
if (v___x_595_ == 0)
{
size_t v___x_596_; size_t v___x_597_; 
v___x_596_ = ((size_t)1ULL);
v___x_597_ = lean_usize_add(v_i_591_, v___x_596_);
v_i_591_ = v___x_597_;
goto _start;
}
else
{
lean_dec_ref(v_p_589_);
return v___x_595_;
}
}
else
{
uint8_t v___x_599_; 
lean_dec_ref(v_p_589_);
v___x_599_ = 0;
return v___x_599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0___boxed(lean_object* v_p_600_, lean_object* v_as_601_, lean_object* v_i_602_, lean_object* v_stop_603_){
_start:
{
size_t v_i_boxed_604_; size_t v_stop_boxed_605_; uint8_t v_res_606_; lean_object* v_r_607_; 
v_i_boxed_604_ = lean_unbox_usize(v_i_602_);
lean_dec(v_i_602_);
v_stop_boxed_605_ = lean_unbox_usize(v_stop_603_);
lean_dec(v_stop_603_);
v_res_606_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(v_p_600_, v_as_601_, v_i_boxed_604_, v_stop_boxed_605_);
lean_dec_ref(v_as_601_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hasTag___boxed(lean_object* v_p_608_, lean_object* v_x_609_){
_start:
{
uint8_t v_res_610_; lean_object* v_r_611_; 
v_res_610_ = l_Lean_MessageData_hasTag(v_p_608_, v_x_609_);
v_r_611_ = lean_box(v_res_610_);
return v_r_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_kind(lean_object* v_x_612_){
_start:
{
switch(lean_obj_tag(v_x_612_))
{
case 3:
{
lean_object* v_a_613_; 
v_a_613_ = lean_ctor_get(v_x_612_, 1);
v_x_612_ = v_a_613_;
goto _start;
}
case 4:
{
lean_object* v_a_615_; 
v_a_615_ = lean_ctor_get(v_x_612_, 1);
v_x_612_ = v_a_615_;
goto _start;
}
case 8:
{
lean_object* v_a_617_; 
v_a_617_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_a_617_);
return v_a_617_;
}
case 9:
{
lean_object* v_data_618_; lean_object* v_cls_619_; 
v_data_618_ = lean_ctor_get(v_x_612_, 0);
v_cls_619_ = lean_ctor_get(v_data_618_, 0);
lean_inc(v_cls_619_);
return v_cls_619_;
}
case 11:
{
lean_object* v_a_620_; 
v_a_620_ = lean_ctor_get(v_x_612_, 1);
v_x_612_ = v_a_620_;
goto _start;
}
default: 
{
lean_object* v___x_622_; 
v___x_622_ = lean_box(0);
return v___x_622_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_kind___boxed(lean_object* v_x_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lean_MessageData_kind(v_x_623_);
lean_dec_ref(v_x_623_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_originatingSyntax_x3f(lean_object* v_x_625_){
_start:
{
if (lean_obj_tag(v_x_625_) == 11)
{
lean_object* v_a_626_; lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_635_; 
v_a_626_ = lean_ctor_get(v_x_625_, 0);
v_a_627_ = lean_ctor_get(v_x_625_, 1);
v_isSharedCheck_635_ = !lean_is_exclusive(v_x_625_);
if (v_isSharedCheck_635_ == 0)
{
v___x_629_ = v_x_625_;
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_inc(v_a_626_);
lean_dec(v_x_625_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_635_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v_a_626_);
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 0);
lean_ctor_set(v___x_629_, 0, v___x_631_);
v___x_633_ = v___x_629_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_a_627_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_box(0);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v_x_625_);
return v___x_637_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isTrace(lean_object* v_x_638_){
_start:
{
switch(lean_obj_tag(v_x_638_))
{
case 3:
{
lean_object* v_a_639_; 
v_a_639_ = lean_ctor_get(v_x_638_, 1);
v_x_638_ = v_a_639_;
goto _start;
}
case 4:
{
lean_object* v_a_641_; 
v_a_641_ = lean_ctor_get(v_x_638_, 1);
v_x_638_ = v_a_641_;
goto _start;
}
case 8:
{
lean_object* v_a_643_; 
v_a_643_ = lean_ctor_get(v_x_638_, 1);
v_x_638_ = v_a_643_;
goto _start;
}
case 9:
{
uint8_t v___x_645_; 
v___x_645_ = 1;
return v___x_645_;
}
case 11:
{
lean_object* v_a_646_; 
v_a_646_ = lean_ctor_get(v_x_638_, 1);
v_x_638_ = v_a_646_;
goto _start;
}
default: 
{
uint8_t v___x_648_; 
v___x_648_ = 0;
return v___x_648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isTrace___boxed(lean_object* v_x_649_){
_start:
{
uint8_t v_res_650_; lean_object* v_r_651_; 
v_res_650_ = l_Lean_MessageData_isTrace(v_x_649_);
lean_dec_ref(v_x_649_);
v_r_651_ = lean_box(v_res_650_);
return v_r_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_composePreservingKind(lean_object* v_x_652_, lean_object* v_x_653_){
_start:
{
switch(lean_obj_tag(v_x_652_))
{
case 3:
{
lean_object* v_a_654_; lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_663_; 
v_a_654_ = lean_ctor_get(v_x_652_, 0);
v_a_655_ = lean_ctor_get(v_x_652_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_x_652_);
if (v_isSharedCheck_663_ == 0)
{
v___x_657_ = v_x_652_;
v_isShared_658_ = v_isSharedCheck_663_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_inc(v_a_654_);
lean_dec(v_x_652_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_663_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_659_ = l_Lean_MessageData_composePreservingKind(v_a_655_, v_x_653_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_659_);
v___x_661_ = v___x_657_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_654_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
case 4:
{
lean_object* v_a_664_; lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_673_; 
v_a_664_ = lean_ctor_get(v_x_652_, 0);
v_a_665_ = lean_ctor_get(v_x_652_, 1);
v_isSharedCheck_673_ = !lean_is_exclusive(v_x_652_);
if (v_isSharedCheck_673_ == 0)
{
v___x_667_ = v_x_652_;
v_isShared_668_ = v_isSharedCheck_673_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_inc(v_a_664_);
lean_dec(v_x_652_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_673_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = l_Lean_MessageData_composePreservingKind(v_a_665_, v_x_653_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_669_);
v___x_671_ = v___x_667_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_664_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
case 8:
{
lean_object* v_a_674_; lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_a_674_ = lean_ctor_get(v_x_652_, 0);
v_a_675_ = lean_ctor_get(v_x_652_, 1);
v_isSharedCheck_683_ = !lean_is_exclusive(v_x_652_);
if (v_isSharedCheck_683_ == 0)
{
v___x_677_ = v_x_652_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_inc(v_a_674_);
lean_dec(v_x_652_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 7);
lean_ctor_set(v___x_677_, 1, v_x_653_);
lean_ctor_set(v___x_677_, 0, v_a_675_);
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_675_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_x_653_);
v___x_680_ = v_reuseFailAlloc_682_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; 
v___x_681_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_681_, 0, v_a_674_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
return v___x_681_;
}
}
}
case 11:
{
lean_object* v_a_684_; lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
v_a_684_ = lean_ctor_get(v_x_652_, 0);
v_a_685_ = lean_ctor_get(v_x_652_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_652_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_652_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_inc(v_a_684_);
lean_dec(v_x_652_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = l_Lean_MessageData_composePreservingKind(v_a_685_, v_x_653_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 1, v___x_689_);
v___x_691_ = v___x_687_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_684_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
default: 
{
lean_object* v___x_694_; 
v___x_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_694_, 0, v_x_652_);
lean_ctor_set(v___x_694_, 1, v_x_653_);
return v___x_694_;
}
}
}
}
static lean_object* _init_l_Lean_MessageData_nil___closed__0(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_box(0);
v___x_696_ = l_Lean_MessageData_ofFormat(v___x_695_);
return v___x_696_;
}
}
static lean_object* _init_l_Lean_MessageData_nil(void){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = lean_obj_once(&l_Lean_MessageData_nil___closed__0, &l_Lean_MessageData_nil___closed__0_once, _init_l_Lean_MessageData_nil___closed__0);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext(lean_object* v_nCtx_698_, lean_object* v_ctx_699_){
_start:
{
lean_object* v_env_700_; lean_object* v_mctx_701_; lean_object* v_lctx_702_; lean_object* v_opts_703_; lean_object* v_currNamespace_704_; lean_object* v_openDecls_705_; lean_object* v___x_706_; 
v_env_700_ = lean_ctor_get(v_ctx_699_, 0);
v_mctx_701_ = lean_ctor_get(v_ctx_699_, 1);
v_lctx_702_ = lean_ctor_get(v_ctx_699_, 2);
v_opts_703_ = lean_ctor_get(v_ctx_699_, 3);
v_currNamespace_704_ = lean_ctor_get(v_nCtx_698_, 0);
v_openDecls_705_ = lean_ctor_get(v_nCtx_698_, 1);
lean_inc(v_openDecls_705_);
lean_inc(v_currNamespace_704_);
lean_inc_ref(v_opts_703_);
lean_inc_ref(v_lctx_702_);
lean_inc_ref(v_mctx_701_);
lean_inc_ref(v_env_700_);
v___x_706_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_706_, 0, v_env_700_);
lean_ctor_set(v___x_706_, 1, v_mctx_701_);
lean_ctor_set(v___x_706_, 2, v_lctx_702_);
lean_ctor_set(v___x_706_, 3, v_opts_703_);
lean_ctor_set(v___x_706_, 4, v_currNamespace_704_);
lean_ctor_set(v___x_706_, 5, v_openDecls_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext___boxed(lean_object* v_nCtx_707_, lean_object* v_ctx_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_MessageData_mkPPContext(v_nCtx_707_, v_ctx_708_);
lean_dec_ref(v_ctx_708_);
lean_dec_ref(v_nCtx_707_);
return v_res_709_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofSyntax___lam__0(lean_object* v_x_710_){
_start:
{
uint8_t v___x_711_; 
v___x_711_ = 0;
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__0___boxed(lean_object* v_x_712_){
_start:
{
uint8_t v_res_713_; lean_object* v_r_714_; 
v_res_713_ = l_Lean_MessageData_ofSyntax___lam__0(v_x_712_);
lean_dec_ref(v_x_712_);
v_r_714_ = lean_box(v_res_713_);
return v_r_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1(lean_object* v___x_715_, lean_object* v_stx_716_, lean_object* v_ctx_x3f_717_){
_start:
{
lean_object* v_val_720_; 
if (lean_obj_tag(v_ctx_x3f_717_) == 0)
{
lean_object* v___x_723_; uint8_t v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_box(0);
v___x_724_ = 0;
v___x_725_ = l_Lean_Syntax_formatStx(v_stx_716_, v___x_723_, v___x_724_);
v_val_720_ = v___x_725_;
goto v___jp_719_;
}
else
{
lean_object* v_val_726_; lean_object* v___x_727_; 
v_val_726_ = lean_ctor_get(v_ctx_x3f_717_, 0);
lean_inc(v_val_726_);
lean_dec_ref_known(v_ctx_x3f_717_, 1);
v___x_727_ = l_Lean_ppTerm(v_val_726_, v_stx_716_);
v_val_720_ = v___x_727_;
goto v___jp_719_;
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = l_Lean_MessageData_ofFormat(v_val_720_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_715_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1___boxed(lean_object* v___x_728_, lean_object* v_stx_729_, lean_object* v_ctx_x3f_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_MessageData_ofSyntax___lam__1(v___x_728_, v_stx_729_, v_ctx_x3f_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax(lean_object* v_stx_734_){
_start:
{
lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v_stx_738_; lean_object* v___f_739_; lean_object* v___x_740_; 
v___f_735_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_736_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___x_737_ = lean_box(0);
v_stx_738_ = l_Lean_Syntax_copyHeadTailInfoFrom(v_stx_734_, v___x_737_);
v___f_739_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofSyntax___lam__1___boxed), 4, 2);
lean_closure_set(v___f_739_, 0, v___x_736_);
lean_closure_set(v___f_739_, 1, v_stx_738_);
v___x_740_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_740_, 0, v___f_739_);
lean_ctor_set(v___x_740_, 1, v___f_735_);
return v___x_740_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofExpr___lam__0(lean_object* v_e_741_, lean_object* v_mctx_742_){
_start:
{
lean_object* v___x_743_; lean_object* v_fst_744_; uint8_t v___x_745_; 
v___x_743_ = l_Lean_instantiateMVarsCore(v_mctx_742_, v_e_741_);
v_fst_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_fst_744_);
lean_dec_ref(v___x_743_);
v___x_745_ = l_Lean_Expr_hasSyntheticSorry(v_fst_744_);
lean_dec(v_fst_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__0___boxed(lean_object* v_e_746_, lean_object* v_mctx_747_){
_start:
{
uint8_t v_res_748_; lean_object* v_r_749_; 
v_res_748_ = l_Lean_MessageData_ofExpr___lam__0(v_e_746_, v_mctx_747_);
v_r_749_ = lean_box(v_res_748_);
return v_r_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1(lean_object* v___x_750_, lean_object* v_e_751_, lean_object* v_ctx_x3f_752_){
_start:
{
lean_object* v_val_755_; 
if (lean_obj_tag(v_ctx_x3f_752_) == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_758_ = lean_expr_dbg_to_string(v_e_751_);
lean_dec_ref(v_e_751_);
v___x_759_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
v___x_760_ = lean_box(1);
v___x_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_759_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v_val_755_ = v___x_761_;
goto v___jp_754_;
}
else
{
lean_object* v_val_762_; lean_object* v___x_763_; 
v_val_762_ = lean_ctor_get(v_ctx_x3f_752_, 0);
lean_inc(v_val_762_);
lean_dec_ref_known(v_ctx_x3f_752_, 1);
v___x_763_ = l_Lean_ppExprWithInfos(v_val_762_, v_e_751_);
v_val_755_ = v___x_763_;
goto v___jp_754_;
}
v___jp_754_:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v_val_755_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_750_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
return v___x_757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1___boxed(lean_object* v___x_764_, lean_object* v_e_765_, lean_object* v_ctx_x3f_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_MessageData_ofExpr___lam__1(v___x_764_, v_e_765_, v_ctx_x3f_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr(lean_object* v_e_769_){
_start:
{
lean_object* v___f_770_; lean_object* v___x_771_; lean_object* v___f_772_; lean_object* v___x_773_; 
lean_inc_ref(v_e_769_);
v___f_770_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_770_, 0, v_e_769_);
v___x_771_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___f_772_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__1___boxed), 4, 2);
lean_closure_set(v___f_772_, 0, v___x_771_);
lean_closure_set(v___f_772_, 1, v_e_769_);
v___x_773_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_773_, 0, v___f_772_);
lean_ctor_set(v___x_773_, 1, v___f_770_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0(lean_object* v_x_774_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = lean_box(0);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0___boxed(lean_object* v_x_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_MessageData_ofLevel___lam__0(v_x_776_);
lean_dec(v_x_776_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2(lean_object* v___x_778_, lean_object* v_l_779_, lean_object* v___f_780_, lean_object* v_ctx_x3f_781_){
_start:
{
lean_object* v_val_784_; 
if (lean_obj_tag(v_ctx_x3f_781_) == 0)
{
uint8_t v___x_787_; lean_object* v___x_788_; 
v___x_787_ = 1;
v___x_788_ = l_Lean_Level_format(v_l_779_, v___x_787_, v___f_780_);
v_val_784_ = v___x_788_;
goto v___jp_783_;
}
else
{
lean_object* v_val_789_; lean_object* v___x_790_; 
lean_dec_ref(v___f_780_);
v_val_789_ = lean_ctor_get(v_ctx_x3f_781_, 0);
lean_inc(v_val_789_);
lean_dec_ref_known(v_ctx_x3f_781_, 1);
v___x_790_ = l_Lean_ppLevel(v_val_789_, v_l_779_);
v_val_784_ = v___x_790_;
goto v___jp_783_;
}
v___jp_783_:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = l_Lean_MessageData_ofFormat(v_val_784_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_778_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
return v___x_786_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2___boxed(lean_object* v___x_791_, lean_object* v_l_792_, lean_object* v___f_793_, lean_object* v_ctx_x3f_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_MessageData_ofLevel___lam__2(v___x_791_, v_l_792_, v___f_793_, v_ctx_x3f_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel(lean_object* v_l_798_){
_start:
{
lean_object* v___f_799_; lean_object* v___f_800_; lean_object* v___x_801_; lean_object* v___f_802_; lean_object* v___x_803_; 
v___f_799_ = ((lean_object*)(l_Lean_MessageData_ofLevel___closed__0));
v___f_800_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_801_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___f_802_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofLevel___lam__2___boxed), 5, 3);
lean_closure_set(v___f_802_, 0, v___x_801_);
lean_closure_set(v___f_802_, 1, v_l_798_);
lean_closure_set(v___f_802_, 2, v___f_799_);
v___x_803_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_803_, 0, v___f_802_);
lean_ctor_set(v___x_803_, 1, v___f_800_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofName(lean_object* v_n_804_){
_start:
{
uint8_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_805_ = 1;
v___x_806_ = l_Lean_Name_toString(v_n_804_, v___x_805_);
v___x_807_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
v___x_808_ = l_Lean_MessageData_ofFormat(v___x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(lean_object* v_o_812_, lean_object* v_k_813_, uint8_t v_v_814_){
_start:
{
lean_object* v_map_815_; uint8_t v_hasTrace_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_830_; 
v_map_815_ = lean_ctor_get(v_o_812_, 0);
v_hasTrace_816_ = lean_ctor_get_uint8(v_o_812_, sizeof(void*)*1);
v_isSharedCheck_830_ = !lean_is_exclusive(v_o_812_);
if (v_isSharedCheck_830_ == 0)
{
v___x_818_ = v_o_812_;
v_isShared_819_ = v_isSharedCheck_830_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_map_815_);
lean_dec(v_o_812_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_830_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_820_, 0, v_v_814_);
lean_inc(v_k_813_);
v___x_821_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_813_, v___x_820_, v_map_815_);
if (v_hasTrace_816_ == 0)
{
lean_object* v___x_822_; uint8_t v___x_823_; lean_object* v___x_825_; 
v___x_822_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1));
v___x_823_ = l_Lean_Name_isPrefixOf(v___x_822_, v_k_813_);
lean_dec(v_k_813_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_821_);
v___x_825_ = v___x_818_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_821_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
lean_ctor_set_uint8(v___x_825_, sizeof(void*)*1, v___x_823_);
return v___x_825_;
}
}
else
{
lean_object* v___x_828_; 
lean_dec(v_k_813_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_821_);
v___x_828_ = v___x_818_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_821_);
lean_ctor_set_uint8(v_reuseFailAlloc_829_, sizeof(void*)*1, v_hasTrace_816_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___boxed(lean_object* v_o_831_, lean_object* v_k_832_, lean_object* v_v_833_){
_start:
{
uint8_t v_v_boxed_834_; lean_object* v_res_835_; 
v_v_boxed_834_ = lean_unbox(v_v_833_);
v_res_835_ = l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(v_o_831_, v_k_832_, v_v_boxed_834_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1(lean_object* v___x_841_, lean_object* v_constName_842_, uint8_t v_fullNames_843_, lean_object* v_ctx_x3f_844_){
_start:
{
lean_object* v_val_847_; lean_object* v___y_851_; 
if (lean_obj_tag(v_ctx_x3f_844_) == 0)
{
uint8_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_852_ = 1;
v___x_853_ = l_Lean_Name_toString(v_constName_842_, v___x_852_);
v___x_854_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
v___x_855_ = lean_box(1);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v_val_847_ = v___x_856_;
goto v___jp_846_;
}
else
{
if (v_fullNames_843_ == 0)
{
lean_object* v_val_857_; lean_object* v___x_858_; 
v_val_857_ = lean_ctor_get(v_ctx_x3f_844_, 0);
lean_inc(v_val_857_);
lean_dec_ref_known(v_ctx_x3f_844_, 1);
v___x_858_ = l_Lean_ppConstNameWithInfos(v_val_857_, v_constName_842_);
v___y_851_ = v___x_858_;
goto v___jp_850_;
}
else
{
lean_object* v_val_859_; lean_object* v_env_860_; lean_object* v_mctx_861_; lean_object* v_lctx_862_; lean_object* v_opts_863_; lean_object* v_currNamespace_864_; lean_object* v_openDecls_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_875_; 
v_val_859_ = lean_ctor_get(v_ctx_x3f_844_, 0);
lean_inc(v_val_859_);
lean_dec_ref_known(v_ctx_x3f_844_, 1);
v_env_860_ = lean_ctor_get(v_val_859_, 0);
v_mctx_861_ = lean_ctor_get(v_val_859_, 1);
v_lctx_862_ = lean_ctor_get(v_val_859_, 2);
v_opts_863_ = lean_ctor_get(v_val_859_, 3);
v_currNamespace_864_ = lean_ctor_get(v_val_859_, 4);
v_openDecls_865_ = lean_ctor_get(v_val_859_, 5);
v_isSharedCheck_875_ = !lean_is_exclusive(v_val_859_);
if (v_isSharedCheck_875_ == 0)
{
v___x_867_ = v_val_859_;
v_isShared_868_ = v_isSharedCheck_875_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_openDecls_865_);
lean_inc(v_currNamespace_864_);
lean_inc(v_opts_863_);
lean_inc(v_lctx_862_);
lean_inc(v_mctx_861_);
lean_inc(v_env_860_);
lean_dec(v_val_859_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_875_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = ((lean_object*)(l_Lean_MessageData_ofConstName___lam__1___closed__2));
v___x_870_ = l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(v_opts_863_, v___x_869_, v_fullNames_843_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 3, v___x_870_);
v___x_872_ = v___x_867_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_env_860_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_mctx_861_);
lean_ctor_set(v_reuseFailAlloc_874_, 2, v_lctx_862_);
lean_ctor_set(v_reuseFailAlloc_874_, 3, v___x_870_);
lean_ctor_set(v_reuseFailAlloc_874_, 4, v_currNamespace_864_);
lean_ctor_set(v_reuseFailAlloc_874_, 5, v_openDecls_865_);
v___x_872_ = v_reuseFailAlloc_874_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_ppConstNameWithInfos(v___x_872_, v_constName_842_);
v___y_851_ = v___x_873_;
goto v___jp_850_;
}
}
}
}
v___jp_846_:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_848_, 0, v_val_847_);
v___x_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_841_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
return v___x_849_;
}
v___jp_850_:
{
v_val_847_ = v___y_851_;
goto v___jp_846_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1___boxed(lean_object* v___x_876_, lean_object* v_constName_877_, lean_object* v_fullNames_878_, lean_object* v_ctx_x3f_879_, lean_object* v___y_880_){
_start:
{
uint8_t v_fullNames_boxed_881_; lean_object* v_res_882_; 
v_fullNames_boxed_881_ = lean_unbox(v_fullNames_878_);
v_res_882_ = l_Lean_MessageData_ofConstName___lam__1(v___x_876_, v_constName_877_, v_fullNames_boxed_881_, v_ctx_x3f_879_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName(lean_object* v_constName_883_, uint8_t v_fullNames_884_){
_start:
{
lean_object* v___f_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___f_888_; lean_object* v___x_889_; 
v___f_885_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_886_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___x_887_ = lean_box(v_fullNames_884_);
v___f_888_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofConstName___lam__1___boxed), 5, 3);
lean_closure_set(v___f_888_, 0, v___x_886_);
lean_closure_set(v___f_888_, 1, v_constName_883_);
lean_closure_set(v___f_888_, 2, v___x_887_);
v___x_889_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_889_, 0, v___f_888_);
lean_ctor_set(v___x_889_, 1, v___f_885_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___boxed(lean_object* v_constName_890_, lean_object* v_fullNames_891_){
_start:
{
uint8_t v_fullNames_boxed_892_; lean_object* v_res_893_; 
v_fullNames_boxed_892_ = lean_unbox(v_fullNames_891_);
v_res_893_ = l_Lean_MessageData_ofConstName(v_constName_890_, v_fullNames_boxed_892_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0(lean_object* v_val_894_, lean_object* v___y_895_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v_val_894_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0___boxed(lean_object* v_val_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_MessageData_withExprHover___lam__0(v_val_898_, v___y_899_);
lean_dec_ref(v___y_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(lean_object* v_k_902_, lean_object* v_v_903_, lean_object* v_t_904_){
_start:
{
if (lean_obj_tag(v_t_904_) == 0)
{
lean_object* v_size_905_; lean_object* v_k_906_; lean_object* v_v_907_; lean_object* v_l_908_; lean_object* v_r_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_1190_; 
v_size_905_ = lean_ctor_get(v_t_904_, 0);
v_k_906_ = lean_ctor_get(v_t_904_, 1);
v_v_907_ = lean_ctor_get(v_t_904_, 2);
v_l_908_ = lean_ctor_get(v_t_904_, 3);
v_r_909_ = lean_ctor_get(v_t_904_, 4);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_t_904_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_911_ = v_t_904_;
v_isShared_912_ = v_isSharedCheck_1190_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_r_909_);
lean_inc(v_l_908_);
lean_inc(v_v_907_);
lean_inc(v_k_906_);
lean_inc(v_size_905_);
lean_dec(v_t_904_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_1190_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
uint8_t v___x_913_; 
v___x_913_ = lean_nat_dec_lt(v_k_902_, v_k_906_);
if (v___x_913_ == 0)
{
uint8_t v___x_914_; 
v___x_914_ = lean_nat_dec_eq(v_k_902_, v_k_906_);
if (v___x_914_ == 0)
{
lean_object* v_impl_915_; lean_object* v___x_916_; 
lean_dec(v_size_905_);
v_impl_915_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_902_, v_v_903_, v_r_909_);
v___x_916_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_908_) == 0)
{
lean_object* v_size_917_; lean_object* v_size_918_; lean_object* v_k_919_; lean_object* v_v_920_; lean_object* v_l_921_; lean_object* v_r_922_; lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v_size_917_ = lean_ctor_get(v_l_908_, 0);
v_size_918_ = lean_ctor_get(v_impl_915_, 0);
lean_inc(v_size_918_);
v_k_919_ = lean_ctor_get(v_impl_915_, 1);
lean_inc(v_k_919_);
v_v_920_ = lean_ctor_get(v_impl_915_, 2);
lean_inc(v_v_920_);
v_l_921_ = lean_ctor_get(v_impl_915_, 3);
lean_inc(v_l_921_);
v_r_922_ = lean_ctor_get(v_impl_915_, 4);
lean_inc(v_r_922_);
v___x_923_ = lean_unsigned_to_nat(3u);
v___x_924_ = lean_nat_mul(v___x_923_, v_size_917_);
v___x_925_ = lean_nat_dec_lt(v___x_924_, v_size_918_);
lean_dec(v___x_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_929_; 
lean_dec(v_r_922_);
lean_dec(v_l_921_);
lean_dec(v_v_920_);
lean_dec(v_k_919_);
v___x_926_ = lean_nat_add(v___x_916_, v_size_917_);
v___x_927_ = lean_nat_add(v___x_926_, v_size_918_);
lean_dec(v_size_918_);
lean_dec(v___x_926_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v_impl_915_);
lean_ctor_set(v___x_911_, 0, v___x_927_);
v___x_929_ = v___x_911_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_l_908_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v_impl_915_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
else
{
lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_994_; 
v_isSharedCheck_994_ = !lean_is_exclusive(v_impl_915_);
if (v_isSharedCheck_994_ == 0)
{
lean_object* v_unused_995_; lean_object* v_unused_996_; lean_object* v_unused_997_; lean_object* v_unused_998_; lean_object* v_unused_999_; 
v_unused_995_ = lean_ctor_get(v_impl_915_, 4);
lean_dec(v_unused_995_);
v_unused_996_ = lean_ctor_get(v_impl_915_, 3);
lean_dec(v_unused_996_);
v_unused_997_ = lean_ctor_get(v_impl_915_, 2);
lean_dec(v_unused_997_);
v_unused_998_ = lean_ctor_get(v_impl_915_, 1);
lean_dec(v_unused_998_);
v_unused_999_ = lean_ctor_get(v_impl_915_, 0);
lean_dec(v_unused_999_);
v___x_932_ = v_impl_915_;
v_isShared_933_ = v_isSharedCheck_994_;
goto v_resetjp_931_;
}
else
{
lean_dec(v_impl_915_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_994_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v_size_934_; lean_object* v_k_935_; lean_object* v_v_936_; lean_object* v_l_937_; lean_object* v_r_938_; lean_object* v_size_939_; lean_object* v___x_940_; lean_object* v___x_941_; uint8_t v___x_942_; 
v_size_934_ = lean_ctor_get(v_l_921_, 0);
v_k_935_ = lean_ctor_get(v_l_921_, 1);
v_v_936_ = lean_ctor_get(v_l_921_, 2);
v_l_937_ = lean_ctor_get(v_l_921_, 3);
v_r_938_ = lean_ctor_get(v_l_921_, 4);
v_size_939_ = lean_ctor_get(v_r_922_, 0);
v___x_940_ = lean_unsigned_to_nat(2u);
v___x_941_ = lean_nat_mul(v___x_940_, v_size_939_);
v___x_942_ = lean_nat_dec_lt(v_size_934_, v___x_941_);
lean_dec(v___x_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_970_; 
lean_inc(v_r_938_);
lean_inc(v_l_937_);
lean_inc(v_v_936_);
lean_inc(v_k_935_);
v_isSharedCheck_970_ = !lean_is_exclusive(v_l_921_);
if (v_isSharedCheck_970_ == 0)
{
lean_object* v_unused_971_; lean_object* v_unused_972_; lean_object* v_unused_973_; lean_object* v_unused_974_; lean_object* v_unused_975_; 
v_unused_971_ = lean_ctor_get(v_l_921_, 4);
lean_dec(v_unused_971_);
v_unused_972_ = lean_ctor_get(v_l_921_, 3);
lean_dec(v_unused_972_);
v_unused_973_ = lean_ctor_get(v_l_921_, 2);
lean_dec(v_unused_973_);
v_unused_974_ = lean_ctor_get(v_l_921_, 1);
lean_dec(v_unused_974_);
v_unused_975_ = lean_ctor_get(v_l_921_, 0);
lean_dec(v_unused_975_);
v___x_944_ = v_l_921_;
v_isShared_945_ = v_isSharedCheck_970_;
goto v_resetjp_943_;
}
else
{
lean_dec(v_l_921_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_970_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_951_; lean_object* v___y_960_; 
v___x_946_ = lean_nat_add(v___x_916_, v_size_917_);
v___x_947_ = lean_nat_add(v___x_946_, v_size_918_);
lean_dec(v_size_918_);
if (lean_obj_tag(v_l_937_) == 0)
{
lean_object* v_size_968_; 
v_size_968_ = lean_ctor_get(v_l_937_, 0);
lean_inc(v_size_968_);
v___y_960_ = v_size_968_;
goto v___jp_959_;
}
else
{
lean_object* v___x_969_; 
v___x_969_ = lean_unsigned_to_nat(0u);
v___y_960_ = v___x_969_;
goto v___jp_959_;
}
v___jp_948_:
{
lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_952_ = lean_nat_add(v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec(v___y_950_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 4, v_r_922_);
lean_ctor_set(v___x_944_, 3, v_r_938_);
lean_ctor_set(v___x_944_, 2, v_v_920_);
lean_ctor_set(v___x_944_, 1, v_k_919_);
lean_ctor_set(v___x_944_, 0, v___x_952_);
v___x_954_ = v___x_944_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_k_919_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v_v_920_);
lean_ctor_set(v_reuseFailAlloc_958_, 3, v_r_938_);
lean_ctor_set(v_reuseFailAlloc_958_, 4, v_r_922_);
v___x_954_ = v_reuseFailAlloc_958_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_956_; 
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 4, v___x_954_);
lean_ctor_set(v___x_932_, 3, v___y_949_);
lean_ctor_set(v___x_932_, 2, v_v_936_);
lean_ctor_set(v___x_932_, 1, v_k_935_);
lean_ctor_set(v___x_932_, 0, v___x_947_);
v___x_956_ = v___x_932_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_k_935_);
lean_ctor_set(v_reuseFailAlloc_957_, 2, v_v_936_);
lean_ctor_set(v_reuseFailAlloc_957_, 3, v___y_949_);
lean_ctor_set(v_reuseFailAlloc_957_, 4, v___x_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
v___jp_959_:
{
lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_961_ = lean_nat_add(v___x_946_, v___y_960_);
lean_dec(v___y_960_);
lean_dec(v___x_946_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v_l_937_);
lean_ctor_set(v___x_911_, 0, v___x_961_);
v___x_963_ = v___x_911_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_961_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_967_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_967_, 3, v_l_908_);
lean_ctor_set(v_reuseFailAlloc_967_, 4, v_l_937_);
v___x_963_ = v_reuseFailAlloc_967_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; 
v___x_964_ = lean_nat_add(v___x_916_, v_size_939_);
if (lean_obj_tag(v_r_938_) == 0)
{
lean_object* v_size_965_; 
v_size_965_ = lean_ctor_get(v_r_938_, 0);
lean_inc(v_size_965_);
v___y_949_ = v___x_963_;
v___y_950_ = v___x_964_;
v___y_951_ = v_size_965_;
goto v___jp_948_;
}
else
{
lean_object* v___x_966_; 
v___x_966_ = lean_unsigned_to_nat(0u);
v___y_949_ = v___x_963_;
v___y_950_ = v___x_964_;
v___y_951_ = v___x_966_;
goto v___jp_948_;
}
}
}
}
}
else
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_980_; 
lean_del_object(v___x_911_);
v___x_976_ = lean_nat_add(v___x_916_, v_size_917_);
v___x_977_ = lean_nat_add(v___x_976_, v_size_918_);
lean_dec(v_size_918_);
v___x_978_ = lean_nat_add(v___x_976_, v_size_934_);
lean_dec(v___x_976_);
lean_inc_ref(v_l_908_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 4, v_l_921_);
lean_ctor_set(v___x_932_, 3, v_l_908_);
lean_ctor_set(v___x_932_, 2, v_v_907_);
lean_ctor_set(v___x_932_, 1, v_k_906_);
lean_ctor_set(v___x_932_, 0, v___x_978_);
v___x_980_ = v___x_932_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_978_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_993_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_993_, 3, v_l_908_);
lean_ctor_set(v_reuseFailAlloc_993_, 4, v_l_921_);
v___x_980_ = v_reuseFailAlloc_993_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
v_isSharedCheck_987_ = !lean_is_exclusive(v_l_908_);
if (v_isSharedCheck_987_ == 0)
{
lean_object* v_unused_988_; lean_object* v_unused_989_; lean_object* v_unused_990_; lean_object* v_unused_991_; lean_object* v_unused_992_; 
v_unused_988_ = lean_ctor_get(v_l_908_, 4);
lean_dec(v_unused_988_);
v_unused_989_ = lean_ctor_get(v_l_908_, 3);
lean_dec(v_unused_989_);
v_unused_990_ = lean_ctor_get(v_l_908_, 2);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_l_908_, 1);
lean_dec(v_unused_991_);
v_unused_992_ = lean_ctor_get(v_l_908_, 0);
lean_dec(v_unused_992_);
v___x_982_ = v_l_908_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_dec(v_l_908_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 4, v_r_922_);
lean_ctor_set(v___x_982_, 3, v___x_980_);
lean_ctor_set(v___x_982_, 2, v_v_920_);
lean_ctor_set(v___x_982_, 1, v_k_919_);
lean_ctor_set(v___x_982_, 0, v___x_977_);
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_k_919_);
lean_ctor_set(v_reuseFailAlloc_986_, 2, v_v_920_);
lean_ctor_set(v_reuseFailAlloc_986_, 3, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_986_, 4, v_r_922_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1000_; 
v_l_1000_ = lean_ctor_get(v_impl_915_, 3);
lean_inc(v_l_1000_);
if (lean_obj_tag(v_l_1000_) == 0)
{
lean_object* v_r_1001_; lean_object* v_k_1002_; lean_object* v_v_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1026_; 
v_r_1001_ = lean_ctor_get(v_impl_915_, 4);
v_k_1002_ = lean_ctor_get(v_impl_915_, 1);
v_v_1003_ = lean_ctor_get(v_impl_915_, 2);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_impl_915_);
if (v_isSharedCheck_1026_ == 0)
{
lean_object* v_unused_1027_; lean_object* v_unused_1028_; 
v_unused_1027_ = lean_ctor_get(v_impl_915_, 3);
lean_dec(v_unused_1027_);
v_unused_1028_ = lean_ctor_get(v_impl_915_, 0);
lean_dec(v_unused_1028_);
v___x_1005_ = v_impl_915_;
v_isShared_1006_ = v_isSharedCheck_1026_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_r_1001_);
lean_inc(v_v_1003_);
lean_inc(v_k_1002_);
lean_dec(v_impl_915_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1026_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v_k_1007_; lean_object* v_v_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1022_; 
v_k_1007_ = lean_ctor_get(v_l_1000_, 1);
v_v_1008_ = lean_ctor_get(v_l_1000_, 2);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_l_1000_);
if (v_isSharedCheck_1022_ == 0)
{
lean_object* v_unused_1023_; lean_object* v_unused_1024_; lean_object* v_unused_1025_; 
v_unused_1023_ = lean_ctor_get(v_l_1000_, 4);
lean_dec(v_unused_1023_);
v_unused_1024_ = lean_ctor_get(v_l_1000_, 3);
lean_dec(v_unused_1024_);
v_unused_1025_ = lean_ctor_get(v_l_1000_, 0);
lean_dec(v_unused_1025_);
v___x_1010_ = v_l_1000_;
v_isShared_1011_ = v_isSharedCheck_1022_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_v_1008_);
lean_inc(v_k_1007_);
lean_dec(v_l_1000_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1022_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1012_; lean_object* v___x_1014_; 
v___x_1012_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1001_, 2);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 4, v_r_1001_);
lean_ctor_set(v___x_1010_, 3, v_r_1001_);
lean_ctor_set(v___x_1010_, 2, v_v_907_);
lean_ctor_set(v___x_1010_, 1, v_k_906_);
lean_ctor_set(v___x_1010_, 0, v___x_916_);
v___x_1014_ = v___x_1010_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1021_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1021_, 3, v_r_1001_);
lean_ctor_set(v_reuseFailAlloc_1021_, 4, v_r_1001_);
v___x_1014_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1016_; 
lean_inc(v_r_1001_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 3, v_r_1001_);
lean_ctor_set(v___x_1005_, 0, v___x_916_);
v___x_1016_ = v___x_1005_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_k_1002_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v_v_1003_);
lean_ctor_set(v_reuseFailAlloc_1020_, 3, v_r_1001_);
lean_ctor_set(v_reuseFailAlloc_1020_, 4, v_r_1001_);
v___x_1016_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1018_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v___x_1016_);
lean_ctor_set(v___x_911_, 3, v___x_1014_);
lean_ctor_set(v___x_911_, 2, v_v_1008_);
lean_ctor_set(v___x_911_, 1, v_k_1007_);
lean_ctor_set(v___x_911_, 0, v___x_1012_);
v___x_1018_ = v___x_911_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_k_1007_);
lean_ctor_set(v_reuseFailAlloc_1019_, 2, v_v_1008_);
lean_ctor_set(v_reuseFailAlloc_1019_, 3, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1019_, 4, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
}
else
{
lean_object* v_r_1029_; 
v_r_1029_ = lean_ctor_get(v_impl_915_, 4);
lean_inc(v_r_1029_);
if (lean_obj_tag(v_r_1029_) == 0)
{
lean_object* v_k_1030_; lean_object* v_v_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1042_; 
v_k_1030_ = lean_ctor_get(v_impl_915_, 1);
v_v_1031_ = lean_ctor_get(v_impl_915_, 2);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_impl_915_);
if (v_isSharedCheck_1042_ == 0)
{
lean_object* v_unused_1043_; lean_object* v_unused_1044_; lean_object* v_unused_1045_; 
v_unused_1043_ = lean_ctor_get(v_impl_915_, 4);
lean_dec(v_unused_1043_);
v_unused_1044_ = lean_ctor_get(v_impl_915_, 3);
lean_dec(v_unused_1044_);
v_unused_1045_ = lean_ctor_get(v_impl_915_, 0);
lean_dec(v_unused_1045_);
v___x_1033_ = v_impl_915_;
v_isShared_1034_ = v_isSharedCheck_1042_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_v_1031_);
lean_inc(v_k_1030_);
lean_dec(v_impl_915_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1042_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1035_ = lean_unsigned_to_nat(3u);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 4, v_l_1000_);
lean_ctor_set(v___x_1033_, 2, v_v_907_);
lean_ctor_set(v___x_1033_, 1, v_k_906_);
lean_ctor_set(v___x_1033_, 0, v___x_916_);
v___x_1037_ = v___x_1033_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1041_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1041_, 3, v_l_1000_);
lean_ctor_set(v_reuseFailAlloc_1041_, 4, v_l_1000_);
v___x_1037_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1039_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v_r_1029_);
lean_ctor_set(v___x_911_, 3, v___x_1037_);
lean_ctor_set(v___x_911_, 2, v_v_1031_);
lean_ctor_set(v___x_911_, 1, v_k_1030_);
lean_ctor_set(v___x_911_, 0, v___x_1035_);
v___x_1039_ = v___x_911_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1035_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1040_, 3, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1040_, 4, v_r_1029_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1046_ = lean_unsigned_to_nat(2u);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v_impl_915_);
lean_ctor_set(v___x_911_, 3, v_r_1029_);
lean_ctor_set(v___x_911_, 0, v___x_1046_);
v___x_1048_ = v___x_911_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1049_, 3, v_r_1029_);
lean_ctor_set(v_reuseFailAlloc_1049_, 4, v_impl_915_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
else
{
lean_object* v___x_1051_; 
lean_dec(v_v_907_);
lean_dec(v_k_906_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 2, v_v_903_);
lean_ctor_set(v___x_911_, 1, v_k_902_);
v___x_1051_ = v___x_911_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_size_905_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_k_902_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_v_903_);
lean_ctor_set(v_reuseFailAlloc_1052_, 3, v_l_908_);
lean_ctor_set(v_reuseFailAlloc_1052_, 4, v_r_909_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
else
{
lean_object* v_impl_1053_; lean_object* v___x_1054_; 
lean_dec(v_size_905_);
v_impl_1053_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_902_, v_v_903_, v_l_908_);
v___x_1054_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_909_) == 0)
{
lean_object* v_size_1055_; lean_object* v_size_1056_; lean_object* v_k_1057_; lean_object* v_v_1058_; lean_object* v_l_1059_; lean_object* v_r_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_size_1055_ = lean_ctor_get(v_r_909_, 0);
v_size_1056_ = lean_ctor_get(v_impl_1053_, 0);
lean_inc(v_size_1056_);
v_k_1057_ = lean_ctor_get(v_impl_1053_, 1);
lean_inc(v_k_1057_);
v_v_1058_ = lean_ctor_get(v_impl_1053_, 2);
lean_inc(v_v_1058_);
v_l_1059_ = lean_ctor_get(v_impl_1053_, 3);
lean_inc(v_l_1059_);
v_r_1060_ = lean_ctor_get(v_impl_1053_, 4);
lean_inc(v_r_1060_);
v___x_1061_ = lean_unsigned_to_nat(3u);
v___x_1062_ = lean_nat_mul(v___x_1061_, v_size_1055_);
v___x_1063_ = lean_nat_dec_lt(v___x_1062_, v_size_1056_);
lean_dec(v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
lean_dec(v_r_1060_);
lean_dec(v_l_1059_);
lean_dec(v_v_1058_);
lean_dec(v_k_1057_);
v___x_1064_ = lean_nat_add(v___x_1054_, v_size_1056_);
lean_dec(v_size_1056_);
v___x_1065_ = lean_nat_add(v___x_1064_, v_size_1055_);
lean_dec(v___x_1064_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 3, v_impl_1053_);
lean_ctor_set(v___x_911_, 0, v___x_1065_);
v___x_1067_ = v___x_911_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1068_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1068_, 3, v_impl_1053_);
lean_ctor_set(v_reuseFailAlloc_1068_, 4, v_r_909_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
else
{
lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1134_; 
v_isSharedCheck_1134_ = !lean_is_exclusive(v_impl_1053_);
if (v_isSharedCheck_1134_ == 0)
{
lean_object* v_unused_1135_; lean_object* v_unused_1136_; lean_object* v_unused_1137_; lean_object* v_unused_1138_; lean_object* v_unused_1139_; 
v_unused_1135_ = lean_ctor_get(v_impl_1053_, 4);
lean_dec(v_unused_1135_);
v_unused_1136_ = lean_ctor_get(v_impl_1053_, 3);
lean_dec(v_unused_1136_);
v_unused_1137_ = lean_ctor_get(v_impl_1053_, 2);
lean_dec(v_unused_1137_);
v_unused_1138_ = lean_ctor_get(v_impl_1053_, 1);
lean_dec(v_unused_1138_);
v_unused_1139_ = lean_ctor_get(v_impl_1053_, 0);
lean_dec(v_unused_1139_);
v___x_1070_ = v_impl_1053_;
v_isShared_1071_ = v_isSharedCheck_1134_;
goto v_resetjp_1069_;
}
else
{
lean_dec(v_impl_1053_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1134_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v_size_1072_; lean_object* v_size_1073_; lean_object* v_k_1074_; lean_object* v_v_1075_; lean_object* v_l_1076_; lean_object* v_r_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v_size_1072_ = lean_ctor_get(v_l_1059_, 0);
v_size_1073_ = lean_ctor_get(v_r_1060_, 0);
v_k_1074_ = lean_ctor_get(v_r_1060_, 1);
v_v_1075_ = lean_ctor_get(v_r_1060_, 2);
v_l_1076_ = lean_ctor_get(v_r_1060_, 3);
v_r_1077_ = lean_ctor_get(v_r_1060_, 4);
v___x_1078_ = lean_unsigned_to_nat(2u);
v___x_1079_ = lean_nat_mul(v___x_1078_, v_size_1072_);
v___x_1080_ = lean_nat_dec_lt(v_size_1073_, v___x_1079_);
lean_dec(v___x_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1109_; 
lean_inc(v_r_1077_);
lean_inc(v_l_1076_);
lean_inc(v_v_1075_);
lean_inc(v_k_1074_);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_r_1060_);
if (v_isSharedCheck_1109_ == 0)
{
lean_object* v_unused_1110_; lean_object* v_unused_1111_; lean_object* v_unused_1112_; lean_object* v_unused_1113_; lean_object* v_unused_1114_; 
v_unused_1110_ = lean_ctor_get(v_r_1060_, 4);
lean_dec(v_unused_1110_);
v_unused_1111_ = lean_ctor_get(v_r_1060_, 3);
lean_dec(v_unused_1111_);
v_unused_1112_ = lean_ctor_get(v_r_1060_, 2);
lean_dec(v_unused_1112_);
v_unused_1113_ = lean_ctor_get(v_r_1060_, 1);
lean_dec(v_unused_1113_);
v_unused_1114_ = lean_ctor_get(v_r_1060_, 0);
lean_dec(v_unused_1114_);
v___x_1082_ = v_r_1060_;
v_isShared_1083_ = v_isSharedCheck_1109_;
goto v_resetjp_1081_;
}
else
{
lean_dec(v_r_1060_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1109_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___x_1097_; lean_object* v___y_1099_; 
v___x_1084_ = lean_nat_add(v___x_1054_, v_size_1056_);
lean_dec(v_size_1056_);
v___x_1085_ = lean_nat_add(v___x_1084_, v_size_1055_);
lean_dec(v___x_1084_);
v___x_1097_ = lean_nat_add(v___x_1054_, v_size_1072_);
if (lean_obj_tag(v_l_1076_) == 0)
{
lean_object* v_size_1107_; 
v_size_1107_ = lean_ctor_get(v_l_1076_, 0);
lean_inc(v_size_1107_);
v___y_1099_ = v_size_1107_;
goto v___jp_1098_;
}
else
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_unsigned_to_nat(0u);
v___y_1099_ = v___x_1108_;
goto v___jp_1098_;
}
v___jp_1086_:
{
lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1090_ = lean_nat_add(v___y_1087_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec(v___y_1087_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 4, v_r_909_);
lean_ctor_set(v___x_1082_, 3, v_r_1077_);
lean_ctor_set(v___x_1082_, 2, v_v_907_);
lean_ctor_set(v___x_1082_, 1, v_k_906_);
lean_ctor_set(v___x_1082_, 0, v___x_1090_);
v___x_1092_ = v___x_1082_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1096_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1096_, 3, v_r_1077_);
lean_ctor_set(v_reuseFailAlloc_1096_, 4, v_r_909_);
v___x_1092_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1094_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 4, v___x_1092_);
lean_ctor_set(v___x_1070_, 3, v___y_1088_);
lean_ctor_set(v___x_1070_, 2, v_v_1075_);
lean_ctor_set(v___x_1070_, 1, v_k_1074_);
lean_ctor_set(v___x_1070_, 0, v___x_1085_);
v___x_1094_ = v___x_1070_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_k_1074_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v_v_1075_);
lean_ctor_set(v_reuseFailAlloc_1095_, 3, v___y_1088_);
lean_ctor_set(v_reuseFailAlloc_1095_, 4, v___x_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
v___jp_1098_:
{
lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1100_ = lean_nat_add(v___x_1097_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec(v___x_1097_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v_l_1076_);
lean_ctor_set(v___x_911_, 3, v_l_1059_);
lean_ctor_set(v___x_911_, 2, v_v_1058_);
lean_ctor_set(v___x_911_, 1, v_k_1057_);
lean_ctor_set(v___x_911_, 0, v___x_1100_);
v___x_1102_ = v___x_911_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1100_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_k_1057_);
lean_ctor_set(v_reuseFailAlloc_1106_, 2, v_v_1058_);
lean_ctor_set(v_reuseFailAlloc_1106_, 3, v_l_1059_);
lean_ctor_set(v_reuseFailAlloc_1106_, 4, v_l_1076_);
v___x_1102_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_nat_add(v___x_1054_, v_size_1055_);
if (lean_obj_tag(v_r_1077_) == 0)
{
lean_object* v_size_1104_; 
v_size_1104_ = lean_ctor_get(v_r_1077_, 0);
lean_inc(v_size_1104_);
v___y_1087_ = v___x_1103_;
v___y_1088_ = v___x_1102_;
v___y_1089_ = v_size_1104_;
goto v___jp_1086_;
}
else
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_unsigned_to_nat(0u);
v___y_1087_ = v___x_1103_;
v___y_1088_ = v___x_1102_;
v___y_1089_ = v___x_1105_;
goto v___jp_1086_;
}
}
}
}
}
else
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1120_; 
lean_del_object(v___x_911_);
v___x_1115_ = lean_nat_add(v___x_1054_, v_size_1056_);
lean_dec(v_size_1056_);
v___x_1116_ = lean_nat_add(v___x_1115_, v_size_1055_);
lean_dec(v___x_1115_);
v___x_1117_ = lean_nat_add(v___x_1054_, v_size_1055_);
v___x_1118_ = lean_nat_add(v___x_1117_, v_size_1073_);
lean_dec(v___x_1117_);
lean_inc_ref(v_r_909_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 4, v_r_909_);
lean_ctor_set(v___x_1070_, 3, v_r_1060_);
lean_ctor_set(v___x_1070_, 2, v_v_907_);
lean_ctor_set(v___x_1070_, 1, v_k_906_);
lean_ctor_set(v___x_1070_, 0, v___x_1118_);
v___x_1120_ = v___x_1070_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1133_, 3, v_r_1060_);
lean_ctor_set(v_reuseFailAlloc_1133_, 4, v_r_909_);
v___x_1120_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
v_isSharedCheck_1127_ = !lean_is_exclusive(v_r_909_);
if (v_isSharedCheck_1127_ == 0)
{
lean_object* v_unused_1128_; lean_object* v_unused_1129_; lean_object* v_unused_1130_; lean_object* v_unused_1131_; lean_object* v_unused_1132_; 
v_unused_1128_ = lean_ctor_get(v_r_909_, 4);
lean_dec(v_unused_1128_);
v_unused_1129_ = lean_ctor_get(v_r_909_, 3);
lean_dec(v_unused_1129_);
v_unused_1130_ = lean_ctor_get(v_r_909_, 2);
lean_dec(v_unused_1130_);
v_unused_1131_ = lean_ctor_get(v_r_909_, 1);
lean_dec(v_unused_1131_);
v_unused_1132_ = lean_ctor_get(v_r_909_, 0);
lean_dec(v_unused_1132_);
v___x_1122_ = v_r_909_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_dec(v_r_909_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 4, v___x_1120_);
lean_ctor_set(v___x_1122_, 3, v_l_1059_);
lean_ctor_set(v___x_1122_, 2, v_v_1058_);
lean_ctor_set(v___x_1122_, 1, v_k_1057_);
lean_ctor_set(v___x_1122_, 0, v___x_1116_);
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_k_1057_);
lean_ctor_set(v_reuseFailAlloc_1126_, 2, v_v_1058_);
lean_ctor_set(v_reuseFailAlloc_1126_, 3, v_l_1059_);
lean_ctor_set(v_reuseFailAlloc_1126_, 4, v___x_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1140_; 
v_l_1140_ = lean_ctor_get(v_impl_1053_, 3);
lean_inc(v_l_1140_);
if (lean_obj_tag(v_l_1140_) == 0)
{
lean_object* v_r_1141_; lean_object* v_k_1142_; lean_object* v_v_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1154_; 
v_r_1141_ = lean_ctor_get(v_impl_1053_, 4);
v_k_1142_ = lean_ctor_get(v_impl_1053_, 1);
v_v_1143_ = lean_ctor_get(v_impl_1053_, 2);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_impl_1053_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; lean_object* v_unused_1156_; 
v_unused_1155_ = lean_ctor_get(v_impl_1053_, 3);
lean_dec(v_unused_1155_);
v_unused_1156_ = lean_ctor_get(v_impl_1053_, 0);
lean_dec(v_unused_1156_);
v___x_1145_ = v_impl_1053_;
v_isShared_1146_ = v_isSharedCheck_1154_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_r_1141_);
lean_inc(v_v_1143_);
lean_inc(v_k_1142_);
lean_dec(v_impl_1053_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1154_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1147_; lean_object* v___x_1149_; 
v___x_1147_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1141_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 3, v_r_1141_);
lean_ctor_set(v___x_1145_, 2, v_v_907_);
lean_ctor_set(v___x_1145_, 1, v_k_906_);
lean_ctor_set(v___x_1145_, 0, v___x_1054_);
v___x_1149_ = v___x_1145_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_r_1141_);
lean_ctor_set(v_reuseFailAlloc_1153_, 4, v_r_1141_);
v___x_1149_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1151_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v___x_1149_);
lean_ctor_set(v___x_911_, 3, v_l_1140_);
lean_ctor_set(v___x_911_, 2, v_v_1143_);
lean_ctor_set(v___x_911_, 1, v_k_1142_);
lean_ctor_set(v___x_911_, 0, v___x_1147_);
v___x_1151_ = v___x_911_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_k_1142_);
lean_ctor_set(v_reuseFailAlloc_1152_, 2, v_v_1143_);
lean_ctor_set(v_reuseFailAlloc_1152_, 3, v_l_1140_);
lean_ctor_set(v_reuseFailAlloc_1152_, 4, v___x_1149_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
else
{
lean_object* v_r_1157_; 
v_r_1157_ = lean_ctor_get(v_impl_1053_, 4);
lean_inc(v_r_1157_);
if (lean_obj_tag(v_r_1157_) == 0)
{
lean_object* v_k_1158_; lean_object* v_v_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1182_; 
v_k_1158_ = lean_ctor_get(v_impl_1053_, 1);
v_v_1159_ = lean_ctor_get(v_impl_1053_, 2);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_impl_1053_);
if (v_isSharedCheck_1182_ == 0)
{
lean_object* v_unused_1183_; lean_object* v_unused_1184_; lean_object* v_unused_1185_; 
v_unused_1183_ = lean_ctor_get(v_impl_1053_, 4);
lean_dec(v_unused_1183_);
v_unused_1184_ = lean_ctor_get(v_impl_1053_, 3);
lean_dec(v_unused_1184_);
v_unused_1185_ = lean_ctor_get(v_impl_1053_, 0);
lean_dec(v_unused_1185_);
v___x_1161_ = v_impl_1053_;
v_isShared_1162_ = v_isSharedCheck_1182_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_v_1159_);
lean_inc(v_k_1158_);
lean_dec(v_impl_1053_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1182_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v_k_1163_; lean_object* v_v_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1178_; 
v_k_1163_ = lean_ctor_get(v_r_1157_, 1);
v_v_1164_ = lean_ctor_get(v_r_1157_, 2);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_r_1157_);
if (v_isSharedCheck_1178_ == 0)
{
lean_object* v_unused_1179_; lean_object* v_unused_1180_; lean_object* v_unused_1181_; 
v_unused_1179_ = lean_ctor_get(v_r_1157_, 4);
lean_dec(v_unused_1179_);
v_unused_1180_ = lean_ctor_get(v_r_1157_, 3);
lean_dec(v_unused_1180_);
v_unused_1181_ = lean_ctor_get(v_r_1157_, 0);
lean_dec(v_unused_1181_);
v___x_1166_ = v_r_1157_;
v_isShared_1167_ = v_isSharedCheck_1178_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_v_1164_);
lean_inc(v_k_1163_);
lean_dec(v_r_1157_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1178_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1168_ = lean_unsigned_to_nat(3u);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 4, v_l_1140_);
lean_ctor_set(v___x_1166_, 3, v_l_1140_);
lean_ctor_set(v___x_1166_, 2, v_v_1159_);
lean_ctor_set(v___x_1166_, 1, v_k_1158_);
lean_ctor_set(v___x_1166_, 0, v___x_1054_);
v___x_1170_ = v___x_1166_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_k_1158_);
lean_ctor_set(v_reuseFailAlloc_1177_, 2, v_v_1159_);
lean_ctor_set(v_reuseFailAlloc_1177_, 3, v_l_1140_);
lean_ctor_set(v_reuseFailAlloc_1177_, 4, v_l_1140_);
v___x_1170_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1172_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v_l_1140_);
lean_ctor_set(v___x_1161_, 2, v_v_907_);
lean_ctor_set(v___x_1161_, 1, v_k_906_);
lean_ctor_set(v___x_1161_, 0, v___x_1054_);
v___x_1172_ = v___x_1161_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1176_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1176_, 3, v_l_1140_);
lean_ctor_set(v_reuseFailAlloc_1176_, 4, v_l_1140_);
v___x_1172_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1174_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v___x_1172_);
lean_ctor_set(v___x_911_, 3, v___x_1170_);
lean_ctor_set(v___x_911_, 2, v_v_1164_);
lean_ctor_set(v___x_911_, 1, v_k_1163_);
lean_ctor_set(v___x_911_, 0, v___x_1168_);
v___x_1174_ = v___x_911_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_k_1163_);
lean_ctor_set(v_reuseFailAlloc_1175_, 2, v_v_1164_);
lean_ctor_set(v_reuseFailAlloc_1175_, 3, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1175_, 4, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1186_ = lean_unsigned_to_nat(2u);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 4, v_r_1157_);
lean_ctor_set(v___x_911_, 3, v_impl_1053_);
lean_ctor_set(v___x_911_, 0, v___x_1186_);
v___x_1188_ = v___x_911_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_1189_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_1189_, 3, v_impl_1053_);
lean_ctor_set(v_reuseFailAlloc_1189_, 4, v_r_1157_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_unsigned_to_nat(1u);
v___x_1192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v_k_902_);
lean_ctor_set(v___x_1192_, 2, v_v_903_);
lean_ctor_set(v___x_1192_, 3, v_t_904_);
lean_ctor_set(v___x_1192_, 4, v_t_904_);
return v___x_1192_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(lean_object* v_as_x27_1193_, lean_object* v_b_1194_){
_start:
{
if (lean_obj_tag(v_as_x27_1193_) == 0)
{
return v_b_1194_;
}
else
{
lean_object* v_head_1195_; lean_object* v_tail_1196_; lean_object* v_fst_1197_; lean_object* v_snd_1198_; lean_object* v_r_1199_; 
v_head_1195_ = lean_ctor_get(v_as_x27_1193_, 0);
v_tail_1196_ = lean_ctor_get(v_as_x27_1193_, 1);
v_fst_1197_ = lean_ctor_get(v_head_1195_, 0);
v_snd_1198_ = lean_ctor_get(v_head_1195_, 1);
lean_inc(v_snd_1198_);
lean_inc(v_fst_1197_);
v_r_1199_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_fst_1197_, v_snd_1198_, v_b_1194_);
v_as_x27_1193_ = v_tail_1196_;
v_b_1194_ = v_r_1199_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg___boxed(lean_object* v_as_x27_1201_, lean_object* v_b_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v_as_x27_1201_, v_b_1202_);
lean_dec(v_as_x27_1201_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover(lean_object* v_fmt_1212_, lean_object* v_expr_1213_, lean_object* v_lctx_1214_, lean_object* v_location_x3f_1215_, lean_object* v_docString_x3f_1216_, lean_object* v_mkDocString_x3f_1217_, uint8_t v_explicit_1218_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v___x_1224_; lean_object* v___y_1226_; 
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
lean_ctor_set(v___x_1220_, 1, v_fmt_1212_);
v___x_1221_ = ((lean_object*)(l_Lean_MessageData_withExprHover___closed__3));
v___x_1222_ = lean_box(0);
v___x_1223_ = 0;
v___x_1224_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1224_, 0, v___x_1221_);
lean_ctor_set(v___x_1224_, 1, v_lctx_1214_);
lean_ctor_set(v___x_1224_, 2, v___x_1222_);
lean_ctor_set(v___x_1224_, 3, v_expr_1213_);
lean_ctor_set_uint8(v___x_1224_, sizeof(void*)*4, v___x_1223_);
lean_ctor_set_uint8(v___x_1224_, sizeof(void*)*4 + 1, v___x_1223_);
if (lean_obj_tag(v_mkDocString_x3f_1217_) == 0)
{
if (lean_obj_tag(v_docString_x3f_1216_) == 0)
{
v___y_1226_ = v_mkDocString_x3f_1217_;
goto v___jp_1225_;
}
else
{
lean_object* v_val_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1244_; 
v_val_1236_ = lean_ctor_get(v_docString_x3f_1216_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_docString_x3f_1216_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1238_ = v_docString_x3f_1216_;
v_isShared_1239_ = v_isSharedCheck_1244_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_val_1236_);
lean_dec(v_docString_x3f_1216_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1244_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___f_1240_; lean_object* v___x_1242_; 
v___f_1240_ = lean_alloc_closure((void*)(l_Lean_MessageData_withExprHover___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1240_, 0, v_val_1236_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___f_1240_);
v___x_1242_ = v___x_1238_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___f_1240_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
v___y_1226_ = v___x_1242_;
goto v___jp_1225_;
}
}
}
}
else
{
lean_dec(v_docString_x3f_1216_);
v___y_1226_ = v_mkDocString_x3f_1217_;
goto v___jp_1225_;
}
v___jp_1225_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v_r_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1227_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1227_, 0, v___x_1224_);
lean_ctor_set(v___x_1227_, 1, v_location_x3f_1215_);
lean_ctor_set(v___x_1227_, 2, v___y_1226_);
lean_ctor_set_uint8(v___x_1227_, sizeof(void*)*3, v_explicit_1218_);
v___x_1228_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1219_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v_r_1232_ = lean_box(1);
v___x_1233_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v___x_1231_, v_r_1232_);
lean_dec_ref_known(v___x_1231_, 2);
v___x_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1220_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___boxed(lean_object* v_fmt_1245_, lean_object* v_expr_1246_, lean_object* v_lctx_1247_, lean_object* v_location_x3f_1248_, lean_object* v_docString_x3f_1249_, lean_object* v_mkDocString_x3f_1250_, lean_object* v_explicit_1251_){
_start:
{
uint8_t v_explicit_boxed_1252_; lean_object* v_res_1253_; 
v_explicit_boxed_1252_ = lean_unbox(v_explicit_1251_);
v_res_1253_ = l_Lean_MessageData_withExprHover(v_fmt_1245_, v_expr_1246_, v_lctx_1247_, v_location_x3f_1248_, v_docString_x3f_1249_, v_mkDocString_x3f_1250_, v_explicit_boxed_1252_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0(lean_object* v_00_u03b2_1254_, lean_object* v_k_1255_, lean_object* v_v_1256_, lean_object* v_t_1257_, lean_object* v_hl_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_1255_, v_v_1256_, v_t_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(lean_object* v_as_1260_, lean_object* v_as_x27_1261_, lean_object* v_b_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v_as_x27_1261_, v_b_1262_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___boxed(lean_object* v_as_1265_, lean_object* v_as_x27_1266_, lean_object* v_b_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(v_as_1265_, v_as_x27_1266_, v_b_1267_, v_a_1268_);
lean_dec(v_as_x27_1266_);
lean_dec(v_as_1265_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0(lean_object* v_fmt_1270_, lean_object* v_expr_1271_, lean_object* v_location_x3f_1272_, lean_object* v_docString_x3f_1273_, lean_object* v_mkDocString_x3f_1274_, uint8_t v_explicit_1275_, lean_object* v_toPure_1276_, lean_object* v_lctx_1277_){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = l_Lean_MessageData_withExprHover(v_fmt_1270_, v_expr_1271_, v_lctx_1277_, v_location_x3f_1272_, v_docString_x3f_1273_, v_mkDocString_x3f_1274_, v_explicit_1275_);
v___x_1279_ = lean_apply_2(v_toPure_1276_, lean_box(0), v___x_1278_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed(lean_object* v_fmt_1280_, lean_object* v_expr_1281_, lean_object* v_location_x3f_1282_, lean_object* v_docString_x3f_1283_, lean_object* v_mkDocString_x3f_1284_, lean_object* v_explicit_1285_, lean_object* v_toPure_1286_, lean_object* v_lctx_1287_){
_start:
{
uint8_t v_explicit_boxed_1288_; lean_object* v_res_1289_; 
v_explicit_boxed_1288_ = lean_unbox(v_explicit_1285_);
v_res_1289_ = l_Lean_MessageData_withExprHoverM___redArg___lam__0(v_fmt_1280_, v_expr_1281_, v_location_x3f_1282_, v_docString_x3f_1283_, v_mkDocString_x3f_1284_, v_explicit_boxed_1288_, v_toPure_1286_, v_lctx_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg(lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_fmt_1292_, lean_object* v_expr_1293_, lean_object* v_lctx_x3f_1294_, lean_object* v_location_x3f_1295_, lean_object* v_docString_x3f_1296_, lean_object* v_mkDocString_x3f_1297_, uint8_t v_explicit_1298_){
_start:
{
lean_object* v_toApplicative_1299_; lean_object* v_toBind_1300_; lean_object* v_toPure_1301_; lean_object* v___x_1302_; lean_object* v___f_1303_; 
v_toApplicative_1299_ = lean_ctor_get(v_inst_1290_, 0);
lean_inc_ref(v_toApplicative_1299_);
v_toBind_1300_ = lean_ctor_get(v_inst_1290_, 1);
lean_inc(v_toBind_1300_);
lean_dec_ref(v_inst_1290_);
v_toPure_1301_ = lean_ctor_get(v_toApplicative_1299_, 1);
lean_inc_n(v_toPure_1301_, 2);
lean_dec_ref(v_toApplicative_1299_);
v___x_1302_ = lean_box(v_explicit_1298_);
v___f_1303_ = lean_alloc_closure((void*)(l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1303_, 0, v_fmt_1292_);
lean_closure_set(v___f_1303_, 1, v_expr_1293_);
lean_closure_set(v___f_1303_, 2, v_location_x3f_1295_);
lean_closure_set(v___f_1303_, 3, v_docString_x3f_1296_);
lean_closure_set(v___f_1303_, 4, v_mkDocString_x3f_1297_);
lean_closure_set(v___f_1303_, 5, v___x_1302_);
lean_closure_set(v___f_1303_, 6, v_toPure_1301_);
if (lean_obj_tag(v_lctx_x3f_1294_) == 0)
{
lean_object* v___x_1304_; 
lean_dec(v_toPure_1301_);
v___x_1304_ = lean_apply_4(v_toBind_1300_, lean_box(0), lean_box(0), v_inst_1291_, v___f_1303_);
return v___x_1304_;
}
else
{
lean_object* v_val_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec(v_inst_1291_);
v_val_1305_ = lean_ctor_get(v_lctx_x3f_1294_, 0);
lean_inc(v_val_1305_);
lean_dec_ref_known(v_lctx_x3f_1294_, 1);
v___x_1306_ = lean_apply_2(v_toPure_1301_, lean_box(0), v_val_1305_);
v___x_1307_ = lean_apply_4(v_toBind_1300_, lean_box(0), lean_box(0), v___x_1306_, v___f_1303_);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___boxed(lean_object* v_inst_1308_, lean_object* v_inst_1309_, lean_object* v_fmt_1310_, lean_object* v_expr_1311_, lean_object* v_lctx_x3f_1312_, lean_object* v_location_x3f_1313_, lean_object* v_docString_x3f_1314_, lean_object* v_mkDocString_x3f_1315_, lean_object* v_explicit_1316_){
_start:
{
uint8_t v_explicit_boxed_1317_; lean_object* v_res_1318_; 
v_explicit_boxed_1317_ = lean_unbox(v_explicit_1316_);
v_res_1318_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1308_, v_inst_1309_, v_fmt_1310_, v_expr_1311_, v_lctx_x3f_1312_, v_location_x3f_1313_, v_docString_x3f_1314_, v_mkDocString_x3f_1315_, v_explicit_boxed_1317_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM(lean_object* v_m_1319_, lean_object* v_inst_1320_, lean_object* v_inst_1321_, lean_object* v_fmt_1322_, lean_object* v_expr_1323_, lean_object* v_lctx_x3f_1324_, lean_object* v_location_x3f_1325_, lean_object* v_docString_x3f_1326_, lean_object* v_mkDocString_x3f_1327_, uint8_t v_explicit_1328_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1320_, v_inst_1321_, v_fmt_1322_, v_expr_1323_, v_lctx_x3f_1324_, v_location_x3f_1325_, v_docString_x3f_1326_, v_mkDocString_x3f_1327_, v_explicit_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___boxed(lean_object* v_m_1330_, lean_object* v_inst_1331_, lean_object* v_inst_1332_, lean_object* v_fmt_1333_, lean_object* v_expr_1334_, lean_object* v_lctx_x3f_1335_, lean_object* v_location_x3f_1336_, lean_object* v_docString_x3f_1337_, lean_object* v_mkDocString_x3f_1338_, lean_object* v_explicit_1339_){
_start:
{
uint8_t v_explicit_boxed_1340_; lean_object* v_res_1341_; 
v_explicit_boxed_1340_ = lean_unbox(v_explicit_1339_);
v_res_1341_ = l_Lean_MessageData_withExprHoverM(v_m_1330_, v_inst_1331_, v_inst_1332_, v_fmt_1333_, v_expr_1334_, v_lctx_x3f_1335_, v_location_x3f_1336_, v_docString_x3f_1337_, v_mkDocString_x3f_1338_, v_explicit_boxed_1340_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0(lean_object* v_userName_1342_, lean_object* v_display_1343_, lean_object* v_toPure_1344_, lean_object* v_inst_1345_, lean_object* v_inst_1346_, lean_object* v_____do__lift_1347_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l_Lean_LocalContext_findFromUserName_x3f(v_____do__lift_1347_, v_userName_1342_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_dec(v_inst_1346_);
lean_dec_ref(v_inst_1345_);
v___x_1349_ = l_Lean_MessageData_ofName(v_display_1343_);
v___x_1350_ = lean_apply_2(v_toPure_1344_, lean_box(0), v___x_1349_);
return v___x_1350_;
}
else
{
lean_object* v_val_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1365_; 
lean_dec(v_toPure_1344_);
v_val_1351_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1353_ = v___x_1348_;
v_isShared_1354_ = v_isSharedCheck_1365_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_val_1351_);
lean_dec(v___x_1348_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1365_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
uint8_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1355_ = 1;
v___x_1356_ = l_Lean_Name_toString(v_display_1343_, v___x_1355_);
if (v_isShared_1354_ == 0)
{
lean_ctor_set_tag(v___x_1353_, 3);
lean_ctor_set(v___x_1353_, 0, v___x_1356_);
v___x_1358_ = v___x_1353_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; uint8_t v___x_1362_; lean_object* v___x_1363_; 
v___x_1359_ = l_Lean_LocalDecl_fvarId(v_val_1351_);
lean_dec(v_val_1351_);
v___x_1360_ = l_Lean_Expr_fvar___override(v___x_1359_);
v___x_1361_ = lean_box(0);
v___x_1362_ = 0;
v___x_1363_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1345_, v_inst_1346_, v___x_1358_, v___x_1360_, v___x_1361_, v___x_1361_, v___x_1361_, v___x_1361_, v___x_1362_);
return v___x_1363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0___boxed(lean_object* v_userName_1366_, lean_object* v_display_1367_, lean_object* v_toPure_1368_, lean_object* v_inst_1369_, lean_object* v_inst_1370_, lean_object* v_____do__lift_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_MessageData_ofUserName___redArg___lam__0(v_userName_1366_, v_display_1367_, v_toPure_1368_, v_inst_1369_, v_inst_1370_, v_____do__lift_1371_);
lean_dec_ref(v_____do__lift_1371_);
lean_dec(v_userName_1366_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg(lean_object* v_inst_1373_, lean_object* v_inst_1374_, lean_object* v_userName_1375_){
_start:
{
lean_object* v_toApplicative_1376_; lean_object* v_toBind_1377_; lean_object* v_toPure_1378_; lean_object* v_display_1379_; lean_object* v___f_1380_; lean_object* v___x_1381_; 
v_toApplicative_1376_ = lean_ctor_get(v_inst_1373_, 0);
v_toBind_1377_ = lean_ctor_get(v_inst_1373_, 1);
lean_inc(v_toBind_1377_);
v_toPure_1378_ = lean_ctor_get(v_toApplicative_1376_, 1);
lean_inc(v_toPure_1378_);
lean_inc(v_userName_1375_);
v_display_1379_ = l_Lean_Name_simpMacroScopes(v_userName_1375_);
lean_inc(v_inst_1374_);
v___f_1380_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofUserName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1380_, 0, v_userName_1375_);
lean_closure_set(v___f_1380_, 1, v_display_1379_);
lean_closure_set(v___f_1380_, 2, v_toPure_1378_);
lean_closure_set(v___f_1380_, 3, v_inst_1373_);
lean_closure_set(v___f_1380_, 4, v_inst_1374_);
v___x_1381_ = lean_apply_4(v_toBind_1377_, lean_box(0), lean_box(0), v_inst_1374_, v___f_1380_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName(lean_object* v_m_1382_, lean_object* v_inst_1383_, lean_object* v_inst_1384_, lean_object* v_userName_1385_){
_start:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Lean_MessageData_ofUserName___redArg(v_inst_1383_, v_inst_1384_, v_userName_1385_);
return v___x_1386_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0(void){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1387_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1390_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1);
v___x_1391_ = lean_unsigned_to_nat(0u);
v___x_1392_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
lean_ctor_set(v___x_1392_, 2, v___x_1391_);
lean_ctor_set(v___x_1392_, 3, v___x_1391_);
lean_ctor_set(v___x_1392_, 4, v___x_1390_);
lean_ctor_set(v___x_1392_, 5, v___x_1390_);
lean_ctor_set(v___x_1392_, 6, v___x_1390_);
lean_ctor_set(v___x_1392_, 7, v___x_1390_);
lean_ctor_set(v___x_1392_, 8, v___x_1390_);
lean_ctor_set(v___x_1392_, 9, v___x_1390_);
lean_ctor_set(v___x_1392_, 10, v___x_1390_);
return v___x_1392_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(lean_object* v_mctx_x3f_1393_, lean_object* v_a_1394_){
_start:
{
switch(lean_obj_tag(v_a_1394_))
{
case 10:
{
if (lean_obj_tag(v_mctx_x3f_1393_) == 0)
{
lean_object* v_hasSyntheticSorry_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; 
v_hasSyntheticSorry_1395_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_hasSyntheticSorry_1395_);
lean_dec_ref_known(v_a_1394_, 2);
v___x_1396_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_1397_ = lean_apply_1(v_hasSyntheticSorry_1395_, v___x_1396_);
v___x_1398_ = lean_unbox(v___x_1397_);
return v___x_1398_;
}
else
{
lean_object* v_hasSyntheticSorry_1399_; lean_object* v_val_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v_hasSyntheticSorry_1399_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_hasSyntheticSorry_1399_);
lean_dec_ref_known(v_a_1394_, 2);
v_val_1400_ = lean_ctor_get(v_mctx_x3f_1393_, 0);
lean_inc(v_val_1400_);
lean_dec_ref_known(v_mctx_x3f_1393_, 1);
v___x_1401_ = lean_apply_1(v_hasSyntheticSorry_1399_, v_val_1400_);
v___x_1402_ = lean_unbox(v___x_1401_);
return v___x_1402_;
}
}
case 3:
{
lean_object* v_a_1403_; lean_object* v_a_1404_; lean_object* v_mctx_1405_; lean_object* v___x_1406_; 
lean_dec(v_mctx_x3f_1393_);
v_a_1403_ = lean_ctor_get(v_a_1394_, 0);
lean_inc_ref(v_a_1403_);
v_a_1404_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_a_1404_);
lean_dec_ref_known(v_a_1394_, 2);
v_mctx_1405_ = lean_ctor_get(v_a_1403_, 1);
lean_inc_ref(v_mctx_1405_);
lean_dec_ref(v_a_1403_);
v___x_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1406_, 0, v_mctx_1405_);
v_mctx_x3f_1393_ = v___x_1406_;
v_a_1394_ = v_a_1404_;
goto _start;
}
case 4:
{
lean_object* v_a_1408_; 
v_a_1408_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_a_1408_);
lean_dec_ref_known(v_a_1394_, 2);
v_a_1394_ = v_a_1408_;
goto _start;
}
case 5:
{
lean_object* v_a_1410_; 
v_a_1410_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_a_1410_);
lean_dec_ref_known(v_a_1394_, 2);
v_a_1394_ = v_a_1410_;
goto _start;
}
case 6:
{
lean_object* v_a_1412_; 
v_a_1412_ = lean_ctor_get(v_a_1394_, 0);
lean_inc_ref(v_a_1412_);
lean_dec_ref_known(v_a_1394_, 1);
v_a_1394_ = v_a_1412_;
goto _start;
}
case 7:
{
lean_object* v_a_1414_; lean_object* v_a_1415_; uint8_t v___x_1416_; 
v_a_1414_ = lean_ctor_get(v_a_1394_, 0);
lean_inc_ref(v_a_1414_);
v_a_1415_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_a_1415_);
lean_dec_ref_known(v_a_1394_, 2);
lean_inc(v_mctx_x3f_1393_);
v___x_1416_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1393_, v_a_1414_);
if (v___x_1416_ == 0)
{
v_a_1394_ = v_a_1415_;
goto _start;
}
else
{
lean_dec_ref(v_a_1415_);
lean_dec(v_mctx_x3f_1393_);
return v___x_1416_;
}
}
case 8:
{
lean_object* v_a_1418_; 
v_a_1418_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_a_1418_);
lean_dec_ref_known(v_a_1394_, 2);
v_a_1394_ = v_a_1418_;
goto _start;
}
case 11:
{
lean_object* v_a_1420_; 
v_a_1420_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_a_1420_);
lean_dec_ref_known(v_a_1394_, 2);
v_a_1394_ = v_a_1420_;
goto _start;
}
case 9:
{
lean_object* v_msg_1422_; lean_object* v_children_1423_; uint8_t v___x_1424_; 
v_msg_1422_ = lean_ctor_get(v_a_1394_, 1);
lean_inc_ref(v_msg_1422_);
v_children_1423_ = lean_ctor_get(v_a_1394_, 2);
lean_inc_ref(v_children_1423_);
lean_dec_ref_known(v_a_1394_, 3);
lean_inc(v_mctx_x3f_1393_);
v___x_1424_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1393_, v_msg_1422_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = lean_array_get_size(v_children_1423_);
v___x_1427_ = lean_nat_dec_lt(v___x_1425_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_dec_ref(v_children_1423_);
lean_dec(v_mctx_x3f_1393_);
return v___x_1427_;
}
else
{
if (v___x_1427_ == 0)
{
lean_dec_ref(v_children_1423_);
lean_dec(v_mctx_x3f_1393_);
return v___x_1427_;
}
else
{
size_t v___x_1428_; size_t v___x_1429_; uint8_t v___x_1430_; 
v___x_1428_ = ((size_t)0ULL);
v___x_1429_ = lean_usize_of_nat(v___x_1426_);
v___x_1430_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(v_mctx_x3f_1393_, v_children_1423_, v___x_1428_, v___x_1429_);
lean_dec_ref(v_children_1423_);
return v___x_1430_;
}
}
}
else
{
lean_dec_ref(v_children_1423_);
lean_dec(v_mctx_x3f_1393_);
return v___x_1424_;
}
}
default: 
{
uint8_t v___x_1431_; 
lean_dec_ref(v_a_1394_);
lean_dec(v_mctx_x3f_1393_);
v___x_1431_ = 0;
return v___x_1431_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(lean_object* v_mctx_x3f_1432_, lean_object* v_as_1433_, size_t v_i_1434_, size_t v_stop_1435_){
_start:
{
uint8_t v___x_1436_; 
v___x_1436_ = lean_usize_dec_eq(v_i_1434_, v_stop_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; uint8_t v___x_1438_; 
v___x_1437_ = lean_array_uget_borrowed(v_as_1433_, v_i_1434_);
lean_inc(v___x_1437_);
lean_inc(v_mctx_x3f_1432_);
v___x_1438_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1432_, v___x_1437_);
if (v___x_1438_ == 0)
{
size_t v___x_1439_; size_t v___x_1440_; 
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_add(v_i_1434_, v___x_1439_);
v_i_1434_ = v___x_1440_;
goto _start;
}
else
{
lean_dec(v_mctx_x3f_1432_);
return v___x_1438_;
}
}
else
{
uint8_t v___x_1442_; 
lean_dec(v_mctx_x3f_1432_);
v___x_1442_ = 0;
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0___boxed(lean_object* v_mctx_x3f_1443_, lean_object* v_as_1444_, lean_object* v_i_1445_, lean_object* v_stop_1446_){
_start:
{
size_t v_i_boxed_1447_; size_t v_stop_boxed_1448_; uint8_t v_res_1449_; lean_object* v_r_1450_; 
v_i_boxed_1447_ = lean_unbox_usize(v_i_1445_);
lean_dec(v_i_1445_);
v_stop_boxed_1448_ = lean_unbox_usize(v_stop_1446_);
lean_dec(v_stop_1446_);
v_res_1449_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(v_mctx_x3f_1443_, v_as_1444_, v_i_boxed_1447_, v_stop_boxed_1448_);
lean_dec_ref(v_as_1444_);
v_r_1450_ = lean_box(v_res_1449_);
return v_r_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___boxed(lean_object* v_mctx_x3f_1451_, lean_object* v_a_1452_){
_start:
{
uint8_t v_res_1453_; lean_object* v_r_1454_; 
v_res_1453_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1451_, v_a_1452_);
v_r_1454_ = lean_box(v_res_1453_);
return v_r_1454_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object* v_msg_1455_){
_start:
{
lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = lean_box(0);
v___x_1457_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v___x_1456_, v_msg_1455_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hasSyntheticSorry___boxed(lean_object* v_msg_1458_){
_start:
{
uint8_t v_res_1459_; lean_object* v_r_1460_; 
v_res_1459_ = l_Lean_MessageData_hasSyntheticSorry(v_msg_1458_);
v_r_1460_ = lean_box(v_res_1459_);
return v_r_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(lean_object* v_name_1461_, lean_object* v_decl_1462_, lean_object* v_ref_1463_){
_start:
{
lean_object* v_defValue_1465_; lean_object* v_descr_1466_; lean_object* v_deprecation_x3f_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_defValue_1465_ = lean_ctor_get(v_decl_1462_, 0);
v_descr_1466_ = lean_ctor_get(v_decl_1462_, 1);
v_deprecation_x3f_1467_ = lean_ctor_get(v_decl_1462_, 2);
lean_inc(v_defValue_1465_);
v___x_1468_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1468_, 0, v_defValue_1465_);
lean_inc(v_deprecation_x3f_1467_);
lean_inc_ref(v_descr_1466_);
lean_inc_n(v_name_1461_, 2);
v___x_1469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1469_, 0, v_name_1461_);
lean_ctor_set(v___x_1469_, 1, v_ref_1463_);
lean_ctor_set(v___x_1469_, 2, v___x_1468_);
lean_ctor_set(v___x_1469_, 3, v_descr_1466_);
lean_ctor_set(v___x_1469_, 4, v_deprecation_x3f_1467_);
v___x_1470_ = lean_register_option(v_name_1461_, v___x_1469_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1478_; 
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1478_ == 0)
{
lean_object* v_unused_1479_; 
v_unused_1479_ = lean_ctor_get(v___x_1470_, 0);
lean_dec(v_unused_1479_);
v___x_1472_ = v___x_1470_;
v_isShared_1473_ = v_isSharedCheck_1478_;
goto v_resetjp_1471_;
}
else
{
lean_dec(v___x_1470_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1478_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
lean_inc(v_defValue_1465_);
v___x_1474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1474_, 0, v_name_1461_);
lean_ctor_set(v___x_1474_, 1, v_defValue_1465_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v___x_1474_);
v___x_1476_ = v___x_1472_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1474_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec(v_name_1461_);
v_a_1480_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1470_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1470_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1488_, lean_object* v_decl_1489_, lean_object* v_ref_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(v_name_1488_, v_decl_1489_, v_ref_1490_);
lean_dec_ref(v_decl_1489_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1506_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_));
v___x_1507_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_));
v___x_1508_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_));
v___x_1509_ = l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4__spec__0(v___x_1506_, v___x_1507_, v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4____boxed(lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_();
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_MessageData_formatAux_spec__0(lean_object* v_a_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_nat_to_int(v_a_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3(lean_object* v_msg_1520_){
_start:
{
lean_object* v___f_1522_; lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___f_1525_; lean_object* v___f_1526_; lean_object* v___f_1527_; lean_object* v___f_1528_; lean_object* v___f_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_2741__overap_1535_; lean_object* v___x_1536_; 
v___f_1522_ = ((lean_object*)(l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0));
v___f_1523_ = ((lean_object*)(l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__1));
v___f_1524_ = ((lean_object*)(l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__2));
v___f_1525_ = ((lean_object*)(l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__3));
v___f_1526_ = ((lean_object*)(l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__4));
v___f_1527_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1527_, 0, v___f_1526_);
lean_closure_set(v___f_1527_, 1, v___f_1525_);
v___f_1528_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1528_, 0, v___f_1525_);
v___f_1529_ = ((lean_object*)(l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__5));
v___x_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___f_1522_);
lean_ctor_set(v___x_1530_, 1, v___f_1523_);
v___x_1531_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v___f_1524_);
lean_ctor_set(v___x_1531_, 2, v___f_1527_);
lean_ctor_set(v___x_1531_, 3, v___f_1528_);
lean_ctor_set(v___x_1531_, 4, v___f_1529_);
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
lean_ctor_set(v___x_1532_, 1, v___f_1525_);
v___x_1533_ = lean_box(0);
v___x_1534_ = l_instInhabitedOfMonad___redArg(v___x_1532_, v___x_1533_);
v___x_2741__overap_1535_ = lean_panic_fn_borrowed(v___x_1534_, v_msg_1520_);
lean_dec(v___x_1534_);
v___x_1536_ = lean_apply_1(v___x_2741__overap_1535_, lean_box(0));
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___boxed(lean_object* v_msg_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_panic___at___00Lean_MessageData_formatAux_spec__3(v_msg_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(lean_object* v_x_1540_, lean_object* v_x_1541_, lean_object* v_x_1542_){
_start:
{
if (lean_obj_tag(v_x_1542_) == 0)
{
lean_dec(v_x_1540_);
return v_x_1541_;
}
else
{
lean_object* v_head_1543_; lean_object* v_tail_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1553_; 
v_head_1543_ = lean_ctor_get(v_x_1542_, 0);
v_tail_1544_ = lean_ctor_get(v_x_1542_, 1);
v_isSharedCheck_1553_ = !lean_is_exclusive(v_x_1542_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1546_ = v_x_1542_;
v_isShared_1547_ = v_isSharedCheck_1553_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_tail_1544_);
lean_inc(v_head_1543_);
lean_dec(v_x_1542_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1553_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
lean_inc(v_x_1540_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set_tag(v___x_1546_, 5);
lean_ctor_set(v___x_1546_, 1, v_x_1540_);
lean_ctor_set(v___x_1546_, 0, v_x_1541_);
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_x_1541_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_x_1540_);
v___x_1549_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
lean_ctor_set(v___x_1550_, 1, v_head_1543_);
v_x_1541_ = v___x_1550_;
v_x_1542_ = v_tail_1544_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(lean_object* v_x_1554_, lean_object* v_x_1555_){
_start:
{
if (lean_obj_tag(v_x_1554_) == 0)
{
lean_object* v___x_1556_; 
lean_dec(v_x_1555_);
v___x_1556_ = lean_box(0);
return v___x_1556_;
}
else
{
lean_object* v_tail_1557_; 
v_tail_1557_ = lean_ctor_get(v_x_1554_, 1);
if (lean_obj_tag(v_tail_1557_) == 0)
{
lean_object* v_head_1558_; 
lean_dec(v_x_1555_);
v_head_1558_ = lean_ctor_get(v_x_1554_, 0);
lean_inc(v_head_1558_);
lean_dec_ref_known(v_x_1554_, 2);
return v_head_1558_;
}
else
{
lean_object* v_head_1559_; lean_object* v___x_1560_; 
lean_inc(v_tail_1557_);
v_head_1559_ = lean_ctor_get(v_x_1554_, 0);
lean_inc(v_head_1559_);
lean_dec_ref_known(v_x_1554_, 2);
v___x_1560_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(v_x_1555_, v_head_1559_, v_tail_1557_);
return v___x_1560_;
}
}
}
}
static double _init_l_Lean_MessageData_formatAux___closed__9(void){
_start:
{
lean_object* v___x_1575_; double v___x_1576_; 
v___x_1575_ = lean_unsigned_to_nat(0u);
v___x_1576_ = lean_float_of_nat(v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux(lean_object* v_x_1580_, lean_object* v_x_1581_, lean_object* v_x_1582_){
_start:
{
switch(lean_obj_tag(v_x_1582_))
{
case 0:
{
lean_object* v_a_1584_; lean_object* v_fmt_1585_; 
lean_dec(v_x_1581_);
lean_dec_ref(v_x_1580_);
v_a_1584_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1584_);
lean_dec_ref_known(v_x_1582_, 1);
v_fmt_1585_ = lean_ctor_get(v_a_1584_, 0);
lean_inc(v_fmt_1585_);
lean_dec_ref(v_a_1584_);
return v_fmt_1585_;
}
case 1:
{
if (lean_obj_tag(v_x_1581_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; 
lean_dec_ref(v_x_1580_);
v_a_1586_ = lean_ctor_get(v_x_1582_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v_x_1582_, 1);
v___x_1587_ = l_Lean_formatRawGoal(v_a_1586_);
return v___x_1587_;
}
else
{
lean_object* v_a_1588_; lean_object* v_val_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v_a_1588_ = lean_ctor_get(v_x_1582_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v_x_1582_, 1);
v_val_1589_ = lean_ctor_get(v_x_1581_, 0);
lean_inc(v_val_1589_);
lean_dec_ref_known(v_x_1581_, 1);
v___x_1590_ = l_Lean_MessageData_mkPPContext(v_x_1580_, v_val_1589_);
lean_dec(v_val_1589_);
lean_dec_ref(v_x_1580_);
v___x_1591_ = l_Lean_ppGoal(v___x_1590_, v_a_1588_);
return v___x_1591_;
}
}
case 3:
{
lean_object* v_a_1592_; lean_object* v_a_1593_; lean_object* v___x_1594_; 
lean_dec(v_x_1581_);
v_a_1592_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1592_);
v_a_1593_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_a_1593_);
lean_dec_ref_known(v_x_1582_, 2);
v___x_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1594_, 0, v_a_1592_);
v_x_1581_ = v___x_1594_;
v_x_1582_ = v_a_1593_;
goto _start;
}
case 4:
{
lean_object* v_a_1596_; lean_object* v_a_1597_; 
lean_dec_ref(v_x_1580_);
v_a_1596_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1596_);
v_a_1597_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_a_1597_);
lean_dec_ref_known(v_x_1582_, 2);
v_x_1580_ = v_a_1596_;
v_x_1582_ = v_a_1597_;
goto _start;
}
case 5:
{
lean_object* v_a_1599_; lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1609_; 
v_a_1599_ = lean_ctor_get(v_x_1582_, 0);
v_a_1600_ = lean_ctor_get(v_x_1582_, 1);
v_isSharedCheck_1609_ = !lean_is_exclusive(v_x_1582_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1602_ = v_x_1582_;
v_isShared_1603_ = v_isSharedCheck_1609_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_inc(v_a_1599_);
lean_dec(v_x_1582_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1609_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1604_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1600_);
v___x_1605_ = lean_nat_to_int(v_a_1599_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set_tag(v___x_1602_, 4);
lean_ctor_set(v___x_1602_, 1, v___x_1604_);
lean_ctor_set(v___x_1602_, 0, v___x_1605_);
v___x_1607_ = v___x_1602_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v___x_1604_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
case 6:
{
lean_object* v_a_1610_; lean_object* v___x_1611_; uint8_t v___x_1612_; lean_object* v___x_1613_; 
v_a_1610_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_a_1610_);
lean_dec_ref_known(v_x_1582_, 1);
v___x_1611_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1610_);
v___x_1612_ = 0;
v___x_1613_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1613_, 0, v___x_1611_);
lean_ctor_set_uint8(v___x_1613_, sizeof(void*)*1, v___x_1612_);
return v___x_1613_;
}
case 7:
{
lean_object* v_a_1614_; lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1624_; 
v_a_1614_ = lean_ctor_get(v_x_1582_, 0);
v_a_1615_ = lean_ctor_get(v_x_1582_, 1);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_x_1582_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1617_ = v_x_1582_;
v_isShared_1618_ = v_isSharedCheck_1624_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_inc(v_a_1614_);
lean_dec(v_x_1582_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1624_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
lean_inc(v_x_1581_);
lean_inc_ref(v_x_1580_);
v___x_1619_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1614_);
v___x_1620_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_a_1615_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set_tag(v___x_1617_, 5);
lean_ctor_set(v___x_1617_, 1, v___x_1620_);
lean_ctor_set(v___x_1617_, 0, v___x_1619_);
v___x_1622_ = v___x_1617_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1619_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
case 9:
{
lean_object* v_data_1625_; lean_object* v_msg_1626_; lean_object* v_children_1627_; size_t v_sz_1628_; size_t v___x_1629_; lean_object* v___x_1630_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v_cls_1644_; lean_object* v_result_x3f_1645_; double v_startTime_1646_; double v_stopTime_1647_; lean_object* v_msg_1649_; uint8_t v___x_1664_; 
v_data_1625_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_data_1625_);
v_msg_1626_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_msg_1626_);
v_children_1627_ = lean_ctor_get(v_x_1582_, 2);
lean_inc_ref(v_children_1627_);
lean_dec_ref_known(v_x_1582_, 3);
v_sz_1628_ = lean_array_size(v_children_1627_);
v___x_1629_ = ((size_t)0ULL);
lean_inc(v_x_1581_);
lean_inc_ref(v_x_1580_);
v___x_1630_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(v_x_1580_, v_x_1581_, v_sz_1628_, v___x_1629_, v_children_1627_);
v_cls_1644_ = lean_ctor_get(v_data_1625_, 0);
lean_inc(v_cls_1644_);
v_result_x3f_1645_ = lean_ctor_get(v_data_1625_, 1);
lean_inc(v_result_x3f_1645_);
v_startTime_1646_ = lean_ctor_get_float(v_data_1625_, sizeof(void*)*3);
v_stopTime_1647_ = lean_ctor_get_float(v_data_1625_, sizeof(void*)*3 + 8);
lean_dec_ref(v_data_1625_);
v___x_1664_ = l_Lean_Name_isAnonymous(v_cls_1644_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; uint8_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; double v___x_1680_; uint8_t v___x_1681_; 
v___x_1665_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__4));
v___x_1666_ = 1;
v___x_1667_ = l_Lean_Name_toString(v_cls_1644_, v___x_1666_);
v___x_1668_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
v___x_1669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1665_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__6));
v___x_1671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1680_ = lean_float_once(&l_Lean_MessageData_formatAux___closed__9, &l_Lean_MessageData_formatAux___closed__9_once, _init_l_Lean_MessageData_formatAux___closed__9);
v___x_1681_ = lean_float_beq(v_startTime_1646_, v___x_1680_);
if (v___x_1681_ == 0)
{
goto v___jp_1672_;
}
else
{
if (v___x_1664_ == 0)
{
v_msg_1649_ = v___x_1671_;
goto v___jp_1648_;
}
else
{
goto v___jp_1672_;
}
}
v___jp_1672_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; double v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1673_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__8));
v___x_1674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1671_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = lean_float_sub(v_stopTime_1647_, v_startTime_1646_);
v___x_1676_ = lean_float_to_string(v___x_1675_);
v___x_1677_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
v___x_1678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1674_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1670_);
v_msg_1649_ = v___x_1679_;
goto v___jp_1648_;
}
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_dec(v_result_x3f_1645_);
lean_dec(v_cls_1644_);
lean_dec_ref(v_msg_1626_);
lean_dec(v_x_1581_);
lean_dec_ref(v_x_1580_);
v___x_1682_ = lean_array_to_list(v___x_1630_);
v___x_1683_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_1684_ = l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(v___x_1682_, v___x_1683_);
return v___x_1684_;
}
v___jp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1634_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__0));
v___x_1635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___y_1632_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___x_1637_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
lean_ctor_set(v___x_1637_, 1, v___y_1633_);
v___x_1638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1635_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
v___x_1639_ = lean_array_to_list(v___x_1630_);
v___x_1640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1638_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_1642_ = l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(v___x_1640_, v___x_1641_);
v___x_1643_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1636_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
return v___x_1643_;
}
v___jp_1648_:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_MessageData_formatAux(v_x_1580_, v_x_1581_, v_msg_1626_);
if (lean_obj_tag(v_result_x3f_1645_) == 0)
{
v___y_1632_ = v_msg_1649_;
v___y_1633_ = v___x_1650_;
goto v___jp_1631_;
}
else
{
lean_object* v_val_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1663_; 
v_val_1651_ = lean_ctor_get(v_result_x3f_1645_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_result_x3f_1645_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1653_ = v_result_x3f_1645_;
v_isShared_1654_ = v_isSharedCheck_1663_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_val_1651_);
lean_dec(v_result_x3f_1645_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1663_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
uint8_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1658_; 
v___x_1655_ = lean_unbox(v_val_1651_);
lean_dec(v_val_1651_);
v___x_1656_ = l_Lean_TraceResult_toEmoji(v___x_1655_);
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 3);
lean_ctor_set(v___x_1653_, 0, v___x_1656_);
v___x_1658_ = v___x_1653_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1659_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__0));
v___x_1660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
lean_ctor_set(v___x_1661_, 1, v___x_1650_);
v___y_1632_ = v_msg_1649_;
v___y_1633_ = v___x_1661_;
goto v___jp_1631_;
}
}
}
}
}
case 10:
{
lean_object* v_f_1685_; lean_object* v___x_1686_; lean_object* v___y_1688_; 
v_f_1685_ = lean_ctor_get(v_x_1582_, 0);
lean_inc_ref(v_f_1685_);
lean_dec_ref_known(v_x_1582_, 2);
v___x_1686_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
if (lean_obj_tag(v_x_1581_) == 0)
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_box(0);
v___y_1688_ = v___x_1704_;
goto v___jp_1687_;
}
else
{
lean_object* v_val_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v_val_1705_ = lean_ctor_get(v_x_1581_, 0);
v___x_1706_ = l_Lean_MessageData_mkPPContext(v_x_1580_, v_val_1705_);
v___x_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
v___y_1688_ = v___x_1707_;
goto v___jp_1687_;
}
v___jp_1687_:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_apply_2(v_f_1685_, v___y_1688_, lean_box(0));
v___x_1690_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v___x_1689_, v___x_1686_);
if (lean_obj_tag(v___x_1690_) == 1)
{
lean_object* v_val_1691_; 
lean_dec(v___x_1689_);
v_val_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_val_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v_x_1582_ = v_val_1691_;
goto _start;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
lean_dec(v___x_1690_);
lean_dec(v_x_1581_);
lean_dec_ref(v_x_1580_);
v___x_1693_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__10));
v___x_1694_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__11));
v___x_1695_ = lean_unsigned_to_nat(409u);
v___x_1696_ = lean_unsigned_to_nat(8u);
v___x_1697_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__12));
v___x_1698_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v___x_1689_);
lean_dec(v___x_1689_);
v___x_1699_ = 1;
v___x_1700_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1698_, v___x_1699_);
v___x_1701_ = lean_string_append(v___x_1697_, v___x_1700_);
lean_dec_ref(v___x_1700_);
v___x_1702_ = l_mkPanicMessageWithDecl(v___x_1693_, v___x_1694_, v___x_1695_, v___x_1696_, v___x_1701_);
lean_dec_ref(v___x_1701_);
v___x_1703_ = l_panic___at___00Lean_MessageData_formatAux_spec__3(v___x_1702_);
return v___x_1703_;
}
}
}
default: 
{
lean_object* v_a_1708_; 
v_a_1708_ = lean_ctor_get(v_x_1582_, 1);
lean_inc_ref(v_a_1708_);
lean_dec_ref(v_x_1582_);
v_x_1582_ = v_a_1708_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(lean_object* v_x_1710_, lean_object* v_x_1711_, size_t v_sz_1712_, size_t v_i_1713_, lean_object* v_bs_1714_){
_start:
{
uint8_t v___x_1716_; 
v___x_1716_ = lean_usize_dec_lt(v_i_1713_, v_sz_1712_);
if (v___x_1716_ == 0)
{
lean_dec(v_x_1711_);
lean_dec_ref(v_x_1710_);
return v_bs_1714_;
}
else
{
lean_object* v_v_1717_; lean_object* v___x_1718_; lean_object* v_bs_x27_1719_; lean_object* v___x_1720_; size_t v___x_1721_; size_t v___x_1722_; lean_object* v___x_1723_; 
v_v_1717_ = lean_array_uget(v_bs_1714_, v_i_1713_);
v___x_1718_ = lean_unsigned_to_nat(0u);
v_bs_x27_1719_ = lean_array_uset(v_bs_1714_, v_i_1713_, v___x_1718_);
lean_inc(v_x_1711_);
lean_inc_ref(v_x_1710_);
v___x_1720_ = l_Lean_MessageData_formatAux(v_x_1710_, v_x_1711_, v_v_1717_);
v___x_1721_ = ((size_t)1ULL);
v___x_1722_ = lean_usize_add(v_i_1713_, v___x_1721_);
v___x_1723_ = lean_array_uset(v_bs_x27_1719_, v_i_1713_, v___x_1720_);
v_i_1713_ = v___x_1722_;
v_bs_1714_ = v___x_1723_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed(lean_object* v_x_1725_, lean_object* v_x_1726_, lean_object* v_sz_1727_, lean_object* v_i_1728_, lean_object* v_bs_1729_, lean_object* v___y_1730_){
_start:
{
size_t v_sz_boxed_1731_; size_t v_i_boxed_1732_; lean_object* v_res_1733_; 
v_sz_boxed_1731_ = lean_unbox_usize(v_sz_1727_);
lean_dec(v_sz_1727_);
v_i_boxed_1732_ = lean_unbox_usize(v_i_1728_);
lean_dec(v_i_1728_);
v_res_1733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(v_x_1725_, v_x_1726_, v_sz_boxed_1731_, v_i_boxed_1732_, v_bs_1729_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux___boxed(lean_object* v_x_1734_, lean_object* v_x_1735_, lean_object* v_x_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_MessageData_formatAux(v_x_1734_, v_x_1735_, v_x_1736_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_format(lean_object* v_msgData_1742_, lean_object* v_ctx_x3f_1743_){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = ((lean_object*)(l_Lean_MessageData_format___closed__0));
v___x_1746_ = l_Lean_MessageData_formatAux(v___x_1745_, v_ctx_x3f_1743_, v_msgData_1742_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_format___boxed(lean_object* v_msgData_1747_, lean_object* v_ctx_x3f_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_MessageData_format(v_msgData_1747_, v_ctx_x3f_1748_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_toString(lean_object* v_msgData_1751_){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1753_ = lean_box(0);
v___x_1754_ = l_Lean_MessageData_format(v_msgData_1751_, v___x_1753_);
v___x_1755_ = l_Std_Format_defWidth;
v___x_1756_ = lean_unsigned_to_nat(0u);
v___x_1757_ = l_Std_Format_pretty(v___x_1754_, v___x_1755_, v___x_1756_, v___x_1756_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_toString___boxed(lean_object* v_msgData_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_MessageData_toString(v_msgData_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instAppend___lam__0(lean_object* v_a_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1763_, 0, v_a_1761_);
lean_ctor_set(v___x_1763_, 1, v_a_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeString___lam__0(lean_object* v_s_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_s_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeMVarId___lam__0(lean_object* v_a_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1784_, 0, v_a_1783_);
return v___x_1784_;
}
}
static lean_object* _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = ((lean_object*)(l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1));
v___x_1791_ = l_Lean_MessageData_ofFormat(v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0(lean_object* v_o_1792_){
_start:
{
if (lean_obj_tag(v_o_1792_) == 0)
{
lean_object* v___x_1793_; 
v___x_1793_ = lean_obj_once(&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2);
return v___x_1793_;
}
else
{
lean_object* v_val_1794_; lean_object* v___x_1795_; 
v_val_1794_ = lean_ctor_get(v_o_1792_, 0);
lean_inc(v_val_1794_);
lean_dec_ref_known(v_o_1792_, 1);
v___x_1795_ = l_Lean_MessageData_ofExpr(v_val_1794_);
return v___x_1795_;
}
}
}
static lean_object* _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__6));
v___x_1799_ = l_Lean_MessageData_ofFormat(v___x_1798_);
return v___x_1799_;
}
}
static lean_object* _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = ((lean_object*)(l_Lean_MessageData_arrayExpr_toMessageData___closed__2));
v___x_1804_ = l_Lean_MessageData_ofFormat(v___x_1803_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object* v_es_1805_, lean_object* v_i_1806_, lean_object* v_acc_1807_){
_start:
{
lean_object* v___y_1809_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = lean_array_get_size(v_es_1805_);
v___x_1814_ = lean_nat_dec_lt(v_i_1806_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
lean_dec(v_i_1806_);
v___x_1815_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__0, &l_Lean_MessageData_arrayExpr_toMessageData___closed__0_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__0);
v___x_1816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1816_, 0, v_acc_1807_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
return v___x_1816_;
}
else
{
lean_object* v_e_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v_e_1817_ = lean_array_fget_borrowed(v_es_1805_, v_i_1806_);
v___x_1818_ = lean_unsigned_to_nat(0u);
v___x_1819_ = lean_nat_dec_eq(v_i_1806_, v___x_1818_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1820_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_1821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1821_, 0, v_acc_1807_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
lean_inc(v_e_1817_);
v___x_1822_ = l_Lean_MessageData_ofExpr(v_e_1817_);
v___x_1823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1821_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v___y_1809_ = v___x_1823_;
goto v___jp_1808_;
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
lean_inc(v_e_1817_);
v___x_1824_ = l_Lean_MessageData_ofExpr(v_e_1817_);
v___x_1825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1825_, 0, v_acc_1807_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
v___y_1809_ = v___x_1825_;
goto v___jp_1808_;
}
}
v___jp_1808_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = lean_unsigned_to_nat(1u);
v___x_1811_ = lean_nat_add(v_i_1806_, v___x_1810_);
lean_dec(v_i_1806_);
v_i_1806_ = v___x_1811_;
v_acc_1807_ = v___y_1809_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData___boxed(lean_object* v_es_1826_, lean_object* v_i_1827_, lean_object* v_acc_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_MessageData_arrayExpr_toMessageData(v_es_1826_, v_i_1827_, v_acc_1828_);
lean_dec_ref(v_es_1826_);
return v_res_1829_;
}
}
static lean_object* _init_l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = ((lean_object*)(l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1));
v___x_1834_ = l_Lean_MessageData_ofFormat(v___x_1833_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0(lean_object* v_es_1835_){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = lean_unsigned_to_nat(0u);
v___x_1837_ = lean_obj_once(&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2);
v___x_1838_ = l_Lean_MessageData_arrayExpr_toMessageData(v_es_1835_, v___x_1836_, v___x_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed(lean_object* v_es_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_MessageData_instCoeArrayExpr___lam__0(v_es_1839_);
lean_dec_ref(v_es_1839_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_bracket(lean_object* v_l_1843_, lean_object* v_f_1844_, lean_object* v_r_1845_){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1846_ = lean_string_length(v_l_1843_);
v___x_1847_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_l_1843_);
v___x_1848_ = l_Lean_MessageData_ofFormat(v___x_1847_);
v___x_1849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
lean_ctor_set(v___x_1849_, 1, v_f_1844_);
v___x_1850_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1850_, 0, v_r_1845_);
v___x_1851_ = l_Lean_MessageData_ofFormat(v___x_1850_);
v___x_1852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1849_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___x_1853_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1846_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_paren(lean_object* v_f_1855_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1856_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__3));
v___x_1857_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__4));
v___x_1858_ = l_Lean_MessageData_bracket(v___x_1856_, v_f_1855_, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_sbracket(lean_object* v_f_1859_){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1860_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__3));
v___x_1861_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__5));
v___x_1862_ = l_Lean_MessageData_bracket(v___x_1860_, v_f_1859_, v___x_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_joinSep(lean_object* v_x_1863_, lean_object* v_x_1864_){
_start:
{
if (lean_obj_tag(v_x_1863_) == 0)
{
lean_object* v___x_1865_; 
lean_dec_ref(v_x_1864_);
v___x_1865_ = lean_obj_once(&l_Lean_MessageData_nil___closed__0, &l_Lean_MessageData_nil___closed__0_once, _init_l_Lean_MessageData_nil___closed__0);
return v___x_1865_;
}
else
{
lean_object* v_tail_1866_; 
v_tail_1866_ = lean_ctor_get(v_x_1863_, 1);
if (lean_obj_tag(v_tail_1866_) == 0)
{
lean_object* v_head_1867_; 
lean_dec_ref(v_x_1864_);
v_head_1867_ = lean_ctor_get(v_x_1863_, 0);
lean_inc(v_head_1867_);
lean_dec_ref_known(v_x_1863_, 2);
return v_head_1867_;
}
else
{
lean_object* v_head_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1877_; 
lean_inc(v_tail_1866_);
v_head_1868_ = lean_ctor_get(v_x_1863_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v_x_1863_);
if (v_isSharedCheck_1877_ == 0)
{
lean_object* v_unused_1878_; 
v_unused_1878_ = lean_ctor_get(v_x_1863_, 1);
lean_dec(v_unused_1878_);
v___x_1870_ = v_x_1863_;
v_isShared_1871_ = v_isSharedCheck_1877_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_head_1868_);
lean_dec(v_x_1863_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1877_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
lean_inc_ref(v_x_1864_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set_tag(v___x_1870_, 7);
lean_ctor_set(v___x_1870_, 1, v_x_1864_);
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_head_1868_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v_x_1864_);
v___x_1873_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = l_Lean_MessageData_joinSep(v_tail_1866_, v_x_1864_);
v___x_1875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1873_);
lean_ctor_set(v___x_1875_, 1, v___x_1874_);
return v___x_1875_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__2(void){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = ((lean_object*)(l_Lean_MessageData_ofList___closed__1));
v___x_1883_ = l_Lean_MessageData_ofFormat(v___x_1882_);
return v___x_1883_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__5(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = ((lean_object*)(l_Lean_MessageData_ofList___closed__4));
v___x_1888_ = l_Lean_MessageData_ofFormat(v___x_1887_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__6(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = lean_box(1);
v___x_1890_ = l_Lean_MessageData_ofFormat(v___x_1889_);
return v___x_1890_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__7(void){
_start:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1891_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_1892_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__5, &l_Lean_MessageData_ofList___closed__5_once, _init_l_Lean_MessageData_ofList___closed__5);
v___x_1893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
lean_ctor_set(v___x_1893_, 1, v___x_1891_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofList(lean_object* v_x_1894_){
_start:
{
if (lean_obj_tag(v_x_1894_) == 0)
{
lean_object* v___x_1895_; 
v___x_1895_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__2, &l_Lean_MessageData_ofList___closed__2_once, _init_l_Lean_MessageData_ofList___closed__2);
return v___x_1895_;
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__7, &l_Lean_MessageData_ofList___closed__7_once, _init_l_Lean_MessageData_ofList___closed__7);
v___x_1897_ = l_Lean_MessageData_joinSep(v_x_1894_, v___x_1896_);
v___x_1898_ = l_Lean_MessageData_sbracket(v___x_1897_);
return v___x_1898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofArray(lean_object* v_msgs_1899_){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_array_to_list(v_msgs_1899_);
v___x_1901_ = l_Lean_MessageData_ofList(v___x_1900_);
return v___x_1901_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__2(void){
_start:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1905_ = ((lean_object*)(l_Lean_MessageData_orList___closed__1));
v___x_1906_ = l_Lean_MessageData_ofFormat(v___x_1905_);
return v___x_1906_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__5(void){
_start:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = ((lean_object*)(l_Lean_MessageData_orList___closed__4));
v___x_1911_ = l_Lean_MessageData_ofFormat(v___x_1910_);
return v___x_1911_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__8(void){
_start:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = ((lean_object*)(l_Lean_MessageData_orList___closed__7));
v___x_1916_ = l_Lean_MessageData_ofFormat(v___x_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_orList(lean_object* v_xs_1917_){
_start:
{
if (lean_obj_tag(v_xs_1917_) == 0)
{
lean_object* v___x_1918_; 
v___x_1918_ = lean_obj_once(&l_Lean_MessageData_orList___closed__2, &l_Lean_MessageData_orList___closed__2_once, _init_l_Lean_MessageData_orList___closed__2);
return v___x_1918_;
}
else
{
lean_object* v_tail_1919_; 
v_tail_1919_ = lean_ctor_get(v_xs_1917_, 1);
lean_inc(v_tail_1919_);
if (lean_obj_tag(v_tail_1919_) == 0)
{
lean_object* v_head_1920_; 
v_head_1920_ = lean_ctor_get(v_xs_1917_, 0);
lean_inc(v_head_1920_);
lean_dec_ref_known(v_xs_1917_, 2);
return v_head_1920_;
}
else
{
lean_object* v_tail_1921_; 
v_tail_1921_ = lean_ctor_get(v_tail_1919_, 1);
if (lean_obj_tag(v_tail_1921_) == 0)
{
lean_object* v_head_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1939_; 
v_head_1922_ = lean_ctor_get(v_xs_1917_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_xs_1917_);
if (v_isSharedCheck_1939_ == 0)
{
lean_object* v_unused_1940_; 
v_unused_1940_ = lean_ctor_get(v_xs_1917_, 1);
lean_dec(v_unused_1940_);
v___x_1924_ = v_xs_1917_;
v_isShared_1925_ = v_isSharedCheck_1939_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_head_1922_);
lean_dec(v_xs_1917_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1939_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v_head_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1937_; 
v_head_1926_ = lean_ctor_get(v_tail_1919_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v_tail_1919_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v_tail_1919_, 1);
lean_dec(v_unused_1938_);
v___x_1928_ = v_tail_1919_;
v_isShared_1929_ = v_isSharedCheck_1937_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_head_1926_);
lean_dec(v_tail_1919_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1937_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1930_; lean_object* v___x_1932_; 
v___x_1930_ = lean_obj_once(&l_Lean_MessageData_orList___closed__5, &l_Lean_MessageData_orList___closed__5_once, _init_l_Lean_MessageData_orList___closed__5);
if (v_isShared_1929_ == 0)
{
lean_ctor_set_tag(v___x_1928_, 7);
lean_ctor_set(v___x_1928_, 1, v___x_1930_);
lean_ctor_set(v___x_1928_, 0, v_head_1922_);
v___x_1932_ = v___x_1928_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_head_1922_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v___x_1930_);
v___x_1932_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1934_; 
if (v_isShared_1925_ == 0)
{
lean_ctor_set_tag(v___x_1924_, 7);
lean_ctor_set(v___x_1924_, 1, v_head_1926_);
lean_ctor_set(v___x_1924_, 0, v___x_1932_);
v___x_1934_ = v___x_1924_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v_head_1926_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
else
{
lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1964_; 
v_isSharedCheck_1964_ = !lean_is_exclusive(v_tail_1919_);
if (v_isSharedCheck_1964_ == 0)
{
lean_object* v_unused_1965_; lean_object* v_unused_1966_; 
v_unused_1965_ = lean_ctor_get(v_tail_1919_, 1);
lean_dec(v_unused_1965_);
v_unused_1966_ = lean_ctor_get(v_tail_1919_, 0);
lean_dec(v_unused_1966_);
v___x_1942_ = v_tail_1919_;
v_isShared_1943_ = v_isSharedCheck_1964_;
goto v_resetjp_1941_;
}
else
{
lean_dec(v_tail_1919_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1964_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
v___x_1944_ = ((lean_object*)(l_Lean_instInhabitedMessageData_default));
lean_inc_ref(v_xs_1917_);
v___x_1945_ = lean_array_mk(v_xs_1917_);
v___x_1946_ = lean_array_pop(v___x_1945_);
v___x_1947_ = lean_array_to_list(v___x_1946_);
v___x_1948_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_1949_ = l_Lean_MessageData_joinSep(v___x_1947_, v___x_1948_);
v___x_1950_ = lean_obj_once(&l_Lean_MessageData_orList___closed__8, &l_Lean_MessageData_orList___closed__8_once, _init_l_Lean_MessageData_orList___closed__8);
if (v_isShared_1943_ == 0)
{
lean_ctor_set_tag(v___x_1942_, 7);
lean_ctor_set(v___x_1942_, 1, v___x_1950_);
lean_ctor_set(v___x_1942_, 0, v___x_1949_);
v___x_1952_ = v___x_1942_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1949_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
lean_object* v___x_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
v___x_1953_ = l_List_getLast_x21___redArg(v___x_1944_, v_xs_1917_);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_xs_1917_);
if (v_isSharedCheck_1960_ == 0)
{
lean_object* v_unused_1961_; lean_object* v_unused_1962_; 
v_unused_1961_ = lean_ctor_get(v_xs_1917_, 1);
lean_dec(v_unused_1961_);
v_unused_1962_ = lean_ctor_get(v_xs_1917_, 0);
lean_dec(v_unused_1962_);
v___x_1955_ = v_xs_1917_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_dec(v_xs_1917_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
lean_ctor_set_tag(v___x_1955_, 7);
lean_ctor_set(v___x_1955_, 1, v___x_1953_);
lean_ctor_set(v___x_1955_, 0, v___x_1952_);
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1952_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v___x_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_andList___closed__2(void){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1970_ = ((lean_object*)(l_Lean_MessageData_andList___closed__1));
v___x_1971_ = l_Lean_MessageData_ofFormat(v___x_1970_);
return v___x_1971_;
}
}
static lean_object* _init_l_Lean_MessageData_andList___closed__5(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = ((lean_object*)(l_Lean_MessageData_andList___closed__4));
v___x_1976_ = l_Lean_MessageData_ofFormat(v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_andList(lean_object* v_xs_1977_){
_start:
{
if (lean_obj_tag(v_xs_1977_) == 0)
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_obj_once(&l_Lean_MessageData_orList___closed__2, &l_Lean_MessageData_orList___closed__2_once, _init_l_Lean_MessageData_orList___closed__2);
return v___x_1978_;
}
else
{
lean_object* v_tail_1979_; 
v_tail_1979_ = lean_ctor_get(v_xs_1977_, 1);
lean_inc(v_tail_1979_);
if (lean_obj_tag(v_tail_1979_) == 0)
{
lean_object* v_head_1980_; 
v_head_1980_ = lean_ctor_get(v_xs_1977_, 0);
lean_inc(v_head_1980_);
lean_dec_ref_known(v_xs_1977_, 2);
return v_head_1980_;
}
else
{
lean_object* v_tail_1981_; 
v_tail_1981_ = lean_ctor_get(v_tail_1979_, 1);
if (lean_obj_tag(v_tail_1981_) == 0)
{
lean_object* v_head_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1999_; 
v_head_1982_ = lean_ctor_get(v_xs_1977_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_xs_1977_);
if (v_isSharedCheck_1999_ == 0)
{
lean_object* v_unused_2000_; 
v_unused_2000_ = lean_ctor_get(v_xs_1977_, 1);
lean_dec(v_unused_2000_);
v___x_1984_ = v_xs_1977_;
v_isShared_1985_ = v_isSharedCheck_1999_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_head_1982_);
lean_dec(v_xs_1977_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1999_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v_head_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1997_; 
v_head_1986_ = lean_ctor_get(v_tail_1979_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_tail_1979_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; 
v_unused_1998_ = lean_ctor_get(v_tail_1979_, 1);
lean_dec(v_unused_1998_);
v___x_1988_ = v_tail_1979_;
v_isShared_1989_ = v_isSharedCheck_1997_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_head_1986_);
lean_dec(v_tail_1979_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1997_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1990_ = lean_obj_once(&l_Lean_MessageData_andList___closed__2, &l_Lean_MessageData_andList___closed__2_once, _init_l_Lean_MessageData_andList___closed__2);
if (v_isShared_1989_ == 0)
{
lean_ctor_set_tag(v___x_1988_, 7);
lean_ctor_set(v___x_1988_, 1, v___x_1990_);
lean_ctor_set(v___x_1988_, 0, v_head_1982_);
v___x_1992_ = v___x_1988_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_head_1982_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v___x_1990_);
v___x_1992_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
lean_object* v___x_1994_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set_tag(v___x_1984_, 7);
lean_ctor_set(v___x_1984_, 1, v_head_1986_);
lean_ctor_set(v___x_1984_, 0, v___x_1992_);
v___x_1994_ = v___x_1984_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_head_1986_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
}
else
{
lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2024_; 
v_isSharedCheck_2024_ = !lean_is_exclusive(v_tail_1979_);
if (v_isSharedCheck_2024_ == 0)
{
lean_object* v_unused_2025_; lean_object* v_unused_2026_; 
v_unused_2025_ = lean_ctor_get(v_tail_1979_, 1);
lean_dec(v_unused_2025_);
v_unused_2026_ = lean_ctor_get(v_tail_1979_, 0);
lean_dec(v_unused_2026_);
v___x_2002_ = v_tail_1979_;
v_isShared_2003_ = v_isSharedCheck_2024_;
goto v_resetjp_2001_;
}
else
{
lean_dec(v_tail_1979_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2024_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2004_ = ((lean_object*)(l_Lean_instInhabitedMessageData_default));
lean_inc_ref(v_xs_1977_);
v___x_2005_ = lean_array_mk(v_xs_1977_);
v___x_2006_ = lean_array_pop(v___x_2005_);
v___x_2007_ = lean_array_to_list(v___x_2006_);
v___x_2008_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_2009_ = l_Lean_MessageData_joinSep(v___x_2007_, v___x_2008_);
v___x_2010_ = lean_obj_once(&l_Lean_MessageData_andList___closed__5, &l_Lean_MessageData_andList___closed__5_once, _init_l_Lean_MessageData_andList___closed__5);
if (v_isShared_2003_ == 0)
{
lean_ctor_set_tag(v___x_2002_, 7);
lean_ctor_set(v___x_2002_, 1, v___x_2010_);
lean_ctor_set(v___x_2002_, 0, v___x_2009_);
v___x_2012_ = v___x_2002_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2023_, 1, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
v___x_2013_ = l_List_getLast_x21___redArg(v___x_2004_, v_xs_1977_);
v_isSharedCheck_2020_ = !lean_is_exclusive(v_xs_1977_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; lean_object* v_unused_2022_; 
v_unused_2021_ = lean_ctor_get(v_xs_1977_, 1);
lean_dec(v_unused_2021_);
v_unused_2022_ = lean_ctor_get(v_xs_1977_, 0);
lean_dec(v_unused_2022_);
v___x_2015_ = v_xs_1977_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_dec(v_xs_1977_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 7);
lean_ctor_set(v___x_2015_, 1, v___x_2013_);
lean_ctor_set(v___x_2015_, 0, v___x_2012_);
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v___x_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__0(void){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_2028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
return v___x_2028_;
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__3(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = ((lean_object*)(l_Lean_MessageData_note___closed__2));
v___x_2033_ = l_Lean_MessageData_ofFormat(v___x_2032_);
return v___x_2033_;
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__4(void){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2034_ = lean_obj_once(&l_Lean_MessageData_note___closed__3, &l_Lean_MessageData_note___closed__3_once, _init_l_Lean_MessageData_note___closed__3);
v___x_2035_ = lean_obj_once(&l_Lean_MessageData_note___closed__0, &l_Lean_MessageData_note___closed__0_once, _init_l_Lean_MessageData_note___closed__0);
v___x_2036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
lean_ctor_set(v___x_2036_, 1, v___x_2034_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_note(lean_object* v_note_2037_){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = lean_obj_once(&l_Lean_MessageData_note___closed__4, &l_Lean_MessageData_note___closed__4_once, _init_l_Lean_MessageData_note___closed__4);
v___x_2039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
lean_ctor_set(v___x_2039_, 1, v_note_2037_);
return v___x_2039_;
}
}
static lean_object* _init_l_Lean_MessageData_hint_x27___closed__2(void){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = ((lean_object*)(l_Lean_MessageData_hint_x27___closed__1));
v___x_2044_ = l_Lean_MessageData_ofFormat(v___x_2043_);
return v___x_2044_;
}
}
static lean_object* _init_l_Lean_MessageData_hint_x27___closed__3(void){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2045_ = lean_obj_once(&l_Lean_MessageData_hint_x27___closed__2, &l_Lean_MessageData_hint_x27___closed__2_once, _init_l_Lean_MessageData_hint_x27___closed__2);
v___x_2046_ = lean_obj_once(&l_Lean_MessageData_note___closed__0, &l_Lean_MessageData_note___closed__0_once, _init_l_Lean_MessageData_note___closed__0);
v___x_2047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2046_);
lean_ctor_set(v___x_2047_, 1, v___x_2045_);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint_x27(lean_object* v_hint_2048_){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = lean_obj_once(&l_Lean_MessageData_hint_x27___closed__3, &l_Lean_MessageData_hint_x27___closed__3_once, _init_l_Lean_MessageData_hint_x27___closed__3);
v___x_2050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
lean_ctor_set(v___x_2050_, 1, v_hint_2048_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeListExpr___lam__0(lean_object* v_es_2053_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2054_ = ((lean_object*)(l_Lean_MessageData_instCoeExpr___closed__0));
v___x_2055_ = lean_box(0);
v___x_2056_ = l_List_mapTR_loop___redArg(v___x_2054_, v_es_2053_, v___x_2055_);
v___x_2057_ = l_Lean_MessageData_ofList(v___x_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default___redArg(lean_object* v_inst_2060_){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; uint8_t v___x_2065_; lean_object* v___x_2066_; 
v___x_2061_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_2062_ = l_Lean_instInhabitedPosition_default;
v___x_2063_ = lean_box(0);
v___x_2064_ = 0;
v___x_2065_ = 2;
v___x_2066_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2066_, 0, v___x_2061_);
lean_ctor_set(v___x_2066_, 1, v___x_2062_);
lean_ctor_set(v___x_2066_, 2, v___x_2063_);
lean_ctor_set(v___x_2066_, 3, v___x_2061_);
lean_ctor_set(v___x_2066_, 4, v_inst_2060_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*5, v___x_2064_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*5 + 1, v___x_2065_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*5 + 2, v___x_2064_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default(lean_object* v_00_u03b1_2067_, lean_object* v_inst_2068_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage___redArg(lean_object* v_inst_2070_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage(lean_object* v_a_2072_, lean_object* v_inst_2073_){
_start:
{
lean_object* v___x_2074_; 
v___x_2074_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg(lean_object* v_inst_2087_, lean_object* v_x_2088_){
_start:
{
lean_object* v_fileName_2089_; lean_object* v_pos_2090_; lean_object* v_endPos_2091_; uint8_t v_keepFullRange_2092_; uint8_t v_severity_2093_; uint8_t v_isSilent_2094_; lean_object* v_caption_2095_; lean_object* v_data_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v_fileName_2089_ = lean_ctor_get(v_x_2088_, 0);
lean_inc_ref(v_fileName_2089_);
v_pos_2090_ = lean_ctor_get(v_x_2088_, 1);
lean_inc_ref(v_pos_2090_);
v_endPos_2091_ = lean_ctor_get(v_x_2088_, 2);
lean_inc(v_endPos_2091_);
v_keepFullRange_2092_ = lean_ctor_get_uint8(v_x_2088_, sizeof(void*)*5);
v_severity_2093_ = lean_ctor_get_uint8(v_x_2088_, sizeof(void*)*5 + 1);
v_isSilent_2094_ = lean_ctor_get_uint8(v_x_2088_, sizeof(void*)*5 + 2);
v_caption_2095_ = lean_ctor_get(v_x_2088_, 3);
lean_inc_ref(v_caption_2095_);
v_data_2096_ = lean_ctor_get(v_x_2088_, 4);
lean_inc(v_data_2096_);
lean_dec_ref(v_x_2088_);
v___x_2097_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0));
v___x_2098_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_2099_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2099_, 0, v_fileName_2089_);
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = lean_box(0);
v___x_2102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2100_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___x_2103_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_2104_ = l_Lean_instToJsonPosition_toJson(v_pos_2090_);
v___x_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2103_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
lean_ctor_set(v___x_2106_, 1, v___x_2101_);
v___x_2107_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_2108_ = l_Lean_Option_toJson___redArg(v___x_2097_, v_endPos_2091_);
v___x_2109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
lean_ctor_set(v___x_2110_, 1, v___x_2101_);
v___x_2111_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_2112_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2112_, 0, v_keepFullRange_2092_);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2111_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v___x_2114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
lean_ctor_set(v___x_2114_, 1, v___x_2101_);
v___x_2115_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_2116_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_2093_);
v___x_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
lean_ctor_set(v___x_2118_, 1, v___x_2101_);
v___x_2119_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_2120_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2120_, 0, v_isSilent_2094_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2119_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
lean_ctor_set(v___x_2122_, 1, v___x_2101_);
v___x_2123_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_2124_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2124_, 0, v_caption_2095_);
v___x_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2123_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
lean_ctor_set(v___x_2126_, 1, v___x_2101_);
v___x_2127_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2128_ = lean_apply_1(v_inst_2087_, v_data_2096_);
v___x_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
lean_ctor_set(v___x_2130_, 1, v___x_2101_);
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2130_);
lean_ctor_set(v___x_2131_, 1, v___x_2101_);
v___x_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2126_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2122_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2118_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2114_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
v___x_2136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2110_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2106_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2102_);
lean_ctor_set(v___x_2138_, 1, v___x_2137_);
v___x_2139_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9));
v___x_2140_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_2141_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_box(0), lean_box(0), v___x_2139_, v___x_2138_, v___x_2140_);
v___x_2142_ = l_Lean_Json_mkObj(v___x_2141_);
lean_dec(v___x_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson(lean_object* v_00_u03b1_2143_, lean_object* v_inst_2144_, lean_object* v_x_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_instToJsonBaseMessage_toJson___redArg(v_inst_2144_, v_x_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage___redArg(lean_object* v_inst_2147_){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = lean_alloc_closure((void*)(l_Lean_instToJsonBaseMessage_toJson), 3, 2);
lean_closure_set(v___x_2148_, 0, lean_box(0));
lean_closure_set(v___x_2148_, 1, v_inst_2147_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage(lean_object* v_00_u03b1_2149_, lean_object* v_inst_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = lean_alloc_closure((void*)(l_Lean_instToJsonBaseMessage_toJson), 3, 2);
lean_closure_set(v___x_2151_, 0, lean_box(0));
lean_closure_set(v___x_2151_, 1, v_inst_2150_);
return v___x_2151_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3(void){
_start:
{
uint8_t v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2157_ = 1;
v___x_2158_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2));
v___x_2159_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2158_, v___x_2157_);
return v___x_2159_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5(void){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2161_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4));
v___x_2162_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3);
v___x_2163_ = lean_string_append(v___x_2162_, v___x_2161_);
return v___x_2163_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7(void){
_start:
{
uint8_t v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = 1;
v___x_2167_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6));
v___x_2168_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2167_, v___x_2166_);
return v___x_2168_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7);
v___x_2170_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2171_ = lean_string_append(v___x_2170_, v___x_2169_);
return v___x_2171_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10(void){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2173_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2174_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8);
v___x_2175_ = lean_string_append(v___x_2174_, v___x_2173_);
return v___x_2175_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14(void){
_start:
{
uint8_t v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2181_ = 1;
v___x_2182_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13));
v___x_2183_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2182_, v___x_2181_);
return v___x_2183_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15(void){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2184_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14);
v___x_2185_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2186_ = lean_string_append(v___x_2185_, v___x_2184_);
return v___x_2186_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16(void){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2187_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2188_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15);
v___x_2189_ = lean_string_append(v___x_2188_, v___x_2187_);
return v___x_2189_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18(void){
_start:
{
uint8_t v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2192_ = 1;
v___x_2193_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17));
v___x_2194_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2193_, v___x_2192_);
return v___x_2194_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18);
v___x_2196_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2197_ = lean_string_append(v___x_2196_, v___x_2195_);
return v___x_2197_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2198_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2199_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19);
v___x_2200_ = lean_string_append(v___x_2199_, v___x_2198_);
return v___x_2200_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23(void){
_start:
{
uint8_t v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2204_ = 1;
v___x_2205_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22));
v___x_2206_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2205_, v___x_2204_);
return v___x_2206_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24(void){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2207_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23);
v___x_2208_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2209_ = lean_string_append(v___x_2208_, v___x_2207_);
return v___x_2209_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25(void){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2210_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2211_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24);
v___x_2212_ = lean_string_append(v___x_2211_, v___x_2210_);
return v___x_2212_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27(void){
_start:
{
uint8_t v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = 1;
v___x_2216_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26));
v___x_2217_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2216_, v___x_2215_);
return v___x_2217_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28(void){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2218_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27);
v___x_2219_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2220_ = lean_string_append(v___x_2219_, v___x_2218_);
return v___x_2220_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2222_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28);
v___x_2223_ = lean_string_append(v___x_2222_, v___x_2221_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31(void){
_start:
{
uint8_t v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = 1;
v___x_2227_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30));
v___x_2228_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2227_, v___x_2226_);
return v___x_2228_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31);
v___x_2230_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2231_ = lean_string_append(v___x_2230_, v___x_2229_);
return v___x_2231_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33(void){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2232_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2233_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32);
v___x_2234_ = lean_string_append(v___x_2233_, v___x_2232_);
return v___x_2234_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35(void){
_start:
{
uint8_t v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2237_ = 1;
v___x_2238_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34));
v___x_2239_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2238_, v___x_2237_);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36(void){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2240_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35);
v___x_2241_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2242_ = lean_string_append(v___x_2241_, v___x_2240_);
return v___x_2242_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2243_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2244_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36);
v___x_2245_ = lean_string_append(v___x_2244_, v___x_2243_);
return v___x_2245_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39(void){
_start:
{
uint8_t v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = 1;
v___x_2249_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38));
v___x_2250_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2249_, v___x_2248_);
return v___x_2250_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39);
v___x_2252_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2253_ = lean_string_append(v___x_2252_, v___x_2251_);
return v___x_2253_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2254_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2255_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40);
v___x_2256_ = lean_string_append(v___x_2255_, v___x_2254_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg(lean_object* v_inst_2257_, lean_object* v_json_2258_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2259_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0));
v___x_2260_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
lean_inc(v_json_2258_);
v___x_2261_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2259_, v___x_2260_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2271_; 
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2264_ = v___x_2261_;
v_isShared_2265_ = v_isSharedCheck_2271_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_dec(v___x_2261_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2271_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2266_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10);
v___x_2267_ = lean_string_append(v___x_2266_, v_a_2262_);
lean_dec(v_a_2262_);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 0, v___x_2267_);
v___x_2269_ = v___x_2264_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v___x_2267_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
else
{
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2272_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2261_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2261_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set_tag(v___x_2274_, 0);
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v_a_2280_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2261_, 1);
v___x_2281_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11));
v___x_2282_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12));
v___x_2283_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
lean_inc(v_json_2258_);
v___x_2284_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2281_, v___x_2283_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2294_; 
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2294_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2294_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2292_; 
v___x_2289_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16);
v___x_2290_ = lean_string_append(v___x_2289_, v_a_2285_);
lean_dec(v_a_2285_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2290_);
v___x_2292_ = v___x_2287_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v___x_2290_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
else
{
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2295_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2284_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2284_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
lean_ctor_set_tag(v___x_2297_, 0);
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v_a_2303_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2303_);
lean_dec_ref_known(v___x_2284_, 1);
v___x_2304_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
lean_inc(v_json_2258_);
v___x_2305_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2282_, v___x_2304_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2308_ = v___x_2305_;
v_isShared_2309_ = v_isSharedCheck_2315_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2305_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2315_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2313_; 
v___x_2310_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20);
v___x_2311_ = lean_string_append(v___x_2310_, v_a_2306_);
lean_dec(v_a_2306_);
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 0, v___x_2311_);
v___x_2313_ = v___x_2308_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2311_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
else
{
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2316_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2305_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2305_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
lean_ctor_set_tag(v___x_2318_, 0);
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_a_2324_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2305_, 1);
v___x_2325_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21));
v___x_2326_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
lean_inc(v_json_2258_);
v___x_2327_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2325_, v___x_2326_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2337_; 
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2330_ = v___x_2327_;
v_isShared_2331_ = v_isSharedCheck_2337_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2337_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2335_; 
v___x_2332_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25);
v___x_2333_ = lean_string_append(v___x_2332_, v_a_2328_);
lean_dec(v_a_2328_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2333_);
v___x_2335_ = v___x_2330_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v___x_2333_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
else
{
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2338_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2327_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2327_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
lean_ctor_set_tag(v___x_2340_, 0);
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_a_2346_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2347_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity___closed__0));
v___x_2348_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
lean_inc(v_json_2258_);
v___x_2349_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2347_, v___x_2348_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2359_; 
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2352_ = v___x_2349_;
v_isShared_2353_ = v_isSharedCheck_2359_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2349_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2359_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2354_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29);
v___x_2355_ = lean_string_append(v___x_2354_, v_a_2350_);
lean_dec(v_a_2350_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 0, v___x_2355_);
v___x_2357_ = v___x_2352_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2360_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2349_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2349_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
lean_ctor_set_tag(v___x_2362_, 0);
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v_a_2368_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2349_, 1);
v___x_2369_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
lean_inc(v_json_2258_);
v___x_2370_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2325_, v___x_2369_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2380_; 
lean_dec(v_a_2368_);
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2373_ = v___x_2370_;
v_isShared_2374_ = v_isSharedCheck_2380_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2370_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2380_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2378_; 
v___x_2375_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33);
v___x_2376_ = lean_string_append(v___x_2375_, v_a_2371_);
lean_dec(v_a_2371_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v___x_2376_);
v___x_2378_ = v___x_2373_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
else
{
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
lean_dec(v_a_2368_);
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2381_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2370_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2370_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set_tag(v___x_2383_, 0);
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v_a_2389_ = lean_ctor_get(v___x_2370_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2370_, 1);
v___x_2390_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
lean_inc(v_json_2258_);
v___x_2391_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v___x_2259_, v___x_2390_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2401_; 
lean_dec(v_a_2389_);
lean_dec(v_a_2368_);
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2394_ = v___x_2391_;
v_isShared_2395_ = v_isSharedCheck_2401_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2391_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2401_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2399_; 
v___x_2396_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37);
v___x_2397_ = lean_string_append(v___x_2396_, v_a_2392_);
lean_dec(v_a_2392_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 0, v___x_2397_);
v___x_2399_ = v___x_2394_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2397_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
else
{
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
lean_dec(v_a_2389_);
lean_dec(v_a_2368_);
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
lean_dec(v_json_2258_);
lean_dec_ref(v_inst_2257_);
v_a_2402_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2404_ = v___x_2391_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2391_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
lean_ctor_set_tag(v___x_2404_, 0);
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v_a_2410_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2391_, 1);
v___x_2411_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2412_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2258_, v_inst_2257_, v___x_2411_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2422_; 
lean_dec(v_a_2410_);
lean_dec(v_a_2389_);
lean_dec(v_a_2368_);
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2415_ = v___x_2412_;
v_isShared_2416_ = v_isSharedCheck_2422_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2412_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2422_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2420_; 
v___x_2417_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41);
v___x_2418_ = lean_string_append(v___x_2417_, v_a_2413_);
lean_dec(v_a_2413_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2418_);
v___x_2420_ = v___x_2415_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
else
{
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
lean_dec(v_a_2410_);
lean_dec(v_a_2389_);
lean_dec(v_a_2368_);
lean_dec(v_a_2346_);
lean_dec(v_a_2324_);
lean_dec(v_a_2303_);
lean_dec(v_a_2280_);
v_a_2423_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2412_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2412_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set_tag(v___x_2425_, 0);
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2442_; 
v_a_2431_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2433_ = v___x_2412_;
v_isShared_2434_ = v_isSharedCheck_2442_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2412_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2442_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2435_; uint8_t v___x_2436_; uint8_t v___x_2437_; uint8_t v___x_2438_; lean_object* v___x_2440_; 
v___x_2435_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2435_, 0, v_a_2280_);
lean_ctor_set(v___x_2435_, 1, v_a_2303_);
lean_ctor_set(v___x_2435_, 2, v_a_2324_);
lean_ctor_set(v___x_2435_, 3, v_a_2410_);
lean_ctor_set(v___x_2435_, 4, v_a_2431_);
v___x_2436_ = lean_unbox(v_a_2346_);
lean_dec(v_a_2346_);
lean_ctor_set_uint8(v___x_2435_, sizeof(void*)*5, v___x_2436_);
v___x_2437_ = lean_unbox(v_a_2368_);
lean_dec(v_a_2368_);
lean_ctor_set_uint8(v___x_2435_, sizeof(void*)*5 + 1, v___x_2437_);
v___x_2438_ = lean_unbox(v_a_2389_);
lean_dec(v_a_2389_);
lean_ctor_set_uint8(v___x_2435_, sizeof(void*)*5 + 2, v___x_2438_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 0, v___x_2435_);
v___x_2440_ = v___x_2433_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
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
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson(lean_object* v_00_u03b1_2443_, lean_object* v_inst_2444_, lean_object* v_json_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lean_instFromJsonBaseMessage_fromJson___redArg(v_inst_2444_, v_json_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage___redArg(lean_object* v_inst_2447_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_alloc_closure((void*)(l_Lean_instFromJsonBaseMessage_fromJson), 3, 2);
lean_closure_set(v___x_2448_, 0, lean_box(0));
lean_closure_set(v___x_2448_, 1, v_inst_2447_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage(lean_object* v_00_u03b1_2449_, lean_object* v_inst_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_alloc_closure((void*)(l_Lean_instFromJsonBaseMessage_fromJson), 3, 2);
lean_closure_set(v___x_2451_, 0, lean_box(0));
lean_closure_set(v___x_2451_, 1, v_inst_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(lean_object* v_x_2452_){
_start:
{
if (lean_obj_tag(v_x_2452_) == 0)
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_box(0);
return v___x_2453_;
}
else
{
lean_object* v_val_2454_; lean_object* v___x_2455_; 
v_val_2454_ = lean_ctor_get(v_x_2452_, 0);
lean_inc(v_val_2454_);
lean_dec_ref_known(v_x_2452_, 1);
v___x_2455_ = l_Lean_instToJsonPosition_toJson(v_val_2454_);
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(lean_object* v_a_2456_, lean_object* v_a_2457_){
_start:
{
if (lean_obj_tag(v_a_2456_) == 0)
{
lean_object* v___x_2458_; 
v___x_2458_ = lean_array_to_list(v_a_2457_);
return v___x_2458_;
}
else
{
lean_object* v_head_2459_; lean_object* v_tail_2460_; lean_object* v___x_2461_; 
v_head_2459_ = lean_ctor_get(v_a_2456_, 0);
lean_inc(v_head_2459_);
v_tail_2460_ = lean_ctor_get(v_a_2456_, 1);
lean_inc(v_tail_2460_);
lean_dec_ref_known(v_a_2456_, 2);
v___x_2461_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2457_, v_head_2459_);
v_a_2456_ = v_tail_2460_;
v_a_2457_ = v___x_2461_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonSerialMessage_toJson(lean_object* v_x_2464_){
_start:
{
lean_object* v_toBaseMessage_2465_; lean_object* v_kind_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2531_; 
v_toBaseMessage_2465_ = lean_ctor_get(v_x_2464_, 0);
v_kind_2466_ = lean_ctor_get(v_x_2464_, 1);
v_isSharedCheck_2531_ = !lean_is_exclusive(v_x_2464_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2468_ = v_x_2464_;
v_isShared_2469_ = v_isSharedCheck_2531_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_kind_2466_);
lean_inc(v_toBaseMessage_2465_);
lean_dec(v_x_2464_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2531_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v_fileName_2470_; lean_object* v_pos_2471_; lean_object* v_endPos_2472_; uint8_t v_keepFullRange_2473_; uint8_t v_severity_2474_; uint8_t v_isSilent_2475_; lean_object* v_caption_2476_; lean_object* v_data_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2481_; 
v_fileName_2470_ = lean_ctor_get(v_toBaseMessage_2465_, 0);
lean_inc_ref(v_fileName_2470_);
v_pos_2471_ = lean_ctor_get(v_toBaseMessage_2465_, 1);
lean_inc_ref(v_pos_2471_);
v_endPos_2472_ = lean_ctor_get(v_toBaseMessage_2465_, 2);
lean_inc(v_endPos_2472_);
v_keepFullRange_2473_ = lean_ctor_get_uint8(v_toBaseMessage_2465_, sizeof(void*)*5);
v_severity_2474_ = lean_ctor_get_uint8(v_toBaseMessage_2465_, sizeof(void*)*5 + 1);
v_isSilent_2475_ = lean_ctor_get_uint8(v_toBaseMessage_2465_, sizeof(void*)*5 + 2);
v_caption_2476_ = lean_ctor_get(v_toBaseMessage_2465_, 3);
lean_inc_ref(v_caption_2476_);
v_data_2477_ = lean_ctor_get(v_toBaseMessage_2465_, 4);
lean_inc(v_data_2477_);
lean_dec_ref(v_toBaseMessage_2465_);
v___x_2478_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_2479_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_fileName_2470_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 1, v___x_2479_);
lean_ctor_set(v___x_2468_, 0, v___x_2478_);
v___x_2481_ = v___x_2468_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2478_);
lean_ctor_set(v_reuseFailAlloc_2530_, 1, v___x_2479_);
v___x_2481_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; uint8_t v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2482_ = lean_box(0);
v___x_2483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_2485_ = l_Lean_instToJsonPosition_toJson(v_pos_2471_);
v___x_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2484_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
v___x_2487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2486_);
lean_ctor_set(v___x_2487_, 1, v___x_2482_);
v___x_2488_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_2489_ = l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(v_endPos_2472_);
v___x_2490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2488_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
lean_ctor_set(v___x_2491_, 1, v___x_2482_);
v___x_2492_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_2493_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2493_, 0, v_keepFullRange_2473_);
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2492_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
lean_ctor_set(v___x_2495_, 1, v___x_2482_);
v___x_2496_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_2497_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_2474_);
v___x_2498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2496_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
lean_ctor_set(v___x_2499_, 1, v___x_2482_);
v___x_2500_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_2501_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2501_, 0, v_isSilent_2475_);
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2500_);
lean_ctor_set(v___x_2502_, 1, v___x_2501_);
v___x_2503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
lean_ctor_set(v___x_2503_, 1, v___x_2482_);
v___x_2504_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_2505_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2505_, 0, v_caption_2476_);
v___x_2506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
lean_ctor_set(v___x_2507_, 1, v___x_2482_);
v___x_2508_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2509_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_data_2477_);
v___x_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2508_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
v___x_2511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
lean_ctor_set(v___x_2511_, 1, v___x_2482_);
v___x_2512_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_2513_ = 1;
v___x_2514_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2466_, v___x_2513_);
v___x_2515_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2514_);
v___x_2516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2512_);
lean_ctor_set(v___x_2516_, 1, v___x_2515_);
v___x_2517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
lean_ctor_set(v___x_2517_, 1, v___x_2482_);
v___x_2518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2517_);
lean_ctor_set(v___x_2518_, 1, v___x_2482_);
v___x_2519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2511_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2507_);
lean_ctor_set(v___x_2520_, 1, v___x_2519_);
v___x_2521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2503_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2499_);
lean_ctor_set(v___x_2522_, 1, v___x_2521_);
v___x_2523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2495_);
lean_ctor_set(v___x_2523_, 1, v___x_2522_);
v___x_2524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2491_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2487_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2483_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_2528_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(v___x_2526_, v___x_2527_);
v___x_2529_ = l_Lean_Json_mkObj(v___x_2528_);
lean_dec(v___x_2528_);
return v___x_2529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(lean_object* v_j_2534_, lean_object* v_k_2535_){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = l_Lean_Json_getObjValD(v_j_2534_, v_k_2535_);
v___x_2537_ = l_Lean_Json_getStr_x3f(v___x_2536_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0___boxed(lean_object* v_j_2538_, lean_object* v_k_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_j_2538_, v_k_2539_);
lean_dec_ref(v_k_2539_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(lean_object* v_j_2541_, lean_object* v_k_2542_){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = l_Lean_Json_getObjValD(v_j_2541_, v_k_2542_);
v___x_2544_ = l_Lean_instFromJsonPosition_fromJson(v___x_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1___boxed(lean_object* v_j_2545_, lean_object* v_k_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(v_j_2545_, v_k_2546_);
lean_dec_ref(v_k_2546_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(lean_object* v_j_2548_, lean_object* v_k_2549_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = l_Lean_Json_getObjValD(v_j_2548_, v_k_2549_);
v___x_2551_ = l_Lean_Json_getBool_x3f(v___x_2550_);
lean_dec(v___x_2550_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3___boxed(lean_object* v_j_2552_, lean_object* v_k_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_j_2552_, v_k_2553_);
lean_dec_ref(v_k_2553_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(lean_object* v_j_2555_, lean_object* v_k_2556_){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2557_ = l_Lean_Json_getObjValD(v_j_2555_, v_k_2556_);
v___x_2558_ = l_Lean_instFromJsonMessageSeverity_fromJson(v___x_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4___boxed(lean_object* v_j_2559_, lean_object* v_k_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(v_j_2559_, v_k_2560_);
lean_dec_ref(v_k_2560_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(lean_object* v_j_2562_, lean_object* v_k_2563_){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2564_ = l_Lean_Json_getObjValD(v_j_2562_, v_k_2563_);
v___x_2565_ = l_Lean_Name_fromJson_x3f(v___x_2564_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5___boxed(lean_object* v_j_2566_, lean_object* v_k_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(v_j_2566_, v_k_2567_);
lean_dec_ref(v_k_2567_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(lean_object* v_x_2571_){
_start:
{
if (lean_obj_tag(v_x_2571_) == 0)
{
lean_object* v___x_2572_; 
v___x_2572_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0));
return v___x_2572_;
}
else
{
lean_object* v___x_2573_; 
v___x_2573_ = l_Lean_instFromJsonPosition_fromJson(v_x_2571_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2573_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2573_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2590_; 
v_a_2582_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2584_ = v___x_2573_;
v_isShared_2585_ = v_isSharedCheck_2590_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2573_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2590_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_a_2582_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 0, v___x_2586_);
v___x_2588_ = v___x_2584_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
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
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(lean_object* v_j_2591_, lean_object* v_k_2592_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = l_Lean_Json_getObjValD(v_j_2591_, v_k_2592_);
v___x_2594_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(v___x_2593_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2___boxed(lean_object* v_j_2595_, lean_object* v_k_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(v_j_2595_, v_k_2596_);
lean_dec_ref(v_k_2596_);
return v_res_2597_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__2(void){
_start:
{
uint8_t v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2602_ = 1;
v___x_2603_ = ((lean_object*)(l_Lean_instFromJsonSerialMessage_fromJson___closed__1));
v___x_2604_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2603_, v___x_2602_);
return v___x_2604_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4));
v___x_2606_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__2, &l_Lean_instFromJsonSerialMessage_fromJson___closed__2_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__2);
v___x_2607_ = lean_string_append(v___x_2606_, v___x_2605_);
return v___x_2607_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__4(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7);
v___x_2609_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2610_ = lean_string_append(v___x_2609_, v___x_2608_);
return v___x_2610_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__5(void){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2611_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2612_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__4, &l_Lean_instFromJsonSerialMessage_fromJson___closed__4_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__4);
v___x_2613_ = lean_string_append(v___x_2612_, v___x_2611_);
return v___x_2613_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2614_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14);
v___x_2615_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2616_ = lean_string_append(v___x_2615_, v___x_2614_);
return v___x_2616_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2617_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2618_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__6, &l_Lean_instFromJsonSerialMessage_fromJson___closed__6_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__6);
v___x_2619_ = lean_string_append(v___x_2618_, v___x_2617_);
return v___x_2619_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__8(void){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18);
v___x_2621_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2622_ = lean_string_append(v___x_2621_, v___x_2620_);
return v___x_2622_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__9(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2623_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2624_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__8, &l_Lean_instFromJsonSerialMessage_fromJson___closed__8_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__8);
v___x_2625_ = lean_string_append(v___x_2624_, v___x_2623_);
return v___x_2625_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2626_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23);
v___x_2627_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2628_ = lean_string_append(v___x_2627_, v___x_2626_);
return v___x_2628_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__11(void){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2629_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2630_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__10, &l_Lean_instFromJsonSerialMessage_fromJson___closed__10_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__10);
v___x_2631_ = lean_string_append(v___x_2630_, v___x_2629_);
return v___x_2631_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2632_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27);
v___x_2633_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2634_ = lean_string_append(v___x_2633_, v___x_2632_);
return v___x_2634_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__13(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2635_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2636_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__12, &l_Lean_instFromJsonSerialMessage_fromJson___closed__12_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__12);
v___x_2637_ = lean_string_append(v___x_2636_, v___x_2635_);
return v___x_2637_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__14(void){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2638_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31);
v___x_2639_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2640_ = lean_string_append(v___x_2639_, v___x_2638_);
return v___x_2640_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__15(void){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2641_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2642_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__14, &l_Lean_instFromJsonSerialMessage_fromJson___closed__14_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__14);
v___x_2643_ = lean_string_append(v___x_2642_, v___x_2641_);
return v___x_2643_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__16(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2644_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35);
v___x_2645_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2646_ = lean_string_append(v___x_2645_, v___x_2644_);
return v___x_2646_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__17(void){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2647_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2648_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__16, &l_Lean_instFromJsonSerialMessage_fromJson___closed__16_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__16);
v___x_2649_ = lean_string_append(v___x_2648_, v___x_2647_);
return v___x_2649_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__18(void){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2650_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39);
v___x_2651_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2652_ = lean_string_append(v___x_2651_, v___x_2650_);
return v___x_2652_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__19(void){
_start:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2653_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2654_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__18, &l_Lean_instFromJsonSerialMessage_fromJson___closed__18_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__18);
v___x_2655_ = lean_string_append(v___x_2654_, v___x_2653_);
return v___x_2655_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__21(void){
_start:
{
uint8_t v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2658_ = 1;
v___x_2659_ = ((lean_object*)(l_Lean_instFromJsonSerialMessage_fromJson___closed__20));
v___x_2660_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2659_, v___x_2658_);
return v___x_2660_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__22(void){
_start:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2661_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__21, &l_Lean_instFromJsonSerialMessage_fromJson___closed__21_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__21);
v___x_2662_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2663_ = lean_string_append(v___x_2662_, v___x_2661_);
return v___x_2663_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__23(void){
_start:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2664_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2665_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__22, &l_Lean_instFromJsonSerialMessage_fromJson___closed__22_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__22);
v___x_2666_ = lean_string_append(v___x_2665_, v___x_2664_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object* v_json_2667_){
_start:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2668_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
lean_inc(v_json_2667_);
v___x_2669_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2667_, v___x_2668_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v_json_2667_);
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2672_ = v___x_2669_;
v_isShared_2673_ = v_isSharedCheck_2679_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2669_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2679_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2674_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__5, &l_Lean_instFromJsonSerialMessage_fromJson___closed__5_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__5);
v___x_2675_ = lean_string_append(v___x_2674_, v_a_2670_);
lean_dec(v_a_2670_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 0, v___x_2675_);
v___x_2677_ = v___x_2672_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
else
{
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec(v_json_2667_);
v_a_2680_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2669_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2669_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set_tag(v___x_2682_, 0);
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_a_2688_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2669_, 1);
v___x_2689_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
lean_inc(v_json_2667_);
v___x_2690_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(v_json_2667_, v___x_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2700_; 
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2700_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2700_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2698_; 
v___x_2695_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__7, &l_Lean_instFromJsonSerialMessage_fromJson___closed__7_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__7);
v___x_2696_ = lean_string_append(v___x_2695_, v_a_2691_);
lean_dec(v_a_2691_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2696_);
v___x_2698_ = v___x_2693_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
else
{
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2708_; 
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2701_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2703_ = v___x_2690_;
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2690_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2708_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
lean_ctor_set_tag(v___x_2703_, 0);
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_a_2709_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2690_, 1);
v___x_2710_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
lean_inc(v_json_2667_);
v___x_2711_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(v_json_2667_, v___x_2710_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2721_; 
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2714_ = v___x_2711_;
v_isShared_2715_ = v_isSharedCheck_2721_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2711_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2721_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2716_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__9, &l_Lean_instFromJsonSerialMessage_fromJson___closed__9_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__9);
v___x_2717_ = lean_string_append(v___x_2716_, v_a_2712_);
lean_dec(v_a_2712_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 0, v___x_2717_);
v___x_2719_ = v___x_2714_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
else
{
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2729_; 
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2722_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2724_ = v___x_2711_;
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_a_2722_);
lean_dec(v___x_2711_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2727_; 
if (v_isShared_2725_ == 0)
{
lean_ctor_set_tag(v___x_2724_, 0);
v___x_2727_ = v___x_2724_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_a_2722_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
v_a_2730_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___x_2711_, 1);
v___x_2731_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
lean_inc(v_json_2667_);
v___x_2732_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_json_2667_, v___x_2731_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2742_; 
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2742_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__11, &l_Lean_instFromJsonSerialMessage_fromJson___closed__11_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__11);
v___x_2738_ = lean_string_append(v___x_2737_, v_a_2733_);
lean_dec(v_a_2733_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2738_);
v___x_2740_ = v___x_2735_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
else
{
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2743_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2732_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2732_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set_tag(v___x_2745_, 0);
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v_a_2751_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2732_, 1);
v___x_2752_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
lean_inc(v_json_2667_);
v___x_2753_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(v_json_2667_, v___x_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2763_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2763_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v___x_2758_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__13, &l_Lean_instFromJsonSerialMessage_fromJson___closed__13_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__13);
v___x_2759_ = lean_string_append(v___x_2758_, v_a_2754_);
lean_dec(v_a_2754_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2759_);
v___x_2761_ = v___x_2756_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
else
{
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2764_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2753_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2753_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
lean_ctor_set_tag(v___x_2766_, 0);
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v_a_2772_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2772_);
lean_dec_ref_known(v___x_2753_, 1);
v___x_2773_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
lean_inc(v_json_2667_);
v___x_2774_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_json_2667_, v___x_2773_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2784_; 
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2777_ = v___x_2774_;
v_isShared_2778_ = v_isSharedCheck_2784_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2774_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2784_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2782_; 
v___x_2779_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__15, &l_Lean_instFromJsonSerialMessage_fromJson___closed__15_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__15);
v___x_2780_ = lean_string_append(v___x_2779_, v_a_2775_);
lean_dec(v_a_2775_);
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v___x_2780_);
v___x_2782_ = v___x_2777_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
else
{
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2785_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2774_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2774_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set_tag(v___x_2787_, 0);
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v_a_2793_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2774_, 1);
v___x_2794_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
lean_inc(v_json_2667_);
v___x_2795_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2667_, v___x_2794_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2805_; 
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2805_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2805_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2800_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__17, &l_Lean_instFromJsonSerialMessage_fromJson___closed__17_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__17);
v___x_2801_ = lean_string_append(v___x_2800_, v_a_2796_);
lean_dec(v_a_2796_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 0, v___x_2801_);
v___x_2803_ = v___x_2798_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
else
{
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2806_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2795_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2795_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
lean_ctor_set_tag(v___x_2808_, 0);
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v_a_2814_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2815_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
lean_inc(v_json_2667_);
v___x_2816_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2667_, v___x_2815_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2819_ = v___x_2816_;
v_isShared_2820_ = v_isSharedCheck_2826_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2826_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
v___x_2821_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__19, &l_Lean_instFromJsonSerialMessage_fromJson___closed__19_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__19);
v___x_2822_ = lean_string_append(v___x_2821_, v_a_2817_);
lean_dec(v_a_2817_);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2822_);
v___x_2824_ = v___x_2819_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
else
{
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
lean_dec(v_json_2667_);
v_a_2827_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2816_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2816_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
lean_ctor_set_tag(v___x_2829_, 0);
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
v_a_2835_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2816_, 1);
v___x_2836_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_2837_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(v_json_2667_, v___x_2836_);
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2847_; 
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
v_a_2838_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2840_ = v___x_2837_;
v_isShared_2841_ = v_isSharedCheck_2847_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2837_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2847_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2845_; 
v___x_2842_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__23, &l_Lean_instFromJsonSerialMessage_fromJson___closed__23_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__23);
v___x_2843_ = lean_string_append(v___x_2842_, v_a_2838_);
lean_dec(v_a_2838_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 0, v___x_2843_);
v___x_2845_ = v___x_2840_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2843_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
else
{
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec(v_a_2835_);
lean_dec(v_a_2814_);
lean_dec(v_a_2793_);
lean_dec(v_a_2772_);
lean_dec(v_a_2751_);
lean_dec(v_a_2730_);
lean_dec(v_a_2709_);
lean_dec(v_a_2688_);
v_a_2848_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2837_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2837_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set_tag(v___x_2850_, 0);
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2868_; 
v_a_2856_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2858_ = v___x_2837_;
v_isShared_2859_ = v_isSharedCheck_2868_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2837_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2868_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2860_; uint8_t v___x_2861_; uint8_t v___x_2862_; uint8_t v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
v___x_2860_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2860_, 0, v_a_2688_);
lean_ctor_set(v___x_2860_, 1, v_a_2709_);
lean_ctor_set(v___x_2860_, 2, v_a_2730_);
lean_ctor_set(v___x_2860_, 3, v_a_2814_);
lean_ctor_set(v___x_2860_, 4, v_a_2835_);
v___x_2861_ = lean_unbox(v_a_2751_);
lean_dec(v_a_2751_);
lean_ctor_set_uint8(v___x_2860_, sizeof(void*)*5, v___x_2861_);
v___x_2862_ = lean_unbox(v_a_2772_);
lean_dec(v_a_2772_);
lean_ctor_set_uint8(v___x_2860_, sizeof(void*)*5 + 1, v___x_2862_);
v___x_2863_ = lean_unbox(v_a_2793_);
lean_dec(v_a_2793_);
lean_ctor_set_uint8(v___x_2860_, sizeof(void*)*5 + 2, v___x_2863_);
v___x_2864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2860_);
lean_ctor_set(v___x_2864_, 1, v_a_2856_);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v___x_2864_);
v___x_2866_ = v___x_2858_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
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
LEAN_EXPORT lean_object* l_Lean_kindOfErrorName(lean_object* v_errorName_2873_){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = ((lean_object*)(l_Lean_errorNameSuffix___closed__0));
v___x_2875_ = l_Lean_Name_str___override(v_errorName_2873_, v___x_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagWithErrorName(lean_object* v_msg_2876_, lean_object* v_name_2877_){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = l_Lean_kindOfErrorName(v_name_2877_);
v___x_2879_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2878_);
lean_ctor_set(v___x_2879_, 1, v_msg_2876_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(lean_object* v_a_2881_){
_start:
{
switch(lean_obj_tag(v_a_2881_))
{
case 0:
{
return v_a_2881_;
}
case 1:
{
lean_object* v_pre_2882_; lean_object* v_str_2883_; lean_object* v_p_x27_2884_; uint8_t v___y_2886_; uint8_t v___x_2889_; 
v_pre_2882_ = lean_ctor_get(v_a_2881_, 0);
lean_inc(v_pre_2882_);
v_str_2883_ = lean_ctor_get(v_a_2881_, 1);
lean_inc_ref(v_str_2883_);
lean_dec_ref_known(v_a_2881_, 2);
v_p_x27_2884_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_pre_2882_);
v___x_2889_ = l_Lean_Name_isAnonymous(v_p_x27_2884_);
if (v___x_2889_ == 0)
{
v___y_2886_ = v___x_2889_;
goto v___jp_2885_;
}
else
{
lean_object* v___x_2890_; uint8_t v___x_2891_; 
v___x_2890_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0));
v___x_2891_ = lean_string_dec_eq(v_str_2883_, v___x_2890_);
v___y_2886_ = v___x_2891_;
goto v___jp_2885_;
}
v___jp_2885_:
{
if (v___y_2886_ == 0)
{
lean_object* v___x_2887_; 
v___x_2887_ = l_Lean_Name_str___override(v_p_x27_2884_, v_str_2883_);
return v___x_2887_;
}
else
{
lean_object* v___x_2888_; 
lean_dec(v_p_x27_2884_);
lean_dec_ref(v_str_2883_);
v___x_2888_ = lean_box(0);
return v___x_2888_;
}
}
}
default: 
{
lean_object* v_pre_2892_; lean_object* v_i_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v_pre_2892_ = lean_ctor_get(v_a_2881_, 0);
lean_inc(v_pre_2892_);
v_i_2893_ = lean_ctor_get(v_a_2881_, 1);
lean_inc(v_i_2893_);
lean_dec_ref_known(v_a_2881_, 2);
v___x_2894_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_pre_2892_);
v___x_2895_ = l_Lean_Name_num___override(v___x_2894_, v_i_2893_);
return v___x_2895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_stripNestedTags(lean_object* v_x_2896_){
_start:
{
switch(lean_obj_tag(v_x_2896_))
{
case 3:
{
lean_object* v_a_2897_; lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2906_; 
v_a_2897_ = lean_ctor_get(v_x_2896_, 0);
v_a_2898_ = lean_ctor_get(v_x_2896_, 1);
v_isSharedCheck_2906_ = !lean_is_exclusive(v_x_2896_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2900_ = v_x_2896_;
v_isShared_2901_ = v_isSharedCheck_2906_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_inc(v_a_2897_);
lean_dec(v_x_2896_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2906_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2902_ = l_Lean_MessageData_stripNestedTags(v_a_2898_);
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 1, v___x_2902_);
v___x_2904_ = v___x_2900_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_a_2897_);
lean_ctor_set(v_reuseFailAlloc_2905_, 1, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
case 4:
{
lean_object* v_a_2907_; lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2916_; 
v_a_2907_ = lean_ctor_get(v_x_2896_, 0);
v_a_2908_ = lean_ctor_get(v_x_2896_, 1);
v_isSharedCheck_2916_ = !lean_is_exclusive(v_x_2896_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2910_ = v_x_2896_;
v_isShared_2911_ = v_isSharedCheck_2916_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_inc(v_a_2907_);
lean_dec(v_x_2896_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2916_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2912_; lean_object* v___x_2914_; 
v___x_2912_ = l_Lean_MessageData_stripNestedTags(v_a_2908_);
if (v_isShared_2911_ == 0)
{
lean_ctor_set(v___x_2910_, 1, v___x_2912_);
v___x_2914_ = v___x_2910_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2907_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v___x_2912_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
case 8:
{
lean_object* v_a_2917_; lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2926_; 
v_a_2917_ = lean_ctor_get(v_x_2896_, 0);
v_a_2918_ = lean_ctor_get(v_x_2896_, 1);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_x_2896_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2920_ = v_x_2896_;
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_inc(v_a_2917_);
lean_dec(v_x_2896_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2922_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_a_2917_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2922_);
v___x_2924_ = v___x_2920_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v_a_2918_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
case 11:
{
lean_object* v_a_2927_; lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2936_; 
v_a_2927_ = lean_ctor_get(v_x_2896_, 0);
v_a_2928_ = lean_ctor_get(v_x_2896_, 1);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_x_2896_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2930_ = v_x_2896_;
v_isShared_2931_ = v_isSharedCheck_2936_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_inc(v_a_2927_);
lean_dec(v_x_2896_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2936_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2932_; lean_object* v___x_2934_; 
v___x_2932_ = l_Lean_MessageData_stripNestedTags(v_a_2928_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 1, v___x_2932_);
v___x_2934_ = v___x_2930_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2927_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v___x_2932_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
default: 
{
return v_x_2896_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f(lean_object* v_x_2937_){
_start:
{
if (lean_obj_tag(v_x_2937_) == 1)
{
lean_object* v_pre_2938_; lean_object* v_str_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; 
v_pre_2938_ = lean_ctor_get(v_x_2937_, 0);
v_str_2939_ = lean_ctor_get(v_x_2937_, 1);
v___x_2940_ = ((lean_object*)(l_Lean_errorNameSuffix___closed__0));
v___x_2941_ = lean_string_dec_eq(v_str_2939_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; 
v___x_2942_ = lean_box(0);
return v___x_2942_;
}
else
{
lean_object* v___x_2943_; 
lean_inc(v_pre_2938_);
v___x_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2943_, 0, v_pre_2938_);
return v___x_2943_;
}
}
else
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_box(0);
return v___x_2944_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f___boxed(lean_object* v_x_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lean_errorNameOfKind_x3f(v_x_2945_);
lean_dec(v_x_2945_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f(lean_object* v_msg_2947_){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = l_Lean_MessageData_kind(v_msg_2947_);
v___x_2949_ = l_Lean_errorNameOfKind_x3f(v___x_2948_);
lean_dec(v___x_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f___boxed(lean_object* v_msg_2950_){
_start:
{
lean_object* v_res_2951_; 
v_res_2951_ = l_Lean_MessageData_errorName_x3f(v_msg_2950_);
lean_dec_ref(v_msg_2950_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f(lean_object* v_msg_2952_){
_start:
{
lean_object* v_data_2953_; lean_object* v___x_2954_; 
v_data_2953_ = lean_ctor_get(v_msg_2952_, 4);
v___x_2954_ = l_Lean_MessageData_errorName_x3f(v_data_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f___boxed(lean_object* v_msg_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l_Lean_Message_errorName_x3f(v_msg_2955_);
lean_dec_ref(v_msg_2955_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toMessage(lean_object* v_msg_2957_){
_start:
{
lean_object* v_toBaseMessage_2958_; lean_object* v_fileName_2959_; lean_object* v_pos_2960_; lean_object* v_endPos_2961_; uint8_t v_keepFullRange_2962_; uint8_t v_severity_2963_; uint8_t v_isSilent_2964_; lean_object* v_caption_2965_; lean_object* v_data_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2975_; 
v_toBaseMessage_2958_ = lean_ctor_get(v_msg_2957_, 0);
lean_inc_ref(v_toBaseMessage_2958_);
lean_dec_ref(v_msg_2957_);
v_fileName_2959_ = lean_ctor_get(v_toBaseMessage_2958_, 0);
v_pos_2960_ = lean_ctor_get(v_toBaseMessage_2958_, 1);
v_endPos_2961_ = lean_ctor_get(v_toBaseMessage_2958_, 2);
v_keepFullRange_2962_ = lean_ctor_get_uint8(v_toBaseMessage_2958_, sizeof(void*)*5);
v_severity_2963_ = lean_ctor_get_uint8(v_toBaseMessage_2958_, sizeof(void*)*5 + 1);
v_isSilent_2964_ = lean_ctor_get_uint8(v_toBaseMessage_2958_, sizeof(void*)*5 + 2);
v_caption_2965_ = lean_ctor_get(v_toBaseMessage_2958_, 3);
v_data_2966_ = lean_ctor_get(v_toBaseMessage_2958_, 4);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_toBaseMessage_2958_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2968_ = v_toBaseMessage_2958_;
v_isShared_2969_ = v_isSharedCheck_2975_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_data_2966_);
lean_inc(v_caption_2965_);
lean_inc(v_endPos_2961_);
lean_inc(v_pos_2960_);
lean_inc(v_fileName_2959_);
lean_dec(v_toBaseMessage_2958_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2975_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2970_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2970_, 0, v_data_2966_);
v___x_2971_ = l_Lean_MessageData_ofFormat(v___x_2970_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 4, v___x_2971_);
v___x_2973_ = v___x_2968_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_fileName_2959_);
lean_ctor_set(v_reuseFailAlloc_2974_, 1, v_pos_2960_);
lean_ctor_set(v_reuseFailAlloc_2974_, 2, v_endPos_2961_);
lean_ctor_set(v_reuseFailAlloc_2974_, 3, v_caption_2965_);
lean_ctor_set(v_reuseFailAlloc_2974_, 4, v___x_2971_);
lean_ctor_set_uint8(v_reuseFailAlloc_2974_, sizeof(void*)*5, v_keepFullRange_2962_);
lean_ctor_set_uint8(v_reuseFailAlloc_2974_, sizeof(void*)*5 + 1, v_severity_2963_);
lean_ctor_set_uint8(v_reuseFailAlloc_2974_, sizeof(void*)*5 + 2, v_isSilent_2964_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString(lean_object* v_msg_2981_, uint8_t v_includeEndPos_2982_){
_start:
{
lean_object* v___y_2984_; lean_object* v___y_2988_; uint32_t v___y_2989_; lean_object* v_str_2993_; lean_object* v_toBaseMessage_3005_; lean_object* v_kind_3006_; lean_object* v_fileName_3007_; lean_object* v_pos_3008_; lean_object* v_endPos_3009_; uint8_t v_severity_3010_; lean_object* v_caption_3011_; lean_object* v_data_3012_; lean_object* v___y_3014_; lean_object* v_str_3015_; lean_object* v___y_3023_; 
v_toBaseMessage_3005_ = lean_ctor_get(v_msg_2981_, 0);
lean_inc_ref(v_toBaseMessage_3005_);
v_kind_3006_ = lean_ctor_get(v_msg_2981_, 1);
lean_inc(v_kind_3006_);
lean_dec_ref(v_msg_2981_);
v_fileName_3007_ = lean_ctor_get(v_toBaseMessage_3005_, 0);
lean_inc_ref(v_fileName_3007_);
v_pos_3008_ = lean_ctor_get(v_toBaseMessage_3005_, 1);
lean_inc_ref(v_pos_3008_);
v_endPos_3009_ = lean_ctor_get(v_toBaseMessage_3005_, 2);
lean_inc(v_endPos_3009_);
v_severity_3010_ = lean_ctor_get_uint8(v_toBaseMessage_3005_, sizeof(void*)*5 + 1);
v_caption_3011_ = lean_ctor_get(v_toBaseMessage_3005_, 3);
lean_inc_ref(v_caption_3011_);
v_data_3012_ = lean_ctor_get(v_toBaseMessage_3005_, 4);
lean_inc(v_data_3012_);
lean_dec_ref(v_toBaseMessage_3005_);
if (v_includeEndPos_2982_ == 0)
{
lean_object* v___x_3029_; 
lean_dec(v_endPos_3009_);
v___x_3029_ = lean_box(0);
v___y_3023_ = v___x_3029_;
goto v___jp_3022_;
}
else
{
v___y_3023_ = v_endPos_3009_;
goto v___jp_3022_;
}
v___jp_2983_:
{
lean_object* v___x_2985_; lean_object* v_str_2986_; 
v___x_2985_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__1));
v_str_2986_ = lean_string_append(v___y_2984_, v___x_2985_);
return v_str_2986_;
}
v___jp_2987_:
{
uint32_t v___x_2990_; uint8_t v___x_2991_; 
v___x_2990_ = 10;
v___x_2991_ = lean_uint32_dec_eq(v___y_2989_, v___x_2990_);
if (v___x_2991_ == 0)
{
v___y_2984_ = v___y_2988_;
goto v___jp_2983_;
}
else
{
return v___y_2988_;
}
}
v___jp_2992_:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; uint8_t v___x_2996_; 
v___x_2994_ = lean_string_utf8_byte_size(v_str_2993_);
v___x_2995_ = lean_unsigned_to_nat(0u);
v___x_2996_ = lean_nat_dec_eq(v___x_2994_, v___x_2995_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
lean_inc_ref(v_str_2993_);
v___x_2997_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2997_, 0, v_str_2993_);
lean_ctor_set(v___x_2997_, 1, v___x_2995_);
lean_ctor_set(v___x_2997_, 2, v___x_2994_);
v___x_2998_ = l_String_Slice_Pos_prev_x3f(v___x_2997_, v___x_2994_);
if (lean_obj_tag(v___x_2998_) == 0)
{
uint32_t v___x_2999_; 
lean_dec_ref_known(v___x_2997_, 3);
v___x_2999_ = 65;
v___y_2988_ = v_str_2993_;
v___y_2989_ = v___x_2999_;
goto v___jp_2987_;
}
else
{
lean_object* v_val_3000_; lean_object* v___x_3001_; 
v_val_3000_ = lean_ctor_get(v___x_2998_, 0);
lean_inc(v_val_3000_);
lean_dec_ref_known(v___x_2998_, 1);
v___x_3001_ = l_String_Slice_Pos_get_x3f(v___x_2997_, v_val_3000_);
lean_dec(v_val_3000_);
lean_dec_ref_known(v___x_2997_, 3);
if (lean_obj_tag(v___x_3001_) == 0)
{
uint32_t v___x_3002_; 
v___x_3002_ = 65;
v___y_2988_ = v_str_2993_;
v___y_2989_ = v___x_3002_;
goto v___jp_2987_;
}
else
{
lean_object* v_val_3003_; uint32_t v___x_3004_; 
v_val_3003_ = lean_ctor_get(v___x_3001_, 0);
lean_inc(v_val_3003_);
lean_dec_ref_known(v___x_3001_, 1);
v___x_3004_ = lean_unbox_uint32(v_val_3003_);
lean_dec(v_val_3003_);
v___y_2988_ = v_str_2993_;
v___y_2989_ = v___x_3004_;
goto v___jp_2987_;
}
}
}
else
{
v___y_2984_ = v_str_2993_;
goto v___jp_2983_;
}
}
v___jp_3013_:
{
switch(v_severity_3010_)
{
case 0:
{
lean_dec(v___y_3014_);
lean_dec_ref(v_pos_3008_);
lean_dec_ref(v_fileName_3007_);
lean_dec(v_kind_3006_);
v_str_2993_ = v_str_3015_;
goto v___jp_2992_;
}
case 1:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v_str_3018_; 
v___x_3016_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__0));
v___x_3017_ = l_Lean_errorNameOfKind_x3f(v_kind_3006_);
lean_dec(v_kind_3006_);
v_str_3018_ = l_Lean_mkErrorStringWithPos(v_fileName_3007_, v_pos_3008_, v_str_3015_, v___y_3014_, v___x_3016_, v___x_3017_);
lean_dec_ref(v_str_3015_);
v_str_2993_ = v_str_3018_;
goto v___jp_2992_;
}
default: 
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v_str_3021_; 
v___x_3019_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__1));
v___x_3020_ = l_Lean_errorNameOfKind_x3f(v_kind_3006_);
lean_dec(v_kind_3006_);
v_str_3021_ = l_Lean_mkErrorStringWithPos(v_fileName_3007_, v_pos_3008_, v_str_3015_, v___y_3014_, v___x_3019_, v___x_3020_);
lean_dec_ref(v_str_3015_);
v_str_2993_ = v_str_3021_;
goto v___jp_2992_;
}
}
}
v___jp_3022_:
{
lean_object* v___x_3024_; uint8_t v___x_3025_; 
v___x_3024_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_3025_ = lean_string_dec_eq(v_caption_3011_, v___x_3024_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v_str_3028_; 
v___x_3026_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__2));
v___x_3027_ = lean_string_append(v_caption_3011_, v___x_3026_);
v_str_3028_ = lean_string_append(v___x_3027_, v_data_3012_);
lean_dec(v_data_3012_);
v___y_3014_ = v___y_3023_;
v_str_3015_ = v_str_3028_;
goto v___jp_3013_;
}
else
{
lean_dec_ref(v_caption_3011_);
v___y_3014_ = v___y_3023_;
v_str_3015_ = v_data_3012_;
goto v___jp_3013_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString___boxed(lean_object* v_msg_3030_, lean_object* v_includeEndPos_3031_){
_start:
{
uint8_t v_includeEndPos_boxed_3032_; lean_object* v_res_3033_; 
v_includeEndPos_boxed_3032_ = lean_unbox(v_includeEndPos_3031_);
v_res_3033_ = l_Lean_SerialMessage_toString(v_msg_3030_, v_includeEndPos_boxed_3032_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_instToString___lam__0(lean_object* v_msg_3034_){
_start:
{
uint8_t v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = 0;
v___x_3036_ = l_Lean_SerialMessage_toString(v_msg_3034_, v___x_3035_);
return v___x_3036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_kind(lean_object* v_msg_3039_){
_start:
{
lean_object* v_data_3040_; lean_object* v___x_3041_; 
v_data_3040_ = lean_ctor_get(v_msg_3039_, 4);
v___x_3041_ = l_Lean_MessageData_kind(v_data_3040_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_kind___boxed(lean_object* v_msg_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Lean_Message_kind(v_msg_3042_);
lean_dec_ref(v_msg_3042_);
return v_res_3043_;
}
}
LEAN_EXPORT uint8_t l_Lean_Message_isTrace(lean_object* v_msg_3044_){
_start:
{
lean_object* v_data_3045_; uint8_t v___x_3046_; 
v_data_3045_ = lean_ctor_get(v_msg_3044_, 4);
v___x_3046_ = l_Lean_MessageData_isTrace(v_data_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_isTrace___boxed(lean_object* v_msg_3047_){
_start:
{
uint8_t v_res_3048_; lean_object* v_r_3049_; 
v_res_3048_ = l_Lean_Message_isTrace(v_msg_3047_);
lean_dec_ref(v_msg_3047_);
v_r_3049_ = lean_box(v_res_3048_);
return v_r_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_serialize(lean_object* v_msg_3050_){
_start:
{
lean_object* v_fileName_3052_; lean_object* v_pos_3053_; lean_object* v_endPos_3054_; uint8_t v_keepFullRange_3055_; uint8_t v_severity_3056_; uint8_t v_isSilent_3057_; lean_object* v_caption_3058_; lean_object* v_data_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3069_; 
v_fileName_3052_ = lean_ctor_get(v_msg_3050_, 0);
v_pos_3053_ = lean_ctor_get(v_msg_3050_, 1);
v_endPos_3054_ = lean_ctor_get(v_msg_3050_, 2);
v_keepFullRange_3055_ = lean_ctor_get_uint8(v_msg_3050_, sizeof(void*)*5);
v_severity_3056_ = lean_ctor_get_uint8(v_msg_3050_, sizeof(void*)*5 + 1);
v_isSilent_3057_ = lean_ctor_get_uint8(v_msg_3050_, sizeof(void*)*5 + 2);
v_caption_3058_ = lean_ctor_get(v_msg_3050_, 3);
v_data_3059_ = lean_ctor_get(v_msg_3050_, 4);
v_isSharedCheck_3069_ = !lean_is_exclusive(v_msg_3050_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3061_ = v_msg_3050_;
v_isShared_3062_ = v_isSharedCheck_3069_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_data_3059_);
lean_inc(v_caption_3058_);
lean_inc(v_endPos_3054_);
lean_inc(v_pos_3053_);
lean_inc(v_fileName_3052_);
lean_dec(v_msg_3050_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3069_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3063_; lean_object* v___x_3065_; 
lean_inc(v_data_3059_);
v___x_3063_ = l_Lean_MessageData_toString(v_data_3059_);
if (v_isShared_3062_ == 0)
{
lean_ctor_set(v___x_3061_, 4, v___x_3063_);
v___x_3065_ = v___x_3061_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_fileName_3052_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v_pos_3053_);
lean_ctor_set(v_reuseFailAlloc_3068_, 2, v_endPos_3054_);
lean_ctor_set(v_reuseFailAlloc_3068_, 3, v_caption_3058_);
lean_ctor_set(v_reuseFailAlloc_3068_, 4, v___x_3063_);
lean_ctor_set_uint8(v_reuseFailAlloc_3068_, sizeof(void*)*5, v_keepFullRange_3055_);
lean_ctor_set_uint8(v_reuseFailAlloc_3068_, sizeof(void*)*5 + 1, v_severity_3056_);
lean_ctor_set_uint8(v_reuseFailAlloc_3068_, sizeof(void*)*5 + 2, v_isSilent_3057_);
v___x_3065_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = l_Lean_MessageData_kind(v_data_3059_);
lean_dec(v_data_3059_);
v___x_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3065_);
lean_ctor_set(v___x_3067_, 1, v___x_3066_);
return v___x_3067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Message_serialize___boxed(lean_object* v_msg_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_Message_serialize(v_msg_3070_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toString(lean_object* v_msg_3073_, uint8_t v_includeEndPos_3074_){
_start:
{
lean_object* v_fileName_3076_; lean_object* v_pos_3077_; lean_object* v_endPos_3078_; uint8_t v_severity_3079_; lean_object* v_caption_3080_; lean_object* v_data_3081_; lean_object* v___x_3082_; lean_object* v___y_3084_; lean_object* v___y_3088_; uint32_t v___y_3089_; lean_object* v_str_3093_; lean_object* v___x_3105_; lean_object* v___y_3107_; lean_object* v_str_3108_; lean_object* v___y_3116_; 
v_fileName_3076_ = lean_ctor_get(v_msg_3073_, 0);
lean_inc_ref(v_fileName_3076_);
v_pos_3077_ = lean_ctor_get(v_msg_3073_, 1);
lean_inc_ref(v_pos_3077_);
v_endPos_3078_ = lean_ctor_get(v_msg_3073_, 2);
lean_inc(v_endPos_3078_);
v_severity_3079_ = lean_ctor_get_uint8(v_msg_3073_, sizeof(void*)*5 + 1);
v_caption_3080_ = lean_ctor_get(v_msg_3073_, 3);
lean_inc_ref(v_caption_3080_);
v_data_3081_ = lean_ctor_get(v_msg_3073_, 4);
lean_inc_n(v_data_3081_, 2);
lean_dec_ref(v_msg_3073_);
v___x_3082_ = l_Lean_MessageData_toString(v_data_3081_);
v___x_3105_ = l_Lean_MessageData_kind(v_data_3081_);
lean_dec(v_data_3081_);
if (v_includeEndPos_3074_ == 0)
{
lean_object* v___x_3122_; 
lean_dec(v_endPos_3078_);
v___x_3122_ = lean_box(0);
v___y_3116_ = v___x_3122_;
goto v___jp_3115_;
}
else
{
v___y_3116_ = v_endPos_3078_;
goto v___jp_3115_;
}
v___jp_3083_:
{
lean_object* v___x_3085_; lean_object* v_str_3086_; 
v___x_3085_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__1));
v_str_3086_ = lean_string_append(v___y_3084_, v___x_3085_);
return v_str_3086_;
}
v___jp_3087_:
{
uint32_t v___x_3090_; uint8_t v___x_3091_; 
v___x_3090_ = 10;
v___x_3091_ = lean_uint32_dec_eq(v___y_3089_, v___x_3090_);
if (v___x_3091_ == 0)
{
v___y_3084_ = v___y_3088_;
goto v___jp_3083_;
}
else
{
return v___y_3088_;
}
}
v___jp_3092_:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; uint8_t v___x_3096_; 
v___x_3094_ = lean_string_utf8_byte_size(v_str_3093_);
v___x_3095_ = lean_unsigned_to_nat(0u);
v___x_3096_ = lean_nat_dec_eq(v___x_3094_, v___x_3095_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_inc_ref(v_str_3093_);
v___x_3097_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3097_, 0, v_str_3093_);
lean_ctor_set(v___x_3097_, 1, v___x_3095_);
lean_ctor_set(v___x_3097_, 2, v___x_3094_);
v___x_3098_ = l_String_Slice_Pos_prev_x3f(v___x_3097_, v___x_3094_);
if (lean_obj_tag(v___x_3098_) == 0)
{
uint32_t v___x_3099_; 
lean_dec_ref_known(v___x_3097_, 3);
v___x_3099_ = 65;
v___y_3088_ = v_str_3093_;
v___y_3089_ = v___x_3099_;
goto v___jp_3087_;
}
else
{
lean_object* v_val_3100_; lean_object* v___x_3101_; 
v_val_3100_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_val_3100_);
lean_dec_ref_known(v___x_3098_, 1);
v___x_3101_ = l_String_Slice_Pos_get_x3f(v___x_3097_, v_val_3100_);
lean_dec(v_val_3100_);
lean_dec_ref_known(v___x_3097_, 3);
if (lean_obj_tag(v___x_3101_) == 0)
{
uint32_t v___x_3102_; 
v___x_3102_ = 65;
v___y_3088_ = v_str_3093_;
v___y_3089_ = v___x_3102_;
goto v___jp_3087_;
}
else
{
lean_object* v_val_3103_; uint32_t v___x_3104_; 
v_val_3103_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_val_3103_);
lean_dec_ref_known(v___x_3101_, 1);
v___x_3104_ = lean_unbox_uint32(v_val_3103_);
lean_dec(v_val_3103_);
v___y_3088_ = v_str_3093_;
v___y_3089_ = v___x_3104_;
goto v___jp_3087_;
}
}
}
else
{
v___y_3084_ = v_str_3093_;
goto v___jp_3083_;
}
}
v___jp_3106_:
{
switch(v_severity_3079_)
{
case 0:
{
lean_dec(v___y_3107_);
lean_dec(v___x_3105_);
lean_dec_ref(v_pos_3077_);
lean_dec_ref(v_fileName_3076_);
v_str_3093_ = v_str_3108_;
goto v___jp_3092_;
}
case 1:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v_str_3111_; 
v___x_3109_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__0));
v___x_3110_ = l_Lean_errorNameOfKind_x3f(v___x_3105_);
lean_dec(v___x_3105_);
v_str_3111_ = l_Lean_mkErrorStringWithPos(v_fileName_3076_, v_pos_3077_, v_str_3108_, v___y_3107_, v___x_3109_, v___x_3110_);
lean_dec_ref(v_str_3108_);
v_str_3093_ = v_str_3111_;
goto v___jp_3092_;
}
default: 
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v_str_3114_; 
v___x_3112_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__1));
v___x_3113_ = l_Lean_errorNameOfKind_x3f(v___x_3105_);
lean_dec(v___x_3105_);
v_str_3114_ = l_Lean_mkErrorStringWithPos(v_fileName_3076_, v_pos_3077_, v_str_3108_, v___y_3107_, v___x_3112_, v___x_3113_);
lean_dec_ref(v_str_3108_);
v_str_3093_ = v_str_3114_;
goto v___jp_3092_;
}
}
}
v___jp_3115_:
{
lean_object* v___x_3117_; uint8_t v___x_3118_; 
v___x_3117_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_3118_ = lean_string_dec_eq(v_caption_3080_, v___x_3117_);
if (v___x_3118_ == 0)
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v_str_3121_; 
v___x_3119_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__2));
v___x_3120_ = lean_string_append(v_caption_3080_, v___x_3119_);
v_str_3121_ = lean_string_append(v___x_3120_, v___x_3082_);
lean_dec_ref(v___x_3082_);
v___y_3107_ = v___y_3116_;
v_str_3108_ = v_str_3121_;
goto v___jp_3106_;
}
else
{
lean_dec_ref(v_caption_3080_);
v___y_3107_ = v___y_3116_;
v_str_3108_ = v___x_3082_;
goto v___jp_3106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toString___boxed(lean_object* v_msg_3123_, lean_object* v_includeEndPos_3124_, lean_object* v___y_3125_){
_start:
{
uint8_t v_includeEndPos_boxed_3126_; lean_object* v_res_3127_; 
v_includeEndPos_boxed_3126_ = lean_unbox(v_includeEndPos_3124_);
v_res_3127_ = l_Lean_Message_toString(v_msg_3123_, v_includeEndPos_boxed_3126_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toJson(lean_object* v_msg_3128_){
_start:
{
lean_object* v_fileName_3130_; lean_object* v_pos_3131_; lean_object* v_endPos_3132_; uint8_t v_keepFullRange_3133_; uint8_t v_severity_3134_; uint8_t v_isSilent_3135_; lean_object* v_caption_3136_; lean_object* v_data_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; uint8_t v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v_fileName_3130_ = lean_ctor_get(v_msg_3128_, 0);
lean_inc_ref(v_fileName_3130_);
v_pos_3131_ = lean_ctor_get(v_msg_3128_, 1);
lean_inc_ref(v_pos_3131_);
v_endPos_3132_ = lean_ctor_get(v_msg_3128_, 2);
lean_inc(v_endPos_3132_);
v_keepFullRange_3133_ = lean_ctor_get_uint8(v_msg_3128_, sizeof(void*)*5);
v_severity_3134_ = lean_ctor_get_uint8(v_msg_3128_, sizeof(void*)*5 + 1);
v_isSilent_3135_ = lean_ctor_get_uint8(v_msg_3128_, sizeof(void*)*5 + 2);
v_caption_3136_ = lean_ctor_get(v_msg_3128_, 3);
lean_inc_ref(v_caption_3136_);
v_data_3137_ = lean_ctor_get(v_msg_3128_, 4);
lean_inc_n(v_data_3137_, 2);
lean_dec_ref(v_msg_3128_);
v___x_3138_ = l_Lean_MessageData_toString(v_data_3137_);
v___x_3139_ = l_Lean_MessageData_kind(v_data_3137_);
lean_dec(v_data_3137_);
v___x_3140_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_3141_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3141_, 0, v_fileName_3130_);
v___x_3142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3140_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = lean_box(0);
v___x_3144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3142_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_3146_ = l_Lean_instToJsonPosition_toJson(v_pos_3131_);
v___x_3147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3145_);
lean_ctor_set(v___x_3147_, 1, v___x_3146_);
v___x_3148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
lean_ctor_set(v___x_3148_, 1, v___x_3143_);
v___x_3149_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_3150_ = l_Lean_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(v_endPos_3132_);
v___x_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3149_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
lean_ctor_set(v___x_3152_, 1, v___x_3143_);
v___x_3153_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_3154_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3154_, 0, v_keepFullRange_3133_);
v___x_3155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3153_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3155_);
lean_ctor_set(v___x_3156_, 1, v___x_3143_);
v___x_3157_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_3158_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_3134_);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3157_);
lean_ctor_set(v___x_3159_, 1, v___x_3158_);
v___x_3160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3159_);
lean_ctor_set(v___x_3160_, 1, v___x_3143_);
v___x_3161_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_3162_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3162_, 0, v_isSilent_3135_);
v___x_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3161_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
lean_ctor_set(v___x_3164_, 1, v___x_3143_);
v___x_3165_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_3166_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3166_, 0, v_caption_3136_);
v___x_3167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
lean_ctor_set(v___x_3168_, 1, v___x_3143_);
v___x_3169_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_3170_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3138_);
v___x_3171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3169_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
v___x_3172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
lean_ctor_set(v___x_3172_, 1, v___x_3143_);
v___x_3173_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_3174_ = 1;
v___x_3175_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3139_, v___x_3174_);
v___x_3176_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
v___x_3177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3173_);
lean_ctor_set(v___x_3177_, 1, v___x_3176_);
v___x_3178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v___x_3143_);
v___x_3179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
lean_ctor_set(v___x_3179_, 1, v___x_3143_);
v___x_3180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3172_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3168_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3164_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3160_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
v___x_3184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3156_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3152_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
v___x_3186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3148_);
lean_ctor_set(v___x_3186_, 1, v___x_3185_);
v___x_3187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3144_);
lean_ctor_set(v___x_3187_, 1, v___x_3186_);
v___x_3188_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_3189_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(v___x_3187_, v___x_3188_);
v___x_3190_ = l_Lean_Json_mkObj(v___x_3189_);
lean_dec(v___x_3189_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toJson___boxed(lean_object* v_msg_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_Lean_Message_toJson(v_msg_3191_);
return v_res_3193_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__0(void){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3194_ = lean_unsigned_to_nat(32u);
v___x_3195_ = lean_mk_empty_array_with_capacity(v___x_3194_);
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
return v___x_3196_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__1(void){
_start:
{
size_t v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3197_ = ((size_t)5ULL);
v___x_3198_ = lean_unsigned_to_nat(0u);
v___x_3199_ = lean_unsigned_to_nat(32u);
v___x_3200_ = lean_mk_empty_array_with_capacity(v___x_3199_);
v___x_3201_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__0, &l_Lean_instInhabitedMessageLog_default___closed__0_once, _init_l_Lean_instInhabitedMessageLog_default___closed__0);
v___x_3202_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
lean_ctor_set(v___x_3202_, 1, v___x_3200_);
lean_ctor_set(v___x_3202_, 2, v___x_3198_);
lean_ctor_set(v___x_3202_, 3, v___x_3198_);
lean_ctor_set_usize(v___x_3202_, 4, v___x_3197_);
return v___x_3202_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__2(void){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3203_ = l_Lean_NameSet_empty;
v___x_3204_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v___x_3205_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3204_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
lean_ctor_set(v___x_3205_, 2, v___x_3203_);
return v___x_3205_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default(void){
_start:
{
lean_object* v___x_3206_; 
v___x_3206_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__2, &l_Lean_instInhabitedMessageLog_default___closed__2_once, _init_l_Lean_instInhabitedMessageLog_default___closed__2);
return v___x_3206_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog(void){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l_Lean_instInhabitedMessageLog_default;
return v___x_3207_;
}
}
static lean_object* _init_l_Lean_MessageLog_empty(void){
_start:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3208_ = lean_unsigned_to_nat(32u);
v___x_3209_ = lean_mk_empty_array_with_capacity(v___x_3208_);
lean_dec_ref(v___x_3209_);
v___x_3210_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__2, &l_Lean_instInhabitedMessageLog_default___closed__2_once, _init_l_Lean_instInhabitedMessageLog_default___closed__2);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs(lean_object* v_self_3211_){
_start:
{
lean_object* v_unreported_3212_; 
v_unreported_3212_ = lean_ctor_get(v_self_3211_, 1);
lean_inc_ref(v_unreported_3212_);
return v_unreported_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs___boxed(lean_object* v_self_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Lean_MessageLog_msgs(v_self_3213_);
lean_dec_ref(v_self_3213_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object* v_x_3215_){
_start:
{
lean_object* v_reported_3216_; lean_object* v_unreported_3217_; lean_object* v___x_3218_; 
v_reported_3216_ = lean_ctor_get(v_x_3215_, 0);
lean_inc_ref(v_reported_3216_);
v_unreported_3217_ = lean_ctor_get(v_x_3215_, 1);
lean_inc_ref(v_unreported_3217_);
lean_dec_ref(v_x_3215_);
v___x_3218_ = l_Lean_PersistentArray_append___redArg(v_reported_3216_, v_unreported_3217_);
lean_dec_ref(v_unreported_3217_);
return v___x_3218_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasUnreported(lean_object* v_log_3219_){
_start:
{
lean_object* v_unreported_3220_; uint8_t v___x_3221_; 
v_unreported_3220_ = lean_ctor_get(v_log_3219_, 1);
v___x_3221_ = l_Lean_PersistentArray_isEmpty___redArg(v_unreported_3220_);
if (v___x_3221_ == 0)
{
uint8_t v___x_3222_; 
v___x_3222_ = 1;
return v___x_3222_;
}
else
{
uint8_t v___x_3223_; 
v___x_3223_ = 0;
return v___x_3223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasUnreported___boxed(lean_object* v_log_3224_){
_start:
{
uint8_t v_res_3225_; lean_object* v_r_3226_; 
v_res_3225_ = l_Lean_MessageLog_hasUnreported(v_log_3224_);
lean_dec_ref(v_log_3224_);
v_r_3226_ = lean_box(v_res_3225_);
return v_r_3226_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_add(lean_object* v_msg_3227_, lean_object* v_log_3228_){
_start:
{
lean_object* v_reported_3229_; lean_object* v_unreported_3230_; lean_object* v_loggedKinds_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3239_; 
v_reported_3229_ = lean_ctor_get(v_log_3228_, 0);
v_unreported_3230_ = lean_ctor_get(v_log_3228_, 1);
v_loggedKinds_3231_ = lean_ctor_get(v_log_3228_, 2);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_log_3228_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3233_ = v_log_3228_;
v_isShared_3234_ = v_isSharedCheck_3239_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_loggedKinds_3231_);
lean_inc(v_unreported_3230_);
lean_inc(v_reported_3229_);
lean_dec(v_log_3228_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3239_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3235_; lean_object* v___x_3237_; 
v___x_3235_ = l_Lean_PersistentArray_push___redArg(v_unreported_3230_, v_msg_3227_);
if (v_isShared_3234_ == 0)
{
lean_ctor_set(v___x_3233_, 1, v___x_3235_);
v___x_3237_ = v___x_3233_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_reported_3229_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v___x_3235_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_loggedKinds_3231_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_append(lean_object* v_l_u2081_3240_, lean_object* v_l_u2082_3241_){
_start:
{
lean_object* v_reported_3242_; lean_object* v_unreported_3243_; lean_object* v_loggedKinds_3244_; lean_object* v_reported_3245_; lean_object* v_unreported_3246_; lean_object* v_loggedKinds_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3257_; 
v_reported_3242_ = lean_ctor_get(v_l_u2081_3240_, 0);
lean_inc_ref(v_reported_3242_);
v_unreported_3243_ = lean_ctor_get(v_l_u2081_3240_, 1);
lean_inc_ref(v_unreported_3243_);
v_loggedKinds_3244_ = lean_ctor_get(v_l_u2081_3240_, 2);
lean_inc(v_loggedKinds_3244_);
lean_dec_ref(v_l_u2081_3240_);
v_reported_3245_ = lean_ctor_get(v_l_u2082_3241_, 0);
v_unreported_3246_ = lean_ctor_get(v_l_u2082_3241_, 1);
v_loggedKinds_3247_ = lean_ctor_get(v_l_u2082_3241_, 2);
v_isSharedCheck_3257_ = !lean_is_exclusive(v_l_u2082_3241_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3249_ = v_l_u2082_3241_;
v_isShared_3250_ = v_isSharedCheck_3257_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_loggedKinds_3247_);
lean_inc(v_unreported_3246_);
lean_inc(v_reported_3245_);
lean_dec(v_l_u2082_3241_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3257_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3255_; 
v___x_3251_ = l_Lean_PersistentArray_append___redArg(v_reported_3242_, v_reported_3245_);
lean_dec_ref(v_reported_3245_);
v___x_3252_ = l_Lean_PersistentArray_append___redArg(v_unreported_3243_, v_unreported_3246_);
lean_dec_ref(v_unreported_3246_);
v___x_3253_ = l_Lean_NameSet_merge(v_loggedKinds_3244_, v_loggedKinds_3247_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 2, v___x_3253_);
lean_ctor_set(v___x_3249_, 1, v___x_3252_);
lean_ctor_set(v___x_3249_, 0, v___x_3251_);
v___x_3255_ = v___x_3249_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v___x_3251_);
lean_ctor_set(v_reuseFailAlloc_3256_, 1, v___x_3252_);
lean_ctor_set(v_reuseFailAlloc_3256_, 2, v___x_3253_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(lean_object* v_as_3260_, size_t v_i_3261_, size_t v_stop_3262_){
_start:
{
uint8_t v___x_3263_; 
v___x_3263_ = lean_usize_dec_eq(v_i_3261_, v_stop_3262_);
if (v___x_3263_ == 0)
{
lean_object* v___x_3264_; uint8_t v_severity_3265_; 
v___x_3264_ = lean_array_uget_borrowed(v_as_3260_, v_i_3261_);
v_severity_3265_ = lean_ctor_get_uint8(v___x_3264_, sizeof(void*)*5 + 1);
if (v_severity_3265_ == 2)
{
uint8_t v___x_3266_; 
v___x_3266_ = 1;
return v___x_3266_;
}
else
{
size_t v___x_3267_; size_t v___x_3268_; 
v___x_3267_ = ((size_t)1ULL);
v___x_3268_ = lean_usize_add(v_i_3261_, v___x_3267_);
v_i_3261_ = v___x_3268_;
goto _start;
}
}
else
{
uint8_t v___x_3270_; 
v___x_3270_ = 0;
return v___x_3270_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1___boxed(lean_object* v_as_3271_, lean_object* v_i_3272_, lean_object* v_stop_3273_){
_start:
{
size_t v_i_boxed_3274_; size_t v_stop_boxed_3275_; uint8_t v_res_3276_; lean_object* v_r_3277_; 
v_i_boxed_3274_ = lean_unbox_usize(v_i_3272_);
lean_dec(v_i_3272_);
v_stop_boxed_3275_ = lean_unbox_usize(v_stop_3273_);
lean_dec(v_stop_3273_);
v_res_3276_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_as_3271_, v_i_boxed_3274_, v_stop_boxed_3275_);
lean_dec_ref(v_as_3271_);
v_r_3277_ = lean_box(v_res_3276_);
return v_r_3277_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(lean_object* v_x_3278_){
_start:
{
if (lean_obj_tag(v_x_3278_) == 0)
{
lean_object* v_cs_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; uint8_t v___x_3282_; 
v_cs_3279_ = lean_ctor_get(v_x_3278_, 0);
v___x_3280_ = lean_unsigned_to_nat(0u);
v___x_3281_ = lean_array_get_size(v_cs_3279_);
v___x_3282_ = lean_nat_dec_lt(v___x_3280_, v___x_3281_);
if (v___x_3282_ == 0)
{
return v___x_3282_;
}
else
{
if (v___x_3282_ == 0)
{
return v___x_3282_;
}
else
{
size_t v___x_3283_; size_t v___x_3284_; uint8_t v___x_3285_; 
v___x_3283_ = ((size_t)0ULL);
v___x_3284_ = lean_usize_of_nat(v___x_3281_);
v___x_3285_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(v_cs_3279_, v___x_3283_, v___x_3284_);
return v___x_3285_;
}
}
}
else
{
lean_object* v_vs_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; uint8_t v___x_3289_; 
v_vs_3286_ = lean_ctor_get(v_x_3278_, 0);
v___x_3287_ = lean_unsigned_to_nat(0u);
v___x_3288_ = lean_array_get_size(v_vs_3286_);
v___x_3289_ = lean_nat_dec_lt(v___x_3287_, v___x_3288_);
if (v___x_3289_ == 0)
{
return v___x_3289_;
}
else
{
if (v___x_3289_ == 0)
{
return v___x_3289_;
}
else
{
size_t v___x_3290_; size_t v___x_3291_; uint8_t v___x_3292_; 
v___x_3290_ = ((size_t)0ULL);
v___x_3291_ = lean_usize_of_nat(v___x_3288_);
v___x_3292_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_vs_3286_, v___x_3290_, v___x_3291_);
return v___x_3292_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(lean_object* v_as_3293_, size_t v_i_3294_, size_t v_stop_3295_){
_start:
{
uint8_t v___x_3296_; 
v___x_3296_ = lean_usize_dec_eq(v_i_3294_, v_stop_3295_);
if (v___x_3296_ == 0)
{
lean_object* v___x_3297_; uint8_t v___x_3298_; 
v___x_3297_ = lean_array_uget_borrowed(v_as_3293_, v_i_3294_);
v___x_3298_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v___x_3297_);
if (v___x_3298_ == 0)
{
size_t v___x_3299_; size_t v___x_3300_; 
v___x_3299_ = ((size_t)1ULL);
v___x_3300_ = lean_usize_add(v_i_3294_, v___x_3299_);
v_i_3294_ = v___x_3300_;
goto _start;
}
else
{
return v___x_3298_;
}
}
else
{
uint8_t v___x_3302_; 
v___x_3302_ = 0;
return v___x_3302_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3303_, lean_object* v_i_3304_, lean_object* v_stop_3305_){
_start:
{
size_t v_i_boxed_3306_; size_t v_stop_boxed_3307_; uint8_t v_res_3308_; lean_object* v_r_3309_; 
v_i_boxed_3306_ = lean_unbox_usize(v_i_3304_);
lean_dec(v_i_3304_);
v_stop_boxed_3307_ = lean_unbox_usize(v_stop_3305_);
lean_dec(v_stop_3305_);
v_res_3308_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(v_as_3303_, v_i_boxed_3306_, v_stop_boxed_3307_);
lean_dec_ref(v_as_3303_);
v_r_3309_ = lean_box(v_res_3308_);
return v_r_3309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0___boxed(lean_object* v_x_3310_){
_start:
{
uint8_t v_res_3311_; lean_object* v_r_3312_; 
v_res_3311_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v_x_3310_);
lean_dec_ref(v_x_3310_);
v_r_3312_ = lean_box(v_res_3311_);
return v_r_3312_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(lean_object* v_t_3313_){
_start:
{
lean_object* v_root_3314_; lean_object* v_tail_3315_; uint8_t v___x_3316_; 
v_root_3314_ = lean_ctor_get(v_t_3313_, 0);
v_tail_3315_ = lean_ctor_get(v_t_3313_, 1);
v___x_3316_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v_root_3314_);
if (v___x_3316_ == 0)
{
lean_object* v___x_3317_; lean_object* v___x_3318_; uint8_t v___x_3319_; 
v___x_3317_ = lean_unsigned_to_nat(0u);
v___x_3318_ = lean_array_get_size(v_tail_3315_);
v___x_3319_ = lean_nat_dec_lt(v___x_3317_, v___x_3318_);
if (v___x_3319_ == 0)
{
return v___x_3319_;
}
else
{
if (v___x_3319_ == 0)
{
return v___x_3319_;
}
else
{
size_t v___x_3320_; size_t v___x_3321_; uint8_t v___x_3322_; 
v___x_3320_ = ((size_t)0ULL);
v___x_3321_ = lean_usize_of_nat(v___x_3318_);
v___x_3322_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_tail_3315_, v___x_3320_, v___x_3321_);
return v___x_3322_;
}
}
}
else
{
return v___x_3316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0___boxed(lean_object* v_t_3323_){
_start:
{
uint8_t v_res_3324_; lean_object* v_r_3325_; 
v_res_3324_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(v_t_3323_);
lean_dec_ref(v_t_3323_);
v_r_3325_ = lean_box(v_res_3324_);
return v_r_3325_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(uint8_t v___x_3326_, lean_object* v_as_3327_, size_t v_i_3328_, size_t v_stop_3329_){
_start:
{
uint8_t v___x_3330_; 
v___x_3330_ = lean_usize_dec_eq(v_i_3328_, v_stop_3329_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3331_; uint8_t v_severity_3332_; uint8_t v___x_3333_; 
v___x_3331_ = lean_array_uget_borrowed(v_as_3327_, v_i_3328_);
v_severity_3332_ = lean_ctor_get_uint8(v___x_3331_, sizeof(void*)*5 + 1);
v___x_3333_ = 1;
if (v_severity_3332_ == 2)
{
return v___x_3333_;
}
else
{
if (v___x_3326_ == 0)
{
size_t v___x_3334_; size_t v___x_3335_; 
v___x_3334_ = ((size_t)1ULL);
v___x_3335_ = lean_usize_add(v_i_3328_, v___x_3334_);
v_i_3328_ = v___x_3335_;
goto _start;
}
else
{
return v___x_3333_;
}
}
}
else
{
uint8_t v___x_3337_; 
v___x_3337_ = 0;
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4___boxed(lean_object* v___x_3338_, lean_object* v_as_3339_, lean_object* v_i_3340_, lean_object* v_stop_3341_){
_start:
{
uint8_t v___x_1809__boxed_3342_; size_t v_i_boxed_3343_; size_t v_stop_boxed_3344_; uint8_t v_res_3345_; lean_object* v_r_3346_; 
v___x_1809__boxed_3342_ = lean_unbox(v___x_3338_);
v_i_boxed_3343_ = lean_unbox_usize(v_i_3340_);
lean_dec(v_i_3340_);
v_stop_boxed_3344_ = lean_unbox_usize(v_stop_3341_);
lean_dec(v_stop_3341_);
v_res_3345_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_1809__boxed_3342_, v_as_3339_, v_i_boxed_3343_, v_stop_boxed_3344_);
lean_dec_ref(v_as_3339_);
v_r_3346_ = lean_box(v_res_3345_);
return v_r_3346_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(uint8_t v___x_3347_, lean_object* v_x_3348_){
_start:
{
if (lean_obj_tag(v_x_3348_) == 0)
{
lean_object* v_cs_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; uint8_t v___x_3352_; 
v_cs_3349_ = lean_ctor_get(v_x_3348_, 0);
v___x_3350_ = lean_unsigned_to_nat(0u);
v___x_3351_ = lean_array_get_size(v_cs_3349_);
v___x_3352_ = lean_nat_dec_lt(v___x_3350_, v___x_3351_);
if (v___x_3352_ == 0)
{
return v___x_3352_;
}
else
{
if (v___x_3352_ == 0)
{
return v___x_3352_;
}
else
{
size_t v___x_3353_; size_t v___x_3354_; uint8_t v___x_3355_; 
v___x_3353_ = ((size_t)0ULL);
v___x_3354_ = lean_usize_of_nat(v___x_3351_);
v___x_3355_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(v___x_3347_, v_cs_3349_, v___x_3353_, v___x_3354_);
return v___x_3355_;
}
}
}
else
{
lean_object* v_vs_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; uint8_t v___x_3359_; 
v_vs_3356_ = lean_ctor_get(v_x_3348_, 0);
v___x_3357_ = lean_unsigned_to_nat(0u);
v___x_3358_ = lean_array_get_size(v_vs_3356_);
v___x_3359_ = lean_nat_dec_lt(v___x_3357_, v___x_3358_);
if (v___x_3359_ == 0)
{
return v___x_3359_;
}
else
{
if (v___x_3359_ == 0)
{
return v___x_3359_;
}
else
{
size_t v___x_3360_; size_t v___x_3361_; uint8_t v___x_3362_; 
v___x_3360_ = ((size_t)0ULL);
v___x_3361_ = lean_usize_of_nat(v___x_3358_);
v___x_3362_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_3347_, v_vs_3356_, v___x_3360_, v___x_3361_);
return v___x_3362_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(uint8_t v___x_3363_, lean_object* v_as_3364_, size_t v_i_3365_, size_t v_stop_3366_){
_start:
{
uint8_t v___x_3367_; 
v___x_3367_ = lean_usize_dec_eq(v_i_3365_, v_stop_3366_);
if (v___x_3367_ == 0)
{
lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3368_ = lean_array_uget_borrowed(v_as_3364_, v_i_3365_);
v___x_3369_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_3363_, v___x_3368_);
if (v___x_3369_ == 0)
{
size_t v___x_3370_; size_t v___x_3371_; 
v___x_3370_ = ((size_t)1ULL);
v___x_3371_ = lean_usize_add(v_i_3365_, v___x_3370_);
v_i_3365_ = v___x_3371_;
goto _start;
}
else
{
return v___x_3369_;
}
}
else
{
uint8_t v___x_3373_; 
v___x_3373_ = 0;
return v___x_3373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5___boxed(lean_object* v___x_3374_, lean_object* v_as_3375_, lean_object* v_i_3376_, lean_object* v_stop_3377_){
_start:
{
uint8_t v___x_1826__boxed_3378_; size_t v_i_boxed_3379_; size_t v_stop_boxed_3380_; uint8_t v_res_3381_; lean_object* v_r_3382_; 
v___x_1826__boxed_3378_ = lean_unbox(v___x_3374_);
v_i_boxed_3379_ = lean_unbox_usize(v_i_3376_);
lean_dec(v_i_3376_);
v_stop_boxed_3380_ = lean_unbox_usize(v_stop_3377_);
lean_dec(v_stop_3377_);
v_res_3381_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(v___x_1826__boxed_3378_, v_as_3375_, v_i_boxed_3379_, v_stop_boxed_3380_);
lean_dec_ref(v_as_3375_);
v_r_3382_ = lean_box(v_res_3381_);
return v_r_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3___boxed(lean_object* v___x_3383_, lean_object* v_x_3384_){
_start:
{
uint8_t v___x_1834__boxed_3385_; uint8_t v_res_3386_; lean_object* v_r_3387_; 
v___x_1834__boxed_3385_ = lean_unbox(v___x_3383_);
v_res_3386_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_1834__boxed_3385_, v_x_3384_);
lean_dec_ref(v_x_3384_);
v_r_3387_ = lean_box(v_res_3386_);
return v_r_3387_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(uint8_t v___x_3388_, lean_object* v_t_3389_){
_start:
{
lean_object* v_root_3390_; lean_object* v_tail_3391_; uint8_t v___x_3392_; 
v_root_3390_ = lean_ctor_get(v_t_3389_, 0);
v_tail_3391_ = lean_ctor_get(v_t_3389_, 1);
v___x_3392_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_3388_, v_root_3390_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; 
v___x_3393_ = lean_unsigned_to_nat(0u);
v___x_3394_ = lean_array_get_size(v_tail_3391_);
v___x_3395_ = lean_nat_dec_lt(v___x_3393_, v___x_3394_);
if (v___x_3395_ == 0)
{
return v___x_3395_;
}
else
{
if (v___x_3395_ == 0)
{
return v___x_3395_;
}
else
{
size_t v___x_3396_; size_t v___x_3397_; uint8_t v___x_3398_; 
v___x_3396_ = ((size_t)0ULL);
v___x_3397_ = lean_usize_of_nat(v___x_3394_);
v___x_3398_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_3388_, v_tail_3391_, v___x_3396_, v___x_3397_);
return v___x_3398_;
}
}
}
else
{
return v___x_3392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1___boxed(lean_object* v___x_3399_, lean_object* v_t_3400_){
_start:
{
uint8_t v___x_1877__boxed_3401_; uint8_t v_res_3402_; lean_object* v_r_3403_; 
v___x_1877__boxed_3401_ = lean_unbox(v___x_3399_);
v_res_3402_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(v___x_1877__boxed_3401_, v_t_3400_);
lean_dec_ref(v_t_3400_);
v_r_3403_ = lean_box(v_res_3402_);
return v_r_3403_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasErrors(lean_object* v_log_3404_){
_start:
{
lean_object* v_reported_3405_; lean_object* v_unreported_3406_; uint8_t v___x_3407_; 
v_reported_3405_ = lean_ctor_get(v_log_3404_, 0);
v_unreported_3406_ = lean_ctor_get(v_log_3404_, 1);
v___x_3407_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(v_reported_3405_);
if (v___x_3407_ == 0)
{
uint8_t v___x_3408_; 
v___x_3408_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(v___x_3407_, v_unreported_3406_);
return v___x_3408_;
}
else
{
return v___x_3407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasErrors___boxed(lean_object* v_log_3409_){
_start:
{
uint8_t v_res_3410_; lean_object* v_r_3411_; 
v_res_3410_ = l_Lean_MessageLog_hasErrors(v_log_3409_);
lean_dec_ref(v_log_3409_);
v_r_3411_ = lean_box(v_res_3410_);
return v_r_3411_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_markAllReported(lean_object* v_log_3412_){
_start:
{
lean_object* v_reported_3413_; lean_object* v_unreported_3414_; lean_object* v_loggedKinds_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3426_; 
v_reported_3413_ = lean_ctor_get(v_log_3412_, 0);
v_unreported_3414_ = lean_ctor_get(v_log_3412_, 1);
v_loggedKinds_3415_ = lean_ctor_get(v_log_3412_, 2);
v_isSharedCheck_3426_ = !lean_is_exclusive(v_log_3412_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3417_ = v_log_3412_;
v_isShared_3418_ = v_isSharedCheck_3426_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_loggedKinds_3415_);
lean_inc(v_unreported_3414_);
lean_inc(v_reported_3413_);
lean_dec(v_log_3412_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3426_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3424_; 
v___x_3419_ = l_Lean_PersistentArray_append___redArg(v_reported_3413_, v_unreported_3414_);
lean_dec_ref(v_unreported_3414_);
v___x_3420_ = lean_unsigned_to_nat(32u);
v___x_3421_ = lean_mk_empty_array_with_capacity(v___x_3420_);
lean_dec_ref(v___x_3421_);
v___x_3422_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 1, v___x_3422_);
lean_ctor_set(v___x_3417_, 0, v___x_3419_);
v___x_3424_ = v___x_3417_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3419_);
lean_ctor_set(v_reuseFailAlloc_3425_, 1, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3425_, 2, v_loggedKinds_3415_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(size_t v_sz_3427_, size_t v_i_3428_, lean_object* v_bs_3429_){
_start:
{
uint8_t v___x_3430_; 
v___x_3430_ = lean_usize_dec_lt(v_i_3428_, v_sz_3427_);
if (v___x_3430_ == 0)
{
return v_bs_3429_;
}
else
{
lean_object* v_v_3431_; lean_object* v_fileName_3432_; lean_object* v_pos_3433_; lean_object* v_endPos_3434_; uint8_t v_keepFullRange_3435_; uint8_t v_severity_3436_; uint8_t v_isSilent_3437_; lean_object* v_caption_3438_; lean_object* v_data_3439_; lean_object* v___x_3440_; lean_object* v_bs_x27_3441_; lean_object* v___y_3443_; 
v_v_3431_ = lean_array_uget(v_bs_3429_, v_i_3428_);
v_fileName_3432_ = lean_ctor_get(v_v_3431_, 0);
v_pos_3433_ = lean_ctor_get(v_v_3431_, 1);
v_endPos_3434_ = lean_ctor_get(v_v_3431_, 2);
v_keepFullRange_3435_ = lean_ctor_get_uint8(v_v_3431_, sizeof(void*)*5);
v_severity_3436_ = lean_ctor_get_uint8(v_v_3431_, sizeof(void*)*5 + 1);
v_isSilent_3437_ = lean_ctor_get_uint8(v_v_3431_, sizeof(void*)*5 + 2);
v_caption_3438_ = lean_ctor_get(v_v_3431_, 3);
v_data_3439_ = lean_ctor_get(v_v_3431_, 4);
v___x_3440_ = lean_unsigned_to_nat(0u);
v_bs_x27_3441_ = lean_array_uset(v_bs_3429_, v_i_3428_, v___x_3440_);
if (v_severity_3436_ == 2)
{
lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3455_; 
lean_inc(v_data_3439_);
lean_inc_ref(v_caption_3438_);
lean_inc(v_endPos_3434_);
lean_inc_ref(v_pos_3433_);
lean_inc_ref(v_fileName_3432_);
v_isSharedCheck_3455_ = !lean_is_exclusive(v_v_3431_);
if (v_isSharedCheck_3455_ == 0)
{
lean_object* v_unused_3456_; lean_object* v_unused_3457_; lean_object* v_unused_3458_; lean_object* v_unused_3459_; lean_object* v_unused_3460_; 
v_unused_3456_ = lean_ctor_get(v_v_3431_, 4);
lean_dec(v_unused_3456_);
v_unused_3457_ = lean_ctor_get(v_v_3431_, 3);
lean_dec(v_unused_3457_);
v_unused_3458_ = lean_ctor_get(v_v_3431_, 2);
lean_dec(v_unused_3458_);
v_unused_3459_ = lean_ctor_get(v_v_3431_, 1);
lean_dec(v_unused_3459_);
v_unused_3460_ = lean_ctor_get(v_v_3431_, 0);
lean_dec(v_unused_3460_);
v___x_3449_ = v_v_3431_;
v_isShared_3450_ = v_isSharedCheck_3455_;
goto v_resetjp_3448_;
}
else
{
lean_dec(v_v_3431_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3455_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
uint8_t v___x_3451_; lean_object* v___x_3453_; 
v___x_3451_ = 1;
if (v_isShared_3450_ == 0)
{
v___x_3453_ = v___x_3449_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_fileName_3432_);
lean_ctor_set(v_reuseFailAlloc_3454_, 1, v_pos_3433_);
lean_ctor_set(v_reuseFailAlloc_3454_, 2, v_endPos_3434_);
lean_ctor_set(v_reuseFailAlloc_3454_, 3, v_caption_3438_);
lean_ctor_set(v_reuseFailAlloc_3454_, 4, v_data_3439_);
lean_ctor_set_uint8(v_reuseFailAlloc_3454_, sizeof(void*)*5, v_keepFullRange_3435_);
lean_ctor_set_uint8(v_reuseFailAlloc_3454_, sizeof(void*)*5 + 2, v_isSilent_3437_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
lean_ctor_set_uint8(v___x_3453_, sizeof(void*)*5 + 1, v___x_3451_);
v___y_3443_ = v___x_3453_;
goto v___jp_3442_;
}
}
}
else
{
v___y_3443_ = v_v_3431_;
goto v___jp_3442_;
}
v___jp_3442_:
{
size_t v___x_3444_; size_t v___x_3445_; lean_object* v___x_3446_; 
v___x_3444_ = ((size_t)1ULL);
v___x_3445_ = lean_usize_add(v_i_3428_, v___x_3444_);
v___x_3446_ = lean_array_uset(v_bs_x27_3441_, v_i_3428_, v___y_3443_);
v_i_3428_ = v___x_3445_;
v_bs_3429_ = v___x_3446_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1___boxed(lean_object* v_sz_3461_, lean_object* v_i_3462_, lean_object* v_bs_3463_){
_start:
{
size_t v_sz_boxed_3464_; size_t v_i_boxed_3465_; lean_object* v_res_3466_; 
v_sz_boxed_3464_ = lean_unbox_usize(v_sz_3461_);
lean_dec(v_sz_3461_);
v_i_boxed_3465_ = lean_unbox_usize(v_i_3462_);
lean_dec(v_i_3462_);
v_res_3466_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_boxed_3464_, v_i_boxed_3465_, v_bs_3463_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(size_t v_sz_3467_, size_t v_i_3468_, lean_object* v_bs_3469_){
_start:
{
uint8_t v___x_3470_; 
v___x_3470_ = lean_usize_dec_lt(v_i_3468_, v_sz_3467_);
if (v___x_3470_ == 0)
{
return v_bs_3469_;
}
else
{
lean_object* v_v_3471_; lean_object* v___x_3472_; lean_object* v_bs_x27_3473_; lean_object* v___x_3474_; size_t v___x_3475_; size_t v___x_3476_; lean_object* v___x_3477_; 
v_v_3471_ = lean_array_uget(v_bs_3469_, v_i_3468_);
v___x_3472_ = lean_unsigned_to_nat(0u);
v_bs_x27_3473_ = lean_array_uset(v_bs_3469_, v_i_3468_, v___x_3472_);
v___x_3474_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(v_v_3471_);
v___x_3475_ = ((size_t)1ULL);
v___x_3476_ = lean_usize_add(v_i_3468_, v___x_3475_);
v___x_3477_ = lean_array_uset(v_bs_x27_3473_, v_i_3468_, v___x_3474_);
v_i_3468_ = v___x_3476_;
v_bs_3469_ = v___x_3477_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(lean_object* v_x_3479_){
_start:
{
if (lean_obj_tag(v_x_3479_) == 0)
{
lean_object* v_cs_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3490_; 
v_cs_3480_ = lean_ctor_get(v_x_3479_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v_x_3479_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3482_ = v_x_3479_;
v_isShared_3483_ = v_isSharedCheck_3490_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_cs_3480_);
lean_dec(v_x_3479_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3490_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
size_t v_sz_3484_; size_t v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v_sz_3484_ = lean_array_size(v_cs_3480_);
v___x_3485_ = ((size_t)0ULL);
v___x_3486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(v_sz_3484_, v___x_3485_, v_cs_3480_);
if (v_isShared_3483_ == 0)
{
lean_ctor_set(v___x_3482_, 0, v___x_3486_);
v___x_3488_ = v___x_3482_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
else
{
lean_object* v_vs_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3501_; 
v_vs_3491_ = lean_ctor_get(v_x_3479_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_x_3479_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3493_ = v_x_3479_;
v_isShared_3494_ = v_isSharedCheck_3501_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_vs_3491_);
lean_dec(v_x_3479_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3501_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
size_t v_sz_3495_; size_t v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3499_; 
v_sz_3495_ = lean_array_size(v_vs_3491_);
v___x_3496_ = ((size_t)0ULL);
v___x_3497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_3495_, v___x_3496_, v_vs_3491_);
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 0, v___x_3497_);
v___x_3499_ = v___x_3493_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v___x_3497_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3502_, lean_object* v_i_3503_, lean_object* v_bs_3504_){
_start:
{
size_t v_sz_boxed_3505_; size_t v_i_boxed_3506_; lean_object* v_res_3507_; 
v_sz_boxed_3505_ = lean_unbox_usize(v_sz_3502_);
lean_dec(v_sz_3502_);
v_i_boxed_3506_ = lean_unbox_usize(v_i_3503_);
lean_dec(v_i_3503_);
v_res_3507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(v_sz_boxed_3505_, v_i_boxed_3506_, v_bs_3504_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(lean_object* v_t_3508_){
_start:
{
lean_object* v_root_3509_; lean_object* v_tail_3510_; lean_object* v_size_3511_; size_t v_shift_3512_; lean_object* v_tailOff_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3524_; 
v_root_3509_ = lean_ctor_get(v_t_3508_, 0);
v_tail_3510_ = lean_ctor_get(v_t_3508_, 1);
v_size_3511_ = lean_ctor_get(v_t_3508_, 2);
v_shift_3512_ = lean_ctor_get_usize(v_t_3508_, 4);
v_tailOff_3513_ = lean_ctor_get(v_t_3508_, 3);
v_isSharedCheck_3524_ = !lean_is_exclusive(v_t_3508_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3515_ = v_t_3508_;
v_isShared_3516_ = v_isSharedCheck_3524_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_tailOff_3513_);
lean_inc(v_size_3511_);
lean_inc(v_tail_3510_);
lean_inc(v_root_3509_);
lean_dec(v_t_3508_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3524_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3517_; size_t v_sz_3518_; size_t v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3522_; 
v___x_3517_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(v_root_3509_);
v_sz_3518_ = lean_array_size(v_tail_3510_);
v___x_3519_ = ((size_t)0ULL);
v___x_3520_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_3518_, v___x_3519_, v_tail_3510_);
if (v_isShared_3516_ == 0)
{
lean_ctor_set(v___x_3515_, 1, v___x_3520_);
lean_ctor_set(v___x_3515_, 0, v___x_3517_);
v___x_3522_ = v___x_3515_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v___x_3517_);
lean_ctor_set(v_reuseFailAlloc_3523_, 1, v___x_3520_);
lean_ctor_set(v_reuseFailAlloc_3523_, 2, v_size_3511_);
lean_ctor_set(v_reuseFailAlloc_3523_, 3, v_tailOff_3513_);
lean_ctor_set_usize(v_reuseFailAlloc_3523_, 4, v_shift_3512_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToWarnings(lean_object* v_log_3525_){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v_unreported_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3538_; 
v___x_3526_ = lean_unsigned_to_nat(32u);
v___x_3527_ = lean_mk_empty_array_with_capacity(v___x_3526_);
lean_dec_ref(v___x_3527_);
v___x_3528_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3529_ = lean_ctor_get(v_log_3525_, 1);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_log_3525_);
if (v_isSharedCheck_3538_ == 0)
{
lean_object* v_unused_3539_; lean_object* v_unused_3540_; 
v_unused_3539_ = lean_ctor_get(v_log_3525_, 2);
lean_dec(v_unused_3539_);
v_unused_3540_ = lean_ctor_get(v_log_3525_, 0);
lean_dec(v_unused_3540_);
v___x_3531_ = v_log_3525_;
v_isShared_3532_ = v_isSharedCheck_3538_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_unreported_3529_);
lean_dec(v_log_3525_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3538_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3533_ = l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(v_unreported_3529_);
v___x_3534_ = l_Lean_NameSet_empty;
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 2, v___x_3534_);
lean_ctor_set(v___x_3531_, 1, v___x_3533_);
lean_ctor_set(v___x_3531_, 0, v___x_3528_);
v___x_3536_ = v___x_3531_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3528_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v___x_3533_);
lean_ctor_set(v_reuseFailAlloc_3537_, 2, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(size_t v_sz_3541_, size_t v_i_3542_, lean_object* v_bs_3543_){
_start:
{
uint8_t v___x_3544_; 
v___x_3544_ = lean_usize_dec_lt(v_i_3542_, v_sz_3541_);
if (v___x_3544_ == 0)
{
return v_bs_3543_;
}
else
{
lean_object* v_v_3545_; lean_object* v_fileName_3546_; lean_object* v_pos_3547_; lean_object* v_endPos_3548_; uint8_t v_keepFullRange_3549_; uint8_t v_severity_3550_; uint8_t v_isSilent_3551_; lean_object* v_caption_3552_; lean_object* v_data_3553_; lean_object* v___x_3554_; lean_object* v_bs_x27_3555_; lean_object* v___y_3557_; 
v_v_3545_ = lean_array_uget(v_bs_3543_, v_i_3542_);
v_fileName_3546_ = lean_ctor_get(v_v_3545_, 0);
v_pos_3547_ = lean_ctor_get(v_v_3545_, 1);
v_endPos_3548_ = lean_ctor_get(v_v_3545_, 2);
v_keepFullRange_3549_ = lean_ctor_get_uint8(v_v_3545_, sizeof(void*)*5);
v_severity_3550_ = lean_ctor_get_uint8(v_v_3545_, sizeof(void*)*5 + 1);
v_isSilent_3551_ = lean_ctor_get_uint8(v_v_3545_, sizeof(void*)*5 + 2);
v_caption_3552_ = lean_ctor_get(v_v_3545_, 3);
v_data_3553_ = lean_ctor_get(v_v_3545_, 4);
v___x_3554_ = lean_unsigned_to_nat(0u);
v_bs_x27_3555_ = lean_array_uset(v_bs_3543_, v_i_3542_, v___x_3554_);
if (v_severity_3550_ == 2)
{
lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3569_; 
lean_inc(v_data_3553_);
lean_inc_ref(v_caption_3552_);
lean_inc(v_endPos_3548_);
lean_inc_ref(v_pos_3547_);
lean_inc_ref(v_fileName_3546_);
v_isSharedCheck_3569_ = !lean_is_exclusive(v_v_3545_);
if (v_isSharedCheck_3569_ == 0)
{
lean_object* v_unused_3570_; lean_object* v_unused_3571_; lean_object* v_unused_3572_; lean_object* v_unused_3573_; lean_object* v_unused_3574_; 
v_unused_3570_ = lean_ctor_get(v_v_3545_, 4);
lean_dec(v_unused_3570_);
v_unused_3571_ = lean_ctor_get(v_v_3545_, 3);
lean_dec(v_unused_3571_);
v_unused_3572_ = lean_ctor_get(v_v_3545_, 2);
lean_dec(v_unused_3572_);
v_unused_3573_ = lean_ctor_get(v_v_3545_, 1);
lean_dec(v_unused_3573_);
v_unused_3574_ = lean_ctor_get(v_v_3545_, 0);
lean_dec(v_unused_3574_);
v___x_3563_ = v_v_3545_;
v_isShared_3564_ = v_isSharedCheck_3569_;
goto v_resetjp_3562_;
}
else
{
lean_dec(v_v_3545_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3569_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
uint8_t v___x_3565_; lean_object* v___x_3567_; 
v___x_3565_ = 0;
if (v_isShared_3564_ == 0)
{
v___x_3567_ = v___x_3563_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_fileName_3546_);
lean_ctor_set(v_reuseFailAlloc_3568_, 1, v_pos_3547_);
lean_ctor_set(v_reuseFailAlloc_3568_, 2, v_endPos_3548_);
lean_ctor_set(v_reuseFailAlloc_3568_, 3, v_caption_3552_);
lean_ctor_set(v_reuseFailAlloc_3568_, 4, v_data_3553_);
lean_ctor_set_uint8(v_reuseFailAlloc_3568_, sizeof(void*)*5, v_keepFullRange_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3568_, sizeof(void*)*5 + 2, v_isSilent_3551_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*5 + 1, v___x_3565_);
v___y_3557_ = v___x_3567_;
goto v___jp_3556_;
}
}
}
else
{
v___y_3557_ = v_v_3545_;
goto v___jp_3556_;
}
v___jp_3556_:
{
size_t v___x_3558_; size_t v___x_3559_; lean_object* v___x_3560_; 
v___x_3558_ = ((size_t)1ULL);
v___x_3559_ = lean_usize_add(v_i_3542_, v___x_3558_);
v___x_3560_ = lean_array_uset(v_bs_x27_3555_, v_i_3542_, v___y_3557_);
v_i_3542_ = v___x_3559_;
v_bs_3543_ = v___x_3560_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1___boxed(lean_object* v_sz_3575_, lean_object* v_i_3576_, lean_object* v_bs_3577_){
_start:
{
size_t v_sz_boxed_3578_; size_t v_i_boxed_3579_; lean_object* v_res_3580_; 
v_sz_boxed_3578_ = lean_unbox_usize(v_sz_3575_);
lean_dec(v_sz_3575_);
v_i_boxed_3579_ = lean_unbox_usize(v_i_3576_);
lean_dec(v_i_3576_);
v_res_3580_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_boxed_3578_, v_i_boxed_3579_, v_bs_3577_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(size_t v_sz_3581_, size_t v_i_3582_, lean_object* v_bs_3583_){
_start:
{
uint8_t v___x_3584_; 
v___x_3584_ = lean_usize_dec_lt(v_i_3582_, v_sz_3581_);
if (v___x_3584_ == 0)
{
return v_bs_3583_;
}
else
{
lean_object* v_v_3585_; lean_object* v___x_3586_; lean_object* v_bs_x27_3587_; lean_object* v___x_3588_; size_t v___x_3589_; size_t v___x_3590_; lean_object* v___x_3591_; 
v_v_3585_ = lean_array_uget(v_bs_3583_, v_i_3582_);
v___x_3586_ = lean_unsigned_to_nat(0u);
v_bs_x27_3587_ = lean_array_uset(v_bs_3583_, v_i_3582_, v___x_3586_);
v___x_3588_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(v_v_3585_);
v___x_3589_ = ((size_t)1ULL);
v___x_3590_ = lean_usize_add(v_i_3582_, v___x_3589_);
v___x_3591_ = lean_array_uset(v_bs_x27_3587_, v_i_3582_, v___x_3588_);
v_i_3582_ = v___x_3590_;
v_bs_3583_ = v___x_3591_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(lean_object* v_x_3593_){
_start:
{
if (lean_obj_tag(v_x_3593_) == 0)
{
lean_object* v_cs_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3604_; 
v_cs_3594_ = lean_ctor_get(v_x_3593_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v_x_3593_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3596_ = v_x_3593_;
v_isShared_3597_ = v_isSharedCheck_3604_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_cs_3594_);
lean_dec(v_x_3593_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3604_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
size_t v_sz_3598_; size_t v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3602_; 
v_sz_3598_ = lean_array_size(v_cs_3594_);
v___x_3599_ = ((size_t)0ULL);
v___x_3600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(v_sz_3598_, v___x_3599_, v_cs_3594_);
if (v_isShared_3597_ == 0)
{
lean_ctor_set(v___x_3596_, 0, v___x_3600_);
v___x_3602_ = v___x_3596_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3600_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
else
{
lean_object* v_vs_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3615_; 
v_vs_3605_ = lean_ctor_get(v_x_3593_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v_x_3593_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3607_ = v_x_3593_;
v_isShared_3608_ = v_isSharedCheck_3615_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_vs_3605_);
lean_dec(v_x_3593_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3615_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
size_t v_sz_3609_; size_t v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3613_; 
v_sz_3609_ = lean_array_size(v_vs_3605_);
v___x_3610_ = ((size_t)0ULL);
v___x_3611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_3609_, v___x_3610_, v_vs_3605_);
if (v_isShared_3608_ == 0)
{
lean_ctor_set(v___x_3607_, 0, v___x_3611_);
v___x_3613_ = v___x_3607_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3611_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3616_, lean_object* v_i_3617_, lean_object* v_bs_3618_){
_start:
{
size_t v_sz_boxed_3619_; size_t v_i_boxed_3620_; lean_object* v_res_3621_; 
v_sz_boxed_3619_ = lean_unbox_usize(v_sz_3616_);
lean_dec(v_sz_3616_);
v_i_boxed_3620_ = lean_unbox_usize(v_i_3617_);
lean_dec(v_i_3617_);
v_res_3621_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(v_sz_boxed_3619_, v_i_boxed_3620_, v_bs_3618_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(lean_object* v_t_3622_){
_start:
{
lean_object* v_root_3623_; lean_object* v_tail_3624_; lean_object* v_size_3625_; size_t v_shift_3626_; lean_object* v_tailOff_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3638_; 
v_root_3623_ = lean_ctor_get(v_t_3622_, 0);
v_tail_3624_ = lean_ctor_get(v_t_3622_, 1);
v_size_3625_ = lean_ctor_get(v_t_3622_, 2);
v_shift_3626_ = lean_ctor_get_usize(v_t_3622_, 4);
v_tailOff_3627_ = lean_ctor_get(v_t_3622_, 3);
v_isSharedCheck_3638_ = !lean_is_exclusive(v_t_3622_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3629_ = v_t_3622_;
v_isShared_3630_ = v_isSharedCheck_3638_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_tailOff_3627_);
lean_inc(v_size_3625_);
lean_inc(v_tail_3624_);
lean_inc(v_root_3623_);
lean_dec(v_t_3622_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3638_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3631_; size_t v_sz_3632_; size_t v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3636_; 
v___x_3631_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(v_root_3623_);
v_sz_3632_ = lean_array_size(v_tail_3624_);
v___x_3633_ = ((size_t)0ULL);
v___x_3634_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_3632_, v___x_3633_, v_tail_3624_);
if (v_isShared_3630_ == 0)
{
lean_ctor_set(v___x_3629_, 1, v___x_3634_);
lean_ctor_set(v___x_3629_, 0, v___x_3631_);
v___x_3636_ = v___x_3629_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v___x_3631_);
lean_ctor_set(v_reuseFailAlloc_3637_, 1, v___x_3634_);
lean_ctor_set(v_reuseFailAlloc_3637_, 2, v_size_3625_);
lean_ctor_set(v_reuseFailAlloc_3637_, 3, v_tailOff_3627_);
lean_ctor_set_usize(v_reuseFailAlloc_3637_, 4, v_shift_3626_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToInfos(lean_object* v_log_3639_){
_start:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v_unreported_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3652_; 
v___x_3640_ = lean_unsigned_to_nat(32u);
v___x_3641_ = lean_mk_empty_array_with_capacity(v___x_3640_);
lean_dec_ref(v___x_3641_);
v___x_3642_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3643_ = lean_ctor_get(v_log_3639_, 1);
v_isSharedCheck_3652_ = !lean_is_exclusive(v_log_3639_);
if (v_isSharedCheck_3652_ == 0)
{
lean_object* v_unused_3653_; lean_object* v_unused_3654_; 
v_unused_3653_ = lean_ctor_get(v_log_3639_, 2);
lean_dec(v_unused_3653_);
v_unused_3654_ = lean_ctor_get(v_log_3639_, 0);
lean_dec(v_unused_3654_);
v___x_3645_ = v_log_3639_;
v_isShared_3646_ = v_isSharedCheck_3652_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_unreported_3643_);
lean_dec(v_log_3639_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3652_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3650_; 
v___x_3647_ = l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(v_unreported_3643_);
v___x_3648_ = l_Lean_NameSet_empty;
if (v_isShared_3646_ == 0)
{
lean_ctor_set(v___x_3645_, 2, v___x_3648_);
lean_ctor_set(v___x_3645_, 1, v___x_3647_);
lean_ctor_set(v___x_3645_, 0, v___x_3642_);
v___x_3650_ = v___x_3645_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3642_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v___x_3647_);
lean_ctor_set(v_reuseFailAlloc_3651_, 2, v___x_3648_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(lean_object* v_as_3655_, size_t v_i_3656_, size_t v_stop_3657_, lean_object* v_b_3658_){
_start:
{
lean_object* v___y_3660_; uint8_t v___x_3664_; 
v___x_3664_ = lean_usize_dec_eq(v_i_3656_, v_stop_3657_);
if (v___x_3664_ == 0)
{
lean_object* v___x_3665_; uint8_t v_severity_3666_; 
v___x_3665_ = lean_array_uget_borrowed(v_as_3655_, v_i_3656_);
v_severity_3666_ = lean_ctor_get_uint8(v___x_3665_, sizeof(void*)*5 + 1);
if (v_severity_3666_ == 0)
{
lean_object* v___x_3667_; 
lean_inc(v___x_3665_);
v___x_3667_ = l_Lean_PersistentArray_push___redArg(v_b_3658_, v___x_3665_);
v___y_3660_ = v___x_3667_;
goto v___jp_3659_;
}
else
{
v___y_3660_ = v_b_3658_;
goto v___jp_3659_;
}
}
else
{
return v_b_3658_;
}
v___jp_3659_:
{
size_t v___x_3661_; size_t v___x_3662_; 
v___x_3661_ = ((size_t)1ULL);
v___x_3662_ = lean_usize_add(v_i_3656_, v___x_3661_);
v_i_3656_ = v___x_3662_;
v_b_3658_ = v___y_3660_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1___boxed(lean_object* v_as_3668_, lean_object* v_i_3669_, lean_object* v_stop_3670_, lean_object* v_b_3671_){
_start:
{
size_t v_i_boxed_3672_; size_t v_stop_boxed_3673_; lean_object* v_res_3674_; 
v_i_boxed_3672_ = lean_unbox_usize(v_i_3669_);
lean_dec(v_i_3669_);
v_stop_boxed_3673_ = lean_unbox_usize(v_stop_3670_);
lean_dec(v_stop_3670_);
v_res_3674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_as_3668_, v_i_boxed_3672_, v_stop_boxed_3673_, v_b_3671_);
lean_dec_ref(v_as_3668_);
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(lean_object* v_x_3675_, lean_object* v_x_3676_){
_start:
{
if (lean_obj_tag(v_x_3675_) == 0)
{
lean_object* v_cs_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; 
v_cs_3677_ = lean_ctor_get(v_x_3675_, 0);
v___x_3678_ = lean_unsigned_to_nat(0u);
v___x_3679_ = lean_array_get_size(v_cs_3677_);
v___x_3680_ = lean_nat_dec_lt(v___x_3678_, v___x_3679_);
if (v___x_3680_ == 0)
{
return v_x_3676_;
}
else
{
size_t v___x_3681_; size_t v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = ((size_t)0ULL);
v___x_3682_ = lean_usize_of_nat(v___x_3679_);
v___x_3683_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3677_, v___x_3681_, v___x_3682_, v_x_3676_);
return v___x_3683_;
}
}
else
{
lean_object* v_vs_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; uint8_t v___x_3687_; 
v_vs_3684_ = lean_ctor_get(v_x_3675_, 0);
v___x_3685_ = lean_unsigned_to_nat(0u);
v___x_3686_ = lean_array_get_size(v_vs_3684_);
v___x_3687_ = lean_nat_dec_lt(v___x_3685_, v___x_3686_);
if (v___x_3687_ == 0)
{
return v_x_3676_;
}
else
{
size_t v___x_3688_; size_t v___x_3689_; lean_object* v___x_3690_; 
v___x_3688_ = ((size_t)0ULL);
v___x_3689_ = lean_usize_of_nat(v___x_3686_);
v___x_3690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3684_, v___x_3688_, v___x_3689_, v_x_3676_);
return v___x_3690_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(lean_object* v_as_3691_, size_t v_i_3692_, size_t v_stop_3693_, lean_object* v_b_3694_){
_start:
{
uint8_t v___x_3695_; 
v___x_3695_ = lean_usize_dec_eq(v_i_3692_, v_stop_3693_);
if (v___x_3695_ == 0)
{
lean_object* v___x_3696_; lean_object* v___x_3697_; size_t v___x_3698_; size_t v___x_3699_; 
v___x_3696_ = lean_array_uget_borrowed(v_as_3691_, v_i_3692_);
v___x_3697_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v___x_3696_, v_b_3694_);
v___x_3698_ = ((size_t)1ULL);
v___x_3699_ = lean_usize_add(v_i_3692_, v___x_3698_);
v_i_3692_ = v___x_3699_;
v_b_3694_ = v___x_3697_;
goto _start;
}
else
{
return v_b_3694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3701_, lean_object* v_i_3702_, lean_object* v_stop_3703_, lean_object* v_b_3704_){
_start:
{
size_t v_i_boxed_3705_; size_t v_stop_boxed_3706_; lean_object* v_res_3707_; 
v_i_boxed_3705_ = lean_unbox_usize(v_i_3702_);
lean_dec(v_i_3702_);
v_stop_boxed_3706_ = lean_unbox_usize(v_stop_3703_);
lean_dec(v_stop_3703_);
v_res_3707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_as_3701_, v_i_boxed_3705_, v_stop_boxed_3706_, v_b_3704_);
lean_dec_ref(v_as_3701_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2___boxed(lean_object* v_x_3708_, lean_object* v_x_3709_){
_start:
{
lean_object* v_res_3710_; 
v_res_3710_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v_x_3708_, v_x_3709_);
lean_dec_ref(v_x_3708_);
return v_res_3710_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3711_; 
v___x_3711_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_3711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(lean_object* v_x_3712_, size_t v_x_3713_, size_t v_x_3714_, lean_object* v_x_3715_){
_start:
{
if (lean_obj_tag(v_x_3712_) == 0)
{
lean_object* v_cs_3716_; lean_object* v___x_3717_; size_t v___x_3718_; lean_object* v_j_3719_; lean_object* v___x_3720_; size_t v___x_3721_; size_t v___x_3722_; size_t v___x_3723_; size_t v___x_3724_; size_t v___x_3725_; size_t v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; uint8_t v___x_3731_; 
v_cs_3716_ = lean_ctor_get(v_x_3712_, 0);
v___x_3717_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0);
v___x_3718_ = lean_usize_shift_right(v_x_3713_, v_x_3714_);
v_j_3719_ = lean_usize_to_nat(v___x_3718_);
v___x_3720_ = lean_array_get_borrowed(v___x_3717_, v_cs_3716_, v_j_3719_);
v___x_3721_ = ((size_t)1ULL);
v___x_3722_ = lean_usize_shift_left(v___x_3721_, v_x_3714_);
v___x_3723_ = lean_usize_sub(v___x_3722_, v___x_3721_);
v___x_3724_ = lean_usize_land(v_x_3713_, v___x_3723_);
v___x_3725_ = ((size_t)5ULL);
v___x_3726_ = lean_usize_sub(v_x_3714_, v___x_3725_);
v___x_3727_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v___x_3720_, v___x_3724_, v___x_3726_, v_x_3715_);
v___x_3728_ = lean_unsigned_to_nat(1u);
v___x_3729_ = lean_nat_add(v_j_3719_, v___x_3728_);
lean_dec(v_j_3719_);
v___x_3730_ = lean_array_get_size(v_cs_3716_);
v___x_3731_ = lean_nat_dec_lt(v___x_3729_, v___x_3730_);
if (v___x_3731_ == 0)
{
lean_dec(v___x_3729_);
return v___x_3727_;
}
else
{
size_t v___x_3732_; size_t v___x_3733_; lean_object* v___x_3734_; 
v___x_3732_ = lean_usize_of_nat(v___x_3729_);
lean_dec(v___x_3729_);
v___x_3733_ = lean_usize_of_nat(v___x_3730_);
v___x_3734_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3716_, v___x_3732_, v___x_3733_, v___x_3727_);
return v___x_3734_;
}
}
else
{
lean_object* v_vs_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; uint8_t v___x_3738_; 
v_vs_3735_ = lean_ctor_get(v_x_3712_, 0);
v___x_3736_ = lean_usize_to_nat(v_x_3713_);
v___x_3737_ = lean_array_get_size(v_vs_3735_);
v___x_3738_ = lean_nat_dec_lt(v___x_3736_, v___x_3737_);
if (v___x_3738_ == 0)
{
lean_dec(v___x_3736_);
return v_x_3715_;
}
else
{
size_t v___x_3739_; size_t v___x_3740_; lean_object* v___x_3741_; 
v___x_3739_ = lean_usize_of_nat(v___x_3736_);
lean_dec(v___x_3736_);
v___x_3740_ = lean_usize_of_nat(v___x_3737_);
v___x_3741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3735_, v___x_3739_, v___x_3740_, v_x_3715_);
return v___x_3741_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___boxed(lean_object* v_x_3742_, lean_object* v_x_3743_, lean_object* v_x_3744_, lean_object* v_x_3745_){
_start:
{
size_t v_x_1153__boxed_3746_; size_t v_x_1154__boxed_3747_; lean_object* v_res_3748_; 
v_x_1153__boxed_3746_ = lean_unbox_usize(v_x_3743_);
lean_dec(v_x_3743_);
v_x_1154__boxed_3747_ = lean_unbox_usize(v_x_3744_);
lean_dec(v_x_3744_);
v_res_3748_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v_x_3742_, v_x_1153__boxed_3746_, v_x_1154__boxed_3747_, v_x_3745_);
lean_dec_ref(v_x_3742_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(lean_object* v_t_3749_, lean_object* v_init_3750_, lean_object* v_start_3751_){
_start:
{
lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3752_ = lean_unsigned_to_nat(0u);
v___x_3753_ = lean_nat_dec_eq(v_start_3751_, v___x_3752_);
if (v___x_3753_ == 0)
{
lean_object* v_root_3754_; lean_object* v_tail_3755_; size_t v_shift_3756_; lean_object* v_tailOff_3757_; uint8_t v___x_3758_; 
v_root_3754_ = lean_ctor_get(v_t_3749_, 0);
v_tail_3755_ = lean_ctor_get(v_t_3749_, 1);
v_shift_3756_ = lean_ctor_get_usize(v_t_3749_, 4);
v_tailOff_3757_ = lean_ctor_get(v_t_3749_, 3);
v___x_3758_ = lean_nat_dec_le(v_tailOff_3757_, v_start_3751_);
if (v___x_3758_ == 0)
{
size_t v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
v___x_3759_ = lean_usize_of_nat(v_start_3751_);
v___x_3760_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v_root_3754_, v___x_3759_, v_shift_3756_, v_init_3750_);
v___x_3761_ = lean_array_get_size(v_tail_3755_);
v___x_3762_ = lean_nat_dec_lt(v___x_3752_, v___x_3761_);
if (v___x_3762_ == 0)
{
return v___x_3760_;
}
else
{
size_t v___x_3763_; size_t v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = ((size_t)0ULL);
v___x_3764_ = lean_usize_of_nat(v___x_3761_);
v___x_3765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3755_, v___x_3763_, v___x_3764_, v___x_3760_);
return v___x_3765_;
}
}
else
{
lean_object* v___x_3766_; lean_object* v___x_3767_; uint8_t v___x_3768_; 
v___x_3766_ = lean_nat_sub(v_start_3751_, v_tailOff_3757_);
v___x_3767_ = lean_array_get_size(v_tail_3755_);
v___x_3768_ = lean_nat_dec_lt(v___x_3766_, v___x_3767_);
if (v___x_3768_ == 0)
{
lean_dec(v___x_3766_);
return v_init_3750_;
}
else
{
size_t v___x_3769_; size_t v___x_3770_; lean_object* v___x_3771_; 
v___x_3769_ = lean_usize_of_nat(v___x_3766_);
lean_dec(v___x_3766_);
v___x_3770_ = lean_usize_of_nat(v___x_3767_);
v___x_3771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3755_, v___x_3769_, v___x_3770_, v_init_3750_);
return v___x_3771_;
}
}
}
else
{
lean_object* v_root_3772_; lean_object* v_tail_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; uint8_t v___x_3776_; 
v_root_3772_ = lean_ctor_get(v_t_3749_, 0);
v_tail_3773_ = lean_ctor_get(v_t_3749_, 1);
v___x_3774_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v_root_3772_, v_init_3750_);
v___x_3775_ = lean_array_get_size(v_tail_3773_);
v___x_3776_ = lean_nat_dec_lt(v___x_3752_, v___x_3775_);
if (v___x_3776_ == 0)
{
return v___x_3774_;
}
else
{
size_t v___x_3777_; size_t v___x_3778_; lean_object* v___x_3779_; 
v___x_3777_ = ((size_t)0ULL);
v___x_3778_ = lean_usize_of_nat(v___x_3775_);
v___x_3779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3773_, v___x_3777_, v___x_3778_, v___x_3774_);
return v___x_3779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0___boxed(lean_object* v_t_3780_, lean_object* v_init_3781_, lean_object* v_start_3782_){
_start:
{
lean_object* v_res_3783_; 
v_res_3783_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(v_t_3780_, v_init_3781_, v_start_3782_);
lean_dec(v_start_3782_);
lean_dec_ref(v_t_3780_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_getInfoMessages(lean_object* v_log_3784_){
_start:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v_unreported_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3798_; 
v___x_3785_ = lean_unsigned_to_nat(32u);
v___x_3786_ = lean_mk_empty_array_with_capacity(v___x_3785_);
lean_dec_ref(v___x_3786_);
v___x_3787_ = lean_unsigned_to_nat(0u);
v___x_3788_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3789_ = lean_ctor_get(v_log_3784_, 1);
v_isSharedCheck_3798_ = !lean_is_exclusive(v_log_3784_);
if (v_isSharedCheck_3798_ == 0)
{
lean_object* v_unused_3799_; lean_object* v_unused_3800_; 
v_unused_3799_ = lean_ctor_get(v_log_3784_, 2);
lean_dec(v_unused_3799_);
v_unused_3800_ = lean_ctor_get(v_log_3784_, 0);
lean_dec(v_unused_3800_);
v___x_3791_ = v_log_3784_;
v_isShared_3792_ = v_isSharedCheck_3798_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_unreported_3789_);
lean_dec(v_log_3784_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3798_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3796_; 
v___x_3793_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(v_unreported_3789_, v___x_3788_, v___x_3787_);
lean_dec_ref(v_unreported_3789_);
v___x_3794_ = l_Lean_NameSet_empty;
if (v_isShared_3792_ == 0)
{
lean_ctor_set(v___x_3791_, 2, v___x_3794_);
lean_ctor_set(v___x_3791_, 1, v___x_3793_);
lean_ctor_set(v___x_3791_, 0, v___x_3788_);
v___x_3796_ = v___x_3791_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3788_);
lean_ctor_set(v_reuseFailAlloc_3797_, 1, v___x_3793_);
lean_ctor_set(v_reuseFailAlloc_3797_, 2, v___x_3794_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(lean_object* v_as_3801_, size_t v_i_3802_, size_t v_stop_3803_, lean_object* v_b_3804_){
_start:
{
lean_object* v___y_3806_; uint8_t v___x_3810_; 
v___x_3810_ = lean_usize_dec_eq(v_i_3802_, v_stop_3803_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; uint8_t v_severity_3812_; 
v___x_3811_ = lean_array_uget_borrowed(v_as_3801_, v_i_3802_);
v_severity_3812_ = lean_ctor_get_uint8(v___x_3811_, sizeof(void*)*5 + 1);
if (v_severity_3812_ == 1)
{
lean_object* v___x_3813_; 
lean_inc(v___x_3811_);
v___x_3813_ = l_Lean_PersistentArray_push___redArg(v_b_3804_, v___x_3811_);
v___y_3806_ = v___x_3813_;
goto v___jp_3805_;
}
else
{
v___y_3806_ = v_b_3804_;
goto v___jp_3805_;
}
}
else
{
return v_b_3804_;
}
v___jp_3805_:
{
size_t v___x_3807_; size_t v___x_3808_; 
v___x_3807_ = ((size_t)1ULL);
v___x_3808_ = lean_usize_add(v_i_3802_, v___x_3807_);
v_i_3802_ = v___x_3808_;
v_b_3804_ = v___y_3806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1___boxed(lean_object* v_as_3814_, lean_object* v_i_3815_, lean_object* v_stop_3816_, lean_object* v_b_3817_){
_start:
{
size_t v_i_boxed_3818_; size_t v_stop_boxed_3819_; lean_object* v_res_3820_; 
v_i_boxed_3818_ = lean_unbox_usize(v_i_3815_);
lean_dec(v_i_3815_);
v_stop_boxed_3819_ = lean_unbox_usize(v_stop_3816_);
lean_dec(v_stop_3816_);
v_res_3820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_as_3814_, v_i_boxed_3818_, v_stop_boxed_3819_, v_b_3817_);
lean_dec_ref(v_as_3814_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(lean_object* v_x_3821_, lean_object* v_x_3822_){
_start:
{
if (lean_obj_tag(v_x_3821_) == 0)
{
lean_object* v_cs_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; uint8_t v___x_3826_; 
v_cs_3823_ = lean_ctor_get(v_x_3821_, 0);
v___x_3824_ = lean_unsigned_to_nat(0u);
v___x_3825_ = lean_array_get_size(v_cs_3823_);
v___x_3826_ = lean_nat_dec_lt(v___x_3824_, v___x_3825_);
if (v___x_3826_ == 0)
{
return v_x_3822_;
}
else
{
size_t v___x_3827_; size_t v___x_3828_; lean_object* v___x_3829_; 
v___x_3827_ = ((size_t)0ULL);
v___x_3828_ = lean_usize_of_nat(v___x_3825_);
v___x_3829_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3823_, v___x_3827_, v___x_3828_, v_x_3822_);
return v___x_3829_;
}
}
else
{
lean_object* v_vs_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; 
v_vs_3830_ = lean_ctor_get(v_x_3821_, 0);
v___x_3831_ = lean_unsigned_to_nat(0u);
v___x_3832_ = lean_array_get_size(v_vs_3830_);
v___x_3833_ = lean_nat_dec_lt(v___x_3831_, v___x_3832_);
if (v___x_3833_ == 0)
{
return v_x_3822_;
}
else
{
size_t v___x_3834_; size_t v___x_3835_; lean_object* v___x_3836_; 
v___x_3834_ = ((size_t)0ULL);
v___x_3835_ = lean_usize_of_nat(v___x_3832_);
v___x_3836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3830_, v___x_3834_, v___x_3835_, v_x_3822_);
return v___x_3836_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(lean_object* v_as_3837_, size_t v_i_3838_, size_t v_stop_3839_, lean_object* v_b_3840_){
_start:
{
uint8_t v___x_3841_; 
v___x_3841_ = lean_usize_dec_eq(v_i_3838_, v_stop_3839_);
if (v___x_3841_ == 0)
{
lean_object* v___x_3842_; lean_object* v___x_3843_; size_t v___x_3844_; size_t v___x_3845_; 
v___x_3842_ = lean_array_uget_borrowed(v_as_3837_, v_i_3838_);
v___x_3843_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v___x_3842_, v_b_3840_);
v___x_3844_ = ((size_t)1ULL);
v___x_3845_ = lean_usize_add(v_i_3838_, v___x_3844_);
v_i_3838_ = v___x_3845_;
v_b_3840_ = v___x_3843_;
goto _start;
}
else
{
return v_b_3840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3847_, lean_object* v_i_3848_, lean_object* v_stop_3849_, lean_object* v_b_3850_){
_start:
{
size_t v_i_boxed_3851_; size_t v_stop_boxed_3852_; lean_object* v_res_3853_; 
v_i_boxed_3851_ = lean_unbox_usize(v_i_3848_);
lean_dec(v_i_3848_);
v_stop_boxed_3852_ = lean_unbox_usize(v_stop_3849_);
lean_dec(v_stop_3849_);
v_res_3853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_as_3847_, v_i_boxed_3851_, v_stop_boxed_3852_, v_b_3850_);
lean_dec_ref(v_as_3847_);
return v_res_3853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2___boxed(lean_object* v_x_3854_, lean_object* v_x_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v_x_3854_, v_x_3855_);
lean_dec_ref(v_x_3854_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(lean_object* v_x_3857_, size_t v_x_3858_, size_t v_x_3859_, lean_object* v_x_3860_){
_start:
{
if (lean_obj_tag(v_x_3857_) == 0)
{
lean_object* v_cs_3861_; lean_object* v___x_3862_; size_t v___x_3863_; lean_object* v_j_3864_; lean_object* v___x_3865_; size_t v___x_3866_; size_t v___x_3867_; size_t v___x_3868_; size_t v___x_3869_; size_t v___x_3870_; size_t v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; uint8_t v___x_3876_; 
v_cs_3861_ = lean_ctor_get(v_x_3857_, 0);
v___x_3862_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0);
v___x_3863_ = lean_usize_shift_right(v_x_3858_, v_x_3859_);
v_j_3864_ = lean_usize_to_nat(v___x_3863_);
v___x_3865_ = lean_array_get_borrowed(v___x_3862_, v_cs_3861_, v_j_3864_);
v___x_3866_ = ((size_t)1ULL);
v___x_3867_ = lean_usize_shift_left(v___x_3866_, v_x_3859_);
v___x_3868_ = lean_usize_sub(v___x_3867_, v___x_3866_);
v___x_3869_ = lean_usize_land(v_x_3858_, v___x_3868_);
v___x_3870_ = ((size_t)5ULL);
v___x_3871_ = lean_usize_sub(v_x_3859_, v___x_3870_);
v___x_3872_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v___x_3865_, v___x_3869_, v___x_3871_, v_x_3860_);
v___x_3873_ = lean_unsigned_to_nat(1u);
v___x_3874_ = lean_nat_add(v_j_3864_, v___x_3873_);
lean_dec(v_j_3864_);
v___x_3875_ = lean_array_get_size(v_cs_3861_);
v___x_3876_ = lean_nat_dec_lt(v___x_3874_, v___x_3875_);
if (v___x_3876_ == 0)
{
lean_dec(v___x_3874_);
return v___x_3872_;
}
else
{
size_t v___x_3877_; size_t v___x_3878_; lean_object* v___x_3879_; 
v___x_3877_ = lean_usize_of_nat(v___x_3874_);
lean_dec(v___x_3874_);
v___x_3878_ = lean_usize_of_nat(v___x_3875_);
v___x_3879_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3861_, v___x_3877_, v___x_3878_, v___x_3872_);
return v___x_3879_;
}
}
else
{
lean_object* v_vs_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; 
v_vs_3880_ = lean_ctor_get(v_x_3857_, 0);
v___x_3881_ = lean_usize_to_nat(v_x_3858_);
v___x_3882_ = lean_array_get_size(v_vs_3880_);
v___x_3883_ = lean_nat_dec_lt(v___x_3881_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_dec(v___x_3881_);
return v_x_3860_;
}
else
{
size_t v___x_3884_; size_t v___x_3885_; lean_object* v___x_3886_; 
v___x_3884_ = lean_usize_of_nat(v___x_3881_);
lean_dec(v___x_3881_);
v___x_3885_ = lean_usize_of_nat(v___x_3882_);
v___x_3886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3880_, v___x_3884_, v___x_3885_, v_x_3860_);
return v___x_3886_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0___boxed(lean_object* v_x_3887_, lean_object* v_x_3888_, lean_object* v_x_3889_, lean_object* v_x_3890_){
_start:
{
size_t v_x_1152__boxed_3891_; size_t v_x_1153__boxed_3892_; lean_object* v_res_3893_; 
v_x_1152__boxed_3891_ = lean_unbox_usize(v_x_3888_);
lean_dec(v_x_3888_);
v_x_1153__boxed_3892_ = lean_unbox_usize(v_x_3889_);
lean_dec(v_x_3889_);
v_res_3893_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v_x_3887_, v_x_1152__boxed_3891_, v_x_1153__boxed_3892_, v_x_3890_);
lean_dec_ref(v_x_3887_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(lean_object* v_t_3894_, lean_object* v_init_3895_, lean_object* v_start_3896_){
_start:
{
lean_object* v___x_3897_; uint8_t v___x_3898_; 
v___x_3897_ = lean_unsigned_to_nat(0u);
v___x_3898_ = lean_nat_dec_eq(v_start_3896_, v___x_3897_);
if (v___x_3898_ == 0)
{
lean_object* v_root_3899_; lean_object* v_tail_3900_; size_t v_shift_3901_; lean_object* v_tailOff_3902_; uint8_t v___x_3903_; 
v_root_3899_ = lean_ctor_get(v_t_3894_, 0);
v_tail_3900_ = lean_ctor_get(v_t_3894_, 1);
v_shift_3901_ = lean_ctor_get_usize(v_t_3894_, 4);
v_tailOff_3902_ = lean_ctor_get(v_t_3894_, 3);
v___x_3903_ = lean_nat_dec_le(v_tailOff_3902_, v_start_3896_);
if (v___x_3903_ == 0)
{
size_t v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; uint8_t v___x_3907_; 
v___x_3904_ = lean_usize_of_nat(v_start_3896_);
v___x_3905_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v_root_3899_, v___x_3904_, v_shift_3901_, v_init_3895_);
v___x_3906_ = lean_array_get_size(v_tail_3900_);
v___x_3907_ = lean_nat_dec_lt(v___x_3897_, v___x_3906_);
if (v___x_3907_ == 0)
{
return v___x_3905_;
}
else
{
size_t v___x_3908_; size_t v___x_3909_; lean_object* v___x_3910_; 
v___x_3908_ = ((size_t)0ULL);
v___x_3909_ = lean_usize_of_nat(v___x_3906_);
v___x_3910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_3900_, v___x_3908_, v___x_3909_, v___x_3905_);
return v___x_3910_;
}
}
else
{
lean_object* v___x_3911_; lean_object* v___x_3912_; uint8_t v___x_3913_; 
v___x_3911_ = lean_nat_sub(v_start_3896_, v_tailOff_3902_);
v___x_3912_ = lean_array_get_size(v_tail_3900_);
v___x_3913_ = lean_nat_dec_lt(v___x_3911_, v___x_3912_);
if (v___x_3913_ == 0)
{
lean_dec(v___x_3911_);
return v_init_3895_;
}
else
{
size_t v___x_3914_; size_t v___x_3915_; lean_object* v___x_3916_; 
v___x_3914_ = lean_usize_of_nat(v___x_3911_);
lean_dec(v___x_3911_);
v___x_3915_ = lean_usize_of_nat(v___x_3912_);
v___x_3916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_3900_, v___x_3914_, v___x_3915_, v_init_3895_);
return v___x_3916_;
}
}
}
else
{
lean_object* v_root_3917_; lean_object* v_tail_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; uint8_t v___x_3921_; 
v_root_3917_ = lean_ctor_get(v_t_3894_, 0);
v_tail_3918_ = lean_ctor_get(v_t_3894_, 1);
v___x_3919_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v_root_3917_, v_init_3895_);
v___x_3920_ = lean_array_get_size(v_tail_3918_);
v___x_3921_ = lean_nat_dec_lt(v___x_3897_, v___x_3920_);
if (v___x_3921_ == 0)
{
return v___x_3919_;
}
else
{
size_t v___x_3922_; size_t v___x_3923_; lean_object* v___x_3924_; 
v___x_3922_ = ((size_t)0ULL);
v___x_3923_ = lean_usize_of_nat(v___x_3920_);
v___x_3924_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_3918_, v___x_3922_, v___x_3923_, v___x_3919_);
return v___x_3924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0___boxed(lean_object* v_t_3925_, lean_object* v_init_3926_, lean_object* v_start_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(v_t_3925_, v_init_3926_, v_start_3927_);
lean_dec(v_start_3927_);
lean_dec_ref(v_t_3925_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_getWarningMessages(lean_object* v_log_3929_){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v_unreported_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3943_; 
v___x_3930_ = lean_unsigned_to_nat(32u);
v___x_3931_ = lean_mk_empty_array_with_capacity(v___x_3930_);
lean_dec_ref(v___x_3931_);
v___x_3932_ = lean_unsigned_to_nat(0u);
v___x_3933_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3934_ = lean_ctor_get(v_log_3929_, 1);
v_isSharedCheck_3943_ = !lean_is_exclusive(v_log_3929_);
if (v_isSharedCheck_3943_ == 0)
{
lean_object* v_unused_3944_; lean_object* v_unused_3945_; 
v_unused_3944_ = lean_ctor_get(v_log_3929_, 2);
lean_dec(v_unused_3944_);
v_unused_3945_ = lean_ctor_get(v_log_3929_, 0);
lean_dec(v_unused_3945_);
v___x_3936_ = v_log_3929_;
v_isShared_3937_ = v_isSharedCheck_3943_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_unreported_3934_);
lean_dec(v_log_3929_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3943_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3941_; 
v___x_3938_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(v_unreported_3934_, v___x_3933_, v___x_3932_);
lean_dec_ref(v_unreported_3934_);
v___x_3939_ = l_Lean_NameSet_empty;
if (v_isShared_3937_ == 0)
{
lean_ctor_set(v___x_3936_, 2, v___x_3939_);
lean_ctor_set(v___x_3936_, 1, v___x_3938_);
lean_ctor_set(v___x_3936_, 0, v___x_3933_);
v___x_3941_ = v___x_3936_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3942_, 1, v___x_3938_);
lean_ctor_set(v_reuseFailAlloc_3942_, 2, v___x_3939_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___redArg(lean_object* v_inst_3946_, lean_object* v_log_3947_, lean_object* v_f_3948_){
_start:
{
lean_object* v_unreported_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v_unreported_3949_ = lean_ctor_get(v_log_3947_, 1);
lean_inc_ref(v_unreported_3949_);
lean_dec_ref(v_log_3947_);
v___x_3950_ = lean_unsigned_to_nat(0u);
v___x_3951_ = l_Lean_PersistentArray_forM___redArg(v_inst_3946_, v_unreported_3949_, v_f_3948_, v___x_3950_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM(lean_object* v_m_3952_, lean_object* v_inst_3953_, lean_object* v_log_3954_, lean_object* v_f_3955_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = l_Lean_MessageLog_forM___redArg(v_inst_3953_, v_log_3954_, v_f_3955_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList(lean_object* v_log_3957_){
_start:
{
lean_object* v_unreported_3958_; lean_object* v___x_3959_; 
v_unreported_3958_ = lean_ctor_get(v_log_3957_, 1);
v___x_3959_ = l_Lean_PersistentArray_toList___redArg(v_unreported_3958_);
return v___x_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList___boxed(lean_object* v_log_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Lean_MessageLog_toList(v_log_3960_);
lean_dec_ref(v_log_3960_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray(lean_object* v_log_3962_){
_start:
{
lean_object* v_unreported_3963_; lean_object* v___x_3964_; 
v_unreported_3963_ = lean_ctor_get(v_log_3962_, 1);
v___x_3964_ = l_Lean_PersistentArray_toArray___redArg(v_unreported_3963_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray___boxed(lean_object* v_log_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lean_MessageLog_toArray(v_log_3965_);
lean_dec_ref(v_log_3965_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nestD(lean_object* v_msg_3967_){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3968_ = lean_unsigned_to_nat(2u);
v___x_3969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
lean_ctor_set(v___x_3969_, 1, v_msg_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_indentD(lean_object* v_msg_3970_){
_start:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3971_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_3972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3971_);
lean_ctor_set(v___x_3972_, 1, v_msg_3970_);
v___x_3973_ = l_Lean_MessageData_nestD(v___x_3972_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_indentExpr(lean_object* v_e_3974_){
_start:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3975_ = l_Lean_MessageData_ofExpr(v_e_3974_);
v___x_3976_ = l_Lean_indentD(v___x_3975_);
return v___x_3976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively(lean_object* v_ctx_3977_, lean_object* v_msg_3978_){
_start:
{
lean_object* v_env_3980_; lean_object* v_mctx_3981_; lean_object* v_lctx_3982_; lean_object* v_opts_3983_; lean_object* v_currNamespace_3984_; lean_object* v_openDecls_3985_; lean_object* v___x_3986_; lean_object* v_msg_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; 
v_env_3980_ = lean_ctor_get(v_ctx_3977_, 0);
v_mctx_3981_ = lean_ctor_get(v_ctx_3977_, 1);
v_lctx_3982_ = lean_ctor_get(v_ctx_3977_, 2);
v_opts_3983_ = lean_ctor_get(v_ctx_3977_, 3);
v_currNamespace_3984_ = lean_ctor_get(v_ctx_3977_, 4);
v_openDecls_3985_ = lean_ctor_get(v_ctx_3977_, 5);
lean_inc(v_openDecls_3985_);
lean_inc(v_currNamespace_3984_);
v___x_3986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3986_, 0, v_currNamespace_3984_);
lean_ctor_set(v___x_3986_, 1, v_openDecls_3985_);
v_msg_3987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_msg_3987_, 0, v___x_3986_);
lean_ctor_set(v_msg_3987_, 1, v_msg_3978_);
lean_inc_ref(v_opts_3983_);
lean_inc_ref(v_lctx_3982_);
lean_inc_ref(v_mctx_3981_);
lean_inc_ref(v_env_3980_);
v___x_3988_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3988_, 0, v_env_3980_);
lean_ctor_set(v___x_3988_, 1, v_mctx_3981_);
lean_ctor_set(v___x_3988_, 2, v_lctx_3982_);
lean_ctor_set(v___x_3988_, 3, v_opts_3983_);
v___x_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3988_);
v___x_3990_ = l_Lean_MessageData_format(v_msg_3987_, v___x_3989_);
v___x_3991_ = l_Std_Format_defWidth;
v___x_3992_ = lean_unsigned_to_nat(0u);
v___x_3993_ = l_Std_Format_pretty(v___x_3990_, v___x_3991_, v___x_3992_, v___x_3992_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively___boxed(lean_object* v_ctx_3994_, lean_object* v_msg_3995_, lean_object* v___y_3996_){
_start:
{
lean_object* v_res_3997_; 
v_res_3997_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_3994_, v_msg_3995_);
lean_dec_ref(v_ctx_3994_);
return v_res_3997_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(lean_object* v_s_3998_, lean_object* v_a_3999_, uint8_t v_b_4000_){
_start:
{
lean_object* v_str_4001_; lean_object* v_startInclusive_4002_; lean_object* v_endExclusive_4003_; lean_object* v___x_4004_; uint8_t v_decide_4005_; 
v_str_4001_ = lean_ctor_get(v_s_3998_, 0);
v_startInclusive_4002_ = lean_ctor_get(v_s_3998_, 1);
v_endExclusive_4003_ = lean_ctor_get(v_s_3998_, 2);
v___x_4004_ = lean_nat_sub(v_endExclusive_4003_, v_startInclusive_4002_);
v_decide_4005_ = lean_nat_dec_eq(v_a_3999_, v___x_4004_);
lean_dec(v___x_4004_);
if (v_decide_4005_ == 0)
{
lean_object* v___x_4006_; uint32_t v___x_4007_; uint32_t v___x_4008_; uint8_t v___x_4009_; 
v___x_4006_ = lean_nat_add(v_startInclusive_4002_, v_a_3999_);
lean_dec(v_a_3999_);
v___x_4007_ = lean_string_utf8_get_fast(v_str_4001_, v___x_4006_);
v___x_4008_ = 10;
v___x_4009_ = lean_uint32_dec_eq(v___x_4007_, v___x_4008_);
if (v___x_4009_ == 0)
{
lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4010_ = lean_string_utf8_next_fast(v_str_4001_, v___x_4006_);
lean_dec(v___x_4006_);
v___x_4011_ = lean_nat_sub(v___x_4010_, v_startInclusive_4002_);
v_a_3999_ = v___x_4011_;
v_b_4000_ = v___x_4009_;
goto _start;
}
else
{
lean_dec(v___x_4006_);
return v___x_4009_;
}
}
else
{
lean_dec(v_a_3999_);
return v_b_4000_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg___boxed(lean_object* v_s_4013_, lean_object* v_a_4014_, lean_object* v_b_4015_){
_start:
{
uint8_t v_b_boxed_4016_; uint8_t v_res_4017_; lean_object* v_r_4018_; 
v_b_boxed_4016_ = lean_unbox(v_b_4015_);
v_res_4017_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4013_, v_a_4014_, v_b_boxed_4016_);
lean_dec_ref(v_s_4013_);
v_r_4018_ = lean_box(v_res_4017_);
return v_r_4018_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(lean_object* v_s_4019_){
_start:
{
lean_object* v_searcher_4020_; uint8_t v___x_4021_; uint8_t v___x_4022_; 
v_searcher_4020_ = lean_unsigned_to_nat(0u);
v___x_4021_ = 0;
v___x_4022_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4019_, v_searcher_4020_, v___x_4021_);
return v___x_4022_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_inlineExpr_spec__1___boxed(lean_object* v_s_4023_){
_start:
{
uint8_t v_res_4024_; lean_object* v_r_4025_; 
v_res_4024_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v_s_4023_);
lean_dec_ref(v_s_4023_);
v_r_4025_ = lean_box(v_res_4024_);
return v_r_4025_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(lean_object* v___x_4026_, lean_object* v_val_4027_, lean_object* v_a_4028_, lean_object* v_b_4029_){
_start:
{
uint8_t v_decide_4030_; 
v_decide_4030_ = lean_nat_dec_eq(v_a_4028_, v___x_4026_);
if (v_decide_4030_ == 0)
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4031_ = lean_string_utf8_next_fast(v_val_4027_, v_a_4028_);
lean_dec(v_a_4028_);
v___x_4032_ = lean_unsigned_to_nat(1u);
v___x_4033_ = lean_nat_add(v_b_4029_, v___x_4032_);
lean_dec(v_b_4029_);
v_a_4028_ = v___x_4031_;
v_b_4029_ = v___x_4033_;
goto _start;
}
else
{
lean_dec(v_a_4028_);
return v_b_4029_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg___boxed(lean_object* v___x_4035_, lean_object* v_val_4036_, lean_object* v_a_4037_, lean_object* v_b_4038_){
_start:
{
lean_object* v_res_4039_; 
v_res_4039_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4035_, v_val_4036_, v_a_4037_, v_b_4038_);
lean_dec_ref(v_val_4036_);
lean_dec(v___x_4035_);
return v_res_4039_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4040_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_4041_ = l_Lean_MessageData_ofFormat(v___x_4040_);
return v___x_4041_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4045_; lean_object* v___x_4046_; 
v___x_4045_ = ((lean_object*)(l_Lean_inlineExpr___lam__0___closed__2));
v___x_4046_ = l_Lean_MessageData_ofFormat(v___x_4045_);
return v___x_4046_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; 
v___x_4050_ = ((lean_object*)(l_Lean_inlineExpr___lam__0___closed__5));
v___x_4051_ = l_Lean_MessageData_ofFormat(v___x_4050_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0(lean_object* v_e_4052_, lean_object* v_maxInlineLength_4053_, lean_object* v_ctx_4054_){
_start:
{
lean_object* v_msg_4056_; lean_object* v___x_4057_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; uint8_t v___x_4066_; 
v_msg_4056_ = l_Lean_MessageData_ofExpr(v_e_4052_);
lean_inc_ref(v_msg_4056_);
v___x_4057_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4054_, v_msg_4056_);
v___x_4062_ = lean_unsigned_to_nat(0u);
v___x_4063_ = lean_string_utf8_byte_size(v___x_4057_);
lean_inc_ref(v___x_4057_);
v___x_4064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4057_);
lean_ctor_set(v___x_4064_, 1, v___x_4062_);
lean_ctor_set(v___x_4064_, 2, v___x_4063_);
v___x_4065_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4063_, v___x_4057_, v___x_4062_, v___x_4062_);
lean_dec_ref(v___x_4057_);
v___x_4066_ = lean_nat_dec_lt(v_maxInlineLength_4053_, v___x_4065_);
lean_dec(v___x_4065_);
if (v___x_4066_ == 0)
{
uint8_t v___x_4067_; 
v___x_4067_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v___x_4064_);
lean_dec_ref_known(v___x_4064_, 3);
if (v___x_4067_ == 0)
{
lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v___x_4068_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
lean_ctor_set(v___x_4069_, 1, v_msg_4056_);
v___x_4070_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__6, &l_Lean_inlineExpr___lam__0___closed__6_once, _init_l_Lean_inlineExpr___lam__0___closed__6);
v___x_4071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4069_);
lean_ctor_set(v___x_4071_, 1, v___x_4070_);
return v___x_4071_;
}
else
{
goto v___jp_4058_;
}
}
else
{
lean_dec_ref_known(v___x_4064_, 3);
goto v___jp_4058_;
}
v___jp_4058_:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4059_ = l_Lean_indentD(v_msg_4056_);
v___x_4060_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__0, &l_Lean_inlineExpr___lam__0___closed__0_once, _init_l_Lean_inlineExpr___lam__0___closed__0);
v___x_4061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4059_);
lean_ctor_set(v___x_4061_, 1, v___x_4060_);
return v___x_4061_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0___boxed(lean_object* v_e_4072_, lean_object* v_maxInlineLength_4073_, lean_object* v_ctx_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_inlineExpr___lam__0(v_e_4072_, v_maxInlineLength_4073_, v_ctx_4074_);
lean_dec_ref(v_ctx_4074_);
lean_dec(v_maxInlineLength_4073_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2(lean_object* v_e_4077_, lean_object* v_x_4078_){
_start:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4080_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4081_ = l_Lean_MessageData_ofExpr(v_e_4077_);
v___x_4082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4080_);
lean_ctor_set(v___x_4082_, 1, v___x_4081_);
v___x_4083_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__6, &l_Lean_inlineExpr___lam__0___closed__6_once, _init_l_Lean_inlineExpr___lam__0___closed__6);
v___x_4084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4082_);
lean_ctor_set(v___x_4084_, 1, v___x_4083_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2___boxed(lean_object* v_e_4085_, lean_object* v_x_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_Lean_inlineExpr___lam__2(v_e_4085_, v_x_4086_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr(lean_object* v_e_4089_, lean_object* v_maxInlineLength_4090_){
_start:
{
lean_object* v___f_4091_; lean_object* v___f_4092_; lean_object* v___f_4093_; lean_object* v___x_4094_; 
lean_inc_ref_n(v_e_4089_, 2);
v___f_4091_ = lean_alloc_closure((void*)(l_Lean_inlineExpr___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4091_, 0, v_e_4089_);
lean_closure_set(v___f_4091_, 1, v_maxInlineLength_4090_);
v___f_4092_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4092_, 0, v_e_4089_);
v___f_4093_ = lean_alloc_closure((void*)(l_Lean_inlineExpr___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4093_, 0, v_e_4089_);
v___x_4094_ = l_Lean_MessageData_lazy(v___f_4091_, v___f_4092_, v___f_4093_);
return v___x_4094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(lean_object* v___x_4095_, lean_object* v___x_4096_, lean_object* v_val_4097_, lean_object* v_inst_4098_, lean_object* v_R_4099_, lean_object* v_a_4100_, lean_object* v_b_4101_, lean_object* v_c_4102_){
_start:
{
lean_object* v___x_4103_; 
v___x_4103_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4095_, v_val_4097_, v_a_4100_, v_b_4101_);
return v___x_4103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___boxed(lean_object* v___x_4104_, lean_object* v___x_4105_, lean_object* v_val_4106_, lean_object* v_inst_4107_, lean_object* v_R_4108_, lean_object* v_a_4109_, lean_object* v_b_4110_, lean_object* v_c_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(v___x_4104_, v___x_4105_, v_val_4106_, v_inst_4107_, v_R_4108_, v_a_4109_, v_b_4110_, v_c_4111_);
lean_dec_ref(v_val_4106_);
lean_dec_ref(v___x_4105_);
lean_dec(v___x_4104_);
return v_res_4112_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(lean_object* v_s_4113_, lean_object* v_inst_4114_, lean_object* v_R_4115_, lean_object* v_a_4116_, uint8_t v_b_4117_, lean_object* v_c_4118_){
_start:
{
uint8_t v___x_4119_; 
v___x_4119_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4113_, v_a_4116_, v_b_4117_);
return v___x_4119_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___boxed(lean_object* v_s_4120_, lean_object* v_inst_4121_, lean_object* v_R_4122_, lean_object* v_a_4123_, lean_object* v_b_4124_, lean_object* v_c_4125_){
_start:
{
uint8_t v_b_boxed_4126_; uint8_t v_res_4127_; lean_object* v_r_4128_; 
v_b_boxed_4126_ = lean_unbox(v_b_4124_);
v_res_4127_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(v_s_4120_, v_inst_4121_, v_R_4122_, v_a_4123_, v_b_boxed_4126_, v_c_4125_);
lean_dec_ref(v_s_4120_);
v_r_4128_ = lean_box(v_res_4127_);
return v_r_4128_;
}
}
static lean_object* _init_l_Lean_inlineExprTrailing___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; 
v___x_4132_ = ((lean_object*)(l_Lean_inlineExprTrailing___lam__0___closed__1));
v___x_4133_ = l_Lean_MessageData_ofFormat(v___x_4132_);
return v___x_4133_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0(lean_object* v_e_4134_, lean_object* v_maxInlineLength_4135_, lean_object* v_ctx_4136_){
_start:
{
lean_object* v_msg_4138_; lean_object* v___x_4139_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; 
v_msg_4138_ = l_Lean_MessageData_ofExpr(v_e_4134_);
lean_inc_ref(v_msg_4138_);
v___x_4139_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4136_, v_msg_4138_);
v___x_4142_ = lean_unsigned_to_nat(0u);
v___x_4143_ = lean_string_utf8_byte_size(v___x_4139_);
lean_inc_ref(v___x_4139_);
v___x_4144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4139_);
lean_ctor_set(v___x_4144_, 1, v___x_4142_);
lean_ctor_set(v___x_4144_, 2, v___x_4143_);
v___x_4145_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4143_, v___x_4139_, v___x_4142_, v___x_4142_);
lean_dec_ref(v___x_4139_);
v___x_4146_ = lean_nat_dec_lt(v_maxInlineLength_4135_, v___x_4145_);
lean_dec(v___x_4145_);
if (v___x_4146_ == 0)
{
uint8_t v___x_4147_; 
v___x_4147_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v___x_4144_);
lean_dec_ref_known(v___x_4144_, 3);
if (v___x_4147_ == 0)
{
lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4148_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4148_);
lean_ctor_set(v___x_4149_, 1, v_msg_4138_);
v___x_4150_ = lean_obj_once(&l_Lean_inlineExprTrailing___lam__0___closed__2, &l_Lean_inlineExprTrailing___lam__0___closed__2_once, _init_l_Lean_inlineExprTrailing___lam__0___closed__2);
v___x_4151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4149_);
lean_ctor_set(v___x_4151_, 1, v___x_4150_);
return v___x_4151_;
}
else
{
goto v___jp_4140_;
}
}
else
{
lean_dec_ref_known(v___x_4144_, 3);
goto v___jp_4140_;
}
v___jp_4140_:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_Lean_indentD(v_msg_4138_);
return v___x_4141_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0___boxed(lean_object* v_e_4152_, lean_object* v_maxInlineLength_4153_, lean_object* v_ctx_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v_res_4156_; 
v_res_4156_ = l_Lean_inlineExprTrailing___lam__0(v_e_4152_, v_maxInlineLength_4153_, v_ctx_4154_);
lean_dec_ref(v_ctx_4154_);
lean_dec(v_maxInlineLength_4153_);
return v_res_4156_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2(lean_object* v_e_4157_, lean_object* v_x_4158_){
_start:
{
lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; 
v___x_4160_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__3, &l_Lean_inlineExpr___lam__0___closed__3_once, _init_l_Lean_inlineExpr___lam__0___closed__3);
v___x_4161_ = l_Lean_MessageData_ofExpr(v_e_4157_);
v___x_4162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4160_);
lean_ctor_set(v___x_4162_, 1, v___x_4161_);
v___x_4163_ = lean_obj_once(&l_Lean_inlineExprTrailing___lam__0___closed__2, &l_Lean_inlineExprTrailing___lam__0___closed__2_once, _init_l_Lean_inlineExprTrailing___lam__0___closed__2);
v___x_4164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4162_);
lean_ctor_set(v___x_4164_, 1, v___x_4163_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2___boxed(lean_object* v_e_4165_, lean_object* v_x_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_Lean_inlineExprTrailing___lam__2(v_e_4165_, v_x_4166_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing(lean_object* v_e_4169_, lean_object* v_maxInlineLength_4170_){
_start:
{
lean_object* v___f_4171_; lean_object* v___f_4172_; lean_object* v___f_4173_; lean_object* v___x_4174_; 
lean_inc_ref_n(v_e_4169_, 2);
v___f_4171_ = lean_alloc_closure((void*)(l_Lean_inlineExprTrailing___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4171_, 0, v_e_4169_);
lean_closure_set(v___f_4171_, 1, v_maxInlineLength_4170_);
v___f_4172_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4172_, 0, v_e_4169_);
v___f_4173_ = lean_alloc_closure((void*)(l_Lean_inlineExprTrailing___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4173_, 0, v_e_4169_);
v___x_4174_ = l_Lean_MessageData_lazy(v___f_4171_, v___f_4172_, v___f_4173_);
return v___x_4174_;
}
}
static lean_object* _init_l_Lean_aquote___closed__2(void){
_start:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; 
v___x_4178_ = ((lean_object*)(l_Lean_aquote___closed__1));
v___x_4179_ = l_Lean_MessageData_ofFormat(v___x_4178_);
return v___x_4179_;
}
}
static lean_object* _init_l_Lean_aquote___closed__5(void){
_start:
{
lean_object* v___x_4183_; lean_object* v___x_4184_; 
v___x_4183_ = ((lean_object*)(l_Lean_aquote___closed__4));
v___x_4184_ = l_Lean_MessageData_ofFormat(v___x_4183_);
return v___x_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_aquote(lean_object* v_msg_4185_){
_start:
{
lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4186_ = lean_obj_once(&l_Lean_aquote___closed__2, &l_Lean_aquote___closed__2_once, _init_l_Lean_aquote___closed__2);
v___x_4187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4186_);
lean_ctor_set(v___x_4187_, 1, v_msg_4185_);
v___x_4188_ = lean_obj_once(&l_Lean_aquote___closed__5, &l_Lean_aquote___closed__5_once, _init_l_Lean_aquote___closed__5);
v___x_4189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4187_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
return v___x_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object* v_inst_4190_, lean_object* v_inst_4191_, lean_object* v_msg_4192_){
_start:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; 
v___x_4193_ = lean_apply_1(v_inst_4190_, v_msg_4192_);
v___x_4194_ = lean_apply_2(v_inst_4191_, lean_box(0), v___x_4193_);
return v___x_4194_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg(lean_object* v_inst_4195_, lean_object* v_inst_4196_){
_start:
{
lean_object* v___f_4197_; 
v___f_4197_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4197_, 0, v_inst_4196_);
lean_closure_set(v___f_4197_, 1, v_inst_4195_);
return v___f_4197_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift(lean_object* v_m_4198_, lean_object* v_n_4199_, lean_object* v_inst_4200_, lean_object* v_inst_4201_){
_start:
{
lean_object* v___f_4202_; 
v___f_4202_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4202_, 0, v_inst_4201_);
lean_closure_set(v___f_4202_, 1, v_inst_4200_);
return v___f_4202_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4203_ = lean_unsigned_to_nat(32u);
v___x_4204_ = lean_mk_empty_array_with_capacity(v___x_4203_);
v___x_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4204_);
return v___x_4205_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1(void){
_start:
{
size_t v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4206_ = ((size_t)5ULL);
v___x_4207_ = lean_unsigned_to_nat(0u);
v___x_4208_ = lean_unsigned_to_nat(32u);
v___x_4209_ = lean_mk_empty_array_with_capacity(v___x_4208_);
v___x_4210_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__0, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__0_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__0);
v___x_4211_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4211_, 0, v___x_4210_);
lean_ctor_set(v___x_4211_, 1, v___x_4209_);
lean_ctor_set(v___x_4211_, 2, v___x_4207_);
lean_ctor_set(v___x_4211_, 3, v___x_4207_);
lean_ctor_set_usize(v___x_4211_, 4, v___x_4206_);
return v___x_4211_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4212_ = lean_box(1);
v___x_4213_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__1, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1);
v___x_4214_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1);
v___x_4215_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
lean_ctor_set(v___x_4215_, 1, v___x_4213_);
lean_ctor_set(v___x_4215_, 2, v___x_4212_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__0(lean_object* v_env_4216_, lean_object* v_msgData_4217_, lean_object* v_toPure_4218_, lean_object* v_opts_4219_){
_start:
{
lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4220_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_4221_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__2, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__2_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__2);
v___x_4222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4222_, 0, v_env_4216_);
lean_ctor_set(v___x_4222_, 1, v___x_4220_);
lean_ctor_set(v___x_4222_, 2, v___x_4221_);
lean_ctor_set(v___x_4222_, 3, v_opts_4219_);
v___x_4223_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4222_);
lean_ctor_set(v___x_4223_, 1, v_msgData_4217_);
v___x_4224_ = lean_apply_2(v_toPure_4218_, lean_box(0), v___x_4223_);
return v___x_4224_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__1(lean_object* v_msgData_4225_, lean_object* v_toPure_4226_, lean_object* v_toBind_4227_, lean_object* v_inst_4228_, lean_object* v_env_4229_){
_start:
{
lean_object* v___f_4230_; lean_object* v___x_4231_; 
v___f_4230_ = lean_alloc_closure((void*)(l_Lean_addMessageContextPartial___redArg___lam__0), 4, 3);
lean_closure_set(v___f_4230_, 0, v_env_4229_);
lean_closure_set(v___f_4230_, 1, v_msgData_4225_);
lean_closure_set(v___f_4230_, 2, v_toPure_4226_);
v___x_4231_ = lean_apply_4(v_toBind_4227_, lean_box(0), lean_box(0), v_inst_4228_, v___f_4230_);
return v___x_4231_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg(lean_object* v_inst_4232_, lean_object* v_inst_4233_, lean_object* v_inst_4234_, lean_object* v_msgData_4235_){
_start:
{
lean_object* v_toApplicative_4236_; lean_object* v_toBind_4237_; lean_object* v_getEnv_4238_; lean_object* v_toPure_4239_; lean_object* v___f_4240_; lean_object* v___x_4241_; 
v_toApplicative_4236_ = lean_ctor_get(v_inst_4232_, 0);
lean_inc_ref(v_toApplicative_4236_);
v_toBind_4237_ = lean_ctor_get(v_inst_4232_, 1);
lean_inc_n(v_toBind_4237_, 2);
lean_dec_ref(v_inst_4232_);
v_getEnv_4238_ = lean_ctor_get(v_inst_4233_, 0);
lean_inc(v_getEnv_4238_);
lean_dec_ref(v_inst_4233_);
v_toPure_4239_ = lean_ctor_get(v_toApplicative_4236_, 1);
lean_inc(v_toPure_4239_);
lean_dec_ref(v_toApplicative_4236_);
v___f_4240_ = lean_alloc_closure((void*)(l_Lean_addMessageContextPartial___redArg___lam__1), 5, 4);
lean_closure_set(v___f_4240_, 0, v_msgData_4235_);
lean_closure_set(v___f_4240_, 1, v_toPure_4239_);
lean_closure_set(v___f_4240_, 2, v_toBind_4237_);
lean_closure_set(v___f_4240_, 3, v_inst_4234_);
v___x_4241_ = lean_apply_4(v_toBind_4237_, lean_box(0), lean_box(0), v_getEnv_4238_, v___f_4240_);
return v___x_4241_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial(lean_object* v_m_4242_, lean_object* v_inst_4243_, lean_object* v_inst_4244_, lean_object* v_inst_4245_, lean_object* v_msgData_4246_){
_start:
{
lean_object* v___x_4247_; 
v___x_4247_ = l_Lean_addMessageContextPartial___redArg(v_inst_4243_, v_inst_4244_, v_inst_4245_, v_msgData_4246_);
return v___x_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__0(lean_object* v_env_4248_, lean_object* v_mctx_4249_, lean_object* v_lctx_4250_, lean_object* v_msgData_4251_, lean_object* v_toPure_4252_, lean_object* v_opts_4253_){
_start:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v___x_4254_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4254_, 0, v_env_4248_);
lean_ctor_set(v___x_4254_, 1, v_mctx_4249_);
lean_ctor_set(v___x_4254_, 2, v_lctx_4250_);
lean_ctor_set(v___x_4254_, 3, v_opts_4253_);
v___x_4255_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4254_);
lean_ctor_set(v___x_4255_, 1, v_msgData_4251_);
v___x_4256_ = lean_apply_2(v_toPure_4252_, lean_box(0), v___x_4255_);
return v___x_4256_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__1(lean_object* v_env_4257_, lean_object* v_mctx_4258_, lean_object* v_msgData_4259_, lean_object* v_toPure_4260_, lean_object* v_toBind_4261_, lean_object* v_inst_4262_, lean_object* v_lctx_4263_){
_start:
{
lean_object* v___f_4264_; lean_object* v___x_4265_; 
v___f_4264_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__0), 6, 5);
lean_closure_set(v___f_4264_, 0, v_env_4257_);
lean_closure_set(v___f_4264_, 1, v_mctx_4258_);
lean_closure_set(v___f_4264_, 2, v_lctx_4263_);
lean_closure_set(v___f_4264_, 3, v_msgData_4259_);
lean_closure_set(v___f_4264_, 4, v_toPure_4260_);
v___x_4265_ = lean_apply_4(v_toBind_4261_, lean_box(0), lean_box(0), v_inst_4262_, v___f_4264_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__2(lean_object* v_env_4266_, lean_object* v_msgData_4267_, lean_object* v_toPure_4268_, lean_object* v_toBind_4269_, lean_object* v_inst_4270_, lean_object* v_inst_4271_, lean_object* v_mctx_4272_){
_start:
{
lean_object* v___f_4273_; lean_object* v___x_4274_; 
lean_inc(v_toBind_4269_);
v___f_4273_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__1), 7, 6);
lean_closure_set(v___f_4273_, 0, v_env_4266_);
lean_closure_set(v___f_4273_, 1, v_mctx_4272_);
lean_closure_set(v___f_4273_, 2, v_msgData_4267_);
lean_closure_set(v___f_4273_, 3, v_toPure_4268_);
lean_closure_set(v___f_4273_, 4, v_toBind_4269_);
lean_closure_set(v___f_4273_, 5, v_inst_4270_);
v___x_4274_ = lean_apply_4(v_toBind_4269_, lean_box(0), lean_box(0), v_inst_4271_, v___f_4273_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__3(lean_object* v_inst_4275_, lean_object* v_msgData_4276_, lean_object* v_toPure_4277_, lean_object* v_toBind_4278_, lean_object* v_inst_4279_, lean_object* v_inst_4280_, lean_object* v_env_4281_){
_start:
{
lean_object* v_getMCtx_4282_; lean_object* v___f_4283_; lean_object* v___x_4284_; 
v_getMCtx_4282_ = lean_ctor_get(v_inst_4275_, 0);
lean_inc(v_getMCtx_4282_);
lean_dec_ref(v_inst_4275_);
lean_inc(v_toBind_4278_);
v___f_4283_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__2), 7, 6);
lean_closure_set(v___f_4283_, 0, v_env_4281_);
lean_closure_set(v___f_4283_, 1, v_msgData_4276_);
lean_closure_set(v___f_4283_, 2, v_toPure_4277_);
lean_closure_set(v___f_4283_, 3, v_toBind_4278_);
lean_closure_set(v___f_4283_, 4, v_inst_4279_);
lean_closure_set(v___f_4283_, 5, v_inst_4280_);
v___x_4284_ = lean_apply_4(v_toBind_4278_, lean_box(0), lean_box(0), v_getMCtx_4282_, v___f_4283_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg(lean_object* v_inst_4285_, lean_object* v_inst_4286_, lean_object* v_inst_4287_, lean_object* v_inst_4288_, lean_object* v_inst_4289_, lean_object* v_msgData_4290_){
_start:
{
lean_object* v_toApplicative_4291_; lean_object* v_toBind_4292_; lean_object* v_getEnv_4293_; lean_object* v_toPure_4294_; lean_object* v___f_4295_; lean_object* v___x_4296_; 
v_toApplicative_4291_ = lean_ctor_get(v_inst_4285_, 0);
lean_inc_ref(v_toApplicative_4291_);
v_toBind_4292_ = lean_ctor_get(v_inst_4285_, 1);
lean_inc_n(v_toBind_4292_, 2);
lean_dec_ref(v_inst_4285_);
v_getEnv_4293_ = lean_ctor_get(v_inst_4286_, 0);
lean_inc(v_getEnv_4293_);
lean_dec_ref(v_inst_4286_);
v_toPure_4294_ = lean_ctor_get(v_toApplicative_4291_, 1);
lean_inc(v_toPure_4294_);
lean_dec_ref(v_toApplicative_4291_);
v___f_4295_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__3), 7, 6);
lean_closure_set(v___f_4295_, 0, v_inst_4287_);
lean_closure_set(v___f_4295_, 1, v_msgData_4290_);
lean_closure_set(v___f_4295_, 2, v_toPure_4294_);
lean_closure_set(v___f_4295_, 3, v_toBind_4292_);
lean_closure_set(v___f_4295_, 4, v_inst_4289_);
lean_closure_set(v___f_4295_, 5, v_inst_4288_);
v___x_4296_ = lean_apply_4(v_toBind_4292_, lean_box(0), lean_box(0), v_getEnv_4293_, v___f_4295_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull(lean_object* v_m_4297_, lean_object* v_inst_4298_, lean_object* v_inst_4299_, lean_object* v_inst_4300_, lean_object* v_inst_4301_, lean_object* v_inst_4302_, lean_object* v_msgData_4303_){
_start:
{
lean_object* v___x_4304_; 
v___x_4304_ = l_Lean_addMessageContextFull___redArg(v_inst_4298_, v_inst_4299_, v_inst_4300_, v_inst_4301_, v_inst_4302_, v_msgData_4303_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg(){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___closed__0));
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg___boxed(lean_object* v___dummy_4309_){
_start:
{
lean_object* v_res_4310_; 
v_res_4310_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg();
return v_res_4310_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4311_; 
v___x_4311_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___redArg();
return v___x_4311_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(lean_object* v_s_4312_){
_start:
{
lean_object* v___x_4313_; 
v___x_4313_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___boxed(lean_object* v_s_4314_){
_start:
{
lean_object* v_res_4315_; 
v_res_4315_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(v_s_4314_);
lean_dec_ref(v_s_4314_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(lean_object* v_str_4316_, lean_object* v___x_4317_, lean_object* v___x_4318_, lean_object* v_a_4319_, lean_object* v_b_4320_){
_start:
{
lean_object* v_it_4322_; lean_object* v_startInclusive_4323_; lean_object* v_endExclusive_4324_; 
if (lean_obj_tag(v_a_4319_) == 0)
{
lean_object* v_currPos_4330_; lean_object* v_searcher_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4354_; 
v_currPos_4330_ = lean_ctor_get(v_a_4319_, 0);
v_searcher_4331_ = lean_ctor_get(v_a_4319_, 1);
v_isSharedCheck_4354_ = !lean_is_exclusive(v_a_4319_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4333_ = v_a_4319_;
v_isShared_4334_ = v_isSharedCheck_4354_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_searcher_4331_);
lean_inc(v_currPos_4330_);
lean_dec(v_a_4319_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4354_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
uint8_t v_decide_4335_; 
v_decide_4335_ = lean_nat_dec_eq(v_searcher_4331_, v___x_4318_);
if (v_decide_4335_ == 0)
{
uint32_t v___x_4336_; uint32_t v___x_4337_; uint8_t v___x_4338_; 
v___x_4336_ = 10;
v___x_4337_ = lean_string_utf8_get_fast(v_str_4316_, v_searcher_4331_);
v___x_4338_ = lean_uint32_dec_eq(v___x_4337_, v___x_4336_);
if (v___x_4338_ == 0)
{
lean_object* v___x_4339_; lean_object* v___x_4341_; 
v___x_4339_ = lean_string_utf8_next_fast(v_str_4316_, v_searcher_4331_);
lean_dec(v_searcher_4331_);
if (v_isShared_4334_ == 0)
{
lean_ctor_set(v___x_4333_, 1, v___x_4339_);
v___x_4341_ = v___x_4333_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_currPos_4330_);
lean_ctor_set(v_reuseFailAlloc_4343_, 1, v___x_4339_);
v___x_4341_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
v_a_4319_ = v___x_4341_;
goto _start;
}
}
else
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v_slice_4347_; lean_object* v_nextIt_4349_; 
v___x_4344_ = lean_string_utf8_next_fast(v_str_4316_, v_searcher_4331_);
v___x_4345_ = lean_nat_sub(v___x_4344_, v_searcher_4331_);
v___x_4346_ = lean_nat_add(v_searcher_4331_, v___x_4345_);
lean_dec(v___x_4345_);
v_slice_4347_ = l_String_Slice_subslice_x21(v___x_4317_, v_currPos_4330_, v_searcher_4331_);
lean_inc(v___x_4346_);
if (v_isShared_4334_ == 0)
{
lean_ctor_set(v___x_4333_, 1, v___x_4346_);
lean_ctor_set(v___x_4333_, 0, v___x_4346_);
v_nextIt_4349_ = v___x_4333_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4352_; 
v_reuseFailAlloc_4352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4352_, 0, v___x_4346_);
lean_ctor_set(v_reuseFailAlloc_4352_, 1, v___x_4346_);
v_nextIt_4349_ = v_reuseFailAlloc_4352_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
lean_object* v_startInclusive_4350_; lean_object* v_endExclusive_4351_; 
v_startInclusive_4350_ = lean_ctor_get(v_slice_4347_, 0);
lean_inc(v_startInclusive_4350_);
v_endExclusive_4351_ = lean_ctor_get(v_slice_4347_, 1);
lean_inc(v_endExclusive_4351_);
lean_dec_ref(v_slice_4347_);
v_it_4322_ = v_nextIt_4349_;
v_startInclusive_4323_ = v_startInclusive_4350_;
v_endExclusive_4324_ = v_endExclusive_4351_;
goto v___jp_4321_;
}
}
}
else
{
lean_object* v___x_4353_; 
lean_del_object(v___x_4333_);
lean_dec(v_searcher_4331_);
v___x_4353_ = lean_box(1);
lean_inc(v___x_4318_);
v_it_4322_ = v___x_4353_;
v_startInclusive_4323_ = v_currPos_4330_;
v_endExclusive_4324_ = v___x_4318_;
goto v___jp_4321_;
}
}
}
else
{
lean_dec(v___x_4318_);
return v_b_4320_;
}
v___jp_4321_:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4325_ = lean_string_utf8_extract_fast(v_str_4316_, v_startInclusive_4323_, v_endExclusive_4324_);
lean_dec(v_endExclusive_4324_);
lean_dec(v_startInclusive_4323_);
v___x_4326_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4326_, 0, v___x_4325_);
v___x_4327_ = l_Lean_MessageData_ofFormat(v___x_4326_);
v___x_4328_ = lean_array_push(v_b_4320_, v___x_4327_);
v_a_4319_ = v_it_4322_;
v_b_4320_ = v___x_4328_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg___boxed(lean_object* v_str_4355_, lean_object* v___x_4356_, lean_object* v___x_4357_, lean_object* v_a_4358_, lean_object* v_b_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4355_, v___x_4356_, v___x_4357_, v_a_4358_, v_b_4359_);
lean_dec_ref(v___x_4356_);
lean_dec_ref(v_str_4355_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l_Lean_stringToMessageData(lean_object* v_str_4363_){
_start:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v_lines_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4364_ = lean_unsigned_to_nat(0u);
v___x_4365_ = lean_string_utf8_byte_size(v_str_4363_);
lean_inc_ref(v_str_4363_);
v___x_4366_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4366_, 0, v_str_4363_);
lean_ctor_set(v___x_4366_, 1, v___x_4364_);
lean_ctor_set(v___x_4366_, 2, v___x_4365_);
v_lines_4367_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0);
v___x_4368_ = ((lean_object*)(l_Lean_stringToMessageData___closed__0));
v___x_4369_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4363_, v___x_4366_, v___x_4365_, v_lines_4367_, v___x_4368_);
lean_dec_ref_known(v___x_4366_, 3);
lean_dec_ref(v_str_4363_);
v___x_4370_ = lean_array_to_list(v___x_4369_);
v___x_4371_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4372_ = l_Lean_MessageData_joinSep(v___x_4370_, v___x_4371_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(lean_object* v_str_4373_, lean_object* v___x_4374_, lean_object* v___x_4375_, lean_object* v_inst_4376_, lean_object* v_R_4377_, lean_object* v_a_4378_, lean_object* v_b_4379_){
_start:
{
lean_object* v___x_4380_; 
v___x_4380_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4373_, v___x_4374_, v___x_4375_, v_a_4378_, v_b_4379_);
return v___x_4380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___boxed(lean_object* v_str_4381_, lean_object* v___x_4382_, lean_object* v___x_4383_, lean_object* v_inst_4384_, lean_object* v_R_4385_, lean_object* v_a_4386_, lean_object* v_b_4387_){
_start:
{
lean_object* v_res_4388_; 
v_res_4388_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(v_str_4381_, v___x_4382_, v___x_4383_, v_inst_4384_, v_R_4385_, v_a_4386_, v_b_4387_);
lean_dec_ref(v___x_4382_);
lean_dec_ref(v_str_4381_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat___redArg(lean_object* v_inst_4389_){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4390_ = ((lean_object*)(l_Lean_MessageData_instCoeString___closed__1));
v___x_4391_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4391_, 0, lean_box(0));
lean_closure_set(v___x_4391_, 1, lean_box(0));
lean_closure_set(v___x_4391_, 2, lean_box(0));
lean_closure_set(v___x_4391_, 3, v___x_4390_);
lean_closure_set(v___x_4391_, 4, v_inst_4389_);
return v___x_4391_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat(lean_object* v_00_u03b1_4392_, lean_object* v_inst_4393_){
_start:
{
lean_object* v___x_4394_; 
v___x_4394_ = l_Lean_instToMessageDataOfToFormat___redArg(v_inst_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg(){
_start:
{
lean_object* v___f_4402_; 
v___f_4402_ = ((lean_object*)(l_Lean_MessageData_instCoeSyntax___closed__0));
return v___f_4402_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___redArg___boxed(lean_object* v___dummy_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l_Lean_instToMessageDataTSyntax___redArg();
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax(lean_object* v_k_4405_){
_start:
{
lean_object* v___f_4406_; 
v___f_4406_ = ((lean_object*)(l_Lean_MessageData_instCoeSyntax___closed__0));
return v___f_4406_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___boxed(lean_object* v_k_4407_){
_start:
{
lean_object* v_res_4408_; 
v_res_4408_ = l_Lean_instToMessageDataTSyntax(v_k_4407_);
lean_dec(v_k_4407_);
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg___lam__0(lean_object* v_inst_4413_, lean_object* v_as_4414_){
_start:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
v___x_4415_ = lean_box(0);
v___x_4416_ = l_List_mapTR_loop___redArg(v_inst_4413_, v_as_4414_, v___x_4415_);
v___x_4417_ = l_Lean_MessageData_ofList(v___x_4416_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg(lean_object* v_inst_4418_){
_start:
{
lean_object* v___f_4419_; 
v___f_4419_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4419_, 0, v_inst_4418_);
return v___f_4419_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList(lean_object* v_00_u03b1_4420_, lean_object* v_inst_4421_){
_start:
{
lean_object* v___f_4422_; 
v___f_4422_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4422_, 0, v_inst_4421_);
return v___f_4422_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg___lam__0(lean_object* v_inst_4423_, lean_object* v_as_4424_){
_start:
{
lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4425_ = lean_array_to_list(v_as_4424_);
v___x_4426_ = lean_box(0);
v___x_4427_ = l_List_mapTR_loop___redArg(v_inst_4423_, v___x_4425_, v___x_4426_);
v___x_4428_ = l_Lean_MessageData_ofList(v___x_4427_);
return v___x_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg(lean_object* v_inst_4429_){
_start:
{
lean_object* v___f_4430_; 
v___f_4430_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4430_, 0, v_inst_4429_);
return v___f_4430_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray(lean_object* v_00_u03b1_4431_, lean_object* v_inst_4432_){
_start:
{
lean_object* v___f_4433_; 
v___f_4433_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4433_, 0, v_inst_4432_);
return v___f_4433_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__0(lean_object* v_it_4434_, lean_object* v_acc_4435_, lean_object* v_recur_4436_){
_start:
{
lean_object* v_array_4437_; lean_object* v_start_4438_; lean_object* v_stop_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4452_; 
v_array_4437_ = lean_ctor_get(v_it_4434_, 0);
v_start_4438_ = lean_ctor_get(v_it_4434_, 1);
v_stop_4439_ = lean_ctor_get(v_it_4434_, 2);
v_isSharedCheck_4452_ = !lean_is_exclusive(v_it_4434_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4441_ = v_it_4434_;
v_isShared_4442_ = v_isSharedCheck_4452_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_stop_4439_);
lean_inc(v_start_4438_);
lean_inc(v_array_4437_);
lean_dec(v_it_4434_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4452_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
uint8_t v___x_4443_; 
v___x_4443_ = lean_nat_dec_lt(v_start_4438_, v_stop_4439_);
if (v___x_4443_ == 0)
{
lean_del_object(v___x_4441_);
lean_dec(v_stop_4439_);
lean_dec(v_start_4438_);
lean_dec_ref(v_array_4437_);
lean_dec_ref(v_recur_4436_);
return v_acc_4435_;
}
else
{
lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4447_; 
v___x_4444_ = lean_unsigned_to_nat(1u);
v___x_4445_ = lean_nat_add(v_start_4438_, v___x_4444_);
lean_inc_ref(v_array_4437_);
if (v_isShared_4442_ == 0)
{
lean_ctor_set(v___x_4441_, 1, v___x_4445_);
v___x_4447_ = v___x_4441_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_array_4437_);
lean_ctor_set(v_reuseFailAlloc_4451_, 1, v___x_4445_);
lean_ctor_set(v_reuseFailAlloc_4451_, 2, v_stop_4439_);
v___x_4447_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4448_ = lean_array_fget(v_array_4437_, v_start_4438_);
lean_dec(v_start_4438_);
lean_dec_ref(v_array_4437_);
v___x_4449_ = lean_array_push(v_acc_4435_, v___x_4448_);
v___x_4450_ = lean_apply_3(v_recur_4436_, v___x_4447_, v___x_4449_, lean_box(0));
return v___x_4450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1(lean_object* v___f_4455_, lean_object* v_inst_4456_, lean_object* v_as_4457_){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4458_ = ((lean_object*)(l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0));
v___x_4459_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_4455_, v_as_4457_, v___x_4458_);
v___x_4460_ = lean_array_to_list(v___x_4459_);
v___x_4461_ = lean_box(0);
v___x_4462_ = l_List_mapTR_loop___redArg(v_inst_4456_, v___x_4460_, v___x_4461_);
v___x_4463_ = l_Lean_MessageData_ofList(v___x_4462_);
return v___x_4463_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg(lean_object* v_inst_4465_){
_start:
{
lean_object* v___f_4466_; lean_object* v___f_4467_; 
v___f_4466_ = ((lean_object*)(l_Lean_instToMessageDataSubarray___redArg___closed__0));
v___f_4467_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataSubarray___redArg___lam__1), 3, 2);
lean_closure_set(v___f_4467_, 0, v___f_4466_);
lean_closure_set(v___f_4467_, 1, v_inst_4465_);
return v___f_4467_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray(lean_object* v_00_u03b1_4468_, lean_object* v_inst_4469_){
_start:
{
lean_object* v___x_4470_; 
v___x_4470_ = l_Lean_instToMessageDataSubarray___redArg(v_inst_4469_);
return v___x_4470_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4474_; lean_object* v___x_4475_; 
v___x_4474_ = ((lean_object*)(l_Lean_instToMessageDataOption___redArg___lam__0___closed__1));
v___x_4475_ = l_Lean_MessageData_ofFormat(v___x_4474_);
return v___x_4475_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4478_ = ((lean_object*)(l_Lean_instToMessageDataOption___redArg___lam__0___closed__3));
v___x_4479_ = l_Lean_MessageData_ofFormat(v___x_4478_);
return v___x_4479_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg___lam__0(lean_object* v_inst_4480_, lean_object* v_x_4481_){
_start:
{
if (lean_obj_tag(v_x_4481_) == 0)
{
lean_object* v___x_4482_; 
lean_dec_ref(v_inst_4480_);
v___x_4482_ = lean_obj_once(&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2);
return v___x_4482_;
}
else
{
lean_object* v_val_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v_val_4483_ = lean_ctor_get(v_x_4481_, 0);
lean_inc(v_val_4483_);
lean_dec_ref_known(v_x_4481_, 1);
v___x_4484_ = lean_obj_once(&l_Lean_instToMessageDataOption___redArg___lam__0___closed__2, &l_Lean_instToMessageDataOption___redArg___lam__0___closed__2_once, _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__2);
v___x_4485_ = lean_apply_1(v_inst_4480_, v_val_4483_);
v___x_4486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4484_);
lean_ctor_set(v___x_4486_, 1, v___x_4485_);
v___x_4487_ = lean_obj_once(&l_Lean_instToMessageDataOption___redArg___lam__0___closed__4, &l_Lean_instToMessageDataOption___redArg___lam__0___closed__4_once, _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__4);
v___x_4488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4486_);
lean_ctor_set(v___x_4488_, 1, v___x_4487_);
return v___x_4488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg(lean_object* v_inst_4489_){
_start:
{
lean_object* v___f_4490_; 
v___f_4490_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4490_, 0, v_inst_4489_);
return v___f_4490_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption(lean_object* v_00_u03b1_4491_, lean_object* v_inst_4492_){
_start:
{
lean_object* v___f_4493_; 
v___f_4493_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4493_, 0, v_inst_4492_);
return v___f_4493_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg___lam__0(lean_object* v_inst_4494_, lean_object* v_inst_4495_, lean_object* v_x_4496_){
_start:
{
lean_object* v_fst_4497_; lean_object* v_snd_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4512_; 
v_fst_4497_ = lean_ctor_get(v_x_4496_, 0);
v_snd_4498_ = lean_ctor_get(v_x_4496_, 1);
v_isSharedCheck_4512_ = !lean_is_exclusive(v_x_4496_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4500_ = v_x_4496_;
v_isShared_4501_ = v_isSharedCheck_4512_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_snd_4498_);
lean_inc(v_fst_4497_);
lean_dec(v_x_4496_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4512_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4505_; 
v___x_4502_ = lean_apply_1(v_inst_4494_, v_fst_4497_);
v___x_4503_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__5, &l_Lean_MessageData_ofList___closed__5_once, _init_l_Lean_MessageData_ofList___closed__5);
if (v_isShared_4501_ == 0)
{
lean_ctor_set_tag(v___x_4500_, 7);
lean_ctor_set(v___x_4500_, 1, v___x_4503_);
lean_ctor_set(v___x_4500_, 0, v___x_4502_);
v___x_4505_ = v___x_4500_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4511_; 
v_reuseFailAlloc_4511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4511_, 0, v___x_4502_);
lean_ctor_set(v_reuseFailAlloc_4511_, 1, v___x_4503_);
v___x_4505_ = v_reuseFailAlloc_4511_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4506_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4505_);
lean_ctor_set(v___x_4507_, 1, v___x_4506_);
v___x_4508_ = lean_apply_1(v_inst_4495_, v_snd_4498_);
v___x_4509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4507_);
lean_ctor_set(v___x_4509_, 1, v___x_4508_);
v___x_4510_ = l_Lean_MessageData_paren(v___x_4509_);
return v___x_4510_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg(lean_object* v_inst_4513_, lean_object* v_inst_4514_){
_start:
{
lean_object* v___f_4515_; 
v___f_4515_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4515_, 0, v_inst_4513_);
lean_closure_set(v___f_4515_, 1, v_inst_4514_);
return v___f_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd(lean_object* v_00_u03b1_4516_, lean_object* v_00_u03b2_4517_, lean_object* v_inst_4518_, lean_object* v_inst_4519_){
_start:
{
lean_object* v___f_4520_; 
v___f_4520_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4520_, 0, v_inst_4518_);
lean_closure_set(v___f_4520_, 1, v_inst_4519_);
return v___f_4520_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOptionExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = ((lean_object*)(l_Lean_instToMessageDataOptionExpr___lam__0___closed__1));
v___x_4525_ = l_Lean_MessageData_ofFormat(v___x_4524_);
return v___x_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOptionExpr___lam__0(lean_object* v_x_4526_){
_start:
{
if (lean_obj_tag(v_x_4526_) == 0)
{
lean_object* v___x_4527_; 
v___x_4527_ = lean_obj_once(&l_Lean_instToMessageDataOptionExpr___lam__0___closed__2, &l_Lean_instToMessageDataOptionExpr___lam__0___closed__2_once, _init_l_Lean_instToMessageDataOptionExpr___lam__0___closed__2);
return v___x_4527_;
}
else
{
lean_object* v_val_4528_; lean_object* v___x_4529_; 
v_val_4528_ = lean_ctor_get(v_x_4526_, 0);
lean_inc(v_val_4528_);
lean_dec_ref_known(v_x_4526_, 1);
v___x_4529_ = l_Lean_MessageData_ofExpr(v_val_4528_);
return v___x_4529_;
}
}
}
static lean_object* _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0(void){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = ((lean_object*)(l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_139_));
v___x_4564_ = l_String_toRawSubstring_x27(v___x_4563_);
return v___x_4564_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7(void){
_start:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; 
v___x_4579_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6));
v___x_4580_ = l_String_toRawSubstring_x27(v___x_4579_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(lean_object* v_x_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v___x_4597_; uint8_t v___x_4598_; 
v___x_4597_ = ((lean_object*)(l_Lean_termM_x21___00__closed__1));
lean_inc(v_x_4594_);
v___x_4598_ = l_Lean_Syntax_isOfKind(v_x_4594_, v___x_4597_);
if (v___x_4598_ == 0)
{
lean_object* v___x_4599_; lean_object* v___x_4600_; 
lean_dec(v_x_4594_);
v___x_4599_ = lean_box(1);
v___x_4600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
lean_ctor_set(v___x_4600_, 1, v___y_4596_);
return v___x_4600_;
}
else
{
lean_object* v_quotContext_4601_; lean_object* v_currMacroScope_4602_; lean_object* v_ref_4603_; lean_object* v___x_4604_; lean_object* v_interpStr_4605_; uint8_t v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v_quotContext_4601_ = lean_ctor_get(v___y_4595_, 1);
v_currMacroScope_4602_ = lean_ctor_get(v___y_4595_, 2);
v_ref_4603_ = lean_ctor_get(v___y_4595_, 5);
v___x_4604_ = lean_unsigned_to_nat(1u);
v_interpStr_4605_ = l_Lean_Syntax_getArg(v_x_4594_, v___x_4604_);
lean_dec(v_x_4594_);
v___x_4606_ = 0;
v___x_4607_ = l_Lean_SourceInfo_fromRef(v_ref_4603_, v___x_4606_);
v___x_4608_ = lean_obj_once(&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0, &l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0_once, _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0);
v___x_4609_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1));
lean_inc_n(v_currMacroScope_4602_, 2);
lean_inc_n(v_quotContext_4601_, 2);
v___x_4610_ = l_Lean_addMacroScope(v_quotContext_4601_, v___x_4609_, v_currMacroScope_4602_);
v___x_4611_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5));
lean_inc(v___x_4607_);
v___x_4612_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4612_, 0, v___x_4607_);
lean_ctor_set(v___x_4612_, 1, v___x_4608_);
lean_ctor_set(v___x_4612_, 2, v___x_4610_);
lean_ctor_set(v___x_4612_, 3, v___x_4611_);
v___x_4613_ = lean_obj_once(&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7, &l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7_once, _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7);
v___x_4614_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8));
v___x_4615_ = l_Lean_addMacroScope(v_quotContext_4601_, v___x_4614_, v_currMacroScope_4602_);
v___x_4616_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12));
v___x_4617_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4617_, 0, v___x_4607_);
lean_ctor_set(v___x_4617_, 1, v___x_4613_);
lean_ctor_set(v___x_4617_, 2, v___x_4615_);
lean_ctor_set(v___x_4617_, 3, v___x_4616_);
lean_inc_ref(v___x_4617_);
v___x_4618_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_4605_, v___x_4612_, v___x_4617_, v___x_4617_, v___y_4595_, v___y_4596_);
lean_dec(v_interpStr_4605_);
if (lean_obj_tag(v___x_4618_) == 0)
{
lean_object* v_a_4619_; lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4627_; 
v_a_4619_ = lean_ctor_get(v___x_4618_, 0);
v_a_4620_ = lean_ctor_get(v___x_4618_, 1);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4622_ = v___x_4618_;
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_inc(v_a_4619_);
lean_dec(v___x_4618_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
if (v_isShared_4623_ == 0)
{
v___x_4625_ = v___x_4622_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4619_);
lean_ctor_set(v_reuseFailAlloc_4626_, 1, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
else
{
lean_object* v_a_4628_; lean_object* v_a_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4636_; 
v_a_4628_ = lean_ctor_get(v___x_4618_, 0);
v_a_4629_ = lean_ctor_get(v___x_4618_, 1);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4631_ = v___x_4618_;
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_a_4629_);
lean_inc(v_a_4628_);
lean_dec(v___x_4618_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
if (v_isShared_4632_ == 0)
{
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4628_);
lean_ctor_set(v_reuseFailAlloc_4635_, 1, v_a_4629_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
return v___x_4634_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___boxed(lean_object* v_x_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_){
_start:
{
lean_object* v_res_4640_; 
v_res_4640_ = l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(v_x_4637_, v___y_4638_, v___y_4639_);
lean_dec_ref(v___y_4638_);
return v_res_4640_;
}
}
static lean_object* _init_l_Lean_toMessageList___closed__1(void){
_start:
{
lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4642_ = ((lean_object*)(l_Lean_toMessageList___closed__0));
v___x_4643_ = l_Lean_stringToMessageData(v___x_4642_);
return v___x_4643_;
}
}
LEAN_EXPORT lean_object* l_Lean_toMessageList(lean_object* v_msgs_4644_){
_start:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4645_ = lean_array_to_list(v_msgs_4644_);
v___x_4646_ = lean_obj_once(&l_Lean_toMessageList___closed__1, &l_Lean_toMessageList___closed__1_once, _init_l_Lean_toMessageList___closed__1);
v___x_4647_ = l_Lean_MessageData_joinSep(v___x_4645_, v___x_4646_);
v___x_4648_ = l_Lean_indentD(v___x_4647_);
return v___x_4648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(lean_object* v_env_4649_, lean_object* v_lctx_4650_, lean_object* v_opts_4651_, lean_object* v_msg_4652_){
_start:
{
lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4653_ = l_Lean_Environment_ofKernelEnv(v_env_4649_);
v___x_4654_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_4655_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4653_);
lean_ctor_set(v___x_4655_, 1, v___x_4654_);
lean_ctor_set(v___x_4655_, 2, v_lctx_4650_);
lean_ctor_set(v___x_4655_, 3, v_opts_4651_);
v___x_4656_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4656_, 0, v___x_4655_);
lean_ctor_set(v___x_4656_, 1, v_msg_4652_);
return v___x_4656_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4658_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0));
v___x_4659_ = l_Lean_stringToMessageData(v___x_4658_);
return v___x_4659_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4661_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2));
v___x_4662_ = l_Lean_stringToMessageData(v___x_4661_);
return v___x_4662_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4664_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4));
v___x_4665_ = l_Lean_stringToMessageData(v___x_4664_);
return v___x_4665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0(lean_object* v_givenType_4666_, lean_object* v_n_4667_, lean_object* v_expectedType_4668_){
_start:
{
lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4669_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1);
v___x_4670_ = l_Lean_MessageData_ofName(v_n_4667_);
v___x_4671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4671_, 0, v___x_4669_);
lean_ctor_set(v___x_4671_, 1, v___x_4670_);
v___x_4672_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3);
v___x_4673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4673_, 0, v___x_4671_);
lean_ctor_set(v___x_4673_, 1, v___x_4672_);
v___x_4674_ = l_Lean_indentExpr(v_givenType_4666_);
v___x_4675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4673_);
lean_ctor_set(v___x_4675_, 1, v___x_4674_);
v___x_4676_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5);
v___x_4677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4677_, 0, v___x_4675_);
lean_ctor_set(v___x_4677_, 1, v___x_4676_);
v___x_4678_ = l_Lean_indentExpr(v_expectedType_4668_);
v___x_4679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4677_);
lean_ctor_set(v___x_4679_, 1, v___x_4678_);
return v___x_4679_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4680_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0);
v___x_4681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4681_, 0, v___x_4680_);
return v___x_4681_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; 
v___x_4682_ = lean_box(1);
v___x_4683_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__1, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1);
v___x_4684_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__0, &l_Lean_Kernel_Exception_toMessageData___closed__0_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__0);
v___x_4685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4684_);
lean_ctor_set(v___x_4685_, 1, v___x_4683_);
lean_ctor_set(v___x_4685_, 2, v___x_4682_);
return v___x_4685_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4687_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__2));
v___x_4688_ = l_Lean_stringToMessageData(v___x_4687_);
return v___x_4688_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__5(void){
_start:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4690_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__4));
v___x_4691_ = l_Lean_stringToMessageData(v___x_4690_);
return v___x_4691_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__7(void){
_start:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4693_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__6));
v___x_4694_ = l_Lean_stringToMessageData(v___x_4693_);
return v___x_4694_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__10(void){
_start:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4698_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__9));
v___x_4699_ = l_Lean_MessageData_ofFormat(v___x_4698_);
return v___x_4699_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__12(void){
_start:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4701_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__11));
v___x_4702_ = l_Lean_stringToMessageData(v___x_4701_);
return v___x_4702_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__14(void){
_start:
{
lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4704_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__13));
v___x_4705_ = l_Lean_stringToMessageData(v___x_4704_);
return v___x_4705_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__16(void){
_start:
{
lean_object* v___x_4707_; lean_object* v___x_4708_; 
v___x_4707_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__15));
v___x_4708_ = l_Lean_stringToMessageData(v___x_4707_);
return v___x_4708_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__18(void){
_start:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; 
v___x_4710_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__17));
v___x_4711_ = l_Lean_stringToMessageData(v___x_4710_);
return v___x_4711_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__20(void){
_start:
{
lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4713_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__19));
v___x_4714_ = l_Lean_stringToMessageData(v___x_4713_);
return v___x_4714_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__22(void){
_start:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4716_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__21));
v___x_4717_ = l_Lean_stringToMessageData(v___x_4716_);
return v___x_4717_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__24(void){
_start:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4719_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__23));
v___x_4720_ = l_Lean_stringToMessageData(v___x_4719_);
return v___x_4720_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__26(void){
_start:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4722_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__25));
v___x_4723_ = l_Lean_stringToMessageData(v___x_4722_);
return v___x_4723_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__28(void){
_start:
{
lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4725_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__27));
v___x_4726_ = l_Lean_stringToMessageData(v___x_4725_);
return v___x_4726_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__30(void){
_start:
{
lean_object* v___x_4728_; lean_object* v___x_4729_; 
v___x_4728_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__29));
v___x_4729_ = l_Lean_stringToMessageData(v___x_4728_);
return v___x_4729_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__32(void){
_start:
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4731_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__31));
v___x_4732_ = l_Lean_stringToMessageData(v___x_4731_);
return v___x_4732_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__34(void){
_start:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
v___x_4734_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__33));
v___x_4735_ = l_Lean_stringToMessageData(v___x_4734_);
return v___x_4735_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__36(void){
_start:
{
lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4737_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__35));
v___x_4738_ = l_Lean_stringToMessageData(v___x_4737_);
return v___x_4738_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__38(void){
_start:
{
lean_object* v___x_4740_; lean_object* v___x_4741_; 
v___x_4740_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__37));
v___x_4741_ = l_Lean_stringToMessageData(v___x_4740_);
return v___x_4741_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__41(void){
_start:
{
lean_object* v___x_4745_; lean_object* v___x_4746_; 
v___x_4745_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__40));
v___x_4746_ = l_Lean_MessageData_ofFormat(v___x_4745_);
return v___x_4746_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__44(void){
_start:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; 
v___x_4750_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__43));
v___x_4751_ = l_Lean_MessageData_ofFormat(v___x_4750_);
return v___x_4751_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__47(void){
_start:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; 
v___x_4755_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__46));
v___x_4756_ = l_Lean_MessageData_ofFormat(v___x_4755_);
return v___x_4756_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__50(void){
_start:
{
lean_object* v___x_4760_; lean_object* v___x_4761_; 
v___x_4760_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__49));
v___x_4761_ = l_Lean_MessageData_ofFormat(v___x_4760_);
return v___x_4761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object* v_e_4762_, lean_object* v_opts_4763_){
_start:
{
switch(lean_obj_tag(v_e_4762_))
{
case 0:
{
lean_object* v_env_4764_; lean_object* v_name_4765_; lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4778_; 
v_env_4764_ = lean_ctor_get(v_e_4762_, 0);
v_name_4765_ = lean_ctor_get(v_e_4762_, 1);
v_isSharedCheck_4778_ = !lean_is_exclusive(v_e_4762_);
if (v_isSharedCheck_4778_ == 0)
{
v___x_4767_ = v_e_4762_;
v_isShared_4768_ = v_isSharedCheck_4778_;
goto v_resetjp_4766_;
}
else
{
lean_inc(v_name_4765_);
lean_inc(v_env_4764_);
lean_dec(v_e_4762_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4778_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4773_; 
v___x_4769_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4770_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__3, &l_Lean_Kernel_Exception_toMessageData___closed__3_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__3);
v___x_4771_ = l_Lean_MessageData_ofName(v_name_4765_);
if (v_isShared_4768_ == 0)
{
lean_ctor_set_tag(v___x_4767_, 7);
lean_ctor_set(v___x_4767_, 1, v___x_4771_);
lean_ctor_set(v___x_4767_, 0, v___x_4770_);
v___x_4773_ = v___x_4767_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4777_; 
v_reuseFailAlloc_4777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4777_, 0, v___x_4770_);
lean_ctor_set(v_reuseFailAlloc_4777_, 1, v___x_4771_);
v___x_4773_ = v_reuseFailAlloc_4777_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___x_4774_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4773_);
lean_ctor_set(v___x_4775_, 1, v___x_4774_);
v___x_4776_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4764_, v___x_4769_, v_opts_4763_, v___x_4775_);
return v___x_4776_;
}
}
}
case 1:
{
lean_object* v_env_4779_; lean_object* v_name_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4794_; 
v_env_4779_ = lean_ctor_get(v_e_4762_, 0);
v_name_4780_ = lean_ctor_get(v_e_4762_, 1);
v_isSharedCheck_4794_ = !lean_is_exclusive(v_e_4762_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4782_ = v_e_4762_;
v_isShared_4783_ = v_isSharedCheck_4794_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_name_4780_);
lean_inc(v_env_4779_);
lean_dec(v_e_4762_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4794_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; uint8_t v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4789_; 
v___x_4784_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4785_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__7, &l_Lean_Kernel_Exception_toMessageData___closed__7_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__7);
v___x_4786_ = 1;
v___x_4787_ = l_Lean_MessageData_ofConstName(v_name_4780_, v___x_4786_);
if (v_isShared_4783_ == 0)
{
lean_ctor_set_tag(v___x_4782_, 7);
lean_ctor_set(v___x_4782_, 1, v___x_4787_);
lean_ctor_set(v___x_4782_, 0, v___x_4785_);
v___x_4789_ = v___x_4782_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4785_);
lean_ctor_set(v_reuseFailAlloc_4793_, 1, v___x_4787_);
v___x_4789_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4790_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4789_);
lean_ctor_set(v___x_4791_, 1, v___x_4790_);
v___x_4792_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4779_, v___x_4784_, v_opts_4763_, v___x_4791_);
return v___x_4792_;
}
}
}
case 2:
{
lean_object* v_env_4795_; lean_object* v_decl_4796_; lean_object* v_givenType_4797_; lean_object* v___x_4798_; 
v_env_4795_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4795_);
v_decl_4796_ = lean_ctor_get(v_e_4762_, 1);
lean_inc(v_decl_4796_);
v_givenType_4797_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_givenType_4797_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4798_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
switch(lean_obj_tag(v_decl_4796_))
{
case 1:
{
lean_object* v_val_4799_; lean_object* v_toConstantVal_4800_; lean_object* v_name_4801_; lean_object* v_type_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
v_val_4799_ = lean_ctor_get(v_decl_4796_, 0);
lean_inc_ref(v_val_4799_);
lean_dec_ref_known(v_decl_4796_, 1);
v_toConstantVal_4800_ = lean_ctor_get(v_val_4799_, 0);
lean_inc_ref(v_toConstantVal_4800_);
lean_dec_ref(v_val_4799_);
v_name_4801_ = lean_ctor_get(v_toConstantVal_4800_, 0);
lean_inc(v_name_4801_);
v_type_4802_ = lean_ctor_get(v_toConstantVal_4800_, 2);
lean_inc_ref(v_type_4802_);
lean_dec_ref(v_toConstantVal_4800_);
v___x_4803_ = l_Lean_Kernel_Exception_toMessageData___lam__0(v_givenType_4797_, v_name_4801_, v_type_4802_);
v___x_4804_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4795_, v___x_4798_, v_opts_4763_, v___x_4803_);
return v___x_4804_;
}
case 2:
{
lean_object* v_val_4805_; lean_object* v_toConstantVal_4806_; lean_object* v_name_4807_; lean_object* v_type_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v_val_4805_ = lean_ctor_get(v_decl_4796_, 0);
lean_inc_ref(v_val_4805_);
lean_dec_ref_known(v_decl_4796_, 1);
v_toConstantVal_4806_ = lean_ctor_get(v_val_4805_, 0);
lean_inc_ref(v_toConstantVal_4806_);
lean_dec_ref(v_val_4805_);
v_name_4807_ = lean_ctor_get(v_toConstantVal_4806_, 0);
lean_inc(v_name_4807_);
v_type_4808_ = lean_ctor_get(v_toConstantVal_4806_, 2);
lean_inc_ref(v_type_4808_);
lean_dec_ref(v_toConstantVal_4806_);
v___x_4809_ = l_Lean_Kernel_Exception_toMessageData___lam__0(v_givenType_4797_, v_name_4807_, v_type_4808_);
v___x_4810_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4795_, v___x_4798_, v_opts_4763_, v___x_4809_);
return v___x_4810_;
}
default: 
{
lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_dec_ref(v_givenType_4797_);
lean_dec(v_decl_4796_);
v___x_4811_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__10, &l_Lean_Kernel_Exception_toMessageData___closed__10_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__10);
v___x_4812_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4795_, v___x_4798_, v_opts_4763_, v___x_4811_);
return v___x_4812_;
}
}
}
case 3:
{
lean_object* v_env_4813_; lean_object* v_name_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; uint8_t v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; 
v_env_4813_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4813_);
v_name_4814_ = lean_ctor_get(v_e_4762_, 1);
lean_inc(v_name_4814_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4815_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4816_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__12, &l_Lean_Kernel_Exception_toMessageData___closed__12_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__12);
v___x_4817_ = 1;
v___x_4818_ = l_Lean_MessageData_ofConstName(v_name_4814_, v___x_4817_);
v___x_4819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4819_, 0, v___x_4816_);
lean_ctor_set(v___x_4819_, 1, v___x_4818_);
v___x_4820_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4821_, 0, v___x_4819_);
lean_ctor_set(v___x_4821_, 1, v___x_4820_);
v___x_4822_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4813_, v___x_4815_, v_opts_4763_, v___x_4821_);
return v___x_4822_;
}
case 4:
{
lean_object* v_env_4823_; lean_object* v_name_4824_; lean_object* v_expr_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; uint8_t v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v_env_4823_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4823_);
v_name_4824_ = lean_ctor_get(v_e_4762_, 1);
lean_inc(v_name_4824_);
v_expr_4825_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_expr_4825_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4826_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4827_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__14, &l_Lean_Kernel_Exception_toMessageData___closed__14_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__14);
v___x_4828_ = 1;
v___x_4829_ = l_Lean_MessageData_ofConstName(v_name_4824_, v___x_4828_);
v___x_4830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4827_);
lean_ctor_set(v___x_4830_, 1, v___x_4829_);
v___x_4831_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__16, &l_Lean_Kernel_Exception_toMessageData___closed__16_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__16);
v___x_4832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4832_, 0, v___x_4830_);
lean_ctor_set(v___x_4832_, 1, v___x_4831_);
v___x_4833_ = l_Lean_indentExpr(v_expr_4825_);
v___x_4834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4834_, 0, v___x_4832_);
lean_ctor_set(v___x_4834_, 1, v___x_4833_);
v___x_4835_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4823_, v___x_4826_, v_opts_4763_, v___x_4834_);
return v___x_4835_;
}
case 5:
{
lean_object* v_env_4836_; lean_object* v_lctx_4837_; lean_object* v_expr_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; 
v_env_4836_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4836_);
v_lctx_4837_ = lean_ctor_get(v_e_4762_, 1);
lean_inc_ref(v_lctx_4837_);
v_expr_4838_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_expr_4838_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4839_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__18, &l_Lean_Kernel_Exception_toMessageData___closed__18_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__18);
v___x_4840_ = l_Lean_indentExpr(v_expr_4838_);
v___x_4841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4841_, 0, v___x_4839_);
lean_ctor_set(v___x_4841_, 1, v___x_4840_);
v___x_4842_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4836_, v_lctx_4837_, v_opts_4763_, v___x_4841_);
return v___x_4842_;
}
case 6:
{
lean_object* v_env_4843_; lean_object* v_lctx_4844_; lean_object* v_expr_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v_env_4843_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4843_);
v_lctx_4844_ = lean_ctor_get(v_e_4762_, 1);
lean_inc_ref(v_lctx_4844_);
v_expr_4845_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_expr_4845_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4846_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__20, &l_Lean_Kernel_Exception_toMessageData___closed__20_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__20);
v___x_4847_ = l_Lean_indentExpr(v_expr_4845_);
v___x_4848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4848_, 0, v___x_4846_);
lean_ctor_set(v___x_4848_, 1, v___x_4847_);
v___x_4849_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4843_, v_lctx_4844_, v_opts_4763_, v___x_4848_);
return v___x_4849_;
}
case 7:
{
lean_object* v_env_4850_; lean_object* v_lctx_4851_; lean_object* v_name_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; 
v_env_4850_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4850_);
v_lctx_4851_ = lean_ctor_get(v_e_4762_, 1);
lean_inc_ref(v_lctx_4851_);
v_name_4852_ = lean_ctor_get(v_e_4762_, 2);
lean_inc(v_name_4852_);
lean_dec_ref_known(v_e_4762_, 5);
v___x_4853_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__22, &l_Lean_Kernel_Exception_toMessageData___closed__22_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__22);
v___x_4854_ = l_Lean_MessageData_ofName(v_name_4852_);
v___x_4855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4855_, 0, v___x_4853_);
lean_ctor_set(v___x_4855_, 1, v___x_4854_);
v___x_4856_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__5, &l_Lean_Kernel_Exception_toMessageData___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__5);
v___x_4857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4857_, 0, v___x_4855_);
lean_ctor_set(v___x_4857_, 1, v___x_4856_);
v___x_4858_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4850_, v_lctx_4851_, v_opts_4763_, v___x_4857_);
return v___x_4858_;
}
case 8:
{
lean_object* v_env_4859_; lean_object* v_lctx_4860_; lean_object* v_expr_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; 
v_env_4859_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4859_);
v_lctx_4860_ = lean_ctor_get(v_e_4762_, 1);
lean_inc_ref(v_lctx_4860_);
v_expr_4861_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_expr_4861_);
lean_dec_ref_known(v_e_4762_, 4);
v___x_4862_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__24, &l_Lean_Kernel_Exception_toMessageData___closed__24_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__24);
v___x_4863_ = l_Lean_indentExpr(v_expr_4861_);
v___x_4864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4862_);
lean_ctor_set(v___x_4864_, 1, v___x_4863_);
v___x_4865_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4859_, v_lctx_4860_, v_opts_4763_, v___x_4864_);
return v___x_4865_;
}
case 9:
{
lean_object* v_env_4866_; lean_object* v_lctx_4867_; lean_object* v_app_4868_; lean_object* v_funType_4869_; lean_object* v_argType_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; 
v_env_4866_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4866_);
v_lctx_4867_ = lean_ctor_get(v_e_4762_, 1);
lean_inc_ref(v_lctx_4867_);
v_app_4868_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_app_4868_);
v_funType_4869_ = lean_ctor_get(v_e_4762_, 3);
lean_inc_ref(v_funType_4869_);
v_argType_4870_ = lean_ctor_get(v_e_4762_, 4);
lean_inc_ref(v_argType_4870_);
lean_dec_ref_known(v_e_4762_, 5);
v___x_4871_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__26, &l_Lean_Kernel_Exception_toMessageData___closed__26_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__26);
v___x_4872_ = l_Lean_indentExpr(v_app_4868_);
v___x_4873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4873_, 0, v___x_4871_);
lean_ctor_set(v___x_4873_, 1, v___x_4872_);
v___x_4874_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__28, &l_Lean_Kernel_Exception_toMessageData___closed__28_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__28);
v___x_4875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4873_);
lean_ctor_set(v___x_4875_, 1, v___x_4874_);
v___x_4876_ = l_Lean_indentExpr(v_argType_4870_);
v___x_4877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4877_, 0, v___x_4875_);
lean_ctor_set(v___x_4877_, 1, v___x_4876_);
v___x_4878_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__30, &l_Lean_Kernel_Exception_toMessageData___closed__30_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__30);
v___x_4879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4877_);
lean_ctor_set(v___x_4879_, 1, v___x_4878_);
v___x_4880_ = l_Lean_indentExpr(v_funType_4869_);
v___x_4881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4881_, 0, v___x_4879_);
lean_ctor_set(v___x_4881_, 1, v___x_4880_);
v___x_4882_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4866_, v_lctx_4867_, v_opts_4763_, v___x_4881_);
return v___x_4882_;
}
case 10:
{
lean_object* v_env_4883_; lean_object* v_lctx_4884_; lean_object* v_proj_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v_env_4883_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4883_);
v_lctx_4884_ = lean_ctor_get(v_e_4762_, 1);
lean_inc_ref(v_lctx_4884_);
v_proj_4885_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_proj_4885_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4886_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__32, &l_Lean_Kernel_Exception_toMessageData___closed__32_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__32);
v___x_4887_ = l_Lean_indentExpr(v_proj_4885_);
v___x_4888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4886_);
lean_ctor_set(v___x_4888_, 1, v___x_4887_);
v___x_4889_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4883_, v_lctx_4884_, v_opts_4763_, v___x_4888_);
return v___x_4889_;
}
case 11:
{
lean_object* v_env_4890_; lean_object* v_name_4891_; lean_object* v_type_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; uint8_t v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
v_env_4890_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_env_4890_);
v_name_4891_ = lean_ctor_get(v_e_4762_, 1);
lean_inc(v_name_4891_);
v_type_4892_ = lean_ctor_get(v_e_4762_, 2);
lean_inc_ref(v_type_4892_);
lean_dec_ref_known(v_e_4762_, 3);
v___x_4893_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4894_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__34, &l_Lean_Kernel_Exception_toMessageData___closed__34_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__34);
v___x_4895_ = 1;
v___x_4896_ = l_Lean_MessageData_ofConstName(v_name_4891_, v___x_4895_);
v___x_4897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4894_);
lean_ctor_set(v___x_4897_, 1, v___x_4896_);
v___x_4898_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__36, &l_Lean_Kernel_Exception_toMessageData___closed__36_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__36);
v___x_4899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4897_);
lean_ctor_set(v___x_4899_, 1, v___x_4898_);
v___x_4900_ = l_Lean_indentExpr(v_type_4892_);
v___x_4901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4899_);
lean_ctor_set(v___x_4901_, 1, v___x_4900_);
v___x_4902_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4890_, v___x_4893_, v_opts_4763_, v___x_4901_);
return v___x_4902_;
}
case 12:
{
lean_object* v_msg_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; 
lean_dec_ref(v_opts_4763_);
v_msg_4903_ = lean_ctor_get(v_e_4762_, 0);
lean_inc_ref(v_msg_4903_);
lean_dec_ref_known(v_e_4762_, 1);
v___x_4904_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__38, &l_Lean_Kernel_Exception_toMessageData___closed__38_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__38);
v___x_4905_ = l_Lean_stringToMessageData(v_msg_4903_);
v___x_4906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4906_, 0, v___x_4904_);
lean_ctor_set(v___x_4906_, 1, v___x_4905_);
return v___x_4906_;
}
case 13:
{
lean_object* v___x_4907_; 
lean_dec_ref(v_opts_4763_);
v___x_4907_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__41, &l_Lean_Kernel_Exception_toMessageData___closed__41_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__41);
return v___x_4907_;
}
case 14:
{
lean_object* v___x_4908_; 
lean_dec_ref(v_opts_4763_);
v___x_4908_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__44, &l_Lean_Kernel_Exception_toMessageData___closed__44_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__44);
return v___x_4908_;
}
case 15:
{
lean_object* v___x_4909_; 
lean_dec_ref(v_opts_4763_);
v___x_4909_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__47, &l_Lean_Kernel_Exception_toMessageData___closed__47_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__47);
return v___x_4909_;
}
default: 
{
lean_object* v___x_4910_; 
lean_dec_ref(v_opts_4763_);
v___x_4910_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__50, &l_Lean_Kernel_Exception_toMessageData___closed__50_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__50);
return v___x_4910_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_toTraceElem___redArg(lean_object* v_inst_4911_, lean_object* v_e_4912_, lean_object* v_cls_4913_){
_start:
{
lean_object* v___x_4914_; double v___x_4915_; uint8_t v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___x_4914_ = lean_box(0);
v___x_4915_ = lean_float_once(&l_Lean_MessageData_formatAux___closed__9, &l_Lean_MessageData_formatAux___closed__9_once, _init_l_Lean_MessageData_formatAux___closed__9);
v___x_4916_ = 1;
v___x_4917_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_4918_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4918_, 0, v_cls_4913_);
lean_ctor_set(v___x_4918_, 1, v___x_4914_);
lean_ctor_set(v___x_4918_, 2, v___x_4917_);
lean_ctor_set_float(v___x_4918_, sizeof(void*)*3, v___x_4915_);
lean_ctor_set_float(v___x_4918_, sizeof(void*)*3 + 8, v___x_4915_);
lean_ctor_set_uint8(v___x_4918_, sizeof(void*)*3 + 16, v___x_4916_);
v___x_4919_ = lean_apply_1(v_inst_4911_, v_e_4912_);
v___x_4920_ = ((lean_object*)(l_Lean_stringToMessageData___closed__0));
v___x_4921_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4921_, 0, v___x_4918_);
lean_ctor_set(v___x_4921_, 1, v___x_4919_);
lean_ctor_set(v___x_4921_, 2, v___x_4920_);
return v___x_4921_;
}
}
LEAN_EXPORT lean_object* l_Lean_toTraceElem(lean_object* v_00_u03b1_4922_, lean_object* v_inst_4923_, lean_object* v_e_4924_, lean_object* v_cls_4925_){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = l_Lean_toTraceElem___redArg(v_inst_4923_, v_e_4924_, v_cls_4925_);
return v___x_4926_;
}
}
lean_object* runtime_initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_PPExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_PPExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedMessageSeverity_default = _init_l_Lean_instInhabitedMessageSeverity_default();
l_Lean_instInhabitedMessageSeverity = _init_l_Lean_instInhabitedMessageSeverity();
l_Lean_instInhabitedTraceResult_default = _init_l_Lean_instInhabitedTraceResult_default();
l_Lean_instInhabitedTraceResult = _init_l_Lean_instInhabitedTraceResult();
l_Lean_MessageData_nil = _init_l_Lean_MessageData_nil();
lean_mark_persistent(l_Lean_MessageData_nil);
res = l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1828196597____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_MessageData_maxTraceChildren = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_MessageData_maxTraceChildren);
lean_dec_ref(res);
l_Lean_instInhabitedMessageLog_default = _init_l_Lean_instInhabitedMessageLog_default();
lean_mark_persistent(l_Lean_instInhabitedMessageLog_default);
l_Lean_instInhabitedMessageLog = _init_l_Lean_instInhabitedMessageLog();
lean_mark_persistent(l_Lean_instInhabitedMessageLog);
l_Lean_MessageLog_empty = _init_l_Lean_MessageLog_empty();
lean_mark_persistent(l_Lean_MessageLog_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* initialize_Lean_Util_PPExt(uint8_t builtin);
lean_object* initialize_Lean_Util_Sorry(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PPExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Message(builtin);
}
#ifdef __cplusplus
}
#endif
