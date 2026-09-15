// Lean compiler output
// Module: Lean.Meta.Transport
// Imports: public import Init.Data.Function public import Lean.Meta.DiscrTree.Main public import Lean.Meta.SynthInstance import Lean.Meta.AppBuilder
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
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transport"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(6, 24, 78, 7, 114, 99, 8, 38)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Transport"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(149, 153, 154, 250, 81, 247, 7, 60)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 48, 216, 249, 123, 245, 43, 56)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 153, 73, 20, 219, 193, 200, 218)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 164, 132, 231, 141, 26, 54, 153)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 175, 126, 157, 92, 10, 222, 39)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 237, 195, 218, 168, 164, 20, 211)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(244, 73, 93, 52, 106, 2, 112, 236)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 54, 175, 223, 119, 181, 180, 9)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 89, 108, 52, 20, 238, 105, 158)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1380866075) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(70, 199, 214, 46, 215, 58, 15, 196)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 53, 105, 253, 34, 91, 236, 255)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 237, 220, 42, 191, 224, 117, 69)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(164, 144, 77, 47, 4, 255, 197, 225)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "transportExt"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 35, 217, 133, 78, 111, 250, 152)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(131, 250, 171, 231, 28, 9, 33, 156)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_transportExt;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Equiv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "invalid `@[transport]` declaration `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`, its explicit arguments must be equivalences, but `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_addTransportDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 56, .m_data = "`, its conclusion must be an equivalence `α ≃ β`, but is"};
static const lean_object* l_Lean_Meta_Transport_addTransportDecl___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_addTransportDecl___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_addTransportDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_addTransportDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 21, 50, 44, 76, 35, 185, 191)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 178, 251, 51, 50, 44, 150, 219)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(118, 118, 9, 86, 79, 169, 106, 242)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 130, 24, 151, 34, 118, 33, 244)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 103, 174, 150, 189, 180, 21, 98)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 79, 208, 123, 192, 239, 250, 180)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(126, 251, 149, 126, 202, 112, 250, 100)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "equivalence or congruence usable by `transport`, `inferInstanceAs` and `deriving`"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "no `@[transport]` declaration applies"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ≃ "};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "cannot infer argument `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0_value;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "` does not lead anywhere"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4___closed__1 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__4___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to transport"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "transport depth exhausted at"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__1;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "\n≃"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__2 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__3;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__4 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__4_value),LEAN_SCALAR_PTR_LITERAL(51, 79, 251, 89, 35, 210, 90, 222)}};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__5 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__5_value;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__6 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__6_value;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__7 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__8 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__9;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Transport_mkEquiv___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` does not apply"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkTransportEquiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "`Equiv` is not available, transporting requires `Init.Data.Function`"};
static const lean_object* l_Lean_Meta_mkTransportEquiv___closed__0 = (const lean_object*)&l_Lean_Meta_mkTransportEquiv___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkTransportEquiv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTransportEquiv___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_transport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toFun"};
static const lean_object* l_Lean_Meta_transport___closed__0 = (const lean_object*)&l_Lean_Meta_transport___closed__0_value;
static const lean_ctor_object l_Lean_Meta_transport___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_ctor_object l_Lean_Meta_transport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_transport___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_transport___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 146, 132, 13, 158, 94, 161, 99)}};
static const lean_object* l_Lean_Meta_transport___closed__1 = (const lean_object*)&l_Lean_Meta_transport___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_transport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_62_; uint8_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_63_ = 0;
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_65_ = l_Lean_registerTraceClass(v___x_62_, v___x_63_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2____boxed(lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(lean_object* v_x_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_70_, 0, v_a_69_);
lean_inc_ref_n(v___x_70_, 2);
v___x_71_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
lean_ctor_set(v___x_71_, 2, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object* v_x_72_, lean_object* v_a_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(v_x_72_, v_a_73_);
lean_dec_ref(v_x_72_);
return v_res_74_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_msg_76_){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0);
v___x_78_ = lean_panic_fn_borrowed(v___x_77_, v_msg_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10_spec__11___redArg(lean_object* v_x_79_, lean_object* v_x_80_, lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
lean_object* v_ks_83_; lean_object* v_vs_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_108_; 
v_ks_83_ = lean_ctor_get(v_x_79_, 0);
v_vs_84_ = lean_ctor_get(v_x_79_, 1);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_108_ == 0)
{
v___x_86_ = v_x_79_;
v_isShared_87_ = v_isSharedCheck_108_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_vs_84_);
lean_inc(v_ks_83_);
lean_dec(v_x_79_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_108_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = lean_array_get_size(v_ks_83_);
v___x_89_ = lean_nat_dec_lt(v_x_80_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
lean_dec(v_x_80_);
v___x_90_ = lean_array_push(v_ks_83_, v_x_81_);
v___x_91_ = lean_array_push(v_vs_84_, v_x_82_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 1, v___x_91_);
lean_ctor_set(v___x_86_, 0, v___x_90_);
v___x_93_ = v___x_86_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
else
{
lean_object* v_k_x27_95_; uint8_t v___x_96_; 
v_k_x27_95_ = lean_array_fget_borrowed(v_ks_83_, v_x_80_);
v___x_96_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_81_, v_k_x27_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_98_; 
if (v_isShared_87_ == 0)
{
v___x_98_ = v___x_86_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_ks_83_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v_vs_84_);
v___x_98_ = v_reuseFailAlloc_102_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = lean_nat_add(v_x_80_, v___x_99_);
lean_dec(v_x_80_);
v_x_79_ = v___x_98_;
v_x_80_ = v___x_100_;
goto _start;
}
}
else
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_103_ = lean_array_fset(v_ks_83_, v_x_80_, v_x_81_);
v___x_104_ = lean_array_fset(v_vs_84_, v_x_80_, v_x_82_);
lean_dec(v_x_80_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 1, v___x_104_);
lean_ctor_set(v___x_86_, 0, v___x_103_);
v___x_106_ = v___x_86_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_103_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10___redArg(lean_object* v_n_109_, lean_object* v_k_110_, lean_object* v_v_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10_spec__11___redArg(v_n_109_, v___x_112_, v_k_110_, v_v_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(lean_object* v_x_115_, size_t v_x_116_, size_t v_x_117_, lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
if (lean_obj_tag(v_x_115_) == 0)
{
lean_object* v_es_120_; size_t v___x_121_; size_t v___x_122_; lean_object* v_j_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v_es_120_ = lean_ctor_get(v_x_115_, 0);
v___x_121_ = ((size_t)31ULL);
v___x_122_ = lean_usize_land(v_x_116_, v___x_121_);
v_j_123_ = lean_usize_to_nat(v___x_122_);
v___x_124_ = lean_array_get_size(v_es_120_);
v___x_125_ = lean_nat_dec_lt(v_j_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_dec(v_j_123_);
lean_dec(v_x_119_);
lean_dec(v_x_118_);
return v_x_115_;
}
else
{
lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_164_; 
lean_inc_ref(v_es_120_);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_115_);
if (v_isSharedCheck_164_ == 0)
{
lean_object* v_unused_165_; 
v_unused_165_ = lean_ctor_get(v_x_115_, 0);
lean_dec(v_unused_165_);
v___x_127_ = v_x_115_;
v_isShared_128_ = v_isSharedCheck_164_;
goto v_resetjp_126_;
}
else
{
lean_dec(v_x_115_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_164_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v_v_129_; lean_object* v___x_130_; lean_object* v_xs_x27_131_; lean_object* v___y_133_; 
v_v_129_ = lean_array_fget(v_es_120_, v_j_123_);
v___x_130_ = lean_box(0);
v_xs_x27_131_ = lean_array_fset(v_es_120_, v_j_123_, v___x_130_);
switch(lean_obj_tag(v_v_129_))
{
case 0:
{
lean_object* v_key_138_; lean_object* v_val_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_149_; 
v_key_138_ = lean_ctor_get(v_v_129_, 0);
v_val_139_ = lean_ctor_get(v_v_129_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v_v_129_);
if (v_isSharedCheck_149_ == 0)
{
v___x_141_ = v_v_129_;
v_isShared_142_ = v_isSharedCheck_149_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_val_139_);
lean_inc(v_key_138_);
lean_dec(v_v_129_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_149_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
uint8_t v___x_143_; 
v___x_143_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_118_, v_key_138_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_del_object(v___x_141_);
v___x_144_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_138_, v_val_139_, v_x_118_, v_x_119_);
v___x_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
else
{
lean_object* v___x_147_; 
lean_dec(v_val_139_);
lean_dec(v_key_138_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 1, v_x_119_);
lean_ctor_set(v___x_141_, 0, v_x_118_);
v___x_147_ = v___x_141_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_x_118_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_x_119_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
v___y_133_ = v___x_147_;
goto v___jp_132_;
}
}
}
}
case 1:
{
lean_object* v_node_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_162_; 
v_node_150_ = lean_ctor_get(v_v_129_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v_v_129_);
if (v_isSharedCheck_162_ == 0)
{
v___x_152_ = v_v_129_;
v_isShared_153_ = v_isSharedCheck_162_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_node_150_);
lean_dec(v_v_129_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_162_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
size_t v___x_154_; size_t v___x_155_; size_t v___x_156_; size_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_154_ = ((size_t)5ULL);
v___x_155_ = lean_usize_shift_right(v_x_116_, v___x_154_);
v___x_156_ = ((size_t)1ULL);
v___x_157_ = lean_usize_add(v_x_117_, v___x_156_);
v___x_158_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(v_node_150_, v___x_155_, v___x_157_, v_x_118_, v_x_119_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_158_);
v___x_160_ = v___x_152_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
v___y_133_ = v___x_160_;
goto v___jp_132_;
}
}
}
default: 
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v_x_118_);
lean_ctor_set(v___x_163_, 1, v_x_119_);
v___y_133_ = v___x_163_;
goto v___jp_132_;
}
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_134_ = lean_array_fset(v_xs_x27_131_, v_j_123_, v___y_133_);
lean_dec(v_j_123_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_134_);
v___x_136_ = v___x_127_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
}
else
{
lean_object* v_ks_166_; lean_object* v_vs_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_185_; 
v_ks_166_ = lean_ctor_get(v_x_115_, 0);
v_vs_167_ = lean_ctor_get(v_x_115_, 1);
v_isSharedCheck_185_ = !lean_is_exclusive(v_x_115_);
if (v_isSharedCheck_185_ == 0)
{
v___x_169_ = v_x_115_;
v_isShared_170_ = v_isSharedCheck_185_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_vs_167_);
lean_inc(v_ks_166_);
lean_dec(v_x_115_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_185_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_ks_166_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_vs_167_);
v___x_172_ = v_reuseFailAlloc_184_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v_newNode_173_; size_t v___x_174_; uint8_t v___x_175_; 
v_newNode_173_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10___redArg(v___x_172_, v_x_118_, v_x_119_);
v___x_174_ = ((size_t)7ULL);
v___x_175_ = lean_usize_dec_le(v___x_174_, v_x_117_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_173_);
v___x_177_ = lean_unsigned_to_nat(4u);
v___x_178_ = lean_nat_dec_lt(v___x_176_, v___x_177_);
lean_dec(v___x_176_);
if (v___x_178_ == 0)
{
lean_object* v_ks_179_; lean_object* v_vs_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_ks_179_ = lean_ctor_get(v_newNode_173_, 0);
lean_inc_ref(v_ks_179_);
v_vs_180_ = lean_ctor_get(v_newNode_173_, 1);
lean_inc_ref(v_vs_180_);
lean_dec_ref(v_newNode_173_);
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0);
v___x_183_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg(v_x_117_, v_ks_179_, v_vs_180_, v___x_181_, v___x_182_);
lean_dec_ref(v_vs_180_);
lean_dec_ref(v_ks_179_);
return v___x_183_;
}
else
{
return v_newNode_173_;
}
}
else
{
return v_newNode_173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg(size_t v_depth_186_, lean_object* v_keys_187_, lean_object* v_vals_188_, lean_object* v_i_189_, lean_object* v_entries_190_){
_start:
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_array_get_size(v_keys_187_);
v___x_192_ = lean_nat_dec_lt(v_i_189_, v___x_191_);
if (v___x_192_ == 0)
{
lean_dec(v_i_189_);
return v_entries_190_;
}
else
{
lean_object* v_k_193_; lean_object* v_v_194_; uint64_t v___x_195_; size_t v_h_196_; size_t v___x_197_; lean_object* v___x_198_; size_t v___x_199_; size_t v___x_200_; size_t v___x_201_; size_t v_h_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_k_193_ = lean_array_fget_borrowed(v_keys_187_, v_i_189_);
v_v_194_ = lean_array_fget_borrowed(v_vals_188_, v_i_189_);
v___x_195_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_193_);
v_h_196_ = lean_uint64_to_usize(v___x_195_);
v___x_197_ = ((size_t)5ULL);
v___x_198_ = lean_unsigned_to_nat(1u);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_sub(v_depth_186_, v___x_199_);
v___x_201_ = lean_usize_mul(v___x_197_, v___x_200_);
v_h_202_ = lean_usize_shift_right(v_h_196_, v___x_201_);
v___x_203_ = lean_nat_add(v_i_189_, v___x_198_);
lean_dec(v_i_189_);
lean_inc(v_v_194_);
lean_inc(v_k_193_);
v___x_204_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(v_entries_190_, v_h_202_, v_depth_186_, v_k_193_, v_v_194_);
v_i_189_ = v___x_203_;
v_entries_190_ = v___x_204_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg___boxed(lean_object* v_depth_206_, lean_object* v_keys_207_, lean_object* v_vals_208_, lean_object* v_i_209_, lean_object* v_entries_210_){
_start:
{
size_t v_depth_boxed_211_; lean_object* v_res_212_; 
v_depth_boxed_211_ = lean_unbox_usize(v_depth_206_);
lean_dec(v_depth_206_);
v_res_212_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg(v_depth_boxed_211_, v_keys_207_, v_vals_208_, v_i_209_, v_entries_210_);
lean_dec_ref(v_vals_208_);
lean_dec_ref(v_keys_207_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_x_213_, lean_object* v_x_214_, lean_object* v_x_215_, lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
size_t v_x_1686__boxed_218_; size_t v_x_1687__boxed_219_; lean_object* v_res_220_; 
v_x_1686__boxed_218_ = lean_unbox_usize(v_x_214_);
lean_dec(v_x_214_);
v_x_1687__boxed_219_ = lean_unbox_usize(v_x_215_);
lean_dec(v_x_215_);
v_res_220_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(v_x_213_, v_x_1686__boxed_218_, v_x_1687__boxed_219_, v_x_216_, v_x_217_);
return v_res_220_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(lean_object* v_a_221_, lean_object* v_b_222_){
_start:
{
lean_object* v_fst_223_; lean_object* v_fst_224_; uint8_t v___x_225_; 
v_fst_223_ = lean_ctor_get(v_a_221_, 0);
v_fst_224_ = lean_ctor_get(v_b_222_, 0);
v___x_225_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_223_, v_fst_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1___boxed(lean_object* v_a_226_, lean_object* v_b_227_){
_start:
{
uint8_t v_res_228_; lean_object* v_r_229_; 
v_res_228_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v_a_226_, v_b_227_);
lean_dec_ref(v_b_227_);
lean_dec_ref(v_a_226_);
v_r_229_ = lean_box(v_res_228_);
return v_r_229_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0(lean_object* v_x_230_, lean_object* v_keys_231_, lean_object* v_v_232_, lean_object* v_k_233_, lean_object* v_x_234_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_c_237_; lean_object* v___x_238_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_add(v_x_230_, v___x_235_);
v_c_237_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_231_, v_v_232_, v___x_236_);
lean_dec(v___x_236_);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v_k_233_);
lean_ctor_set(v___x_238_, 1, v_c_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0___boxed(lean_object* v_x_239_, lean_object* v_keys_240_, lean_object* v_v_241_, lean_object* v_k_242_, lean_object* v_x_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0(v_x_239_, v_keys_240_, v_v_241_, v_k_242_, v_x_243_);
lean_dec_ref(v_keys_240_);
lean_dec(v_x_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object* v_vs_245_, lean_object* v_v_246_, lean_object* v_i_247_){
_start:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_array_get_size(v_vs_245_);
v___x_249_ = lean_nat_dec_lt(v_i_247_, v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; 
lean_dec(v_i_247_);
v___x_250_ = lean_array_push(v_vs_245_, v_v_246_);
return v___x_250_;
}
else
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_array_fget_borrowed(v_vs_245_, v_i_247_);
v___x_252_ = lean_name_eq(v_v_246_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(1u);
v___x_254_ = lean_nat_add(v_i_247_, v___x_253_);
lean_dec(v_i_247_);
v_i_247_ = v___x_254_;
goto _start;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_array_fset(v_vs_245_, v_i_247_, v_v_246_);
lean_dec(v_i_247_);
return v___x_256_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_vs_257_, lean_object* v_v_258_){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(0u);
v___x_260_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(v_vs_257_, v_v_258_, v___x_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_x_265_, lean_object* v_keys_266_, lean_object* v_v_267_, lean_object* v_k_268_, lean_object* v_as_269_, lean_object* v_k_270_, lean_object* v_x_271_, lean_object* v_x_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v_mid_275_; lean_object* v_midVal_276_; uint8_t v___x_277_; 
v___x_273_ = lean_nat_add(v_x_271_, v_x_272_);
v___x_274_ = lean_unsigned_to_nat(1u);
v_mid_275_ = lean_nat_shiftr(v___x_273_, v___x_274_);
lean_dec(v___x_273_);
v_midVal_276_ = lean_array_fget(v_as_269_, v_mid_275_);
v___x_277_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v_midVal_276_, v_k_270_);
if (v___x_277_ == 0)
{
uint8_t v___x_278_; 
lean_dec(v_x_272_);
v___x_278_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v_k_270_, v_midVal_276_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; uint8_t v___x_280_; 
lean_dec(v_x_271_);
v___x_279_ = lean_array_get_size(v_as_269_);
v___x_280_ = lean_nat_dec_lt(v_mid_275_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec(v_midVal_276_);
lean_dec(v_mid_275_);
lean_dec(v_k_268_);
lean_dec(v_v_267_);
return v_as_269_;
}
else
{
lean_object* v_snd_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_293_; 
v_snd_281_ = lean_ctor_get(v_midVal_276_, 1);
v_isSharedCheck_293_ = !lean_is_exclusive(v_midVal_276_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; 
v_unused_294_ = lean_ctor_get(v_midVal_276_, 0);
lean_dec(v_unused_294_);
v___x_283_ = v_midVal_276_;
v_isShared_284_ = v_isSharedCheck_293_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_snd_281_);
lean_dec(v_midVal_276_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_293_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v_xs_x27_286_; lean_object* v___x_287_; lean_object* v_c_288_; lean_object* v___x_290_; 
v___x_285_ = lean_box(0);
v_xs_x27_286_ = lean_array_fset(v_as_269_, v_mid_275_, v___x_285_);
v___x_287_ = lean_nat_add(v_x_265_, v___x_274_);
v_c_288_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0(v_keys_266_, v_v_267_, v___x_287_, v_snd_281_);
lean_dec(v___x_287_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v_c_288_);
lean_ctor_set(v___x_283_, 0, v_k_268_);
v___x_290_ = v___x_283_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_k_268_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_c_288_);
v___x_290_ = v_reuseFailAlloc_292_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_291_; 
v___x_291_ = lean_array_fset(v_xs_x27_286_, v_mid_275_, v___x_290_);
lean_dec(v_mid_275_);
return v___x_291_;
}
}
}
}
else
{
lean_dec(v_midVal_276_);
v_x_272_ = v_mid_275_;
goto _start;
}
}
else
{
uint8_t v___x_296_; 
lean_dec(v_midVal_276_);
v___x_296_ = lean_nat_dec_eq(v_mid_275_, v_x_271_);
if (v___x_296_ == 0)
{
lean_dec(v_x_271_);
v_x_271_ = v_mid_275_;
goto _start;
}
else
{
lean_object* v___x_298_; lean_object* v_c_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_j_302_; lean_object* v_as_303_; lean_object* v___x_304_; 
lean_dec(v_mid_275_);
lean_dec(v_x_272_);
v___x_298_ = lean_nat_add(v_x_265_, v___x_274_);
v_c_299_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_266_, v_v_267_, v___x_298_);
lean_dec(v___x_298_);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v_k_268_);
lean_ctor_set(v___x_300_, 1, v_c_299_);
v___x_301_ = lean_nat_add(v_x_271_, v___x_274_);
lean_dec(v_x_271_);
v_j_302_ = lean_array_get_size(v_as_269_);
v_as_303_ = lean_array_push(v_as_269_, v___x_300_);
v___x_304_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_301_, v_as_303_, v_j_302_);
lean_dec(v___x_301_);
return v___x_304_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_x_305_, lean_object* v_keys_306_, lean_object* v_v_307_, lean_object* v_k_308_, lean_object* v_as_309_, lean_object* v_k_310_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_311_ = lean_array_get_size(v_as_309_);
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = lean_nat_dec_eq(v___x_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = lean_array_fget_borrowed(v_as_309_, v___x_312_);
v___x_315_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v_k_310_, v___x_314_);
if (v___x_315_ == 0)
{
uint8_t v___x_316_; 
v___x_316_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v___x_314_, v_k_310_);
if (v___x_316_ == 0)
{
uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v___x_312_, v___x_311_);
if (v___x_317_ == 0)
{
lean_dec(v_k_308_);
lean_dec(v_v_307_);
return v_as_309_;
}
else
{
lean_object* v___x_318_; lean_object* v_xs_x27_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_inc(v___x_314_);
v___x_318_ = lean_box(0);
v_xs_x27_319_ = lean_array_fset(v_as_309_, v___x_312_, v___x_318_);
v___x_320_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v___x_314_);
v___x_321_ = lean_array_fset(v_xs_x27_319_, v___x_312_, v___x_320_);
return v___x_321_;
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_sub(v___x_311_, v___x_322_);
v___x_324_ = lean_array_fget_borrowed(v_as_309_, v___x_323_);
v___x_325_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v___x_324_, v_k_310_);
if (v___x_325_ == 0)
{
uint8_t v___x_326_; 
v___x_326_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__1(v_k_310_, v___x_324_);
if (v___x_326_ == 0)
{
uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_lt(v___x_323_, v___x_311_);
if (v___x_327_ == 0)
{
lean_dec(v___x_323_);
lean_dec(v_k_308_);
lean_dec(v_v_307_);
return v_as_309_;
}
else
{
lean_object* v___x_328_; lean_object* v_xs_x27_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
lean_inc(v___x_324_);
v___x_328_ = lean_box(0);
v_xs_x27_329_ = lean_array_fset(v_as_309_, v___x_323_, v___x_328_);
v___x_330_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v___x_324_);
v___x_331_ = lean_array_fset(v_xs_x27_329_, v___x_323_, v___x_330_);
lean_dec(v___x_323_);
return v___x_331_;
}
}
else
{
lean_object* v___x_332_; 
v___x_332_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v_as_309_, v_k_310_, v___x_312_, v___x_323_);
return v___x_332_;
}
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec(v___x_323_);
v___x_333_ = lean_box(0);
v___x_334_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v___x_333_);
v___x_335_ = lean_array_push(v_as_309_, v___x_334_);
return v___x_335_;
}
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v_as_338_; lean_object* v___x_339_; 
v___x_336_ = lean_box(0);
v___x_337_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v___x_336_);
v_as_338_ = lean_array_push(v_as_309_, v___x_337_);
v___x_339_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_312_, v_as_338_, v___x_311_);
return v___x_339_;
}
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_box(0);
v___x_341_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__0(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v___x_340_);
v___x_342_ = lean_array_push(v_as_309_, v___x_341_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_keys_343_, lean_object* v_v_344_, lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
lean_object* v_vs_347_; lean_object* v_children_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_365_; 
v_vs_347_ = lean_ctor_get(v_x_346_, 0);
v_children_348_ = lean_ctor_get(v_x_346_, 1);
v_isSharedCheck_365_ = !lean_is_exclusive(v_x_346_);
if (v_isSharedCheck_365_ == 0)
{
v___x_350_ = v_x_346_;
v_isShared_351_ = v_isSharedCheck_365_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_children_348_);
lean_inc(v_vs_347_);
lean_dec(v_x_346_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_365_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_array_get_size(v_keys_343_);
v___x_353_ = lean_nat_dec_lt(v_x_345_, v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_vs_347_, v_v_344_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_354_);
v___x_356_ = v___x_350_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_children_348_);
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
lean_object* v_k_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_c_361_; lean_object* v___x_363_; 
v_k_358_ = lean_array_fget_borrowed(v_keys_343_, v_x_345_);
v___x_359_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___closed__1));
lean_inc_n(v_k_358_, 2);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v_k_358_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v_c_361_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_x_345_, v_keys_343_, v_v_344_, v_k_358_, v_children_348_, v___x_360_);
lean_dec_ref_known(v___x_360_, 2);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_c_361_);
v___x_363_ = v___x_350_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_vs_347_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_c_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2(lean_object* v_x_366_, lean_object* v_keys_367_, lean_object* v_v_368_, lean_object* v_k_369_, lean_object* v_x_370_){
_start:
{
lean_object* v_snd_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_381_; 
v_snd_371_ = lean_ctor_get(v_x_370_, 1);
v_isSharedCheck_381_ = !lean_is_exclusive(v_x_370_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; 
v_unused_382_ = lean_ctor_get(v_x_370_, 0);
lean_dec(v_unused_382_);
v___x_373_ = v_x_370_;
v_isShared_374_ = v_isSharedCheck_381_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_snd_371_);
lean_dec(v_x_370_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_381_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v_c_377_; lean_object* v___x_379_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_add(v_x_366_, v___x_375_);
v_c_377_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0(v_keys_367_, v_v_368_, v___x_376_, v_snd_371_);
lean_dec(v___x_376_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_c_377_);
lean_ctor_set(v___x_373_, 0, v_k_369_);
v___x_379_ = v___x_373_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_k_369_);
lean_ctor_set(v_reuseFailAlloc_380_, 1, v_c_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2___boxed(lean_object* v_x_383_, lean_object* v_keys_384_, lean_object* v_v_385_, lean_object* v_k_386_, lean_object* v_x_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___lam__2(v_x_383_, v_keys_384_, v_v_385_, v_k_386_, v_x_387_);
lean_dec_ref(v_keys_384_);
lean_dec(v_x_383_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_keys_389_, lean_object* v_v_390_, lean_object* v_x_391_, lean_object* v_x_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0(v_keys_389_, v_v_390_, v_x_391_, v_x_392_);
lean_dec(v_x_391_);
lean_dec_ref(v_keys_389_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_394_, lean_object* v_keys_395_, lean_object* v_v_396_, lean_object* v_k_397_, lean_object* v_as_398_, lean_object* v_k_399_, lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_x_394_, v_keys_395_, v_v_396_, v_k_397_, v_as_398_, v_k_399_, v_x_400_, v_x_401_);
lean_dec_ref(v_k_399_);
lean_dec_ref(v_keys_395_);
lean_dec(v_x_394_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_x_403_, lean_object* v_keys_404_, lean_object* v_v_405_, lean_object* v_k_406_, lean_object* v_as_407_, lean_object* v_k_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_x_403_, v_keys_404_, v_v_405_, v_k_406_, v_as_407_, v_k_408_);
lean_dec_ref(v_k_408_);
lean_dec_ref(v_keys_404_);
lean_dec(v_x_403_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(lean_object* v_keys_410_, lean_object* v_v_411_, lean_object* v_x_412_){
_start:
{
if (lean_obj_tag(v_x_412_) == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_410_, v_v_411_, v___x_413_);
v___x_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
else
{
lean_object* v_val_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_425_; 
v_val_416_ = lean_ctor_get(v_x_412_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_412_);
if (v_isSharedCheck_425_ == 0)
{
v___x_418_ = v_x_412_;
v_isShared_419_ = v_isSharedCheck_425_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_val_416_);
lean_dec(v_x_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_425_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_420_ = lean_unsigned_to_nat(1u);
v___x_421_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0(v_keys_410_, v_v_411_, v___x_420_, v_val_416_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_421_);
v___x_423_ = v___x_418_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0___boxed(lean_object* v_keys_426_, lean_object* v_v_427_, lean_object* v_x_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(v_keys_426_, v_v_427_, v_x_428_);
lean_dec_ref(v_keys_426_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4_spec__8(lean_object* v_xs_430_, lean_object* v_v_431_, lean_object* v_i_432_){
_start:
{
lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_433_ = lean_array_get_size(v_xs_430_);
v___x_434_ = lean_nat_dec_lt(v_i_432_, v___x_433_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; 
lean_dec(v_i_432_);
v___x_435_ = lean_box(0);
return v___x_435_;
}
else
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = lean_array_fget_borrowed(v_xs_430_, v_i_432_);
v___x_437_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_436_, v_v_431_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_unsigned_to_nat(1u);
v___x_439_ = lean_nat_add(v_i_432_, v___x_438_);
lean_dec(v_i_432_);
v_i_432_ = v___x_439_;
goto _start;
}
else
{
lean_object* v___x_441_; 
v___x_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_441_, 0, v_i_432_);
return v___x_441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4_spec__8___boxed(lean_object* v_xs_442_, lean_object* v_v_443_, lean_object* v_i_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4_spec__8(v_xs_442_, v_v_443_, v_i_444_);
lean_dec(v_v_443_);
lean_dec_ref(v_xs_442_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4(lean_object* v_xs_446_, lean_object* v_v_447_){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4_spec__8(v_xs_446_, v_v_447_, v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4___boxed(lean_object* v_xs_450_, lean_object* v_v_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4(v_xs_450_, v_v_451_);
lean_dec(v_v_451_);
lean_dec_ref(v_xs_450_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_keys_453_, lean_object* v_v_454_, lean_object* v_x_455_, size_t v_x_456_, size_t v_x_457_, lean_object* v_x_458_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
lean_object* v_es_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v_j_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v_es_459_ = lean_ctor_get(v_x_455_, 0);
v___x_460_ = ((size_t)31ULL);
v___x_461_ = lean_usize_land(v_x_456_, v___x_460_);
v_j_462_ = lean_usize_to_nat(v___x_461_);
v___x_463_ = lean_array_get_size(v_es_459_);
v___x_464_ = lean_nat_dec_lt(v_j_462_, v___x_463_);
if (v___x_464_ == 0)
{
lean_dec(v_j_462_);
lean_dec(v_x_458_);
lean_dec(v_v_454_);
return v_x_455_;
}
else
{
lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_532_; 
lean_inc_ref(v_es_459_);
v_isSharedCheck_532_ = !lean_is_exclusive(v_x_455_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v_x_455_, 0);
lean_dec(v_unused_533_);
v___x_466_ = v_x_455_;
v_isShared_467_ = v_isSharedCheck_532_;
goto v_resetjp_465_;
}
else
{
lean_dec(v_x_455_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_532_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v_v_468_; lean_object* v___x_469_; lean_object* v_xs_x27_470_; lean_object* v___y_472_; 
v_v_468_ = lean_array_fget(v_es_459_, v_j_462_);
v___x_469_ = lean_box(0);
v_xs_x27_470_ = lean_array_fset(v_es_459_, v_j_462_, v___x_469_);
switch(lean_obj_tag(v_v_468_))
{
case 0:
{
lean_object* v_key_477_; lean_object* v_val_478_; uint8_t v___x_479_; 
v_key_477_ = lean_ctor_get(v_v_468_, 0);
v_val_478_ = lean_ctor_get(v_v_468_, 1);
v___x_479_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_458_, v_key_477_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_box(0);
v___x_481_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(v_keys_453_, v_v_454_, v___x_480_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_dec(v_x_458_);
v___y_472_ = v_v_468_;
goto v___jp_471_;
}
else
{
lean_object* v_val_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_490_; 
lean_inc(v_val_478_);
lean_inc(v_key_477_);
lean_dec_ref_known(v_v_468_, 2);
v_val_482_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_490_ == 0)
{
v___x_484_ = v___x_481_;
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_val_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_486_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_477_, v_val_478_, v_x_458_, v_val_482_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v___x_486_);
v___x_488_ = v___x_484_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
v___y_472_ = v___x_488_;
goto v___jp_471_;
}
}
}
}
else
{
lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_501_; 
lean_inc(v_val_478_);
v_isSharedCheck_501_ = !lean_is_exclusive(v_v_468_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; 
v_unused_502_ = lean_ctor_get(v_v_468_, 1);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_v_468_, 0);
lean_dec(v_unused_503_);
v___x_492_ = v_v_468_;
v_isShared_493_ = v_isSharedCheck_501_;
goto v_resetjp_491_;
}
else
{
lean_dec(v_v_468_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_501_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v_val_478_);
v___x_495_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(v_keys_453_, v_v_454_, v___x_494_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v___x_496_; 
lean_del_object(v___x_492_);
lean_dec(v_x_458_);
v___x_496_ = lean_box(2);
v___y_472_ = v___x_496_;
goto v___jp_471_;
}
else
{
lean_object* v_val_497_; lean_object* v___x_499_; 
v_val_497_ = lean_ctor_get(v___x_495_, 0);
lean_inc(v_val_497_);
lean_dec_ref_known(v___x_495_, 1);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 1, v_val_497_);
lean_ctor_set(v___x_492_, 0, v_x_458_);
v___x_499_ = v___x_492_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_x_458_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_val_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
v___y_472_ = v___x_499_;
goto v___jp_471_;
}
}
}
}
}
case 1:
{
lean_object* v_node_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_527_; 
v_node_504_ = lean_ctor_get(v_v_468_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_v_468_);
if (v_isSharedCheck_527_ == 0)
{
v___x_506_ = v_v_468_;
v_isShared_507_ = v_isSharedCheck_527_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_node_504_);
lean_dec(v_v_468_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_527_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
size_t v___x_508_; size_t v___x_509_; size_t v___x_510_; size_t v___x_511_; lean_object* v_newNode_512_; lean_object* v___x_513_; 
v___x_508_ = ((size_t)5ULL);
v___x_509_ = lean_usize_shift_right(v_x_456_, v___x_508_);
v___x_510_ = ((size_t)1ULL);
v___x_511_ = lean_usize_add(v_x_457_, v___x_510_);
v_newNode_512_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1(v_keys_453_, v_v_454_, v_node_504_, v___x_509_, v___x_511_, v_x_458_);
lean_inc_ref(v_newNode_512_);
v___x_513_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_512_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v___x_515_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v_newNode_512_);
v___x_515_ = v___x_506_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_newNode_512_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
v___y_472_ = v___x_515_;
goto v___jp_471_;
}
}
else
{
lean_object* v_val_517_; lean_object* v_fst_518_; lean_object* v_snd_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_newNode_512_);
lean_del_object(v___x_506_);
v_val_517_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_val_517_);
lean_dec_ref_known(v___x_513_, 1);
v_fst_518_ = lean_ctor_get(v_val_517_, 0);
v_snd_519_ = lean_ctor_get(v_val_517_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v_val_517_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v_val_517_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_snd_519_);
lean_inc(v_fst_518_);
lean_dec(v_val_517_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_fst_518_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_snd_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
v___y_472_ = v___x_524_;
goto v___jp_471_;
}
}
}
}
}
default: 
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_box(0);
v___x_529_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(v_keys_453_, v_v_454_, v___x_528_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_dec(v_x_458_);
v___y_472_ = v_v_468_;
goto v___jp_471_;
}
else
{
lean_object* v_val_530_; lean_object* v___x_531_; 
v_val_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_val_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v_x_458_);
lean_ctor_set(v___x_531_, 1, v_val_530_);
v___y_472_ = v___x_531_;
goto v___jp_471_;
}
}
}
v___jp_471_:
{
lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_473_ = lean_array_fset(v_xs_x27_470_, v_j_462_, v___y_472_);
lean_dec(v_j_462_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_473_);
v___x_475_ = v___x_466_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
else
{
lean_object* v_ks_534_; lean_object* v_vs_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_568_; 
v_ks_534_ = lean_ctor_get(v_x_455_, 0);
v_vs_535_ = lean_ctor_get(v_x_455_, 1);
v_isSharedCheck_568_ = !lean_is_exclusive(v_x_455_);
if (v_isSharedCheck_568_ == 0)
{
v___x_537_ = v_x_455_;
v_isShared_538_ = v_isSharedCheck_568_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_vs_535_);
lean_inc(v_ks_534_);
lean_dec(v_x_455_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_568_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; 
v___x_539_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__4(v_ks_534_, v_x_458_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v___x_541_; 
if (v_isShared_538_ == 0)
{
v___x_541_ = v___x_537_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_ks_534_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_vs_535_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_box(0);
v___x_543_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(v_keys_453_, v_v_454_, v___x_542_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_dec(v_x_458_);
return v___x_541_;
}
else
{
lean_object* v_val_544_; lean_object* v___x_545_; 
v_val_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v___x_543_, 1);
v___x_545_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(v___x_541_, v_x_456_, v_x_457_, v_x_458_, v_val_544_);
return v___x_545_;
}
}
}
else
{
lean_object* v_val_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_567_; 
v_val_547_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_567_ == 0)
{
v___x_549_ = v___x_539_;
v_isShared_550_ = v_isSharedCheck_567_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_val_547_);
lean_dec(v___x_539_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_567_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v_v_x27_551_; lean_object* v_keys_552_; lean_object* v_vals_553_; lean_object* v___x_555_; 
v_v_x27_551_ = lean_array_fget(v_vs_535_, v_val_547_);
lean_inc(v_val_547_);
v_keys_552_ = l_Array_eraseIdx___redArg(v_ks_534_, v_val_547_);
v_vals_553_ = l_Array_eraseIdx___redArg(v_vs_535_, v_val_547_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v_v_x27_551_);
v___x_555_ = v___x_549_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_v_x27_551_);
v___x_555_ = v_reuseFailAlloc_566_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___lam__0(v_keys_453_, v_v_454_, v___x_555_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v___x_558_; 
lean_dec(v_x_458_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v_vals_553_);
lean_ctor_set(v___x_537_, 0, v_keys_552_);
v___x_558_ = v___x_537_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_keys_552_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_vals_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
else
{
lean_object* v_val_560_; lean_object* v_keys_561_; lean_object* v_vals_562_; lean_object* v___x_564_; 
v_val_560_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_val_560_);
lean_dec_ref_known(v___x_556_, 1);
v_keys_561_ = lean_array_push(v_keys_552_, v_x_458_);
v_vals_562_ = lean_array_push(v_vals_553_, v_val_560_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v_vals_562_);
lean_ctor_set(v___x_537_, 0, v_keys_561_);
v___x_564_ = v___x_537_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_keys_561_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_vals_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_keys_569_, lean_object* v_v_570_, lean_object* v_x_571_, lean_object* v_x_572_, lean_object* v_x_573_, lean_object* v_x_574_){
_start:
{
size_t v_x_2129__boxed_575_; size_t v_x_2130__boxed_576_; lean_object* v_res_577_; 
v_x_2129__boxed_575_ = lean_unbox_usize(v_x_572_);
lean_dec(v_x_572_);
v_x_2130__boxed_576_ = lean_unbox_usize(v_x_573_);
lean_dec(v_x_573_);
v_res_577_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1(v_keys_569_, v_v_570_, v_x_571_, v_x_2129__boxed_575_, v_x_2130__boxed_576_, v_x_574_);
lean_dec_ref(v_keys_569_);
return v_res_577_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__3(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_581_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__2));
v___x_582_ = lean_unsigned_to_nat(23u);
v___x_583_ = lean_unsigned_to_nat(166u);
v___x_584_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__1));
v___x_585_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__0));
v___x_586_ = l_mkPanicMessageWithDecl(v___x_585_, v___x_584_, v___x_583_, v___x_582_, v___x_581_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0(lean_object* v_d_587_, lean_object* v_keys_588_, lean_object* v_v_589_){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v___x_590_ = lean_array_get_size(v_keys_588_);
v___x_591_ = lean_unsigned_to_nat(0u);
v___x_592_ = lean_nat_dec_eq(v___x_590_, v___x_591_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; lean_object* v_k_594_; uint64_t v___x_595_; size_t v_h_596_; size_t v___x_597_; lean_object* v___x_598_; 
v___x_593_ = lean_box(0);
v_k_594_ = lean_array_get_borrowed(v___x_593_, v_keys_588_, v___x_591_);
v___x_595_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_594_);
v_h_596_ = lean_uint64_to_usize(v___x_595_);
v___x_597_ = ((size_t)1ULL);
lean_inc(v_k_594_);
v___x_598_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1(v_keys_588_, v_v_589_, v_d_587_, v_h_596_, v___x_597_, v_k_594_);
return v___x_598_;
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec(v_v_589_);
lean_dec_ref(v_d_587_);
v___x_599_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___closed__3);
v___x_600_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2(v___x_599_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0___boxed(lean_object* v_d_601_, lean_object* v_keys_602_, lean_object* v_v_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0(v_d_601_, v_keys_602_, v_v_603_);
lean_dec_ref(v_keys_602_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(lean_object* v_dt_605_, lean_object* v_x_606_){
_start:
{
lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___x_609_; 
v_fst_607_ = lean_ctor_get(v_x_606_, 0);
lean_inc(v_fst_607_);
v_snd_608_ = lean_ctor_get(v_x_606_, 1);
lean_inc(v_snd_608_);
lean_dec_ref(v_x_606_);
v___x_609_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0(v_dt_605_, v_snd_608_, v_fst_607_);
lean_dec(v_snd_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(lean_object* v___y_610_){
_start:
{
lean_inc_ref(v___y_610_);
return v___y_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(v___y_611_);
lean_dec_ref(v___y_611_);
return v_res_612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_622_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_625_; lean_object* v___f_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___f_625_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_));
v___f_626_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__2_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_));
v___x_627_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___f_628_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_));
v___x_629_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__4_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_));
v___x_630_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v___f_628_);
lean_ctor_set(v___x_630_, 2, v___x_627_);
lean_ctor_set(v___x_630_, 3, v___f_626_);
lean_ctor_set(v___x_630_, 4, v___f_625_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_633_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_();
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5(lean_object* v_00_u03b2_636_, lean_object* v_x_637_, size_t v_x_638_, size_t v_x_639_, lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg(v_x_637_, v_x_638_, v_x_639_, v_x_640_, v_x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_643_, lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_, lean_object* v_x_648_){
_start:
{
size_t v_x_2463__boxed_649_; size_t v_x_2464__boxed_650_; lean_object* v_res_651_; 
v_x_2463__boxed_649_ = lean_unbox_usize(v_x_645_);
lean_dec(v_x_645_);
v_x_2464__boxed_650_ = lean_unbox_usize(v_x_646_);
lean_dec(v_x_646_);
v_res_651_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5(v_00_u03b2_643_, v_x_644_, v_x_2463__boxed_649_, v_x_2464__boxed_650_, v_x_647_, v_x_648_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object* v_x_652_, lean_object* v_keys_653_, lean_object* v_v_654_, lean_object* v_k_655_, lean_object* v_as_656_, lean_object* v_k_657_, lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_x_652_, v_keys_653_, v_v_654_, v_k_655_, v_as_656_, v_k_657_, v_x_658_, v_x_659_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_x_663_, lean_object* v_keys_664_, lean_object* v_v_665_, lean_object* v_k_666_, lean_object* v_as_667_, lean_object* v_k_668_, lean_object* v_x_669_, lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(v_x_663_, v_keys_664_, v_v_665_, v_k_666_, v_as_667_, v_k_668_, v_x_669_, v_x_670_, v_x_671_, v_x_672_);
lean_dec_ref(v_k_668_);
lean_dec_ref(v_keys_664_);
lean_dec(v_x_663_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10(lean_object* v_00_u03b2_674_, lean_object* v_n_675_, lean_object* v_k_676_, lean_object* v_v_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10___redArg(v_n_675_, v_k_676_, v_v_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11(lean_object* v_00_u03b2_679_, size_t v_depth_680_, lean_object* v_keys_681_, lean_object* v_vals_682_, lean_object* v_heq_683_, lean_object* v_i_684_, lean_object* v_entries_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___redArg(v_depth_680_, v_keys_681_, v_vals_682_, v_i_684_, v_entries_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11___boxed(lean_object* v_00_u03b2_687_, lean_object* v_depth_688_, lean_object* v_keys_689_, lean_object* v_vals_690_, lean_object* v_heq_691_, lean_object* v_i_692_, lean_object* v_entries_693_){
_start:
{
size_t v_depth_boxed_694_; lean_object* v_res_695_; 
v_depth_boxed_694_ = lean_unbox_usize(v_depth_688_);
lean_dec(v_depth_688_);
v_res_695_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__11(v_00_u03b2_687_, v_depth_boxed_694_, v_keys_689_, v_vals_690_, v_heq_691_, v_i_692_, v_entries_693_);
lean_dec_ref(v_vals_690_);
lean_dec_ref(v_keys_689_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10_spec__11(lean_object* v_00_u03b2_696_, lean_object* v_x_697_, lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5_spec__10_spec__11___redArg(v_x_697_, v_x_698_, v_x_699_, v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(lean_object* v_e_702_, lean_object* v___y_703_){
_start:
{
uint8_t v___x_705_; 
v___x_705_ = l_Lean_Expr_hasMVar(v_e_702_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; 
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v_e_702_);
return v___x_706_;
}
else
{
lean_object* v___x_707_; lean_object* v_mctx_708_; lean_object* v___x_709_; lean_object* v_fst_710_; lean_object* v_snd_711_; lean_object* v___x_712_; lean_object* v_cache_713_; lean_object* v_zetaDeltaFVarIds_714_; lean_object* v_postponed_715_; lean_object* v_diag_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_725_; 
v___x_707_ = lean_st_ref_get(v___y_703_);
v_mctx_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc_ref(v_mctx_708_);
lean_dec(v___x_707_);
v___x_709_ = l_Lean_instantiateMVarsCore(v_mctx_708_, v_e_702_);
v_fst_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_fst_710_);
v_snd_711_ = lean_ctor_get(v___x_709_, 1);
lean_inc(v_snd_711_);
lean_dec_ref(v___x_709_);
v___x_712_ = lean_st_ref_take(v___y_703_);
v_cache_713_ = lean_ctor_get(v___x_712_, 1);
v_zetaDeltaFVarIds_714_ = lean_ctor_get(v___x_712_, 2);
v_postponed_715_ = lean_ctor_get(v___x_712_, 3);
v_diag_716_ = lean_ctor_get(v___x_712_, 4);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_725_ == 0)
{
lean_object* v_unused_726_; 
v_unused_726_ = lean_ctor_get(v___x_712_, 0);
lean_dec(v_unused_726_);
v___x_718_ = v___x_712_;
v_isShared_719_ = v_isSharedCheck_725_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_diag_716_);
lean_inc(v_postponed_715_);
lean_inc(v_zetaDeltaFVarIds_714_);
lean_inc(v_cache_713_);
lean_dec(v___x_712_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_725_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v_snd_711_);
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_snd_711_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_cache_713_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v_zetaDeltaFVarIds_714_);
lean_ctor_set(v_reuseFailAlloc_724_, 3, v_postponed_715_);
lean_ctor_set(v_reuseFailAlloc_724_, 4, v_diag_716_);
v___x_721_ = v_reuseFailAlloc_724_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_st_ref_put(v___y_703_, v___x_721_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_fst_710_);
return v___x_723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg___boxed(lean_object* v_e_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_e_727_, v___y_728_);
lean_dec(v___y_728_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(lean_object* v_e_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_e_731_, v___y_733_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___boxed(lean_object* v_e_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(v_e_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
return v_res_744_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0);
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
return v___x_748_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0);
v___x_750_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
lean_ctor_set(v___x_750_, 2, v___x_749_);
lean_ctor_set(v___x_750_, 3, v___x_749_);
lean_ctor_set(v___x_750_, 4, v___x_749_);
lean_ctor_set(v___x_750_, 5, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(lean_object* v_ext_751_, lean_object* v_b_752_, uint8_t v_kind_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_toCold_758_; lean_object* v_currNamespace_759_; lean_object* v___x_760_; lean_object* v_env_761_; lean_object* v_nextMacroScope_762_; lean_object* v_ngen_763_; lean_object* v_auxDeclNGen_764_; lean_object* v_traceState_765_; lean_object* v_messages_766_; lean_object* v_infoState_767_; lean_object* v_snapshotTasks_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_795_; 
v_toCold_758_ = lean_ctor_get(v___y_755_, 0);
v_currNamespace_759_ = lean_ctor_get(v_toCold_758_, 4);
v___x_760_ = lean_st_ref_take(v___y_756_);
v_env_761_ = lean_ctor_get(v___x_760_, 0);
v_nextMacroScope_762_ = lean_ctor_get(v___x_760_, 1);
v_ngen_763_ = lean_ctor_get(v___x_760_, 2);
v_auxDeclNGen_764_ = lean_ctor_get(v___x_760_, 3);
v_traceState_765_ = lean_ctor_get(v___x_760_, 4);
v_messages_766_ = lean_ctor_get(v___x_760_, 6);
v_infoState_767_ = lean_ctor_get(v___x_760_, 7);
v_snapshotTasks_768_ = lean_ctor_get(v___x_760_, 8);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v___x_760_, 5);
lean_dec(v_unused_796_);
v___x_770_ = v___x_760_;
v_isShared_771_ = v_isSharedCheck_795_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_snapshotTasks_768_);
lean_inc(v_infoState_767_);
lean_inc(v_messages_766_);
lean_inc(v_traceState_765_);
lean_inc(v_auxDeclNGen_764_);
lean_inc(v_ngen_763_);
lean_inc(v_nextMacroScope_762_);
lean_inc(v_env_761_);
lean_dec(v___x_760_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_795_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_775_; 
lean_inc(v_currNamespace_759_);
v___x_772_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_761_, v_ext_751_, v_b_752_, v_kind_753_, v_currNamespace_759_);
v___x_773_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 5, v___x_773_);
lean_ctor_set(v___x_770_, 0, v___x_772_);
v___x_775_ = v___x_770_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_772_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_nextMacroScope_762_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v_ngen_763_);
lean_ctor_set(v_reuseFailAlloc_794_, 3, v_auxDeclNGen_764_);
lean_ctor_set(v_reuseFailAlloc_794_, 4, v_traceState_765_);
lean_ctor_set(v_reuseFailAlloc_794_, 5, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_794_, 6, v_messages_766_);
lean_ctor_set(v_reuseFailAlloc_794_, 7, v_infoState_767_);
lean_ctor_set(v_reuseFailAlloc_794_, 8, v_snapshotTasks_768_);
v___x_775_ = v_reuseFailAlloc_794_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v_mctx_778_; lean_object* v_zetaDeltaFVarIds_779_; lean_object* v_postponed_780_; lean_object* v_diag_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_792_; 
v___x_776_ = lean_st_ref_put(v___y_756_, v___x_775_);
v___x_777_ = lean_st_ref_take(v___y_754_);
v_mctx_778_ = lean_ctor_get(v___x_777_, 0);
v_zetaDeltaFVarIds_779_ = lean_ctor_get(v___x_777_, 2);
v_postponed_780_ = lean_ctor_get(v___x_777_, 3);
v_diag_781_ = lean_ctor_get(v___x_777_, 4);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v___x_777_, 1);
lean_dec(v_unused_793_);
v___x_783_ = v___x_777_;
v_isShared_784_ = v_isSharedCheck_792_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_diag_781_);
lean_inc(v_postponed_780_);
lean_inc(v_zetaDeltaFVarIds_779_);
lean_inc(v_mctx_778_);
lean_dec(v___x_777_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_792_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_785_ = lean_box(0);
v___x_786_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v___x_786_);
v___x_788_ = v___x_783_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_mctx_778_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_791_, 2, v_zetaDeltaFVarIds_779_);
lean_ctor_set(v_reuseFailAlloc_791_, 3, v_postponed_780_);
lean_ctor_set(v_reuseFailAlloc_791_, 4, v_diag_781_);
v___x_788_ = v_reuseFailAlloc_791_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_st_ref_put(v___y_754_, v___x_788_);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_785_);
return v___x_790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___boxed(lean_object* v_ext_797_, lean_object* v_b_798_, lean_object* v_kind_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
uint8_t v_kind_boxed_804_; lean_object* v_res_805_; 
v_kind_boxed_804_ = lean_unbox(v_kind_799_);
v_res_805_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v_ext_797_, v_b_798_, v_kind_boxed_804_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(lean_object* v_00_u03b1_806_, lean_object* v_00_u03b2_807_, lean_object* v_00_u03c3_808_, lean_object* v_ext_809_, lean_object* v_b_810_, uint8_t v_kind_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v_ext_809_, v_b_810_, v_kind_811_, v___y_813_, v___y_814_, v___y_815_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___boxed(lean_object* v_00_u03b1_818_, lean_object* v_00_u03b2_819_, lean_object* v_00_u03c3_820_, lean_object* v_ext_821_, lean_object* v_b_822_, lean_object* v_kind_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
uint8_t v_kind_boxed_829_; lean_object* v_res_830_; 
v_kind_boxed_829_ = lean_unbox(v_kind_823_);
v_res_830_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(v_00_u03b1_818_, v_00_u03b2_819_, v_00_u03c3_820_, v_ext_821_, v_b_822_, v_kind_boxed_829_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(lean_object* v_msgData_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___x_837_; lean_object* v_env_838_; lean_object* v___x_839_; lean_object* v_toCold_840_; lean_object* v_mctx_841_; lean_object* v_lctx_842_; lean_object* v_options_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_837_ = lean_st_ref_get(v___y_835_);
v_env_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc_ref(v_env_838_);
lean_dec(v___x_837_);
v___x_839_ = lean_st_ref_get(v___y_833_);
v_toCold_840_ = lean_ctor_get(v___y_834_, 0);
v_mctx_841_ = lean_ctor_get(v___x_839_, 0);
lean_inc_ref(v_mctx_841_);
lean_dec(v___x_839_);
v_lctx_842_ = lean_ctor_get(v___y_832_, 2);
v_options_843_ = lean_ctor_get(v_toCold_840_, 2);
lean_inc_ref(v_options_843_);
lean_inc_ref(v_lctx_842_);
v___x_844_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_844_, 0, v_env_838_);
lean_ctor_set(v___x_844_, 1, v_mctx_841_);
lean_ctor_set(v___x_844_, 2, v_lctx_842_);
lean_ctor_set(v___x_844_, 3, v_options_843_);
v___x_845_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v_msgData_831_);
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1___boxed(lean_object* v_msgData_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msgData_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(lean_object* v_msg_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_ref_860_; lean_object* v___x_861_; lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_870_; 
v_ref_860_ = lean_ctor_get(v___y_857_, 2);
v___x_861_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_870_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
lean_inc(v_ref_860_);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_ref_860_);
lean_ctor_set(v___x_866_, 1, v_a_862_);
if (v_isShared_865_ == 0)
{
lean_ctor_set_tag(v___x_864_, 1);
lean_ctor_set(v___x_864_, 0, v___x_866_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg___boxed(lean_object* v_msg_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
return v_res_877_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2));
v___x_883_ = l_Lean_stringToMessageData(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__7(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__6));
v___x_889_ = l_Lean_stringToMessageData(v___x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(lean_object* v_declName_890_, lean_object* v_as_891_, size_t v_sz_892_, size_t v_i_893_, lean_object* v_b_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_a_901_; uint8_t v___x_905_; 
v___x_905_ = lean_usize_dec_lt(v_i_893_, v_sz_892_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; 
lean_dec(v_declName_890_);
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v_b_894_);
return v___x_906_;
}
else
{
lean_object* v_array_907_; lean_object* v_start_908_; lean_object* v_stop_909_; uint8_t v___x_910_; 
v_array_907_ = lean_ctor_get(v_b_894_, 0);
v_start_908_ = lean_ctor_get(v_b_894_, 1);
v_stop_909_ = lean_ctor_get(v_b_894_, 2);
v___x_910_ = lean_nat_dec_lt(v_start_908_, v_stop_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; 
lean_dec(v_declName_890_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v_b_894_);
return v___x_911_;
}
else
{
lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_970_; 
lean_inc(v_stop_909_);
lean_inc(v_start_908_);
lean_inc_ref(v_array_907_);
v_isSharedCheck_970_ = !lean_is_exclusive(v_b_894_);
if (v_isSharedCheck_970_ == 0)
{
lean_object* v_unused_971_; lean_object* v_unused_972_; lean_object* v_unused_973_; 
v_unused_971_ = lean_ctor_get(v_b_894_, 2);
lean_dec(v_unused_971_);
v_unused_972_ = lean_ctor_get(v_b_894_, 1);
lean_dec(v_unused_972_);
v_unused_973_ = lean_ctor_get(v_b_894_, 0);
lean_dec(v_unused_973_);
v___x_913_ = v_b_894_;
v_isShared_914_ = v_isSharedCheck_970_;
goto v_resetjp_912_;
}
else
{
lean_dec(v_b_894_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_970_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_915_ = lean_array_fget(v_array_907_, v_start_908_);
v___x_916_ = lean_unsigned_to_nat(1u);
v___x_917_ = lean_nat_add(v_start_908_, v___x_916_);
lean_dec(v_start_908_);
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 1, v___x_917_);
v___x_919_ = v___x_913_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_array_907_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_stop_909_);
v___x_919_ = v_reuseFailAlloc_969_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
uint8_t v___x_920_; uint8_t v___x_921_; 
v___x_920_ = lean_unbox(v___x_915_);
lean_dec(v___x_915_);
v___x_921_ = l_Lean_BinderInfo_isExplicit(v___x_920_);
if (v___x_921_ == 0)
{
v_a_901_ = v___x_919_;
goto v___jp_900_;
}
else
{
lean_object* v_a_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_a_922_ = lean_array_uget_borrowed(v_as_891_, v_i_893_);
v___x_923_ = l_Lean_Expr_mvarId_x21(v_a_922_);
v___x_924_ = l_Lean_MVarId_getDecl(v___x_923_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v_userName_926_; lean_object* v_type_927_; lean_object* v___x_928_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_925_);
lean_dec_ref_known(v___x_924_, 1);
v_userName_926_ = lean_ctor_get(v_a_925_, 0);
lean_inc(v_userName_926_);
v_type_927_ = lean_ctor_get(v_a_925_, 2);
lean_inc_ref(v_type_927_);
lean_dec(v_a_925_);
v___x_928_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_927_, v___y_896_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_931_ = lean_unsigned_to_nat(2u);
v___x_932_ = l_Lean_Expr_isAppOfArity(v_a_929_, v___x_930_, v___x_931_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_933_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3);
lean_inc(v_declName_890_);
v___x_934_ = l_Lean_MessageData_ofConstName(v_declName_890_, v___x_932_);
v___x_935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5);
v___x_937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_935_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
v___x_938_ = l_Lean_MessageData_ofName(v_userName_926_);
v___x_939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_937_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__7);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Lean_indentExpr(v_a_929_);
v___x_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
v___x_944_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_943_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_dec_ref_known(v___x_944_, 1);
v_a_901_ = v___x_919_;
goto v___jp_900_;
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec_ref(v___x_919_);
lean_dec(v_declName_890_);
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_dec(v_a_929_);
lean_dec(v_userName_926_);
v_a_901_ = v___x_919_;
goto v___jp_900_;
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec(v_userName_926_);
lean_dec_ref(v___x_919_);
lean_dec(v_declName_890_);
v_a_953_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_928_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_928_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v___x_919_);
lean_dec(v_declName_890_);
v_a_961_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_924_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_924_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
}
}
}
v___jp_900_:
{
size_t v___x_902_; size_t v___x_903_; 
v___x_902_ = ((size_t)1ULL);
v___x_903_ = lean_usize_add(v_i_893_, v___x_902_);
v_i_893_ = v___x_903_;
v_b_894_ = v_a_901_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___boxed(lean_object* v_declName_974_, lean_object* v_as_975_, lean_object* v_sz_976_, lean_object* v_i_977_, lean_object* v_b_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
size_t v_sz_boxed_984_; size_t v_i_boxed_985_; lean_object* v_res_986_; 
v_sz_boxed_984_ = lean_unbox_usize(v_sz_976_);
lean_dec(v_sz_976_);
v_i_boxed_985_ = lean_unbox_usize(v_i_977_);
lean_dec(v_i_977_);
v_res_986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_974_, v_as_975_, v_sz_boxed_984_, v_i_boxed_985_, v_b_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec_ref(v_as_975_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(lean_object* v_ref_987_, lean_object* v_msg_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_toCold_994_; lean_object* v_currRecDepth_995_; lean_object* v_ref_996_; uint8_t v_diag_997_; uint8_t v_suppressElabErrors_998_; lean_object* v_ref_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v_toCold_994_ = lean_ctor_get(v___y_991_, 0);
v_currRecDepth_995_ = lean_ctor_get(v___y_991_, 1);
v_ref_996_ = lean_ctor_get(v___y_991_, 2);
v_diag_997_ = lean_ctor_get_uint8(v___y_991_, sizeof(void*)*3);
v_suppressElabErrors_998_ = lean_ctor_get_uint8(v___y_991_, sizeof(void*)*3 + 1);
v_ref_999_ = l_Lean_replaceRef(v_ref_987_, v_ref_996_);
lean_inc(v_currRecDepth_995_);
lean_inc_ref(v_toCold_994_);
v___x_1000_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1000_, 0, v_toCold_994_);
lean_ctor_set(v___x_1000_, 1, v_currRecDepth_995_);
lean_ctor_set(v___x_1000_, 2, v_ref_999_);
lean_ctor_set_uint8(v___x_1000_, sizeof(void*)*3, v_diag_997_);
lean_ctor_set_uint8(v___x_1000_, sizeof(void*)*3 + 1, v_suppressElabErrors_998_);
v___x_1001_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_988_, v___y_989_, v___y_990_, v___x_1000_, v___y_992_);
lean_dec_ref_known(v___x_1000_, 3);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_ref_1002_, lean_object* v_msg_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1002_, v_msg_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v_ref_1002_);
return v_res_1009_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
lean_ctor_set(v___x_1014_, 2, v___x_1013_);
lean_ctor_set(v___x_1014_, 3, v___x_1013_);
lean_ctor_set(v___x_1014_, 4, v___x_1012_);
lean_ctor_set(v___x_1014_, 5, v___x_1012_);
lean_ctor_set(v___x_1014_, 6, v___x_1012_);
lean_ctor_set(v___x_1014_, 7, v___x_1012_);
lean_ctor_set(v___x_1014_, 8, v___x_1012_);
lean_ctor_set(v___x_1014_, 9, v___x_1012_);
lean_ctor_set(v___x_1014_, 10, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_unsigned_to_nat(32u);
v___x_1016_ = lean_mk_empty_array_with_capacity(v___x_1015_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
size_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1018_ = ((size_t)5ULL);
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = lean_unsigned_to_nat(32u);
v___x_1021_ = lean_mk_empty_array_with_capacity(v___x_1020_);
v___x_1022_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_1023_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_1021_);
lean_ctor_set(v___x_1023_, 2, v___x_1019_);
lean_ctor_set(v___x_1023_, 3, v___x_1019_);
lean_ctor_set_usize(v___x_1023_, 4, v___x_1018_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1024_ = lean_box(1);
v___x_1025_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_1026_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_1027_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v___x_1025_);
lean_ctor_set(v___x_1027_, 2, v___x_1024_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__5));
v___x_1030_ = l_Lean_stringToMessageData(v___x_1029_);
return v___x_1030_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__7));
v___x_1033_ = l_Lean_stringToMessageData(v___x_1032_);
return v___x_1033_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__9));
v___x_1036_ = l_Lean_stringToMessageData(v___x_1035_);
return v___x_1036_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__11));
v___x_1039_ = l_Lean_stringToMessageData(v___x_1038_);
return v___x_1039_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__13));
v___x_1042_ = l_Lean_stringToMessageData(v___x_1041_);
return v___x_1042_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__15));
v___x_1045_ = l_Lean_stringToMessageData(v___x_1044_);
return v___x_1045_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__17));
v___x_1048_ = l_Lean_stringToMessageData(v___x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_1049_, lean_object* v_declHint_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v_env_1055_; uint8_t v___x_1056_; 
v___x_1053_ = lean_box(0);
v___x_1054_ = lean_st_ref_get(v___y_1051_);
v_env_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc_ref(v_env_1055_);
lean_dec(v___x_1054_);
v___x_1056_ = l_Lean_Name_isAnonymous(v_declHint_1050_);
if (v___x_1056_ == 0)
{
uint8_t v_isExporting_1057_; 
v_isExporting_1057_ = lean_ctor_get_uint8(v_env_1055_, sizeof(void*)*8);
if (v_isExporting_1057_ == 0)
{
lean_object* v___x_1058_; 
lean_dec_ref(v_env_1055_);
lean_dec(v_declHint_1050_);
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v_msg_1049_);
return v___x_1058_;
}
else
{
lean_object* v___x_1059_; uint8_t v___x_1060_; 
lean_inc_ref(v_env_1055_);
v___x_1059_ = l_Lean_Environment_setExporting(v_env_1055_, v___x_1056_);
lean_inc(v_declHint_1050_);
lean_inc_ref(v___x_1059_);
v___x_1060_ = l_Lean_Environment_contains(v___x_1059_, v_declHint_1050_, v_isExporting_1057_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_dec_ref(v___x_1059_);
lean_dec_ref(v_env_1055_);
lean_dec(v_declHint_1050_);
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v_msg_1049_);
return v___x_1061_;
}
else
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v_c_1067_; lean_object* v___x_1068_; 
v___x_1062_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1063_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_1064_ = l_Lean_Options_empty;
v___x_1065_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1059_);
lean_ctor_set(v___x_1065_, 1, v___x_1062_);
lean_ctor_set(v___x_1065_, 2, v___x_1063_);
lean_ctor_set(v___x_1065_, 3, v___x_1064_);
lean_inc(v_declHint_1050_);
v___x_1066_ = l_Lean_MessageData_ofConstName(v_declHint_1050_, v___x_1056_);
v_c_1067_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1067_, 0, v___x_1065_);
lean_ctor_set(v_c_1067_, 1, v___x_1066_);
v___x_1068_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1055_, v_declHint_1050_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_dec_ref(v_env_1055_);
lean_dec(v_declHint_1050_);
v___x_1069_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_1070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
lean_ctor_set(v___x_1070_, 1, v_c_1067_);
v___x_1071_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8);
v___x_1072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = l_Lean_MessageData_note(v___x_1072_);
v___x_1074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_msg_1049_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
return v___x_1075_;
}
else
{
lean_object* v_val_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1110_; 
v_val_1076_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1078_ = v___x_1068_;
v_isShared_1079_ = v_isSharedCheck_1110_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_val_1076_);
lean_dec(v___x_1068_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1110_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v_mod_1082_; uint8_t v___x_1083_; 
v___x_1080_ = l_Lean_Environment_header(v_env_1055_);
lean_dec_ref(v_env_1055_);
v___x_1081_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1080_);
v_mod_1082_ = lean_array_get(v___x_1053_, v___x_1081_, v_val_1076_);
lean_dec(v_val_1076_);
lean_dec_ref(v___x_1081_);
v___x_1083_ = l_Lean_isPrivateName(v_declHint_1050_);
lean_dec(v_declHint_1050_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1084_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10);
v___x_1085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_c_1067_);
v___x_1086_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12);
v___x_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = l_Lean_MessageData_ofName(v_mod_1082_);
v___x_1089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = l_Lean_MessageData_note(v___x_1091_);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v_msg_1049_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set_tag(v___x_1078_, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1093_);
v___x_1095_ = v___x_1078_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1097_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_1098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
lean_ctor_set(v___x_1098_, 1, v_c_1067_);
v___x_1099_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16);
v___x_1100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = l_Lean_MessageData_ofName(v_mod_1082_);
v___x_1102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18);
v___x_1104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = l_Lean_MessageData_note(v___x_1104_);
v___x_1106_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1106_, 0, v_msg_1049_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set_tag(v___x_1078_, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1106_);
v___x_1108_ = v___x_1078_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1111_; 
lean_dec_ref(v_env_1055_);
lean_dec(v_declHint_1050_);
v___x_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_msg_1049_);
return v___x_1111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_1112_, lean_object* v_declHint_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1112_, v_declHint_1113_, v___y_1114_);
lean_dec(v___y_1114_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object* v_msg_1117_, lean_object* v_declHint_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v___x_1124_; lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1134_; 
v___x_1124_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1117_, v_declHint_1118_, v___y_1122_);
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1129_ = l_Lean_unknownIdentifierMessageTag;
v___x_1130_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v_a_1125_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v___x_1130_);
v___x_1132_ = v___x_1127_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_1135_, lean_object* v_declHint_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(v_msg_1135_, v_declHint_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_ref_1143_, lean_object* v_msg_1144_, lean_object* v_declHint_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; lean_object* v_a_1152_; lean_object* v___x_1153_; 
v___x_1151_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(v_msg_1144_, v_declHint_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref(v___x_1151_);
v___x_1153_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1143_, v_a_1152_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_ref_1154_, lean_object* v_msg_1155_, lean_object* v_declHint_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1154_, v_msg_1155_, v_declHint_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v_ref_1154_);
return v_res_1162_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__0));
v___x_1165_ = l_Lean_stringToMessageData(v___x_1164_);
return v___x_1165_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__2));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(lean_object* v_ref_1169_, lean_object* v_constName_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1176_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1177_ = 0;
lean_inc(v_constName_1170_);
v___x_1178_ = l_Lean_MessageData_ofConstName(v_constName_1170_, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1176_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1169_, v___x_1181_, v_constName_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_ref_1183_, lean_object* v_constName_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1183_, v_constName_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v_ref_1183_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(lean_object* v_constName_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_ref_1197_; lean_object* v___x_1198_; 
v_ref_1197_ = lean_ctor_get(v___y_1194_, 2);
v___x_1198_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1197_, v_constName_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg___boxed(lean_object* v_constName_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(lean_object* v_constName_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v___x_1212_; lean_object* v_env_1213_; uint8_t v___x_1214_; lean_object* v___x_1215_; 
v___x_1212_ = lean_st_ref_get(v___y_1210_);
v_env_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc_ref(v_env_1213_);
lean_dec(v___x_1212_);
v___x_1214_ = 0;
lean_inc(v_constName_1206_);
v___x_1215_ = l_Lean_Environment_find_x3f(v_env_1213_, v_constName_1206_, v___x_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1216_; 
v___x_1216_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
return v___x_1216_;
}
else
{
lean_object* v_val_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec(v_constName_1206_);
v_val_1217_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1215_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_val_1217_);
lean_dec(v___x_1215_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 0);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_val_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4___boxed(lean_object* v_constName_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_constName_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1231_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_addTransportDecl___closed__1(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = ((lean_object*)(l_Lean_Meta_Transport_addTransportDecl___closed__0));
v___x_1234_ = l_Lean_stringToMessageData(v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object* v_declName_1235_, uint8_t v_kind_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1303_; lean_object* v___x_1340_; 
lean_inc(v_declName_1235_);
v___x_1340_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_declName_1235_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1342_; uint8_t v_transparency_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; uint8_t v___x_1347_; uint8_t v___x_1348_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1340_, 1);
v___x_1342_ = l_Lean_Meta_Context_config(v___y_1237_);
v_transparency_1343_ = lean_ctor_get_uint8(v___x_1342_, 9);
lean_dec_ref(v___x_1342_);
v___x_1344_ = l_Lean_ConstantInfo_type(v_a_1341_);
lean_dec(v_a_1341_);
v___x_1345_ = lean_box(0);
v___x_1346_ = 0;
v___x_1347_ = 2;
v___x_1348_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1343_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_object* v_keyedConfig_1349_; uint8_t v_trackZetaDelta_1350_; lean_object* v_zetaDeltaSet_1351_; lean_object* v_lctx_1352_; lean_object* v_localInstances_1353_; lean_object* v_defEqCtx_x3f_1354_; lean_object* v_synthPendingDepth_1355_; lean_object* v_customCanUnfoldPredicate_x3f_1356_; uint8_t v_univApprox_1357_; uint8_t v_inTypeClassResolution_1358_; uint8_t v_cacheInferType_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_keyedConfig_1349_ = lean_ctor_get(v___y_1237_, 0);
v_trackZetaDelta_1350_ = lean_ctor_get_uint8(v___y_1237_, sizeof(void*)*7);
v_zetaDeltaSet_1351_ = lean_ctor_get(v___y_1237_, 1);
v_lctx_1352_ = lean_ctor_get(v___y_1237_, 2);
v_localInstances_1353_ = lean_ctor_get(v___y_1237_, 3);
v_defEqCtx_x3f_1354_ = lean_ctor_get(v___y_1237_, 4);
v_synthPendingDepth_1355_ = lean_ctor_get(v___y_1237_, 5);
v_customCanUnfoldPredicate_x3f_1356_ = lean_ctor_get(v___y_1237_, 6);
v_univApprox_1357_ = lean_ctor_get_uint8(v___y_1237_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1358_ = lean_ctor_get_uint8(v___y_1237_, sizeof(void*)*7 + 2);
v_cacheInferType_1359_ = lean_ctor_get_uint8(v___y_1237_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1349_);
v___x_1360_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1347_, v_keyedConfig_1349_);
lean_inc(v_customCanUnfoldPredicate_x3f_1356_);
lean_inc(v_synthPendingDepth_1355_);
lean_inc(v_defEqCtx_x3f_1354_);
lean_inc_ref(v_localInstances_1353_);
lean_inc_ref(v_lctx_1352_);
lean_inc(v_zetaDeltaSet_1351_);
v___x_1361_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
lean_ctor_set(v___x_1361_, 1, v_zetaDeltaSet_1351_);
lean_ctor_set(v___x_1361_, 2, v_lctx_1352_);
lean_ctor_set(v___x_1361_, 3, v_localInstances_1353_);
lean_ctor_set(v___x_1361_, 4, v_defEqCtx_x3f_1354_);
lean_ctor_set(v___x_1361_, 5, v_synthPendingDepth_1355_);
lean_ctor_set(v___x_1361_, 6, v_customCanUnfoldPredicate_x3f_1356_);
lean_ctor_set_uint8(v___x_1361_, sizeof(void*)*7, v_trackZetaDelta_1350_);
lean_ctor_set_uint8(v___x_1361_, sizeof(void*)*7 + 1, v_univApprox_1357_);
lean_ctor_set_uint8(v___x_1361_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1358_);
lean_ctor_set_uint8(v___x_1361_, sizeof(void*)*7 + 3, v_cacheInferType_1359_);
v___x_1362_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1344_, v___x_1345_, v___x_1346_, v___x_1361_, v___y_1238_, v___y_1239_, v___y_1240_);
lean_dec_ref_known(v___x_1361_, 7);
v___y_1303_ = v___x_1362_;
goto v___jp_1302_;
}
else
{
lean_object* v___x_1363_; 
v___x_1363_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1344_, v___x_1345_, v___x_1346_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
v___y_1303_ = v___x_1363_;
goto v___jp_1302_;
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec(v_declName_1235_);
v_a_1364_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1340_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1340_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
v___jp_1242_:
{
if (lean_obj_tag(v___y_1247_) == 0)
{
lean_object* v_a_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v_a_1248_ = lean_ctor_get(v___y_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref_known(v___y_1247_, 1);
v___x_1249_ = l_Lean_Meta_Transport_transportExt;
v___x_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1250_, 0, v_declName_1235_);
lean_ctor_set(v___x_1250_, 1, v_a_1248_);
v___x_1251_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v___x_1249_, v___x_1250_, v_kind_1236_, v___y_1243_, v___y_1246_, v___y_1245_);
return v___x_1251_;
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec(v_declName_1235_);
v_a_1252_ = lean_ctor_get(v___y_1247_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___y_1247_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___y_1247_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___y_1247_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
v___jp_1260_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; size_t v_sz_1271_; size_t v___x_1272_; lean_object* v___x_1273_; 
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = lean_array_get_size(v___y_1263_);
v___x_1270_ = l_Array_toSubarray___redArg(v___y_1263_, v___x_1268_, v___x_1269_);
v_sz_1271_ = lean_array_size(v___y_1262_);
v___x_1272_ = ((size_t)0ULL);
lean_inc(v_declName_1235_);
v___x_1273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1235_, v___y_1262_, v_sz_1271_, v___x_1272_, v___x_1270_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec_ref(v___y_1262_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v___x_1274_; uint8_t v_transparency_1275_; uint8_t v___x_1276_; uint8_t v___x_1277_; uint8_t v___x_1278_; 
lean_dec_ref_known(v___x_1273_, 1);
v___x_1274_ = l_Lean_Meta_Context_config(v___y_1264_);
v_transparency_1275_ = lean_ctor_get_uint8(v___x_1274_, 9);
lean_dec_ref(v___x_1274_);
v___x_1276_ = 0;
v___x_1277_ = 2;
v___x_1278_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1275_, v___x_1277_);
if (v___x_1278_ == 0)
{
lean_object* v_keyedConfig_1279_; uint8_t v_trackZetaDelta_1280_; lean_object* v_zetaDeltaSet_1281_; lean_object* v_lctx_1282_; lean_object* v_localInstances_1283_; lean_object* v_defEqCtx_x3f_1284_; lean_object* v_synthPendingDepth_1285_; lean_object* v_customCanUnfoldPredicate_x3f_1286_; uint8_t v_univApprox_1287_; uint8_t v_inTypeClassResolution_1288_; uint8_t v_cacheInferType_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v_keyedConfig_1279_ = lean_ctor_get(v___y_1264_, 0);
v_trackZetaDelta_1280_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*7);
v_zetaDeltaSet_1281_ = lean_ctor_get(v___y_1264_, 1);
v_lctx_1282_ = lean_ctor_get(v___y_1264_, 2);
v_localInstances_1283_ = lean_ctor_get(v___y_1264_, 3);
v_defEqCtx_x3f_1284_ = lean_ctor_get(v___y_1264_, 4);
v_synthPendingDepth_1285_ = lean_ctor_get(v___y_1264_, 5);
v_customCanUnfoldPredicate_x3f_1286_ = lean_ctor_get(v___y_1264_, 6);
v_univApprox_1287_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1288_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*7 + 2);
v_cacheInferType_1289_ = lean_ctor_get_uint8(v___y_1264_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1279_);
v___x_1290_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1277_, v_keyedConfig_1279_);
lean_inc(v_customCanUnfoldPredicate_x3f_1286_);
lean_inc(v_synthPendingDepth_1285_);
lean_inc(v_defEqCtx_x3f_1284_);
lean_inc_ref(v_localInstances_1283_);
lean_inc_ref(v_lctx_1282_);
lean_inc(v_zetaDeltaSet_1281_);
v___x_1291_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
lean_ctor_set(v___x_1291_, 1, v_zetaDeltaSet_1281_);
lean_ctor_set(v___x_1291_, 2, v_lctx_1282_);
lean_ctor_set(v___x_1291_, 3, v_localInstances_1283_);
lean_ctor_set(v___x_1291_, 4, v_defEqCtx_x3f_1284_);
lean_ctor_set(v___x_1291_, 5, v_synthPendingDepth_1285_);
lean_ctor_set(v___x_1291_, 6, v_customCanUnfoldPredicate_x3f_1286_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7, v_trackZetaDelta_1280_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7 + 1, v_univApprox_1287_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1288_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7 + 3, v_cacheInferType_1289_);
v___x_1292_ = l_Lean_Meta_DiscrTree_mkPath(v___y_1261_, v___x_1276_, v___x_1291_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec_ref_known(v___x_1291_, 7);
v___y_1243_ = v___y_1265_;
v___y_1244_ = v___y_1264_;
v___y_1245_ = v___y_1267_;
v___y_1246_ = v___y_1266_;
v___y_1247_ = v___x_1292_;
goto v___jp_1242_;
}
else
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Lean_Meta_DiscrTree_mkPath(v___y_1261_, v___x_1276_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
v___y_1243_ = v___y_1265_;
v___y_1244_ = v___y_1264_;
v___y_1245_ = v___y_1267_;
v___y_1246_ = v___y_1266_;
v___y_1247_ = v___x_1293_;
goto v___jp_1242_;
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v___y_1261_);
lean_dec(v_declName_1235_);
v_a_1294_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1273_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1273_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
v___jp_1302_:
{
if (lean_obj_tag(v___y_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v_snd_1305_; lean_object* v_fst_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1331_; 
v_a_1304_ = lean_ctor_get(v___y_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___y_1303_, 1);
v_snd_1305_ = lean_ctor_get(v_a_1304_, 1);
v_fst_1306_ = lean_ctor_get(v_a_1304_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_a_1304_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1308_ = v_a_1304_;
v_isShared_1309_ = v_isSharedCheck_1331_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_snd_1305_);
lean_inc(v_fst_1306_);
lean_dec(v_a_1304_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1331_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1330_; 
v_fst_1310_ = lean_ctor_get(v_snd_1305_, 0);
v_snd_1311_ = lean_ctor_get(v_snd_1305_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_snd_1305_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1313_ = v_snd_1305_;
v_isShared_1314_ = v_isSharedCheck_1330_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_snd_1311_);
lean_inc(v_fst_1310_);
lean_dec(v_snd_1305_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1330_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_1316_ = lean_unsigned_to_nat(2u);
v___x_1317_ = l_Lean_Expr_isAppOfArity(v_snd_1311_, v___x_1315_, v___x_1316_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
lean_dec(v_fst_1310_);
lean_dec(v_fst_1306_);
v___x_1318_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3);
v___x_1319_ = l_Lean_MessageData_ofConstName(v_declName_1235_, v___x_1317_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set_tag(v___x_1313_, 7);
lean_ctor_set(v___x_1313_, 1, v___x_1319_);
lean_ctor_set(v___x_1313_, 0, v___x_1318_);
v___x_1321_ = v___x_1313_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1318_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1322_; lean_object* v___x_1324_; 
v___x_1322_ = lean_obj_once(&l_Lean_Meta_Transport_addTransportDecl___closed__1, &l_Lean_Meta_Transport_addTransportDecl___closed__1_once, _init_l_Lean_Meta_Transport_addTransportDecl___closed__1);
if (v_isShared_1309_ == 0)
{
lean_ctor_set_tag(v___x_1308_, 7);
lean_ctor_set(v___x_1308_, 1, v___x_1322_);
lean_ctor_set(v___x_1308_, 0, v___x_1321_);
v___x_1324_ = v___x_1308_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1325_ = l_Lean_indentExpr(v_snd_1311_);
v___x_1326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1326_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
return v___x_1327_;
}
}
}
else
{
lean_del_object(v___x_1313_);
lean_del_object(v___x_1308_);
v___y_1261_ = v_snd_1311_;
v___y_1262_ = v_fst_1306_;
v___y_1263_ = v_fst_1310_;
v___y_1264_ = v___y_1237_;
v___y_1265_ = v___y_1238_;
v___y_1266_ = v___y_1239_;
v___y_1267_ = v___y_1240_;
goto v___jp_1260_;
}
}
}
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec(v_declName_1235_);
v_a_1332_ = lean_ctor_get(v___y_1303_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___y_1303_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___y_1303_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___y_1303_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl___boxed(lean_object* v_declName_1372_, lean_object* v_kind_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
uint8_t v_kind_boxed_1379_; lean_object* v_res_1380_; 
v_kind_boxed_1379_ = lean_unbox(v_kind_1373_);
v_res_1380_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1372_, v_kind_boxed_1379_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(lean_object* v_00_u03b1_1381_, lean_object* v_msg_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___boxed(lean_object* v_00_u03b1_1389_, lean_object* v_msg_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(v_00_u03b1_1389_, v_msg_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(lean_object* v_00_u03b1_1397_, lean_object* v_constName_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___boxed(lean_object* v_00_u03b1_1405_, lean_object* v_constName_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(v_00_u03b1_1405_, v_constName_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(lean_object* v_00_u03b1_1413_, lean_object* v_ref_1414_, lean_object* v_constName_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1414_, v_constName_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1422_, lean_object* v_ref_1423_, lean_object* v_constName_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(v_00_u03b1_1422_, v_ref_1423_, v_constName_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec(v_ref_1423_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b1_1431_, lean_object* v_ref_1432_, lean_object* v_msg_1433_, lean_object* v_declHint_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1432_, v_msg_1433_, v_declHint_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b1_1441_, lean_object* v_ref_1442_, lean_object* v_msg_1443_, lean_object* v_declHint_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(v_00_u03b1_1441_, v_ref_1442_, v_msg_1443_, v_declHint_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v_ref_1442_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(lean_object* v_msg_1451_, lean_object* v_declHint_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1451_, v_declHint_1452_, v___y_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_1459_, lean_object* v_declHint_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(v_msg_1459_, v_declHint_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_1467_, lean_object* v_ref_1468_, lean_object* v_msg_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1468_, v_msg_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1476_, lean_object* v_ref_1477_, lean_object* v_msg_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(v_00_u03b1_1476_, v_ref_1477_, v_msg_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v_ref_1477_);
return v_res_1484_;
}
}
static uint64_t _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1491_; uint64_t v___x_1492_; 
v___x_1491_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1492_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1491_);
return v___x_1492_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1493_ = lean_uint64_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1494_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1495_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1495_, 0, v___x_1494_);
lean_ctor_set_uint64(v___x_1495_, sizeof(void*)*1, v___x_1493_);
return v___x_1495_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
return v___x_1497_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1499_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
lean_ctor_set(v___x_1499_, 2, v___x_1498_);
lean_ctor_set(v___x_1499_, 3, v___x_1498_);
lean_ctor_set(v___x_1499_, 4, v___x_1498_);
lean_ctor_set(v___x_1499_, 5, v___x_1498_);
return v___x_1499_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
lean_ctor_set(v___x_1501_, 2, v___x_1500_);
lean_ctor_set(v___x_1501_, 3, v___x_1500_);
lean_ctor_set(v___x_1501_, 4, v___x_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1502_, lean_object* v_declName_1503_, lean_object* v_x_1504_, uint8_t v_kind_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
uint8_t v___x_1509_; uint8_t v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; size_t v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1509_ = 0;
v___x_1510_ = 1;
v___x_1511_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1512_ = lean_box(1);
v___x_1513_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1514_ = lean_unsigned_to_nat(32u);
v___x_1515_ = lean_mk_empty_array_with_capacity(v___x_1514_);
v___x_1516_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_1517_ = ((size_t)5ULL);
lean_inc_n(v___x_1502_, 6);
v___x_1518_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set(v___x_1518_, 1, v___x_1515_);
lean_ctor_set(v___x_1518_, 2, v___x_1502_);
lean_ctor_set(v___x_1518_, 3, v___x_1502_);
lean_ctor_set_usize(v___x_1518_, 4, v___x_1517_);
lean_inc_ref(v___x_1518_);
v___x_1519_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1513_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
lean_ctor_set(v___x_1519_, 2, v___x_1512_);
v___x_1520_ = lean_mk_empty_array_with_capacity(v___x_1502_);
v___x_1521_ = lean_box(0);
v___x_1522_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1522_, 0, v___x_1511_);
lean_ctor_set(v___x_1522_, 1, v___x_1512_);
lean_ctor_set(v___x_1522_, 2, v___x_1519_);
lean_ctor_set(v___x_1522_, 3, v___x_1520_);
lean_ctor_set(v___x_1522_, 4, v___x_1521_);
lean_ctor_set(v___x_1522_, 5, v___x_1502_);
lean_ctor_set(v___x_1522_, 6, v___x_1521_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*7, v___x_1509_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*7 + 1, v___x_1509_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*7 + 2, v___x_1509_);
lean_ctor_set_uint8(v___x_1522_, sizeof(void*)*7 + 3, v___x_1510_);
v___x_1523_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1502_);
lean_ctor_set(v___x_1523_, 1, v___x_1502_);
lean_ctor_set(v___x_1523_, 2, v___x_1502_);
lean_ctor_set(v___x_1523_, 3, v___x_1502_);
lean_ctor_set(v___x_1523_, 4, v___x_1513_);
lean_ctor_set(v___x_1523_, 5, v___x_1513_);
lean_ctor_set(v___x_1523_, 6, v___x_1513_);
lean_ctor_set(v___x_1523_, 7, v___x_1513_);
lean_ctor_set(v___x_1523_, 8, v___x_1513_);
lean_ctor_set(v___x_1523_, 9, v___x_1513_);
lean_ctor_set(v___x_1523_, 10, v___x_1513_);
v___x_1524_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1525_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1523_);
lean_ctor_set(v___x_1526_, 1, v___x_1524_);
lean_ctor_set(v___x_1526_, 2, v___x_1512_);
lean_ctor_set(v___x_1526_, 3, v___x_1518_);
lean_ctor_set(v___x_1526_, 4, v___x_1525_);
v___x_1527_ = lean_st_mk_ref(v___x_1526_);
v___x_1528_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1503_, v_kind_1505_, v___x_1522_, v___x_1527_, v___y_1506_, v___y_1507_);
lean_dec_ref_known(v___x_1522_, 7);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1537_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1531_ = v___x_1528_;
v_isShared_1532_ = v_isSharedCheck_1537_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1528_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1537_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1533_; lean_object* v___x_1535_; 
v___x_1533_ = lean_st_ref_get(v___x_1527_);
lean_dec(v___x_1527_);
lean_dec(v___x_1533_);
if (v_isShared_1532_ == 0)
{
v___x_1535_ = v___x_1531_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1529_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
else
{
lean_dec(v___x_1527_);
return v___x_1528_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1538_, lean_object* v_declName_1539_, lean_object* v_x_1540_, lean_object* v_kind_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
uint8_t v_kind_boxed_1545_; lean_object* v_res_1546_; 
v_kind_boxed_1545_ = lean_unbox(v_kind_1541_);
v_res_1546_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1538_, v_declName_1539_, v_x_1540_, v_kind_boxed_1545_, v___y_1542_, v___y_1543_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v_x_1540_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v___x_1551_; lean_object* v_toCold_1552_; lean_object* v_env_1553_; lean_object* v_options_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1551_ = lean_st_ref_get(v___y_1549_);
v_toCold_1552_ = lean_ctor_get(v___y_1548_, 0);
v_env_1553_ = lean_ctor_get(v___x_1551_, 0);
lean_inc_ref(v_env_1553_);
lean_dec(v___x_1551_);
v_options_1554_ = lean_ctor_get(v_toCold_1552_, 2);
v___x_1555_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1556_ = lean_unsigned_to_nat(32u);
v___x_1557_ = lean_mk_empty_array_with_capacity(v___x_1556_);
lean_dec_ref(v___x_1557_);
v___x_1558_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4);
lean_inc_ref(v_options_1554_);
v___x_1559_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1559_, 0, v_env_1553_);
lean_ctor_set(v___x_1559_, 1, v___x_1555_);
lean_ctor_set(v___x_1559_, 2, v___x_1558_);
lean_ctor_set(v___x_1559_, 3, v_options_1554_);
v___x_1560_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
lean_ctor_set(v___x_1560_, 1, v_msgData_1547_);
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_ref_1571_; lean_object* v___x_1572_; lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1581_; 
v_ref_1571_ = lean_ctor_get(v___y_1568_, 2);
v___x_1572_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msg_1567_, v___y_1568_, v___y_1569_);
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1575_ = v___x_1572_;
v_isShared_1576_ = v_isSharedCheck_1581_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1572_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1581_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1577_; lean_object* v___x_1579_; 
lean_inc(v_ref_1571_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_ref_1571_);
lean_ctor_set(v___x_1577_, 1, v_a_1573_);
if (v_isShared_1576_ == 0)
{
lean_ctor_set_tag(v___x_1575_, 1);
lean_ctor_set(v___x_1575_, 0, v___x_1577_);
v___x_1579_ = v___x_1575_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1582_, v___y_1583_, v___y_1584_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
return v_res_1586_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1589_ = l_Lean_stringToMessageData(v___x_1588_);
return v___x_1589_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1592_ = l_Lean_stringToMessageData(v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1593_, lean_object* v_decl_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1598_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1599_ = l_Lean_MessageData_ofName(v___x_1593_);
v___x_1600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1600_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v___x_1602_, v___y_1595_, v___y_1596_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1604_, lean_object* v_decl_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1604_, v_decl_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v_decl_1605_);
return v_res_1609_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1630_ = lean_unsigned_to_nat(3239442948u);
v___x_1631_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1632_ = l_Lean_Name_num___override(v___x_1631_, v___x_1630_);
return v___x_1632_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1633_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1634_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1635_ = l_Lean_Name_str___override(v___x_1634_, v___x_1633_);
return v___x_1635_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1636_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1637_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1638_ = l_Lean_Name_str___override(v___x_1637_, v___x_1636_);
return v___x_1638_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1639_ = lean_unsigned_to_nat(2u);
v___x_1640_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1641_ = l_Lean_Name_num___override(v___x_1640_, v___x_1639_);
return v___x_1641_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1647_ = 0;
v___x_1648_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1649_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1650_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1651_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
lean_ctor_set(v___x_1651_, 1, v___x_1649_);
lean_ctor_set(v___x_1651_, 2, v___x_1648_);
lean_ctor_set_uint8(v___x_1651_, sizeof(void*)*3, v___x_1647_);
return v___x_1651_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1652_; lean_object* v___f_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___f_1652_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___f_1653_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1654_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1655_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v___f_1653_);
lean_ctor_set(v___x_1655_, 2, v___f_1652_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1658_ = l_Lean_registerBuiltinAttribute(v___x_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___y_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_();
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1661_, lean_object* v_msg_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1662_, v___y_1663_, v___y_1664_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1667_, lean_object* v_msg_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(v_00_u03b1_1667_, v_msg_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(lean_object* v_k_1673_, lean_object* v_as_1674_, size_t v_sz_1675_, size_t v_i_1676_, lean_object* v_b_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
uint8_t v___x_1683_; 
v___x_1683_ = lean_usize_dec_lt(v_i_1676_, v_sz_1675_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; 
lean_dec_ref(v_k_1673_);
v___x_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1684_, 0, v_b_1677_);
return v___x_1684_;
}
else
{
lean_object* v_snd_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1744_; 
v_snd_1685_ = lean_ctor_get(v_b_1677_, 1);
v_isSharedCheck_1744_ = !lean_is_exclusive(v_b_1677_);
if (v_isSharedCheck_1744_ == 0)
{
lean_object* v_unused_1745_; 
v_unused_1745_ = lean_ctor_get(v_b_1677_, 0);
lean_dec(v_unused_1745_);
v___x_1687_ = v_b_1677_;
v_isShared_1688_ = v_isSharedCheck_1744_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_snd_1685_);
lean_dec(v_b_1677_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1744_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1689_; lean_object* v_a_1690_; lean_object* v___x_1691_; 
v___x_1689_ = lean_box(0);
v_a_1690_ = lean_array_uget_borrowed(v_as_1674_, v_i_1676_);
v___x_1691_ = l_Lean_Meta_saveState___redArg(v___y_1679_, v___y_1681_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1693_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
lean_inc_ref(v_k_1673_);
lean_inc(v___y_1681_);
lean_inc_ref(v___y_1680_);
lean_inc(v___y_1679_);
lean_inc_ref(v___y_1678_);
lean_inc(v_a_1690_);
v___x_1693_ = lean_apply_6(v_k_1673_, v_a_1690_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, lean_box(0));
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1706_; 
lean_dec(v_a_1692_);
lean_dec_ref(v_k_1673_);
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1696_ = v___x_1693_;
v_isShared_1697_ = v_isSharedCheck_1706_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1693_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1706_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_a_1694_);
v___x_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v___x_1699_);
v___x_1701_ = v___x_1687_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v_snd_1685_);
v___x_1701_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1703_; 
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 0, v___x_1701_);
v___x_1703_ = v___x_1696_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v___x_1701_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1735_; 
lean_dec(v_snd_1685_);
v_a_1707_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1709_ = v___x_1693_;
v_isShared_1710_ = v_isSharedCheck_1735_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1693_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1735_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
uint8_t v___y_1712_; uint8_t v___x_1733_; 
v___x_1733_ = l_Lean_Exception_isInterrupt(v_a_1707_);
if (v___x_1733_ == 0)
{
uint8_t v___x_1734_; 
lean_inc(v_a_1707_);
v___x_1734_ = l_Lean_Exception_isRuntime(v_a_1707_);
v___y_1712_ = v___x_1734_;
goto v___jp_1711_;
}
else
{
v___y_1712_ = v___x_1733_;
goto v___jp_1711_;
}
v___jp_1711_:
{
if (v___y_1712_ == 0)
{
lean_object* v___x_1713_; 
lean_del_object(v___x_1709_);
v___x_1713_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1692_, v___y_1679_, v___y_1681_);
lean_dec(v_a_1692_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1717_; 
lean_dec_ref_known(v___x_1713_, 1);
v___x_1714_ = l_Lean_Exception_toMessageData(v_a_1707_);
v___x_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 1, v___x_1715_);
lean_ctor_set(v___x_1687_, 0, v___x_1689_);
v___x_1717_ = v___x_1687_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1721_, 1, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
size_t v___x_1718_; size_t v___x_1719_; 
v___x_1718_ = ((size_t)1ULL);
v___x_1719_ = lean_usize_add(v_i_1676_, v___x_1718_);
v_i_1676_ = v___x_1719_;
v_b_1677_ = v___x_1717_;
goto _start;
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_a_1707_);
lean_del_object(v___x_1687_);
lean_dec_ref(v_k_1673_);
v_a_1722_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1713_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1713_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
else
{
lean_object* v___x_1731_; 
lean_dec(v_a_1692_);
lean_del_object(v___x_1687_);
lean_dec_ref(v_k_1673_);
if (v_isShared_1710_ == 0)
{
v___x_1731_ = v___x_1709_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1707_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
}
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_del_object(v___x_1687_);
lean_dec(v_snd_1685_);
lean_dec_ref(v_k_1673_);
v_a_1736_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1691_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1691_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___boxed(lean_object* v_k_1746_, lean_object* v_as_1747_, lean_object* v_sz_1748_, lean_object* v_i_1749_, lean_object* v_b_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
size_t v_sz_boxed_1756_; size_t v_i_boxed_1757_; lean_object* v_res_1758_; 
v_sz_boxed_1756_ = lean_unbox_usize(v_sz_1748_);
lean_dec(v_sz_1748_);
v_i_boxed_1757_ = lean_unbox_usize(v_i_1749_);
lean_dec(v_i_1749_);
v_res_1758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_1746_, v_as_1747_, v_sz_boxed_1756_, v_i_boxed_1757_, v_b_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec_ref(v_as_1747_);
return v_res_1758_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2(void){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1762_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1));
v___x_1763_ = l_Lean_stringToMessageData(v___x_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(lean_object* v_candidates_1764_, lean_object* v_k_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_){
_start:
{
lean_object* v___x_1771_; size_t v_sz_1772_; size_t v___x_1773_; lean_object* v___x_1774_; 
v___x_1771_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0));
v_sz_1772_ = lean_array_size(v_candidates_1764_);
v___x_1773_ = ((size_t)0ULL);
v___x_1774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_1765_, v_candidates_1764_, v_sz_1772_, v___x_1773_, v___x_1771_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1797_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1777_ = v___x_1774_;
v_isShared_1778_ = v_isSharedCheck_1797_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1774_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1797_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___y_1780_; lean_object* v_fst_1785_; 
v_fst_1785_ = lean_ctor_get(v_a_1775_, 0);
lean_inc(v_fst_1785_);
if (lean_obj_tag(v_fst_1785_) == 0)
{
lean_object* v_snd_1786_; 
v_snd_1786_ = lean_ctor_get(v_a_1775_, 1);
lean_inc(v_snd_1786_);
lean_dec(v_a_1775_);
if (lean_obj_tag(v_snd_1786_) == 0)
{
lean_object* v___x_1787_; 
v___x_1787_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2);
v___y_1780_ = v___x_1787_;
goto v___jp_1779_;
}
else
{
lean_object* v_val_1788_; 
v_val_1788_ = lean_ctor_get(v_snd_1786_, 0);
lean_inc(v_val_1788_);
lean_dec_ref_known(v_snd_1786_, 1);
v___y_1780_ = v_val_1788_;
goto v___jp_1779_;
}
}
else
{
lean_object* v_val_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_del_object(v___x_1777_);
lean_dec(v_a_1775_);
v_val_1789_ = lean_ctor_get(v_fst_1785_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v_fst_1785_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v_fst_1785_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_val_1789_);
lean_dec(v_fst_1785_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
lean_ctor_set_tag(v___x_1791_, 0);
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_val_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
v___jp_1779_:
{
lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v___y_1780_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v___x_1781_);
v___x_1783_ = v___x_1777_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
v_a_1798_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1774_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1774_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___boxed(lean_object* v_candidates_1806_, lean_object* v_k_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_candidates_1806_, v_k_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec(v___y_1809_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_candidates_1806_);
return v_res_1813_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1814_ = lean_unsigned_to_nat(32u);
v___x_1815_ = lean_mk_empty_array_with_capacity(v___x_1814_);
v___x_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1815_);
return v___x_1816_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1817_ = ((size_t)5ULL);
v___x_1818_ = lean_unsigned_to_nat(0u);
v___x_1819_ = lean_unsigned_to_nat(32u);
v___x_1820_ = lean_mk_empty_array_with_capacity(v___x_1819_);
v___x_1821_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0);
v___x_1822_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
lean_ctor_set(v___x_1822_, 1, v___x_1820_);
lean_ctor_set(v___x_1822_, 2, v___x_1818_);
lean_ctor_set(v___x_1822_, 3, v___x_1818_);
lean_ctor_set_usize(v___x_1822_, 4, v___x_1817_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(lean_object* v___y_1823_){
_start:
{
lean_object* v___x_1825_; lean_object* v_traceState_1826_; lean_object* v_traces_1827_; lean_object* v___x_1828_; lean_object* v_traceState_1829_; lean_object* v_env_1830_; lean_object* v_nextMacroScope_1831_; lean_object* v_ngen_1832_; lean_object* v_auxDeclNGen_1833_; lean_object* v_cache_1834_; lean_object* v_messages_1835_; lean_object* v_infoState_1836_; lean_object* v_snapshotTasks_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1856_; 
v___x_1825_ = lean_st_ref_get(v___y_1823_);
v_traceState_1826_ = lean_ctor_get(v___x_1825_, 4);
lean_inc_ref(v_traceState_1826_);
lean_dec(v___x_1825_);
v_traces_1827_ = lean_ctor_get(v_traceState_1826_, 0);
lean_inc_ref(v_traces_1827_);
lean_dec_ref(v_traceState_1826_);
v___x_1828_ = lean_st_ref_take(v___y_1823_);
v_traceState_1829_ = lean_ctor_get(v___x_1828_, 4);
v_env_1830_ = lean_ctor_get(v___x_1828_, 0);
v_nextMacroScope_1831_ = lean_ctor_get(v___x_1828_, 1);
v_ngen_1832_ = lean_ctor_get(v___x_1828_, 2);
v_auxDeclNGen_1833_ = lean_ctor_get(v___x_1828_, 3);
v_cache_1834_ = lean_ctor_get(v___x_1828_, 5);
v_messages_1835_ = lean_ctor_get(v___x_1828_, 6);
v_infoState_1836_ = lean_ctor_get(v___x_1828_, 7);
v_snapshotTasks_1837_ = lean_ctor_get(v___x_1828_, 8);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1839_ = v___x_1828_;
v_isShared_1840_ = v_isSharedCheck_1856_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_snapshotTasks_1837_);
lean_inc(v_infoState_1836_);
lean_inc(v_messages_1835_);
lean_inc(v_cache_1834_);
lean_inc(v_traceState_1829_);
lean_inc(v_auxDeclNGen_1833_);
lean_inc(v_ngen_1832_);
lean_inc(v_nextMacroScope_1831_);
lean_inc(v_env_1830_);
lean_dec(v___x_1828_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1856_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
uint64_t v_tid_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1854_; 
v_tid_1841_ = lean_ctor_get_uint64(v_traceState_1829_, sizeof(void*)*1);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_traceState_1829_);
if (v_isSharedCheck_1854_ == 0)
{
lean_object* v_unused_1855_; 
v_unused_1855_ = lean_ctor_get(v_traceState_1829_, 0);
lean_dec(v_unused_1855_);
v___x_1843_ = v_traceState_1829_;
v_isShared_1844_ = v_isSharedCheck_1854_;
goto v_resetjp_1842_;
}
else
{
lean_dec(v_traceState_1829_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1854_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1845_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1845_);
v___x_1847_ = v___x_1843_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1845_);
lean_ctor_set_uint64(v_reuseFailAlloc_1853_, sizeof(void*)*1, v_tid_1841_);
v___x_1847_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1849_; 
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 4, v___x_1847_);
v___x_1849_ = v___x_1839_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_env_1830_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_nextMacroScope_1831_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_ngen_1832_);
lean_ctor_set(v_reuseFailAlloc_1852_, 3, v_auxDeclNGen_1833_);
lean_ctor_set(v_reuseFailAlloc_1852_, 4, v___x_1847_);
lean_ctor_set(v_reuseFailAlloc_1852_, 5, v_cache_1834_);
lean_ctor_set(v_reuseFailAlloc_1852_, 6, v_messages_1835_);
lean_ctor_set(v_reuseFailAlloc_1852_, 7, v_infoState_1836_);
lean_ctor_set(v_reuseFailAlloc_1852_, 8, v_snapshotTasks_1837_);
v___x_1849_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_st_ref_put(v___y_1823_, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v_traces_1827_);
return v___x_1851_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___boxed(lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_1857_);
lean_dec(v___y_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(lean_object* v_opts_1860_, lean_object* v_opt_1861_){
_start:
{
lean_object* v_name_1862_; lean_object* v_defValue_1863_; lean_object* v_map_1864_; lean_object* v___x_1865_; 
v_name_1862_ = lean_ctor_get(v_opt_1861_, 0);
v_defValue_1863_ = lean_ctor_get(v_opt_1861_, 1);
v_map_1864_ = lean_ctor_get(v_opts_1860_, 0);
v___x_1865_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1864_, v_name_1862_);
if (lean_obj_tag(v___x_1865_) == 0)
{
uint8_t v___x_1866_; 
v___x_1866_ = lean_unbox(v_defValue_1863_);
return v___x_1866_;
}
else
{
lean_object* v_val_1867_; 
v_val_1867_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_val_1867_);
lean_dec_ref_known(v___x_1865_, 1);
if (lean_obj_tag(v_val_1867_) == 1)
{
uint8_t v_v_1868_; 
v_v_1868_ = lean_ctor_get_uint8(v_val_1867_, 0);
lean_dec_ref_known(v_val_1867_, 0);
return v_v_1868_;
}
else
{
uint8_t v___x_1869_; 
lean_dec(v_val_1867_);
v___x_1869_ = lean_unbox(v_defValue_1863_);
return v___x_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5___boxed(lean_object* v_opts_1870_, lean_object* v_opt_1871_){
_start:
{
uint8_t v_res_1872_; lean_object* v_r_1873_; 
v_res_1872_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_1870_, v_opt_1871_);
lean_dec_ref(v_opt_1871_);
lean_dec_ref(v_opts_1870_);
v_r_1873_ = lean_box(v_res_1872_);
return v_r_1873_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1875_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0));
v___x_1876_ = l_Lean_stringToMessageData(v___x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2(lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_x_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1885_ = l_Lean_MessageData_ofExpr(v_a_1877_);
v___x_1886_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1);
v___x_1887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1885_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = l_Lean_MessageData_ofExpr(v_a_1878_);
v___x_1889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1887_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___boxed(lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_x_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_Meta_Transport_mkEquiv___lam__2(v_a_1891_, v_a_1892_, v_x_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec_ref(v_x_1893_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(lean_object* v_opts_1900_, lean_object* v_opt_1901_){
_start:
{
lean_object* v_name_1902_; lean_object* v_defValue_1903_; lean_object* v_map_1904_; lean_object* v___x_1905_; 
v_name_1902_ = lean_ctor_get(v_opt_1901_, 0);
v_defValue_1903_ = lean_ctor_get(v_opt_1901_, 1);
v_map_1904_ = lean_ctor_get(v_opts_1900_, 0);
v___x_1905_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1904_, v_name_1902_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_inc(v_defValue_1903_);
return v_defValue_1903_;
}
else
{
lean_object* v_val_1906_; 
v_val_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_val_1906_);
lean_dec_ref_known(v___x_1905_, 1);
if (lean_obj_tag(v_val_1906_) == 3)
{
lean_object* v_v_1907_; 
v_v_1907_ = lean_ctor_get(v_val_1906_, 0);
lean_inc(v_v_1907_);
lean_dec_ref_known(v_val_1906_, 1);
return v_v_1907_;
}
else
{
lean_dec(v_val_1906_);
lean_inc(v_defValue_1903_);
return v_defValue_1903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11___boxed(lean_object* v_opts_1908_, lean_object* v_opt_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_1908_, v_opt_1909_);
lean_dec_ref(v_opt_1909_);
lean_dec_ref(v_opts_1908_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(lean_object* v_x_1911_){
_start:
{
if (lean_obj_tag(v_x_1911_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
v_a_1913_ = lean_ctor_get(v_x_1911_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_x_1911_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v_x_1911_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v_x_1911_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set_tag(v___x_1915_, 1);
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
v_a_1921_ = lean_ctor_get(v_x_1911_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_x_1911_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v_x_1911_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v_x_1911_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
lean_ctor_set_tag(v___x_1923_, 0);
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg___boxed(lean_object* v_x_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(lean_object* v_e_1932_){
_start:
{
if (lean_obj_tag(v_e_1932_) == 0)
{
uint8_t v___x_1933_; 
v___x_1933_ = 2;
return v___x_1933_;
}
else
{
lean_object* v_a_1934_; uint8_t v___x_1935_; 
v_a_1934_ = lean_ctor_get(v_e_1932_, 0);
v___x_1935_ = l_Lean_Expr_hasSyntheticSorry(v_a_1934_);
if (v___x_1935_ == 0)
{
uint8_t v___x_1936_; 
v___x_1936_ = 0;
return v___x_1936_;
}
else
{
uint8_t v___x_1937_; 
v___x_1937_ = 1;
return v___x_1937_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10___boxed(lean_object* v_e_1938_){
_start:
{
uint8_t v_res_1939_; lean_object* v_r_1940_; 
v_res_1939_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_e_1938_);
lean_dec_ref(v_e_1938_);
v_r_1940_ = lean_box(v_res_1939_);
return v_r_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(size_t v_sz_1941_, size_t v_i_1942_, lean_object* v_bs_1943_){
_start:
{
uint8_t v___x_1944_; 
v___x_1944_ = lean_usize_dec_lt(v_i_1942_, v_sz_1941_);
if (v___x_1944_ == 0)
{
return v_bs_1943_;
}
else
{
lean_object* v_v_1945_; lean_object* v_msg_1946_; lean_object* v___x_1947_; lean_object* v_bs_x27_1948_; size_t v___x_1949_; size_t v___x_1950_; lean_object* v___x_1951_; 
v_v_1945_ = lean_array_uget_borrowed(v_bs_1943_, v_i_1942_);
v_msg_1946_ = lean_ctor_get(v_v_1945_, 1);
lean_inc_ref(v_msg_1946_);
v___x_1947_ = lean_unsigned_to_nat(0u);
v_bs_x27_1948_ = lean_array_uset(v_bs_1943_, v_i_1942_, v___x_1947_);
v___x_1949_ = ((size_t)1ULL);
v___x_1950_ = lean_usize_add(v_i_1942_, v___x_1949_);
v___x_1951_ = lean_array_uset(v_bs_x27_1948_, v_i_1942_, v_msg_1946_);
v_i_1942_ = v___x_1950_;
v_bs_1943_ = v___x_1951_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11___boxed(lean_object* v_sz_1953_, lean_object* v_i_1954_, lean_object* v_bs_1955_){
_start:
{
size_t v_sz_boxed_1956_; size_t v_i_boxed_1957_; lean_object* v_res_1958_; 
v_sz_boxed_1956_ = lean_unbox_usize(v_sz_1953_);
lean_dec(v_sz_1953_);
v_i_boxed_1957_ = lean_unbox_usize(v_i_1954_);
lean_dec(v_i_1954_);
v_res_1958_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_boxed_1956_, v_i_boxed_1957_, v_bs_1955_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(lean_object* v_oldTraces_1959_, lean_object* v_data_1960_, lean_object* v_ref_1961_, lean_object* v_msg_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_toCold_1968_; lean_object* v_currRecDepth_1969_; lean_object* v_ref_1970_; uint8_t v_diag_1971_; uint8_t v_suppressElabErrors_1972_; lean_object* v_ref_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v_traceState_1976_; lean_object* v_traces_1977_; lean_object* v___x_1978_; size_t v_sz_1979_; size_t v___x_1980_; lean_object* v___x_1981_; lean_object* v_msg_1982_; lean_object* v___x_1983_; lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_2021_; 
v_toCold_1968_ = lean_ctor_get(v___y_1965_, 0);
v_currRecDepth_1969_ = lean_ctor_get(v___y_1965_, 1);
v_ref_1970_ = lean_ctor_get(v___y_1965_, 2);
v_diag_1971_ = lean_ctor_get_uint8(v___y_1965_, sizeof(void*)*3);
v_suppressElabErrors_1972_ = lean_ctor_get_uint8(v___y_1965_, sizeof(void*)*3 + 1);
v_ref_1973_ = l_Lean_replaceRef(v_ref_1961_, v_ref_1970_);
lean_inc(v_currRecDepth_1969_);
lean_inc_ref(v_toCold_1968_);
v___x_1974_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1974_, 0, v_toCold_1968_);
lean_ctor_set(v___x_1974_, 1, v_currRecDepth_1969_);
lean_ctor_set(v___x_1974_, 2, v_ref_1973_);
lean_ctor_set_uint8(v___x_1974_, sizeof(void*)*3, v_diag_1971_);
lean_ctor_set_uint8(v___x_1974_, sizeof(void*)*3 + 1, v_suppressElabErrors_1972_);
v___x_1975_ = lean_st_ref_get(v___y_1966_);
v_traceState_1976_ = lean_ctor_get(v___x_1975_, 4);
lean_inc_ref(v_traceState_1976_);
lean_dec(v___x_1975_);
v_traces_1977_ = lean_ctor_get(v_traceState_1976_, 0);
lean_inc_ref(v_traces_1977_);
lean_dec_ref(v_traceState_1976_);
v___x_1978_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1977_);
lean_dec_ref(v_traces_1977_);
v_sz_1979_ = lean_array_size(v___x_1978_);
v___x_1980_ = ((size_t)0ULL);
v___x_1981_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_1979_, v___x_1980_, v___x_1978_);
v_msg_1982_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1982_, 0, v_data_1960_);
lean_ctor_set(v_msg_1982_, 1, v_msg_1962_);
lean_ctor_set(v_msg_1982_, 2, v___x_1981_);
v___x_1983_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_1982_, v___y_1963_, v___y_1964_, v___x_1974_, v___y_1966_);
lean_dec_ref_known(v___x_1974_, 3);
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_1986_ = v___x_1983_;
v_isShared_1987_ = v_isSharedCheck_2021_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1983_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_2021_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1988_; lean_object* v_traceState_1989_; lean_object* v_env_1990_; lean_object* v_nextMacroScope_1991_; lean_object* v_ngen_1992_; lean_object* v_auxDeclNGen_1993_; lean_object* v_cache_1994_; lean_object* v_messages_1995_; lean_object* v_infoState_1996_; lean_object* v_snapshotTasks_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2020_; 
v___x_1988_ = lean_st_ref_take(v___y_1966_);
v_traceState_1989_ = lean_ctor_get(v___x_1988_, 4);
v_env_1990_ = lean_ctor_get(v___x_1988_, 0);
v_nextMacroScope_1991_ = lean_ctor_get(v___x_1988_, 1);
v_ngen_1992_ = lean_ctor_get(v___x_1988_, 2);
v_auxDeclNGen_1993_ = lean_ctor_get(v___x_1988_, 3);
v_cache_1994_ = lean_ctor_get(v___x_1988_, 5);
v_messages_1995_ = lean_ctor_get(v___x_1988_, 6);
v_infoState_1996_ = lean_ctor_get(v___x_1988_, 7);
v_snapshotTasks_1997_ = lean_ctor_get(v___x_1988_, 8);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_1999_ = v___x_1988_;
v_isShared_2000_ = v_isSharedCheck_2020_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_snapshotTasks_1997_);
lean_inc(v_infoState_1996_);
lean_inc(v_messages_1995_);
lean_inc(v_cache_1994_);
lean_inc(v_traceState_1989_);
lean_inc(v_auxDeclNGen_1993_);
lean_inc(v_ngen_1992_);
lean_inc(v_nextMacroScope_1991_);
lean_inc(v_env_1990_);
lean_dec(v___x_1988_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2020_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
uint64_t v_tid_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2018_; 
v_tid_2001_ = lean_ctor_get_uint64(v_traceState_1989_, sizeof(void*)*1);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_traceState_1989_);
if (v_isSharedCheck_2018_ == 0)
{
lean_object* v_unused_2019_; 
v_unused_2019_ = lean_ctor_get(v_traceState_1989_, 0);
lean_dec(v_unused_2019_);
v___x_2003_ = v_traceState_1989_;
v_isShared_2004_ = v_isSharedCheck_2018_;
goto v_resetjp_2002_;
}
else
{
lean_dec(v_traceState_1989_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2018_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2005_ = lean_box(0);
v___x_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2006_, 0, v_ref_1961_);
lean_ctor_set(v___x_2006_, 1, v_a_1984_);
v___x_2007_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1959_, v___x_2006_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2007_);
v___x_2009_ = v___x_2003_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2007_);
lean_ctor_set_uint64(v_reuseFailAlloc_2017_, sizeof(void*)*1, v_tid_2001_);
v___x_2009_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
lean_object* v___x_2011_; 
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 4, v___x_2009_);
v___x_2011_ = v___x_1999_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_env_1990_);
lean_ctor_set(v_reuseFailAlloc_2016_, 1, v_nextMacroScope_1991_);
lean_ctor_set(v_reuseFailAlloc_2016_, 2, v_ngen_1992_);
lean_ctor_set(v_reuseFailAlloc_2016_, 3, v_auxDeclNGen_1993_);
lean_ctor_set(v_reuseFailAlloc_2016_, 4, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2016_, 5, v_cache_1994_);
lean_ctor_set(v_reuseFailAlloc_2016_, 6, v_messages_1995_);
lean_ctor_set(v_reuseFailAlloc_2016_, 7, v_infoState_1996_);
lean_ctor_set(v_reuseFailAlloc_2016_, 8, v_snapshotTasks_1997_);
v___x_2011_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
lean_object* v___x_2012_; lean_object* v___x_2014_; 
v___x_2012_ = lean_st_ref_put(v___y_1966_, v___x_2011_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_2005_);
v___x_2014_ = v___x_1986_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v___x_2005_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8___boxed(lean_object* v_oldTraces_2022_, lean_object* v_data_2023_, lean_object* v_ref_2024_, lean_object* v_msg_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2022_, v_data_2023_, v_ref_2024_, v_msg_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
return v_res_2031_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2032_; double v___x_2033_; 
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = lean_float_of_nat(v___x_2032_);
return v___x_2033_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1));
v___x_2036_ = l_Lean_stringToMessageData(v___x_2035_);
return v___x_2036_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2037_; double v___x_2038_; 
v___x_2037_ = lean_unsigned_to_nat(1000u);
v___x_2038_ = lean_float_of_nat(v___x_2037_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(lean_object* v_cls_2039_, uint8_t v_collapsed_2040_, lean_object* v_tag_2041_, lean_object* v_opts_2042_, uint8_t v_clsEnabled_2043_, lean_object* v_oldTraces_2044_, lean_object* v_msg_2045_, lean_object* v_resStartStop_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v_fst_2052_; lean_object* v_snd_2053_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v_data_2057_; lean_object* v_fst_2068_; lean_object* v_snd_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; lean_object* v___y_2073_; lean_object* v_a_2074_; uint8_t v___y_2089_; double v___y_2120_; 
v_fst_2052_ = lean_ctor_get(v_resStartStop_2046_, 0);
lean_inc(v_fst_2052_);
v_snd_2053_ = lean_ctor_get(v_resStartStop_2046_, 1);
lean_inc(v_snd_2053_);
lean_dec_ref(v_resStartStop_2046_);
v_fst_2068_ = lean_ctor_get(v_snd_2053_, 0);
lean_inc(v_fst_2068_);
v_snd_2069_ = lean_ctor_get(v_snd_2053_, 1);
lean_inc(v_snd_2069_);
lean_dec(v_snd_2053_);
v___x_2070_ = l_Lean_trace_profiler;
v___x_2071_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2042_, v___x_2070_);
if (v___x_2071_ == 0)
{
v___y_2089_ = v___x_2071_;
goto v___jp_2088_;
}
else
{
lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2125_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2126_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2042_, v___x_2125_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; lean_object* v___x_2128_; double v___x_2129_; double v___x_2130_; double v___x_2131_; 
v___x_2127_ = l_Lean_trace_profiler_threshold;
v___x_2128_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2042_, v___x_2127_);
v___x_2129_ = lean_float_of_nat(v___x_2128_);
v___x_2130_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3);
v___x_2131_ = lean_float_div(v___x_2129_, v___x_2130_);
v___y_2120_ = v___x_2131_;
goto v___jp_2119_;
}
else
{
lean_object* v___x_2132_; lean_object* v___x_2133_; double v___x_2134_; 
v___x_2132_ = l_Lean_trace_profiler_threshold;
v___x_2133_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2042_, v___x_2132_);
v___x_2134_ = lean_float_of_nat(v___x_2133_);
v___y_2120_ = v___x_2134_;
goto v___jp_2119_;
}
}
v___jp_2054_:
{
lean_object* v___x_2058_; 
lean_inc(v___y_2056_);
v___x_2058_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2044_, v_data_2057_, v___y_2056_, v___y_2055_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v___x_2059_; 
lean_dec_ref_known(v___x_2058_, 1);
v___x_2059_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2052_);
return v___x_2059_;
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_dec(v_fst_2052_);
v_a_2060_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2058_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2058_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
v___jp_2072_:
{
uint8_t v_result_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; double v___x_2078_; lean_object* v_data_2079_; 
v_result_2075_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_fst_2052_);
v___x_2076_ = lean_box(v_result_2075_);
v___x_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
v___x_2078_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0);
lean_inc_ref(v_tag_2041_);
lean_inc_ref(v___x_2077_);
lean_inc(v_cls_2039_);
v_data_2079_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2079_, 0, v_cls_2039_);
lean_ctor_set(v_data_2079_, 1, v___x_2077_);
lean_ctor_set(v_data_2079_, 2, v_tag_2041_);
lean_ctor_set_float(v_data_2079_, sizeof(void*)*3, v___x_2078_);
lean_ctor_set_float(v_data_2079_, sizeof(void*)*3 + 8, v___x_2078_);
lean_ctor_set_uint8(v_data_2079_, sizeof(void*)*3 + 16, v_collapsed_2040_);
if (v___x_2071_ == 0)
{
lean_dec_ref_known(v___x_2077_, 1);
lean_dec(v_snd_2069_);
lean_dec(v_fst_2068_);
lean_dec_ref(v_tag_2041_);
lean_dec(v_cls_2039_);
v___y_2055_ = v_a_2074_;
v___y_2056_ = v___y_2073_;
v_data_2057_ = v_data_2079_;
goto v___jp_2054_;
}
else
{
lean_object* v_data_2080_; double v___x_2081_; double v___x_2082_; 
lean_dec_ref_known(v_data_2079_, 3);
v_data_2080_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2080_, 0, v_cls_2039_);
lean_ctor_set(v_data_2080_, 1, v___x_2077_);
lean_ctor_set(v_data_2080_, 2, v_tag_2041_);
v___x_2081_ = lean_unbox_float(v_fst_2068_);
lean_dec(v_fst_2068_);
lean_ctor_set_float(v_data_2080_, sizeof(void*)*3, v___x_2081_);
v___x_2082_ = lean_unbox_float(v_snd_2069_);
lean_dec(v_snd_2069_);
lean_ctor_set_float(v_data_2080_, sizeof(void*)*3 + 8, v___x_2082_);
lean_ctor_set_uint8(v_data_2080_, sizeof(void*)*3 + 16, v_collapsed_2040_);
v___y_2055_ = v_a_2074_;
v___y_2056_ = v___y_2073_;
v_data_2057_ = v_data_2080_;
goto v___jp_2054_;
}
}
v___jp_2083_:
{
lean_object* v_ref_2084_; lean_object* v___x_2085_; 
v_ref_2084_ = lean_ctor_get(v___y_2049_, 2);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
lean_inc(v___y_2048_);
lean_inc_ref(v___y_2047_);
lean_inc(v_fst_2052_);
v___x_2085_ = lean_apply_6(v_msg_2045_, v_fst_2052_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, lean_box(0));
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
lean_dec_ref_known(v___x_2085_, 1);
v___y_2073_ = v_ref_2084_;
v_a_2074_ = v_a_2086_;
goto v___jp_2072_;
}
else
{
lean_object* v___x_2087_; 
lean_dec_ref_known(v___x_2085_, 1);
v___x_2087_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2);
v___y_2073_ = v_ref_2084_;
v_a_2074_ = v___x_2087_;
goto v___jp_2072_;
}
}
v___jp_2088_:
{
if (v_clsEnabled_2043_ == 0)
{
if (v___y_2089_ == 0)
{
lean_object* v___x_2090_; lean_object* v_traceState_2091_; lean_object* v_env_2092_; lean_object* v_nextMacroScope_2093_; lean_object* v_ngen_2094_; lean_object* v_auxDeclNGen_2095_; lean_object* v_cache_2096_; lean_object* v_messages_2097_; lean_object* v_infoState_2098_; lean_object* v_snapshotTasks_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2118_; 
lean_dec(v_snd_2069_);
lean_dec(v_fst_2068_);
lean_dec_ref(v_msg_2045_);
lean_dec_ref(v_tag_2041_);
lean_dec(v_cls_2039_);
v___x_2090_ = lean_st_ref_take(v___y_2050_);
v_traceState_2091_ = lean_ctor_get(v___x_2090_, 4);
v_env_2092_ = lean_ctor_get(v___x_2090_, 0);
v_nextMacroScope_2093_ = lean_ctor_get(v___x_2090_, 1);
v_ngen_2094_ = lean_ctor_get(v___x_2090_, 2);
v_auxDeclNGen_2095_ = lean_ctor_get(v___x_2090_, 3);
v_cache_2096_ = lean_ctor_get(v___x_2090_, 5);
v_messages_2097_ = lean_ctor_get(v___x_2090_, 6);
v_infoState_2098_ = lean_ctor_get(v___x_2090_, 7);
v_snapshotTasks_2099_ = lean_ctor_get(v___x_2090_, 8);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2101_ = v___x_2090_;
v_isShared_2102_ = v_isSharedCheck_2118_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_snapshotTasks_2099_);
lean_inc(v_infoState_2098_);
lean_inc(v_messages_2097_);
lean_inc(v_cache_2096_);
lean_inc(v_traceState_2091_);
lean_inc(v_auxDeclNGen_2095_);
lean_inc(v_ngen_2094_);
lean_inc(v_nextMacroScope_2093_);
lean_inc(v_env_2092_);
lean_dec(v___x_2090_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2118_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
uint64_t v_tid_2103_; lean_object* v_traces_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2117_; 
v_tid_2103_ = lean_ctor_get_uint64(v_traceState_2091_, sizeof(void*)*1);
v_traces_2104_ = lean_ctor_get(v_traceState_2091_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_traceState_2091_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2106_ = v_traceState_2091_;
v_isShared_2107_ = v_isSharedCheck_2117_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_traces_2104_);
lean_dec(v_traceState_2091_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2117_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2108_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2044_, v_traces_2104_);
lean_dec_ref(v_traces_2104_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v___x_2108_);
v___x_2110_ = v___x_2106_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2108_);
lean_ctor_set_uint64(v_reuseFailAlloc_2116_, sizeof(void*)*1, v_tid_2103_);
v___x_2110_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2112_; 
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 4, v___x_2110_);
v___x_2112_ = v___x_2101_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_env_2092_);
lean_ctor_set(v_reuseFailAlloc_2115_, 1, v_nextMacroScope_2093_);
lean_ctor_set(v_reuseFailAlloc_2115_, 2, v_ngen_2094_);
lean_ctor_set(v_reuseFailAlloc_2115_, 3, v_auxDeclNGen_2095_);
lean_ctor_set(v_reuseFailAlloc_2115_, 4, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2115_, 5, v_cache_2096_);
lean_ctor_set(v_reuseFailAlloc_2115_, 6, v_messages_2097_);
lean_ctor_set(v_reuseFailAlloc_2115_, 7, v_infoState_2098_);
lean_ctor_set(v_reuseFailAlloc_2115_, 8, v_snapshotTasks_2099_);
v___x_2112_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = lean_st_ref_put(v___y_2050_, v___x_2112_);
v___x_2114_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2052_);
return v___x_2114_;
}
}
}
}
}
else
{
goto v___jp_2083_;
}
}
else
{
goto v___jp_2083_;
}
}
v___jp_2119_:
{
double v___x_2121_; double v___x_2122_; double v___x_2123_; uint8_t v___x_2124_; 
v___x_2121_ = lean_unbox_float(v_snd_2069_);
v___x_2122_ = lean_unbox_float(v_fst_2068_);
v___x_2123_ = lean_float_sub(v___x_2121_, v___x_2122_);
v___x_2124_ = lean_float_decLt(v___y_2120_, v___x_2123_);
v___y_2089_ = v___x_2124_;
goto v___jp_2088_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___boxed(lean_object* v_cls_2135_, lean_object* v_collapsed_2136_, lean_object* v_tag_2137_, lean_object* v_opts_2138_, lean_object* v_clsEnabled_2139_, lean_object* v_oldTraces_2140_, lean_object* v_msg_2141_, lean_object* v_resStartStop_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
uint8_t v_collapsed_boxed_2148_; uint8_t v_clsEnabled_boxed_2149_; lean_object* v_res_2150_; 
v_collapsed_boxed_2148_ = lean_unbox(v_collapsed_2136_);
v_clsEnabled_boxed_2149_ = lean_unbox(v_clsEnabled_2139_);
v_res_2150_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v_cls_2135_, v_collapsed_boxed_2148_, v_tag_2137_, v_opts_2138_, v_clsEnabled_boxed_2149_, v_oldTraces_2140_, v_msg_2141_, v_resStartStop_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec_ref(v_opts_2138_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(lean_object* v_x_2151_, lean_object* v_x_2152_, lean_object* v_x_2153_, lean_object* v_x_2154_){
_start:
{
lean_object* v_ks_2155_; lean_object* v_vs_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2180_; 
v_ks_2155_ = lean_ctor_get(v_x_2151_, 0);
v_vs_2156_ = lean_ctor_get(v_x_2151_, 1);
v_isSharedCheck_2180_ = !lean_is_exclusive(v_x_2151_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2158_ = v_x_2151_;
v_isShared_2159_ = v_isSharedCheck_2180_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_vs_2156_);
lean_inc(v_ks_2155_);
lean_dec(v_x_2151_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2180_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2160_; uint8_t v___x_2161_; 
v___x_2160_ = lean_array_get_size(v_ks_2155_);
v___x_2161_ = lean_nat_dec_lt(v_x_2152_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2165_; 
lean_dec(v_x_2152_);
v___x_2162_ = lean_array_push(v_ks_2155_, v_x_2153_);
v___x_2163_ = lean_array_push(v_vs_2156_, v_x_2154_);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 1, v___x_2163_);
lean_ctor_set(v___x_2158_, 0, v___x_2162_);
v___x_2165_ = v___x_2158_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2162_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
else
{
lean_object* v_k_x27_2167_; uint8_t v___x_2168_; 
v_k_x27_2167_ = lean_array_fget_borrowed(v_ks_2155_, v_x_2152_);
v___x_2168_ = l_Lean_instBEqMVarId_beq(v_x_2153_, v_k_x27_2167_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2170_; 
if (v_isShared_2159_ == 0)
{
v___x_2170_ = v___x_2158_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_ks_2155_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_vs_2156_);
v___x_2170_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2171_ = lean_unsigned_to_nat(1u);
v___x_2172_ = lean_nat_add(v_x_2152_, v___x_2171_);
lean_dec(v_x_2152_);
v_x_2151_ = v___x_2170_;
v_x_2152_ = v___x_2172_;
goto _start;
}
}
else
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2178_; 
v___x_2175_ = lean_array_fset(v_ks_2155_, v_x_2152_, v_x_2153_);
v___x_2176_ = lean_array_fset(v_vs_2156_, v_x_2152_, v_x_2154_);
lean_dec(v_x_2152_);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 1, v___x_2176_);
lean_ctor_set(v___x_2158_, 0, v___x_2175_);
v___x_2178_ = v___x_2158_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2175_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(lean_object* v_n_2181_, lean_object* v_k_2182_, lean_object* v_v_2183_){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_n_2181_, v___x_2184_, v_k_2182_, v_v_2183_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(lean_object* v_x_2186_, size_t v_x_2187_, size_t v_x_2188_, lean_object* v_x_2189_, lean_object* v_x_2190_){
_start:
{
if (lean_obj_tag(v_x_2186_) == 0)
{
lean_object* v_es_2191_; size_t v___x_2192_; size_t v___x_2193_; lean_object* v_j_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v_es_2191_ = lean_ctor_get(v_x_2186_, 0);
v___x_2192_ = ((size_t)31ULL);
v___x_2193_ = lean_usize_land(v_x_2187_, v___x_2192_);
v_j_2194_ = lean_usize_to_nat(v___x_2193_);
v___x_2195_ = lean_array_get_size(v_es_2191_);
v___x_2196_ = lean_nat_dec_lt(v_j_2194_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_dec(v_j_2194_);
lean_dec(v_x_2190_);
lean_dec(v_x_2189_);
return v_x_2186_;
}
else
{
lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2235_; 
lean_inc_ref(v_es_2191_);
v_isSharedCheck_2235_ = !lean_is_exclusive(v_x_2186_);
if (v_isSharedCheck_2235_ == 0)
{
lean_object* v_unused_2236_; 
v_unused_2236_ = lean_ctor_get(v_x_2186_, 0);
lean_dec(v_unused_2236_);
v___x_2198_ = v_x_2186_;
v_isShared_2199_ = v_isSharedCheck_2235_;
goto v_resetjp_2197_;
}
else
{
lean_dec(v_x_2186_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2235_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v_v_2200_; lean_object* v___x_2201_; lean_object* v_xs_x27_2202_; lean_object* v___y_2204_; 
v_v_2200_ = lean_array_fget(v_es_2191_, v_j_2194_);
v___x_2201_ = lean_box(0);
v_xs_x27_2202_ = lean_array_fset(v_es_2191_, v_j_2194_, v___x_2201_);
switch(lean_obj_tag(v_v_2200_))
{
case 0:
{
lean_object* v_key_2209_; lean_object* v_val_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2220_; 
v_key_2209_ = lean_ctor_get(v_v_2200_, 0);
v_val_2210_ = lean_ctor_get(v_v_2200_, 1);
v_isSharedCheck_2220_ = !lean_is_exclusive(v_v_2200_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2212_ = v_v_2200_;
v_isShared_2213_ = v_isSharedCheck_2220_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_val_2210_);
lean_inc(v_key_2209_);
lean_dec(v_v_2200_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2220_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
uint8_t v___x_2214_; 
v___x_2214_ = l_Lean_instBEqMVarId_beq(v_x_2189_, v_key_2209_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_del_object(v___x_2212_);
v___x_2215_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2209_, v_val_2210_, v_x_2189_, v_x_2190_);
v___x_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
v___y_2204_ = v___x_2216_;
goto v___jp_2203_;
}
else
{
lean_object* v___x_2218_; 
lean_dec(v_val_2210_);
lean_dec(v_key_2209_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 1, v_x_2190_);
lean_ctor_set(v___x_2212_, 0, v_x_2189_);
v___x_2218_ = v___x_2212_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_x_2189_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v_x_2190_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
v___y_2204_ = v___x_2218_;
goto v___jp_2203_;
}
}
}
}
case 1:
{
lean_object* v_node_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2233_; 
v_node_2221_ = lean_ctor_get(v_v_2200_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_v_2200_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2223_ = v_v_2200_;
v_isShared_2224_ = v_isSharedCheck_2233_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_node_2221_);
lean_dec(v_v_2200_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2233_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
size_t v___x_2225_; size_t v___x_2226_; size_t v___x_2227_; size_t v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2231_; 
v___x_2225_ = ((size_t)5ULL);
v___x_2226_ = lean_usize_shift_right(v_x_2187_, v___x_2225_);
v___x_2227_ = ((size_t)1ULL);
v___x_2228_ = lean_usize_add(v_x_2188_, v___x_2227_);
v___x_2229_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_node_2221_, v___x_2226_, v___x_2228_, v_x_2189_, v_x_2190_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 0, v___x_2229_);
v___x_2231_ = v___x_2223_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2229_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
v___y_2204_ = v___x_2231_;
goto v___jp_2203_;
}
}
}
default: 
{
lean_object* v___x_2234_; 
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v_x_2189_);
lean_ctor_set(v___x_2234_, 1, v_x_2190_);
v___y_2204_ = v___x_2234_;
goto v___jp_2203_;
}
}
v___jp_2203_:
{
lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2205_ = lean_array_fset(v_xs_x27_2202_, v_j_2194_, v___y_2204_);
lean_dec(v_j_2194_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v___x_2205_);
v___x_2207_ = v___x_2198_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
else
{
lean_object* v_ks_2237_; lean_object* v_vs_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2256_; 
v_ks_2237_ = lean_ctor_get(v_x_2186_, 0);
v_vs_2238_ = lean_ctor_get(v_x_2186_, 1);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_x_2186_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2240_ = v_x_2186_;
v_isShared_2241_ = v_isSharedCheck_2256_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_vs_2238_);
lean_inc(v_ks_2237_);
lean_dec(v_x_2186_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2256_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_ks_2237_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_vs_2238_);
v___x_2243_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
lean_object* v_newNode_2244_; size_t v___x_2245_; uint8_t v___x_2246_; 
v_newNode_2244_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v___x_2243_, v_x_2189_, v_x_2190_);
v___x_2245_ = ((size_t)7ULL);
v___x_2246_ = lean_usize_dec_le(v___x_2245_, v_x_2188_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v___x_2247_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2244_);
v___x_2248_ = lean_unsigned_to_nat(4u);
v___x_2249_ = lean_nat_dec_lt(v___x_2247_, v___x_2248_);
lean_dec(v___x_2247_);
if (v___x_2249_ == 0)
{
lean_object* v_ks_2250_; lean_object* v_vs_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v_ks_2250_ = lean_ctor_get(v_newNode_2244_, 0);
lean_inc_ref(v_ks_2250_);
v_vs_2251_ = lean_ctor_get(v_newNode_2244_, 1);
lean_inc_ref(v_vs_2251_);
lean_dec_ref(v_newNode_2244_);
v___x_2252_ = lean_unsigned_to_nat(0u);
v___x_2253_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0);
v___x_2254_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_x_2188_, v_ks_2250_, v_vs_2251_, v___x_2252_, v___x_2253_);
lean_dec_ref(v_vs_2251_);
lean_dec_ref(v_ks_2250_);
return v___x_2254_;
}
else
{
return v_newNode_2244_;
}
}
else
{
return v_newNode_2244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(size_t v_depth_2257_, lean_object* v_keys_2258_, lean_object* v_vals_2259_, lean_object* v_i_2260_, lean_object* v_entries_2261_){
_start:
{
lean_object* v___x_2262_; uint8_t v___x_2263_; 
v___x_2262_ = lean_array_get_size(v_keys_2258_);
v___x_2263_ = lean_nat_dec_lt(v_i_2260_, v___x_2262_);
if (v___x_2263_ == 0)
{
lean_dec(v_i_2260_);
return v_entries_2261_;
}
else
{
lean_object* v_k_2264_; lean_object* v_v_2265_; uint64_t v___x_2266_; size_t v_h_2267_; size_t v___x_2268_; lean_object* v___x_2269_; size_t v___x_2270_; size_t v___x_2271_; size_t v___x_2272_; size_t v_h_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v_k_2264_ = lean_array_fget_borrowed(v_keys_2258_, v_i_2260_);
v_v_2265_ = lean_array_fget_borrowed(v_vals_2259_, v_i_2260_);
v___x_2266_ = l_Lean_instHashableMVarId_hash(v_k_2264_);
v_h_2267_ = lean_uint64_to_usize(v___x_2266_);
v___x_2268_ = ((size_t)5ULL);
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = ((size_t)1ULL);
v___x_2271_ = lean_usize_sub(v_depth_2257_, v___x_2270_);
v___x_2272_ = lean_usize_mul(v___x_2268_, v___x_2271_);
v_h_2273_ = lean_usize_shift_right(v_h_2267_, v___x_2272_);
v___x_2274_ = lean_nat_add(v_i_2260_, v___x_2269_);
lean_dec(v_i_2260_);
lean_inc(v_v_2265_);
lean_inc(v_k_2264_);
v___x_2275_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_entries_2261_, v_h_2273_, v_depth_2257_, v_k_2264_, v_v_2265_);
v_i_2260_ = v___x_2274_;
v_entries_2261_ = v___x_2275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg___boxed(lean_object* v_depth_2277_, lean_object* v_keys_2278_, lean_object* v_vals_2279_, lean_object* v_i_2280_, lean_object* v_entries_2281_){
_start:
{
size_t v_depth_boxed_2282_; lean_object* v_res_2283_; 
v_depth_boxed_2282_ = lean_unbox_usize(v_depth_2277_);
lean_dec(v_depth_2277_);
v_res_2283_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_boxed_2282_, v_keys_2278_, v_vals_2279_, v_i_2280_, v_entries_2281_);
lean_dec_ref(v_vals_2279_);
lean_dec_ref(v_keys_2278_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg___boxed(lean_object* v_x_2284_, lean_object* v_x_2285_, lean_object* v_x_2286_, lean_object* v_x_2287_, lean_object* v_x_2288_){
_start:
{
size_t v_x_38001__boxed_2289_; size_t v_x_38002__boxed_2290_; lean_object* v_res_2291_; 
v_x_38001__boxed_2289_ = lean_unbox_usize(v_x_2285_);
lean_dec(v_x_2285_);
v_x_38002__boxed_2290_ = lean_unbox_usize(v_x_2286_);
lean_dec(v_x_2286_);
v_res_2291_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2284_, v_x_38001__boxed_2289_, v_x_38002__boxed_2290_, v_x_2287_, v_x_2288_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(lean_object* v_x_2292_, lean_object* v_x_2293_, lean_object* v_x_2294_){
_start:
{
uint64_t v___x_2295_; size_t v___x_2296_; size_t v___x_2297_; lean_object* v___x_2298_; 
v___x_2295_ = l_Lean_instHashableMVarId_hash(v_x_2293_);
v___x_2296_ = lean_uint64_to_usize(v___x_2295_);
v___x_2297_ = ((size_t)1ULL);
v___x_2298_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2292_, v___x_2296_, v___x_2297_, v_x_2293_, v_x_2294_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(lean_object* v_mvarId_2299_, lean_object* v_val_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v___x_2303_; lean_object* v_mctx_2304_; lean_object* v_cache_2305_; lean_object* v_zetaDeltaFVarIds_2306_; lean_object* v_postponed_2307_; lean_object* v_diag_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2337_; 
v___x_2303_ = lean_st_ref_take(v___y_2301_);
v_mctx_2304_ = lean_ctor_get(v___x_2303_, 0);
v_cache_2305_ = lean_ctor_get(v___x_2303_, 1);
v_zetaDeltaFVarIds_2306_ = lean_ctor_get(v___x_2303_, 2);
v_postponed_2307_ = lean_ctor_get(v___x_2303_, 3);
v_diag_2308_ = lean_ctor_get(v___x_2303_, 4);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2310_ = v___x_2303_;
v_isShared_2311_ = v_isSharedCheck_2337_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_diag_2308_);
lean_inc(v_postponed_2307_);
lean_inc(v_zetaDeltaFVarIds_2306_);
lean_inc(v_cache_2305_);
lean_inc(v_mctx_2304_);
lean_dec(v___x_2303_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2337_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v_depth_2312_; lean_object* v_levelAssignDepth_2313_; lean_object* v_lmvarCounter_2314_; lean_object* v_mvarCounter_2315_; lean_object* v_lDecls_2316_; lean_object* v_decls_2317_; lean_object* v_userNames_2318_; lean_object* v_lAssignment_2319_; lean_object* v_eAssignment_2320_; lean_object* v_dAssignment_2321_; lean_object* v_instanceTypedMVars_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2336_; 
v_depth_2312_ = lean_ctor_get(v_mctx_2304_, 0);
v_levelAssignDepth_2313_ = lean_ctor_get(v_mctx_2304_, 1);
v_lmvarCounter_2314_ = lean_ctor_get(v_mctx_2304_, 2);
v_mvarCounter_2315_ = lean_ctor_get(v_mctx_2304_, 3);
v_lDecls_2316_ = lean_ctor_get(v_mctx_2304_, 4);
v_decls_2317_ = lean_ctor_get(v_mctx_2304_, 5);
v_userNames_2318_ = lean_ctor_get(v_mctx_2304_, 6);
v_lAssignment_2319_ = lean_ctor_get(v_mctx_2304_, 7);
v_eAssignment_2320_ = lean_ctor_get(v_mctx_2304_, 8);
v_dAssignment_2321_ = lean_ctor_get(v_mctx_2304_, 9);
v_instanceTypedMVars_2322_ = lean_ctor_get(v_mctx_2304_, 10);
v_isSharedCheck_2336_ = !lean_is_exclusive(v_mctx_2304_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2324_ = v_mctx_2304_;
v_isShared_2325_ = v_isSharedCheck_2336_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_instanceTypedMVars_2322_);
lean_inc(v_dAssignment_2321_);
lean_inc(v_eAssignment_2320_);
lean_inc(v_lAssignment_2319_);
lean_inc(v_userNames_2318_);
lean_inc(v_decls_2317_);
lean_inc(v_lDecls_2316_);
lean_inc(v_mvarCounter_2315_);
lean_inc(v_lmvarCounter_2314_);
lean_inc(v_levelAssignDepth_2313_);
lean_inc(v_depth_2312_);
lean_dec(v_mctx_2304_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2336_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2329_; 
v___x_2326_ = lean_box(0);
v___x_2327_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_eAssignment_2320_, v_mvarId_2299_, v_val_2300_);
if (v_isShared_2325_ == 0)
{
lean_ctor_set(v___x_2324_, 8, v___x_2327_);
v___x_2329_ = v___x_2324_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_depth_2312_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v_levelAssignDepth_2313_);
lean_ctor_set(v_reuseFailAlloc_2335_, 2, v_lmvarCounter_2314_);
lean_ctor_set(v_reuseFailAlloc_2335_, 3, v_mvarCounter_2315_);
lean_ctor_set(v_reuseFailAlloc_2335_, 4, v_lDecls_2316_);
lean_ctor_set(v_reuseFailAlloc_2335_, 5, v_decls_2317_);
lean_ctor_set(v_reuseFailAlloc_2335_, 6, v_userNames_2318_);
lean_ctor_set(v_reuseFailAlloc_2335_, 7, v_lAssignment_2319_);
lean_ctor_set(v_reuseFailAlloc_2335_, 8, v___x_2327_);
lean_ctor_set(v_reuseFailAlloc_2335_, 9, v_dAssignment_2321_);
lean_ctor_set(v_reuseFailAlloc_2335_, 10, v_instanceTypedMVars_2322_);
v___x_2329_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2331_; 
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 0, v___x_2329_);
v___x_2331_ = v___x_2310_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2329_);
lean_ctor_set(v_reuseFailAlloc_2334_, 1, v_cache_2305_);
lean_ctor_set(v_reuseFailAlloc_2334_, 2, v_zetaDeltaFVarIds_2306_);
lean_ctor_set(v_reuseFailAlloc_2334_, 3, v_postponed_2307_);
lean_ctor_set(v_reuseFailAlloc_2334_, 4, v_diag_2308_);
v___x_2331_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = lean_st_ref_put(v___y_2301_, v___x_2331_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2326_);
return v___x_2333_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg___boxed(lean_object* v_mvarId_2338_, lean_object* v_val_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_2338_, v_val_2339_, v___y_2340_);
lean_dec(v___y_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_keys_2343_, lean_object* v_i_2344_, lean_object* v_k_2345_){
_start:
{
lean_object* v___x_2346_; uint8_t v___x_2347_; 
v___x_2346_ = lean_array_get_size(v_keys_2343_);
v___x_2347_ = lean_nat_dec_lt(v_i_2344_, v___x_2346_);
if (v___x_2347_ == 0)
{
lean_dec(v_i_2344_);
return v___x_2347_;
}
else
{
lean_object* v_k_x27_2348_; uint8_t v___x_2349_; 
v_k_x27_2348_ = lean_array_fget_borrowed(v_keys_2343_, v_i_2344_);
v___x_2349_ = l_Lean_instBEqMVarId_beq(v_k_2345_, v_k_x27_2348_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = lean_unsigned_to_nat(1u);
v___x_2351_ = lean_nat_add(v_i_2344_, v___x_2350_);
lean_dec(v_i_2344_);
v_i_2344_ = v___x_2351_;
goto _start;
}
else
{
lean_dec(v_i_2344_);
return v___x_2347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object* v_keys_2353_, lean_object* v_i_2354_, lean_object* v_k_2355_){
_start:
{
uint8_t v_res_2356_; lean_object* v_r_2357_; 
v_res_2356_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_2353_, v_i_2354_, v_k_2355_);
lean_dec(v_k_2355_);
lean_dec_ref(v_keys_2353_);
v_r_2357_ = lean_box(v_res_2356_);
return v_r_2357_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object* v_x_2358_, size_t v_x_2359_, lean_object* v_x_2360_){
_start:
{
if (lean_obj_tag(v_x_2358_) == 0)
{
lean_object* v_es_2361_; lean_object* v___x_2362_; size_t v___x_2363_; size_t v___x_2364_; lean_object* v_j_2365_; lean_object* v___x_2366_; 
v_es_2361_ = lean_ctor_get(v_x_2358_, 0);
v___x_2362_ = lean_box(2);
v___x_2363_ = ((size_t)31ULL);
v___x_2364_ = lean_usize_land(v_x_2359_, v___x_2363_);
v_j_2365_ = lean_usize_to_nat(v___x_2364_);
v___x_2366_ = lean_array_get_borrowed(v___x_2362_, v_es_2361_, v_j_2365_);
lean_dec(v_j_2365_);
switch(lean_obj_tag(v___x_2366_))
{
case 0:
{
lean_object* v_key_2367_; uint8_t v___x_2368_; 
v_key_2367_ = lean_ctor_get(v___x_2366_, 0);
v___x_2368_ = l_Lean_instBEqMVarId_beq(v_x_2360_, v_key_2367_);
return v___x_2368_;
}
case 1:
{
lean_object* v_node_2369_; size_t v___x_2370_; size_t v___x_2371_; 
v_node_2369_ = lean_ctor_get(v___x_2366_, 0);
v___x_2370_ = ((size_t)5ULL);
v___x_2371_ = lean_usize_shift_right(v_x_2359_, v___x_2370_);
v_x_2358_ = v_node_2369_;
v_x_2359_ = v___x_2371_;
goto _start;
}
default: 
{
uint8_t v___x_2373_; 
v___x_2373_ = 0;
return v___x_2373_;
}
}
}
else
{
lean_object* v_ks_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; 
v_ks_2374_ = lean_ctor_get(v_x_2358_, 0);
v___x_2375_ = lean_unsigned_to_nat(0u);
v___x_2376_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_ks_2374_, v___x_2375_, v_x_2360_);
return v___x_2376_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_2377_, lean_object* v_x_2378_, lean_object* v_x_2379_){
_start:
{
size_t v_x_38222__boxed_2380_; uint8_t v_res_2381_; lean_object* v_r_2382_; 
v_x_38222__boxed_2380_ = lean_unbox_usize(v_x_2378_);
lean_dec(v_x_2378_);
v_res_2381_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2377_, v_x_38222__boxed_2380_, v_x_2379_);
lean_dec(v_x_2379_);
lean_dec_ref(v_x_2377_);
v_r_2382_ = lean_box(v_res_2381_);
return v_r_2382_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object* v_x_2383_, lean_object* v_x_2384_){
_start:
{
uint64_t v___x_2385_; size_t v___x_2386_; uint8_t v___x_2387_; 
v___x_2385_ = l_Lean_instHashableMVarId_hash(v_x_2384_);
v___x_2386_ = lean_uint64_to_usize(v___x_2385_);
v___x_2387_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2383_, v___x_2386_, v_x_2384_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_2388_, lean_object* v_x_2389_){
_start:
{
uint8_t v_res_2390_; lean_object* v_r_2391_; 
v_res_2390_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_2388_, v_x_2389_);
lean_dec(v_x_2389_);
lean_dec_ref(v_x_2388_);
v_r_2391_ = lean_box(v_res_2390_);
return v_r_2391_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object* v_mvarId_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v___x_2395_; lean_object* v_mctx_2396_; lean_object* v_eAssignment_2397_; uint8_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2395_ = lean_st_ref_get(v___y_2393_);
v_mctx_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc_ref(v_mctx_2396_);
lean_dec(v___x_2395_);
v_eAssignment_2397_ = lean_ctor_get(v_mctx_2396_, 8);
lean_inc_ref(v_eAssignment_2397_);
lean_dec_ref(v_mctx_2396_);
v___x_2398_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_eAssignment_2397_, v_mvarId_2392_);
lean_dec_ref(v_eAssignment_2397_);
v___x_2399_ = lean_box(v___x_2398_);
v___x_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2399_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object* v_mvarId_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec(v_mvarId_2401_);
return v_res_2404_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0));
v___x_2407_ = l_Lean_stringToMessageData(v___x_2406_);
return v___x_2407_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2409_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2));
v___x_2410_ = l_Lean_stringToMessageData(v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0___boxed(lean_object* v_fuel_2411_, lean_object* v_a_2412_, lean_object* v_x_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lean_Meta_Transport_mkEquiv___lam__0(v_fuel_2411_, v_a_2412_, v_x_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
lean_dec(v_fuel_2411_);
return v_res_2419_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__4___closed__1));
v___x_2423_ = l_Lean_stringToMessageData(v___x_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1(lean_object* v_fuel_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v___x_2428_, lean_object* v___x_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_declName_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2438_ = lean_unsigned_to_nat(1u);
v___x_2439_ = lean_nat_sub(v_fuel_2424_, v___x_2438_);
lean_inc(v___x_2439_);
lean_inc(v_declName_2432_);
v___x_2440_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_2432_, v_a_2425_, v___x_2439_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2442_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v___x_2440_, 1);
v___x_2442_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_2426_, v___y_2434_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2457_; lean_object* v___x_2483_; uint8_t v_transparency_2484_; uint8_t v___x_2485_; uint8_t v___x_2486_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2443_);
lean_dec_ref_known(v___x_2442_, 1);
v___x_2483_ = l_Lean_Meta_Context_config(v___y_2433_);
v_transparency_2484_ = lean_ctor_get_uint8(v___x_2483_, 9);
lean_dec_ref(v___x_2483_);
v___x_2485_ = 1;
v___x_2486_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2484_, v___x_2485_);
if (v___x_2486_ == 0)
{
lean_object* v_keyedConfig_2487_; uint8_t v_trackZetaDelta_2488_; lean_object* v_zetaDeltaSet_2489_; lean_object* v_lctx_2490_; lean_object* v_localInstances_2491_; lean_object* v_defEqCtx_x3f_2492_; lean_object* v_synthPendingDepth_2493_; lean_object* v_customCanUnfoldPredicate_x3f_2494_; uint8_t v_univApprox_2495_; uint8_t v_inTypeClassResolution_2496_; uint8_t v_cacheInferType_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v_keyedConfig_2487_ = lean_ctor_get(v___y_2433_, 0);
v_trackZetaDelta_2488_ = lean_ctor_get_uint8(v___y_2433_, sizeof(void*)*7);
v_zetaDeltaSet_2489_ = lean_ctor_get(v___y_2433_, 1);
v_lctx_2490_ = lean_ctor_get(v___y_2433_, 2);
v_localInstances_2491_ = lean_ctor_get(v___y_2433_, 3);
v_defEqCtx_x3f_2492_ = lean_ctor_get(v___y_2433_, 4);
v_synthPendingDepth_2493_ = lean_ctor_get(v___y_2433_, 5);
v_customCanUnfoldPredicate_x3f_2494_ = lean_ctor_get(v___y_2433_, 6);
v_univApprox_2495_ = lean_ctor_get_uint8(v___y_2433_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2496_ = lean_ctor_get_uint8(v___y_2433_, sizeof(void*)*7 + 2);
v_cacheInferType_2497_ = lean_ctor_get_uint8(v___y_2433_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2487_);
v___x_2498_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2485_, v_keyedConfig_2487_);
lean_inc(v_customCanUnfoldPredicate_x3f_2494_);
lean_inc(v_synthPendingDepth_2493_);
lean_inc(v_defEqCtx_x3f_2492_);
lean_inc_ref(v_localInstances_2491_);
lean_inc_ref(v_lctx_2490_);
lean_inc(v_zetaDeltaSet_2489_);
v___x_2499_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
lean_ctor_set(v___x_2499_, 1, v_zetaDeltaSet_2489_);
lean_ctor_set(v___x_2499_, 2, v_lctx_2490_);
lean_ctor_set(v___x_2499_, 3, v_localInstances_2491_);
lean_ctor_set(v___x_2499_, 4, v_defEqCtx_x3f_2492_);
lean_ctor_set(v___x_2499_, 5, v_synthPendingDepth_2493_);
lean_ctor_set(v___x_2499_, 6, v_customCanUnfoldPredicate_x3f_2494_);
lean_ctor_set_uint8(v___x_2499_, sizeof(void*)*7, v_trackZetaDelta_2488_);
lean_ctor_set_uint8(v___x_2499_, sizeof(void*)*7 + 1, v_univApprox_2495_);
lean_ctor_set_uint8(v___x_2499_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2496_);
lean_ctor_set_uint8(v___x_2499_, sizeof(void*)*7 + 3, v_cacheInferType_2497_);
lean_inc(v_a_2443_);
v___x_2500_ = l_Lean_Meta_isExprDefEq(v_a_2443_, v_a_2431_, v___x_2499_, v___y_2434_, v___y_2435_, v___y_2436_);
lean_dec_ref_known(v___x_2499_, 7);
v___y_2457_ = v___x_2500_;
goto v___jp_2456_;
}
else
{
lean_object* v___x_2501_; 
lean_inc(v_a_2443_);
v___x_2501_ = l_Lean_Meta_isExprDefEq(v_a_2443_, v_a_2431_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
v___y_2457_ = v___x_2501_;
goto v___jp_2456_;
}
v___jp_2444_:
{
lean_object* v___x_2449_; 
v___x_2449_ = l_Lean_Meta_Transport_mkEquiv(v_a_2427_, v_a_2443_, v___x_2439_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v_a_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_a_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_a_2450_);
lean_dec_ref_known(v___x_2449_, 1);
v___x_2451_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0));
v___x_2452_ = l_Lean_Name_mkStr2(v___x_2428_, v___x_2451_);
v___x_2453_ = lean_array_push(v___x_2429_, v_a_2450_);
v___x_2454_ = lean_array_push(v___x_2453_, v_a_2441_);
v___x_2455_ = l_Lean_Meta_mkAppM(v___x_2452_, v___x_2454_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
return v___x_2455_;
}
else
{
lean_dec(v_a_2441_);
lean_dec_ref(v___x_2429_);
lean_dec_ref(v___x_2428_);
return v___x_2449_;
}
}
v___jp_2456_:
{
if (lean_obj_tag(v___y_2457_) == 0)
{
lean_object* v_a_2458_; uint8_t v___x_2459_; 
v_a_2458_ = lean_ctor_get(v___y_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___y_2457_, 1);
v___x_2459_ = lean_unbox(v_a_2458_);
lean_dec(v_a_2458_);
if (v___x_2459_ == 0)
{
lean_dec(v_declName_2432_);
v___y_2445_ = v___y_2433_;
v___y_2446_ = v___y_2434_;
v___y_2447_ = v___y_2435_;
v___y_2448_ = v___y_2436_;
goto v___jp_2444_;
}
else
{
lean_object* v___x_2460_; uint8_t v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2460_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_2461_ = lean_unbox(v_a_2430_);
v___x_2462_ = l_Lean_MessageData_ofConstName(v_declName_2432_, v___x_2461_);
v___x_2463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2460_);
lean_ctor_set(v___x_2463_, 1, v___x_2462_);
v___x_2464_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2, &l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2465_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_dec_ref_known(v___x_2466_, 1);
v___y_2445_ = v___y_2433_;
v___y_2446_ = v___y_2434_;
v___y_2447_ = v___y_2435_;
v___y_2448_ = v___y_2436_;
goto v___jp_2444_;
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v_a_2443_);
lean_dec(v_a_2441_);
lean_dec(v___x_2439_);
lean_dec_ref(v___x_2429_);
lean_dec_ref(v___x_2428_);
lean_dec_ref(v_a_2427_);
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2466_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2466_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_a_2443_);
lean_dec(v_a_2441_);
lean_dec(v___x_2439_);
lean_dec(v_declName_2432_);
lean_dec_ref(v___x_2429_);
lean_dec_ref(v___x_2428_);
lean_dec_ref(v_a_2427_);
v_a_2475_ = lean_ctor_get(v___y_2457_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___y_2457_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___y_2457_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___y_2457_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
}
else
{
lean_dec(v_a_2441_);
lean_dec(v___x_2439_);
lean_dec(v_declName_2432_);
lean_dec_ref(v_a_2431_);
lean_dec_ref(v___x_2429_);
lean_dec_ref(v___x_2428_);
lean_dec_ref(v_a_2427_);
return v___x_2442_;
}
}
else
{
lean_dec(v___x_2439_);
lean_dec(v_declName_2432_);
lean_dec_ref(v_a_2431_);
lean_dec_ref(v___x_2429_);
lean_dec_ref(v___x_2428_);
lean_dec_ref(v_a_2427_);
lean_dec_ref(v_a_2426_);
return v___x_2440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___boxed(lean_object* v_fuel_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v___x_2506_, lean_object* v___x_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_declName_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l_Lean_Meta_Transport_mkEquiv___lam__1(v_fuel_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v___x_2506_, v___x_2507_, v_a_2508_, v_a_2509_, v_declName_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v_a_2508_);
lean_dec(v_fuel_2502_);
return v_res_2516_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__3___closed__0));
v___x_2519_ = l_Lean_stringToMessageData(v___x_2518_);
return v___x_2519_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__3___closed__2));
v___x_2522_ = l_Lean_stringToMessageData(v___x_2521_);
return v___x_2522_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__1(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__0));
v___x_2525_ = l_Lean_stringToMessageData(v___x_2524_);
return v___x_2525_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__3(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__2));
v___x_2528_ = l_Lean_stringToMessageData(v___x_2527_);
return v___x_2528_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__9(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2537_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2538_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__8));
v___x_2539_ = l_Lean_Name_append(v___x_2538_, v___x_2537_);
return v___x_2539_;
}
}
static double _init_l_Lean_Meta_Transport_mkEquiv___closed__10(void){
_start:
{
lean_object* v___x_2540_; double v___x_2541_; 
v___x_2540_ = lean_unsigned_to_nat(1000000000u);
v___x_2541_ = lean_float_of_nat(v___x_2540_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4(lean_object* v_fuel_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v___x_2546_, lean_object* v___x_2547_, lean_object* v_a_2548_, uint8_t v___x_2549_, lean_object* v_a_2550_, lean_object* v_declName_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2557_ = lean_unsigned_to_nat(1u);
v___x_2558_ = lean_nat_sub(v_fuel_2542_, v___x_2557_);
lean_inc(v___x_2558_);
lean_inc(v_declName_2551_);
v___x_2559_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_2551_, v_a_2543_, v___x_2558_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2561_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v___x_2561_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_2544_, v___y_2553_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2576_; lean_object* v___x_2602_; uint8_t v_transparency_2603_; uint8_t v___x_2604_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___x_2561_, 1);
v___x_2602_ = l_Lean_Meta_Context_config(v___y_2552_);
v_transparency_2603_ = lean_ctor_get_uint8(v___x_2602_, 9);
lean_dec_ref(v___x_2602_);
v___x_2604_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2603_, v___x_2549_);
if (v___x_2604_ == 0)
{
lean_object* v_keyedConfig_2605_; uint8_t v_trackZetaDelta_2606_; lean_object* v_zetaDeltaSet_2607_; lean_object* v_lctx_2608_; lean_object* v_localInstances_2609_; lean_object* v_defEqCtx_x3f_2610_; lean_object* v_synthPendingDepth_2611_; lean_object* v_customCanUnfoldPredicate_x3f_2612_; uint8_t v_univApprox_2613_; uint8_t v_inTypeClassResolution_2614_; uint8_t v_cacheInferType_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v_keyedConfig_2605_ = lean_ctor_get(v___y_2552_, 0);
v_trackZetaDelta_2606_ = lean_ctor_get_uint8(v___y_2552_, sizeof(void*)*7);
v_zetaDeltaSet_2607_ = lean_ctor_get(v___y_2552_, 1);
v_lctx_2608_ = lean_ctor_get(v___y_2552_, 2);
v_localInstances_2609_ = lean_ctor_get(v___y_2552_, 3);
v_defEqCtx_x3f_2610_ = lean_ctor_get(v___y_2552_, 4);
v_synthPendingDepth_2611_ = lean_ctor_get(v___y_2552_, 5);
v_customCanUnfoldPredicate_x3f_2612_ = lean_ctor_get(v___y_2552_, 6);
v_univApprox_2613_ = lean_ctor_get_uint8(v___y_2552_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2614_ = lean_ctor_get_uint8(v___y_2552_, sizeof(void*)*7 + 2);
v_cacheInferType_2615_ = lean_ctor_get_uint8(v___y_2552_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2605_);
v___x_2616_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2549_, v_keyedConfig_2605_);
lean_inc(v_customCanUnfoldPredicate_x3f_2612_);
lean_inc(v_synthPendingDepth_2611_);
lean_inc(v_defEqCtx_x3f_2610_);
lean_inc_ref(v_localInstances_2609_);
lean_inc_ref(v_lctx_2608_);
lean_inc(v_zetaDeltaSet_2607_);
v___x_2617_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
lean_ctor_set(v___x_2617_, 1, v_zetaDeltaSet_2607_);
lean_ctor_set(v___x_2617_, 2, v_lctx_2608_);
lean_ctor_set(v___x_2617_, 3, v_localInstances_2609_);
lean_ctor_set(v___x_2617_, 4, v_defEqCtx_x3f_2610_);
lean_ctor_set(v___x_2617_, 5, v_synthPendingDepth_2611_);
lean_ctor_set(v___x_2617_, 6, v_customCanUnfoldPredicate_x3f_2612_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*7, v_trackZetaDelta_2606_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*7 + 1, v_univApprox_2613_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2614_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*7 + 3, v_cacheInferType_2615_);
lean_inc(v_a_2562_);
v___x_2618_ = l_Lean_Meta_isExprDefEq(v_a_2562_, v_a_2550_, v___x_2617_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec_ref_known(v___x_2617_, 7);
v___y_2576_ = v___x_2618_;
goto v___jp_2575_;
}
else
{
lean_object* v___x_2619_; 
lean_inc(v_a_2562_);
v___x_2619_ = l_Lean_Meta_isExprDefEq(v_a_2562_, v_a_2550_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
v___y_2576_ = v___x_2619_;
goto v___jp_2575_;
}
v___jp_2563_:
{
lean_object* v___x_2568_; 
v___x_2568_ = l_Lean_Meta_Transport_mkEquiv(v_a_2545_, v_a_2562_, v___x_2558_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
v___x_2570_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0));
v___x_2571_ = l_Lean_Name_mkStr2(v___x_2546_, v___x_2570_);
v___x_2572_ = lean_array_push(v___x_2547_, v_a_2569_);
v___x_2573_ = lean_array_push(v___x_2572_, v_a_2560_);
v___x_2574_ = l_Lean_Meta_mkAppM(v___x_2571_, v___x_2573_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
return v___x_2574_;
}
else
{
lean_dec(v_a_2560_);
lean_dec_ref(v___x_2547_);
lean_dec_ref(v___x_2546_);
return v___x_2568_;
}
}
v___jp_2575_:
{
if (lean_obj_tag(v___y_2576_) == 0)
{
lean_object* v_a_2577_; uint8_t v___x_2578_; 
v_a_2577_ = lean_ctor_get(v___y_2576_, 0);
lean_inc(v_a_2577_);
lean_dec_ref_known(v___y_2576_, 1);
v___x_2578_ = lean_unbox(v_a_2577_);
lean_dec(v_a_2577_);
if (v___x_2578_ == 0)
{
lean_dec(v_declName_2551_);
v___y_2564_ = v___y_2552_;
v___y_2565_ = v___y_2553_;
v___y_2566_ = v___y_2554_;
v___y_2567_ = v___y_2555_;
goto v___jp_2563_;
}
else
{
lean_object* v___x_2579_; uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2579_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_2580_ = lean_unbox(v_a_2548_);
v___x_2581_ = l_Lean_MessageData_ofConstName(v_declName_2551_, v___x_2580_);
v___x_2582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2579_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2, &l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2);
v___x_2584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2584_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_dec_ref_known(v___x_2585_, 1);
v___y_2564_ = v___y_2552_;
v___y_2565_ = v___y_2553_;
v___y_2566_ = v___y_2554_;
v___y_2567_ = v___y_2555_;
goto v___jp_2563_;
}
else
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
lean_dec(v_a_2562_);
lean_dec(v_a_2560_);
lean_dec(v___x_2558_);
lean_dec_ref(v___x_2547_);
lean_dec_ref(v___x_2546_);
lean_dec_ref(v_a_2545_);
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v___x_2585_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2585_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
lean_dec(v_a_2562_);
lean_dec(v_a_2560_);
lean_dec(v___x_2558_);
lean_dec(v_declName_2551_);
lean_dec_ref(v___x_2547_);
lean_dec_ref(v___x_2546_);
lean_dec_ref(v_a_2545_);
v_a_2594_ = lean_ctor_get(v___y_2576_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___y_2576_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2596_ = v___y_2576_;
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___y_2576_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2594_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
else
{
lean_dec(v_a_2560_);
lean_dec(v___x_2558_);
lean_dec(v_declName_2551_);
lean_dec_ref(v_a_2550_);
lean_dec_ref(v___x_2547_);
lean_dec_ref(v___x_2546_);
lean_dec_ref(v_a_2545_);
return v___x_2561_;
}
}
else
{
lean_dec(v___x_2558_);
lean_dec(v_declName_2551_);
lean_dec_ref(v_a_2550_);
lean_dec_ref(v___x_2547_);
lean_dec_ref(v___x_2546_);
lean_dec_ref(v_a_2545_);
lean_dec_ref(v_a_2544_);
return v___x_2559_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4___boxed(lean_object* v_fuel_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v___x_2624_, lean_object* v___x_2625_, lean_object* v_a_2626_, lean_object* v___x_2627_, lean_object* v_a_2628_, lean_object* v_declName_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
uint8_t v___x_38428__boxed_2635_; lean_object* v_res_2636_; 
v___x_38428__boxed_2635_ = lean_unbox(v___x_2627_);
v_res_2636_ = l_Lean_Meta_Transport_mkEquiv___lam__4(v_fuel_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v___x_2624_, v___x_2625_, v_a_2626_, v___x_38428__boxed_2635_, v_a_2628_, v_declName_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v_a_2626_);
lean_dec(v_fuel_2620_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3(lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_fuel_2639_, lean_object* v___x_2640_, lean_object* v_a_2641_, uint8_t v___x_2642_, lean_object* v_____r_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2649_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0));
v___x_2650_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_2651_ = lean_unsigned_to_nat(2u);
v___x_2652_ = lean_mk_empty_array_with_capacity(v___x_2651_);
lean_inc_ref(v_a_2637_);
lean_inc_ref(v___x_2652_);
v___x_2653_ = lean_array_push(v___x_2652_, v_a_2637_);
lean_inc_ref(v_a_2638_);
v___x_2654_ = lean_array_push(v___x_2653_, v_a_2638_);
v___x_2655_ = l_Lean_Meta_mkAppM(v___x_2650_, v___x_2654_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___f_2657_; lean_object* v___x_2658_; lean_object* v_env_2659_; lean_object* v___x_2660_; lean_object* v_ext_2661_; lean_object* v_toEnvExtension_2662_; lean_object* v_asyncMode_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc_n(v_a_2656_, 2);
lean_dec_ref_known(v___x_2655_, 1);
lean_inc(v_fuel_2639_);
v___f_2657_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2657_, 0, v_fuel_2639_);
lean_closure_set(v___f_2657_, 1, v_a_2656_);
v___x_2658_ = lean_st_ref_get(v___y_2647_);
v_env_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc_ref(v_env_2659_);
lean_dec(v___x_2658_);
v___x_2660_ = l_Lean_Meta_Transport_transportExt;
v_ext_2661_ = lean_ctor_get(v___x_2660_, 1);
v_toEnvExtension_2662_ = lean_ctor_get(v_ext_2661_, 0);
v_asyncMode_2663_ = lean_ctor_get(v_toEnvExtension_2662_, 2);
v___x_2664_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2640_, v___x_2660_, v_env_2659_, v_asyncMode_2663_);
lean_inc(v___x_2664_);
v___x_2665_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2664_, v_a_2656_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2667_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
lean_dec_ref_known(v___x_2665_, 1);
v___x_2667_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2666_, v___f_2657_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
lean_dec(v_a_2666_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2743_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2670_ = v___x_2667_;
v_isShared_2671_ = v_isSharedCheck_2743_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2667_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2743_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
if (lean_obj_tag(v_a_2668_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2738_; 
lean_del_object(v___x_2670_);
v_a_2672_ = lean_ctor_get(v_a_2668_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v_a_2668_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2674_ = v_a_2668_;
v_isShared_2675_ = v_isSharedCheck_2738_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v_a_2668_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2738_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; lean_object* v___x_2678_; lean_object* v___x_2680_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v___x_2678_ = l_Lean_mkSort(v_a_2677_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 1);
lean_ctor_set(v___x_2674_, 0, v___x_2678_);
v___x_2680_ = v___x_2674_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2678_);
v___x_2680_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
uint8_t v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2681_ = 0;
v___x_2682_ = lean_box(0);
v___x_2683_ = l_Lean_Meta_mkFreshExprMVar(v___x_2680_, v___x_2681_, v___x_2682_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc_n(v_a_2684_, 2);
lean_dec_ref_known(v___x_2683_, 1);
lean_inc_ref(v___x_2652_);
v___x_2685_ = lean_array_push(v___x_2652_, v_a_2684_);
lean_inc_ref(v_a_2638_);
v___x_2686_ = lean_array_push(v___x_2685_, v_a_2638_);
v___x_2687_ = l_Lean_Meta_mkAppM(v___x_2650_, v___x_2686_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2689_; lean_object* v___f_2690_; lean_object* v___x_2691_; 
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc_n(v_a_2688_, 2);
lean_dec_ref_known(v___x_2687_, 1);
v___x_2689_ = lean_box(v___x_2642_);
lean_inc_ref(v_a_2638_);
lean_inc_ref(v_a_2637_);
v___f_2690_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__4___boxed), 15, 9);
lean_closure_set(v___f_2690_, 0, v_fuel_2639_);
lean_closure_set(v___f_2690_, 1, v_a_2688_);
lean_closure_set(v___f_2690_, 2, v_a_2684_);
lean_closure_set(v___f_2690_, 3, v_a_2637_);
lean_closure_set(v___f_2690_, 4, v___x_2649_);
lean_closure_set(v___f_2690_, 5, v___x_2652_);
lean_closure_set(v___f_2690_, 6, v_a_2641_);
lean_closure_set(v___f_2690_, 7, v___x_2689_);
lean_closure_set(v___f_2690_, 8, v_a_2638_);
v___x_2691_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2664_, v_a_2688_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2693_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_a_2692_);
lean_dec_ref_known(v___x_2691_, 1);
v___x_2693_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2692_, v___f_2690_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
lean_dec(v_a_2692_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2712_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2696_ = v___x_2693_;
v_isShared_2697_ = v_isSharedCheck_2712_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2693_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2712_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
if (lean_obj_tag(v_a_2694_) == 0)
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
lean_dec_ref_known(v_a_2694_, 1);
lean_del_object(v___x_2696_);
v___x_2698_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1);
v___x_2699_ = l_Lean_indentExpr(v_a_2637_);
v___x_2700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2698_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
v___x_2701_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3);
v___x_2702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2700_);
lean_ctor_set(v___x_2702_, 1, v___x_2701_);
v___x_2703_ = l_Lean_indentExpr(v_a_2638_);
v___x_2704_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2702_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
v___x_2705_ = l_Lean_MessageData_note(v_a_2672_);
v___x_2706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2704_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2706_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
return v___x_2707_;
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; 
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2708_ = lean_ctor_get(v_a_2694_, 0);
lean_inc(v_a_2708_);
lean_dec_ref_known(v_a_2694_, 1);
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v_a_2708_);
v___x_2710_ = v___x_2696_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_a_2708_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2713_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2693_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2693_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
else
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2728_; 
lean_dec_ref(v___f_2690_);
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2721_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2723_ = v___x_2691_;
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___x_2691_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2726_; 
if (v_isShared_2724_ == 0)
{
v___x_2726_ = v___x_2723_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_a_2721_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
else
{
lean_dec(v_a_2684_);
lean_dec(v_a_2672_);
lean_dec(v___x_2664_);
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
return v___x_2687_;
}
}
else
{
lean_dec(v_a_2672_);
lean_dec(v___x_2664_);
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
return v___x_2683_;
}
}
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
lean_del_object(v___x_2674_);
lean_dec(v_a_2672_);
lean_dec(v___x_2664_);
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2730_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v___x_2676_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2676_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_a_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; 
lean_dec(v___x_2664_);
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2739_ = lean_ctor_get(v_a_2668_, 0);
lean_inc(v_a_2739_);
lean_dec_ref_known(v_a_2668_, 1);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v_a_2739_);
v___x_2741_ = v___x_2670_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2739_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec(v___x_2664_);
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2744_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2667_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2667_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec(v___x_2664_);
lean_dec_ref(v___f_2657_);
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
v_a_2752_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2665_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2665_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
else
{
lean_dec_ref(v___x_2652_);
lean_dec(v_a_2641_);
lean_dec(v_fuel_2639_);
lean_dec_ref(v_a_2638_);
lean_dec_ref(v_a_2637_);
return v___x_2655_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv(lean_object* v_src_2760_, lean_object* v_tgt_2761_, lean_object* v_fuel_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0);
v___x_2769_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_src_2760_, v___y_2764_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_3302_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_2772_ = v___x_2769_;
v_isShared_2773_ = v_isSharedCheck_3302_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2769_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_3302_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2774_; 
v___x_2774_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_tgt_2761_, v___y_2764_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_3301_; 
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_2777_ = v___x_2774_;
v_isShared_2778_ = v_isSharedCheck_3301_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2774_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_3301_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2896_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_3047_; lean_object* v_toCold_3081_; lean_object* v_options_3082_; lean_object* v_inheritedTraceOptions_3083_; uint8_t v_hasTrace_3084_; uint8_t v___x_3085_; 
v_toCold_3081_ = lean_ctor_get(v___y_2765_, 0);
v_options_3082_ = lean_ctor_get(v_toCold_3081_, 2);
v_inheritedTraceOptions_3083_ = lean_ctor_get(v_toCold_3081_, 11);
v_hasTrace_3084_ = lean_ctor_get_uint8(v_options_3082_, sizeof(void*)*1);
v___x_3085_ = 1;
if (v_hasTrace_3084_ == 0)
{
lean_object* v___x_3086_; uint8_t v_transparency_3087_; uint8_t v___x_3088_; 
lean_del_object(v___x_2777_);
lean_del_object(v___x_2772_);
v___x_3086_ = l_Lean_Meta_Context_config(v___y_2763_);
v_transparency_3087_ = lean_ctor_get_uint8(v___x_3086_, 9);
lean_dec_ref(v___x_3086_);
v___x_3088_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3087_, v___x_3085_);
if (v___x_3088_ == 0)
{
lean_object* v_keyedConfig_3089_; uint8_t v_trackZetaDelta_3090_; lean_object* v_zetaDeltaSet_3091_; lean_object* v_lctx_3092_; lean_object* v_localInstances_3093_; lean_object* v_defEqCtx_x3f_3094_; lean_object* v_synthPendingDepth_3095_; lean_object* v_customCanUnfoldPredicate_x3f_3096_; uint8_t v_univApprox_3097_; uint8_t v_inTypeClassResolution_3098_; uint8_t v_cacheInferType_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_keyedConfig_3089_ = lean_ctor_get(v___y_2763_, 0);
v_trackZetaDelta_3090_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7);
v_zetaDeltaSet_3091_ = lean_ctor_get(v___y_2763_, 1);
v_lctx_3092_ = lean_ctor_get(v___y_2763_, 2);
v_localInstances_3093_ = lean_ctor_get(v___y_2763_, 3);
v_defEqCtx_x3f_3094_ = lean_ctor_get(v___y_2763_, 4);
v_synthPendingDepth_3095_ = lean_ctor_get(v___y_2763_, 5);
v_customCanUnfoldPredicate_x3f_3096_ = lean_ctor_get(v___y_2763_, 6);
v_univApprox_3097_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3098_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 2);
v_cacheInferType_3099_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3089_);
v___x_3100_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3085_, v_keyedConfig_3089_);
lean_inc(v_customCanUnfoldPredicate_x3f_3096_);
lean_inc(v_synthPendingDepth_3095_);
lean_inc(v_defEqCtx_x3f_3094_);
lean_inc_ref(v_localInstances_3093_);
lean_inc_ref(v_lctx_3092_);
lean_inc(v_zetaDeltaSet_3091_);
v___x_3101_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3101_, 0, v___x_3100_);
lean_ctor_set(v___x_3101_, 1, v_zetaDeltaSet_3091_);
lean_ctor_set(v___x_3101_, 2, v_lctx_3092_);
lean_ctor_set(v___x_3101_, 3, v_localInstances_3093_);
lean_ctor_set(v___x_3101_, 4, v_defEqCtx_x3f_3094_);
lean_ctor_set(v___x_3101_, 5, v_synthPendingDepth_3095_);
lean_ctor_set(v___x_3101_, 6, v_customCanUnfoldPredicate_x3f_3096_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*7, v_trackZetaDelta_3090_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*7 + 1, v_univApprox_3097_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3098_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*7 + 3, v_cacheInferType_3099_);
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3102_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___x_3101_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec_ref_known(v___x_3101_, 7);
v___y_3047_ = v___x_3102_;
goto v___jp_3046_;
}
else
{
lean_object* v___x_3103_; 
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3103_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3047_ = v___x_3103_;
goto v___jp_3046_;
}
}
else
{
lean_object* v___f_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v_a_3112_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v_a_3127_; lean_object* v___y_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v_a_3174_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v_a_3186_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; 
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___f_3104_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3104_, 0, v_a_2770_);
lean_closure_set(v___f_3104_, 1, v_a_2775_);
v___x_3105_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3106_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3107_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__9, &l_Lean_Meta_Transport_mkEquiv___closed__9_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__9);
v___x_3108_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3083_, v_options_3082_, v___x_3107_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3281_; uint8_t v___x_3282_; 
v___x_3281_ = l_Lean_trace_profiler;
v___x_3282_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_3082_, v___x_3281_);
if (v___x_3282_ == 0)
{
lean_object* v___x_3283_; uint8_t v_transparency_3284_; uint8_t v___x_3285_; 
lean_dec_ref(v___f_3104_);
lean_del_object(v___x_2777_);
lean_del_object(v___x_2772_);
v___x_3283_ = l_Lean_Meta_Context_config(v___y_2763_);
v_transparency_3284_ = lean_ctor_get_uint8(v___x_3283_, 9);
lean_dec_ref(v___x_3283_);
v___x_3285_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3284_, v___x_3085_);
if (v___x_3285_ == 0)
{
lean_object* v_keyedConfig_3286_; uint8_t v_trackZetaDelta_3287_; lean_object* v_zetaDeltaSet_3288_; lean_object* v_lctx_3289_; lean_object* v_localInstances_3290_; lean_object* v_defEqCtx_x3f_3291_; lean_object* v_synthPendingDepth_3292_; lean_object* v_customCanUnfoldPredicate_x3f_3293_; uint8_t v_univApprox_3294_; uint8_t v_inTypeClassResolution_3295_; uint8_t v_cacheInferType_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v_keyedConfig_3286_ = lean_ctor_get(v___y_2763_, 0);
v_trackZetaDelta_3287_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7);
v_zetaDeltaSet_3288_ = lean_ctor_get(v___y_2763_, 1);
v_lctx_3289_ = lean_ctor_get(v___y_2763_, 2);
v_localInstances_3290_ = lean_ctor_get(v___y_2763_, 3);
v_defEqCtx_x3f_3291_ = lean_ctor_get(v___y_2763_, 4);
v_synthPendingDepth_3292_ = lean_ctor_get(v___y_2763_, 5);
v_customCanUnfoldPredicate_x3f_3293_ = lean_ctor_get(v___y_2763_, 6);
v_univApprox_3294_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3295_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 2);
v_cacheInferType_3296_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3286_);
v___x_3297_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3085_, v_keyedConfig_3286_);
lean_inc(v_customCanUnfoldPredicate_x3f_3293_);
lean_inc(v_synthPendingDepth_3292_);
lean_inc(v_defEqCtx_x3f_3291_);
lean_inc_ref(v_localInstances_3290_);
lean_inc_ref(v_lctx_3289_);
lean_inc(v_zetaDeltaSet_3288_);
v___x_3298_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3298_, 0, v___x_3297_);
lean_ctor_set(v___x_3298_, 1, v_zetaDeltaSet_3288_);
lean_ctor_set(v___x_3298_, 2, v_lctx_3289_);
lean_ctor_set(v___x_3298_, 3, v_localInstances_3290_);
lean_ctor_set(v___x_3298_, 4, v_defEqCtx_x3f_3291_);
lean_ctor_set(v___x_3298_, 5, v_synthPendingDepth_3292_);
lean_ctor_set(v___x_3298_, 6, v_customCanUnfoldPredicate_x3f_3293_);
lean_ctor_set_uint8(v___x_3298_, sizeof(void*)*7, v_trackZetaDelta_3287_);
lean_ctor_set_uint8(v___x_3298_, sizeof(void*)*7 + 1, v_univApprox_3294_);
lean_ctor_set_uint8(v___x_3298_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3295_);
lean_ctor_set_uint8(v___x_3298_, sizeof(void*)*7 + 3, v_cacheInferType_3296_);
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3299_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___x_3298_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec_ref_known(v___x_3298_, 7);
v___y_2896_ = v___x_3299_;
goto v___jp_2895_;
}
else
{
lean_object* v___x_3300_; 
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3300_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_2896_ = v___x_3300_;
goto v___jp_2895_;
}
}
else
{
goto v___jp_3230_;
}
}
else
{
goto v___jp_3230_;
}
v___jp_3109_:
{
lean_object* v___x_3113_; double v___x_3114_; double v___x_3115_; double v___x_3116_; double v___x_3117_; double v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3113_ = lean_io_mono_nanos_now();
v___x_3114_ = lean_float_of_nat(v___y_3110_);
v___x_3115_ = lean_float_once(&l_Lean_Meta_Transport_mkEquiv___closed__10, &l_Lean_Meta_Transport_mkEquiv___closed__10_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__10);
v___x_3116_ = lean_float_div(v___x_3114_, v___x_3115_);
v___x_3117_ = lean_float_of_nat(v___x_3113_);
v___x_3118_ = lean_float_div(v___x_3117_, v___x_3115_);
v___x_3119_ = lean_box_float(v___x_3116_);
v___x_3120_ = lean_box_float(v___x_3118_);
v___x_3121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3119_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v_a_3112_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_3105_, v_hasTrace_3084_, v___x_3106_, v_options_3082_, v___x_3108_, v___y_3111_, v___f_3104_, v___x_3122_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
return v___x_3123_;
}
v___jp_3124_:
{
lean_object* v___x_3129_; 
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v_a_3127_);
v___x_3129_ = v___x_2777_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
v___y_3110_ = v___y_3125_;
v___y_3111_ = v___y_3126_;
v_a_3112_ = v___x_3129_;
goto v___jp_3109_;
}
}
v___jp_3131_:
{
if (lean_obj_tag(v___y_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3142_; 
lean_del_object(v___x_2777_);
v_a_3135_ = lean_ctor_get(v___y_3134_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___y_3134_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3137_ = v___y_3134_;
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_a_3135_);
lean_dec(v___y_3134_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3140_; 
if (v_isShared_3138_ == 0)
{
lean_ctor_set_tag(v___x_3137_, 1);
v___x_3140_ = v___x_3137_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_a_3135_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
v___y_3110_ = v___y_3132_;
v___y_3111_ = v___y_3133_;
v_a_3112_ = v___x_3140_;
goto v___jp_3109_;
}
}
}
else
{
lean_object* v_a_3143_; 
v_a_3143_ = lean_ctor_get(v___y_3134_, 0);
lean_inc(v_a_3143_);
lean_dec_ref_known(v___y_3134_, 1);
v___y_3125_ = v___y_3132_;
v___y_3126_ = v___y_3133_;
v_a_3127_ = v_a_3143_;
goto v___jp_3124_;
}
}
v___jp_3144_:
{
if (lean_obj_tag(v___y_3147_) == 0)
{
lean_object* v_a_3148_; uint8_t v___x_3149_; 
v_a_3148_ = lean_ctor_get(v___y_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___y_3147_, 1);
v___x_3149_ = lean_unbox(v_a_3148_);
if (v___x_3149_ == 0)
{
lean_object* v___x_3150_; uint8_t v___x_3151_; 
v___x_3150_ = lean_unsigned_to_nat(0u);
v___x_3151_ = lean_nat_dec_eq(v_fuel_2762_, v___x_3150_);
if (v___x_3151_ == 0)
{
lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3152_ = lean_box(0);
v___x_3153_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2770_, v_a_2775_, v_fuel_2762_, v___x_2768_, v_a_3148_, v___x_3085_, v___x_3152_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3132_ = v___y_3145_;
v___y_3133_ = v___y_3146_;
v___y_3134_ = v___x_3153_;
goto v___jp_3131_;
}
else
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3154_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2770_);
v___x_3155_ = l_Lean_indentExpr(v_a_2770_);
v___x_3156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3154_);
lean_ctor_set(v___x_3156_, 1, v___x_3155_);
v___x_3157_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3156_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
lean_inc(v_a_2775_);
v___x_3159_ = l_Lean_indentExpr(v_a_2775_);
v___x_3160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3158_);
lean_ctor_set(v___x_3160_, 1, v___x_3159_);
v___x_3161_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3160_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3163_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
v___x_3163_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2770_, v_a_2775_, v_fuel_2762_, v___x_2768_, v_a_3148_, v___x_3085_, v_a_3162_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3132_ = v___y_3145_;
v___y_3133_ = v___y_3146_;
v___y_3134_ = v___x_3163_;
goto v___jp_3131_;
}
else
{
lean_object* v_a_3164_; 
lean_dec(v_a_3148_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3164_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3161_, 1);
v___y_3125_ = v___y_3145_;
v___y_3126_ = v___y_3146_;
v_a_3127_ = v_a_3164_;
goto v___jp_3124_;
}
}
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
lean_dec(v_a_3148_);
lean_dec(v_a_2775_);
lean_dec(v_fuel_2762_);
v___x_3165_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3166_ = lean_unsigned_to_nat(1u);
v___x_3167_ = lean_mk_empty_array_with_capacity(v___x_3166_);
v___x_3168_ = lean_array_push(v___x_3167_, v_a_2770_);
v___x_3169_ = l_Lean_Meta_mkAppM(v___x_3165_, v___x_3168_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3132_ = v___y_3145_;
v___y_3133_ = v___y_3146_;
v___y_3134_ = v___x_3169_;
goto v___jp_3131_;
}
}
else
{
lean_object* v_a_3170_; 
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3170_ = lean_ctor_get(v___y_3147_, 0);
lean_inc(v_a_3170_);
lean_dec_ref_known(v___y_3147_, 1);
v___y_3125_ = v___y_3145_;
v___y_3126_ = v___y_3146_;
v_a_3127_ = v_a_3170_;
goto v___jp_3124_;
}
}
v___jp_3171_:
{
lean_object* v___x_3175_; double v___x_3176_; double v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3175_ = lean_io_get_num_heartbeats();
v___x_3176_ = lean_float_of_nat(v___y_3173_);
v___x_3177_ = lean_float_of_nat(v___x_3175_);
v___x_3178_ = lean_box_float(v___x_3176_);
v___x_3179_ = lean_box_float(v___x_3177_);
v___x_3180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3178_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3181_, 0, v_a_3174_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_3105_, v_hasTrace_3084_, v___x_3106_, v_options_3082_, v___x_3108_, v___y_3172_, v___f_3104_, v___x_3181_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
return v___x_3182_;
}
v___jp_3183_:
{
lean_object* v___x_3188_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 0, v_a_3186_);
v___x_3188_ = v___x_2772_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3186_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
v___y_3172_ = v___y_3185_;
v___y_3173_ = v___y_3184_;
v_a_3174_ = v___x_3188_;
goto v___jp_3171_;
}
}
v___jp_3190_:
{
if (lean_obj_tag(v___y_3193_) == 0)
{
lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
lean_del_object(v___x_2772_);
v_a_3194_ = lean_ctor_get(v___y_3193_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___y_3193_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3196_ = v___y_3193_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v___y_3193_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set_tag(v___x_3196_, 1);
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
v___y_3172_ = v___y_3192_;
v___y_3173_ = v___y_3191_;
v_a_3174_ = v___x_3199_;
goto v___jp_3171_;
}
}
}
else
{
lean_object* v_a_3202_; 
v_a_3202_ = lean_ctor_get(v___y_3193_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___y_3193_, 1);
v___y_3184_ = v___y_3191_;
v___y_3185_ = v___y_3192_;
v_a_3186_ = v_a_3202_;
goto v___jp_3183_;
}
}
v___jp_3203_:
{
if (lean_obj_tag(v___y_3206_) == 0)
{
lean_object* v_a_3207_; uint8_t v___x_3208_; 
v_a_3207_ = lean_ctor_get(v___y_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___y_3206_, 1);
v___x_3208_ = lean_unbox(v_a_3207_);
if (v___x_3208_ == 0)
{
lean_object* v___x_3209_; uint8_t v___x_3210_; 
v___x_3209_ = lean_unsigned_to_nat(0u);
v___x_3210_ = lean_nat_dec_eq(v_fuel_2762_, v___x_3209_);
if (v___x_3210_ == 0)
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3211_ = lean_box(0);
v___x_3212_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2770_, v_a_2775_, v_fuel_2762_, v___x_2768_, v_a_3207_, v___x_3085_, v___x_3211_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3191_ = v___y_3205_;
v___y_3192_ = v___y_3204_;
v___y_3193_ = v___x_3212_;
goto v___jp_3190_;
}
else
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3213_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2770_);
v___x_3214_ = l_Lean_indentExpr(v_a_2770_);
v___x_3215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3213_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3215_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
lean_inc(v_a_2775_);
v___x_3218_ = l_Lean_indentExpr(v_a_2775_);
v___x_3219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3217_);
lean_ctor_set(v___x_3219_, 1, v___x_3218_);
v___x_3220_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3219_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; lean_object* v___x_3222_; 
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3220_, 1);
v___x_3222_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2770_, v_a_2775_, v_fuel_2762_, v___x_2768_, v_a_3207_, v___x_3085_, v_a_3221_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3191_ = v___y_3205_;
v___y_3192_ = v___y_3204_;
v___y_3193_ = v___x_3222_;
goto v___jp_3190_;
}
else
{
lean_object* v_a_3223_; 
lean_dec(v_a_3207_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3223_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3220_, 1);
v___y_3184_ = v___y_3205_;
v___y_3185_ = v___y_3204_;
v_a_3186_ = v_a_3223_;
goto v___jp_3183_;
}
}
}
else
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
lean_dec(v_a_3207_);
lean_dec(v_a_2775_);
lean_dec(v_fuel_2762_);
v___x_3224_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3225_ = lean_unsigned_to_nat(1u);
v___x_3226_ = lean_mk_empty_array_with_capacity(v___x_3225_);
v___x_3227_ = lean_array_push(v___x_3226_, v_a_2770_);
v___x_3228_ = l_Lean_Meta_mkAppM(v___x_3224_, v___x_3227_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3191_ = v___y_3205_;
v___y_3192_ = v___y_3204_;
v___y_3193_ = v___x_3228_;
goto v___jp_3190_;
}
}
else
{
lean_object* v_a_3229_; 
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3229_ = lean_ctor_get(v___y_3206_, 0);
lean_inc(v_a_3229_);
lean_dec_ref_known(v___y_3206_, 1);
v___y_3184_ = v___y_3205_;
v___y_3185_ = v___y_3204_;
v_a_3186_ = v_a_3229_;
goto v___jp_3183_;
}
}
v___jp_3230_:
{
lean_object* v___x_3231_; 
v___x_3231_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_2766_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3233_; uint8_t v___x_3234_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3231_, 1);
v___x_3233_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3234_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_3082_, v___x_3233_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; lean_object* v___x_3236_; uint8_t v_transparency_3237_; uint8_t v___x_3238_; 
lean_del_object(v___x_2772_);
v___x_3235_ = lean_io_mono_nanos_now();
v___x_3236_ = l_Lean_Meta_Context_config(v___y_2763_);
v_transparency_3237_ = lean_ctor_get_uint8(v___x_3236_, 9);
lean_dec_ref(v___x_3236_);
v___x_3238_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3237_, v___x_3085_);
if (v___x_3238_ == 0)
{
lean_object* v_keyedConfig_3239_; uint8_t v_trackZetaDelta_3240_; lean_object* v_zetaDeltaSet_3241_; lean_object* v_lctx_3242_; lean_object* v_localInstances_3243_; lean_object* v_defEqCtx_x3f_3244_; lean_object* v_synthPendingDepth_3245_; lean_object* v_customCanUnfoldPredicate_x3f_3246_; uint8_t v_univApprox_3247_; uint8_t v_inTypeClassResolution_3248_; uint8_t v_cacheInferType_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v_keyedConfig_3239_ = lean_ctor_get(v___y_2763_, 0);
v_trackZetaDelta_3240_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7);
v_zetaDeltaSet_3241_ = lean_ctor_get(v___y_2763_, 1);
v_lctx_3242_ = lean_ctor_get(v___y_2763_, 2);
v_localInstances_3243_ = lean_ctor_get(v___y_2763_, 3);
v_defEqCtx_x3f_3244_ = lean_ctor_get(v___y_2763_, 4);
v_synthPendingDepth_3245_ = lean_ctor_get(v___y_2763_, 5);
v_customCanUnfoldPredicate_x3f_3246_ = lean_ctor_get(v___y_2763_, 6);
v_univApprox_3247_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3248_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 2);
v_cacheInferType_3249_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3239_);
v___x_3250_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3085_, v_keyedConfig_3239_);
lean_inc(v_customCanUnfoldPredicate_x3f_3246_);
lean_inc(v_synthPendingDepth_3245_);
lean_inc(v_defEqCtx_x3f_3244_);
lean_inc_ref(v_localInstances_3243_);
lean_inc_ref(v_lctx_3242_);
lean_inc(v_zetaDeltaSet_3241_);
v___x_3251_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
lean_ctor_set(v___x_3251_, 1, v_zetaDeltaSet_3241_);
lean_ctor_set(v___x_3251_, 2, v_lctx_3242_);
lean_ctor_set(v___x_3251_, 3, v_localInstances_3243_);
lean_ctor_set(v___x_3251_, 4, v_defEqCtx_x3f_3244_);
lean_ctor_set(v___x_3251_, 5, v_synthPendingDepth_3245_);
lean_ctor_set(v___x_3251_, 6, v_customCanUnfoldPredicate_x3f_3246_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7, v_trackZetaDelta_3240_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7 + 1, v_univApprox_3247_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3248_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7 + 3, v_cacheInferType_3249_);
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3252_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___x_3251_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec_ref_known(v___x_3251_, 7);
v___y_3145_ = v___x_3235_;
v___y_3146_ = v_a_3232_;
v___y_3147_ = v___x_3252_;
goto v___jp_3144_;
}
else
{
lean_object* v___x_3253_; 
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3253_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3145_ = v___x_3235_;
v___y_3146_ = v_a_3232_;
v___y_3147_ = v___x_3253_;
goto v___jp_3144_;
}
}
else
{
lean_object* v___x_3254_; lean_object* v___x_3255_; uint8_t v_transparency_3256_; uint8_t v___x_3257_; 
lean_del_object(v___x_2777_);
v___x_3254_ = lean_io_get_num_heartbeats();
v___x_3255_ = l_Lean_Meta_Context_config(v___y_2763_);
v_transparency_3256_ = lean_ctor_get_uint8(v___x_3255_, 9);
lean_dec_ref(v___x_3255_);
v___x_3257_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3256_, v___x_3085_);
if (v___x_3257_ == 0)
{
lean_object* v_keyedConfig_3258_; uint8_t v_trackZetaDelta_3259_; lean_object* v_zetaDeltaSet_3260_; lean_object* v_lctx_3261_; lean_object* v_localInstances_3262_; lean_object* v_defEqCtx_x3f_3263_; lean_object* v_synthPendingDepth_3264_; lean_object* v_customCanUnfoldPredicate_x3f_3265_; uint8_t v_univApprox_3266_; uint8_t v_inTypeClassResolution_3267_; uint8_t v_cacheInferType_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v_keyedConfig_3258_ = lean_ctor_get(v___y_2763_, 0);
v_trackZetaDelta_3259_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7);
v_zetaDeltaSet_3260_ = lean_ctor_get(v___y_2763_, 1);
v_lctx_3261_ = lean_ctor_get(v___y_2763_, 2);
v_localInstances_3262_ = lean_ctor_get(v___y_2763_, 3);
v_defEqCtx_x3f_3263_ = lean_ctor_get(v___y_2763_, 4);
v_synthPendingDepth_3264_ = lean_ctor_get(v___y_2763_, 5);
v_customCanUnfoldPredicate_x3f_3265_ = lean_ctor_get(v___y_2763_, 6);
v_univApprox_3266_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3267_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 2);
v_cacheInferType_3268_ = lean_ctor_get_uint8(v___y_2763_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3258_);
v___x_3269_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3085_, v_keyedConfig_3258_);
lean_inc(v_customCanUnfoldPredicate_x3f_3265_);
lean_inc(v_synthPendingDepth_3264_);
lean_inc(v_defEqCtx_x3f_3263_);
lean_inc_ref(v_localInstances_3262_);
lean_inc_ref(v_lctx_3261_);
lean_inc(v_zetaDeltaSet_3260_);
v___x_3270_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3270_, 0, v___x_3269_);
lean_ctor_set(v___x_3270_, 1, v_zetaDeltaSet_3260_);
lean_ctor_set(v___x_3270_, 2, v_lctx_3261_);
lean_ctor_set(v___x_3270_, 3, v_localInstances_3262_);
lean_ctor_set(v___x_3270_, 4, v_defEqCtx_x3f_3263_);
lean_ctor_set(v___x_3270_, 5, v_synthPendingDepth_3264_);
lean_ctor_set(v___x_3270_, 6, v_customCanUnfoldPredicate_x3f_3265_);
lean_ctor_set_uint8(v___x_3270_, sizeof(void*)*7, v_trackZetaDelta_3259_);
lean_ctor_set_uint8(v___x_3270_, sizeof(void*)*7 + 1, v_univApprox_3266_);
lean_ctor_set_uint8(v___x_3270_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3267_);
lean_ctor_set_uint8(v___x_3270_, sizeof(void*)*7 + 3, v_cacheInferType_3268_);
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3271_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___x_3270_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec_ref_known(v___x_3270_, 7);
v___y_3204_ = v_a_3232_;
v___y_3205_ = v___x_3254_;
v___y_3206_ = v___x_3271_;
goto v___jp_3203_;
}
else
{
lean_object* v___x_3272_; 
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___x_3272_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2775_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
v___y_3204_ = v_a_3232_;
v___y_3205_ = v___x_3254_;
v___y_3206_ = v___x_3272_;
goto v___jp_3203_;
}
}
}
else
{
lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
lean_dec_ref(v___f_3104_);
lean_del_object(v___x_2777_);
lean_dec(v_a_2775_);
lean_del_object(v___x_2772_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3273_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v___x_3231_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v___x_3231_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
}
v___jp_2779_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0));
v___x_2786_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_2787_ = lean_unsigned_to_nat(2u);
v___x_2788_ = lean_mk_empty_array_with_capacity(v___x_2787_);
lean_inc(v_a_2770_);
lean_inc_ref(v___x_2788_);
v___x_2789_ = lean_array_push(v___x_2788_, v_a_2770_);
lean_inc(v_a_2775_);
v___x_2790_ = lean_array_push(v___x_2789_, v_a_2775_);
v___x_2791_ = l_Lean_Meta_mkAppM(v___x_2786_, v___x_2790_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___f_2793_; lean_object* v___x_2794_; lean_object* v_env_2795_; lean_object* v___x_2796_; lean_object* v_ext_2797_; lean_object* v_toEnvExtension_2798_; lean_object* v_asyncMode_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc_n(v_a_2792_, 2);
lean_dec_ref_known(v___x_2791_, 1);
lean_inc(v_fuel_2762_);
v___f_2793_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2793_, 0, v_fuel_2762_);
lean_closure_set(v___f_2793_, 1, v_a_2792_);
v___x_2794_ = lean_st_ref_get(v___y_2784_);
v_env_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc_ref(v_env_2795_);
lean_dec(v___x_2794_);
v___x_2796_ = l_Lean_Meta_Transport_transportExt;
v_ext_2797_ = lean_ctor_get(v___x_2796_, 1);
v_toEnvExtension_2798_ = lean_ctor_get(v_ext_2797_, 0);
v_asyncMode_2799_ = lean_ctor_get(v_toEnvExtension_2798_, 2);
v___x_2800_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2768_, v___x_2796_, v_env_2795_, v_asyncMode_2799_);
lean_inc(v___x_2800_);
v___x_2801_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2800_, v_a_2792_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2803_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v___x_2801_, 1);
v___x_2803_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2802_, v___f_2793_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
lean_dec(v_a_2802_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2878_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2806_ = v___x_2803_;
v_isShared_2807_ = v_isSharedCheck_2878_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2803_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2878_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
if (lean_obj_tag(v_a_2804_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2873_; 
lean_del_object(v___x_2806_);
v_a_2808_ = lean_ctor_get(v_a_2804_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_a_2804_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2810_ = v_a_2804_;
v_isShared_2811_ = v_isSharedCheck_2873_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v_a_2804_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2873_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2812_; 
v___x_2812_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v___x_2814_; lean_object* v___x_2816_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v___x_2812_, 1);
v___x_2814_ = l_Lean_mkSort(v_a_2813_);
if (v_isShared_2811_ == 0)
{
lean_ctor_set_tag(v___x_2810_, 1);
lean_ctor_set(v___x_2810_, 0, v___x_2814_);
v___x_2816_ = v___x_2810_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v___x_2814_);
v___x_2816_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
uint8_t v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2817_ = 0;
v___x_2818_ = lean_box(0);
v___x_2819_ = l_Lean_Meta_mkFreshExprMVar(v___x_2816_, v___x_2817_, v___x_2818_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc_n(v_a_2820_, 2);
lean_dec_ref_known(v___x_2819_, 1);
lean_inc_ref(v___x_2788_);
v___x_2821_ = lean_array_push(v___x_2788_, v_a_2820_);
lean_inc(v_a_2775_);
v___x_2822_ = lean_array_push(v___x_2821_, v_a_2775_);
v___x_2823_ = l_Lean_Meta_mkAppM(v___x_2786_, v___x_2822_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___f_2825_; lean_object* v___x_2826_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc_n(v_a_2824_, 2);
lean_dec_ref_known(v___x_2823_, 1);
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___f_2825_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 14, 8);
lean_closure_set(v___f_2825_, 0, v_fuel_2762_);
lean_closure_set(v___f_2825_, 1, v_a_2824_);
lean_closure_set(v___f_2825_, 2, v_a_2820_);
lean_closure_set(v___f_2825_, 3, v_a_2770_);
lean_closure_set(v___f_2825_, 4, v___x_2785_);
lean_closure_set(v___f_2825_, 5, v___x_2788_);
lean_closure_set(v___f_2825_, 6, v___y_2780_);
lean_closure_set(v___f_2825_, 7, v_a_2775_);
v___x_2826_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2800_, v_a_2824_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_object* v_a_2827_; lean_object* v___x_2828_; 
v_a_2827_ = lean_ctor_get(v___x_2826_, 0);
lean_inc(v_a_2827_);
lean_dec_ref_known(v___x_2826_, 1);
v___x_2828_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2827_, v___f_2825_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
lean_dec(v_a_2827_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2847_; 
v_a_2829_ = lean_ctor_get(v___x_2828_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2831_ = v___x_2828_;
v_isShared_2832_ = v_isSharedCheck_2847_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2828_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2847_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
if (lean_obj_tag(v_a_2829_) == 0)
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
lean_dec_ref_known(v_a_2829_, 1);
lean_del_object(v___x_2831_);
v___x_2833_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1);
v___x_2834_ = l_Lean_indentExpr(v_a_2770_);
v___x_2835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3);
v___x_2837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = l_Lean_indentExpr(v_a_2775_);
v___x_2839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set(v___x_2839_, 1, v___x_2838_);
v___x_2840_ = l_Lean_MessageData_note(v_a_2808_);
v___x_2841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2839_);
lean_ctor_set(v___x_2841_, 1, v___x_2840_);
v___x_2842_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2841_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
return v___x_2842_;
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; 
lean_dec(v_a_2808_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
v_a_2843_ = lean_ctor_get(v_a_2829_, 0);
lean_inc(v_a_2843_);
lean_dec_ref_known(v_a_2829_, 1);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v_a_2843_);
v___x_2845_ = v___x_2831_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2843_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec(v_a_2808_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
v_a_2848_ = lean_ctor_get(v___x_2828_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2828_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2828_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
lean_dec_ref(v___f_2825_);
lean_dec(v_a_2808_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
v_a_2856_ = lean_ctor_get(v___x_2826_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2826_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2826_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2826_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
else
{
lean_dec(v_a_2820_);
lean_dec(v_a_2808_);
lean_dec(v___x_2800_);
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2823_;
}
}
else
{
lean_dec(v_a_2808_);
lean_dec(v___x_2800_);
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2819_;
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
lean_del_object(v___x_2810_);
lean_dec(v_a_2808_);
lean_dec(v___x_2800_);
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_2865_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2812_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2812_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; 
lean_dec(v___x_2800_);
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_2874_ = lean_ctor_get(v_a_2804_, 0);
lean_inc(v_a_2874_);
lean_dec_ref_known(v_a_2804_, 1);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 0, v_a_2874_);
v___x_2876_ = v___x_2806_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2874_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec(v___x_2800_);
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_2879_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2803_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2803_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
lean_dec(v___x_2800_);
lean_dec_ref(v___f_2793_);
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_2887_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2801_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2801_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
else
{
lean_dec_ref(v___x_2788_);
lean_dec(v___y_2780_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2791_;
}
}
v___jp_2895_:
{
if (lean_obj_tag(v___y_2896_) == 0)
{
lean_object* v_a_2897_; uint8_t v___x_2898_; 
v_a_2897_ = lean_ctor_get(v___y_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___y_2896_, 1);
v___x_2898_ = lean_unbox(v_a_2897_);
if (v___x_2898_ == 0)
{
lean_object* v___x_2899_; uint8_t v___x_2900_; 
v___x_2899_ = lean_unsigned_to_nat(0u);
v___x_2900_ = lean_nat_dec_eq(v_fuel_2762_, v___x_2899_);
if (v___x_2900_ == 0)
{
v___y_2780_ = v_a_2897_;
v___y_2781_ = v___y_2763_;
v___y_2782_ = v___y_2764_;
v___y_2783_ = v___y_2765_;
v___y_2784_ = v___y_2766_;
goto v___jp_2779_;
}
else
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2901_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2770_);
v___x_2902_ = l_Lean_indentExpr(v_a_2770_);
v___x_2903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2901_);
lean_ctor_set(v___x_2903_, 1, v___x_2902_);
v___x_2904_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_2905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2903_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
lean_inc(v_a_2775_);
v___x_2906_ = l_Lean_indentExpr(v_a_2775_);
v___x_2907_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2905_);
lean_ctor_set(v___x_2907_, 1, v___x_2906_);
v___x_2908_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2907_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_dec_ref_known(v___x_2908_, 1);
v___y_2780_ = v_a_2897_;
v___y_2781_ = v___y_2763_;
v___y_2782_ = v___y_2764_;
v___y_2783_ = v___y_2765_;
v___y_2784_ = v___y_2766_;
goto v___jp_2779_;
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
lean_dec(v_a_2897_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2908_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2908_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_dec(v_a_2897_);
lean_dec(v_a_2775_);
lean_dec(v_fuel_2762_);
v___x_2917_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_2918_ = lean_unsigned_to_nat(1u);
v___x_2919_ = lean_mk_empty_array_with_capacity(v___x_2918_);
v___x_2920_ = lean_array_push(v___x_2919_, v_a_2770_);
v___x_2921_ = l_Lean_Meta_mkAppM(v___x_2917_, v___x_2920_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
return v___x_2921_;
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_2922_ = lean_ctor_get(v___y_2896_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___y_2896_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___y_2896_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___y_2896_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2922_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
v___jp_2930_:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2936_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0));
v___x_2937_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_2938_ = lean_unsigned_to_nat(2u);
v___x_2939_ = lean_mk_empty_array_with_capacity(v___x_2938_);
lean_inc(v_a_2770_);
lean_inc_ref(v___x_2939_);
v___x_2940_ = lean_array_push(v___x_2939_, v_a_2770_);
lean_inc(v_a_2775_);
v___x_2941_ = lean_array_push(v___x_2940_, v_a_2775_);
v___x_2942_ = l_Lean_Meta_mkAppM(v___x_2937_, v___x_2941_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___f_2944_; lean_object* v___x_2945_; lean_object* v_env_2946_; lean_object* v___x_2947_; lean_object* v_ext_2948_; lean_object* v_toEnvExtension_2949_; lean_object* v_asyncMode_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc_n(v_a_2943_, 2);
lean_dec_ref_known(v___x_2942_, 1);
lean_inc(v_fuel_2762_);
v___f_2944_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2944_, 0, v_fuel_2762_);
lean_closure_set(v___f_2944_, 1, v_a_2943_);
v___x_2945_ = lean_st_ref_get(v___y_2935_);
v_env_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc_ref(v_env_2946_);
lean_dec(v___x_2945_);
v___x_2947_ = l_Lean_Meta_Transport_transportExt;
v_ext_2948_ = lean_ctor_get(v___x_2947_, 1);
v_toEnvExtension_2949_ = lean_ctor_get(v_ext_2948_, 0);
v_asyncMode_2950_ = lean_ctor_get(v_toEnvExtension_2949_, 2);
v___x_2951_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2768_, v___x_2947_, v_env_2946_, v_asyncMode_2950_);
lean_inc(v___x_2951_);
v___x_2952_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2951_, v_a_2943_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2954_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2953_);
lean_dec_ref_known(v___x_2952_, 1);
v___x_2954_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2953_, v___f_2944_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
lean_dec(v_a_2953_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_3029_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_2957_ = v___x_2954_;
v_isShared_2958_ = v_isSharedCheck_3029_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v___x_2954_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_3029_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
if (lean_obj_tag(v_a_2955_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_3024_; 
lean_del_object(v___x_2957_);
v_a_2959_ = lean_ctor_get(v_a_2955_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_a_2955_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_2961_ = v_a_2955_;
v_isShared_2962_ = v_isSharedCheck_3024_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v_a_2955_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_3024_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2963_; 
v___x_2963_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2965_; lean_object* v___x_2967_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2963_, 1);
v___x_2965_ = l_Lean_mkSort(v_a_2964_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set_tag(v___x_2961_, 1);
lean_ctor_set(v___x_2961_, 0, v___x_2965_);
v___x_2967_ = v___x_2961_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_2965_);
v___x_2967_ = v_reuseFailAlloc_3015_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
uint8_t v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2968_ = 0;
v___x_2969_ = lean_box(0);
v___x_2970_ = l_Lean_Meta_mkFreshExprMVar(v___x_2967_, v___x_2968_, v___x_2969_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc_n(v_a_2971_, 2);
lean_dec_ref_known(v___x_2970_, 1);
lean_inc_ref(v___x_2939_);
v___x_2972_ = lean_array_push(v___x_2939_, v_a_2971_);
lean_inc(v_a_2775_);
v___x_2973_ = lean_array_push(v___x_2972_, v_a_2775_);
v___x_2974_ = l_Lean_Meta_mkAppM(v___x_2937_, v___x_2973_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___f_2976_; lean_object* v___x_2977_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc_n(v_a_2975_, 2);
lean_dec_ref_known(v___x_2974_, 1);
lean_inc(v_a_2775_);
lean_inc(v_a_2770_);
v___f_2976_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 14, 8);
lean_closure_set(v___f_2976_, 0, v_fuel_2762_);
lean_closure_set(v___f_2976_, 1, v_a_2975_);
lean_closure_set(v___f_2976_, 2, v_a_2971_);
lean_closure_set(v___f_2976_, 3, v_a_2770_);
lean_closure_set(v___f_2976_, 4, v___x_2936_);
lean_closure_set(v___f_2976_, 5, v___x_2939_);
lean_closure_set(v___f_2976_, 6, v___y_2931_);
lean_closure_set(v___f_2976_, 7, v_a_2775_);
v___x_2977_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2951_, v_a_2975_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2979_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v___x_2977_, 1);
v___x_2979_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2978_, v___f_2976_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
lean_dec(v_a_2978_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2998_; 
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2982_ = v___x_2979_;
v_isShared_2983_ = v_isSharedCheck_2998_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___x_2979_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2998_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
if (lean_obj_tag(v_a_2980_) == 0)
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
lean_dec_ref_known(v_a_2980_, 1);
lean_del_object(v___x_2982_);
v___x_2984_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1);
v___x_2985_ = l_Lean_indentExpr(v_a_2770_);
v___x_2986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2984_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
v___x_2987_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3);
v___x_2988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2986_);
lean_ctor_set(v___x_2988_, 1, v___x_2987_);
v___x_2989_ = l_Lean_indentExpr(v_a_2775_);
v___x_2990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2988_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
v___x_2991_ = l_Lean_MessageData_note(v_a_2959_);
v___x_2992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2990_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
v___x_2993_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2992_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
return v___x_2993_;
}
else
{
lean_object* v_a_2994_; lean_object* v___x_2996_; 
lean_dec(v_a_2959_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
v_a_2994_ = lean_ctor_get(v_a_2980_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v_a_2980_, 1);
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 0, v_a_2994_);
v___x_2996_ = v___x_2982_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2994_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
}
else
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3006_; 
lean_dec(v_a_2959_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
v_a_2999_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_3001_ = v___x_2979_;
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2979_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_dec_ref(v___f_2976_);
lean_dec(v_a_2959_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
v_a_3007_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_2977_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_2977_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
else
{
lean_dec(v_a_2971_);
lean_dec(v_a_2959_);
lean_dec(v___x_2951_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2974_;
}
}
else
{
lean_dec(v_a_2959_);
lean_dec(v___x_2951_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2970_;
}
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_del_object(v___x_2961_);
lean_dec(v_a_2959_);
lean_dec(v___x_2951_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3016_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_2963_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_2963_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; 
lean_dec(v___x_2951_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3025_ = lean_ctor_get(v_a_2955_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v_a_2955_, 1);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v_a_3025_);
v___x_3027_ = v___x_2957_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3025_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec(v___x_2951_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3030_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_2954_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_2954_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec(v___x_2951_);
lean_dec_ref(v___f_2944_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3038_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_2952_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_2952_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
else
{
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2931_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2942_;
}
}
v___jp_3046_:
{
if (lean_obj_tag(v___y_3047_) == 0)
{
lean_object* v_a_3048_; uint8_t v___x_3049_; 
v_a_3048_ = lean_ctor_get(v___y_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref_known(v___y_3047_, 1);
v___x_3049_ = lean_unbox(v_a_3048_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3050_; uint8_t v___x_3051_; 
v___x_3050_ = lean_unsigned_to_nat(0u);
v___x_3051_ = lean_nat_dec_eq(v_fuel_2762_, v___x_3050_);
if (v___x_3051_ == 0)
{
v___y_2931_ = v_a_3048_;
v___y_2932_ = v___y_2763_;
v___y_2933_ = v___y_2764_;
v___y_2934_ = v___y_2765_;
v___y_2935_ = v___y_2766_;
goto v___jp_2930_;
}
else
{
lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3052_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2770_);
v___x_3053_ = l_Lean_indentExpr(v_a_2770_);
v___x_3054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3052_);
lean_ctor_set(v___x_3054_, 1, v___x_3053_);
v___x_3055_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3054_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
lean_inc(v_a_2775_);
v___x_3057_ = l_Lean_indentExpr(v_a_2775_);
v___x_3058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3056_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
v___x_3059_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3058_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_dec_ref_known(v___x_3059_, 1);
v___y_2931_ = v_a_3048_;
v___y_2932_ = v___y_2763_;
v___y_2933_ = v___y_2764_;
v___y_2934_ = v___y_2765_;
v___y_2935_ = v___y_2766_;
goto v___jp_2930_;
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec(v_a_3048_);
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3059_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3059_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
}
else
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
lean_dec(v_a_3048_);
lean_dec(v_a_2775_);
lean_dec(v_fuel_2762_);
v___x_3068_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3069_ = lean_unsigned_to_nat(1u);
v___x_3070_ = lean_mk_empty_array_with_capacity(v___x_3069_);
v___x_3071_ = lean_array_push(v___x_3070_, v_a_2770_);
v___x_3072_ = l_Lean_Meta_mkAppM(v___x_3068_, v___x_3071_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
return v___x_3072_;
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec(v_a_2775_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
v_a_3073_ = lean_ctor_get(v___y_3047_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___y_3047_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___y_3047_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___y_3047_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_2772_);
lean_dec(v_a_2770_);
lean_dec(v_fuel_2762_);
return v___x_2774_;
}
}
}
else
{
lean_dec(v_fuel_2762_);
lean_dec_ref(v_tgt_2761_);
return v___x_2769_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(lean_object* v_declName_3303_, lean_object* v_fuel_3304_, lean_object* v_as_3305_, size_t v_sz_3306_, size_t v_i_3307_, lean_object* v_b_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_){
_start:
{
lean_object* v_a_3315_; uint8_t v___x_3319_; 
v___x_3319_ = lean_usize_dec_lt(v_i_3307_, v_sz_3306_);
if (v___x_3319_ == 0)
{
lean_object* v___x_3320_; 
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v___x_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3320_, 0, v_b_3308_);
return v___x_3320_;
}
else
{
lean_object* v_array_3321_; lean_object* v_start_3322_; lean_object* v_stop_3323_; uint8_t v___x_3324_; 
v_array_3321_ = lean_ctor_get(v_b_3308_, 0);
v_start_3322_ = lean_ctor_get(v_b_3308_, 1);
v_stop_3323_ = lean_ctor_get(v_b_3308_, 2);
v___x_3324_ = lean_nat_dec_lt(v_start_3322_, v_stop_3323_);
if (v___x_3324_ == 0)
{
lean_object* v___x_3325_; 
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v___x_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3325_, 0, v_b_3308_);
return v___x_3325_;
}
else
{
lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3435_; 
lean_inc(v_stop_3323_);
lean_inc(v_start_3322_);
lean_inc_ref(v_array_3321_);
v_isSharedCheck_3435_ = !lean_is_exclusive(v_b_3308_);
if (v_isSharedCheck_3435_ == 0)
{
lean_object* v_unused_3436_; lean_object* v_unused_3437_; lean_object* v_unused_3438_; 
v_unused_3436_ = lean_ctor_get(v_b_3308_, 2);
lean_dec(v_unused_3436_);
v_unused_3437_ = lean_ctor_get(v_b_3308_, 1);
lean_dec(v_unused_3437_);
v_unused_3438_ = lean_ctor_get(v_b_3308_, 0);
lean_dec(v_unused_3438_);
v___x_3327_ = v_b_3308_;
v_isShared_3328_ = v_isSharedCheck_3435_;
goto v_resetjp_3326_;
}
else
{
lean_dec(v_b_3308_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3435_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3329_; lean_object* v_a_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3335_; 
v___x_3329_ = lean_box(0);
v_a_3330_ = lean_array_uget_borrowed(v_as_3305_, v_i_3307_);
v___x_3331_ = lean_array_fget(v_array_3321_, v_start_3322_);
v___x_3332_ = lean_unsigned_to_nat(1u);
v___x_3333_ = lean_nat_add(v_start_3322_, v___x_3332_);
lean_dec(v_start_3322_);
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 1, v___x_3333_);
v___x_3335_ = v___x_3327_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_array_3321_);
lean_ctor_set(v_reuseFailAlloc_3434_, 1, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3434_, 2, v_stop_3323_);
v___x_3335_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = l_Lean_Expr_mvarId_x21(v_a_3330_);
v___x_3337_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v___x_3336_, v___y_3310_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; uint8_t v___x_3339_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3339_ = lean_unbox(v_a_3338_);
lean_dec(v_a_3338_);
if (v___x_3339_ == 0)
{
lean_object* v___x_3340_; 
lean_inc(v___x_3336_);
v___x_3340_ = l_Lean_MVarId_getDecl(v___x_3336_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v_userName_3342_; lean_object* v_type_3343_; lean_object* v___x_3344_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3340_, 1);
v_userName_3342_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_userName_3342_);
v_type_3343_ = lean_ctor_get(v_a_3341_, 2);
lean_inc_ref(v_type_3343_);
lean_dec(v_a_3341_);
v___x_3344_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_3343_, v___y_3310_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; uint8_t v___x_3346_; uint8_t v___x_3347_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v___x_3344_, 1);
v___x_3346_ = lean_unbox(v___x_3331_);
lean_dec(v___x_3331_);
v___x_3347_ = l_Lean_BinderInfo_isInstImplicit(v___x_3346_);
if (v___x_3347_ == 0)
{
lean_object* v___x_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; 
v___x_3348_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_3349_ = lean_unsigned_to_nat(2u);
v___x_3350_ = l_Lean_Expr_isAppOfArity(v_a_3345_, v___x_3348_, v___x_3349_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_dec(v_a_3345_);
lean_dec(v___x_3336_);
v___x_3351_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1);
v___x_3352_ = l_Lean_MessageData_ofName(v_userName_3342_);
v___x_3353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3351_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3);
v___x_3355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3353_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
lean_inc(v_declName_3303_);
v___x_3356_ = l_Lean_MessageData_ofConstName(v_declName_3303_, v___x_3350_);
v___x_3357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3355_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3357_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3359_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_dec_ref_known(v___x_3360_, 1);
v_a_3315_ = v___x_3335_;
goto v___jp_3314_;
}
else
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3368_; 
lean_dec_ref(v___x_3335_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3363_ = v___x_3360_;
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3360_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
else
{
lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
lean_dec(v_userName_3342_);
v___x_3369_ = l_Lean_Expr_appFn_x21(v_a_3345_);
v___x_3370_ = l_Lean_Expr_appArg_x21(v___x_3369_);
lean_dec_ref(v___x_3369_);
v___x_3371_ = l_Lean_Expr_appArg_x21(v_a_3345_);
lean_dec(v_a_3345_);
lean_inc(v_fuel_3304_);
v___x_3372_ = l_Lean_Meta_Transport_mkEquiv(v___x_3370_, v___x_3371_, v_fuel_3304_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; lean_object* v___x_3374_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref_known(v___x_3372_, 1);
v___x_3374_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3336_, v_a_3373_, v___y_3310_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_dec_ref_known(v___x_3374_, 1);
v_a_3315_ = v___x_3335_;
goto v___jp_3314_;
}
else
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3382_; 
lean_dec_ref(v___x_3335_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3375_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3377_ = v___x_3374_;
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v___x_3374_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3380_; 
if (v_isShared_3378_ == 0)
{
v___x_3380_ = v___x_3377_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
}
else
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
lean_dec(v___x_3336_);
lean_dec_ref(v___x_3335_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3383_ = lean_ctor_get(v___x_3372_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3372_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3372_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_a_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
}
}
else
{
lean_object* v___x_3391_; 
lean_dec(v_userName_3342_);
v___x_3391_ = l_Lean_Meta_synthInstance(v_a_3345_, v___x_3329_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3393_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
lean_inc(v_a_3392_);
lean_dec_ref_known(v___x_3391_, 1);
v___x_3393_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3336_, v_a_3392_, v___y_3310_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_dec_ref_known(v___x_3393_, 1);
v_a_3315_ = v___x_3335_;
goto v___jp_3314_;
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec_ref(v___x_3335_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3393_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3393_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v___x_3336_);
lean_dec_ref(v___x_3335_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3402_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3391_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3391_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec(v_userName_3342_);
lean_dec(v___x_3336_);
lean_dec_ref(v___x_3335_);
lean_dec(v___x_3331_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3410_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3344_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3344_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3425_; 
lean_dec(v___x_3336_);
lean_dec_ref(v___x_3335_);
lean_dec(v___x_3331_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3418_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3420_ = v___x_3340_;
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3340_);
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
else
{
lean_dec(v___x_3336_);
lean_dec(v___x_3331_);
v_a_3315_ = v___x_3335_;
goto v___jp_3314_;
}
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3433_; 
lean_dec(v___x_3336_);
lean_dec_ref(v___x_3335_);
lean_dec(v___x_3331_);
lean_dec(v_fuel_3304_);
lean_dec(v_declName_3303_);
v_a_3426_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3428_ = v___x_3337_;
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3337_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
}
}
}
}
}
v___jp_3314_:
{
size_t v___x_3316_; size_t v___x_3317_; 
v___x_3316_ = ((size_t)1ULL);
v___x_3317_ = lean_usize_add(v_i_3307_, v___x_3316_);
v_i_3307_ = v___x_3317_;
v_b_3308_ = v_a_3315_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1(void){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3440_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0));
v___x_3441_ = l_Lean_stringToMessageData(v___x_3440_);
return v___x_3441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(lean_object* v_declName_3442_, lean_object* v_goal_3443_, lean_object* v_fuel_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v___x_3450_; 
lean_inc(v_declName_3442_);
v___x_3450_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_3442_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___y_3453_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3505_; lean_object* v___x_3538_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
lean_inc_n(v_a_3451_, 2);
lean_dec_ref_known(v___x_3450_, 1);
lean_inc(v___y_3448_);
lean_inc_ref(v___y_3447_);
lean_inc(v___y_3446_);
lean_inc_ref(v___y_3445_);
v___x_3538_ = lean_infer_type(v_a_3451_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; lean_object* v___x_3540_; uint8_t v_transparency_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; uint8_t v___x_3544_; uint8_t v___x_3545_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = l_Lean_Meta_Context_config(v___y_3445_);
v_transparency_3541_ = lean_ctor_get_uint8(v___x_3540_, 9);
lean_dec_ref(v___x_3540_);
v___x_3542_ = lean_box(0);
v___x_3543_ = 0;
v___x_3544_ = 2;
v___x_3545_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3541_, v___x_3544_);
if (v___x_3545_ == 0)
{
lean_object* v_keyedConfig_3546_; uint8_t v_trackZetaDelta_3547_; lean_object* v_zetaDeltaSet_3548_; lean_object* v_lctx_3549_; lean_object* v_localInstances_3550_; lean_object* v_defEqCtx_x3f_3551_; lean_object* v_synthPendingDepth_3552_; lean_object* v_customCanUnfoldPredicate_x3f_3553_; uint8_t v_univApprox_3554_; uint8_t v_inTypeClassResolution_3555_; uint8_t v_cacheInferType_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v_keyedConfig_3546_ = lean_ctor_get(v___y_3445_, 0);
v_trackZetaDelta_3547_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7);
v_zetaDeltaSet_3548_ = lean_ctor_get(v___y_3445_, 1);
v_lctx_3549_ = lean_ctor_get(v___y_3445_, 2);
v_localInstances_3550_ = lean_ctor_get(v___y_3445_, 3);
v_defEqCtx_x3f_3551_ = lean_ctor_get(v___y_3445_, 4);
v_synthPendingDepth_3552_ = lean_ctor_get(v___y_3445_, 5);
v_customCanUnfoldPredicate_x3f_3553_ = lean_ctor_get(v___y_3445_, 6);
v_univApprox_3554_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3555_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7 + 2);
v_cacheInferType_3556_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3546_);
v___x_3557_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3544_, v_keyedConfig_3546_);
lean_inc(v_customCanUnfoldPredicate_x3f_3553_);
lean_inc(v_synthPendingDepth_3552_);
lean_inc(v_defEqCtx_x3f_3551_);
lean_inc_ref(v_localInstances_3550_);
lean_inc_ref(v_lctx_3549_);
lean_inc(v_zetaDeltaSet_3548_);
v___x_3558_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
lean_ctor_set(v___x_3558_, 1, v_zetaDeltaSet_3548_);
lean_ctor_set(v___x_3558_, 2, v_lctx_3549_);
lean_ctor_set(v___x_3558_, 3, v_localInstances_3550_);
lean_ctor_set(v___x_3558_, 4, v_defEqCtx_x3f_3551_);
lean_ctor_set(v___x_3558_, 5, v_synthPendingDepth_3552_);
lean_ctor_set(v___x_3558_, 6, v_customCanUnfoldPredicate_x3f_3553_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7, v_trackZetaDelta_3547_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7 + 1, v_univApprox_3554_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3555_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7 + 3, v_cacheInferType_3556_);
v___x_3559_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3539_, v___x_3542_, v___x_3543_, v___x_3558_, v___y_3446_, v___y_3447_, v___y_3448_);
lean_dec_ref_known(v___x_3558_, 7);
v___y_3505_ = v___x_3559_;
goto v___jp_3504_;
}
else
{
lean_object* v___x_3560_; 
v___x_3560_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3539_, v___x_3542_, v___x_3543_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
v___y_3505_ = v___x_3560_;
goto v___jp_3504_;
}
}
else
{
lean_dec(v_a_3451_);
lean_dec(v_fuel_3444_);
lean_dec_ref(v_goal_3443_);
lean_dec(v_declName_3442_);
return v___x_3538_;
}
v___jp_3452_:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; size_t v_sz_3462_; size_t v___x_3463_; lean_object* v___x_3464_; 
v___x_3459_ = lean_unsigned_to_nat(0u);
v___x_3460_ = lean_array_get_size(v___y_3454_);
v___x_3461_ = l_Array_toSubarray___redArg(v___y_3454_, v___x_3459_, v___x_3460_);
v_sz_3462_ = lean_array_size(v___y_3453_);
v___x_3463_ = ((size_t)0ULL);
v___x_3464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_declName_3442_, v_fuel_3444_, v___y_3453_, v_sz_3462_, v___x_3463_, v___x_3461_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v___x_3465_; lean_object* v___x_3466_; 
lean_dec_ref_known(v___x_3464_, 1);
v___x_3465_ = l_Lean_mkAppN(v_a_3451_, v___y_3453_);
lean_dec_ref(v___y_3453_);
v___x_3466_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v___x_3465_, v___y_3456_);
return v___x_3466_;
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_dec_ref(v___y_3453_);
lean_dec(v_a_3451_);
v_a_3467_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3464_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3464_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
v___jp_3475_:
{
if (lean_obj_tag(v___y_3478_) == 0)
{
lean_object* v_a_3479_; uint8_t v___x_3480_; 
v_a_3479_ = lean_ctor_get(v___y_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___y_3478_, 1);
v___x_3480_ = lean_unbox(v_a_3479_);
if (v___x_3480_ == 0)
{
lean_object* v___x_3481_; uint8_t v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3481_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3482_ = lean_unbox(v_a_3479_);
lean_dec(v_a_3479_);
lean_inc(v_declName_3442_);
v___x_3483_ = l_Lean_MessageData_ofConstName(v_declName_3442_, v___x_3482_);
v___x_3484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3481_);
lean_ctor_set(v___x_3484_, 1, v___x_3483_);
v___x_3485_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1);
v___x_3486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3484_);
lean_ctor_set(v___x_3486_, 1, v___x_3485_);
v___x_3487_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3486_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_dec_ref_known(v___x_3487_, 1);
v___y_3453_ = v___y_3476_;
v___y_3454_ = v___y_3477_;
v___y_3455_ = v___y_3445_;
v___y_3456_ = v___y_3446_;
v___y_3457_ = v___y_3447_;
v___y_3458_ = v___y_3448_;
goto v___jp_3452_;
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3495_; 
lean_dec_ref(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v_a_3451_);
lean_dec(v_fuel_3444_);
lean_dec(v_declName_3442_);
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3490_ = v___x_3487_;
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___x_3487_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3493_; 
if (v_isShared_3491_ == 0)
{
v___x_3493_ = v___x_3490_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_a_3488_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
else
{
lean_dec(v_a_3479_);
v___y_3453_ = v___y_3476_;
v___y_3454_ = v___y_3477_;
v___y_3455_ = v___y_3445_;
v___y_3456_ = v___y_3446_;
v___y_3457_ = v___y_3447_;
v___y_3458_ = v___y_3448_;
goto v___jp_3452_;
}
}
else
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3503_; 
lean_dec_ref(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v_a_3451_);
lean_dec(v_fuel_3444_);
lean_dec(v_declName_3442_);
v_a_3496_ = lean_ctor_get(v___y_3478_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___y_3478_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3498_ = v___y_3478_;
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___y_3478_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
}
v___jp_3504_:
{
if (lean_obj_tag(v___y_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v_snd_3507_; lean_object* v_fst_3508_; lean_object* v_fst_3509_; lean_object* v_snd_3510_; lean_object* v___x_3511_; uint8_t v_transparency_3512_; uint8_t v___x_3513_; uint8_t v___x_3514_; 
v_a_3506_ = lean_ctor_get(v___y_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___y_3505_, 1);
v_snd_3507_ = lean_ctor_get(v_a_3506_, 1);
lean_inc(v_snd_3507_);
v_fst_3508_ = lean_ctor_get(v_a_3506_, 0);
lean_inc(v_fst_3508_);
lean_dec(v_a_3506_);
v_fst_3509_ = lean_ctor_get(v_snd_3507_, 0);
lean_inc(v_fst_3509_);
v_snd_3510_ = lean_ctor_get(v_snd_3507_, 1);
lean_inc(v_snd_3510_);
lean_dec(v_snd_3507_);
v___x_3511_ = l_Lean_Meta_Context_config(v___y_3445_);
v_transparency_3512_ = lean_ctor_get_uint8(v___x_3511_, 9);
lean_dec_ref(v___x_3511_);
v___x_3513_ = 1;
v___x_3514_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3512_, v___x_3513_);
if (v___x_3514_ == 0)
{
lean_object* v_keyedConfig_3515_; uint8_t v_trackZetaDelta_3516_; lean_object* v_zetaDeltaSet_3517_; lean_object* v_lctx_3518_; lean_object* v_localInstances_3519_; lean_object* v_defEqCtx_x3f_3520_; lean_object* v_synthPendingDepth_3521_; lean_object* v_customCanUnfoldPredicate_x3f_3522_; uint8_t v_univApprox_3523_; uint8_t v_inTypeClassResolution_3524_; uint8_t v_cacheInferType_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v_keyedConfig_3515_ = lean_ctor_get(v___y_3445_, 0);
v_trackZetaDelta_3516_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7);
v_zetaDeltaSet_3517_ = lean_ctor_get(v___y_3445_, 1);
v_lctx_3518_ = lean_ctor_get(v___y_3445_, 2);
v_localInstances_3519_ = lean_ctor_get(v___y_3445_, 3);
v_defEqCtx_x3f_3520_ = lean_ctor_get(v___y_3445_, 4);
v_synthPendingDepth_3521_ = lean_ctor_get(v___y_3445_, 5);
v_customCanUnfoldPredicate_x3f_3522_ = lean_ctor_get(v___y_3445_, 6);
v_univApprox_3523_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3524_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7 + 2);
v_cacheInferType_3525_ = lean_ctor_get_uint8(v___y_3445_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3515_);
v___x_3526_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3513_, v_keyedConfig_3515_);
lean_inc(v_customCanUnfoldPredicate_x3f_3522_);
lean_inc(v_synthPendingDepth_3521_);
lean_inc(v_defEqCtx_x3f_3520_);
lean_inc_ref(v_localInstances_3519_);
lean_inc_ref(v_lctx_3518_);
lean_inc(v_zetaDeltaSet_3517_);
v___x_3527_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3527_, 0, v___x_3526_);
lean_ctor_set(v___x_3527_, 1, v_zetaDeltaSet_3517_);
lean_ctor_set(v___x_3527_, 2, v_lctx_3518_);
lean_ctor_set(v___x_3527_, 3, v_localInstances_3519_);
lean_ctor_set(v___x_3527_, 4, v_defEqCtx_x3f_3520_);
lean_ctor_set(v___x_3527_, 5, v_synthPendingDepth_3521_);
lean_ctor_set(v___x_3527_, 6, v_customCanUnfoldPredicate_x3f_3522_);
lean_ctor_set_uint8(v___x_3527_, sizeof(void*)*7, v_trackZetaDelta_3516_);
lean_ctor_set_uint8(v___x_3527_, sizeof(void*)*7 + 1, v_univApprox_3523_);
lean_ctor_set_uint8(v___x_3527_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3524_);
lean_ctor_set_uint8(v___x_3527_, sizeof(void*)*7 + 3, v_cacheInferType_3525_);
v___x_3528_ = l_Lean_Meta_isExprDefEq(v_snd_3510_, v_goal_3443_, v___x_3527_, v___y_3446_, v___y_3447_, v___y_3448_);
lean_dec_ref_known(v___x_3527_, 7);
v___y_3476_ = v_fst_3508_;
v___y_3477_ = v_fst_3509_;
v___y_3478_ = v___x_3528_;
goto v___jp_3475_;
}
else
{
lean_object* v___x_3529_; 
v___x_3529_ = l_Lean_Meta_isExprDefEq(v_snd_3510_, v_goal_3443_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
v___y_3476_ = v_fst_3508_;
v___y_3477_ = v_fst_3509_;
v___y_3478_ = v___x_3529_;
goto v___jp_3475_;
}
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_dec(v_a_3451_);
lean_dec(v_fuel_3444_);
lean_dec_ref(v_goal_3443_);
lean_dec(v_declName_3442_);
v_a_3530_ = lean_ctor_get(v___y_3505_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___y_3505_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___y_3505_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___y_3505_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
else
{
lean_dec(v_fuel_3444_);
lean_dec_ref(v_goal_3443_);
lean_dec(v_declName_3442_);
return v___x_3450_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0(lean_object* v_fuel_3561_, lean_object* v_a_3562_, lean_object* v_x_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3569_ = lean_unsigned_to_nat(1u);
v___x_3570_ = lean_nat_sub(v_fuel_3561_, v___x_3569_);
v___x_3571_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_x_3563_, v_a_3562_, v___x_3570_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___boxed(lean_object* v_declName_3572_, lean_object* v_goal_3573_, lean_object* v_fuel_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_3572_, v_goal_3573_, v_fuel_3574_, v___y_3575_, v___y_3576_, v___y_3577_, v___y_3578_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v___y_3576_);
lean_dec_ref(v___y_3575_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___boxed(lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_fuel_3583_, lean_object* v___x_3584_, lean_object* v_a_3585_, lean_object* v___x_3586_, lean_object* v_____r_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
uint8_t v___x_38614__boxed_3593_; lean_object* v_res_3594_; 
v___x_38614__boxed_3593_ = lean_unbox(v___x_3586_);
v_res_3594_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_3581_, v_a_3582_, v_fuel_3583_, v___x_3584_, v_a_3585_, v___x_38614__boxed_3593_, v_____r_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
lean_dec_ref(v___x_3584_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___boxed(lean_object* v_declName_3595_, lean_object* v_fuel_3596_, lean_object* v_as_3597_, lean_object* v_sz_3598_, lean_object* v_i_3599_, lean_object* v_b_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
size_t v_sz_boxed_3606_; size_t v_i_boxed_3607_; lean_object* v_res_3608_; 
v_sz_boxed_3606_ = lean_unbox_usize(v_sz_3598_);
lean_dec(v_sz_3598_);
v_i_boxed_3607_ = lean_unbox_usize(v_i_3599_);
lean_dec(v_i_3599_);
v_res_3608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_declName_3595_, v_fuel_3596_, v_as_3597_, v_sz_boxed_3606_, v_i_boxed_3607_, v_b_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v_as_3597_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___boxed(lean_object* v_src_3609_, lean_object* v_tgt_3610_, lean_object* v_fuel_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l_Lean_Meta_Transport_mkEquiv(v_src_3609_, v_tgt_3610_, v_fuel_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
lean_dec(v___y_3615_);
lean_dec_ref(v___y_3614_);
lean_dec(v___y_3613_);
lean_dec_ref(v___y_3612_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v___x_3623_; 
v___x_3623_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_3621_);
return v___x_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___boxed(lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec(v___y_3625_);
lean_dec_ref(v___y_3624_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(lean_object* v_mvarId_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_){
_start:
{
lean_object* v___x_3636_; 
v___x_3636_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_3630_, v___y_3632_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___boxed(lean_object* v_mvarId_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v_res_3643_; 
v_res_3643_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(v_mvarId_3637_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec(v_mvarId_3637_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(lean_object* v_mvarId_3644_, lean_object* v_val_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
lean_object* v___x_3651_; 
v___x_3651_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_3644_, v_val_3645_, v___y_3647_);
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___boxed(lean_object* v_mvarId_3652_, lean_object* v_val_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(v_mvarId_3652_, v_val_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_);
lean_dec(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(lean_object* v_00_u03b1_3660_, lean_object* v_x_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_){
_start:
{
lean_object* v___x_3667_; 
v___x_3667_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_3661_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___boxed(lean_object* v_00_u03b1_3668_, lean_object* v_x_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(v_00_u03b1_3668_, v_x_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
return v_res_3675_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(lean_object* v_00_u03b2_3676_, lean_object* v_x_3677_, lean_object* v_x_3678_){
_start:
{
uint8_t v___x_3679_; 
v___x_3679_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_3677_, v_x_3678_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3680_, lean_object* v_x_3681_, lean_object* v_x_3682_){
_start:
{
uint8_t v_res_3683_; lean_object* v_r_3684_; 
v_res_3683_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(v_00_u03b2_3680_, v_x_3681_, v_x_3682_);
lean_dec(v_x_3682_);
lean_dec_ref(v_x_3681_);
v_r_3684_ = lean_box(v_res_3683_);
return v_r_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2(lean_object* v_00_u03b2_3685_, lean_object* v_x_3686_, lean_object* v_x_3687_, lean_object* v_x_3688_){
_start:
{
lean_object* v___x_3689_; 
v___x_3689_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_x_3686_, v_x_3687_, v_x_3688_);
return v___x_3689_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_3690_, lean_object* v_x_3691_, size_t v_x_3692_, lean_object* v_x_3693_){
_start:
{
uint8_t v___x_3694_; 
v___x_3694_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_3691_, v_x_3692_, v_x_3693_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_3695_, lean_object* v_x_3696_, lean_object* v_x_3697_, lean_object* v_x_3698_){
_start:
{
size_t v_x_40565__boxed_3699_; uint8_t v_res_3700_; lean_object* v_r_3701_; 
v_x_40565__boxed_3699_ = lean_unbox_usize(v_x_3697_);
lean_dec(v_x_3697_);
v_res_3700_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(v_00_u03b2_3695_, v_x_3696_, v_x_40565__boxed_3699_, v_x_3698_);
lean_dec(v_x_3698_);
lean_dec_ref(v_x_3696_);
v_r_3701_ = lean_box(v_res_3700_);
return v_r_3701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_3702_, lean_object* v_x_3703_, size_t v_x_3704_, size_t v_x_3705_, lean_object* v_x_3706_, lean_object* v_x_3707_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_3703_, v_x_3704_, v_x_3705_, v_x_3706_, v_x_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___boxed(lean_object* v_00_u03b2_3709_, lean_object* v_x_3710_, lean_object* v_x_3711_, lean_object* v_x_3712_, lean_object* v_x_3713_, lean_object* v_x_3714_){
_start:
{
size_t v_x_40576__boxed_3715_; size_t v_x_40577__boxed_3716_; lean_object* v_res_3717_; 
v_x_40576__boxed_3715_ = lean_unbox_usize(v_x_3711_);
lean_dec(v_x_3711_);
v_x_40577__boxed_3716_ = lean_unbox_usize(v_x_3712_);
lean_dec(v_x_3712_);
v_res_3717_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(v_00_u03b2_3709_, v_x_3710_, v_x_40576__boxed_3715_, v_x_40577__boxed_3716_, v_x_3713_, v_x_3714_);
return v_res_3717_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b2_3718_, lean_object* v_keys_3719_, lean_object* v_vals_3720_, lean_object* v_heq_3721_, lean_object* v_i_3722_, lean_object* v_k_3723_){
_start:
{
uint8_t v___x_3724_; 
v___x_3724_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_3719_, v_i_3722_, v_k_3723_);
return v___x_3724_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___boxed(lean_object* v_00_u03b2_3725_, lean_object* v_keys_3726_, lean_object* v_vals_3727_, lean_object* v_heq_3728_, lean_object* v_i_3729_, lean_object* v_k_3730_){
_start:
{
uint8_t v_res_3731_; lean_object* v_r_3732_; 
v_res_3731_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(v_00_u03b2_3725_, v_keys_3726_, v_vals_3727_, v_heq_3728_, v_i_3729_, v_k_3730_);
lean_dec(v_k_3730_);
lean_dec_ref(v_vals_3727_);
lean_dec_ref(v_keys_3726_);
v_r_3732_ = lean_box(v_res_3731_);
return v_r_3732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14(lean_object* v_00_u03b2_3733_, lean_object* v_n_3734_, lean_object* v_k_3735_, lean_object* v_v_3736_){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v_n_3734_, v_k_3735_, v_v_3736_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(lean_object* v_00_u03b2_3738_, size_t v_depth_3739_, lean_object* v_keys_3740_, lean_object* v_vals_3741_, lean_object* v_heq_3742_, lean_object* v_i_3743_, lean_object* v_entries_3744_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_3739_, v_keys_3740_, v_vals_3741_, v_i_3743_, v_entries_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___boxed(lean_object* v_00_u03b2_3746_, lean_object* v_depth_3747_, lean_object* v_keys_3748_, lean_object* v_vals_3749_, lean_object* v_heq_3750_, lean_object* v_i_3751_, lean_object* v_entries_3752_){
_start:
{
size_t v_depth_boxed_3753_; lean_object* v_res_3754_; 
v_depth_boxed_3753_ = lean_unbox_usize(v_depth_3747_);
lean_dec(v_depth_3747_);
v_res_3754_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(v_00_u03b2_3746_, v_depth_boxed_3753_, v_keys_3748_, v_vals_3749_, v_heq_3750_, v_i_3751_, v_entries_3752_);
lean_dec_ref(v_vals_3749_);
lean_dec_ref(v_keys_3748_);
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16(lean_object* v_00_u03b2_3755_, lean_object* v_x_3756_, lean_object* v_x_3757_, lean_object* v_x_3758_, lean_object* v_x_3759_){
_start:
{
lean_object* v___x_3760_; 
v___x_3760_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_x_3756_, v_x_3757_, v_x_3758_, v_x_3759_);
return v___x_3760_;
}
}
static lean_object* _init_l_Lean_Meta_mkTransportEquiv___closed__1(void){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = ((lean_object*)(l_Lean_Meta_mkTransportEquiv___closed__0));
v___x_3763_ = l_Lean_stringToMessageData(v___x_3762_);
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv(lean_object* v_src_3764_, lean_object* v_tgt_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_){
_start:
{
lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___x_3778_; lean_object* v_env_3779_; lean_object* v___x_3780_; uint8_t v___x_3781_; uint8_t v___x_3782_; 
v___x_3778_ = lean_st_ref_get(v___y_3769_);
v_env_3779_ = lean_ctor_get(v___x_3778_, 0);
lean_inc_ref(v_env_3779_);
lean_dec(v___x_3778_);
v___x_3780_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1));
v___x_3781_ = 1;
v___x_3782_ = l_Lean_Environment_contains(v_env_3779_, v___x_3780_, v___x_3781_);
if (v___x_3782_ == 0)
{
lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
lean_dec_ref(v_tgt_3765_);
lean_dec_ref(v_src_3764_);
v___x_3783_ = lean_obj_once(&l_Lean_Meta_mkTransportEquiv___closed__1, &l_Lean_Meta_mkTransportEquiv___closed__1_once, _init_l_Lean_Meta_mkTransportEquiv___closed__1);
v___x_3784_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3783_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_);
v_a_3785_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3784_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3784_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
else
{
v___y_3772_ = v___y_3766_;
v___y_3773_ = v___y_3767_;
v___y_3774_ = v___y_3768_;
v___y_3775_ = v___y_3769_;
goto v___jp_3771_;
}
v___jp_3771_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3776_ = lean_unsigned_to_nat(8u);
v___x_3777_ = l_Lean_Meta_Transport_mkEquiv(v_src_3764_, v_tgt_3765_, v___x_3776_, v___y_3772_, v___y_3773_, v___y_3774_, v___y_3775_);
return v___x_3777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___boxed(lean_object* v_src_3793_, lean_object* v_tgt_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l_Lean_Meta_mkTransportEquiv(v_src_3793_, v_tgt_3794_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_);
lean_dec(v___y_3798_);
lean_dec_ref(v___y_3797_);
lean_dec(v___y_3796_);
lean_dec_ref(v___y_3795_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport(lean_object* v_e_3805_, lean_object* v_tgt_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
lean_object* v___x_3812_; 
lean_inc(v___y_3810_);
lean_inc_ref(v___y_3809_);
lean_inc(v___y_3808_);
lean_inc_ref(v___y_3807_);
lean_inc_ref(v_e_3805_);
v___x_3812_ = lean_infer_type(v_e_3805_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_);
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3814_; 
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3813_);
lean_dec_ref_known(v___x_3812_, 1);
v___x_3814_ = l_Lean_Meta_mkTransportEquiv(v_a_3813_, v_tgt_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_a_3815_);
lean_dec_ref_known(v___x_3814_, 1);
v___x_3816_ = ((lean_object*)(l_Lean_Meta_transport___closed__1));
v___x_3817_ = lean_unsigned_to_nat(2u);
v___x_3818_ = lean_mk_empty_array_with_capacity(v___x_3817_);
v___x_3819_ = lean_array_push(v___x_3818_, v_a_3815_);
v___x_3820_ = lean_array_push(v___x_3819_, v_e_3805_);
v___x_3821_ = l_Lean_Meta_mkAppM(v___x_3816_, v___x_3820_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_);
return v___x_3821_;
}
else
{
lean_dec_ref(v_e_3805_);
return v___x_3814_;
}
}
else
{
lean_dec_ref(v_tgt_3806_);
lean_dec_ref(v_e_3805_);
return v___x_3812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport___boxed(lean_object* v_e_3822_, lean_object* v_tgt_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lean_Meta_transport(v_e_3822_, v_tgt_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance(lean_object* v_src_3830_, lean_object* v_tgt_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_){
_start:
{
lean_object* v___x_3837_; 
lean_inc_ref(v_src_3830_);
v___x_3837_ = l_Lean_Meta_mkTransportEquiv(v_src_3830_, v_tgt_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_a_3838_; lean_object* v___x_3839_; lean_object* v_a_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3838_);
lean_dec_ref_known(v___x_3837_, 1);
v___x_3839_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_src_3830_, v___y_3833_);
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3840_);
lean_dec_ref(v___x_3839_);
v___x_3841_ = lean_box(0);
v___x_3842_ = l_Lean_Meta_synthInstance(v_a_3840_, v___x_3841_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
if (lean_obj_tag(v___x_3842_) == 0)
{
lean_object* v_a_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; 
v_a_3843_ = lean_ctor_get(v___x_3842_, 0);
lean_inc(v_a_3843_);
lean_dec_ref_known(v___x_3842_, 1);
v___x_3844_ = ((lean_object*)(l_Lean_Meta_transport___closed__1));
v___x_3845_ = lean_unsigned_to_nat(2u);
v___x_3846_ = lean_mk_empty_array_with_capacity(v___x_3845_);
v___x_3847_ = lean_array_push(v___x_3846_, v_a_3838_);
v___x_3848_ = lean_array_push(v___x_3847_, v_a_3843_);
v___x_3849_ = l_Lean_Meta_mkAppM(v___x_3844_, v___x_3848_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
return v___x_3849_;
}
else
{
lean_dec(v_a_3838_);
return v___x_3842_;
}
}
else
{
lean_dec_ref(v_src_3830_);
return v___x_3837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance___boxed(lean_object* v_src_3850_, lean_object* v_tgt_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l_Lean_Meta_transportInstance(v_src_3850_, v_tgt_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
return v_res_3857_;
}
}
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Transport(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Transport_transportExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Transport_transportExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Transport(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Function(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Transport(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Transport(builtin);
}
#ifdef __cplusplus
}
#endif
