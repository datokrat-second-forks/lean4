// Lean compiler output
// Module: Lean.Meta.Eqns
// Imports: public import Lean.Meta.Match.MatcherInfo public import Lean.DefEqAttrib public import Lean.Meta.RecExt public import Lean.Meta.LetToHave import Lean.Meta.AppBuilder
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Slice_isNat(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Environment_isSafeDefinition(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isRecursiveDefinition___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_backward_defeqAttrib_useBackward;
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_registerReservedNameAction(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eqns"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonrecursive"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 23, 21, 28, 3, 196, 180, 100)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(1, 23, 146, 109, 99, 186, 103, 88)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Create fine-grained equational lemmas even for non-recursive definitions."};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-03-30"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 222, 73, 223, 67, 131, 25)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(156, 7, 83, 198, 209, 69, 31, 191)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_eqns_nonrecursive;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "deepRecursiveSplit"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 23, 21, 28, 3, 196, 180, 100)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(167, 67, 13, 105, 163, 80, 199, 218)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 339, .m_capacity = 339, .m_length = 338, .m_data = "Create equational lemmas for recursive functions like for non-recursive functions. If disabled, match statements in recursive function definitions that do not contain recursive calls do not cause further splits in the equational lemmas. This was the behavior before Lean 4.12, and the purpose of this option is to help migrating old code."};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 222, 73, 223, 67, 131, 25)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(226, 35, 35, 130, 249, 93, 79, 68)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_eqns_deepRecursiveSplit;
static lean_once_cell_t l_Lean_Meta_eqnAffectingOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_eqnAffectingOptions___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_eqnAffectingOptions;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "eqnOptionsExt"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(22, 76, 144, 60, 245, 252, 84, 163)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eqnOptionsExt;
static const lean_string_object l_Lean_Meta_eqnThmSuffixBase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Meta_eqnThmSuffixBase___closed__0 = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqnThmSuffixBase = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBase___closed__0_value;
static const lean_string_object l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eq_"};
static const lean_object* l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0 = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqnThmSuffixBasePrefix = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value;
static const lean_string_object l_Lean_Meta_eqn1ThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eq_1"};
static const lean_object* l_Lean_Meta_eqn1ThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_eqn1ThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqn1ThmSuffix = (const lean_object*)&l_Lean_Meta_eqn1ThmSuffix___closed__0_value;
static lean_once_cell_t l_Lean_Meta_isEqnReservedNameSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isEqnReservedNameSuffix___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnReservedNameSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_unfoldThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "eq_def"};
static const lean_object* l_Lean_Meta_unfoldThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_unfoldThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_unfoldThmSuffix = (const lean_object*)&l_Lean_Meta_unfoldThmSuffix___closed__0_value;
static const lean_string_object l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_unfold"};
static const lean_object* l_Lean_Meta_eqUnfoldThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqUnfoldThmSuffix = (const lean_object*)&l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnLikeSuffix___boxed(lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_declFromEqLikeName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to declare `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` because `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
static const lean_string_object l_Lean_Meta_registerGetEqnsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "failed to register equation getter, this kind of extension can only be registered during initialization"};
static const lean_object* l_Lean_Meta_registerGetEqnsFn___closed__0 = (const lean_object*)&l_Lean_Meta_registerGetEqnsFn___closed__0_value;
static lean_once_cell_t l_Lean_Meta_registerGetEqnsFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_registerGetEqnsFn___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedEqnsExtState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedEqnsExtState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eqnsExt;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Meta_withEqnOptions___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Meta_withEqnOptions___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_withEqnOptions___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1;
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_saveEqnAffectingOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__0 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__0_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_saveEqnAffectingOptions___closed__1;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__2;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__3 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__3_value;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__4 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__4_value;
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__3_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__4_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 70, 141, 178, 157, 107, 140, 91)}};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__5 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__5_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__6;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "saving equation-affecting options for "};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__7 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__7_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "invalid unfold theorem name `"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` has been generated expected `"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Meta.Eqns reserved name action for "};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ReservedNameAction"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 245, 189, 90, 36, 141, 82, 229)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Eqns"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 145, 26, 133, 108, 104, 10)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(27, 2, 5, 79, 97, 142, 74, 217)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 112, 146, 108, 241, 250, 100, 162)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 0, 196, 176, 89, 93, 16, 10)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 31, 160, 103, 40, 58, 110, 116)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(18, 147, 153, 14, 107, 3, 39, 172)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 114, 185, 94, 205, 199, 191, 156)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(155, 255, 177, 29, 188, 255, 188, 249)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 48, 196, 25, 136, 122, 168, 47)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_65_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v___x_62_, v___x_63_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4____boxed(lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_88_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_89_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v___x_86_, v___x_87_, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4____boxed(lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
return v_res_91_;
}
}
static lean_object* _init_l_Lean_Meta_eqnAffectingOptions___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_92_ = l_Lean_backward_defeqAttrib_useBackward;
v___x_93_ = l_Lean_Meta_backward_eqns_deepRecursiveSplit;
v___x_94_ = l_Lean_Meta_backward_eqns_nonrecursive;
v___x_95_ = lean_unsigned_to_nat(3u);
v___x_96_ = lean_mk_empty_array_with_capacity(v___x_95_);
v___x_97_ = lean_array_push(v___x_96_, v___x_94_);
v___x_98_ = lean_array_push(v___x_97_, v___x_93_);
v___x_99_ = lean_array_push(v___x_98_, v___x_92_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_eqnAffectingOptions(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_eqnAffectingOptions___closed__0, &l_Lean_Meta_eqnAffectingOptions___closed__0_once, _init_l_Lean_Meta_eqnAffectingOptions___closed__0);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(lean_object* v_env_101_, lean_object* v_as_102_, size_t v_i_103_, size_t v_stop_104_, lean_object* v_b_105_){
_start:
{
lean_object* v___y_107_; uint8_t v___x_111_; 
v___x_111_ = lean_usize_dec_eq(v_i_103_, v_stop_104_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v_fst_113_; uint8_t v___x_114_; 
v___x_112_ = lean_array_uget_borrowed(v_as_102_, v_i_103_);
v_fst_113_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_fst_113_);
lean_inc_ref(v_env_101_);
v___x_114_ = l_Lean_Environment_contains(v_env_101_, v_fst_113_, v___x_111_);
if (v___x_114_ == 0)
{
v___y_107_ = v_b_105_;
goto v___jp_106_;
}
else
{
lean_object* v___x_115_; 
lean_inc(v___x_112_);
v___x_115_ = lean_array_push(v_b_105_, v___x_112_);
v___y_107_ = v___x_115_;
goto v___jp_106_;
}
}
else
{
lean_dec_ref(v_env_101_);
return v_b_105_;
}
v___jp_106_:
{
size_t v___x_108_; size_t v___x_109_; 
v___x_108_ = ((size_t)1ULL);
v___x_109_ = lean_usize_add(v_i_103_, v___x_108_);
v_i_103_ = v___x_109_;
v_b_105_ = v___y_107_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_116_, lean_object* v_as_117_, lean_object* v_i_118_, lean_object* v_stop_119_, lean_object* v_b_120_){
_start:
{
size_t v_i_boxed_121_; size_t v_stop_boxed_122_; lean_object* v_res_123_; 
v_i_boxed_121_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_stop_boxed_122_ = lean_unbox_usize(v_stop_119_);
lean_dec(v_stop_119_);
v_res_123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(v_env_116_, v_as_117_, v_i_boxed_121_, v_stop_boxed_122_, v_b_120_);
lean_dec_ref(v_as_117_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(lean_object* v_env_128_, lean_object* v_s_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_130_ = l_Lean_NameMap_toArray___redArg(v_s_129_);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_array_get_size(v___x_130_);
v___x_133_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_134_ = lean_nat_dec_lt(v___x_131_, v___x_132_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; 
lean_dec_ref(v___x_130_);
lean_dec_ref(v_env_128_);
v___x_135_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = lean_nat_dec_le(v___x_132_, v___x_132_);
if (v___x_136_ == 0)
{
if (v___x_134_ == 0)
{
lean_object* v___x_137_; 
lean_dec_ref(v___x_130_);
lean_dec_ref(v_env_128_);
v___x_137_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
return v___x_137_;
}
else
{
size_t v___x_138_; size_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_138_ = ((size_t)0ULL);
v___x_139_ = lean_usize_of_nat(v___x_132_);
v___x_140_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(v_env_128_, v___x_130_, v___x_138_, v___x_139_, v___x_133_);
lean_dec_ref(v___x_130_);
lean_inc_ref_n(v___x_140_, 2);
v___x_141_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
lean_ctor_set(v___x_141_, 2, v___x_140_);
return v___x_141_;
}
}
else
{
size_t v___x_142_; size_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_142_ = ((size_t)0ULL);
v___x_143_ = lean_usize_of_nat(v___x_132_);
v___x_144_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(v_env_128_, v___x_130_, v___x_142_, v___x_143_, v___x_133_);
lean_dec_ref(v___x_130_);
lean_inc_ref_n(v___x_144_, 2);
v___x_145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
lean_ctor_set(v___x_145_, 2, v___x_144_);
return v___x_145_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object* v_env_146_, lean_object* v_s_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(v_env_146_, v_s_147_);
lean_dec(v_s_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___f_156_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_157_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_158_ = lean_box(1);
v___x_159_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_157_, v___x_158_, v___f_156_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
return v_res_161_;
}
}
static lean_object* _init_l_Lean_Meta_isEqnReservedNameSuffix___closed__0(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_169_ = lean_string_utf8_byte_size(v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object* v_s_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_171_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_172_ = lean_string_utf8_byte_size(v_s_170_);
v___x_173_ = lean_obj_once(&l_Lean_Meta_isEqnReservedNameSuffix___closed__0, &l_Lean_Meta_isEqnReservedNameSuffix___closed__0_once, _init_l_Lean_Meta_isEqnReservedNameSuffix___closed__0);
v___x_174_ = lean_nat_dec_le(v___x_173_, v___x_172_);
if (v___x_174_ == 0)
{
lean_dec_ref(v_s_170_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = lean_string_memcmp(v_s_170_, v___x_171_, v___x_175_, v___x_175_, v___x_173_);
if (v___x_176_ == 0)
{
lean_dec_ref(v_s_170_);
return v___x_176_;
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_177_ = lean_unsigned_to_nat(3u);
lean_inc_ref(v_s_170_);
v___x_178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_178_, 0, v_s_170_);
lean_ctor_set(v___x_178_, 1, v___x_175_);
lean_ctor_set(v___x_178_, 2, v___x_172_);
v___x_179_ = l_String_Slice_Pos_nextn(v___x_178_, v___x_175_, v___x_177_);
lean_dec_ref_known(v___x_178_, 3);
v___x_180_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_180_, 0, v_s_170_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
lean_ctor_set(v___x_180_, 2, v___x_172_);
v___x_181_ = l_String_Slice_isNat(v___x_180_);
lean_dec_ref_known(v___x_180_, 3);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnReservedNameSuffix___boxed(lean_object* v_s_182_){
_start:
{
uint8_t v_res_183_; lean_object* v_r_184_; 
v_res_183_ = l_Lean_Meta_isEqnReservedNameSuffix(v_s_182_);
v_r_184_ = lean_box(v_res_183_);
return v_r_184_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object* v_s_189_){
_start:
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_191_ = lean_string_dec_eq(v_s_189_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = ((lean_object*)(l_Lean_Meta_eqUnfoldThmSuffix___closed__0));
v___x_193_ = lean_string_dec_eq(v_s_189_, v___x_192_);
if (v___x_193_ == 0)
{
uint8_t v___x_194_; 
v___x_194_ = l_Lean_Meta_isEqnReservedNameSuffix(v_s_189_);
return v___x_194_;
}
else
{
lean_dec_ref(v_s_189_);
return v___x_193_;
}
}
else
{
lean_dec_ref(v_s_189_);
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnLikeSuffix___boxed(lean_object* v_s_195_){
_start:
{
uint8_t v_res_196_; lean_object* v_r_197_; 
v_res_196_ = l_Lean_Meta_isEqnLikeSuffix(v_s_195_);
v_r_197_ = lean_box(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(lean_object* v_str_201_, lean_object* v_env_202_, uint8_t v___x_203_, lean_object* v_as_x27_204_, lean_object* v_b_205_){
_start:
{
if (lean_obj_tag(v_as_x27_204_) == 0)
{
lean_dec_ref(v_env_202_);
lean_dec_ref(v_str_201_);
lean_inc_ref(v_b_205_);
return v_b_205_;
}
else
{
lean_object* v_head_206_; lean_object* v_tail_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___y_211_; uint8_t v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_head_206_ = lean_ctor_get(v_as_x27_204_, 0);
v_tail_207_ = lean_ctor_get(v_as_x27_204_, 1);
v___x_208_ = lean_box(0);
v___x_209_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0));
v___x_217_ = 0;
lean_inc_ref(v_env_202_);
v___x_218_ = l_Lean_Environment_setExporting(v_env_202_, v___x_217_);
lean_inc(v_head_206_);
v___x_219_ = l_Lean_Environment_isSafeDefinition(v___x_218_, v_head_206_);
if (v___x_219_ == 0)
{
v___y_211_ = v___x_219_;
goto v___jp_210_;
}
else
{
uint8_t v___x_220_; 
lean_inc(v_head_206_);
lean_inc_ref(v_env_202_);
v___x_220_ = l_Lean_Meta_isMatcherCore(v_env_202_, v_head_206_);
if (v___x_220_ == 0)
{
v___y_211_ = v___x_203_;
goto v___jp_210_;
}
else
{
v_as_x27_204_ = v_tail_207_;
v_b_205_ = v___x_209_;
goto _start;
}
}
v___jp_210_:
{
if (v___y_211_ == 0)
{
v_as_x27_204_ = v_tail_207_;
v_b_205_ = v___x_209_;
goto _start;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
lean_dec_ref(v_env_202_);
lean_inc(v_head_206_);
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v_head_206_);
lean_ctor_set(v___x_213_, 1, v_str_201_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_208_);
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___boxed(lean_object* v_str_222_, lean_object* v_env_223_, lean_object* v___x_224_, lean_object* v_as_x27_225_, lean_object* v_b_226_){
_start:
{
uint8_t v___x_616__boxed_227_; lean_object* v_res_228_; 
v___x_616__boxed_227_ = lean_unbox(v___x_224_);
v_res_228_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_str_222_, v_env_223_, v___x_616__boxed_227_, v_as_x27_225_, v_b_226_);
lean_dec_ref(v_b_226_);
lean_dec(v_as_x27_225_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_declFromEqLikeName(lean_object* v_env_229_, lean_object* v_name_230_){
_start:
{
if (lean_obj_tag(v_name_230_) == 1)
{
lean_object* v_pre_231_; lean_object* v_str_232_; uint8_t v___x_233_; 
v_pre_231_ = lean_ctor_get(v_name_230_, 0);
lean_inc(v_pre_231_);
v_str_232_ = lean_ctor_get(v_name_230_, 1);
lean_inc_ref_n(v_str_232_, 2);
lean_dec_ref_known(v_name_230_, 2);
v___x_233_ = l_Lean_Meta_isEqnLikeSuffix(v_str_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec_ref(v_str_232_);
lean_dec(v_pre_231_);
lean_dec_ref(v_env_229_);
v___x_234_ = lean_box(0);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v_fst_242_; 
lean_inc(v_pre_231_);
v___x_235_ = l_Lean_privateToUserName(v_pre_231_);
v___x_236_ = lean_box(0);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v_pre_231_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_box(0);
v___x_240_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0));
v___x_241_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_str_232_, v_env_229_, v___x_233_, v___x_238_, v___x_240_);
lean_dec_ref_known(v___x_238_, 2);
v_fst_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_fst_242_);
lean_dec_ref(v___x_241_);
if (lean_obj_tag(v_fst_242_) == 0)
{
return v___x_239_;
}
else
{
lean_object* v_val_243_; 
v_val_243_ = lean_ctor_get(v_fst_242_, 0);
lean_inc(v_val_243_);
lean_dec_ref_known(v_fst_242_, 1);
return v_val_243_;
}
}
}
else
{
lean_object* v___x_244_; 
lean_dec(v_name_230_);
lean_dec_ref(v_env_229_);
v___x_244_ = lean_box(0);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(lean_object* v_str_245_, lean_object* v_env_246_, uint8_t v___x_247_, lean_object* v_as_248_, lean_object* v_as_x27_249_, lean_object* v_b_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_str_245_, v_env_246_, v___x_247_, v_as_x27_249_, v_b_250_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___boxed(lean_object* v_str_253_, lean_object* v_env_254_, lean_object* v___x_255_, lean_object* v_as_256_, lean_object* v_as_x27_257_, lean_object* v_b_258_, lean_object* v_a_259_){
_start:
{
uint8_t v___x_687__boxed_260_; lean_object* v_res_261_; 
v___x_687__boxed_260_ = lean_unbox(v___x_255_);
v_res_261_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(v_str_253_, v_env_254_, v___x_687__boxed_260_, v_as_256_, v_as_x27_257_, v_b_258_, v_a_259_);
lean_dec_ref(v_b_258_);
lean_dec(v_as_x27_257_);
lean_dec(v_as_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object* v_env_262_, lean_object* v_declName_263_, lean_object* v_suffix_264_){
_start:
{
uint8_t v_isExposed_265_; lean_object* v_name_266_; 
lean_inc(v_declName_263_);
lean_inc_ref(v_env_262_);
v_isExposed_265_ = l_Lean_Environment_hasExposedBody(v_env_262_, v_declName_263_);
v_name_266_ = l_Lean_Name_str___override(v_declName_263_, v_suffix_264_);
if (v_isExposed_265_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_mkPrivateName(v_env_262_, v_name_266_);
lean_dec_ref(v_env_262_);
return v___x_267_;
}
else
{
lean_dec_ref(v_env_262_);
return v_name_266_;
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_268_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_271_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
lean_ctor_set(v___x_273_, 2, v___x_272_);
lean_ctor_set(v___x_273_, 3, v___x_272_);
lean_ctor_set(v___x_273_, 4, v___x_271_);
lean_ctor_set(v___x_273_, 5, v___x_271_);
lean_ctor_set(v___x_273_, 6, v___x_271_);
lean_ctor_set(v___x_273_, 7, v___x_271_);
lean_ctor_set(v___x_273_, 8, v___x_271_);
lean_ctor_set(v___x_273_, 9, v___x_271_);
lean_ctor_set(v___x_273_, 10, v___x_271_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_unsigned_to_nat(32u);
v___x_275_ = lean_mk_empty_array_with_capacity(v___x_274_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
size_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_277_ = ((size_t)5ULL);
v___x_278_ = lean_unsigned_to_nat(0u);
v___x_279_ = lean_unsigned_to_nat(32u);
v___x_280_ = lean_mk_empty_array_with_capacity(v___x_279_);
v___x_281_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3);
v___x_282_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___x_280_);
lean_ctor_set(v___x_282_, 2, v___x_278_);
lean_ctor_set(v___x_282_, 3, v___x_278_);
lean_ctor_set_usize(v___x_282_, 4, v___x_277_);
return v___x_282_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_283_ = lean_box(1);
v___x_284_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_285_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1);
v___x_286_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set(v___x_286_, 2, v___x_283_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; lean_object* v_toCold_292_; lean_object* v_env_293_; lean_object* v_options_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_291_ = lean_st_ref_get(v___y_289_);
v_toCold_292_ = lean_ctor_get(v___y_288_, 0);
v_env_293_ = lean_ctor_get(v___x_291_, 0);
lean_inc_ref(v_env_293_);
lean_dec(v___x_291_);
v_options_294_ = lean_ctor_get(v_toCold_292_, 2);
v___x_295_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2);
v___x_296_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5);
lean_inc_ref(v_options_294_);
v___x_297_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_297_, 0, v_env_293_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
lean_ctor_set(v___x_297_, 2, v___x_296_);
lean_ctor_set(v___x_297_, 3, v_options_294_);
v___x_298_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v_msgData_287_);
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msgData_300_, v___y_301_, v___y_302_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_ref_309_; lean_object* v___x_310_; lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_319_; 
v_ref_309_ = lean_ctor_get(v___y_306_, 2);
v___x_310_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msg_305_, v___y_306_, v___y_307_);
v_a_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_319_ == 0)
{
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_319_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_319_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_317_; 
lean_inc(v_ref_309_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_ref_309_);
lean_ctor_set(v___x_315_, 1, v_a_311_);
if (v_isShared_314_ == 0)
{
lean_ctor_set_tag(v___x_313_, 1);
lean_ctor_set(v___x_313_, 0, v___x_315_);
v___x_317_ = v___x_313_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v_msg_320_, v___y_321_, v___y_322_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_324_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0));
v___x_327_ = l_Lean_stringToMessageData(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2));
v___x_330_ = l_Lean_stringToMessageData(v___x_329_);
return v___x_330_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4));
v___x_333_ = l_Lean_stringToMessageData(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(lean_object* v_declName_334_, lean_object* v_reservedName_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_339_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1);
v___x_340_ = 0;
v___x_341_ = l_Lean_MessageData_ofConstName(v_declName_334_, v___x_340_);
v___x_342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_339_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v___x_343_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3);
v___x_344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = 1;
v___x_346_ = l_Lean_MessageData_ofConstName(v_reservedName_335_, v___x_345_);
v___x_347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_344_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v___x_348_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5);
v___x_349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_347_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v___x_349_, v___y_336_, v___y_337_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___boxed(lean_object* v_declName_351_, lean_object* v_reservedName_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(v_declName_351_, v_reservedName_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(lean_object* v_declName_357_, lean_object* v_suffix_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_reservedName_362_; lean_object* v___x_363_; lean_object* v_env_364_; uint8_t v___x_365_; uint8_t v___x_366_; 
lean_inc(v_declName_357_);
v_reservedName_362_ = l_Lean_Name_str___override(v_declName_357_, v_suffix_358_);
v___x_363_ = lean_st_ref_get(v___y_360_);
v_env_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_ref(v_env_364_);
lean_dec(v___x_363_);
v___x_365_ = 1;
lean_inc(v_reservedName_362_);
v___x_366_ = l_Lean_Environment_contains(v_env_364_, v_reservedName_362_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; 
lean_dec(v_reservedName_362_);
lean_dec(v_declName_357_);
v___x_367_ = lean_box(0);
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(v_declName_357_, v_reservedName_362_, v___y_359_, v___y_360_);
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0___boxed(lean_object* v_declName_370_, lean_object* v_suffix_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_370_, v_suffix_371_, v___y_372_, v___y_373_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object* v_declName_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = ((lean_object*)(l_Lean_Meta_eqUnfoldThmSuffix___closed__0));
lean_inc(v_declName_376_);
v___x_381_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_376_, v___x_380_, v_a_377_, v_a_378_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec_ref_known(v___x_381_, 1);
v___x_382_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
lean_inc(v_declName_376_);
v___x_383_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_376_, v___x_382_, v_a_377_, v_a_378_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; 
lean_dec_ref_known(v___x_383_, 1);
v___x_384_ = ((lean_object*)(l_Lean_Meta_eqn1ThmSuffix___closed__0));
v___x_385_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_376_, v___x_384_, v_a_377_, v_a_378_);
return v___x_385_;
}
else
{
lean_dec(v_declName_376_);
return v___x_383_;
}
}
else
{
lean_dec(v_declName_376_);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable___boxed(lean_object* v_declName_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_386_, v_a_387_, v_a_388_);
lean_dec(v_a_388_);
lean_dec_ref(v_a_387_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_391_, lean_object* v_msg_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v_msg_392_, v___y_393_, v___y_394_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_397_, lean_object* v_msg_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(v_00_u03b1_397_, v_msg_398_, v___y_399_, v___y_400_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_402_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(lean_object* v_env_403_, lean_object* v_n_404_){
_start:
{
lean_object* v___x_405_; 
lean_inc(v_n_404_);
lean_inc_ref(v_env_403_);
v___x_405_ = l_Lean_Meta_declFromEqLikeName(v_env_403_, v_n_404_);
if (lean_obj_tag(v___x_405_) == 1)
{
lean_object* v_val_406_; lean_object* v_fst_407_; lean_object* v_snd_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v_val_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_val_406_);
lean_dec_ref_known(v___x_405_, 1);
v_fst_407_ = lean_ctor_get(v_val_406_, 0);
lean_inc(v_fst_407_);
v_snd_408_ = lean_ctor_get(v_val_406_, 1);
lean_inc(v_snd_408_);
lean_dec(v_val_406_);
v___x_409_ = l_Lean_Meta_mkEqLikeNameFor(v_env_403_, v_fst_407_, v_snd_408_);
v___x_410_ = lean_name_eq(v_n_404_, v___x_409_);
lean_dec(v___x_409_);
lean_dec(v_n_404_);
return v___x_410_;
}
else
{
uint8_t v___x_411_; 
lean_dec(v___x_405_);
lean_dec(v_n_404_);
lean_dec_ref(v_env_403_);
v___x_411_ = 0;
return v___x_411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object* v_env_412_, lean_object* v_n_413_){
_start:
{
uint8_t v_res_414_; lean_object* v_r_415_; 
v_res_414_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(v_env_412_, v_n_413_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_418_; lean_object* v___x_419_; 
v___f_418_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_));
v___x_419_ = l_Lean_registerReservedNamePredicate(v___f_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_box(0);
v___x_424_ = lean_st_mk_ref(v___x_423_);
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2____boxed(lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
return v_res_427_;
}
}
static lean_object* _init_l_Lean_Meta_registerGetEqnsFn___closed__1(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(l_Lean_Meta_registerGetEqnsFn___closed__0));
v___x_430_ = lean_mk_io_user_error(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn(lean_object* v_f_431_){
_start:
{
uint8_t v___x_433_; 
v___x_433_ = l_Lean_initializing();
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec_ref(v_f_431_);
v___x_434_ = lean_obj_once(&l_Lean_Meta_registerGetEqnsFn___closed__1, &l_Lean_Meta_registerGetEqnsFn___closed__1_once, _init_l_Lean_Meta_registerGetEqnsFn___closed__1);
v___x_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_436_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
v___x_437_ = lean_st_ref_take(v___x_436_);
v___x_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_438_, 0, v_f_431_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
v___x_439_ = lean_st_ref_put(v___x_436_, v___x_438_);
v___x_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
return v___x_440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn___boxed(lean_object* v_f_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Meta_registerGetEqnsFn(v_f_441_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(lean_object* v_declName_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v___x_454_; lean_object* v_env_455_; uint8_t v___x_456_; lean_object* v___x_457_; 
v___x_454_ = lean_st_ref_get(v_a_448_);
v_env_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc_ref(v_env_455_);
lean_dec(v___x_454_);
v___x_456_ = 0;
lean_inc(v_declName_444_);
v___x_457_ = l_Lean_Environment_findAsync_x3f(v_env_455_, v_declName_444_, v___x_456_);
if (lean_obj_tag(v___x_457_) == 1)
{
lean_object* v_val_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_489_; 
v_val_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_489_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_489_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_val_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_489_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
uint8_t v_kind_462_; 
v_kind_462_ = lean_ctor_get_uint8(v_val_458_, sizeof(void*)*3);
if (v_kind_462_ == 0)
{
lean_object* v_sig_463_; lean_object* v___x_464_; lean_object* v_env_465_; uint8_t v___x_466_; 
v_sig_463_ = lean_ctor_get(v_val_458_, 1);
lean_inc_ref(v_sig_463_);
lean_dec(v_val_458_);
v___x_464_ = lean_st_ref_get(v_a_448_);
v_env_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc_ref(v_env_465_);
lean_dec(v___x_464_);
v___x_466_ = l_Lean_Meta_isMatcherCore(v_env_465_, v_declName_444_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v_type_468_; lean_object* v___x_469_; 
lean_del_object(v___x_460_);
v___x_467_ = lean_task_get_own(v_sig_463_);
v_type_468_ = lean_ctor_get(v___x_467_, 2);
lean_inc_ref(v_type_468_);
lean_dec(v___x_467_);
v___x_469_ = l_Lean_Meta_isProp(v_type_468_, v_a_445_, v_a_446_, v_a_447_, v_a_448_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_484_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_484_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_484_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_484_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
uint8_t v___x_474_; 
v___x_474_ = lean_unbox(v_a_470_);
lean_dec(v_a_470_);
if (v___x_474_ == 0)
{
uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_475_ = 1;
v___x_476_ = lean_box(v___x_475_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_476_);
v___x_478_ = v___x_472_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_480_ = lean_box(v___x_466_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_480_);
v___x_482_ = v___x_472_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
return v___x_469_;
}
}
else
{
lean_object* v___x_485_; lean_object* v___x_487_; 
lean_dec_ref(v_sig_463_);
v___x_485_ = lean_box(v___x_456_);
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 0);
lean_ctor_set(v___x_460_, 0, v___x_485_);
v___x_487_ = v___x_460_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
else
{
lean_del_object(v___x_460_);
lean_dec(v_val_458_);
lean_dec(v_declName_444_);
goto v___jp_450_;
}
}
}
else
{
lean_dec(v___x_457_);
lean_dec(v_declName_444_);
goto v___jp_450_;
}
v___jp_450_:
{
uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = 0;
v___x_452_ = lean_box(v___x_451_);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms___boxed(lean_object* v_declName_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_491_);
return v_res_496_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState_default(void){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = lean_obj_once(&l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0, &l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0);
return v___x_499_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState(void){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(lean_object* v___x_501_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_501_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object* v___x_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(v___x_504_);
return v_res_506_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_507_; lean_object* v___f_508_; 
v___x_507_ = lean_obj_once(&l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0, &l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0);
v___f_508_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_508_, 0, v___x_507_);
return v___f_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___f_510_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_);
v___x_511_ = lean_box(0);
v___x_512_ = lean_box(1);
v___x_513_ = l_Lean_registerEnvExtension___redArg(v___f_510_, v___x_511_, v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object* v_a_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_();
return v_res_515_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(lean_object* v_opts_516_, lean_object* v_opt_517_){
_start:
{
lean_object* v_name_518_; lean_object* v_defValue_519_; lean_object* v_map_520_; lean_object* v___x_521_; 
v_name_518_ = lean_ctor_get(v_opt_517_, 0);
v_defValue_519_ = lean_ctor_get(v_opt_517_, 1);
v_map_520_ = lean_ctor_get(v_opts_516_, 0);
v___x_521_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_520_, v_name_518_);
if (lean_obj_tag(v___x_521_) == 0)
{
uint8_t v___x_522_; 
v___x_522_ = lean_unbox(v_defValue_519_);
return v___x_522_;
}
else
{
lean_object* v_val_523_; 
v_val_523_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v___x_521_, 1);
if (lean_obj_tag(v_val_523_) == 1)
{
uint8_t v_v_524_; 
v_v_524_ = lean_ctor_get_uint8(v_val_523_, 0);
lean_dec_ref_known(v_val_523_, 0);
return v_v_524_;
}
else
{
uint8_t v___x_525_; 
lean_dec(v_val_523_);
v___x_525_ = lean_unbox(v_defValue_519_);
return v___x_525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1___boxed(lean_object* v_opts_526_, lean_object* v_opt_527_){
_start:
{
uint8_t v_res_528_; lean_object* v_r_529_; 
v_res_528_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_526_, v_opt_527_);
lean_dec_ref(v_opt_527_);
lean_dec_ref(v_opts_526_);
v_r_529_ = lean_box(v_res_528_);
return v_r_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(lean_object* v_opts_530_, lean_object* v_opt_531_){
_start:
{
lean_object* v_name_532_; lean_object* v_defValue_533_; lean_object* v_map_534_; lean_object* v___x_535_; 
v_name_532_ = lean_ctor_get(v_opt_531_, 0);
v_defValue_533_ = lean_ctor_get(v_opt_531_, 1);
v_map_534_ = lean_ctor_get(v_opts_530_, 0);
v___x_535_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_534_, v_name_532_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_inc(v_defValue_533_);
return v_defValue_533_;
}
else
{
lean_object* v_val_536_; 
v_val_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_val_536_);
lean_dec_ref_known(v___x_535_, 1);
if (lean_obj_tag(v_val_536_) == 3)
{
lean_object* v_v_537_; 
v_v_537_ = lean_ctor_get(v_val_536_, 0);
lean_inc(v_v_537_);
lean_dec_ref_known(v_val_536_, 1);
return v_v_537_;
}
else
{
lean_dec(v_val_536_);
lean_inc(v_defValue_533_);
return v_defValue_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2___boxed(lean_object* v_opts_538_, lean_object* v_opt_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v_opts_538_, v_opt_539_);
lean_dec_ref(v_opt_539_);
lean_dec_ref(v_opts_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(lean_object* v_as_544_, size_t v_sz_545_, size_t v_i_546_, lean_object* v_b_547_){
_start:
{
lean_object* v_a_549_; uint8_t v___x_553_; 
v___x_553_ = lean_usize_dec_lt(v_i_546_, v_sz_545_);
if (v___x_553_ == 0)
{
return v_b_547_;
}
else
{
lean_object* v_a_554_; lean_object* v_fst_555_; lean_object* v_snd_556_; lean_object* v_map_557_; uint8_t v_hasTrace_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_571_; 
v_a_554_ = lean_array_uget_borrowed(v_as_544_, v_i_546_);
v_fst_555_ = lean_ctor_get(v_a_554_, 0);
v_snd_556_ = lean_ctor_get(v_a_554_, 1);
v_map_557_ = lean_ctor_get(v_b_547_, 0);
v_hasTrace_558_ = lean_ctor_get_uint8(v_b_547_, sizeof(void*)*1);
v_isSharedCheck_571_ = !lean_is_exclusive(v_b_547_);
if (v_isSharedCheck_571_ == 0)
{
v___x_560_ = v_b_547_;
v_isShared_561_ = v_isSharedCheck_571_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_map_557_);
lean_dec(v_b_547_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_571_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; 
lean_inc(v_snd_556_);
lean_inc(v_fst_555_);
v___x_562_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_555_, v_snd_556_, v_map_557_);
if (v_hasTrace_558_ == 0)
{
lean_object* v___x_563_; uint8_t v___x_564_; lean_object* v___x_566_; 
v___x_563_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_564_ = l_Lean_Name_isPrefixOf(v___x_563_, v_fst_555_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_566_ = v___x_560_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_562_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*1, v___x_564_);
v_a_549_ = v___x_566_;
goto v___jp_548_;
}
}
else
{
lean_object* v___x_569_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_569_ = v___x_560_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_562_);
lean_ctor_set_uint8(v_reuseFailAlloc_570_, sizeof(void*)*1, v_hasTrace_558_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
v_a_549_ = v___x_569_;
goto v___jp_548_;
}
}
}
}
v___jp_548_:
{
size_t v___x_550_; size_t v___x_551_; 
v___x_550_ = ((size_t)1ULL);
v___x_551_ = lean_usize_add(v_i_546_, v___x_550_);
v_i_546_ = v___x_551_;
v_b_547_ = v_a_549_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___boxed(lean_object* v_as_572_, lean_object* v_sz_573_, lean_object* v_i_574_, lean_object* v_b_575_){
_start:
{
size_t v_sz_boxed_576_; size_t v_i_boxed_577_; lean_object* v_res_578_; 
v_sz_boxed_576_ = lean_unbox_usize(v_sz_573_);
lean_dec(v_sz_573_);
v_i_boxed_577_ = lean_unbox_usize(v_i_574_);
lean_dec(v_i_574_);
v_res_578_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(v_as_572_, v_sz_boxed_576_, v_i_boxed_577_, v_b_575_);
lean_dec_ref(v_as_572_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(lean_object* v_o_579_, lean_object* v_k_580_, uint8_t v_v_581_){
_start:
{
lean_object* v_map_582_; uint8_t v_hasTrace_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_597_; 
v_map_582_ = lean_ctor_get(v_o_579_, 0);
v_hasTrace_583_ = lean_ctor_get_uint8(v_o_579_, sizeof(void*)*1);
v_isSharedCheck_597_ = !lean_is_exclusive(v_o_579_);
if (v_isSharedCheck_597_ == 0)
{
v___x_585_ = v_o_579_;
v_isShared_586_ = v_isSharedCheck_597_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_map_582_);
lean_dec(v_o_579_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_597_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_587_, 0, v_v_581_);
lean_inc(v_k_580_);
v___x_588_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_580_, v___x_587_, v_map_582_);
if (v_hasTrace_583_ == 0)
{
lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_592_; 
v___x_589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_590_ = l_Lean_Name_isPrefixOf(v___x_589_, v_k_580_);
lean_dec(v_k_580_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_588_);
v___x_592_ = v___x_585_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_588_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_ctor_set_uint8(v___x_592_, sizeof(void*)*1, v___x_590_);
return v___x_592_;
}
}
else
{
lean_object* v___x_595_; 
lean_dec(v_k_580_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_588_);
v___x_595_ = v___x_585_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_588_);
lean_ctor_set_uint8(v_reuseFailAlloc_596_, sizeof(void*)*1, v_hasTrace_583_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0___boxed(lean_object* v_o_598_, lean_object* v_k_599_, lean_object* v_v_600_){
_start:
{
uint8_t v_v_boxed_601_; lean_object* v_res_602_; 
v_v_boxed_601_ = lean_unbox(v_v_600_);
v_res_602_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(v_o_598_, v_k_599_, v_v_boxed_601_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(lean_object* v_opts_603_, lean_object* v_opt_604_, uint8_t v_val_605_){
_start:
{
lean_object* v_name_606_; lean_object* v___x_607_; 
v_name_606_ = lean_ctor_get(v_opt_604_, 0);
lean_inc(v_name_606_);
lean_dec_ref(v_opt_604_);
v___x_607_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(v_opts_603_, v_name_606_, v_val_605_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0___boxed(lean_object* v_opts_608_, lean_object* v_opt_609_, lean_object* v_val_610_){
_start:
{
uint8_t v_val_boxed_611_; lean_object* v_res_612_; 
v_val_boxed_611_ = lean_unbox(v_val_610_);
v_res_612_ = l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(v_opts_608_, v_opt_609_, v_val_boxed_611_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(lean_object* v_as_613_, size_t v_i_614_, size_t v_stop_615_, lean_object* v_b_616_){
_start:
{
uint8_t v___x_617_; 
v___x_617_ = lean_usize_dec_eq(v_i_614_, v_stop_615_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v_defValue_619_; uint8_t v___x_620_; lean_object* v___x_621_; size_t v___x_622_; size_t v___x_623_; 
v___x_618_ = lean_array_uget_borrowed(v_as_613_, v_i_614_);
v_defValue_619_ = lean_ctor_get(v___x_618_, 1);
v___x_620_ = lean_unbox(v_defValue_619_);
lean_inc(v___x_618_);
v___x_621_ = l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(v_b_616_, v___x_618_, v___x_620_);
v___x_622_ = ((size_t)1ULL);
v___x_623_ = lean_usize_add(v_i_614_, v___x_622_);
v_i_614_ = v___x_623_;
v_b_616_ = v___x_621_;
goto _start;
}
else
{
return v_b_616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4___boxed(lean_object* v_as_625_, lean_object* v_i_626_, lean_object* v_stop_627_, lean_object* v_b_628_){
_start:
{
size_t v_i_boxed_629_; size_t v_stop_boxed_630_; lean_object* v_res_631_; 
v_i_boxed_629_ = lean_unbox_usize(v_i_626_);
lean_dec(v_i_626_);
v_stop_boxed_630_ = lean_unbox_usize(v_stop_627_);
lean_dec(v_stop_627_);
v_res_631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v_as_625_, v_i_boxed_629_, v_stop_boxed_630_, v_b_628_);
lean_dec_ref(v_as_625_);
return v_res_631_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__0(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__1(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
return v___x_635_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__2(void){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Array_instInhabited___redArg();
return v___x_636_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__3(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = l_Lean_Meta_eqnAffectingOptions;
v___x_638_ = lean_array_get_size(v___x_637_);
return v___x_638_;
}
}
static uint8_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__4(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_639_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = lean_nat_dec_lt(v___x_640_, v___x_639_);
return v___x_641_;
}
}
static uint8_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__5(void){
_start:
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
v___x_643_ = lean_nat_dec_le(v___x_642_, v___x_642_);
return v___x_643_;
}
}
static size_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__6(void){
_start:
{
lean_object* v___x_644_; size_t v___x_645_; 
v___x_644_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
v___x_645_ = lean_usize_of_nat(v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg(lean_object* v_declName_646_, lean_object* v_act_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v___y_654_; uint8_t v___y_655_; lean_object* v_fileName_656_; lean_object* v_fileMap_657_; lean_object* v_currNamespace_658_; lean_object* v_openDecls_659_; lean_object* v_initHeartbeats_660_; lean_object* v_maxHeartbeats_661_; lean_object* v_quotContext_662_; lean_object* v_currMacroScope_663_; lean_object* v_cancelTk_x3f_664_; lean_object* v_inheritedTraceOptions_665_; lean_object* v_currRecDepth_666_; lean_object* v_ref_667_; uint8_t v_suppressElabErrors_668_; lean_object* v___y_669_; lean_object* v___y_676_; uint8_t v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_695_; uint8_t v___y_696_; uint8_t v___y_697_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v_env_720_; lean_object* v___x_721_; lean_object* v_toEnvExtension_722_; lean_object* v_toCold_723_; lean_object* v_asyncMode_724_; lean_object* v_currRecDepth_725_; lean_object* v_ref_726_; uint8_t v_suppressElabErrors_727_; lean_object* v_fileName_728_; lean_object* v_fileMap_729_; lean_object* v_options_730_; lean_object* v_currNamespace_731_; lean_object* v_openDecls_732_; lean_object* v_initHeartbeats_733_; lean_object* v_maxHeartbeats_734_; lean_object* v_quotContext_735_; lean_object* v_currMacroScope_736_; lean_object* v_cancelTk_x3f_737_; lean_object* v_inheritedTraceOptions_738_; lean_object* v___y_740_; uint8_t v___x_746_; lean_object* v___x_747_; 
v___x_718_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__2, &l_Lean_Meta_withEqnOptions___redArg___closed__2_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__2);
v___x_719_ = lean_st_ref_get(v_a_651_);
v_env_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc_ref(v_env_720_);
lean_dec(v___x_719_);
v___x_721_ = l_Lean_Meta_eqnOptionsExt;
v_toEnvExtension_722_ = lean_ctor_get(v___x_721_, 0);
v_toCold_723_ = lean_ctor_get(v_a_650_, 0);
v_asyncMode_724_ = lean_ctor_get(v_toEnvExtension_722_, 2);
v_currRecDepth_725_ = lean_ctor_get(v_a_650_, 1);
v_ref_726_ = lean_ctor_get(v_a_650_, 2);
v_suppressElabErrors_727_ = lean_ctor_get_uint8(v_a_650_, sizeof(void*)*3 + 1);
v_fileName_728_ = lean_ctor_get(v_toCold_723_, 0);
v_fileMap_729_ = lean_ctor_get(v_toCold_723_, 1);
v_options_730_ = lean_ctor_get(v_toCold_723_, 2);
v_currNamespace_731_ = lean_ctor_get(v_toCold_723_, 4);
v_openDecls_732_ = lean_ctor_get(v_toCold_723_, 5);
v_initHeartbeats_733_ = lean_ctor_get(v_toCold_723_, 6);
v_maxHeartbeats_734_ = lean_ctor_get(v_toCold_723_, 7);
v_quotContext_735_ = lean_ctor_get(v_toCold_723_, 8);
v_currMacroScope_736_ = lean_ctor_get(v_toCold_723_, 9);
v_cancelTk_x3f_737_ = lean_ctor_get(v_toCold_723_, 10);
v_inheritedTraceOptions_738_ = lean_ctor_get(v_toCold_723_, 11);
v___x_746_ = 0;
v___x_747_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_718_, v___x_721_, v_env_720_, v_declName_646_, v_asyncMode_724_, v___x_746_);
if (lean_obj_tag(v___x_747_) == 1)
{
lean_object* v_val_748_; lean_object* v___y_750_; lean_object* v___x_754_; uint8_t v___x_755_; 
v_val_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_val_748_);
lean_dec_ref_known(v___x_747_, 1);
v___x_754_ = l_Lean_Meta_eqnAffectingOptions;
v___x_755_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__4, &l_Lean_Meta_withEqnOptions___redArg___closed__4_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__4);
if (v___x_755_ == 0)
{
lean_inc_ref(v_options_730_);
v___y_750_ = v_options_730_;
goto v___jp_749_;
}
else
{
uint8_t v___x_756_; 
v___x_756_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__5, &l_Lean_Meta_withEqnOptions___redArg___closed__5_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__5);
if (v___x_756_ == 0)
{
if (v___x_755_ == 0)
{
lean_inc_ref(v_options_730_);
v___y_750_ = v_options_730_;
goto v___jp_749_;
}
else
{
size_t v___x_757_; size_t v___x_758_; lean_object* v___x_759_; 
v___x_757_ = ((size_t)0ULL);
v___x_758_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_730_);
v___x_759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_754_, v___x_757_, v___x_758_, v_options_730_);
v___y_750_ = v___x_759_;
goto v___jp_749_;
}
}
else
{
size_t v___x_760_; size_t v___x_761_; lean_object* v___x_762_; 
v___x_760_ = ((size_t)0ULL);
v___x_761_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_730_);
v___x_762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_754_, v___x_760_, v___x_761_, v_options_730_);
v___y_750_ = v___x_762_;
goto v___jp_749_;
}
}
v___jp_749_:
{
size_t v_sz_751_; size_t v___x_752_; lean_object* v___x_753_; 
v_sz_751_ = lean_array_size(v_val_748_);
v___x_752_ = ((size_t)0ULL);
v___x_753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(v_val_748_, v_sz_751_, v___x_752_, v___y_750_);
lean_dec(v_val_748_);
v___y_740_ = v___x_753_;
goto v___jp_739_;
}
}
else
{
lean_object* v___x_763_; uint8_t v___x_764_; 
lean_dec(v___x_747_);
v___x_763_ = l_Lean_Meta_eqnAffectingOptions;
v___x_764_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__4, &l_Lean_Meta_withEqnOptions___redArg___closed__4_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__4);
if (v___x_764_ == 0)
{
lean_inc_ref(v_options_730_);
v___y_740_ = v_options_730_;
goto v___jp_739_;
}
else
{
uint8_t v___x_765_; 
v___x_765_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__5, &l_Lean_Meta_withEqnOptions___redArg___closed__5_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__5);
if (v___x_765_ == 0)
{
if (v___x_764_ == 0)
{
lean_inc_ref(v_options_730_);
v___y_740_ = v_options_730_;
goto v___jp_739_;
}
else
{
size_t v___x_766_; size_t v___x_767_; lean_object* v___x_768_; 
v___x_766_ = ((size_t)0ULL);
v___x_767_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_730_);
v___x_768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_763_, v___x_766_, v___x_767_, v_options_730_);
v___y_740_ = v___x_768_;
goto v___jp_739_;
}
}
else
{
size_t v___x_769_; size_t v___x_770_; lean_object* v___x_771_; 
v___x_769_ = ((size_t)0ULL);
v___x_770_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_730_);
v___x_771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_763_, v___x_769_, v___x_770_, v_options_730_);
v___y_740_ = v___x_771_;
goto v___jp_739_;
}
}
}
v___jp_653_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_670_ = l_Lean_maxRecDepth;
v___x_671_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v___y_654_, v___x_670_);
v___x_672_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_672_, 0, v_fileName_656_);
lean_ctor_set(v___x_672_, 1, v_fileMap_657_);
lean_ctor_set(v___x_672_, 2, v___y_654_);
lean_ctor_set(v___x_672_, 3, v___x_671_);
lean_ctor_set(v___x_672_, 4, v_currNamespace_658_);
lean_ctor_set(v___x_672_, 5, v_openDecls_659_);
lean_ctor_set(v___x_672_, 6, v_initHeartbeats_660_);
lean_ctor_set(v___x_672_, 7, v_maxHeartbeats_661_);
lean_ctor_set(v___x_672_, 8, v_quotContext_662_);
lean_ctor_set(v___x_672_, 9, v_currMacroScope_663_);
lean_ctor_set(v___x_672_, 10, v_cancelTk_x3f_664_);
lean_ctor_set(v___x_672_, 11, v_inheritedTraceOptions_665_);
lean_inc(v_ref_667_);
lean_inc(v_currRecDepth_666_);
v___x_673_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v_currRecDepth_666_);
lean_ctor_set(v___x_673_, 2, v_ref_667_);
lean_ctor_set_uint8(v___x_673_, sizeof(void*)*3, v___y_655_);
lean_ctor_set_uint8(v___x_673_, sizeof(void*)*3 + 1, v_suppressElabErrors_668_);
lean_inc(v___y_669_);
lean_inc(v_a_649_);
lean_inc_ref(v_a_648_);
v___x_674_ = lean_apply_5(v_act_647_, v_a_648_, v_a_649_, v___x_673_, v___y_669_, lean_box(0));
return v___x_674_;
}
v___jp_675_:
{
lean_object* v_toCold_680_; lean_object* v_currRecDepth_681_; lean_object* v_ref_682_; uint8_t v_suppressElabErrors_683_; lean_object* v_fileName_684_; lean_object* v_fileMap_685_; lean_object* v_currNamespace_686_; lean_object* v_openDecls_687_; lean_object* v_initHeartbeats_688_; lean_object* v_maxHeartbeats_689_; lean_object* v_quotContext_690_; lean_object* v_currMacroScope_691_; lean_object* v_cancelTk_x3f_692_; lean_object* v_inheritedTraceOptions_693_; 
v_toCold_680_ = lean_ctor_get(v___y_678_, 0);
v_currRecDepth_681_ = lean_ctor_get(v___y_678_, 1);
v_ref_682_ = lean_ctor_get(v___y_678_, 2);
v_suppressElabErrors_683_ = lean_ctor_get_uint8(v___y_678_, sizeof(void*)*3 + 1);
v_fileName_684_ = lean_ctor_get(v_toCold_680_, 0);
v_fileMap_685_ = lean_ctor_get(v_toCold_680_, 1);
v_currNamespace_686_ = lean_ctor_get(v_toCold_680_, 4);
v_openDecls_687_ = lean_ctor_get(v_toCold_680_, 5);
v_initHeartbeats_688_ = lean_ctor_get(v_toCold_680_, 6);
v_maxHeartbeats_689_ = lean_ctor_get(v_toCold_680_, 7);
v_quotContext_690_ = lean_ctor_get(v_toCold_680_, 8);
v_currMacroScope_691_ = lean_ctor_get(v_toCold_680_, 9);
v_cancelTk_x3f_692_ = lean_ctor_get(v_toCold_680_, 10);
v_inheritedTraceOptions_693_ = lean_ctor_get(v_toCold_680_, 11);
lean_inc_ref(v_inheritedTraceOptions_693_);
lean_inc(v_cancelTk_x3f_692_);
lean_inc(v_currMacroScope_691_);
lean_inc(v_quotContext_690_);
lean_inc(v_maxHeartbeats_689_);
lean_inc(v_initHeartbeats_688_);
lean_inc(v_openDecls_687_);
lean_inc(v_currNamespace_686_);
lean_inc_ref(v_fileMap_685_);
lean_inc_ref(v_fileName_684_);
v___y_654_ = v___y_676_;
v___y_655_ = v___y_677_;
v_fileName_656_ = v_fileName_684_;
v_fileMap_657_ = v_fileMap_685_;
v_currNamespace_658_ = v_currNamespace_686_;
v_openDecls_659_ = v_openDecls_687_;
v_initHeartbeats_660_ = v_initHeartbeats_688_;
v_maxHeartbeats_661_ = v_maxHeartbeats_689_;
v_quotContext_662_ = v_quotContext_690_;
v_currMacroScope_663_ = v_currMacroScope_691_;
v_cancelTk_x3f_664_ = v_cancelTk_x3f_692_;
v_inheritedTraceOptions_665_ = v_inheritedTraceOptions_693_;
v_currRecDepth_666_ = v_currRecDepth_681_;
v_ref_667_ = v_ref_682_;
v_suppressElabErrors_668_ = v_suppressElabErrors_683_;
v___y_669_ = v___y_679_;
goto v___jp_653_;
}
v___jp_694_:
{
if (v___y_697_ == 0)
{
lean_object* v___x_698_; lean_object* v_env_699_; lean_object* v_nextMacroScope_700_; lean_object* v_ngen_701_; lean_object* v_auxDeclNGen_702_; lean_object* v_traceState_703_; lean_object* v_messages_704_; lean_object* v_infoState_705_; lean_object* v_snapshotTasks_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_716_; 
v___x_698_ = lean_st_ref_take(v_a_651_);
v_env_699_ = lean_ctor_get(v___x_698_, 0);
v_nextMacroScope_700_ = lean_ctor_get(v___x_698_, 1);
v_ngen_701_ = lean_ctor_get(v___x_698_, 2);
v_auxDeclNGen_702_ = lean_ctor_get(v___x_698_, 3);
v_traceState_703_ = lean_ctor_get(v___x_698_, 4);
v_messages_704_ = lean_ctor_get(v___x_698_, 6);
v_infoState_705_ = lean_ctor_get(v___x_698_, 7);
v_snapshotTasks_706_ = lean_ctor_get(v___x_698_, 8);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_716_ == 0)
{
lean_object* v_unused_717_; 
v_unused_717_ = lean_ctor_get(v___x_698_, 5);
lean_dec(v_unused_717_);
v___x_708_ = v___x_698_;
v_isShared_709_ = v_isSharedCheck_716_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_snapshotTasks_706_);
lean_inc(v_infoState_705_);
lean_inc(v_messages_704_);
lean_inc(v_traceState_703_);
lean_inc(v_auxDeclNGen_702_);
lean_inc(v_ngen_701_);
lean_inc(v_nextMacroScope_700_);
lean_inc(v_env_699_);
lean_dec(v___x_698_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_716_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_710_ = l_Lean_Kernel_enableDiag(v_env_699_, v___y_696_);
v___x_711_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 5, v___x_711_);
lean_ctor_set(v___x_708_, 0, v___x_710_);
v___x_713_ = v___x_708_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_710_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v_nextMacroScope_700_);
lean_ctor_set(v_reuseFailAlloc_715_, 2, v_ngen_701_);
lean_ctor_set(v_reuseFailAlloc_715_, 3, v_auxDeclNGen_702_);
lean_ctor_set(v_reuseFailAlloc_715_, 4, v_traceState_703_);
lean_ctor_set(v_reuseFailAlloc_715_, 5, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_715_, 6, v_messages_704_);
lean_ctor_set(v_reuseFailAlloc_715_, 7, v_infoState_705_);
lean_ctor_set(v_reuseFailAlloc_715_, 8, v_snapshotTasks_706_);
v___x_713_ = v_reuseFailAlloc_715_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; 
v___x_714_ = lean_st_ref_put(v_a_651_, v___x_713_);
v___y_676_ = v___y_695_;
v___y_677_ = v___y_696_;
v___y_678_ = v_a_650_;
v___y_679_ = v_a_651_;
goto v___jp_675_;
}
}
}
else
{
v___y_676_ = v___y_695_;
v___y_677_ = v___y_696_;
v___y_678_ = v_a_650_;
v___y_679_ = v_a_651_;
goto v___jp_675_;
}
}
v___jp_739_:
{
lean_object* v___x_741_; uint8_t v___x_742_; lean_object* v___x_743_; lean_object* v_env_744_; uint8_t v___x_745_; 
v___x_741_ = l_Lean_diagnostics;
v___x_742_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v___y_740_, v___x_741_);
v___x_743_ = lean_st_ref_get(v_a_651_);
v_env_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc_ref(v_env_744_);
lean_dec(v___x_743_);
v___x_745_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_744_);
lean_dec_ref(v_env_744_);
if (v___x_742_ == 0)
{
if (v___x_745_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_738_);
lean_inc(v_cancelTk_x3f_737_);
lean_inc(v_currMacroScope_736_);
lean_inc(v_quotContext_735_);
lean_inc(v_maxHeartbeats_734_);
lean_inc(v_initHeartbeats_733_);
lean_inc(v_openDecls_732_);
lean_inc(v_currNamespace_731_);
lean_inc_ref(v_fileMap_729_);
lean_inc_ref(v_fileName_728_);
v___y_654_ = v___y_740_;
v___y_655_ = v___x_742_;
v_fileName_656_ = v_fileName_728_;
v_fileMap_657_ = v_fileMap_729_;
v_currNamespace_658_ = v_currNamespace_731_;
v_openDecls_659_ = v_openDecls_732_;
v_initHeartbeats_660_ = v_initHeartbeats_733_;
v_maxHeartbeats_661_ = v_maxHeartbeats_734_;
v_quotContext_662_ = v_quotContext_735_;
v_currMacroScope_663_ = v_currMacroScope_736_;
v_cancelTk_x3f_664_ = v_cancelTk_x3f_737_;
v_inheritedTraceOptions_665_ = v_inheritedTraceOptions_738_;
v_currRecDepth_666_ = v_currRecDepth_725_;
v_ref_667_ = v_ref_726_;
v_suppressElabErrors_668_ = v_suppressElabErrors_727_;
v___y_669_ = v_a_651_;
goto v___jp_653_;
}
else
{
v___y_695_ = v___y_740_;
v___y_696_ = v___x_742_;
v___y_697_ = v___x_742_;
goto v___jp_694_;
}
}
else
{
v___y_695_ = v___y_740_;
v___y_696_ = v___x_742_;
v___y_697_ = v___x_745_;
goto v___jp_694_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg___boxed(lean_object* v_declName_772_, lean_object* v_act_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Meta_withEqnOptions___redArg(v_declName_772_, v_act_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions(lean_object* v_00_u03b1_780_, lean_object* v_declName_781_, lean_object* v_act_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_Meta_withEqnOptions___redArg(v_declName_781_, v_act_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object* v_00_u03b1_789_, lean_object* v_declName_790_, lean_object* v_act_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lean_Meta_withEqnOptions(v_00_u03b1_789_, v_declName_790_, v_act_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(lean_object* v_thm_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; lean_object* v_env_802_; lean_object* v_toConstantVal_803_; lean_object* v_value_804_; lean_object* v_all_805_; uint8_t v___y_807_; lean_object* v_type_815_; uint8_t v___x_816_; 
v___x_801_ = lean_st_ref_get(v___y_799_);
v_env_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc_ref_n(v_env_802_, 2);
lean_dec(v___x_801_);
v_toConstantVal_803_ = lean_ctor_get(v_thm_798_, 0);
v_value_804_ = lean_ctor_get(v_thm_798_, 1);
v_all_805_ = lean_ctor_get(v_thm_798_, 2);
v_type_815_ = lean_ctor_get(v_toConstantVal_803_, 2);
v___x_816_ = l_Lean_Environment_hasUnsafe(v_env_802_, v_type_815_);
if (v___x_816_ == 0)
{
uint8_t v___x_817_; 
v___x_817_ = l_Lean_Environment_hasUnsafe(v_env_802_, v_value_804_);
v___y_807_ = v___x_817_;
goto v___jp_806_;
}
else
{
lean_dec_ref(v_env_802_);
v___y_807_ = v___x_816_;
goto v___jp_806_;
}
v___jp_806_:
{
if (v___y_807_ == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_808_, 0, v_thm_798_);
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
else
{
lean_object* v___x_810_; uint8_t v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_inc(v_all_805_);
lean_inc_ref(v_value_804_);
lean_inc_ref(v_toConstantVal_803_);
lean_dec_ref(v_thm_798_);
v___x_810_ = lean_box(0);
v___x_811_ = 0;
v___x_812_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_812_, 0, v_toConstantVal_803_);
lean_ctor_set(v___x_812_, 1, v_value_804_);
lean_ctor_set(v___x_812_, 2, v___x_810_);
lean_ctor_set(v___x_812_, 3, v_all_805_);
lean_ctor_set_uint8(v___x_812_, sizeof(void*)*4, v___x_811_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg___boxed(lean_object* v_thm_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v_thm_818_, v___y_819_);
lean_dec(v___y_819_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(lean_object* v_thm_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v_thm_822_, v___y_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___boxed(lean_object* v_thm_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(v_thm_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(lean_object* v_k_836_, lean_object* v_b_837_, lean_object* v_c_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v___x_844_; 
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
v___x_844_ = lean_apply_7(v_k_836_, v_b_837_, v_c_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, lean_box(0));
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed(lean_object* v_k_845_, lean_object* v_b_846_, lean_object* v_c_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(v_k_845_, v_b_846_, v_c_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(lean_object* v_e_854_, lean_object* v_k_855_, uint8_t v_cleanupAnnotations_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v___f_862_; uint8_t v___x_863_; uint8_t v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___f_862_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_862_, 0, v_k_855_);
v___x_863_ = 1;
v___x_864_ = 0;
v___x_865_ = lean_box(0);
v___x_866_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_854_, v___x_863_, v___x_864_, v___x_863_, v___x_864_, v___x_865_, v___f_862_, v_cleanupAnnotations_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
v_a_875_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_866_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_866_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___boxed(lean_object* v_e_883_, lean_object* v_k_884_, lean_object* v_cleanupAnnotations_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_891_; lean_object* v_res_892_; 
v_cleanupAnnotations_boxed_891_ = lean_unbox(v_cleanupAnnotations_885_);
v_res_892_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_e_883_, v_k_884_, v_cleanupAnnotations_boxed_891_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(lean_object* v_00_u03b1_893_, lean_object* v_e_894_, lean_object* v_k_895_, uint8_t v_cleanupAnnotations_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_e_894_, v_k_895_, v_cleanupAnnotations_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___boxed(lean_object* v_00_u03b1_903_, lean_object* v_e_904_, lean_object* v_k_905_, lean_object* v_cleanupAnnotations_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_912_; lean_object* v_res_913_; 
v_cleanupAnnotations_boxed_912_ = lean_unbox(v_cleanupAnnotations_906_);
v_res_913_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(v_00_u03b1_903_, v_e_904_, v_k_905_, v_cleanupAnnotations_boxed_912_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
if (lean_obj_tag(v_a_914_) == 0)
{
lean_object* v___x_916_; 
v___x_916_ = l_List_reverse___redArg(v_a_915_);
return v___x_916_;
}
else
{
lean_object* v_head_917_; lean_object* v_tail_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_927_; 
v_head_917_ = lean_ctor_get(v_a_914_, 0);
v_tail_918_ = lean_ctor_get(v_a_914_, 1);
v_isSharedCheck_927_ = !lean_is_exclusive(v_a_914_);
if (v_isSharedCheck_927_ == 0)
{
v___x_920_ = v_a_914_;
v_isShared_921_ = v_isSharedCheck_927_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_tail_918_);
lean_inc(v_head_917_);
lean_dec(v_a_914_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_927_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_922_ = l_Lean_mkLevelParam(v_head_917_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v_a_915_);
lean_ctor_set(v___x_920_, 0, v___x_922_);
v___x_924_ = v___x_920_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_922_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_a_915_);
v___x_924_ = v_reuseFailAlloc_926_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
v_a_914_ = v_tail_918_;
v_a_915_ = v___x_924_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(lean_object* v_toConstantVal_928_, lean_object* v_name_929_, lean_object* v_xs_930_, lean_object* v_body_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_name_937_; lean_object* v_levelParams_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_1008_; 
v_name_937_ = lean_ctor_get(v_toConstantVal_928_, 0);
v_levelParams_938_ = lean_ctor_get(v_toConstantVal_928_, 1);
v_isSharedCheck_1008_ = !lean_is_exclusive(v_toConstantVal_928_);
if (v_isSharedCheck_1008_ == 0)
{
lean_object* v_unused_1009_; 
v_unused_1009_ = lean_ctor_get(v_toConstantVal_928_, 2);
lean_dec(v_unused_1009_);
v___x_940_ = v_toConstantVal_928_;
v_isShared_941_ = v_isSharedCheck_1008_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_levelParams_938_);
lean_inc(v_name_937_);
lean_dec(v_toConstantVal_928_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_1008_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v_lhs_945_; lean_object* v___x_946_; 
v___x_942_ = lean_box(0);
lean_inc(v_levelParams_938_);
v___x_943_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(v_levelParams_938_, v___x_942_);
v___x_944_ = l_Lean_mkConst(v_name_937_, v___x_943_);
v_lhs_945_ = l_Lean_mkAppN(v___x_944_, v_xs_930_);
lean_inc_ref(v_lhs_945_);
v___x_946_ = l_Lean_Meta_mkEq(v_lhs_945_, v_body_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; uint8_t v___x_948_; uint8_t v___x_949_; uint8_t v___x_950_; lean_object* v___x_951_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = 0;
v___x_949_ = 1;
v___x_950_ = 1;
v___x_951_ = l_Lean_Meta_mkForallFVars(v_xs_930_, v_a_947_, v___x_948_, v___x_949_, v___x_949_, v___x_950_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_953_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_951_, 1);
v___x_953_ = l_Lean_Meta_letToHave(v_a_952_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = l_Lean_Meta_mkEqRefl(v_lhs_945_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_957_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
v___x_957_ = l_Lean_Meta_mkLambdaFVars(v_xs_930_, v_a_956_, v___x_948_, v___x_949_, v___x_948_, v___x_949_, v___x_950_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
lean_inc(v_name_929_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 2, v_a_954_);
lean_ctor_set(v___x_940_, 0, v_name_929_);
v___x_960_ = v___x_940_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_name_929_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_levelParams_938_);
lean_ctor_set(v_reuseFailAlloc_967_, 2, v_a_954_);
v___x_960_ = v_reuseFailAlloc_967_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v_a_964_; lean_object* v___x_965_; 
lean_inc(v_name_929_);
v___x_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_961_, 0, v_name_929_);
lean_ctor_set(v___x_961_, 1, v___x_942_);
v___x_962_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_962_, 0, v___x_960_);
lean_ctor_set(v___x_962_, 1, v_a_958_);
lean_ctor_set(v___x_962_, 2, v___x_961_);
v___x_963_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v___x_962_, v___y_935_);
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
lean_dec_ref(v___x_963_);
v___x_965_ = l_Lean_addDecl(v_a_964_, v___x_948_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v___x_966_; 
lean_dec_ref_known(v___x_965_, 1);
v___x_966_ = l_Lean_inferDefEqAttr(v_name_929_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
return v___x_966_;
}
else
{
lean_dec(v_name_929_);
return v___x_965_;
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec(v_a_954_);
lean_del_object(v___x_940_);
lean_dec(v_levelParams_938_);
lean_dec(v_name_929_);
v_a_968_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_957_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_957_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec(v_a_954_);
lean_del_object(v___x_940_);
lean_dec(v_levelParams_938_);
lean_dec(v_name_929_);
v_a_976_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_955_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_955_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
lean_dec_ref(v_lhs_945_);
lean_del_object(v___x_940_);
lean_dec(v_levelParams_938_);
lean_dec(v_name_929_);
v_a_984_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_953_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_953_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec_ref(v_lhs_945_);
lean_del_object(v___x_940_);
lean_dec(v_levelParams_938_);
lean_dec(v_name_929_);
v_a_992_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_951_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_951_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec_ref(v_lhs_945_);
lean_del_object(v___x_940_);
lean_dec(v_levelParams_938_);
lean_dec(v_name_929_);
v_a_1000_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_946_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_946_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed(lean_object* v_toConstantVal_1010_, lean_object* v_name_1011_, lean_object* v_xs_1012_, lean_object* v_body_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(v_toConstantVal_1010_, v_name_1011_, v_xs_1012_, v_body_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec_ref(v_xs_1012_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(lean_object* v_name_1020_, lean_object* v_info_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_toConstantVal_1027_; lean_object* v_value_1028_; lean_object* v___f_1029_; uint8_t v___x_1030_; lean_object* v___x_1031_; 
v_toConstantVal_1027_ = lean_ctor_get(v_info_1021_, 0);
lean_inc_ref(v_toConstantVal_1027_);
v_value_1028_ = lean_ctor_get(v_info_1021_, 1);
lean_inc_ref(v_value_1028_);
lean_dec_ref(v_info_1021_);
v___f_1029_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1029_, 0, v_toConstantVal_1027_);
lean_closure_set(v___f_1029_, 1, v_name_1020_);
v___x_1030_ = 1;
v___x_1031_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_value_1028_, v___f_1029_, v___x_1030_, v_a_1022_, v_a_1023_, v_a_1024_, v_a_1025_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed(lean_object* v_name_1032_, lean_object* v_info_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(v_name_1032_, v_info_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm(lean_object* v_declName_1040_, lean_object* v_name_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1050_; lean_object* v_env_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; 
v___x_1050_ = lean_st_ref_get(v_a_1045_);
v_env_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc_ref(v_env_1051_);
lean_dec(v___x_1050_);
v___x_1052_ = 0;
lean_inc(v_declName_1040_);
v___x_1053_ = l_Lean_Environment_find_x3f(v_env_1051_, v_declName_1040_, v___x_1052_);
if (lean_obj_tag(v___x_1053_) == 1)
{
lean_object* v_val_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1081_; 
v_val_1054_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1056_ = v___x_1053_;
v_isShared_1057_ = v_isSharedCheck_1081_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_val_1054_);
lean_dec(v___x_1053_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1081_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
if (lean_obj_tag(v_val_1054_) == 1)
{
lean_object* v_val_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v_val_1058_ = lean_ctor_get(v_val_1054_, 0);
lean_inc_ref(v_val_1058_);
lean_dec_ref_known(v_val_1054_, 1);
lean_inc_n(v_name_1041_, 2);
v___x_1059_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed), 7, 2);
lean_closure_set(v___x_1059_, 0, v_name_1041_);
lean_closure_set(v___x_1059_, 1, v_val_1058_);
lean_inc(v_declName_1040_);
v___x_1060_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_1060_, 0, lean_box(0));
lean_closure_set(v___x_1060_, 1, v_declName_1040_);
lean_closure_set(v___x_1060_, 2, v___x_1059_);
v___x_1061_ = l_Lean_Meta_realizeConst(v_declName_1040_, v_name_1041_, v___x_1060_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1071_; 
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1071_ == 0)
{
lean_object* v_unused_1072_; 
v_unused_1072_ = lean_ctor_get(v___x_1061_, 0);
lean_dec(v_unused_1072_);
v___x_1063_ = v___x_1061_;
v_isShared_1064_ = v_isSharedCheck_1071_;
goto v_resetjp_1062_;
}
else
{
lean_dec(v___x_1061_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1071_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v_name_1041_);
v___x_1066_ = v___x_1056_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_name_1041_);
v___x_1066_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1068_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1066_);
v___x_1068_ = v___x_1063_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_del_object(v___x_1056_);
lean_dec(v_name_1041_);
v_a_1073_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1061_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1061_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
else
{
lean_del_object(v___x_1056_);
lean_dec(v_val_1054_);
lean_dec(v_name_1041_);
lean_dec(v_declName_1040_);
goto v___jp_1047_;
}
}
}
else
{
lean_dec(v___x_1053_);
lean_dec(v_name_1041_);
lean_dec(v_declName_1040_);
goto v___jp_1047_;
}
v___jp_1047_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_box(0);
v___x_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
return v___x_1049_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm___boxed(lean_object* v_declName_1082_, lean_object* v_name_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_Meta_mkSimpleEqThm(v_declName_1082_, v_name_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1090_, lean_object* v_vals_1091_, lean_object* v_i_1092_, lean_object* v_k_1093_){
_start:
{
lean_object* v___x_1094_; uint8_t v___x_1095_; 
v___x_1094_ = lean_array_get_size(v_keys_1090_);
v___x_1095_ = lean_nat_dec_lt(v_i_1092_, v___x_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; 
lean_dec(v_i_1092_);
v___x_1096_ = lean_box(0);
return v___x_1096_;
}
else
{
lean_object* v_k_x27_1097_; uint8_t v___x_1098_; 
v_k_x27_1097_ = lean_array_fget_borrowed(v_keys_1090_, v_i_1092_);
v___x_1098_ = lean_name_eq(v_k_1093_, v_k_x27_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = lean_nat_add(v_i_1092_, v___x_1099_);
lean_dec(v_i_1092_);
v_i_1092_ = v___x_1100_;
goto _start;
}
else
{
lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1102_ = lean_array_fget_borrowed(v_vals_1091_, v_i_1092_);
lean_dec(v_i_1092_);
lean_inc(v___x_1102_);
v___x_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
return v___x_1103_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1104_, lean_object* v_vals_1105_, lean_object* v_i_1106_, lean_object* v_k_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1104_, v_vals_1105_, v_i_1106_, v_k_1107_);
lean_dec(v_k_1107_);
lean_dec_ref(v_vals_1105_);
lean_dec_ref(v_keys_1104_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(lean_object* v_x_1109_, size_t v_x_1110_, lean_object* v_x_1111_){
_start:
{
if (lean_obj_tag(v_x_1109_) == 0)
{
lean_object* v_es_1112_; lean_object* v___x_1113_; size_t v___x_1114_; size_t v___x_1115_; lean_object* v_j_1116_; lean_object* v___x_1117_; 
v_es_1112_ = lean_ctor_get(v_x_1109_, 0);
v___x_1113_ = lean_box(2);
v___x_1114_ = ((size_t)31ULL);
v___x_1115_ = lean_usize_land(v_x_1110_, v___x_1114_);
v_j_1116_ = lean_usize_to_nat(v___x_1115_);
v___x_1117_ = lean_array_get_borrowed(v___x_1113_, v_es_1112_, v_j_1116_);
lean_dec(v_j_1116_);
switch(lean_obj_tag(v___x_1117_))
{
case 0:
{
lean_object* v_key_1118_; lean_object* v_val_1119_; uint8_t v___x_1120_; 
v_key_1118_ = lean_ctor_get(v___x_1117_, 0);
v_val_1119_ = lean_ctor_get(v___x_1117_, 1);
v___x_1120_ = lean_name_eq(v_x_1111_, v_key_1118_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_box(0);
return v___x_1121_;
}
else
{
lean_object* v___x_1122_; 
lean_inc(v_val_1119_);
v___x_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1122_, 0, v_val_1119_);
return v___x_1122_;
}
}
case 1:
{
lean_object* v_node_1123_; size_t v___x_1124_; size_t v___x_1125_; 
v_node_1123_ = lean_ctor_get(v___x_1117_, 0);
v___x_1124_ = ((size_t)5ULL);
v___x_1125_ = lean_usize_shift_right(v_x_1110_, v___x_1124_);
v_x_1109_ = v_node_1123_;
v_x_1110_ = v___x_1125_;
goto _start;
}
default: 
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_box(0);
return v___x_1127_;
}
}
}
else
{
lean_object* v_ks_1128_; lean_object* v_vs_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v_ks_1128_ = lean_ctor_get(v_x_1109_, 0);
v_vs_1129_ = lean_ctor_get(v_x_1109_, 1);
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1128_, v_vs_1129_, v___x_1130_, v_x_1111_);
return v___x_1131_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_){
_start:
{
size_t v_x_341__boxed_1135_; lean_object* v_res_1136_; 
v_x_341__boxed_1135_ = lean_unbox_usize(v_x_1133_);
lean_dec(v_x_1133_);
v_res_1136_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1132_, v_x_341__boxed_1135_, v_x_1134_);
lean_dec(v_x_1134_);
lean_dec_ref(v_x_1132_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(lean_object* v_x_1137_, lean_object* v_x_1138_){
_start:
{
uint64_t v___y_1140_; 
if (lean_obj_tag(v_x_1138_) == 0)
{
uint64_t v___x_1143_; 
v___x_1143_ = 1723ULL;
v___y_1140_ = v___x_1143_;
goto v___jp_1139_;
}
else
{
uint64_t v_hash_1144_; 
v_hash_1144_ = lean_ctor_get_uint64(v_x_1138_, sizeof(void*)*2);
v___y_1140_ = v_hash_1144_;
goto v___jp_1139_;
}
v___jp_1139_:
{
size_t v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = lean_uint64_to_usize(v___y_1140_);
v___x_1142_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1137_, v___x_1141_, v_x_1138_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg___boxed(lean_object* v_x_1145_, lean_object* v_x_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_x_1145_, v_x_1146_);
lean_dec(v_x_1146_);
lean_dec_ref(v_x_1145_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg(lean_object* v_thmName_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v_env_1153_; lean_object* v___x_1154_; lean_object* v_asyncMode_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1151_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
v___x_1152_ = lean_st_ref_get(v_a_1149_);
v_env_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc_ref(v_env_1153_);
lean_dec(v___x_1152_);
v___x_1154_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1155_ = lean_ctor_get(v___x_1154_, 2);
v___x_1156_ = lean_box(0);
v___x_1157_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1151_, v___x_1154_, v_env_1153_, v_asyncMode_1155_, v___x_1156_);
v___x_1158_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v___x_1157_, v_thmName_1148_);
lean_dec(v___x_1157_);
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___boxed(lean_object* v_thmName_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lean_Meta_isEqnThm_x3f___redArg(v_thmName_1160_, v_a_1161_);
lean_dec(v_a_1161_);
lean_dec(v_thmName_1160_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f(lean_object* v_thmName_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_Meta_isEqnThm_x3f___redArg(v_thmName_1164_, v_a_1166_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___boxed(lean_object* v_thmName_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lean_Meta_isEqnThm_x3f(v_thmName_1169_, v_a_1170_, v_a_1171_);
lean_dec(v_a_1171_);
lean_dec_ref(v_a_1170_);
lean_dec(v_thmName_1169_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(lean_object* v_00_u03b2_1174_, lean_object* v_x_1175_, lean_object* v_x_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_x_1175_, v_x_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___boxed(lean_object* v_00_u03b2_1178_, lean_object* v_x_1179_, lean_object* v_x_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(v_00_u03b2_1178_, v_x_1179_, v_x_1180_);
lean_dec(v_x_1180_);
lean_dec_ref(v_x_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1182_, lean_object* v_x_1183_, size_t v_x_1184_, lean_object* v_x_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1183_, v_x_1184_, v_x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1187_, lean_object* v_x_1188_, lean_object* v_x_1189_, lean_object* v_x_1190_){
_start:
{
size_t v_x_434__boxed_1191_; lean_object* v_res_1192_; 
v_x_434__boxed_1191_ = lean_unbox_usize(v_x_1189_);
lean_dec(v_x_1189_);
v_res_1192_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(v_00_u03b2_1187_, v_x_1188_, v_x_434__boxed_1191_, v_x_1190_);
lean_dec(v_x_1190_);
lean_dec_ref(v_x_1188_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1193_, lean_object* v_keys_1194_, lean_object* v_vals_1195_, lean_object* v_heq_1196_, lean_object* v_i_1197_, lean_object* v_k_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1194_, v_vals_1195_, v_i_1197_, v_k_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1200_, lean_object* v_keys_1201_, lean_object* v_vals_1202_, lean_object* v_heq_1203_, lean_object* v_i_1204_, lean_object* v_k_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1200_, v_keys_1201_, v_vals_1202_, v_heq_1203_, v_i_1204_, v_k_1205_);
lean_dec(v_k_1205_);
lean_dec_ref(v_vals_1202_);
lean_dec_ref(v_keys_1201_);
return v_res_1206_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1207_, lean_object* v_i_1208_, lean_object* v_k_1209_){
_start:
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = lean_array_get_size(v_keys_1207_);
v___x_1211_ = lean_nat_dec_lt(v_i_1208_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_dec(v_i_1208_);
return v___x_1211_;
}
else
{
lean_object* v_k_x27_1212_; uint8_t v___x_1213_; 
v_k_x27_1212_ = lean_array_fget_borrowed(v_keys_1207_, v_i_1208_);
v___x_1213_ = lean_name_eq(v_k_1209_, v_k_x27_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = lean_unsigned_to_nat(1u);
v___x_1215_ = lean_nat_add(v_i_1208_, v___x_1214_);
lean_dec(v_i_1208_);
v_i_1208_ = v___x_1215_;
goto _start;
}
else
{
lean_dec(v_i_1208_);
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1217_, lean_object* v_i_1218_, lean_object* v_k_1219_){
_start:
{
uint8_t v_res_1220_; lean_object* v_r_1221_; 
v_res_1220_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_keys_1217_, v_i_1218_, v_k_1219_);
lean_dec(v_k_1219_);
lean_dec_ref(v_keys_1217_);
v_r_1221_ = lean_box(v_res_1220_);
return v_r_1221_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(lean_object* v_x_1222_, size_t v_x_1223_, lean_object* v_x_1224_){
_start:
{
if (lean_obj_tag(v_x_1222_) == 0)
{
lean_object* v_es_1225_; lean_object* v___x_1226_; size_t v___x_1227_; size_t v___x_1228_; lean_object* v_j_1229_; lean_object* v___x_1230_; 
v_es_1225_ = lean_ctor_get(v_x_1222_, 0);
v___x_1226_ = lean_box(2);
v___x_1227_ = ((size_t)31ULL);
v___x_1228_ = lean_usize_land(v_x_1223_, v___x_1227_);
v_j_1229_ = lean_usize_to_nat(v___x_1228_);
v___x_1230_ = lean_array_get_borrowed(v___x_1226_, v_es_1225_, v_j_1229_);
lean_dec(v_j_1229_);
switch(lean_obj_tag(v___x_1230_))
{
case 0:
{
lean_object* v_key_1231_; uint8_t v___x_1232_; 
v_key_1231_ = lean_ctor_get(v___x_1230_, 0);
v___x_1232_ = lean_name_eq(v_x_1224_, v_key_1231_);
return v___x_1232_;
}
case 1:
{
lean_object* v_node_1233_; size_t v___x_1234_; size_t v___x_1235_; 
v_node_1233_ = lean_ctor_get(v___x_1230_, 0);
v___x_1234_ = ((size_t)5ULL);
v___x_1235_ = lean_usize_shift_right(v_x_1223_, v___x_1234_);
v_x_1222_ = v_node_1233_;
v_x_1223_ = v___x_1235_;
goto _start;
}
default: 
{
uint8_t v___x_1237_; 
v___x_1237_ = 0;
return v___x_1237_;
}
}
}
else
{
lean_object* v_ks_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_ks_1238_ = lean_ctor_get(v_x_1222_, 0);
v___x_1239_ = lean_unsigned_to_nat(0u);
v___x_1240_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_ks_1238_, v___x_1239_, v_x_1224_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg___boxed(lean_object* v_x_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_){
_start:
{
size_t v_x_325__boxed_1244_; uint8_t v_res_1245_; lean_object* v_r_1246_; 
v_x_325__boxed_1244_ = lean_unbox_usize(v_x_1242_);
lean_dec(v_x_1242_);
v_res_1245_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1241_, v_x_325__boxed_1244_, v_x_1243_);
lean_dec(v_x_1243_);
lean_dec_ref(v_x_1241_);
v_r_1246_ = lean_box(v_res_1245_);
return v_r_1246_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
uint64_t v___y_1250_; 
if (lean_obj_tag(v_x_1248_) == 0)
{
uint64_t v___x_1253_; 
v___x_1253_ = 1723ULL;
v___y_1250_ = v___x_1253_;
goto v___jp_1249_;
}
else
{
uint64_t v_hash_1254_; 
v_hash_1254_ = lean_ctor_get_uint64(v_x_1248_, sizeof(void*)*2);
v___y_1250_ = v_hash_1254_;
goto v___jp_1249_;
}
v___jp_1249_:
{
size_t v___x_1251_; uint8_t v___x_1252_; 
v___x_1251_ = lean_uint64_to_usize(v___y_1250_);
v___x_1252_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1247_, v___x_1251_, v_x_1248_);
return v___x_1252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg___boxed(lean_object* v_x_1255_, lean_object* v_x_1256_){
_start:
{
uint8_t v_res_1257_; lean_object* v_r_1258_; 
v_res_1257_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v_x_1255_, v_x_1256_);
lean_dec(v_x_1256_);
lean_dec_ref(v_x_1255_);
v_r_1258_ = lean_box(v_res_1257_);
return v_r_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg(lean_object* v_thmName_1259_, lean_object* v_a_1260_){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v_env_1264_; lean_object* v___x_1265_; lean_object* v_asyncMode_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1262_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
v___x_1263_ = lean_st_ref_get(v_a_1260_);
v_env_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc_ref(v_env_1264_);
lean_dec(v___x_1263_);
v___x_1265_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1266_ = lean_ctor_get(v___x_1265_, 2);
v___x_1267_ = lean_box(0);
v___x_1268_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1262_, v___x_1265_, v_env_1264_, v_asyncMode_1266_, v___x_1267_);
v___x_1269_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v___x_1268_, v_thmName_1259_);
lean_dec(v___x_1268_);
v___x_1270_ = lean_box(v___x_1269_);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg___boxed(lean_object* v_thmName_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_Meta_isEqnThm___redArg(v_thmName_1272_, v_a_1273_);
lean_dec(v_a_1273_);
lean_dec(v_thmName_1272_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm(lean_object* v_thmName_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lean_Meta_isEqnThm___redArg(v_thmName_1276_, v_a_1278_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___boxed(lean_object* v_thmName_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lean_Meta_isEqnThm(v_thmName_1281_, v_a_1282_, v_a_1283_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
lean_dec(v_thmName_1281_);
return v_res_1285_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(lean_object* v_00_u03b2_1286_, lean_object* v_x_1287_, lean_object* v_x_1288_){
_start:
{
uint8_t v___x_1289_; 
v___x_1289_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v_x_1287_, v_x_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___boxed(lean_object* v_00_u03b2_1290_, lean_object* v_x_1291_, lean_object* v_x_1292_){
_start:
{
uint8_t v_res_1293_; lean_object* v_r_1294_; 
v_res_1293_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(v_00_u03b2_1290_, v_x_1291_, v_x_1292_);
lean_dec(v_x_1292_);
lean_dec_ref(v_x_1291_);
v_r_1294_ = lean_box(v_res_1293_);
return v_r_1294_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(lean_object* v_00_u03b2_1295_, lean_object* v_x_1296_, size_t v_x_1297_, lean_object* v_x_1298_){
_start:
{
uint8_t v___x_1299_; 
v___x_1299_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1296_, v_x_1297_, v_x_1298_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1300_, lean_object* v_x_1301_, lean_object* v_x_1302_, lean_object* v_x_1303_){
_start:
{
size_t v_x_414__boxed_1304_; uint8_t v_res_1305_; lean_object* v_r_1306_; 
v_x_414__boxed_1304_ = lean_unbox_usize(v_x_1302_);
lean_dec(v_x_1302_);
v_res_1305_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(v_00_u03b2_1300_, v_x_1301_, v_x_414__boxed_1304_, v_x_1303_);
lean_dec(v_x_1303_);
lean_dec_ref(v_x_1301_);
v_r_1306_ = lean_box(v_res_1305_);
return v_r_1306_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1307_, lean_object* v_keys_1308_, lean_object* v_vals_1309_, lean_object* v_heq_1310_, lean_object* v_i_1311_, lean_object* v_k_1312_){
_start:
{
uint8_t v___x_1313_; 
v___x_1313_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_keys_1308_, v_i_1311_, v_k_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1314_, lean_object* v_keys_1315_, lean_object* v_vals_1316_, lean_object* v_heq_1317_, lean_object* v_i_1318_, lean_object* v_k_1319_){
_start:
{
uint8_t v_res_1320_; lean_object* v_r_1321_; 
v_res_1320_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(v_00_u03b2_1314_, v_keys_1315_, v_vals_1316_, v_heq_1317_, v_i_1318_, v_k_1319_);
lean_dec(v_k_1319_);
lean_dec_ref(v_vals_1316_);
lean_dec_ref(v_keys_1315_);
v_r_1321_ = lean_box(v_res_1320_);
return v_r_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_1322_, lean_object* v_x_1323_, lean_object* v_x_1324_, lean_object* v_x_1325_){
_start:
{
lean_object* v_ks_1326_; lean_object* v_vs_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1351_; 
v_ks_1326_ = lean_ctor_get(v_x_1322_, 0);
v_vs_1327_ = lean_ctor_get(v_x_1322_, 1);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_x_1322_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1329_ = v_x_1322_;
v_isShared_1330_ = v_isSharedCheck_1351_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_vs_1327_);
lean_inc(v_ks_1326_);
lean_dec(v_x_1322_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1351_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; uint8_t v___x_1332_; 
v___x_1331_ = lean_array_get_size(v_ks_1326_);
v___x_1332_ = lean_nat_dec_lt(v_x_1323_, v___x_1331_);
if (v___x_1332_ == 0)
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
lean_dec(v_x_1323_);
v___x_1333_ = lean_array_push(v_ks_1326_, v_x_1324_);
v___x_1334_ = lean_array_push(v_vs_1327_, v_x_1325_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 1, v___x_1334_);
lean_ctor_set(v___x_1329_, 0, v___x_1333_);
v___x_1336_ = v___x_1329_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1333_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
else
{
lean_object* v_k_x27_1338_; uint8_t v___x_1339_; 
v_k_x27_1338_ = lean_array_fget_borrowed(v_ks_1326_, v_x_1323_);
v___x_1339_ = lean_name_eq(v_x_1324_, v_k_x27_1338_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1341_; 
if (v_isShared_1330_ == 0)
{
v___x_1341_ = v___x_1329_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_ks_1326_);
lean_ctor_set(v_reuseFailAlloc_1345_, 1, v_vs_1327_);
v___x_1341_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_unsigned_to_nat(1u);
v___x_1343_ = lean_nat_add(v_x_1323_, v___x_1342_);
lean_dec(v_x_1323_);
v_x_1322_ = v___x_1341_;
v_x_1323_ = v___x_1343_;
goto _start;
}
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1346_ = lean_array_fset(v_ks_1326_, v_x_1323_, v_x_1324_);
v___x_1347_ = lean_array_fset(v_vs_1327_, v_x_1323_, v_x_1325_);
lean_dec(v_x_1323_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 1, v___x_1347_);
lean_ctor_set(v___x_1329_, 0, v___x_1346_);
v___x_1349_ = v___x_1329_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1352_, lean_object* v_k_1353_, lean_object* v_v_1354_){
_start:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1355_ = lean_unsigned_to_nat(0u);
v___x_1356_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(v_n_1352_, v___x_1355_, v_k_1353_, v_v_1354_);
return v___x_1356_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(lean_object* v_x_1358_, size_t v_x_1359_, size_t v_x_1360_, lean_object* v_x_1361_, lean_object* v_x_1362_){
_start:
{
if (lean_obj_tag(v_x_1358_) == 0)
{
lean_object* v_es_1363_; size_t v___x_1364_; size_t v___x_1365_; lean_object* v_j_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; 
v_es_1363_ = lean_ctor_get(v_x_1358_, 0);
v___x_1364_ = ((size_t)31ULL);
v___x_1365_ = lean_usize_land(v_x_1359_, v___x_1364_);
v_j_1366_ = lean_usize_to_nat(v___x_1365_);
v___x_1367_ = lean_array_get_size(v_es_1363_);
v___x_1368_ = lean_nat_dec_lt(v_j_1366_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_dec(v_j_1366_);
lean_dec(v_x_1362_);
lean_dec(v_x_1361_);
return v_x_1358_;
}
else
{
lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1407_; 
lean_inc_ref(v_es_1363_);
v_isSharedCheck_1407_ = !lean_is_exclusive(v_x_1358_);
if (v_isSharedCheck_1407_ == 0)
{
lean_object* v_unused_1408_; 
v_unused_1408_ = lean_ctor_get(v_x_1358_, 0);
lean_dec(v_unused_1408_);
v___x_1370_ = v_x_1358_;
v_isShared_1371_ = v_isSharedCheck_1407_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_x_1358_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1407_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_v_1372_; lean_object* v___x_1373_; lean_object* v_xs_x27_1374_; lean_object* v___y_1376_; 
v_v_1372_ = lean_array_fget(v_es_1363_, v_j_1366_);
v___x_1373_ = lean_box(0);
v_xs_x27_1374_ = lean_array_fset(v_es_1363_, v_j_1366_, v___x_1373_);
switch(lean_obj_tag(v_v_1372_))
{
case 0:
{
lean_object* v_key_1381_; lean_object* v_val_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1392_; 
v_key_1381_ = lean_ctor_get(v_v_1372_, 0);
v_val_1382_ = lean_ctor_get(v_v_1372_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_v_1372_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1384_ = v_v_1372_;
v_isShared_1385_ = v_isSharedCheck_1392_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_val_1382_);
lean_inc(v_key_1381_);
lean_dec(v_v_1372_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1392_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
uint8_t v___x_1386_; 
v___x_1386_ = lean_name_eq(v_x_1361_, v_key_1381_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_del_object(v___x_1384_);
v___x_1387_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1381_, v_val_1382_, v_x_1361_, v_x_1362_);
v___x_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
v___y_1376_ = v___x_1388_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1390_; 
lean_dec(v_val_1382_);
lean_dec(v_key_1381_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v_x_1362_);
lean_ctor_set(v___x_1384_, 0, v_x_1361_);
v___x_1390_ = v___x_1384_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_x_1361_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v_x_1362_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
v___y_1376_ = v___x_1390_;
goto v___jp_1375_;
}
}
}
}
case 1:
{
lean_object* v_node_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1405_; 
v_node_1393_ = lean_ctor_get(v_v_1372_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_v_1372_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1395_ = v_v_1372_;
v_isShared_1396_ = v_isSharedCheck_1405_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_node_1393_);
lean_dec(v_v_1372_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1405_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
size_t v___x_1397_; size_t v___x_1398_; size_t v___x_1399_; size_t v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1403_; 
v___x_1397_ = ((size_t)5ULL);
v___x_1398_ = lean_usize_shift_right(v_x_1359_, v___x_1397_);
v___x_1399_ = ((size_t)1ULL);
v___x_1400_ = lean_usize_add(v_x_1360_, v___x_1399_);
v___x_1401_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_node_1393_, v___x_1398_, v___x_1400_, v_x_1361_, v_x_1362_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1401_);
v___x_1403_ = v___x_1395_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
v___y_1376_ = v___x_1403_;
goto v___jp_1375_;
}
}
}
default: 
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_x_1361_);
lean_ctor_set(v___x_1406_, 1, v_x_1362_);
v___y_1376_ = v___x_1406_;
goto v___jp_1375_;
}
}
v___jp_1375_:
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1377_ = lean_array_fset(v_xs_x27_1374_, v_j_1366_, v___y_1376_);
lean_dec(v_j_1366_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v___x_1377_);
v___x_1379_ = v___x_1370_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1377_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
}
else
{
lean_object* v_ks_1409_; lean_object* v_vs_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1428_; 
v_ks_1409_ = lean_ctor_get(v_x_1358_, 0);
v_vs_1410_ = lean_ctor_get(v_x_1358_, 1);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_x_1358_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1412_ = v_x_1358_;
v_isShared_1413_ = v_isSharedCheck_1428_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_vs_1410_);
lean_inc(v_ks_1409_);
lean_dec(v_x_1358_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1428_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_ks_1409_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v_vs_1410_);
v___x_1415_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v_newNode_1416_; size_t v___x_1417_; uint8_t v___x_1418_; 
v_newNode_1416_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(v___x_1415_, v_x_1361_, v_x_1362_);
v___x_1417_ = ((size_t)7ULL);
v___x_1418_ = lean_usize_dec_le(v___x_1417_, v_x_1360_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; lean_object* v___x_1420_; uint8_t v___x_1421_; 
v___x_1419_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1416_);
v___x_1420_ = lean_unsigned_to_nat(4u);
v___x_1421_ = lean_nat_dec_lt(v___x_1419_, v___x_1420_);
lean_dec(v___x_1419_);
if (v___x_1421_ == 0)
{
lean_object* v_ks_1422_; lean_object* v_vs_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_ks_1422_ = lean_ctor_get(v_newNode_1416_, 0);
lean_inc_ref(v_ks_1422_);
v_vs_1423_ = lean_ctor_get(v_newNode_1416_, 1);
lean_inc_ref(v_vs_1423_);
lean_dec_ref(v_newNode_1416_);
v___x_1424_ = lean_unsigned_to_nat(0u);
v___x_1425_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0);
v___x_1426_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_x_1360_, v_ks_1422_, v_vs_1423_, v___x_1424_, v___x_1425_);
lean_dec_ref(v_vs_1423_);
lean_dec_ref(v_ks_1422_);
return v___x_1426_;
}
else
{
return v_newNode_1416_;
}
}
else
{
return v_newNode_1416_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(size_t v_depth_1429_, lean_object* v_keys_1430_, lean_object* v_vals_1431_, lean_object* v_i_1432_, lean_object* v_entries_1433_){
_start:
{
lean_object* v___x_1434_; uint8_t v___x_1435_; 
v___x_1434_ = lean_array_get_size(v_keys_1430_);
v___x_1435_ = lean_nat_dec_lt(v_i_1432_, v___x_1434_);
if (v___x_1435_ == 0)
{
lean_dec(v_i_1432_);
return v_entries_1433_;
}
else
{
lean_object* v_k_1436_; lean_object* v_v_1437_; uint64_t v___y_1439_; 
v_k_1436_ = lean_array_fget_borrowed(v_keys_1430_, v_i_1432_);
v_v_1437_ = lean_array_fget_borrowed(v_vals_1431_, v_i_1432_);
if (lean_obj_tag(v_k_1436_) == 0)
{
uint64_t v___x_1450_; 
v___x_1450_ = 1723ULL;
v___y_1439_ = v___x_1450_;
goto v___jp_1438_;
}
else
{
uint64_t v_hash_1451_; 
v_hash_1451_ = lean_ctor_get_uint64(v_k_1436_, sizeof(void*)*2);
v___y_1439_ = v_hash_1451_;
goto v___jp_1438_;
}
v___jp_1438_:
{
size_t v_h_1440_; size_t v___x_1441_; lean_object* v___x_1442_; size_t v___x_1443_; size_t v___x_1444_; size_t v___x_1445_; size_t v_h_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v_h_1440_ = lean_uint64_to_usize(v___y_1439_);
v___x_1441_ = ((size_t)5ULL);
v___x_1442_ = lean_unsigned_to_nat(1u);
v___x_1443_ = ((size_t)1ULL);
v___x_1444_ = lean_usize_sub(v_depth_1429_, v___x_1443_);
v___x_1445_ = lean_usize_mul(v___x_1441_, v___x_1444_);
v_h_1446_ = lean_usize_shift_right(v_h_1440_, v___x_1445_);
v___x_1447_ = lean_nat_add(v_i_1432_, v___x_1442_);
lean_dec(v_i_1432_);
lean_inc(v_v_1437_);
lean_inc(v_k_1436_);
v___x_1448_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_entries_1433_, v_h_1446_, v_depth_1429_, v_k_1436_, v_v_1437_);
v_i_1432_ = v___x_1447_;
v_entries_1433_ = v___x_1448_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1452_, lean_object* v_keys_1453_, lean_object* v_vals_1454_, lean_object* v_i_1455_, lean_object* v_entries_1456_){
_start:
{
size_t v_depth_boxed_1457_; lean_object* v_res_1458_; 
v_depth_boxed_1457_ = lean_unbox_usize(v_depth_1452_);
lean_dec(v_depth_1452_);
v_res_1458_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1457_, v_keys_1453_, v_vals_1454_, v_i_1455_, v_entries_1456_);
lean_dec_ref(v_vals_1454_);
lean_dec_ref(v_keys_1453_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___boxed(lean_object* v_x_1459_, lean_object* v_x_1460_, lean_object* v_x_1461_, lean_object* v_x_1462_, lean_object* v_x_1463_){
_start:
{
size_t v_x_630__boxed_1464_; size_t v_x_631__boxed_1465_; lean_object* v_res_1466_; 
v_x_630__boxed_1464_ = lean_unbox_usize(v_x_1460_);
lean_dec(v_x_1460_);
v_x_631__boxed_1465_ = lean_unbox_usize(v_x_1461_);
lean_dec(v_x_1461_);
v_res_1466_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1459_, v_x_630__boxed_1464_, v_x_631__boxed_1465_, v_x_1462_, v_x_1463_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(lean_object* v_x_1467_, lean_object* v_x_1468_, lean_object* v_x_1469_){
_start:
{
uint64_t v___y_1471_; 
if (lean_obj_tag(v_x_1468_) == 0)
{
uint64_t v___x_1475_; 
v___x_1475_ = 1723ULL;
v___y_1471_ = v___x_1475_;
goto v___jp_1470_;
}
else
{
uint64_t v_hash_1476_; 
v_hash_1476_ = lean_ctor_get_uint64(v_x_1468_, sizeof(void*)*2);
v___y_1471_ = v_hash_1476_;
goto v___jp_1470_;
}
v___jp_1470_:
{
size_t v___x_1472_; size_t v___x_1473_; lean_object* v___x_1474_; 
v___x_1472_ = lean_uint64_to_usize(v___y_1471_);
v___x_1473_ = ((size_t)1ULL);
v___x_1474_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1467_, v___x_1472_, v___x_1473_, v_x_1468_, v_x_1469_);
return v___x_1474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(lean_object* v_declName_1477_, lean_object* v_as_1478_, size_t v_i_1479_, size_t v_stop_1480_, lean_object* v_b_1481_){
_start:
{
uint8_t v___x_1482_; 
v___x_1482_ = lean_usize_dec_eq(v_i_1479_, v_stop_1480_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; size_t v___x_1485_; size_t v___x_1486_; 
v___x_1483_ = lean_array_uget_borrowed(v_as_1478_, v_i_1479_);
lean_inc(v_declName_1477_);
lean_inc(v___x_1483_);
v___x_1484_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(v_b_1481_, v___x_1483_, v_declName_1477_);
v___x_1485_ = ((size_t)1ULL);
v___x_1486_ = lean_usize_add(v_i_1479_, v___x_1485_);
v_i_1479_ = v___x_1486_;
v_b_1481_ = v___x_1484_;
goto _start;
}
else
{
lean_dec(v_declName_1477_);
return v_b_1481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1___boxed(lean_object* v_declName_1488_, lean_object* v_as_1489_, lean_object* v_i_1490_, lean_object* v_stop_1491_, lean_object* v_b_1492_){
_start:
{
size_t v_i_boxed_1493_; size_t v_stop_boxed_1494_; lean_object* v_res_1495_; 
v_i_boxed_1493_ = lean_unbox_usize(v_i_1490_);
lean_dec(v_i_1490_);
v_stop_boxed_1494_ = lean_unbox_usize(v_stop_1491_);
lean_dec(v_stop_1491_);
v_res_1495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_declName_1488_, v_as_1489_, v_i_boxed_1493_, v_stop_boxed_1494_, v_b_1492_);
lean_dec_ref(v_as_1489_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(lean_object* v_eqThms_1496_, lean_object* v_declName_1497_, lean_object* v_s_1498_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; uint8_t v___x_1501_; 
v___x_1499_ = lean_unsigned_to_nat(0u);
v___x_1500_ = lean_array_get_size(v_eqThms_1496_);
v___x_1501_ = lean_nat_dec_lt(v___x_1499_, v___x_1500_);
if (v___x_1501_ == 0)
{
lean_dec(v_declName_1497_);
return v_s_1498_;
}
else
{
uint8_t v___x_1502_; 
v___x_1502_ = lean_nat_dec_le(v___x_1500_, v___x_1500_);
if (v___x_1502_ == 0)
{
if (v___x_1501_ == 0)
{
lean_dec(v_declName_1497_);
return v_s_1498_;
}
else
{
size_t v___x_1503_; size_t v___x_1504_; lean_object* v___x_1505_; 
v___x_1503_ = ((size_t)0ULL);
v___x_1504_ = lean_usize_of_nat(v___x_1500_);
v___x_1505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_declName_1497_, v_eqThms_1496_, v___x_1503_, v___x_1504_, v_s_1498_);
return v___x_1505_;
}
}
else
{
size_t v___x_1506_; size_t v___x_1507_; lean_object* v___x_1508_; 
v___x_1506_ = ((size_t)0ULL);
v___x_1507_ = lean_usize_of_nat(v___x_1500_);
v___x_1508_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_declName_1497_, v_eqThms_1496_, v___x_1506_, v___x_1507_, v_s_1498_);
return v___x_1508_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed(lean_object* v_eqThms_1509_, lean_object* v_declName_1510_, lean_object* v_s_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(v_eqThms_1509_, v_declName_1510_, v_s_1511_);
lean_dec_ref(v_eqThms_1509_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(lean_object* v_declName_1513_, lean_object* v_eqThms_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v___f_1517_; lean_object* v___x_1518_; lean_object* v_env_1519_; lean_object* v_nextMacroScope_1520_; lean_object* v_ngen_1521_; lean_object* v_auxDeclNGen_1522_; lean_object* v_traceState_1523_; lean_object* v_messages_1524_; lean_object* v_infoState_1525_; lean_object* v_snapshotTasks_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1541_; 
v___f_1517_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1517_, 0, v_eqThms_1514_);
lean_closure_set(v___f_1517_, 1, v_declName_1513_);
v___x_1518_ = lean_st_ref_take(v_a_1515_);
v_env_1519_ = lean_ctor_get(v___x_1518_, 0);
v_nextMacroScope_1520_ = lean_ctor_get(v___x_1518_, 1);
v_ngen_1521_ = lean_ctor_get(v___x_1518_, 2);
v_auxDeclNGen_1522_ = lean_ctor_get(v___x_1518_, 3);
v_traceState_1523_ = lean_ctor_get(v___x_1518_, 4);
v_messages_1524_ = lean_ctor_get(v___x_1518_, 6);
v_infoState_1525_ = lean_ctor_get(v___x_1518_, 7);
v_snapshotTasks_1526_ = lean_ctor_get(v___x_1518_, 8);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1541_ == 0)
{
lean_object* v_unused_1542_; 
v_unused_1542_ = lean_ctor_get(v___x_1518_, 5);
lean_dec(v_unused_1542_);
v___x_1528_ = v___x_1518_;
v_isShared_1529_ = v_isSharedCheck_1541_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_snapshotTasks_1526_);
lean_inc(v_infoState_1525_);
lean_inc(v_messages_1524_);
lean_inc(v_traceState_1523_);
lean_inc(v_auxDeclNGen_1522_);
lean_inc(v_ngen_1521_);
lean_inc(v_nextMacroScope_1520_);
lean_inc(v_env_1519_);
lean_dec(v___x_1518_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1541_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; lean_object* v_asyncMode_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1537_; 
v___x_1530_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1531_ = lean_ctor_get(v___x_1530_, 2);
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_box(0);
v___x_1534_ = l_Lean_EnvExtension_modifyState___redArg(v___x_1530_, v_env_1519_, v___f_1517_, v_asyncMode_1531_, v___x_1533_);
v___x_1535_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 5, v___x_1535_);
lean_ctor_set(v___x_1528_, 0, v___x_1534_);
v___x_1537_ = v___x_1528_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1534_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v_nextMacroScope_1520_);
lean_ctor_set(v_reuseFailAlloc_1540_, 2, v_ngen_1521_);
lean_ctor_set(v_reuseFailAlloc_1540_, 3, v_auxDeclNGen_1522_);
lean_ctor_set(v_reuseFailAlloc_1540_, 4, v_traceState_1523_);
lean_ctor_set(v_reuseFailAlloc_1540_, 5, v___x_1535_);
lean_ctor_set(v_reuseFailAlloc_1540_, 6, v_messages_1524_);
lean_ctor_set(v_reuseFailAlloc_1540_, 7, v_infoState_1525_);
lean_ctor_set(v_reuseFailAlloc_1540_, 8, v_snapshotTasks_1526_);
v___x_1537_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = lean_st_ref_put(v_a_1515_, v___x_1537_);
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1532_);
return v___x_1539_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___boxed(lean_object* v_declName_1543_, lean_object* v_eqThms_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1543_, v_eqThms_1544_, v_a_1545_);
lean_dec(v_a_1545_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(lean_object* v_declName_1548_, lean_object* v_eqThms_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1548_, v_eqThms_1549_, v_a_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___boxed(lean_object* v_declName_1554_, lean_object* v_eqThms_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(v_declName_1554_, v_eqThms_1555_, v_a_1556_, v_a_1557_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0(lean_object* v_00_u03b2_1560_, lean_object* v_x_1561_, lean_object* v_x_1562_, lean_object* v_x_1563_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(v_x_1561_, v_x_1562_, v_x_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(lean_object* v_00_u03b2_1565_, lean_object* v_x_1566_, size_t v_x_1567_, size_t v_x_1568_, lean_object* v_x_1569_, lean_object* v_x_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1566_, v_x_1567_, v_x_1568_, v_x_1569_, v_x_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1572_, lean_object* v_x_1573_, lean_object* v_x_1574_, lean_object* v_x_1575_, lean_object* v_x_1576_, lean_object* v_x_1577_){
_start:
{
size_t v_x_892__boxed_1578_; size_t v_x_893__boxed_1579_; lean_object* v_res_1580_; 
v_x_892__boxed_1578_ = lean_unbox_usize(v_x_1574_);
lean_dec(v_x_1574_);
v_x_893__boxed_1579_ = lean_unbox_usize(v_x_1575_);
lean_dec(v_x_1575_);
v_res_1580_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(v_00_u03b2_1572_, v_x_1573_, v_x_892__boxed_1578_, v_x_893__boxed_1579_, v_x_1576_, v_x_1577_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1581_, lean_object* v_n_1582_, lean_object* v_k_1583_, lean_object* v_v_1584_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(v_n_1582_, v_k_1583_, v_v_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1586_, size_t v_depth_1587_, lean_object* v_keys_1588_, lean_object* v_vals_1589_, lean_object* v_heq_1590_, lean_object* v_i_1591_, lean_object* v_entries_1592_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_depth_1587_, v_keys_1588_, v_vals_1589_, v_i_1591_, v_entries_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1594_, lean_object* v_depth_1595_, lean_object* v_keys_1596_, lean_object* v_vals_1597_, lean_object* v_heq_1598_, lean_object* v_i_1599_, lean_object* v_entries_1600_){
_start:
{
size_t v_depth_boxed_1601_; lean_object* v_res_1602_; 
v_depth_boxed_1601_ = lean_unbox_usize(v_depth_1595_);
lean_dec(v_depth_1595_);
v_res_1602_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(v_00_u03b2_1594_, v_depth_boxed_1601_, v_keys_1596_, v_vals_1597_, v_heq_1598_, v_i_1599_, v_entries_1600_);
lean_dec_ref(v_vals_1597_);
lean_dec_ref(v_keys_1596_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1603_, lean_object* v_x_1604_, lean_object* v_x_1605_, lean_object* v_x_1606_, lean_object* v_x_1607_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1604_, v_x_1605_, v_x_1606_, v_x_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(lean_object* v_declName_1609_, lean_object* v_env_1610_, lean_object* v_idx_1611_, lean_object* v_eqs_1612_){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v_nextEq_1619_; uint8_t v___x_1620_; 
v___x_1614_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_1615_ = lean_unsigned_to_nat(1u);
v___x_1616_ = lean_nat_add(v_idx_1611_, v___x_1615_);
lean_dec(v_idx_1611_);
lean_inc(v___x_1616_);
v___x_1617_ = l_Nat_reprFast(v___x_1616_);
v___x_1618_ = lean_string_append(v___x_1614_, v___x_1617_);
lean_dec_ref(v___x_1617_);
lean_inc(v_declName_1609_);
lean_inc_ref(v_env_1610_);
v_nextEq_1619_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1610_, v_declName_1609_, v___x_1618_);
v___x_1620_ = l_Lean_Environment_containsOnBranch(v_env_1610_, v_nextEq_1619_);
if (v___x_1620_ == 0)
{
lean_object* v___x_1621_; 
lean_dec(v_nextEq_1619_);
lean_dec(v___x_1616_);
lean_dec_ref(v_env_1610_);
lean_dec(v_declName_1609_);
v___x_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1621_, 0, v_eqs_1612_);
return v___x_1621_;
}
else
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_array_push(v_eqs_1612_, v_nextEq_1619_);
v_idx_1611_ = v___x_1616_;
v_eqs_1612_ = v___x_1622_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg___boxed(lean_object* v_declName_1624_, lean_object* v_env_1625_, lean_object* v_idx_1626_, lean_object* v_eqs_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1624_, v_env_1625_, v_idx_1626_, v_eqs_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(lean_object* v_declName_1630_, lean_object* v_env_1631_, lean_object* v_idx_1632_, lean_object* v_eqs_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1630_, v_env_1631_, v_idx_1632_, v_eqs_1633_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___boxed(lean_object* v_declName_1640_, lean_object* v_env_1641_, lean_object* v_idx_1642_, lean_object* v_eqs_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(v_declName_1640_, v_env_1641_, v_idx_1642_, v_eqs_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_);
lean_dec(v_a_1647_);
lean_dec_ref(v_a_1646_);
lean_dec(v_a_1645_);
lean_dec_ref(v_a_1644_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(lean_object* v_declName_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v___x_1653_; lean_object* v_env_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; uint8_t v___x_1658_; 
v___x_1653_ = lean_st_ref_get(v_a_1651_);
v_env_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc_ref_n(v_env_1654_, 3);
lean_dec(v___x_1653_);
v___x_1655_ = ((lean_object*)(l_Lean_Meta_eqn1ThmSuffix___closed__0));
lean_inc(v_declName_1650_);
v___x_1656_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1654_, v_declName_1650_, v___x_1655_);
v___x_1657_ = 1;
lean_inc(v___x_1656_);
v___x_1658_ = l_Lean_Environment_contains(v_env_1654_, v___x_1656_, v___x_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
lean_dec(v___x_1656_);
lean_dec_ref(v_env_1654_);
lean_dec(v_declName_1650_);
v___x_1659_ = lean_box(0);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1661_ = lean_unsigned_to_nat(1u);
v___x_1662_ = lean_mk_empty_array_with_capacity(v___x_1661_);
v___x_1663_ = lean_array_push(v___x_1662_, v___x_1656_);
lean_inc(v_declName_1650_);
v___x_1664_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1650_, v_env_1654_, v___x_1661_, v___x_1663_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v___x_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1674_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
lean_inc_n(v_a_1665_, 2);
lean_dec_ref_known(v___x_1664_, 1);
v___x_1666_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1650_, v_a_1665_, v_a_1651_);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1674_ == 0)
{
lean_object* v_unused_1675_; 
v_unused_1675_ = lean_ctor_get(v___x_1666_, 0);
lean_dec(v_unused_1675_);
v___x_1668_ = v___x_1666_;
v_isShared_1669_ = v_isSharedCheck_1674_;
goto v_resetjp_1667_;
}
else
{
lean_dec(v___x_1666_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1674_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1670_, 0, v_a_1665_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1670_);
v___x_1672_ = v___x_1668_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
lean_dec(v_declName_1650_);
v_a_1676_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1664_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1664_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg___boxed(lean_object* v_declName_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1684_, v_a_1685_);
lean_dec(v_a_1685_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f(lean_object* v_declName_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1688_, v_a_1692_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___boxed(lean_object* v_declName_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f(v_declName_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_);
lean_dec(v_a_1699_);
lean_dec_ref(v_a_1698_);
lean_dec(v_a_1697_);
lean_dec_ref(v_a_1696_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(lean_object* v_lctx_1702_, lean_object* v_localInsts_1703_, lean_object* v_x_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
lean_object* v___x_1710_; 
v___x_1710_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1702_, v_localInsts_1703_, v_x_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
else
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1726_; 
v_a_1719_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1721_ = v___x_1710_;
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___x_1710_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1724_; 
if (v_isShared_1722_ == 0)
{
v___x_1724_ = v___x_1721_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1719_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg___boxed(lean_object* v_lctx_1727_, lean_object* v_localInsts_1728_, lean_object* v_x_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v_lctx_1727_, v_localInsts_1728_, v_x_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(lean_object* v_00_u03b1_1736_, lean_object* v_lctx_1737_, lean_object* v_localInsts_1738_, lean_object* v_x_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v_lctx_1737_, v_localInsts_1738_, v_x_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___boxed(lean_object* v_00_u03b1_1746_, lean_object* v_lctx_1747_, lean_object* v_localInsts_1748_, lean_object* v_x_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(v_00_u03b1_1746_, v_lctx_1747_, v_localInsts_1748_, v_x_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
lean_dec(v___y_1751_);
lean_dec_ref(v___y_1750_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(lean_object* v_declName_1759_, lean_object* v_as_x27_1760_, lean_object* v_b_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
if (lean_obj_tag(v_as_x27_1760_) == 0)
{
lean_object* v___x_1767_; 
lean_dec(v_declName_1759_);
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_b_1761_);
return v___x_1767_;
}
else
{
lean_object* v_head_1768_; lean_object* v_tail_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
lean_dec_ref(v_b_1761_);
v_head_1768_ = lean_ctor_get(v_as_x27_1760_, 0);
v_tail_1769_ = lean_ctor_get(v_as_x27_1760_, 1);
v___x_1770_ = lean_box(0);
v___x_1771_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0));
lean_inc(v_head_1768_);
lean_inc(v___y_1765_);
lean_inc_ref(v___y_1764_);
lean_inc(v___y_1763_);
lean_inc_ref(v___y_1762_);
lean_inc(v_declName_1759_);
v___x_1772_ = lean_apply_6(v_head_1768_, v_declName_1759_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, lean_box(0));
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
if (lean_obj_tag(v_a_1773_) == 1)
{
lean_object* v_val_1774_; lean_object* v___x_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1784_; 
v_val_1774_ = lean_ctor_get(v_a_1773_, 0);
lean_inc(v_val_1774_);
v___x_1775_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1759_, v_val_1774_, v___y_1765_);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1784_ == 0)
{
lean_object* v_unused_1785_; 
v_unused_1785_ = lean_ctor_get(v___x_1775_, 0);
lean_dec(v_unused_1785_);
v___x_1777_ = v___x_1775_;
v_isShared_1778_ = v_isSharedCheck_1784_;
goto v_resetjp_1776_;
}
else
{
lean_dec(v___x_1775_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1784_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1782_; 
v___x_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1779_, 0, v_a_1773_);
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
lean_ctor_set(v___x_1780_, 1, v___x_1770_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v___x_1780_);
v___x_1782_ = v___x_1777_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
else
{
lean_dec(v_a_1773_);
v_as_x27_1760_ = v_tail_1769_;
v_b_1761_ = v___x_1771_;
goto _start;
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
lean_dec(v_declName_1759_);
v_a_1787_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1772_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1772_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___boxed(lean_object* v_declName_1795_, lean_object* v_as_x27_1796_, lean_object* v_b_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1795_, v_as_x27_1796_, v_b_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v_as_x27_1796_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(lean_object* v_declName_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v___x_1810_; 
lean_inc(v_declName_1804_);
v___x_1810_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1848_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1848_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1848_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
uint8_t v___x_1815_; 
v___x_1815_ = lean_unbox(v_a_1811_);
lean_dec(v_a_1811_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
lean_dec(v_declName_1804_);
v___x_1816_ = lean_box(0);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1816_);
v___x_1818_ = v___x_1813_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
else
{
lean_object* v___x_1820_; 
lean_del_object(v___x_1813_);
lean_inc(v_declName_1804_);
v___x_1820_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1804_, v___y_1808_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
if (lean_obj_tag(v_a_1821_) == 1)
{
lean_dec_ref_known(v_a_1821_, 1);
lean_dec(v_declName_1804_);
return v___x_1820_;
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_dec_ref_known(v___x_1820_, 1);
lean_dec(v_a_1821_);
v___x_1822_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
v___x_1823_ = lean_st_ref_get(v___x_1822_);
v___x_1824_ = lean_box(0);
v___x_1825_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0));
v___x_1826_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1804_, v___x_1823_, v___x_1825_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
lean_dec(v___x_1823_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1839_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1829_ = v___x_1826_;
v_isShared_1830_ = v_isSharedCheck_1839_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1826_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1839_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v_fst_1831_; 
v_fst_1831_ = lean_ctor_get(v_a_1827_, 0);
lean_inc(v_fst_1831_);
lean_dec(v_a_1827_);
if (lean_obj_tag(v_fst_1831_) == 0)
{
lean_object* v___x_1833_; 
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v___x_1824_);
v___x_1833_ = v___x_1829_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1824_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
else
{
lean_object* v_val_1835_; lean_object* v___x_1837_; 
v_val_1835_ = lean_ctor_get(v_fst_1831_, 0);
lean_inc(v_val_1835_);
lean_dec_ref_known(v_fst_1831_, 1);
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v_val_1835_);
v___x_1837_ = v___x_1829_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_val_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1840_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1826_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1826_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
}
else
{
lean_dec(v_declName_1804_);
return v___x_1820_;
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
lean_dec(v_declName_1804_);
v_a_1849_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1810_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1810_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed(lean_object* v_declName_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(v_declName_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1863_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1864_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
return v___x_1865_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1866_ = lean_box(1);
v___x_1867_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_1868_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_1869_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
lean_ctor_set(v___x_1869_, 1, v___x_1867_);
lean_ctor_set(v___x_1869_, 2, v___x_1866_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(lean_object* v_declName_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v___f_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___f_1878_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1878_, 0, v_declName_1872_);
v___x_1879_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_1880_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
v___x_1881_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_1879_, v___x_1880_, v___f_1878_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed(lean_object* v_declName_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(v_declName_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_);
lean_dec(v_a_1886_);
lean_dec_ref(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(lean_object* v_declName_1889_, lean_object* v_as_1890_, lean_object* v_as_x27_1891_, lean_object* v_b_1892_, lean_object* v_a_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1889_, v_as_x27_1891_, v_b_1892_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___boxed(lean_object* v_declName_1900_, lean_object* v_as_1901_, lean_object* v_as_x27_1902_, lean_object* v_b_1903_, lean_object* v_a_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(v_declName_1900_, v_as_1901_, v_as_x27_1902_, v_b_1903_, v_a_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v_as_x27_1902_);
lean_dec(v_as_1901_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object* v_declName_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1917_ = lean_unsigned_to_nat(32u);
v___x_1918_ = lean_mk_empty_array_with_capacity(v___x_1917_);
lean_dec_ref(v___x_1918_);
v___x_1919_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_1920_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
lean_inc(v_declName_1911_);
v___x_1921_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed), 6, 1);
lean_closure_set(v___x_1921_, 0, v_declName_1911_);
v___x_1922_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_1922_, 0, lean_box(0));
lean_closure_set(v___x_1922_, 1, v_declName_1911_);
lean_closure_set(v___x_1922_, 2, v___x_1921_);
v___x_1923_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_1919_, v___x_1920_, v___x_1922_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f___boxed(lean_object* v_declName_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lean_Meta_getEqnsFor_x3f(v_declName_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_);
lean_dec(v_a_1928_);
lean_dec_ref(v_a_1927_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(lean_object* v_msgData_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v___x_1937_; lean_object* v_env_1938_; lean_object* v___x_1939_; lean_object* v_toCold_1940_; lean_object* v_mctx_1941_; lean_object* v_lctx_1942_; lean_object* v_options_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1937_ = lean_st_ref_get(v___y_1935_);
v_env_1938_ = lean_ctor_get(v___x_1937_, 0);
lean_inc_ref(v_env_1938_);
lean_dec(v___x_1937_);
v___x_1939_ = lean_st_ref_get(v___y_1933_);
v_toCold_1940_ = lean_ctor_get(v___y_1934_, 0);
v_mctx_1941_ = lean_ctor_get(v___x_1939_, 0);
lean_inc_ref(v_mctx_1941_);
lean_dec(v___x_1939_);
v_lctx_1942_ = lean_ctor_get(v___y_1932_, 2);
v_options_1943_ = lean_ctor_get(v_toCold_1940_, 2);
lean_inc_ref(v_options_1943_);
lean_inc_ref(v_lctx_1942_);
v___x_1944_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1944_, 0, v_env_1938_);
lean_ctor_set(v___x_1944_, 1, v_mctx_1941_);
lean_ctor_set(v___x_1944_, 2, v_lctx_1942_);
lean_ctor_set(v___x_1944_, 3, v_options_1943_);
v___x_1945_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1944_);
lean_ctor_set(v___x_1945_, 1, v_msgData_1931_);
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1___boxed(lean_object* v_msgData_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(v_msgData_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
return v_res_1953_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1954_; double v___x_1955_; 
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = lean_float_of_nat(v___x_1954_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(lean_object* v_cls_1959_, lean_object* v_msg_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_ref_1966_; lean_object* v___x_1967_; lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_2012_; 
v_ref_1966_ = lean_ctor_get(v___y_1963_, 2);
v___x_1967_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(v_msg_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_1970_ = v___x_1967_;
v_isShared_1971_ = v_isSharedCheck_2012_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v___x_1967_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_2012_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1972_; lean_object* v_traceState_1973_; lean_object* v_env_1974_; lean_object* v_nextMacroScope_1975_; lean_object* v_ngen_1976_; lean_object* v_auxDeclNGen_1977_; lean_object* v_cache_1978_; lean_object* v_messages_1979_; lean_object* v_infoState_1980_; lean_object* v_snapshotTasks_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2011_; 
v___x_1972_ = lean_st_ref_take(v___y_1964_);
v_traceState_1973_ = lean_ctor_get(v___x_1972_, 4);
v_env_1974_ = lean_ctor_get(v___x_1972_, 0);
v_nextMacroScope_1975_ = lean_ctor_get(v___x_1972_, 1);
v_ngen_1976_ = lean_ctor_get(v___x_1972_, 2);
v_auxDeclNGen_1977_ = lean_ctor_get(v___x_1972_, 3);
v_cache_1978_ = lean_ctor_get(v___x_1972_, 5);
v_messages_1979_ = lean_ctor_get(v___x_1972_, 6);
v_infoState_1980_ = lean_ctor_get(v___x_1972_, 7);
v_snapshotTasks_1981_ = lean_ctor_get(v___x_1972_, 8);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1983_ = v___x_1972_;
v_isShared_1984_ = v_isSharedCheck_2011_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_snapshotTasks_1981_);
lean_inc(v_infoState_1980_);
lean_inc(v_messages_1979_);
lean_inc(v_cache_1978_);
lean_inc(v_traceState_1973_);
lean_inc(v_auxDeclNGen_1977_);
lean_inc(v_ngen_1976_);
lean_inc(v_nextMacroScope_1975_);
lean_inc(v_env_1974_);
lean_dec(v___x_1972_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2011_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
uint64_t v_tid_1985_; lean_object* v_traces_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2010_; 
v_tid_1985_ = lean_ctor_get_uint64(v_traceState_1973_, sizeof(void*)*1);
v_traces_1986_ = lean_ctor_get(v_traceState_1973_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_traceState_1973_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_1988_ = v_traceState_1973_;
v_isShared_1989_ = v_isSharedCheck_2010_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_traces_1986_);
lean_dec(v_traceState_1973_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2010_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; double v___x_1992_; uint8_t v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2001_; 
v___x_1990_ = lean_box(0);
v___x_1991_ = lean_box(0);
v___x_1992_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0);
v___x_1993_ = 0;
v___x_1994_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1));
v___x_1995_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1995_, 0, v_cls_1959_);
lean_ctor_set(v___x_1995_, 1, v___x_1991_);
lean_ctor_set(v___x_1995_, 2, v___x_1994_);
lean_ctor_set_float(v___x_1995_, sizeof(void*)*3, v___x_1992_);
lean_ctor_set_float(v___x_1995_, sizeof(void*)*3 + 8, v___x_1992_);
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*3 + 16, v___x_1993_);
v___x_1996_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2));
v___x_1997_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1995_);
lean_ctor_set(v___x_1997_, 1, v_a_1968_);
lean_ctor_set(v___x_1997_, 2, v___x_1996_);
lean_inc(v_ref_1966_);
v___x_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1998_, 0, v_ref_1966_);
lean_ctor_set(v___x_1998_, 1, v___x_1997_);
v___x_1999_ = l_Lean_PersistentArray_push___redArg(v_traces_1986_, v___x_1998_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_1999_);
v___x_2001_ = v___x_1988_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_1999_);
lean_ctor_set_uint64(v_reuseFailAlloc_2009_, sizeof(void*)*1, v_tid_1985_);
v___x_2001_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2003_; 
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 4, v___x_2001_);
v___x_2003_ = v___x_1983_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_env_1974_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_nextMacroScope_1975_);
lean_ctor_set(v_reuseFailAlloc_2008_, 2, v_ngen_1976_);
lean_ctor_set(v_reuseFailAlloc_2008_, 3, v_auxDeclNGen_1977_);
lean_ctor_set(v_reuseFailAlloc_2008_, 4, v___x_2001_);
lean_ctor_set(v_reuseFailAlloc_2008_, 5, v_cache_1978_);
lean_ctor_set(v_reuseFailAlloc_2008_, 6, v_messages_1979_);
lean_ctor_set(v_reuseFailAlloc_2008_, 7, v_infoState_1980_);
lean_ctor_set(v_reuseFailAlloc_2008_, 8, v_snapshotTasks_1981_);
v___x_2003_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2004_; lean_object* v___x_2006_; 
v___x_2004_ = lean_st_ref_put(v___y_1964_, v___x_2003_);
if (v_isShared_1971_ == 0)
{
lean_ctor_set(v___x_1970_, 0, v___x_1990_);
v___x_2006_ = v___x_1970_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_1990_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___boxed(lean_object* v_cls_2013_, lean_object* v_msg_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(v_cls_2013_, v_msg_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_);
lean_dec(v___y_2018_);
lean_dec_ref(v___y_2017_);
lean_dec(v___y_2016_);
lean_dec_ref(v___y_2015_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(lean_object* v___x_2021_, lean_object* v_as_2022_, size_t v_sz_2023_, size_t v_i_2024_, lean_object* v_b_2025_){
_start:
{
lean_object* v_a_2028_; uint8_t v___x_2032_; 
v___x_2032_ = lean_usize_dec_lt(v_i_2024_, v_sz_2023_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; 
v___x_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2033_, 0, v_b_2025_);
return v___x_2033_;
}
else
{
lean_object* v_a_2034_; lean_object* v_defValue_2035_; uint8_t v___x_2036_; uint8_t v___y_2050_; uint8_t v___x_2051_; 
v_a_2034_ = lean_array_uget(v_as_2022_, v_i_2024_);
v_defValue_2035_ = lean_ctor_get(v_a_2034_, 1);
v___x_2036_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v___x_2021_, v_a_2034_);
v___x_2051_ = lean_unbox(v_defValue_2035_);
if (v___x_2051_ == 0)
{
if (v___x_2036_ == 0)
{
v___y_2050_ = v___x_2032_;
goto v___jp_2049_;
}
else
{
goto v___jp_2037_;
}
}
else
{
v___y_2050_ = v___x_2036_;
goto v___jp_2049_;
}
v___jp_2037_:
{
lean_object* v_name_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2047_; 
v_name_2038_ = lean_ctor_get(v_a_2034_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_a_2034_);
if (v_isSharedCheck_2047_ == 0)
{
lean_object* v_unused_2048_; 
v_unused_2048_ = lean_ctor_get(v_a_2034_, 1);
lean_dec(v_unused_2048_);
v___x_2040_ = v_a_2034_;
v_isShared_2041_ = v_isSharedCheck_2047_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_name_2038_);
lean_dec(v_a_2034_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2047_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2042_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2042_, 0, v___x_2036_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 1, v___x_2042_);
v___x_2044_ = v___x_2040_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_name_2038_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; 
v___x_2045_ = lean_array_push(v_b_2025_, v___x_2044_);
v_a_2028_ = v___x_2045_;
goto v___jp_2027_;
}
}
}
v___jp_2049_:
{
if (v___y_2050_ == 0)
{
goto v___jp_2037_;
}
else
{
lean_dec(v_a_2034_);
v_a_2028_ = v_b_2025_;
goto v___jp_2027_;
}
}
}
v___jp_2027_:
{
size_t v___x_2029_; size_t v___x_2030_; 
v___x_2029_ = ((size_t)1ULL);
v___x_2030_ = lean_usize_add(v_i_2024_, v___x_2029_);
v_i_2024_ = v___x_2030_;
v_b_2025_ = v_a_2028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg___boxed(lean_object* v___x_2052_, lean_object* v_as_2053_, lean_object* v_sz_2054_, lean_object* v_i_2055_, lean_object* v_b_2056_, lean_object* v___y_2057_){
_start:
{
size_t v_sz_boxed_2058_; size_t v_i_boxed_2059_; lean_object* v_res_2060_; 
v_sz_boxed_2058_ = lean_unbox_usize(v_sz_2054_);
lean_dec(v_sz_2054_);
v_i_boxed_2059_ = lean_unbox_usize(v_i_2055_);
lean_dec(v_i_2055_);
v_res_2060_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(v___x_2052_, v_as_2053_, v_sz_boxed_2058_, v_i_boxed_2059_, v_b_2056_);
lean_dec_ref(v_as_2053_);
lean_dec_ref(v___x_2052_);
return v_res_2060_;
}
}
static size_t _init_l_Lean_Meta_saveEqnAffectingOptions___closed__1(void){
_start:
{
lean_object* v___x_2063_; size_t v_sz_2064_; 
v___x_2063_ = l_Lean_Meta_eqnAffectingOptions;
v_sz_2064_ = lean_array_size(v___x_2063_);
return v_sz_2064_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2(void){
_start:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2065_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_2066_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
lean_ctor_set(v___x_2066_, 2, v___x_2065_);
lean_ctor_set(v___x_2066_, 3, v___x_2065_);
lean_ctor_set(v___x_2066_, 4, v___x_2065_);
lean_ctor_set(v___x_2066_, 5, v___x_2065_);
return v___x_2066_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__6(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2073_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__5));
v___x_2074_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_2075_ = l_Lean_Name_append(v___x_2074_, v___x_2073_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__8(void){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__7));
v___x_2078_ = l_Lean_stringToMessageData(v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object* v_declName_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v_toCold_2085_; lean_object* v_options_2086_; lean_object* v_inheritedTraceOptions_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; size_t v_sz_2091_; size_t v___x_2092_; lean_object* v___x_2093_; 
v_toCold_2085_ = lean_ctor_get(v_a_2082_, 0);
v_options_2086_ = lean_ctor_get(v_toCold_2085_, 2);
v_inheritedTraceOptions_2087_ = lean_ctor_get(v_toCold_2085_, 11);
v___x_2088_ = lean_unsigned_to_nat(0u);
v___x_2089_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__0));
v___x_2090_ = l_Lean_Meta_eqnAffectingOptions;
v_sz_2091_ = lean_usize_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__1, &l_Lean_Meta_saveEqnAffectingOptions___closed__1_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__1);
v___x_2092_ = ((size_t)0ULL);
v___x_2093_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(v_options_2086_, v___x_2090_, v_sz_2091_, v___x_2092_, v___x_2089_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2153_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2096_ = v___x_2093_;
v_isShared_2097_ = v_isSharedCheck_2153_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2093_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2153_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___y_2099_; lean_object* v___y_2100_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v___x_2141_ = lean_array_get_size(v_a_2094_);
v___x_2142_ = lean_nat_dec_eq(v___x_2141_, v___x_2088_);
if (v___x_2142_ == 0)
{
uint8_t v_hasTrace_2143_; 
v_hasTrace_2143_ = lean_ctor_get_uint8(v_options_2086_, sizeof(void*)*1);
if (v_hasTrace_2143_ == 0)
{
v___y_2099_ = v_a_2081_;
v___y_2100_ = v_a_2083_;
goto v___jp_2098_;
}
else
{
lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v___x_2144_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__5));
v___x_2145_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__6, &l_Lean_Meta_saveEqnAffectingOptions___closed__6_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__6);
v___x_2146_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2087_, v_options_2086_, v___x_2145_);
if (v___x_2146_ == 0)
{
v___y_2099_ = v_a_2081_;
v___y_2100_ = v_a_2083_;
goto v___jp_2098_;
}
else
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2147_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__8, &l_Lean_Meta_saveEqnAffectingOptions___closed__8_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__8);
lean_inc(v_declName_2079_);
v___x_2148_ = l_Lean_MessageData_ofName(v_declName_2079_);
v___x_2149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2147_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(v___x_2144_, v___x_2149_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_dec_ref_known(v___x_2150_, 1);
v___y_2099_ = v_a_2081_;
v___y_2100_ = v_a_2083_;
goto v___jp_2098_;
}
else
{
lean_del_object(v___x_2096_);
lean_dec(v_a_2094_);
lean_dec(v_declName_2079_);
return v___x_2150_;
}
}
}
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2152_; 
lean_del_object(v___x_2096_);
lean_dec(v_a_2094_);
lean_dec(v_declName_2079_);
v___x_2151_ = lean_box(0);
v___x_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2151_);
return v___x_2152_;
}
v___jp_2098_:
{
lean_object* v___x_2101_; lean_object* v_env_2102_; lean_object* v_nextMacroScope_2103_; lean_object* v_ngen_2104_; lean_object* v_auxDeclNGen_2105_; lean_object* v_traceState_2106_; lean_object* v_messages_2107_; lean_object* v_infoState_2108_; lean_object* v_snapshotTasks_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2139_; 
v___x_2101_ = lean_st_ref_take(v___y_2100_);
v_env_2102_ = lean_ctor_get(v___x_2101_, 0);
v_nextMacroScope_2103_ = lean_ctor_get(v___x_2101_, 1);
v_ngen_2104_ = lean_ctor_get(v___x_2101_, 2);
v_auxDeclNGen_2105_ = lean_ctor_get(v___x_2101_, 3);
v_traceState_2106_ = lean_ctor_get(v___x_2101_, 4);
v_messages_2107_ = lean_ctor_get(v___x_2101_, 6);
v_infoState_2108_ = lean_ctor_get(v___x_2101_, 7);
v_snapshotTasks_2109_ = lean_ctor_get(v___x_2101_, 8);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2139_ == 0)
{
lean_object* v_unused_2140_; 
v_unused_2140_ = lean_ctor_get(v___x_2101_, 5);
lean_dec(v_unused_2140_);
v___x_2111_ = v___x_2101_;
v_isShared_2112_ = v_isSharedCheck_2139_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_snapshotTasks_2109_);
lean_inc(v_infoState_2108_);
lean_inc(v_messages_2107_);
lean_inc(v_traceState_2106_);
lean_inc(v_auxDeclNGen_2105_);
lean_inc(v_ngen_2104_);
lean_inc(v_nextMacroScope_2103_);
lean_inc(v_env_2102_);
lean_dec(v___x_2101_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2139_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2117_; 
v___x_2113_ = l_Lean_Meta_eqnOptionsExt;
v___x_2114_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2113_, v_env_2102_, v_declName_2079_, v_a_2094_);
v___x_2115_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 5, v___x_2115_);
lean_ctor_set(v___x_2111_, 0, v___x_2114_);
v___x_2117_ = v___x_2111_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2114_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_nextMacroScope_2103_);
lean_ctor_set(v_reuseFailAlloc_2138_, 2, v_ngen_2104_);
lean_ctor_set(v_reuseFailAlloc_2138_, 3, v_auxDeclNGen_2105_);
lean_ctor_set(v_reuseFailAlloc_2138_, 4, v_traceState_2106_);
lean_ctor_set(v_reuseFailAlloc_2138_, 5, v___x_2115_);
lean_ctor_set(v_reuseFailAlloc_2138_, 6, v_messages_2107_);
lean_ctor_set(v_reuseFailAlloc_2138_, 7, v_infoState_2108_);
lean_ctor_set(v_reuseFailAlloc_2138_, 8, v_snapshotTasks_2109_);
v___x_2117_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v_mctx_2120_; lean_object* v_zetaDeltaFVarIds_2121_; lean_object* v_postponed_2122_; lean_object* v_diag_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2136_; 
v___x_2118_ = lean_st_ref_put(v___y_2100_, v___x_2117_);
v___x_2119_ = lean_st_ref_take(v___y_2099_);
v_mctx_2120_ = lean_ctor_get(v___x_2119_, 0);
v_zetaDeltaFVarIds_2121_ = lean_ctor_get(v___x_2119_, 2);
v_postponed_2122_ = lean_ctor_get(v___x_2119_, 3);
v_diag_2123_ = lean_ctor_get(v___x_2119_, 4);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2136_ == 0)
{
lean_object* v_unused_2137_; 
v_unused_2137_ = lean_ctor_get(v___x_2119_, 1);
lean_dec(v_unused_2137_);
v___x_2125_ = v___x_2119_;
v_isShared_2126_ = v_isSharedCheck_2136_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_diag_2123_);
lean_inc(v_postponed_2122_);
lean_inc(v_zetaDeltaFVarIds_2121_);
lean_inc(v_mctx_2120_);
lean_dec(v___x_2119_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2136_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2127_ = lean_box(0);
v___x_2128_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_2128_);
v___x_2130_ = v___x_2125_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_mctx_2120_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2135_, 2, v_zetaDeltaFVarIds_2121_);
lean_ctor_set(v_reuseFailAlloc_2135_, 3, v_postponed_2122_);
lean_ctor_set(v_reuseFailAlloc_2135_, 4, v_diag_2123_);
v___x_2130_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2131_; lean_object* v___x_2133_; 
v___x_2131_ = lean_st_ref_put(v___y_2099_, v___x_2130_);
if (v_isShared_2097_ == 0)
{
lean_ctor_set(v___x_2096_, 0, v___x_2127_);
v___x_2133_ = v___x_2096_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2127_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
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
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v_declName_2079_);
v_a_2154_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2093_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2093_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions___boxed(lean_object* v_declName_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Lean_Meta_saveEqnAffectingOptions(v_declName_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
lean_dec(v_a_2166_);
lean_dec_ref(v_a_2165_);
lean_dec(v_a_2164_);
lean_dec_ref(v_a_2163_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(lean_object* v___x_2169_, lean_object* v_as_2170_, size_t v_sz_2171_, size_t v_i_2172_, lean_object* v_b_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(v___x_2169_, v_as_2170_, v_sz_2171_, v_i_2172_, v_b_2173_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___boxed(lean_object* v___x_2180_, lean_object* v_as_2181_, lean_object* v_sz_2182_, lean_object* v_i_2183_, lean_object* v_b_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
size_t v_sz_boxed_2190_; size_t v_i_boxed_2191_; lean_object* v_res_2192_; 
v_sz_boxed_2190_ = lean_unbox_usize(v_sz_2182_);
lean_dec(v_sz_2182_);
v_i_boxed_2191_ = lean_unbox_usize(v_i_2183_);
lean_dec(v_i_2183_);
v_res_2192_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v___x_2180_, v_as_2181_, v_sz_boxed_2190_, v_i_boxed_2191_, v_b_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec_ref(v_as_2181_);
lean_dec_ref(v___x_2180_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2194_ = lean_box(0);
v___x_2195_ = lean_st_mk_ref(v___x_2194_);
v___x_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2____boxed(lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object* v_f_2199_){
_start:
{
uint8_t v___x_2201_; 
v___x_2201_ = l_Lean_initializing();
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
lean_dec_ref(v_f_2199_);
v___x_2202_ = lean_obj_once(&l_Lean_Meta_registerGetEqnsFn___closed__1, &l_Lean_Meta_registerGetEqnsFn___closed__1_once, _init_l_Lean_Meta_registerGetEqnsFn___closed__1);
v___x_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
return v___x_2203_;
}
else
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2204_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
v___x_2205_ = lean_st_ref_take(v___x_2204_);
v___x_2206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2206_, 0, v_f_2199_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = lean_st_ref_put(v___x_2204_, v___x_2206_);
v___x_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
return v___x_2208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn___boxed(lean_object* v_f_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lean_Meta_registerGetUnfoldEqnFn(v_f_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(lean_object* v_declName_2215_, lean_object* v_as_x27_2216_, lean_object* v_b_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_){
_start:
{
if (lean_obj_tag(v_as_x27_2216_) == 0)
{
lean_object* v___x_2223_; 
lean_dec(v_declName_2215_);
v___x_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2223_, 0, v_b_2217_);
return v___x_2223_;
}
else
{
lean_object* v_head_2224_; lean_object* v_tail_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
lean_dec_ref(v_b_2217_);
v_head_2224_ = lean_ctor_get(v_as_x27_2216_, 0);
v_tail_2225_ = lean_ctor_get(v_as_x27_2216_, 1);
v___x_2226_ = lean_box(0);
v___x_2227_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0));
lean_inc(v_head_2224_);
lean_inc(v___y_2221_);
lean_inc_ref(v___y_2220_);
lean_inc(v___y_2219_);
lean_inc_ref(v___y_2218_);
lean_inc(v_declName_2215_);
v___x_2228_ = lean_apply_6(v_head_2224_, v_declName_2215_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, lean_box(0));
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2239_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2231_ = v___x_2228_;
v_isShared_2232_ = v_isSharedCheck_2239_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2228_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2239_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
if (lean_obj_tag(v_a_2229_) == 1)
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2236_; 
lean_dec(v_declName_2215_);
v___x_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_a_2229_);
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
lean_ctor_set(v___x_2234_, 1, v___x_2226_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 0, v___x_2234_);
v___x_2236_ = v___x_2231_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
else
{
lean_del_object(v___x_2231_);
lean_dec(v_a_2229_);
v_as_x27_2216_ = v_tail_2225_;
v_b_2217_ = v___x_2227_;
goto _start;
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_declName_2215_);
v_a_2240_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2228_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2228_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___boxed(lean_object* v_declName_2248_, lean_object* v_as_x27_2249_, lean_object* v_b_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2248_, v_as_x27_2249_, v_b_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v_as_x27_2249_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(lean_object* v___x_2257_, lean_object* v_declName_2258_, uint8_t v_nonRec_2259_, lean_object* v___x_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v___x_2269_; lean_object* v_env_2270_; uint8_t v___x_2271_; uint8_t v___x_2272_; 
v___x_2269_ = lean_st_ref_get(v___y_2264_);
v_env_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc_ref(v_env_2270_);
lean_dec(v___x_2269_);
v___x_2271_ = 1;
lean_inc(v___x_2257_);
v___x_2272_ = l_Lean_Environment_contains(v_env_2270_, v___x_2257_, v___x_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; 
lean_dec(v___x_2257_);
lean_inc(v_declName_2258_);
v___x_2273_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_2258_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; uint8_t v___x_2275_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = lean_unbox(v_a_2274_);
lean_dec(v_a_2274_);
if (v___x_2275_ == 0)
{
lean_dec_ref(v___x_2260_);
lean_dec(v_declName_2258_);
goto v___jp_2266_;
}
else
{
lean_object* v___x_2276_; 
lean_inc(v_declName_2258_);
v___x_2276_ = l_Lean_Meta_isRecursiveDefinition___redArg(v_declName_2258_, v___y_2264_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; uint8_t v___x_2278_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2276_, 1);
v___x_2278_ = lean_unbox(v_a_2277_);
lean_dec(v_a_2277_);
if (v___x_2278_ == 0)
{
if (v_nonRec_2259_ == 0)
{
lean_dec_ref(v___x_2260_);
lean_dec(v_declName_2258_);
goto v___jp_2266_;
}
else
{
lean_object* v___x_2279_; lean_object* v_env_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2279_ = lean_st_ref_get(v___y_2264_);
v_env_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc_ref(v_env_2280_);
lean_dec(v___x_2279_);
lean_inc(v_declName_2258_);
v___x_2281_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2280_, v_declName_2258_, v___x_2260_);
v___x_2282_ = l_Lean_Meta_mkSimpleEqThm(v_declName_2258_, v___x_2281_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
return v___x_2282_;
}
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
lean_dec_ref(v___x_2260_);
v___x_2283_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
v___x_2284_ = lean_st_ref_get(v___x_2283_);
v___x_2285_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0));
v___x_2286_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2258_, v___x_2284_, v___x_2285_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___x_2284_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2296_; 
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2289_ = v___x_2286_;
v_isShared_2290_ = v_isSharedCheck_2296_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2286_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2296_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v_fst_2291_; 
v_fst_2291_ = lean_ctor_get(v_a_2287_, 0);
lean_inc(v_fst_2291_);
lean_dec(v_a_2287_);
if (lean_obj_tag(v_fst_2291_) == 0)
{
lean_del_object(v___x_2289_);
goto v___jp_2266_;
}
else
{
lean_object* v_val_2292_; lean_object* v___x_2294_; 
v_val_2292_ = lean_ctor_get(v_fst_2291_, 0);
lean_inc(v_val_2292_);
lean_dec_ref_known(v_fst_2291_, 1);
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 0, v_val_2292_);
v___x_2294_ = v___x_2289_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_val_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
v_a_2297_ = lean_ctor_get(v___x_2286_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2286_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2286_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec_ref(v___x_2260_);
lean_dec(v_declName_2258_);
v_a_2305_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2276_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2276_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_dec_ref(v___x_2260_);
lean_dec(v_declName_2258_);
v_a_2313_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2273_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2273_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
else
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
lean_dec_ref(v___x_2260_);
lean_dec(v_declName_2258_);
v___x_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2257_);
v___x_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
return v___x_2322_;
}
v___jp_2266_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_box(0);
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
return v___x_2268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed(lean_object* v___x_2323_, lean_object* v_declName_2324_, lean_object* v_nonRec_2325_, lean_object* v___x_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
uint8_t v_nonRec_boxed_2332_; lean_object* v_res_2333_; 
v_nonRec_boxed_2332_ = lean_unbox(v_nonRec_2325_);
v_res_2333_ = l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(v___x_2323_, v_declName_2324_, v_nonRec_boxed_2332_, v___x_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(lean_object* v_msg_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v_ref_2340_; lean_object* v___x_2341_; lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2350_; 
v_ref_2340_ = lean_ctor_get(v___y_2337_, 2);
v___x_2341_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(v_msg_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2344_ = v___x_2341_;
v_isShared_2345_ = v_isSharedCheck_2350_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2341_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2350_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2346_; lean_object* v___x_2348_; 
lean_inc(v_ref_2340_);
v___x_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2346_, 0, v_ref_2340_);
lean_ctor_set(v___x_2346_, 1, v_a_2342_);
if (v_isShared_2345_ == 0)
{
lean_ctor_set_tag(v___x_2344_, 1);
lean_ctor_set(v___x_2344_, 0, v___x_2346_);
v___x_2348_ = v___x_2344_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg___boxed(lean_object* v_msg_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v_msg_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2358_, uint8_t v_isExporting_2359_, lean_object* v___x_2360_, lean_object* v___y_2361_, lean_object* v___x_2362_, lean_object* v_a_x3f_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v_env_2366_; lean_object* v_nextMacroScope_2367_; lean_object* v_ngen_2368_; lean_object* v_auxDeclNGen_2369_; lean_object* v_traceState_2370_; lean_object* v_messages_2371_; lean_object* v_infoState_2372_; lean_object* v_snapshotTasks_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2398_; 
v___x_2365_ = lean_st_ref_take(v___y_2358_);
v_env_2366_ = lean_ctor_get(v___x_2365_, 0);
v_nextMacroScope_2367_ = lean_ctor_get(v___x_2365_, 1);
v_ngen_2368_ = lean_ctor_get(v___x_2365_, 2);
v_auxDeclNGen_2369_ = lean_ctor_get(v___x_2365_, 3);
v_traceState_2370_ = lean_ctor_get(v___x_2365_, 4);
v_messages_2371_ = lean_ctor_get(v___x_2365_, 6);
v_infoState_2372_ = lean_ctor_get(v___x_2365_, 7);
v_snapshotTasks_2373_ = lean_ctor_get(v___x_2365_, 8);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2398_ == 0)
{
lean_object* v_unused_2399_; 
v_unused_2399_ = lean_ctor_get(v___x_2365_, 5);
lean_dec(v_unused_2399_);
v___x_2375_ = v___x_2365_;
v_isShared_2376_ = v_isSharedCheck_2398_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_snapshotTasks_2373_);
lean_inc(v_infoState_2372_);
lean_inc(v_messages_2371_);
lean_inc(v_traceState_2370_);
lean_inc(v_auxDeclNGen_2369_);
lean_inc(v_ngen_2368_);
lean_inc(v_nextMacroScope_2367_);
lean_inc(v_env_2366_);
lean_dec(v___x_2365_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2398_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2377_; lean_object* v___x_2379_; 
v___x_2377_ = l_Lean_Environment_setExporting(v_env_2366_, v_isExporting_2359_);
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 5, v___x_2360_);
lean_ctor_set(v___x_2375_, 0, v___x_2377_);
v___x_2379_ = v___x_2375_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2377_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_nextMacroScope_2367_);
lean_ctor_set(v_reuseFailAlloc_2397_, 2, v_ngen_2368_);
lean_ctor_set(v_reuseFailAlloc_2397_, 3, v_auxDeclNGen_2369_);
lean_ctor_set(v_reuseFailAlloc_2397_, 4, v_traceState_2370_);
lean_ctor_set(v_reuseFailAlloc_2397_, 5, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2397_, 6, v_messages_2371_);
lean_ctor_set(v_reuseFailAlloc_2397_, 7, v_infoState_2372_);
lean_ctor_set(v_reuseFailAlloc_2397_, 8, v_snapshotTasks_2373_);
v___x_2379_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v_mctx_2382_; lean_object* v_zetaDeltaFVarIds_2383_; lean_object* v_postponed_2384_; lean_object* v_diag_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2395_; 
v___x_2380_ = lean_st_ref_put(v___y_2358_, v___x_2379_);
v___x_2381_ = lean_st_ref_take(v___y_2361_);
v_mctx_2382_ = lean_ctor_get(v___x_2381_, 0);
v_zetaDeltaFVarIds_2383_ = lean_ctor_get(v___x_2381_, 2);
v_postponed_2384_ = lean_ctor_get(v___x_2381_, 3);
v_diag_2385_ = lean_ctor_get(v___x_2381_, 4);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2395_ == 0)
{
lean_object* v_unused_2396_; 
v_unused_2396_ = lean_ctor_get(v___x_2381_, 1);
lean_dec(v_unused_2396_);
v___x_2387_ = v___x_2381_;
v_isShared_2388_ = v_isSharedCheck_2395_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_diag_2385_);
lean_inc(v_postponed_2384_);
lean_inc(v_zetaDeltaFVarIds_2383_);
lean_inc(v_mctx_2382_);
lean_dec(v___x_2381_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2395_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; lean_object* v___x_2391_; 
v___x_2389_ = lean_box(0);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_2362_);
v___x_2391_ = v___x_2387_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_mctx_2382_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v___x_2362_);
lean_ctor_set(v_reuseFailAlloc_2394_, 2, v_zetaDeltaFVarIds_2383_);
lean_ctor_set(v_reuseFailAlloc_2394_, 3, v_postponed_2384_);
lean_ctor_set(v_reuseFailAlloc_2394_, 4, v_diag_2385_);
v___x_2391_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = lean_st_ref_put(v___y_2361_, v___x_2391_);
v___x_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2389_);
return v___x_2393_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2400_, lean_object* v_isExporting_2401_, lean_object* v___x_2402_, lean_object* v___y_2403_, lean_object* v___x_2404_, lean_object* v_a_x3f_2405_, lean_object* v___y_2406_){
_start:
{
uint8_t v_isExporting_boxed_2407_; lean_object* v_res_2408_; 
v_isExporting_boxed_2407_ = lean_unbox(v_isExporting_2401_);
v_res_2408_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2400_, v_isExporting_boxed_2407_, v___x_2402_, v___y_2403_, v___x_2404_, v_a_x3f_2405_);
lean_dec(v_a_x3f_2405_);
lean_dec(v___y_2403_);
lean_dec(v___y_2400_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(lean_object* v_x_2409_, uint8_t v_isExporting_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v___x_2416_; lean_object* v_env_2417_; lean_object* v___x_2418_; uint8_t v_isModule_2419_; 
v___x_2416_ = lean_st_ref_get(v___y_2414_);
v_env_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc_ref(v_env_2417_);
lean_dec(v___x_2416_);
v___x_2418_ = l_Lean_Environment_header(v_env_2417_);
v_isModule_2419_ = lean_ctor_get_uint8(v___x_2418_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2418_);
if (v_isModule_2419_ == 0)
{
lean_object* v___x_2420_; 
lean_dec_ref(v_env_2417_);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v___x_2420_ = lean_apply_5(v_x_2409_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, lean_box(0));
return v___x_2420_;
}
else
{
uint8_t v_isExporting_2421_; 
v_isExporting_2421_ = lean_ctor_get_uint8(v_env_2417_, sizeof(void*)*8);
lean_dec_ref(v_env_2417_);
if (v_isExporting_2410_ == 0)
{
if (v_isExporting_2421_ == 0)
{
lean_object* v___x_2487_; 
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v___x_2487_ = lean_apply_5(v_x_2409_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, lean_box(0));
return v___x_2487_;
}
else
{
goto v___jp_2422_;
}
}
else
{
if (v_isExporting_2421_ == 0)
{
goto v___jp_2422_;
}
else
{
lean_object* v___x_2488_; 
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v___x_2488_ = lean_apply_5(v_x_2409_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, lean_box(0));
return v___x_2488_;
}
}
v___jp_2422_:
{
lean_object* v___x_2423_; lean_object* v_env_2424_; lean_object* v_nextMacroScope_2425_; lean_object* v_ngen_2426_; lean_object* v_auxDeclNGen_2427_; lean_object* v_traceState_2428_; lean_object* v_messages_2429_; lean_object* v_infoState_2430_; lean_object* v_snapshotTasks_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2485_; 
v___x_2423_ = lean_st_ref_take(v___y_2414_);
v_env_2424_ = lean_ctor_get(v___x_2423_, 0);
v_nextMacroScope_2425_ = lean_ctor_get(v___x_2423_, 1);
v_ngen_2426_ = lean_ctor_get(v___x_2423_, 2);
v_auxDeclNGen_2427_ = lean_ctor_get(v___x_2423_, 3);
v_traceState_2428_ = lean_ctor_get(v___x_2423_, 4);
v_messages_2429_ = lean_ctor_get(v___x_2423_, 6);
v_infoState_2430_ = lean_ctor_get(v___x_2423_, 7);
v_snapshotTasks_2431_ = lean_ctor_get(v___x_2423_, 8);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2485_ == 0)
{
lean_object* v_unused_2486_; 
v_unused_2486_ = lean_ctor_get(v___x_2423_, 5);
lean_dec(v_unused_2486_);
v___x_2433_ = v___x_2423_;
v_isShared_2434_ = v_isSharedCheck_2485_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_snapshotTasks_2431_);
lean_inc(v_infoState_2430_);
lean_inc(v_messages_2429_);
lean_inc(v_traceState_2428_);
lean_inc(v_auxDeclNGen_2427_);
lean_inc(v_ngen_2426_);
lean_inc(v_nextMacroScope_2425_);
lean_inc(v_env_2424_);
lean_dec(v___x_2423_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2485_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2438_; 
v___x_2435_ = l_Lean_Environment_setExporting(v_env_2424_, v_isExporting_2410_);
v___x_2436_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 5, v___x_2436_);
lean_ctor_set(v___x_2433_, 0, v___x_2435_);
v___x_2438_ = v___x_2433_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2435_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v_nextMacroScope_2425_);
lean_ctor_set(v_reuseFailAlloc_2484_, 2, v_ngen_2426_);
lean_ctor_set(v_reuseFailAlloc_2484_, 3, v_auxDeclNGen_2427_);
lean_ctor_set(v_reuseFailAlloc_2484_, 4, v_traceState_2428_);
lean_ctor_set(v_reuseFailAlloc_2484_, 5, v___x_2436_);
lean_ctor_set(v_reuseFailAlloc_2484_, 6, v_messages_2429_);
lean_ctor_set(v_reuseFailAlloc_2484_, 7, v_infoState_2430_);
lean_ctor_set(v_reuseFailAlloc_2484_, 8, v_snapshotTasks_2431_);
v___x_2438_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v_mctx_2441_; lean_object* v_zetaDeltaFVarIds_2442_; lean_object* v_postponed_2443_; lean_object* v_diag_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2482_; 
v___x_2439_ = lean_st_ref_put(v___y_2414_, v___x_2438_);
v___x_2440_ = lean_st_ref_take(v___y_2412_);
v_mctx_2441_ = lean_ctor_get(v___x_2440_, 0);
v_zetaDeltaFVarIds_2442_ = lean_ctor_get(v___x_2440_, 2);
v_postponed_2443_ = lean_ctor_get(v___x_2440_, 3);
v_diag_2444_ = lean_ctor_get(v___x_2440_, 4);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2482_ == 0)
{
lean_object* v_unused_2483_; 
v_unused_2483_ = lean_ctor_get(v___x_2440_, 1);
lean_dec(v_unused_2483_);
v___x_2446_ = v___x_2440_;
v_isShared_2447_ = v_isSharedCheck_2482_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_diag_2444_);
lean_inc(v_postponed_2443_);
lean_inc(v_zetaDeltaFVarIds_2442_);
lean_inc(v_mctx_2441_);
lean_dec(v___x_2440_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2482_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2450_; 
v___x_2448_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 1, v___x_2448_);
v___x_2450_ = v___x_2446_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_mctx_2441_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v___x_2448_);
lean_ctor_set(v_reuseFailAlloc_2481_, 2, v_zetaDeltaFVarIds_2442_);
lean_ctor_set(v_reuseFailAlloc_2481_, 3, v_postponed_2443_);
lean_ctor_set(v_reuseFailAlloc_2481_, 4, v_diag_2444_);
v___x_2450_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
lean_object* v___x_2451_; lean_object* v_r_2452_; 
v___x_2451_ = lean_st_ref_put(v___y_2412_, v___x_2450_);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v_r_2452_ = lean_apply_5(v_x_2409_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, lean_box(0));
if (lean_obj_tag(v_r_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2469_; 
v_a_2453_ = lean_ctor_get(v_r_2452_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_r_2452_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2455_ = v_r_2452_;
v_isShared_2456_ = v_isSharedCheck_2469_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v_r_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2469_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2458_; 
lean_inc(v_a_2453_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set_tag(v___x_2455_, 1);
v___x_2458_ = v___x_2455_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2453_);
v___x_2458_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
v___x_2459_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2414_, v_isExporting_2421_, v___x_2436_, v___y_2412_, v___x_2448_, v___x_2458_);
lean_dec_ref(v___x_2458_);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2466_ == 0)
{
lean_object* v_unused_2467_; 
v_unused_2467_ = lean_ctor_get(v___x_2459_, 0);
lean_dec(v_unused_2467_);
v___x_2461_ = v___x_2459_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_dec(v___x_2459_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v_a_2453_);
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2453_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
v_a_2470_ = lean_ctor_get(v_r_2452_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v_r_2452_, 1);
v___x_2471_ = lean_box(0);
v___x_2472_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2414_, v_isExporting_2421_, v___x_2436_, v___y_2412_, v___x_2448_, v___x_2471_);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2479_ == 0)
{
lean_object* v_unused_2480_; 
v_unused_2480_ = lean_ctor_get(v___x_2472_, 0);
lean_dec(v_unused_2480_);
v___x_2474_ = v___x_2472_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_dec(v___x_2472_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
lean_ctor_set_tag(v___x_2474_, 1);
lean_ctor_set(v___x_2474_, 0, v_a_2470_);
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2470_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_2489_, lean_object* v_isExporting_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
uint8_t v_isExporting_boxed_2496_; lean_object* v_res_2497_; 
v_isExporting_boxed_2496_ = lean_unbox(v_isExporting_2490_);
v_res_2497_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2489_, v_isExporting_boxed_2496_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(lean_object* v_x_2498_, uint8_t v_when_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
if (v_when_2499_ == 0)
{
lean_object* v___x_2505_; 
lean_inc(v___y_2503_);
lean_inc_ref(v___y_2502_);
lean_inc(v___y_2501_);
lean_inc_ref(v___y_2500_);
v___x_2505_ = lean_apply_5(v_x_2498_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, lean_box(0));
return v___x_2505_;
}
else
{
uint8_t v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = 0;
v___x_2507_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2498_, v___x_2506_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
return v___x_2507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg___boxed(lean_object* v_x_2508_, lean_object* v_when_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
uint8_t v_when_boxed_2515_; lean_object* v_res_2516_; 
v_when_boxed_2515_ = lean_unbox(v_when_2509_);
v_res_2516_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v_x_2508_, v_when_boxed_2515_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
return v_res_2516_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0));
v___x_2519_ = l_Lean_stringToMessageData(v___x_2518_);
return v___x_2519_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2));
v___x_2522_ = l_Lean_stringToMessageData(v___x_2521_);
return v___x_2522_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4));
v___x_2525_ = l_Lean_stringToMessageData(v___x_2524_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(lean_object* v_declName_2526_, uint8_t v_nonRec_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v___x_2533_; lean_object* v_env_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___f_2538_; uint8_t v___x_2539_; lean_object* v___x_2540_; 
v___x_2533_ = lean_st_ref_get(v___y_2531_);
v_env_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc_ref(v_env_2534_);
lean_dec(v___x_2533_);
v___x_2535_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
lean_inc(v_declName_2526_);
v___x_2536_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2534_, v_declName_2526_, v___x_2535_);
v___x_2537_ = lean_box(v_nonRec_2527_);
lean_inc(v___x_2536_);
v___f_2538_ = lean_alloc_closure((void*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2538_, 0, v___x_2536_);
lean_closure_set(v___f_2538_, 1, v_declName_2526_);
lean_closure_set(v___f_2538_, 2, v___x_2537_);
lean_closure_set(v___f_2538_, 3, v___x_2535_);
v___x_2539_ = 1;
v___x_2540_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v___f_2538_, v___x_2539_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
if (lean_obj_tag(v_a_2541_) == 1)
{
lean_object* v_val_2542_; uint8_t v___x_2543_; 
v_val_2542_ = lean_ctor_get(v_a_2541_, 0);
lean_inc(v_val_2542_);
lean_dec_ref_known(v_a_2541_, 1);
v___x_2543_ = lean_name_eq(v_val_2542_, v___x_2536_);
if (v___x_2543_ == 0)
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_dec_ref_known(v___x_2540_, 1);
v___x_2544_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1);
v___x_2545_ = l_Lean_MessageData_ofName(v_val_2542_);
v___x_2546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2544_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
v___x_2547_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3);
v___x_2548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2546_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = l_Lean_MessageData_ofName(v___x_2536_);
v___x_2550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
v___x_2551_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5);
v___x_2552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2550_);
lean_ctor_set(v___x_2552_, 1, v___x_2551_);
v___x_2553_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v___x_2552_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2553_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2553_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
else
{
lean_dec(v_val_2542_);
lean_dec(v___x_2536_);
return v___x_2540_;
}
}
else
{
lean_dec(v_a_2541_);
lean_dec(v___x_2536_);
return v___x_2540_;
}
}
else
{
lean_dec(v___x_2536_);
return v___x_2540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed(lean_object* v_declName_2562_, lean_object* v_nonRec_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
uint8_t v_nonRec_boxed_2569_; lean_object* v_res_2570_; 
v_nonRec_boxed_2569_ = lean_unbox(v_nonRec_2563_);
v_res_2570_ = l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(v_declName_2562_, v_nonRec_boxed_2569_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object* v_declName_2571_, uint8_t v_nonRec_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v___x_2578_; lean_object* v___f_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2578_ = lean_box(v_nonRec_2572_);
v___f_2579_ = lean_alloc_closure((void*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed), 7, 2);
lean_closure_set(v___f_2579_, 0, v_declName_2571_);
lean_closure_set(v___f_2579_, 1, v___x_2578_);
v___x_2580_ = lean_unsigned_to_nat(32u);
v___x_2581_ = lean_mk_empty_array_with_capacity(v___x_2580_);
lean_dec_ref(v___x_2581_);
v___x_2582_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_2583_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
v___x_2584_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_2582_, v___x_2583_, v___f_2579_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
return v___x_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___boxed(lean_object* v_declName_2585_, lean_object* v_nonRec_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
uint8_t v_nonRec_boxed_2592_; lean_object* v_res_2593_; 
v_nonRec_boxed_2592_ = lean_unbox(v_nonRec_2586_);
v_res_2593_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_declName_2585_, v_nonRec_boxed_2592_, v_a_2587_, v_a_2588_, v_a_2589_, v_a_2590_);
lean_dec(v_a_2590_);
lean_dec_ref(v_a_2589_);
lean_dec(v_a_2588_);
lean_dec_ref(v_a_2587_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(lean_object* v_declName_2594_, lean_object* v_as_2595_, lean_object* v_as_x27_2596_, lean_object* v_b_2597_, lean_object* v_a_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2594_, v_as_x27_2596_, v_b_2597_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___boxed(lean_object* v_declName_2605_, lean_object* v_as_2606_, lean_object* v_as_x27_2607_, lean_object* v_b_2608_, lean_object* v_a_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(v_declName_2605_, v_as_2606_, v_as_x27_2607_, v_b_2608_, v_a_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
lean_dec(v_as_x27_2607_);
lean_dec(v_as_2606_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(lean_object* v_00_u03b1_2616_, lean_object* v_x_2617_, uint8_t v_isExporting_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2617_, v_isExporting_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2625_, lean_object* v_x_2626_, lean_object* v_isExporting_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
uint8_t v_isExporting_boxed_2633_; lean_object* v_res_2634_; 
v_isExporting_boxed_2633_ = lean_unbox(v_isExporting_2627_);
v_res_2634_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(v_00_u03b1_2625_, v_x_2626_, v_isExporting_boxed_2633_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(lean_object* v_00_u03b1_2635_, lean_object* v_x_2636_, uint8_t v_when_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2643_; 
v___x_2643_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v_x_2636_, v_when_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___boxed(lean_object* v_00_u03b1_2644_, lean_object* v_x_2645_, lean_object* v_when_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
uint8_t v_when_boxed_2652_; lean_object* v_res_2653_; 
v_when_boxed_2652_ = lean_unbox(v_when_2646_);
v_res_2653_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(v_00_u03b1_2644_, v_x_2645_, v_when_boxed_2652_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(lean_object* v_00_u03b1_2654_, lean_object* v_msg_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v___x_2661_; 
v___x_2661_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v_msg_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___boxed(lean_object* v_00_u03b1_2662_, lean_object* v_msg_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(v_00_u03b1_2662_, v_msg_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
return v_res_2669_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2670_ = lean_unsigned_to_nat(32u);
v___x_2671_ = lean_mk_empty_array_with_capacity(v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2673_ = ((size_t)5ULL);
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = lean_unsigned_to_nat(32u);
v___x_2676_ = lean_mk_empty_array_with_capacity(v___x_2675_);
v___x_2677_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_2678_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
lean_ctor_set(v___x_2678_, 1, v___x_2676_);
lean_ctor_set(v___x_2678_, 2, v___x_2674_);
lean_ctor_set(v___x_2678_, 3, v___x_2674_);
lean_ctor_set_usize(v___x_2678_, 4, v___x_2673_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(lean_object* v___y_2679_){
_start:
{
lean_object* v___x_2681_; lean_object* v_traceState_2682_; lean_object* v_traces_2683_; lean_object* v___x_2684_; lean_object* v_traceState_2685_; lean_object* v_env_2686_; lean_object* v_nextMacroScope_2687_; lean_object* v_ngen_2688_; lean_object* v_auxDeclNGen_2689_; lean_object* v_cache_2690_; lean_object* v_messages_2691_; lean_object* v_infoState_2692_; lean_object* v_snapshotTasks_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2712_; 
v___x_2681_ = lean_st_ref_get(v___y_2679_);
v_traceState_2682_ = lean_ctor_get(v___x_2681_, 4);
lean_inc_ref(v_traceState_2682_);
lean_dec(v___x_2681_);
v_traces_2683_ = lean_ctor_get(v_traceState_2682_, 0);
lean_inc_ref(v_traces_2683_);
lean_dec_ref(v_traceState_2682_);
v___x_2684_ = lean_st_ref_take(v___y_2679_);
v_traceState_2685_ = lean_ctor_get(v___x_2684_, 4);
v_env_2686_ = lean_ctor_get(v___x_2684_, 0);
v_nextMacroScope_2687_ = lean_ctor_get(v___x_2684_, 1);
v_ngen_2688_ = lean_ctor_get(v___x_2684_, 2);
v_auxDeclNGen_2689_ = lean_ctor_get(v___x_2684_, 3);
v_cache_2690_ = lean_ctor_get(v___x_2684_, 5);
v_messages_2691_ = lean_ctor_get(v___x_2684_, 6);
v_infoState_2692_ = lean_ctor_get(v___x_2684_, 7);
v_snapshotTasks_2693_ = lean_ctor_get(v___x_2684_, 8);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2695_ = v___x_2684_;
v_isShared_2696_ = v_isSharedCheck_2712_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_snapshotTasks_2693_);
lean_inc(v_infoState_2692_);
lean_inc(v_messages_2691_);
lean_inc(v_cache_2690_);
lean_inc(v_traceState_2685_);
lean_inc(v_auxDeclNGen_2689_);
lean_inc(v_ngen_2688_);
lean_inc(v_nextMacroScope_2687_);
lean_inc(v_env_2686_);
lean_dec(v___x_2684_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2712_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
uint64_t v_tid_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2710_; 
v_tid_2697_ = lean_ctor_get_uint64(v_traceState_2685_, sizeof(void*)*1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_traceState_2685_);
if (v_isSharedCheck_2710_ == 0)
{
lean_object* v_unused_2711_; 
v_unused_2711_ = lean_ctor_get(v_traceState_2685_, 0);
lean_dec(v_unused_2711_);
v___x_2699_ = v_traceState_2685_;
v_isShared_2700_ = v_isSharedCheck_2710_;
goto v_resetjp_2698_;
}
else
{
lean_dec(v_traceState_2685_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2710_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2701_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 0, v___x_2701_);
v___x_2703_ = v___x_2699_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2701_);
lean_ctor_set_uint64(v_reuseFailAlloc_2709_, sizeof(void*)*1, v_tid_2697_);
v___x_2703_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
lean_object* v___x_2705_; 
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 4, v___x_2703_);
v___x_2705_ = v___x_2695_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_env_2686_);
lean_ctor_set(v_reuseFailAlloc_2708_, 1, v_nextMacroScope_2687_);
lean_ctor_set(v_reuseFailAlloc_2708_, 2, v_ngen_2688_);
lean_ctor_set(v_reuseFailAlloc_2708_, 3, v_auxDeclNGen_2689_);
lean_ctor_set(v_reuseFailAlloc_2708_, 4, v___x_2703_);
lean_ctor_set(v_reuseFailAlloc_2708_, 5, v_cache_2690_);
lean_ctor_set(v_reuseFailAlloc_2708_, 6, v_messages_2691_);
lean_ctor_set(v_reuseFailAlloc_2708_, 7, v_infoState_2692_);
lean_ctor_set(v_reuseFailAlloc_2708_, 8, v_snapshotTasks_2693_);
v___x_2705_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_st_ref_put(v___y_2679_, v___x_2705_);
v___x_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2707_, 0, v_traces_2683_);
return v___x_2707_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_2713_);
lean_dec(v___y_2713_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_2717_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___boxed(lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(v___y_2720_, v___y_2721_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v_____r_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
uint8_t v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2728_ = 0;
v___x_2729_ = lean_box(v___x_2728_);
v___x_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_____r_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v_____r_2731_, v___y_2732_, v___y_2733_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
return v_res_2735_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2737_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_2738_ = l_Lean_stringToMessageData(v___x_2737_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v_name_2739_, lean_object* v_x_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2744_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_2745_ = l_Lean_MessageData_ofName(v_name_2739_);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_name_2748_, lean_object* v_x_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v_name_2748_, v_x_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec_ref(v_x_2749_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_x_2754_){
_start:
{
if (lean_obj_tag(v_x_2754_) == 0)
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
v_a_2756_ = lean_ctor_get(v_x_2754_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_x_2754_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v_x_2754_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v_x_2754_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 1);
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
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
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
v_a_2764_ = lean_ctor_get(v_x_2754_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v_x_2754_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v_x_2754_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v_x_2754_);
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
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_x_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_2772_);
return v_res_2774_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(lean_object* v_e_2775_){
_start:
{
if (lean_obj_tag(v_e_2775_) == 0)
{
uint8_t v___x_2776_; 
v___x_2776_ = 2;
return v___x_2776_;
}
else
{
lean_object* v_a_2777_; uint8_t v___x_2778_; 
v_a_2777_ = lean_ctor_get(v_e_2775_, 0);
v___x_2778_ = lean_unbox(v_a_2777_);
if (v___x_2778_ == 0)
{
uint8_t v___x_2779_; 
v___x_2779_ = 1;
return v___x_2779_;
}
else
{
uint8_t v___x_2780_; 
v___x_2780_ = 0;
return v___x_2780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object* v_e_2781_){
_start:
{
uint8_t v_res_2782_; lean_object* v_r_2783_; 
v_res_2782_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(v_e_2781_);
lean_dec_ref(v_e_2781_);
v_r_2783_ = lean_box(v_res_2782_);
return v_r_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(size_t v_sz_2784_, size_t v_i_2785_, lean_object* v_bs_2786_){
_start:
{
uint8_t v___x_2787_; 
v___x_2787_ = lean_usize_dec_lt(v_i_2785_, v_sz_2784_);
if (v___x_2787_ == 0)
{
return v_bs_2786_;
}
else
{
lean_object* v_v_2788_; lean_object* v_msg_2789_; lean_object* v___x_2790_; lean_object* v_bs_x27_2791_; size_t v___x_2792_; size_t v___x_2793_; lean_object* v___x_2794_; 
v_v_2788_ = lean_array_uget_borrowed(v_bs_2786_, v_i_2785_);
v_msg_2789_ = lean_ctor_get(v_v_2788_, 1);
lean_inc_ref(v_msg_2789_);
v___x_2790_ = lean_unsigned_to_nat(0u);
v_bs_x27_2791_ = lean_array_uset(v_bs_2786_, v_i_2785_, v___x_2790_);
v___x_2792_ = ((size_t)1ULL);
v___x_2793_ = lean_usize_add(v_i_2785_, v___x_2792_);
v___x_2794_ = lean_array_uset(v_bs_x27_2791_, v_i_2785_, v_msg_2789_);
v_i_2785_ = v___x_2793_;
v_bs_2786_ = v___x_2794_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object* v_sz_2796_, lean_object* v_i_2797_, lean_object* v_bs_2798_){
_start:
{
size_t v_sz_boxed_2799_; size_t v_i_boxed_2800_; lean_object* v_res_2801_; 
v_sz_boxed_2799_ = lean_unbox_usize(v_sz_2796_);
lean_dec(v_sz_2796_);
v_i_boxed_2800_ = lean_unbox_usize(v_i_2797_);
lean_dec(v_i_2797_);
v_res_2801_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_sz_boxed_2799_, v_i_boxed_2800_, v_bs_2798_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_oldTraces_2802_, lean_object* v_data_2803_, lean_object* v_ref_2804_, lean_object* v_msg_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_toCold_2809_; lean_object* v_currRecDepth_2810_; lean_object* v_ref_2811_; uint8_t v_diag_2812_; uint8_t v_suppressElabErrors_2813_; lean_object* v_ref_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v_traceState_2817_; lean_object* v_traces_2818_; lean_object* v___x_2819_; size_t v_sz_2820_; size_t v___x_2821_; lean_object* v___x_2822_; lean_object* v_msg_2823_; lean_object* v___x_2824_; lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2862_; 
v_toCold_2809_ = lean_ctor_get(v___y_2806_, 0);
v_currRecDepth_2810_ = lean_ctor_get(v___y_2806_, 1);
v_ref_2811_ = lean_ctor_get(v___y_2806_, 2);
v_diag_2812_ = lean_ctor_get_uint8(v___y_2806_, sizeof(void*)*3);
v_suppressElabErrors_2813_ = lean_ctor_get_uint8(v___y_2806_, sizeof(void*)*3 + 1);
v_ref_2814_ = l_Lean_replaceRef(v_ref_2804_, v_ref_2811_);
lean_inc(v_currRecDepth_2810_);
lean_inc_ref(v_toCold_2809_);
v___x_2815_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2815_, 0, v_toCold_2809_);
lean_ctor_set(v___x_2815_, 1, v_currRecDepth_2810_);
lean_ctor_set(v___x_2815_, 2, v_ref_2814_);
lean_ctor_set_uint8(v___x_2815_, sizeof(void*)*3, v_diag_2812_);
lean_ctor_set_uint8(v___x_2815_, sizeof(void*)*3 + 1, v_suppressElabErrors_2813_);
v___x_2816_ = lean_st_ref_get(v___y_2807_);
v_traceState_2817_ = lean_ctor_get(v___x_2816_, 4);
lean_inc_ref(v_traceState_2817_);
lean_dec(v___x_2816_);
v_traces_2818_ = lean_ctor_get(v_traceState_2817_, 0);
lean_inc_ref(v_traces_2818_);
lean_dec_ref(v_traceState_2817_);
v___x_2819_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2818_);
lean_dec_ref(v_traces_2818_);
v_sz_2820_ = lean_array_size(v___x_2819_);
v___x_2821_ = ((size_t)0ULL);
v___x_2822_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_sz_2820_, v___x_2821_, v___x_2819_);
v_msg_2823_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2823_, 0, v_data_2803_);
lean_ctor_set(v_msg_2823_, 1, v_msg_2805_);
lean_ctor_set(v_msg_2823_, 2, v___x_2822_);
v___x_2824_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msg_2823_, v___x_2815_, v___y_2807_);
lean_dec_ref_known(v___x_2815_, 3);
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2827_ = v___x_2824_;
v_isShared_2828_ = v_isSharedCheck_2862_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2824_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2862_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2829_; lean_object* v_traceState_2830_; lean_object* v_env_2831_; lean_object* v_nextMacroScope_2832_; lean_object* v_ngen_2833_; lean_object* v_auxDeclNGen_2834_; lean_object* v_cache_2835_; lean_object* v_messages_2836_; lean_object* v_infoState_2837_; lean_object* v_snapshotTasks_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2861_; 
v___x_2829_ = lean_st_ref_take(v___y_2807_);
v_traceState_2830_ = lean_ctor_get(v___x_2829_, 4);
v_env_2831_ = lean_ctor_get(v___x_2829_, 0);
v_nextMacroScope_2832_ = lean_ctor_get(v___x_2829_, 1);
v_ngen_2833_ = lean_ctor_get(v___x_2829_, 2);
v_auxDeclNGen_2834_ = lean_ctor_get(v___x_2829_, 3);
v_cache_2835_ = lean_ctor_get(v___x_2829_, 5);
v_messages_2836_ = lean_ctor_get(v___x_2829_, 6);
v_infoState_2837_ = lean_ctor_get(v___x_2829_, 7);
v_snapshotTasks_2838_ = lean_ctor_get(v___x_2829_, 8);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2840_ = v___x_2829_;
v_isShared_2841_ = v_isSharedCheck_2861_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_snapshotTasks_2838_);
lean_inc(v_infoState_2837_);
lean_inc(v_messages_2836_);
lean_inc(v_cache_2835_);
lean_inc(v_traceState_2830_);
lean_inc(v_auxDeclNGen_2834_);
lean_inc(v_ngen_2833_);
lean_inc(v_nextMacroScope_2832_);
lean_inc(v_env_2831_);
lean_dec(v___x_2829_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2861_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
uint64_t v_tid_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2859_; 
v_tid_2842_ = lean_ctor_get_uint64(v_traceState_2830_, sizeof(void*)*1);
v_isSharedCheck_2859_ = !lean_is_exclusive(v_traceState_2830_);
if (v_isSharedCheck_2859_ == 0)
{
lean_object* v_unused_2860_; 
v_unused_2860_ = lean_ctor_get(v_traceState_2830_, 0);
lean_dec(v_unused_2860_);
v___x_2844_ = v_traceState_2830_;
v_isShared_2845_ = v_isSharedCheck_2859_;
goto v_resetjp_2843_;
}
else
{
lean_dec(v_traceState_2830_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2859_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2846_ = lean_box(0);
v___x_2847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2847_, 0, v_ref_2804_);
lean_ctor_set(v___x_2847_, 1, v_a_2825_);
v___x_2848_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2802_, v___x_2847_);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v___x_2848_);
v___x_2850_ = v___x_2844_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2848_);
lean_ctor_set_uint64(v_reuseFailAlloc_2858_, sizeof(void*)*1, v_tid_2842_);
v___x_2850_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2852_; 
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 4, v___x_2850_);
v___x_2852_ = v___x_2840_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_env_2831_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_nextMacroScope_2832_);
lean_ctor_set(v_reuseFailAlloc_2857_, 2, v_ngen_2833_);
lean_ctor_set(v_reuseFailAlloc_2857_, 3, v_auxDeclNGen_2834_);
lean_ctor_set(v_reuseFailAlloc_2857_, 4, v___x_2850_);
lean_ctor_set(v_reuseFailAlloc_2857_, 5, v_cache_2835_);
lean_ctor_set(v_reuseFailAlloc_2857_, 6, v_messages_2836_);
lean_ctor_set(v_reuseFailAlloc_2857_, 7, v_infoState_2837_);
lean_ctor_set(v_reuseFailAlloc_2857_, 8, v_snapshotTasks_2838_);
v___x_2852_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
lean_object* v___x_2853_; lean_object* v___x_2855_; 
v___x_2853_ = lean_st_ref_put(v___y_2807_, v___x_2852_);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v___x_2846_);
v___x_2855_ = v___x_2827_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2846_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_oldTraces_2863_, lean_object* v_data_2864_, lean_object* v_ref_2865_, lean_object* v_msg_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(v_oldTraces_2863_, v_data_2864_, v_ref_2865_, v_msg_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
return v_res_2870_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1(void){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0));
v___x_2873_ = l_Lean_stringToMessageData(v___x_2872_);
return v___x_2873_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2(void){
_start:
{
lean_object* v___x_2874_; double v___x_2875_; 
v___x_2874_ = lean_unsigned_to_nat(1000u);
v___x_2875_ = lean_float_of_nat(v___x_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(lean_object* v_cls_2876_, uint8_t v_collapsed_2877_, lean_object* v_tag_2878_, lean_object* v_opts_2879_, uint8_t v_clsEnabled_2880_, lean_object* v_oldTraces_2881_, lean_object* v_msg_2882_, lean_object* v_resStartStop_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_fst_2887_; lean_object* v_snd_2888_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v_data_2892_; lean_object* v_fst_2903_; lean_object* v_snd_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; lean_object* v___y_2908_; lean_object* v_a_2909_; uint8_t v___y_2924_; double v___y_2955_; 
v_fst_2887_ = lean_ctor_get(v_resStartStop_2883_, 0);
lean_inc(v_fst_2887_);
v_snd_2888_ = lean_ctor_get(v_resStartStop_2883_, 1);
lean_inc(v_snd_2888_);
lean_dec_ref(v_resStartStop_2883_);
v_fst_2903_ = lean_ctor_get(v_snd_2888_, 0);
lean_inc(v_fst_2903_);
v_snd_2904_ = lean_ctor_get(v_snd_2888_, 1);
lean_inc(v_snd_2904_);
lean_dec(v_snd_2888_);
v___x_2905_ = l_Lean_trace_profiler;
v___x_2906_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_2879_, v___x_2905_);
if (v___x_2906_ == 0)
{
v___y_2924_ = v___x_2906_;
goto v___jp_2923_;
}
else
{
lean_object* v___x_2960_; uint8_t v___x_2961_; 
v___x_2960_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2961_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_2879_, v___x_2960_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; lean_object* v___x_2963_; double v___x_2964_; double v___x_2965_; double v___x_2966_; 
v___x_2962_ = l_Lean_trace_profiler_threshold;
v___x_2963_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v_opts_2879_, v___x_2962_);
v___x_2964_ = lean_float_of_nat(v___x_2963_);
v___x_2965_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2);
v___x_2966_ = lean_float_div(v___x_2964_, v___x_2965_);
v___y_2955_ = v___x_2966_;
goto v___jp_2954_;
}
else
{
lean_object* v___x_2967_; lean_object* v___x_2968_; double v___x_2969_; 
v___x_2967_ = l_Lean_trace_profiler_threshold;
v___x_2968_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v_opts_2879_, v___x_2967_);
v___x_2969_ = lean_float_of_nat(v___x_2968_);
v___y_2955_ = v___x_2969_;
goto v___jp_2954_;
}
}
v___jp_2889_:
{
lean_object* v___x_2893_; 
lean_inc(v___y_2891_);
v___x_2893_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(v_oldTraces_2881_, v_data_2892_, v___y_2891_, v___y_2890_, v___y_2884_, v___y_2885_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v___x_2894_; 
lean_dec_ref_known(v___x_2893_, 1);
v___x_2894_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_2887_);
return v___x_2894_;
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
lean_dec(v_fst_2887_);
v_a_2895_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2893_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2893_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2900_; 
if (v_isShared_2898_ == 0)
{
v___x_2900_ = v___x_2897_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2895_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
v___jp_2907_:
{
uint8_t v_result_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; double v___x_2913_; lean_object* v_data_2914_; 
v_result_2910_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(v_fst_2887_);
v___x_2911_ = lean_box(v_result_2910_);
v___x_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
v___x_2913_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0);
lean_inc_ref(v_tag_2878_);
lean_inc_ref(v___x_2912_);
lean_inc(v_cls_2876_);
v_data_2914_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2914_, 0, v_cls_2876_);
lean_ctor_set(v_data_2914_, 1, v___x_2912_);
lean_ctor_set(v_data_2914_, 2, v_tag_2878_);
lean_ctor_set_float(v_data_2914_, sizeof(void*)*3, v___x_2913_);
lean_ctor_set_float(v_data_2914_, sizeof(void*)*3 + 8, v___x_2913_);
lean_ctor_set_uint8(v_data_2914_, sizeof(void*)*3 + 16, v_collapsed_2877_);
if (v___x_2906_ == 0)
{
lean_dec_ref_known(v___x_2912_, 1);
lean_dec(v_snd_2904_);
lean_dec(v_fst_2903_);
lean_dec_ref(v_tag_2878_);
lean_dec(v_cls_2876_);
v___y_2890_ = v_a_2909_;
v___y_2891_ = v___y_2908_;
v_data_2892_ = v_data_2914_;
goto v___jp_2889_;
}
else
{
lean_object* v_data_2915_; double v___x_2916_; double v___x_2917_; 
lean_dec_ref_known(v_data_2914_, 3);
v_data_2915_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2915_, 0, v_cls_2876_);
lean_ctor_set(v_data_2915_, 1, v___x_2912_);
lean_ctor_set(v_data_2915_, 2, v_tag_2878_);
v___x_2916_ = lean_unbox_float(v_fst_2903_);
lean_dec(v_fst_2903_);
lean_ctor_set_float(v_data_2915_, sizeof(void*)*3, v___x_2916_);
v___x_2917_ = lean_unbox_float(v_snd_2904_);
lean_dec(v_snd_2904_);
lean_ctor_set_float(v_data_2915_, sizeof(void*)*3 + 8, v___x_2917_);
lean_ctor_set_uint8(v_data_2915_, sizeof(void*)*3 + 16, v_collapsed_2877_);
v___y_2890_ = v_a_2909_;
v___y_2891_ = v___y_2908_;
v_data_2892_ = v_data_2915_;
goto v___jp_2889_;
}
}
v___jp_2918_:
{
lean_object* v_ref_2919_; lean_object* v___x_2920_; 
v_ref_2919_ = lean_ctor_get(v___y_2884_, 2);
lean_inc(v___y_2885_);
lean_inc_ref(v___y_2884_);
lean_inc(v_fst_2887_);
v___x_2920_ = lean_apply_4(v_msg_2882_, v_fst_2887_, v___y_2884_, v___y_2885_, lean_box(0));
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; 
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_a_2921_);
lean_dec_ref_known(v___x_2920_, 1);
v___y_2908_ = v_ref_2919_;
v_a_2909_ = v_a_2921_;
goto v___jp_2907_;
}
else
{
lean_object* v___x_2922_; 
lean_dec_ref_known(v___x_2920_, 1);
v___x_2922_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1);
v___y_2908_ = v_ref_2919_;
v_a_2909_ = v___x_2922_;
goto v___jp_2907_;
}
}
v___jp_2923_:
{
if (v_clsEnabled_2880_ == 0)
{
if (v___y_2924_ == 0)
{
lean_object* v___x_2925_; lean_object* v_traceState_2926_; lean_object* v_env_2927_; lean_object* v_nextMacroScope_2928_; lean_object* v_ngen_2929_; lean_object* v_auxDeclNGen_2930_; lean_object* v_cache_2931_; lean_object* v_messages_2932_; lean_object* v_infoState_2933_; lean_object* v_snapshotTasks_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2953_; 
lean_dec(v_snd_2904_);
lean_dec(v_fst_2903_);
lean_dec_ref(v_msg_2882_);
lean_dec_ref(v_tag_2878_);
lean_dec(v_cls_2876_);
v___x_2925_ = lean_st_ref_take(v___y_2885_);
v_traceState_2926_ = lean_ctor_get(v___x_2925_, 4);
v_env_2927_ = lean_ctor_get(v___x_2925_, 0);
v_nextMacroScope_2928_ = lean_ctor_get(v___x_2925_, 1);
v_ngen_2929_ = lean_ctor_get(v___x_2925_, 2);
v_auxDeclNGen_2930_ = lean_ctor_get(v___x_2925_, 3);
v_cache_2931_ = lean_ctor_get(v___x_2925_, 5);
v_messages_2932_ = lean_ctor_get(v___x_2925_, 6);
v_infoState_2933_ = lean_ctor_get(v___x_2925_, 7);
v_snapshotTasks_2934_ = lean_ctor_get(v___x_2925_, 8);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2936_ = v___x_2925_;
v_isShared_2937_ = v_isSharedCheck_2953_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_snapshotTasks_2934_);
lean_inc(v_infoState_2933_);
lean_inc(v_messages_2932_);
lean_inc(v_cache_2931_);
lean_inc(v_traceState_2926_);
lean_inc(v_auxDeclNGen_2930_);
lean_inc(v_ngen_2929_);
lean_inc(v_nextMacroScope_2928_);
lean_inc(v_env_2927_);
lean_dec(v___x_2925_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2953_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
uint64_t v_tid_2938_; lean_object* v_traces_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2952_; 
v_tid_2938_ = lean_ctor_get_uint64(v_traceState_2926_, sizeof(void*)*1);
v_traces_2939_ = lean_ctor_get(v_traceState_2926_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v_traceState_2926_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2941_ = v_traceState_2926_;
v_isShared_2942_ = v_isSharedCheck_2952_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_traces_2939_);
lean_dec(v_traceState_2926_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2952_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2943_; lean_object* v___x_2945_; 
v___x_2943_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2881_, v_traces_2939_);
lean_dec_ref(v_traces_2939_);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 0, v___x_2943_);
v___x_2945_ = v___x_2941_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2943_);
lean_ctor_set_uint64(v_reuseFailAlloc_2951_, sizeof(void*)*1, v_tid_2938_);
v___x_2945_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2947_; 
if (v_isShared_2937_ == 0)
{
lean_ctor_set(v___x_2936_, 4, v___x_2945_);
v___x_2947_ = v___x_2936_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_env_2927_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v_nextMacroScope_2928_);
lean_ctor_set(v_reuseFailAlloc_2950_, 2, v_ngen_2929_);
lean_ctor_set(v_reuseFailAlloc_2950_, 3, v_auxDeclNGen_2930_);
lean_ctor_set(v_reuseFailAlloc_2950_, 4, v___x_2945_);
lean_ctor_set(v_reuseFailAlloc_2950_, 5, v_cache_2931_);
lean_ctor_set(v_reuseFailAlloc_2950_, 6, v_messages_2932_);
lean_ctor_set(v_reuseFailAlloc_2950_, 7, v_infoState_2933_);
lean_ctor_set(v_reuseFailAlloc_2950_, 8, v_snapshotTasks_2934_);
v___x_2947_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = lean_st_ref_put(v___y_2885_, v___x_2947_);
v___x_2949_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_2887_);
return v___x_2949_;
}
}
}
}
}
else
{
goto v___jp_2918_;
}
}
else
{
goto v___jp_2918_;
}
}
v___jp_2954_:
{
double v___x_2956_; double v___x_2957_; double v___x_2958_; uint8_t v___x_2959_; 
v___x_2956_ = lean_unbox_float(v_snd_2904_);
v___x_2957_ = lean_unbox_float(v_fst_2903_);
v___x_2958_ = lean_float_sub(v___x_2956_, v___x_2957_);
v___x_2959_ = lean_float_decLt(v___y_2955_, v___x_2958_);
v___y_2924_ = v___x_2959_;
goto v___jp_2923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___boxed(lean_object* v_cls_2970_, lean_object* v_collapsed_2971_, lean_object* v_tag_2972_, lean_object* v_opts_2973_, lean_object* v_clsEnabled_2974_, lean_object* v_oldTraces_2975_, lean_object* v_msg_2976_, lean_object* v_resStartStop_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
uint8_t v_collapsed_boxed_2981_; uint8_t v_clsEnabled_boxed_2982_; lean_object* v_res_2983_; 
v_collapsed_boxed_2981_ = lean_unbox(v_collapsed_2971_);
v_clsEnabled_boxed_2982_ = lean_unbox(v_clsEnabled_2974_);
v_res_2983_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v_cls_2970_, v_collapsed_boxed_2981_, v_tag_2972_, v_opts_2973_, v_clsEnabled_boxed_2982_, v_oldTraces_2975_, v_msg_2976_, v_resStartStop_2977_, v___y_2978_, v___y_2979_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec_ref(v_opts_2973_);
return v_res_2983_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2986_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_2987_ = lean_unsigned_to_nat(0u);
v___x_2988_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2987_);
lean_ctor_set(v___x_2988_, 1, v___x_2987_);
lean_ctor_set(v___x_2988_, 2, v___x_2987_);
lean_ctor_set(v___x_2988_, 3, v___x_2987_);
lean_ctor_set(v___x_2988_, 4, v___x_2986_);
lean_ctor_set(v___x_2988_, 5, v___x_2986_);
lean_ctor_set(v___x_2988_, 6, v___x_2986_);
lean_ctor_set(v___x_2988_, 7, v___x_2986_);
lean_ctor_set(v___x_2988_, 8, v___x_2986_);
lean_ctor_set(v___x_2988_, 9, v___x_2986_);
lean_ctor_set(v___x_2988_, 10, v___x_2986_);
return v___x_2988_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2989_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_2990_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
lean_ctor_set(v___x_2990_, 2, v___x_2989_);
lean_ctor_set(v___x_2990_, 3, v___x_2989_);
lean_ctor_set(v___x_2990_, 4, v___x_2989_);
lean_ctor_set(v___x_2990_, 5, v___x_2989_);
return v___x_2990_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_2992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
lean_ctor_set(v___x_2992_, 2, v___x_2991_);
lean_ctor_set(v___x_2992_, 3, v___x_2991_);
lean_ctor_set(v___x_2992_, 4, v___x_2991_);
return v___x_2992_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2993_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_2994_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_2995_ = lean_box(1);
v___x_2996_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_2997_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_2998_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2997_);
lean_ctor_set(v___x_2998_, 1, v___x_2996_);
lean_ctor_set(v___x_2998_, 2, v___x_2995_);
lean_ctor_set(v___x_2998_, 3, v___x_2994_);
lean_ctor_set(v___x_2998_, 4, v___x_2993_);
return v___x_2998_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3002_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3003_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_3004_ = l_Lean_Name_append(v___x_3003_, v___x_3002_);
return v___x_3004_;
}
}
static double _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3005_; double v___x_3006_; 
v___x_3005_ = lean_unsigned_to_nat(1000000000u);
v___x_3006_ = lean_float_of_nat(v___x_3005_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v___f_3007_, lean_object* v_name_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v_toCold_3012_; lean_object* v_options_3013_; uint8_t v_hasTrace_3014_; 
v_toCold_3012_ = lean_ctor_get(v___y_3009_, 0);
v_options_3013_ = lean_ctor_get(v_toCold_3012_, 2);
v_hasTrace_3014_ = lean_ctor_get_uint8(v_options_3013_, sizeof(void*)*1);
if (v_hasTrace_3014_ == 0)
{
lean_object* v___x_3015_; lean_object* v_env_3016_; lean_object* v___x_3017_; 
lean_dec_ref(v___f_3007_);
v___x_3015_ = lean_st_ref_get(v___y_3010_);
v_env_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc_ref(v_env_3016_);
lean_dec(v___x_3015_);
lean_inc(v_name_3008_);
v___x_3017_ = l_Lean_Meta_declFromEqLikeName(v_env_3016_, v_name_3008_);
if (lean_obj_tag(v___x_3017_) == 1)
{
lean_object* v_val_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3117_; 
v_val_3018_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3020_ = v___x_3017_;
v_isShared_3021_ = v_isSharedCheck_3117_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_val_3018_);
lean_dec(v___x_3017_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3117_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v_fst_3022_; lean_object* v_snd_3023_; lean_object* v___x_3024_; lean_object* v_env_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; 
v_fst_3022_ = lean_ctor_get(v_val_3018_, 0);
lean_inc_n(v_fst_3022_, 2);
v_snd_3023_ = lean_ctor_get(v_val_3018_, 1);
lean_inc_n(v_snd_3023_, 2);
lean_dec(v_val_3018_);
v___x_3024_ = lean_st_ref_get(v___y_3010_);
v_env_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc_ref(v_env_3025_);
lean_dec(v___x_3024_);
v___x_3026_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3025_, v_fst_3022_, v_snd_3023_);
v___x_3027_ = lean_name_eq(v_name_3008_, v___x_3026_);
lean_dec(v___x_3026_);
lean_dec(v_name_3008_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3030_; 
lean_dec(v_snd_3023_);
lean_dec(v_fst_3022_);
v___x_3028_ = lean_box(v_hasTrace_3014_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set_tag(v___x_3020_, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3028_);
v___x_3030_ = v___x_3020_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3028_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
else
{
uint8_t v___x_3032_; lean_object* v_a_3034_; 
lean_inc(v_snd_3023_);
v___x_3032_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3023_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3048_; uint8_t v___x_3049_; lean_object* v_a_3051_; 
lean_del_object(v___x_3020_);
v___x_3048_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3049_ = lean_string_dec_eq(v_snd_3023_, v___x_3048_);
lean_dec(v_snd_3023_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
lean_dec(v_fst_3022_);
v___x_3063_ = lean_box(v_hasTrace_3014_);
v___x_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
return v___x_3064_;
}
else
{
uint8_t v___x_3065_; uint8_t v___x_3066_; uint8_t v___x_3067_; lean_object* v___x_3068_; uint64_t v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3065_ = 1;
v___x_3066_ = 0;
v___x_3067_ = 2;
v___x_3068_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3068_, 0, v___x_3032_);
lean_ctor_set_uint8(v___x_3068_, 1, v___x_3032_);
lean_ctor_set_uint8(v___x_3068_, 2, v___x_3032_);
lean_ctor_set_uint8(v___x_3068_, 3, v___x_3032_);
lean_ctor_set_uint8(v___x_3068_, 4, v___x_3032_);
lean_ctor_set_uint8(v___x_3068_, 5, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 6, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 7, v___x_3032_);
lean_ctor_set_uint8(v___x_3068_, 8, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 9, v___x_3065_);
lean_ctor_set_uint8(v___x_3068_, 10, v___x_3066_);
lean_ctor_set_uint8(v___x_3068_, 11, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 12, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 13, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 14, v___x_3067_);
lean_ctor_set_uint8(v___x_3068_, 15, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 16, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 17, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 18, v___x_3049_);
lean_ctor_set_uint8(v___x_3068_, 19, v___x_3032_);
v___x_3069_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3068_);
v___x_3070_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3070_, 0, v___x_3068_);
lean_ctor_set_uint64(v___x_3070_, sizeof(void*)*1, v___x_3069_);
v___x_3071_ = lean_box(1);
v___x_3072_ = lean_unsigned_to_nat(0u);
v___x_3073_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3074_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3076_, 0, v___x_3070_);
lean_ctor_set(v___x_3076_, 1, v___x_3071_);
lean_ctor_set(v___x_3076_, 2, v___x_3073_);
lean_ctor_set(v___x_3076_, 3, v___x_3074_);
lean_ctor_set(v___x_3076_, 4, v___x_3075_);
lean_ctor_set(v___x_3076_, 5, v___x_3072_);
lean_ctor_set(v___x_3076_, 6, v___x_3075_);
lean_ctor_set_uint8(v___x_3076_, sizeof(void*)*7, v___x_3032_);
lean_ctor_set_uint8(v___x_3076_, sizeof(void*)*7 + 1, v___x_3032_);
lean_ctor_set_uint8(v___x_3076_, sizeof(void*)*7 + 2, v___x_3032_);
lean_ctor_set_uint8(v___x_3076_, sizeof(void*)*7 + 3, v___x_3027_);
v___x_3077_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3078_ = lean_st_mk_ref(v___x_3077_);
v___x_3079_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3022_, v___x_3027_, v___x_3076_, v___x_3078_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3076_, 7);
if (lean_obj_tag(v___x_3079_) == 0)
{
lean_object* v_a_3080_; lean_object* v___x_3081_; 
v_a_3080_ = lean_ctor_get(v___x_3079_, 0);
lean_inc(v_a_3080_);
lean_dec_ref_known(v___x_3079_, 1);
v___x_3081_ = lean_st_ref_get(v___x_3078_);
lean_dec(v___x_3078_);
lean_dec(v___x_3081_);
v_a_3051_ = v_a_3080_;
goto v___jp_3050_;
}
else
{
lean_dec(v___x_3078_);
if (lean_obj_tag(v___x_3079_) == 0)
{
lean_object* v_a_3082_; 
v_a_3082_ = lean_ctor_get(v___x_3079_, 0);
lean_inc(v_a_3082_);
lean_dec_ref_known(v___x_3079_, 1);
v_a_3051_ = v_a_3082_;
goto v___jp_3050_;
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
v_a_3083_ = lean_ctor_get(v___x_3079_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3079_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3079_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3079_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
}
v___jp_3050_:
{
if (lean_obj_tag(v_a_3051_) == 0)
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3052_ = lean_box(v___x_3032_);
v___x_3053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3052_);
return v___x_3053_;
}
else
{
lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3061_; 
v_isSharedCheck_3061_ = !lean_is_exclusive(v_a_3051_);
if (v_isSharedCheck_3061_ == 0)
{
lean_object* v_unused_3062_; 
v_unused_3062_ = lean_ctor_get(v_a_3051_, 0);
lean_dec(v_unused_3062_);
v___x_3055_ = v_a_3051_;
v_isShared_3056_ = v_isSharedCheck_3061_;
goto v_resetjp_3054_;
}
else
{
lean_dec(v_a_3051_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3061_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3057_; lean_object* v___x_3059_; 
v___x_3057_ = lean_box(v___x_3049_);
if (v_isShared_3056_ == 0)
{
lean_ctor_set_tag(v___x_3055_, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3057_);
v___x_3059_ = v___x_3055_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3057_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
}
else
{
uint8_t v___x_3091_; uint8_t v___x_3092_; uint8_t v___x_3093_; lean_object* v___x_3094_; uint64_t v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
lean_dec(v_snd_3023_);
v___x_3091_ = 1;
v___x_3092_ = 0;
v___x_3093_ = 2;
v___x_3094_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3094_, 0, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3094_, 1, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3094_, 2, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3094_, 3, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3094_, 4, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3094_, 5, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 6, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 7, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3094_, 8, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 9, v___x_3091_);
lean_ctor_set_uint8(v___x_3094_, 10, v___x_3092_);
lean_ctor_set_uint8(v___x_3094_, 11, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 12, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 13, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 14, v___x_3093_);
lean_ctor_set_uint8(v___x_3094_, 15, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 16, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 17, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 18, v___x_3032_);
lean_ctor_set_uint8(v___x_3094_, 19, v_hasTrace_3014_);
v___x_3095_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3094_);
v___x_3096_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3096_, 0, v___x_3094_);
lean_ctor_set_uint64(v___x_3096_, sizeof(void*)*1, v___x_3095_);
v___x_3097_ = lean_box(1);
v___x_3098_ = lean_unsigned_to_nat(0u);
v___x_3099_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3100_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3101_ = lean_box(0);
v___x_3102_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3102_, 0, v___x_3096_);
lean_ctor_set(v___x_3102_, 1, v___x_3097_);
lean_ctor_set(v___x_3102_, 2, v___x_3099_);
lean_ctor_set(v___x_3102_, 3, v___x_3100_);
lean_ctor_set(v___x_3102_, 4, v___x_3101_);
lean_ctor_set(v___x_3102_, 5, v___x_3098_);
lean_ctor_set(v___x_3102_, 6, v___x_3101_);
lean_ctor_set_uint8(v___x_3102_, sizeof(void*)*7, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3102_, sizeof(void*)*7 + 1, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3102_, sizeof(void*)*7 + 2, v_hasTrace_3014_);
lean_ctor_set_uint8(v___x_3102_, sizeof(void*)*7 + 3, v___x_3027_);
v___x_3103_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3104_ = lean_st_mk_ref(v___x_3103_);
v___x_3105_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3022_, v___x_3102_, v___x_3104_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3102_, 7);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3107_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3106_);
lean_dec_ref_known(v___x_3105_, 1);
v___x_3107_ = lean_st_ref_get(v___x_3104_);
lean_dec(v___x_3104_);
lean_dec(v___x_3107_);
v_a_3034_ = v_a_3106_;
goto v___jp_3033_;
}
else
{
lean_dec(v___x_3104_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3108_; 
v_a_3108_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3108_);
lean_dec_ref_known(v___x_3105_, 1);
v_a_3034_ = v_a_3108_;
goto v___jp_3033_;
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
lean_del_object(v___x_3020_);
v_a_3109_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3105_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3105_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
}
v___jp_3033_:
{
if (lean_obj_tag(v_a_3034_) == 0)
{
lean_object* v___x_3035_; lean_object* v___x_3037_; 
v___x_3035_ = lean_box(v_hasTrace_3014_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set_tag(v___x_3020_, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3035_);
v___x_3037_ = v___x_3020_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
else
{
lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3046_; 
lean_del_object(v___x_3020_);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_a_3034_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; 
v_unused_3047_ = lean_ctor_get(v_a_3034_, 0);
lean_dec(v_unused_3047_);
v___x_3040_ = v_a_3034_;
v_isShared_3041_ = v_isSharedCheck_3046_;
goto v_resetjp_3039_;
}
else
{
lean_dec(v_a_3034_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3046_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3042_; lean_object* v___x_3044_; 
v___x_3042_ = lean_box(v___x_3032_);
if (v_isShared_3041_ == 0)
{
lean_ctor_set_tag(v___x_3040_, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3042_);
v___x_3044_ = v___x_3040_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3042_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec(v___x_3017_);
lean_dec(v_name_3008_);
v___x_3118_ = lean_box(v_hasTrace_3014_);
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3120_; lean_object* v___f_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; uint8_t v___x_3125_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v_a_3129_; lean_object* v___y_3142_; lean_object* v___y_3143_; uint8_t v_a_3144_; uint8_t v___y_3148_; uint8_t v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v_a_3152_; uint8_t v___y_3154_; uint8_t v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v_a_3158_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v_a_3162_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v_a_3167_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v_a_3179_; lean_object* v___y_3182_; lean_object* v___y_3183_; uint8_t v_a_3184_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; uint8_t v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v_a_3198_; uint8_t v___y_3201_; uint8_t v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v_a_3205_; 
v_inheritedTraceOptions_3120_ = lean_ctor_get(v_toCold_3012_, 11);
lean_inc(v_name_3008_);
v___f_3121_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_3121_, 0, v_name_3008_);
v___x_3122_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3123_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1));
v___x_3124_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3125_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3120_, v_options_3013_, v___x_3124_);
if (v___x_3125_ == 0)
{
lean_object* v___x_3322_; uint8_t v___x_3323_; 
v___x_3322_ = l_Lean_trace_profiler;
v___x_3323_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_options_3013_, v___x_3322_);
if (v___x_3323_ == 0)
{
lean_object* v___x_3324_; lean_object* v_env_3325_; lean_object* v___x_3326_; 
lean_dec_ref(v___f_3121_);
lean_dec_ref(v___f_3007_);
v___x_3324_ = lean_st_ref_get(v___y_3010_);
v_env_3325_ = lean_ctor_get(v___x_3324_, 0);
lean_inc_ref(v_env_3325_);
lean_dec(v___x_3324_);
lean_inc(v_name_3008_);
v___x_3326_ = l_Lean_Meta_declFromEqLikeName(v_env_3325_, v_name_3008_);
if (lean_obj_tag(v___x_3326_) == 1)
{
lean_object* v_val_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3426_; 
v_val_3327_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3329_ = v___x_3326_;
v_isShared_3330_ = v_isSharedCheck_3426_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_val_3327_);
lean_dec(v___x_3326_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3426_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v_fst_3331_; lean_object* v_snd_3332_; lean_object* v___x_3333_; lean_object* v_env_3334_; lean_object* v___x_3335_; uint8_t v___x_3336_; 
v_fst_3331_ = lean_ctor_get(v_val_3327_, 0);
lean_inc_n(v_fst_3331_, 2);
v_snd_3332_ = lean_ctor_get(v_val_3327_, 1);
lean_inc_n(v_snd_3332_, 2);
lean_dec(v_val_3327_);
v___x_3333_ = lean_st_ref_get(v___y_3010_);
v_env_3334_ = lean_ctor_get(v___x_3333_, 0);
lean_inc_ref(v_env_3334_);
lean_dec(v___x_3333_);
v___x_3335_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3334_, v_fst_3331_, v_snd_3332_);
v___x_3336_ = lean_name_eq(v_name_3008_, v___x_3335_);
lean_dec(v___x_3335_);
lean_dec(v_name_3008_);
if (v___x_3336_ == 0)
{
lean_object* v___x_3337_; lean_object* v___x_3339_; 
lean_dec(v_snd_3332_);
lean_dec(v_fst_3331_);
v___x_3337_ = lean_box(v___x_3323_);
if (v_isShared_3330_ == 0)
{
lean_ctor_set_tag(v___x_3329_, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3337_);
v___x_3339_ = v___x_3329_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
else
{
uint8_t v___x_3341_; lean_object* v_a_3343_; 
lean_inc(v_snd_3332_);
v___x_3341_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3332_);
if (v___x_3341_ == 0)
{
lean_object* v___x_3357_; uint8_t v___x_3358_; lean_object* v_a_3360_; 
lean_del_object(v___x_3329_);
v___x_3357_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3358_ = lean_string_dec_eq(v_snd_3332_, v___x_3357_);
lean_dec(v_snd_3332_);
if (v___x_3358_ == 0)
{
lean_object* v___x_3372_; lean_object* v___x_3373_; 
lean_dec(v_fst_3331_);
v___x_3372_ = lean_box(v___x_3323_);
v___x_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
return v___x_3373_;
}
else
{
uint8_t v___x_3374_; uint8_t v___x_3375_; uint8_t v___x_3376_; lean_object* v___x_3377_; uint64_t v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3374_ = 1;
v___x_3375_ = 0;
v___x_3376_ = 2;
v___x_3377_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3377_, 0, v___x_3341_);
lean_ctor_set_uint8(v___x_3377_, 1, v___x_3341_);
lean_ctor_set_uint8(v___x_3377_, 2, v___x_3341_);
lean_ctor_set_uint8(v___x_3377_, 3, v___x_3341_);
lean_ctor_set_uint8(v___x_3377_, 4, v___x_3341_);
lean_ctor_set_uint8(v___x_3377_, 5, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 6, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 7, v___x_3341_);
lean_ctor_set_uint8(v___x_3377_, 8, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 9, v___x_3374_);
lean_ctor_set_uint8(v___x_3377_, 10, v___x_3375_);
lean_ctor_set_uint8(v___x_3377_, 11, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 12, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 13, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 14, v___x_3376_);
lean_ctor_set_uint8(v___x_3377_, 15, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 16, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 17, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 18, v___x_3358_);
lean_ctor_set_uint8(v___x_3377_, 19, v___x_3341_);
v___x_3378_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3377_);
v___x_3379_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3379_, 0, v___x_3377_);
lean_ctor_set_uint64(v___x_3379_, sizeof(void*)*1, v___x_3378_);
v___x_3380_ = lean_box(1);
v___x_3381_ = lean_unsigned_to_nat(0u);
v___x_3382_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3383_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3384_ = lean_box(0);
v___x_3385_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3385_, 0, v___x_3379_);
lean_ctor_set(v___x_3385_, 1, v___x_3380_);
lean_ctor_set(v___x_3385_, 2, v___x_3382_);
lean_ctor_set(v___x_3385_, 3, v___x_3383_);
lean_ctor_set(v___x_3385_, 4, v___x_3384_);
lean_ctor_set(v___x_3385_, 5, v___x_3381_);
lean_ctor_set(v___x_3385_, 6, v___x_3384_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7, v___x_3341_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7 + 1, v___x_3341_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7 + 2, v___x_3341_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7 + 3, v_hasTrace_3014_);
v___x_3386_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3387_ = lean_st_mk_ref(v___x_3386_);
v___x_3388_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3331_, v_hasTrace_3014_, v___x_3385_, v___x_3387_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3385_, 7);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3390_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v___x_3388_, 1);
v___x_3390_ = lean_st_ref_get(v___x_3387_);
lean_dec(v___x_3387_);
lean_dec(v___x_3390_);
v_a_3360_ = v_a_3389_;
goto v___jp_3359_;
}
else
{
lean_dec(v___x_3387_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3391_; 
v_a_3391_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3388_, 1);
v_a_3360_ = v_a_3391_;
goto v___jp_3359_;
}
else
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3399_; 
v_a_3392_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3394_ = v___x_3388_;
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3388_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3392_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
}
v___jp_3359_:
{
if (lean_obj_tag(v_a_3360_) == 0)
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = lean_box(v___x_3341_);
v___x_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
return v___x_3362_;
}
else
{
lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3370_; 
v_isSharedCheck_3370_ = !lean_is_exclusive(v_a_3360_);
if (v_isSharedCheck_3370_ == 0)
{
lean_object* v_unused_3371_; 
v_unused_3371_ = lean_ctor_get(v_a_3360_, 0);
lean_dec(v_unused_3371_);
v___x_3364_ = v_a_3360_;
v_isShared_3365_ = v_isSharedCheck_3370_;
goto v_resetjp_3363_;
}
else
{
lean_dec(v_a_3360_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3370_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3366_; lean_object* v___x_3368_; 
v___x_3366_ = lean_box(v___x_3358_);
if (v_isShared_3365_ == 0)
{
lean_ctor_set_tag(v___x_3364_, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3366_);
v___x_3368_ = v___x_3364_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v___x_3366_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
}
}
}
else
{
uint8_t v___x_3400_; uint8_t v___x_3401_; uint8_t v___x_3402_; lean_object* v___x_3403_; uint64_t v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
lean_dec(v_snd_3332_);
v___x_3400_ = 1;
v___x_3401_ = 0;
v___x_3402_ = 2;
v___x_3403_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3403_, 0, v___x_3323_);
lean_ctor_set_uint8(v___x_3403_, 1, v___x_3323_);
lean_ctor_set_uint8(v___x_3403_, 2, v___x_3323_);
lean_ctor_set_uint8(v___x_3403_, 3, v___x_3323_);
lean_ctor_set_uint8(v___x_3403_, 4, v___x_3323_);
lean_ctor_set_uint8(v___x_3403_, 5, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 6, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 7, v___x_3323_);
lean_ctor_set_uint8(v___x_3403_, 8, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 9, v___x_3400_);
lean_ctor_set_uint8(v___x_3403_, 10, v___x_3401_);
lean_ctor_set_uint8(v___x_3403_, 11, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 12, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 13, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 14, v___x_3402_);
lean_ctor_set_uint8(v___x_3403_, 15, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 16, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 17, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 18, v___x_3341_);
lean_ctor_set_uint8(v___x_3403_, 19, v___x_3323_);
v___x_3404_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3403_);
v___x_3405_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3405_, 0, v___x_3403_);
lean_ctor_set_uint64(v___x_3405_, sizeof(void*)*1, v___x_3404_);
v___x_3406_ = lean_box(1);
v___x_3407_ = lean_unsigned_to_nat(0u);
v___x_3408_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3409_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3410_ = lean_box(0);
v___x_3411_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3411_, 0, v___x_3405_);
lean_ctor_set(v___x_3411_, 1, v___x_3406_);
lean_ctor_set(v___x_3411_, 2, v___x_3408_);
lean_ctor_set(v___x_3411_, 3, v___x_3409_);
lean_ctor_set(v___x_3411_, 4, v___x_3410_);
lean_ctor_set(v___x_3411_, 5, v___x_3407_);
lean_ctor_set(v___x_3411_, 6, v___x_3410_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7, v___x_3323_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7 + 1, v___x_3323_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7 + 2, v___x_3323_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7 + 3, v_hasTrace_3014_);
v___x_3412_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3413_ = lean_st_mk_ref(v___x_3412_);
v___x_3414_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3331_, v___x_3411_, v___x_3413_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3411_, 7);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v___x_3416_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3414_, 1);
v___x_3416_ = lean_st_ref_get(v___x_3413_);
lean_dec(v___x_3413_);
lean_dec(v___x_3416_);
v_a_3343_ = v_a_3415_;
goto v___jp_3342_;
}
else
{
lean_dec(v___x_3413_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3417_; 
v_a_3417_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3414_, 1);
v_a_3343_ = v_a_3417_;
goto v___jp_3342_;
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3425_; 
lean_del_object(v___x_3329_);
v_a_3418_ = lean_ctor_get(v___x_3414_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3420_ = v___x_3414_;
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3414_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3423_; 
if (v_isShared_3421_ == 0)
{
v___x_3423_ = v___x_3420_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_a_3418_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
return v___x_3423_;
}
}
}
}
}
v___jp_3342_:
{
if (lean_obj_tag(v_a_3343_) == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3346_; 
v___x_3344_ = lean_box(v___x_3323_);
if (v_isShared_3330_ == 0)
{
lean_ctor_set_tag(v___x_3329_, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3344_);
v___x_3346_ = v___x_3329_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
else
{
lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3355_; 
lean_del_object(v___x_3329_);
v_isSharedCheck_3355_ = !lean_is_exclusive(v_a_3343_);
if (v_isSharedCheck_3355_ == 0)
{
lean_object* v_unused_3356_; 
v_unused_3356_ = lean_ctor_get(v_a_3343_, 0);
lean_dec(v_unused_3356_);
v___x_3349_ = v_a_3343_;
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
else
{
lean_dec(v_a_3343_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3355_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3353_; 
v___x_3351_ = lean_box(v___x_3341_);
if (v_isShared_3350_ == 0)
{
lean_ctor_set_tag(v___x_3349_, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3351_);
v___x_3353_ = v___x_3349_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3427_; lean_object* v___x_3428_; 
lean_dec(v___x_3326_);
lean_dec(v_name_3008_);
v___x_3427_ = lean_box(v___x_3323_);
v___x_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
return v___x_3428_;
}
}
else
{
goto v___jp_3206_;
}
}
else
{
goto v___jp_3206_;
}
v___jp_3126_:
{
lean_object* v___x_3130_; double v___x_3131_; double v___x_3132_; double v___x_3133_; double v___x_3134_; double v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3130_ = lean_io_mono_nanos_now();
v___x_3131_ = lean_float_of_nat(v___y_3128_);
v___x_3132_ = lean_float_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3133_ = lean_float_div(v___x_3131_, v___x_3132_);
v___x_3134_ = lean_float_of_nat(v___x_3130_);
v___x_3135_ = lean_float_div(v___x_3134_, v___x_3132_);
v___x_3136_ = lean_box_float(v___x_3133_);
v___x_3137_ = lean_box_float(v___x_3135_);
v___x_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3136_);
lean_ctor_set(v___x_3138_, 1, v___x_3137_);
v___x_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3139_, 0, v_a_3129_);
lean_ctor_set(v___x_3139_, 1, v___x_3138_);
v___x_3140_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v___x_3122_, v_hasTrace_3014_, v___x_3123_, v_options_3013_, v___x_3125_, v___y_3127_, v___f_3121_, v___x_3139_, v___y_3009_, v___y_3010_);
return v___x_3140_;
}
v___jp_3141_:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3145_ = lean_box(v_a_3144_);
v___x_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
v___y_3127_ = v___y_3143_;
v___y_3128_ = v___y_3142_;
v_a_3129_ = v___x_3146_;
goto v___jp_3126_;
}
v___jp_3147_:
{
if (lean_obj_tag(v_a_3152_) == 0)
{
v___y_3142_ = v___y_3151_;
v___y_3143_ = v___y_3150_;
v_a_3144_ = v___y_3149_;
goto v___jp_3141_;
}
else
{
lean_dec_ref_known(v_a_3152_, 1);
v___y_3142_ = v___y_3151_;
v___y_3143_ = v___y_3150_;
v_a_3144_ = v___y_3148_;
goto v___jp_3141_;
}
}
v___jp_3153_:
{
if (lean_obj_tag(v_a_3158_) == 0)
{
v___y_3142_ = v___y_3157_;
v___y_3143_ = v___y_3156_;
v_a_3144_ = v___y_3154_;
goto v___jp_3141_;
}
else
{
lean_dec_ref_known(v_a_3158_, 1);
v___y_3142_ = v___y_3157_;
v___y_3143_ = v___y_3156_;
v_a_3144_ = v___y_3155_;
goto v___jp_3141_;
}
}
v___jp_3159_:
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v_a_3162_);
v___y_3127_ = v___y_3161_;
v___y_3128_ = v___y_3160_;
v_a_3129_ = v___x_3163_;
goto v___jp_3126_;
}
v___jp_3164_:
{
lean_object* v___x_3168_; double v___x_3169_; double v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3168_ = lean_io_get_num_heartbeats();
v___x_3169_ = lean_float_of_nat(v___y_3165_);
v___x_3170_ = lean_float_of_nat(v___x_3168_);
v___x_3171_ = lean_box_float(v___x_3169_);
v___x_3172_ = lean_box_float(v___x_3170_);
v___x_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3171_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v_a_3167_);
lean_ctor_set(v___x_3174_, 1, v___x_3173_);
v___x_3175_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v___x_3122_, v_hasTrace_3014_, v___x_3123_, v_options_3013_, v___x_3125_, v___y_3166_, v___f_3121_, v___x_3174_, v___y_3009_, v___y_3010_);
return v___x_3175_;
}
v___jp_3176_:
{
lean_object* v___x_3180_; 
v___x_3180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3180_, 0, v_a_3179_);
v___y_3165_ = v___y_3177_;
v___y_3166_ = v___y_3178_;
v_a_3167_ = v___x_3180_;
goto v___jp_3164_;
}
v___jp_3181_:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = lean_box(v_a_3184_);
v___x_3186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
v___y_3165_ = v___y_3182_;
v___y_3166_ = v___y_3183_;
v_a_3167_ = v___x_3186_;
goto v___jp_3164_;
}
v___jp_3187_:
{
if (lean_obj_tag(v___y_3190_) == 0)
{
lean_object* v_a_3191_; uint8_t v___x_3192_; 
v_a_3191_ = lean_ctor_get(v___y_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___y_3190_, 1);
v___x_3192_ = lean_unbox(v_a_3191_);
lean_dec(v_a_3191_);
v___y_3182_ = v___y_3188_;
v___y_3183_ = v___y_3189_;
v_a_3184_ = v___x_3192_;
goto v___jp_3181_;
}
else
{
lean_object* v_a_3193_; 
v_a_3193_ = lean_ctor_get(v___y_3190_, 0);
lean_inc(v_a_3193_);
lean_dec_ref_known(v___y_3190_, 1);
v___y_3177_ = v___y_3188_;
v___y_3178_ = v___y_3189_;
v_a_3179_ = v_a_3193_;
goto v___jp_3176_;
}
}
v___jp_3194_:
{
if (lean_obj_tag(v_a_3198_) == 0)
{
uint8_t v___x_3199_; 
v___x_3199_ = 0;
v___y_3182_ = v___y_3196_;
v___y_3183_ = v___y_3197_;
v_a_3184_ = v___x_3199_;
goto v___jp_3181_;
}
else
{
lean_dec_ref_known(v_a_3198_, 1);
v___y_3182_ = v___y_3196_;
v___y_3183_ = v___y_3197_;
v_a_3184_ = v___y_3195_;
goto v___jp_3181_;
}
}
v___jp_3200_:
{
if (lean_obj_tag(v_a_3205_) == 0)
{
v___y_3182_ = v___y_3203_;
v___y_3183_ = v___y_3204_;
v_a_3184_ = v___y_3202_;
goto v___jp_3181_;
}
else
{
lean_dec_ref_known(v_a_3205_, 1);
v___y_3182_ = v___y_3203_;
v___y_3183_ = v___y_3204_;
v_a_3184_ = v___y_3201_;
goto v___jp_3181_;
}
}
v___jp_3206_:
{
lean_object* v___x_3207_; lean_object* v_a_3208_; lean_object* v___x_3209_; uint8_t v___x_3210_; 
v___x_3207_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_3010_);
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref(v___x_3207_);
v___x_3209_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3210_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_options_3013_, v___x_3209_);
if (v___x_3210_ == 0)
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v_env_3213_; lean_object* v___x_3214_; 
lean_dec_ref(v___f_3007_);
v___x_3211_ = lean_io_mono_nanos_now();
v___x_3212_ = lean_st_ref_get(v___y_3010_);
v_env_3213_ = lean_ctor_get(v___x_3212_, 0);
lean_inc_ref(v_env_3213_);
lean_dec(v___x_3212_);
lean_inc(v_name_3008_);
v___x_3214_ = l_Lean_Meta_declFromEqLikeName(v_env_3213_, v_name_3008_);
if (lean_obj_tag(v___x_3214_) == 1)
{
lean_object* v_val_3215_; lean_object* v_fst_3216_; lean_object* v_snd_3217_; lean_object* v___x_3218_; lean_object* v_env_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; 
v_val_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_val_3215_);
lean_dec_ref_known(v___x_3214_, 1);
v_fst_3216_ = lean_ctor_get(v_val_3215_, 0);
lean_inc_n(v_fst_3216_, 2);
v_snd_3217_ = lean_ctor_get(v_val_3215_, 1);
lean_inc_n(v_snd_3217_, 2);
lean_dec(v_val_3215_);
v___x_3218_ = lean_st_ref_get(v___y_3010_);
v_env_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc_ref(v_env_3219_);
lean_dec(v___x_3218_);
v___x_3220_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3219_, v_fst_3216_, v_snd_3217_);
v___x_3221_ = lean_name_eq(v_name_3008_, v___x_3220_);
lean_dec(v___x_3220_);
lean_dec(v_name_3008_);
if (v___x_3221_ == 0)
{
lean_dec(v_snd_3217_);
lean_dec(v_fst_3216_);
v___y_3142_ = v___x_3211_;
v___y_3143_ = v_a_3208_;
v_a_3144_ = v___x_3210_;
goto v___jp_3141_;
}
else
{
uint8_t v___x_3222_; 
lean_inc(v_snd_3217_);
v___x_3222_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3217_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; uint8_t v___x_3224_; 
v___x_3223_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3224_ = lean_string_dec_eq(v_snd_3217_, v___x_3223_);
lean_dec(v_snd_3217_);
if (v___x_3224_ == 0)
{
lean_dec(v_fst_3216_);
v___y_3142_ = v___x_3211_;
v___y_3143_ = v_a_3208_;
v_a_3144_ = v___x_3210_;
goto v___jp_3141_;
}
else
{
uint8_t v___x_3225_; uint8_t v___x_3226_; uint8_t v___x_3227_; lean_object* v___x_3228_; uint64_t v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3225_ = 1;
v___x_3226_ = 0;
v___x_3227_ = 2;
v___x_3228_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3228_, 0, v___x_3222_);
lean_ctor_set_uint8(v___x_3228_, 1, v___x_3222_);
lean_ctor_set_uint8(v___x_3228_, 2, v___x_3222_);
lean_ctor_set_uint8(v___x_3228_, 3, v___x_3222_);
lean_ctor_set_uint8(v___x_3228_, 4, v___x_3222_);
lean_ctor_set_uint8(v___x_3228_, 5, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 6, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 7, v___x_3222_);
lean_ctor_set_uint8(v___x_3228_, 8, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 9, v___x_3225_);
lean_ctor_set_uint8(v___x_3228_, 10, v___x_3226_);
lean_ctor_set_uint8(v___x_3228_, 11, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 12, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 13, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 14, v___x_3227_);
lean_ctor_set_uint8(v___x_3228_, 15, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 16, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 17, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 18, v___x_3224_);
lean_ctor_set_uint8(v___x_3228_, 19, v___x_3222_);
v___x_3229_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3228_);
v___x_3230_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3230_, 0, v___x_3228_);
lean_ctor_set_uint64(v___x_3230_, sizeof(void*)*1, v___x_3229_);
v___x_3231_ = lean_box(1);
v___x_3232_ = lean_unsigned_to_nat(0u);
v___x_3233_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3234_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3235_ = lean_box(0);
v___x_3236_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3236_, 0, v___x_3230_);
lean_ctor_set(v___x_3236_, 1, v___x_3231_);
lean_ctor_set(v___x_3236_, 2, v___x_3233_);
lean_ctor_set(v___x_3236_, 3, v___x_3234_);
lean_ctor_set(v___x_3236_, 4, v___x_3235_);
lean_ctor_set(v___x_3236_, 5, v___x_3232_);
lean_ctor_set(v___x_3236_, 6, v___x_3235_);
lean_ctor_set_uint8(v___x_3236_, sizeof(void*)*7, v___x_3222_);
lean_ctor_set_uint8(v___x_3236_, sizeof(void*)*7 + 1, v___x_3222_);
lean_ctor_set_uint8(v___x_3236_, sizeof(void*)*7 + 2, v___x_3222_);
lean_ctor_set_uint8(v___x_3236_, sizeof(void*)*7 + 3, v_hasTrace_3014_);
v___x_3237_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3238_ = lean_st_mk_ref(v___x_3237_);
v___x_3239_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3216_, v_hasTrace_3014_, v___x_3236_, v___x_3238_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3236_, 7);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v___x_3241_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v___x_3241_ = lean_st_ref_get(v___x_3238_);
lean_dec(v___x_3238_);
lean_dec(v___x_3241_);
v___y_3148_ = v___x_3224_;
v___y_3149_ = v___x_3222_;
v___y_3150_ = v_a_3208_;
v___y_3151_ = v___x_3211_;
v_a_3152_ = v_a_3240_;
goto v___jp_3147_;
}
else
{
lean_dec(v___x_3238_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3242_; 
v_a_3242_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v___x_3239_, 1);
v___y_3148_ = v___x_3224_;
v___y_3149_ = v___x_3222_;
v___y_3150_ = v_a_3208_;
v___y_3151_ = v___x_3211_;
v_a_3152_ = v_a_3242_;
goto v___jp_3147_;
}
else
{
lean_object* v_a_3243_; 
v_a_3243_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3243_);
lean_dec_ref_known(v___x_3239_, 1);
v___y_3160_ = v___x_3211_;
v___y_3161_ = v_a_3208_;
v_a_3162_ = v_a_3243_;
goto v___jp_3159_;
}
}
}
}
else
{
uint8_t v___x_3244_; uint8_t v___x_3245_; uint8_t v___x_3246_; lean_object* v___x_3247_; uint64_t v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
lean_dec(v_snd_3217_);
v___x_3244_ = 1;
v___x_3245_ = 0;
v___x_3246_ = 2;
v___x_3247_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3247_, 0, v___x_3210_);
lean_ctor_set_uint8(v___x_3247_, 1, v___x_3210_);
lean_ctor_set_uint8(v___x_3247_, 2, v___x_3210_);
lean_ctor_set_uint8(v___x_3247_, 3, v___x_3210_);
lean_ctor_set_uint8(v___x_3247_, 4, v___x_3210_);
lean_ctor_set_uint8(v___x_3247_, 5, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 6, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 7, v___x_3210_);
lean_ctor_set_uint8(v___x_3247_, 8, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 9, v___x_3244_);
lean_ctor_set_uint8(v___x_3247_, 10, v___x_3245_);
lean_ctor_set_uint8(v___x_3247_, 11, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 12, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 13, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 14, v___x_3246_);
lean_ctor_set_uint8(v___x_3247_, 15, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 16, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 17, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 18, v___x_3222_);
lean_ctor_set_uint8(v___x_3247_, 19, v___x_3210_);
v___x_3248_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3247_);
v___x_3249_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3249_, 0, v___x_3247_);
lean_ctor_set_uint64(v___x_3249_, sizeof(void*)*1, v___x_3248_);
v___x_3250_ = lean_box(1);
v___x_3251_ = lean_unsigned_to_nat(0u);
v___x_3252_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3253_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3254_ = lean_box(0);
v___x_3255_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3255_, 0, v___x_3249_);
lean_ctor_set(v___x_3255_, 1, v___x_3250_);
lean_ctor_set(v___x_3255_, 2, v___x_3252_);
lean_ctor_set(v___x_3255_, 3, v___x_3253_);
lean_ctor_set(v___x_3255_, 4, v___x_3254_);
lean_ctor_set(v___x_3255_, 5, v___x_3251_);
lean_ctor_set(v___x_3255_, 6, v___x_3254_);
lean_ctor_set_uint8(v___x_3255_, sizeof(void*)*7, v___x_3210_);
lean_ctor_set_uint8(v___x_3255_, sizeof(void*)*7 + 1, v___x_3210_);
lean_ctor_set_uint8(v___x_3255_, sizeof(void*)*7 + 2, v___x_3210_);
lean_ctor_set_uint8(v___x_3255_, sizeof(void*)*7 + 3, v_hasTrace_3014_);
v___x_3256_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3257_ = lean_st_mk_ref(v___x_3256_);
v___x_3258_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3216_, v___x_3255_, v___x_3257_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3255_, 7);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3260_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3259_);
lean_dec_ref_known(v___x_3258_, 1);
v___x_3260_ = lean_st_ref_get(v___x_3257_);
lean_dec(v___x_3257_);
lean_dec(v___x_3260_);
v___y_3154_ = v___x_3210_;
v___y_3155_ = v___x_3222_;
v___y_3156_ = v_a_3208_;
v___y_3157_ = v___x_3211_;
v_a_3158_ = v_a_3259_;
goto v___jp_3153_;
}
else
{
lean_dec(v___x_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3261_; 
v_a_3261_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3261_);
lean_dec_ref_known(v___x_3258_, 1);
v___y_3154_ = v___x_3210_;
v___y_3155_ = v___x_3222_;
v___y_3156_ = v_a_3208_;
v___y_3157_ = v___x_3211_;
v_a_3158_ = v_a_3261_;
goto v___jp_3153_;
}
else
{
lean_object* v_a_3262_; 
v_a_3262_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3258_, 1);
v___y_3160_ = v___x_3211_;
v___y_3161_ = v_a_3208_;
v_a_3162_ = v_a_3262_;
goto v___jp_3159_;
}
}
}
}
}
else
{
lean_dec(v___x_3214_);
lean_dec(v_name_3008_);
v___y_3142_ = v___x_3211_;
v___y_3143_ = v_a_3208_;
v_a_3144_ = v___x_3210_;
goto v___jp_3141_;
}
}
else
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v_env_3265_; lean_object* v___x_3266_; 
v___x_3263_ = lean_io_get_num_heartbeats();
v___x_3264_ = lean_st_ref_get(v___y_3010_);
v_env_3265_ = lean_ctor_get(v___x_3264_, 0);
lean_inc_ref(v_env_3265_);
lean_dec(v___x_3264_);
lean_inc(v_name_3008_);
v___x_3266_ = l_Lean_Meta_declFromEqLikeName(v_env_3265_, v_name_3008_);
if (lean_obj_tag(v___x_3266_) == 1)
{
lean_object* v_val_3267_; lean_object* v_fst_3268_; lean_object* v_snd_3269_; lean_object* v___x_3270_; lean_object* v_env_3271_; lean_object* v___x_3272_; uint8_t v___x_3273_; 
v_val_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_val_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v_fst_3268_ = lean_ctor_get(v_val_3267_, 0);
lean_inc_n(v_fst_3268_, 2);
v_snd_3269_ = lean_ctor_get(v_val_3267_, 1);
lean_inc_n(v_snd_3269_, 2);
lean_dec(v_val_3267_);
v___x_3270_ = lean_st_ref_get(v___y_3010_);
v_env_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc_ref(v_env_3271_);
lean_dec(v___x_3270_);
v___x_3272_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3271_, v_fst_3268_, v_snd_3269_);
v___x_3273_ = lean_name_eq(v_name_3008_, v___x_3272_);
lean_dec(v___x_3272_);
lean_dec(v_name_3008_);
if (v___x_3273_ == 0)
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec(v_snd_3269_);
lean_dec(v_fst_3268_);
v___x_3274_ = lean_box(0);
lean_inc(v___y_3010_);
lean_inc_ref(v___y_3009_);
v___x_3275_ = lean_apply_4(v___f_3007_, v___x_3274_, v___y_3009_, v___y_3010_, lean_box(0));
v___y_3188_ = v___x_3263_;
v___y_3189_ = v_a_3208_;
v___y_3190_ = v___x_3275_;
goto v___jp_3187_;
}
else
{
uint8_t v___x_3276_; 
lean_inc(v_snd_3269_);
v___x_3276_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3269_);
if (v___x_3276_ == 0)
{
lean_object* v___x_3277_; uint8_t v___x_3278_; 
v___x_3277_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3278_ = lean_string_dec_eq(v_snd_3269_, v___x_3277_);
lean_dec(v_snd_3269_);
if (v___x_3278_ == 0)
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
lean_dec(v_fst_3268_);
v___x_3279_ = lean_box(0);
lean_inc(v___y_3010_);
lean_inc_ref(v___y_3009_);
v___x_3280_ = lean_apply_4(v___f_3007_, v___x_3279_, v___y_3009_, v___y_3010_, lean_box(0));
v___y_3188_ = v___x_3263_;
v___y_3189_ = v_a_3208_;
v___y_3190_ = v___x_3280_;
goto v___jp_3187_;
}
else
{
uint8_t v___x_3281_; uint8_t v___x_3282_; uint8_t v___x_3283_; lean_object* v___x_3284_; uint64_t v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
lean_dec_ref(v___f_3007_);
v___x_3281_ = 1;
v___x_3282_ = 0;
v___x_3283_ = 2;
v___x_3284_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3284_, 0, v___x_3276_);
lean_ctor_set_uint8(v___x_3284_, 1, v___x_3276_);
lean_ctor_set_uint8(v___x_3284_, 2, v___x_3276_);
lean_ctor_set_uint8(v___x_3284_, 3, v___x_3276_);
lean_ctor_set_uint8(v___x_3284_, 4, v___x_3276_);
lean_ctor_set_uint8(v___x_3284_, 5, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 6, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 7, v___x_3276_);
lean_ctor_set_uint8(v___x_3284_, 8, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 9, v___x_3281_);
lean_ctor_set_uint8(v___x_3284_, 10, v___x_3282_);
lean_ctor_set_uint8(v___x_3284_, 11, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 12, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 13, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 14, v___x_3283_);
lean_ctor_set_uint8(v___x_3284_, 15, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 16, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 17, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 18, v___x_3278_);
lean_ctor_set_uint8(v___x_3284_, 19, v___x_3276_);
v___x_3285_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3284_);
v___x_3286_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set_uint64(v___x_3286_, sizeof(void*)*1, v___x_3285_);
v___x_3287_ = lean_box(1);
v___x_3288_ = lean_unsigned_to_nat(0u);
v___x_3289_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3290_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3291_ = lean_box(0);
v___x_3292_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3292_, 0, v___x_3286_);
lean_ctor_set(v___x_3292_, 1, v___x_3287_);
lean_ctor_set(v___x_3292_, 2, v___x_3289_);
lean_ctor_set(v___x_3292_, 3, v___x_3290_);
lean_ctor_set(v___x_3292_, 4, v___x_3291_);
lean_ctor_set(v___x_3292_, 5, v___x_3288_);
lean_ctor_set(v___x_3292_, 6, v___x_3291_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*7, v___x_3276_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*7 + 1, v___x_3276_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*7 + 2, v___x_3276_);
lean_ctor_set_uint8(v___x_3292_, sizeof(void*)*7 + 3, v___x_3210_);
v___x_3293_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3294_ = lean_st_mk_ref(v___x_3293_);
v___x_3295_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3268_, v___x_3210_, v___x_3292_, v___x_3294_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3292_, 7);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3296_; lean_object* v___x_3297_; 
v_a_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v___x_3297_ = lean_st_ref_get(v___x_3294_);
lean_dec(v___x_3294_);
lean_dec(v___x_3297_);
v___y_3201_ = v___x_3278_;
v___y_3202_ = v___x_3276_;
v___y_3203_ = v___x_3263_;
v___y_3204_ = v_a_3208_;
v_a_3205_ = v_a_3296_;
goto v___jp_3200_;
}
else
{
lean_dec(v___x_3294_);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3298_; 
v_a_3298_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3295_, 1);
v___y_3201_ = v___x_3278_;
v___y_3202_ = v___x_3276_;
v___y_3203_ = v___x_3263_;
v___y_3204_ = v_a_3208_;
v_a_3205_ = v_a_3298_;
goto v___jp_3200_;
}
else
{
lean_object* v_a_3299_; 
v_a_3299_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3295_, 1);
v___y_3177_ = v___x_3263_;
v___y_3178_ = v_a_3208_;
v_a_3179_ = v_a_3299_;
goto v___jp_3176_;
}
}
}
}
else
{
uint8_t v___x_3300_; uint8_t v___x_3301_; uint8_t v___x_3302_; uint8_t v___x_3303_; lean_object* v___x_3304_; uint64_t v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
lean_dec(v_snd_3269_);
lean_dec_ref(v___f_3007_);
v___x_3300_ = 0;
v___x_3301_ = 1;
v___x_3302_ = 0;
v___x_3303_ = 2;
v___x_3304_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3304_, 0, v___x_3300_);
lean_ctor_set_uint8(v___x_3304_, 1, v___x_3300_);
lean_ctor_set_uint8(v___x_3304_, 2, v___x_3300_);
lean_ctor_set_uint8(v___x_3304_, 3, v___x_3300_);
lean_ctor_set_uint8(v___x_3304_, 4, v___x_3300_);
lean_ctor_set_uint8(v___x_3304_, 5, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 6, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 7, v___x_3300_);
lean_ctor_set_uint8(v___x_3304_, 8, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 9, v___x_3301_);
lean_ctor_set_uint8(v___x_3304_, 10, v___x_3302_);
lean_ctor_set_uint8(v___x_3304_, 11, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 12, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 13, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 14, v___x_3303_);
lean_ctor_set_uint8(v___x_3304_, 15, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 16, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 17, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 18, v___x_3276_);
lean_ctor_set_uint8(v___x_3304_, 19, v___x_3300_);
v___x_3305_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3304_);
v___x_3306_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3306_, 0, v___x_3304_);
lean_ctor_set_uint64(v___x_3306_, sizeof(void*)*1, v___x_3305_);
v___x_3307_ = lean_box(1);
v___x_3308_ = lean_unsigned_to_nat(0u);
v___x_3309_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3310_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3311_ = lean_box(0);
v___x_3312_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3312_, 0, v___x_3306_);
lean_ctor_set(v___x_3312_, 1, v___x_3307_);
lean_ctor_set(v___x_3312_, 2, v___x_3309_);
lean_ctor_set(v___x_3312_, 3, v___x_3310_);
lean_ctor_set(v___x_3312_, 4, v___x_3311_);
lean_ctor_set(v___x_3312_, 5, v___x_3308_);
lean_ctor_set(v___x_3312_, 6, v___x_3311_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*7, v___x_3300_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*7 + 1, v___x_3300_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*7 + 2, v___x_3300_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*7 + 3, v___x_3210_);
v___x_3313_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3314_ = lean_st_mk_ref(v___x_3313_);
v___x_3315_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3268_, v___x_3312_, v___x_3314_, v___y_3009_, v___y_3010_);
lean_dec_ref_known(v___x_3312_, 7);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3317_; 
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v___x_3315_, 1);
v___x_3317_ = lean_st_ref_get(v___x_3314_);
lean_dec(v___x_3314_);
lean_dec(v___x_3317_);
v___y_3195_ = v___x_3276_;
v___y_3196_ = v___x_3263_;
v___y_3197_ = v_a_3208_;
v_a_3198_ = v_a_3316_;
goto v___jp_3194_;
}
else
{
lean_dec(v___x_3314_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3318_; 
v_a_3318_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3318_);
lean_dec_ref_known(v___x_3315_, 1);
v___y_3195_ = v___x_3276_;
v___y_3196_ = v___x_3263_;
v___y_3197_ = v_a_3208_;
v_a_3198_ = v_a_3318_;
goto v___jp_3194_;
}
else
{
lean_object* v_a_3319_; 
v_a_3319_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v___x_3315_, 1);
v___y_3177_ = v___x_3263_;
v___y_3178_ = v_a_3208_;
v_a_3179_ = v_a_3319_;
goto v___jp_3176_;
}
}
}
}
}
else
{
lean_object* v___x_3320_; lean_object* v___x_3321_; 
lean_dec(v___x_3266_);
lean_dec(v_name_3008_);
v___x_3320_ = lean_box(0);
lean_inc(v___y_3010_);
lean_inc_ref(v___y_3009_);
v___x_3321_ = lean_apply_4(v___f_3007_, v___x_3320_, v___y_3009_, v___y_3010_, lean_box(0));
v___y_3188_ = v___x_3263_;
v___y_3189_ = v_a_3208_;
v___y_3190_ = v___x_3321_;
goto v___jp_3187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v___f_3429_, lean_object* v_name_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v___f_3429_, v_name_3430_, v___y_3431_, v___y_3432_);
lean_dec(v___y_3432_);
lean_dec_ref(v___y_3431_);
return v_res_3434_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3478_ = lean_unsigned_to_nat(3137104340u);
v___x_3479_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3480_ = l_Lean_Name_num___override(v___x_3479_, v___x_3478_);
return v___x_3480_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3482_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3483_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3484_ = l_Lean_Name_str___override(v___x_3483_, v___x_3482_);
return v___x_3484_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3486_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3487_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3488_ = l_Lean_Name_str___override(v___x_3487_, v___x_3486_);
return v___x_3488_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3489_ = lean_unsigned_to_nat(2u);
v___x_3490_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3491_ = l_Lean_Name_num___override(v___x_3490_, v___x_3489_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3493_; lean_object* v___x_3494_; 
v___f_3493_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3494_ = l_Lean_registerReservedNameAction(v___f_3493_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v___x_3495_; uint8_t v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
lean_dec_ref_known(v___x_3494_, 1);
v___x_3495_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__5));
v___x_3496_ = 0;
v___x_3497_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3498_ = l_Lean_registerTraceClass(v___x_3495_, v___x_3496_, v___x_3497_);
return v___x_3498_;
}
else
{
return v___x_3494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_a_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b1_3501_, lean_object* v_x_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_3502_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03b1_3507_, lean_object* v_x_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(v_00_u03b1_3507_, v_x_3508_, v___y_3509_, v___y_3510_);
lean_dec(v___y_3510_);
lean_dec_ref(v___y_3509_);
return v_res_3512_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_DefEqAttrib(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_RecExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_RecExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_eqns_nonrecursive = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_eqns_nonrecursive);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_eqns_deepRecursiveSplit = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_eqns_deepRecursiveSplit);
lean_dec_ref(res);
l_Lean_Meta_eqnAffectingOptions = _init_l_Lean_Meta_eqnAffectingOptions();
lean_mark_persistent(l_Lean_Meta_eqnAffectingOptions);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_eqnOptionsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_eqnOptionsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef);
lean_dec_ref(res);
l_Lean_Meta_instInhabitedEqnsExtState_default = _init_l_Lean_Meta_instInhabitedEqnsExtState_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedEqnsExtState_default);
l_Lean_Meta_instInhabitedEqnsExtState = _init_l_Lean_Meta_instInhabitedEqnsExtState();
lean_mark_persistent(l_Lean_Meta_instInhabitedEqnsExtState);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_eqnsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_eqnsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Lean_DefEqAttrib(uint8_t builtin);
lean_object* initialize_Lean_Meta_RecExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_RecExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif
