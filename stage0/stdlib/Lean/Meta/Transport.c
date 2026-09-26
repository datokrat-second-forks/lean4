// Lean compiler output
// Module: Lean.Meta.Transport
// Imports: public import Init.Data.Function public import Lean.Meta.DiscrTree.Main public import Lean.Meta.SynthInstance import Lean.Meta.AppBuilder import Lean.ProjFns import Init.While
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
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*);
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
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "CanonicalEquivalence"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 213, 153, 238, 45, 67, 100, 241)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "invalid `@[transport]` declaration `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`, its conclusion mentions the equivalence `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "`; state terms built from it as implicit arguments determined by the conclusion, with equations, as `Eq.canonicalCongr` does"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "`, its explicit arguments must be equivalences, families of equivalences or equations, but `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_addTransportDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 80, .m_data = "`, its conclusion must be an equivalence `Lean.CanonicalEquivalence α β`, but is"};
static const lean_object* l_Lean_Meta_Transport_addTransportDecl___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_addTransportDecl___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_addTransportDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_addTransportDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
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
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "transportDepth"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 174, 246, 97, 150, 113, 132, 96)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_depthExceptionId;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.CanonicalEquivalence "};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3;
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
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "` does not lead anywhere"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to transport"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__0 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__1;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__2 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__3;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__4;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__5 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 213, 153, 238, 45, 67, 100, 241)}};
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__5_value),LEAN_SCALAR_PTR_LITERAL(158, 109, 57, 57, 54, 219, 146, 19)}};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__6 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__6_value;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__7 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__7_value;
static const lean_string_object l_Lean_Meta_Transport_mkEquiv___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__8 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Transport_mkEquiv___closed__9 = (const lean_object*)&l_Lean_Meta_Transport_mkEquiv___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Transport_mkEquiv___closed__10;
static lean_once_cell_t l_Lean_Meta_Transport_mkEquiv___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Transport_mkEquiv___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "cannot infer argument `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "` does not apply, its argument `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "` does not hold by `rfl`:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` does not apply"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Meta_mkTransportEquiv___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "\nbecause the search exceeded its depth; the `@[transport]` declarations may form a cycle"};
static const lean_object* l_Lean_Meta_mkTransportEquiv___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_mkTransportEquiv___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkTransportEquiv___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTransportEquiv___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkTransportEquiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "`Lean.CanonicalEquivalence` is not available, transporting requires `Init.Data.Function`"};
static const lean_object* l_Lean_Meta_mkTransportEquiv___closed__0 = (const lean_object*)&l_Lean_Meta_mkTransportEquiv___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkTransportEquiv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTransportEquiv___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue_spec__0___redArg(lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__2 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "comp"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__3 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__3_value),LEAN_SCALAR_PTR_LITERAL(38, 235, 97, 97, 37, 43, 137, 69)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__4 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__4_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toFun"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "invFun"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 213, 153, 238, 45, 67, 100, 241)}};
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 19, 87, 156, 144, 227, 118, 98)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___boxed, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1_value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__2 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__3 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__4 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_initFn_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2____boxed(lean_object* v_a_66_){
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2____boxed(lean_object* v_a_634_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0(lean_object* v_k_702_, lean_object* v_b_703_, lean_object* v_c_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v___x_710_; 
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
v___x_710_ = lean_apply_7(v_k_702_, v_b_703_, v_c_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0___boxed(lean_object* v_k_711_, lean_object* v_b_712_, lean_object* v_c_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0(v_k_711_, v_b_712_, v_c_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(lean_object* v_type_720_, lean_object* v_k_721_, uint8_t v_cleanupAnnotations_722_, uint8_t v_whnfType_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___f_729_; lean_object* v___x_730_; 
v___f_729_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_729_, 0, v_k_721_);
v___x_730_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_720_, v___f_729_, v_cleanupAnnotations_722_, v_whnfType_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
v_a_739_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_730_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_730_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___boxed(lean_object* v_type_747_, lean_object* v_k_748_, lean_object* v_cleanupAnnotations_749_, lean_object* v_whnfType_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_756_; uint8_t v_whnfType_boxed_757_; lean_object* v_res_758_; 
v_cleanupAnnotations_boxed_756_ = lean_unbox(v_cleanupAnnotations_749_);
v_whnfType_boxed_757_ = lean_unbox(v_whnfType_750_);
v_res_758_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_type_747_, v_k_748_, v_cleanupAnnotations_boxed_756_, v_whnfType_boxed_757_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0(lean_object* v_00_u03b1_759_, lean_object* v_type_760_, lean_object* v_k_761_, uint8_t v_cleanupAnnotations_762_, uint8_t v_whnfType_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_type_760_, v_k_761_, v_cleanupAnnotations_762_, v_whnfType_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___boxed(lean_object* v_00_u03b1_770_, lean_object* v_type_771_, lean_object* v_k_772_, lean_object* v_cleanupAnnotations_773_, lean_object* v_whnfType_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_780_; uint8_t v_whnfType_boxed_781_; lean_object* v_res_782_; 
v_cleanupAnnotations_boxed_780_ = lean_unbox(v_cleanupAnnotations_773_);
v_whnfType_boxed_781_ = lean_unbox(v_whnfType_774_);
v_res_782_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0(v_00_u03b1_770_, v_type_771_, v_k_772_, v_cleanupAnnotations_boxed_780_, v_whnfType_boxed_781_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0(lean_object* v_x_787_, lean_object* v_body_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; uint8_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_794_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_795_ = lean_unsigned_to_nat(2u);
v___x_796_ = l_Lean_Expr_isAppOfArity(v_body_788_, v___x_794_, v___x_795_);
v___x_797_ = lean_box(v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___boxed(lean_object* v_x_799_, lean_object* v_body_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0(v_x_799_, v_body_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec_ref(v_body_800_);
lean_dec_ref(v_x_799_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(lean_object* v_type_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_){
_start:
{
lean_object* v___y_815_; lean_object* v___x_832_; uint8_t v_transparency_833_; lean_object* v___f_834_; uint8_t v___x_835_; uint8_t v___x_836_; uint8_t v___x_837_; 
v___x_832_ = l_Lean_Meta_Context_config(v_a_809_);
v_transparency_833_ = lean_ctor_get_uint8(v___x_832_, 9);
lean_dec_ref(v___x_832_);
v___f_834_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___closed__0));
v___x_835_ = 0;
v___x_836_ = 2;
v___x_837_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_833_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v_keyedConfig_838_; uint8_t v_trackZetaDelta_839_; lean_object* v_zetaDeltaSet_840_; lean_object* v_lctx_841_; lean_object* v_localInstances_842_; lean_object* v_defEqCtx_x3f_843_; lean_object* v_synthPendingDepth_844_; lean_object* v_customCanUnfoldPredicate_x3f_845_; uint8_t v_univApprox_846_; uint8_t v_inTypeClassResolution_847_; uint8_t v_cacheInferType_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_keyedConfig_838_ = lean_ctor_get(v_a_809_, 0);
v_trackZetaDelta_839_ = lean_ctor_get_uint8(v_a_809_, sizeof(void*)*7);
v_zetaDeltaSet_840_ = lean_ctor_get(v_a_809_, 1);
v_lctx_841_ = lean_ctor_get(v_a_809_, 2);
v_localInstances_842_ = lean_ctor_get(v_a_809_, 3);
v_defEqCtx_x3f_843_ = lean_ctor_get(v_a_809_, 4);
v_synthPendingDepth_844_ = lean_ctor_get(v_a_809_, 5);
v_customCanUnfoldPredicate_x3f_845_ = lean_ctor_get(v_a_809_, 6);
v_univApprox_846_ = lean_ctor_get_uint8(v_a_809_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_847_ = lean_ctor_get_uint8(v_a_809_, sizeof(void*)*7 + 2);
v_cacheInferType_848_ = lean_ctor_get_uint8(v_a_809_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_838_);
v___x_849_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_836_, v_keyedConfig_838_);
lean_inc(v_customCanUnfoldPredicate_x3f_845_);
lean_inc(v_synthPendingDepth_844_);
lean_inc(v_defEqCtx_x3f_843_);
lean_inc_ref(v_localInstances_842_);
lean_inc_ref(v_lctx_841_);
lean_inc(v_zetaDeltaSet_840_);
v___x_850_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set(v___x_850_, 1, v_zetaDeltaSet_840_);
lean_ctor_set(v___x_850_, 2, v_lctx_841_);
lean_ctor_set(v___x_850_, 3, v_localInstances_842_);
lean_ctor_set(v___x_850_, 4, v_defEqCtx_x3f_843_);
lean_ctor_set(v___x_850_, 5, v_synthPendingDepth_844_);
lean_ctor_set(v___x_850_, 6, v_customCanUnfoldPredicate_x3f_845_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*7, v_trackZetaDelta_839_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*7 + 1, v_univApprox_846_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*7 + 2, v_inTypeClassResolution_847_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*7 + 3, v_cacheInferType_848_);
v___x_851_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_type_808_, v___f_834_, v___x_835_, v___x_835_, v___x_850_, v_a_810_, v_a_811_, v_a_812_);
lean_dec_ref_known(v___x_850_, 7);
v___y_815_ = v___x_851_;
goto v___jp_814_;
}
else
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_type_808_, v___f_834_, v___x_835_, v___x_835_, v_a_809_, v_a_810_, v_a_811_, v_a_812_);
v___y_815_ = v___x_852_;
goto v___jp_814_;
}
v___jp_814_:
{
if (lean_obj_tag(v___y_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
v_a_816_ = lean_ctor_get(v___y_815_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___y_815_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___y_815_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___y_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
v_a_824_ = lean_ctor_get(v___y_815_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___y_815_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___y_815_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___y_815_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___boxed(lean_object* v_type_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_type_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_);
lean_dec(v_a_857_);
lean_dec_ref(v_a_856_);
lean_dec(v_a_855_);
lean_dec_ref(v_a_854_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(lean_object* v_e_860_, lean_object* v___y_861_){
_start:
{
uint8_t v___x_863_; 
v___x_863_ = l_Lean_Expr_hasMVar(v_e_860_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; 
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v_e_860_);
return v___x_864_;
}
else
{
lean_object* v___x_865_; lean_object* v_mctx_866_; lean_object* v___x_867_; lean_object* v_fst_868_; lean_object* v_snd_869_; lean_object* v___x_870_; lean_object* v_cache_871_; lean_object* v_zetaDeltaFVarIds_872_; lean_object* v_postponed_873_; lean_object* v_diag_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_883_; 
v___x_865_ = lean_st_ref_get(v___y_861_);
v_mctx_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc_ref(v_mctx_866_);
lean_dec(v___x_865_);
v___x_867_ = l_Lean_instantiateMVarsCore(v_mctx_866_, v_e_860_);
v_fst_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_fst_868_);
v_snd_869_ = lean_ctor_get(v___x_867_, 1);
lean_inc(v_snd_869_);
lean_dec_ref(v___x_867_);
v___x_870_ = lean_st_ref_take(v___y_861_);
v_cache_871_ = lean_ctor_get(v___x_870_, 1);
v_zetaDeltaFVarIds_872_ = lean_ctor_get(v___x_870_, 2);
v_postponed_873_ = lean_ctor_get(v___x_870_, 3);
v_diag_874_ = lean_ctor_get(v___x_870_, 4);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v___x_870_, 0);
lean_dec(v_unused_884_);
v___x_876_ = v___x_870_;
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_diag_874_);
lean_inc(v_postponed_873_);
lean_inc(v_zetaDeltaFVarIds_872_);
lean_inc(v_cache_871_);
lean_dec(v___x_870_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v_snd_869_);
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_snd_869_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_cache_871_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_zetaDeltaFVarIds_872_);
lean_ctor_set(v_reuseFailAlloc_882_, 3, v_postponed_873_);
lean_ctor_set(v_reuseFailAlloc_882_, 4, v_diag_874_);
v___x_879_ = v_reuseFailAlloc_882_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = lean_st_ref_put(v___y_861_, v___x_879_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_fst_868_);
return v___x_881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg___boxed(lean_object* v_e_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_e_885_, v___y_886_);
lean_dec(v___y_886_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(lean_object* v_e_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_e_889_, v___y_891_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___boxed(lean_object* v_e_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(v_e_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
return v_res_902_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0);
v___x_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0);
v___x_908_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
lean_ctor_set(v___x_908_, 2, v___x_907_);
lean_ctor_set(v___x_908_, 3, v___x_907_);
lean_ctor_set(v___x_908_, 4, v___x_907_);
lean_ctor_set(v___x_908_, 5, v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(lean_object* v_ext_909_, lean_object* v_b_910_, uint8_t v_kind_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_toCold_916_; lean_object* v_currNamespace_917_; lean_object* v___x_918_; lean_object* v_env_919_; lean_object* v_nextMacroScope_920_; lean_object* v_ngen_921_; lean_object* v_auxDeclNGen_922_; lean_object* v_traceState_923_; lean_object* v_messages_924_; lean_object* v_infoState_925_; lean_object* v_snapshotTasks_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_953_; 
v_toCold_916_ = lean_ctor_get(v___y_913_, 0);
v_currNamespace_917_ = lean_ctor_get(v_toCold_916_, 4);
v___x_918_ = lean_st_ref_take(v___y_914_);
v_env_919_ = lean_ctor_get(v___x_918_, 0);
v_nextMacroScope_920_ = lean_ctor_get(v___x_918_, 1);
v_ngen_921_ = lean_ctor_get(v___x_918_, 2);
v_auxDeclNGen_922_ = lean_ctor_get(v___x_918_, 3);
v_traceState_923_ = lean_ctor_get(v___x_918_, 4);
v_messages_924_ = lean_ctor_get(v___x_918_, 6);
v_infoState_925_ = lean_ctor_get(v___x_918_, 7);
v_snapshotTasks_926_ = lean_ctor_get(v___x_918_, 8);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_953_ == 0)
{
lean_object* v_unused_954_; 
v_unused_954_ = lean_ctor_get(v___x_918_, 5);
lean_dec(v_unused_954_);
v___x_928_ = v___x_918_;
v_isShared_929_ = v_isSharedCheck_953_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_snapshotTasks_926_);
lean_inc(v_infoState_925_);
lean_inc(v_messages_924_);
lean_inc(v_traceState_923_);
lean_inc(v_auxDeclNGen_922_);
lean_inc(v_ngen_921_);
lean_inc(v_nextMacroScope_920_);
lean_inc(v_env_919_);
lean_dec(v___x_918_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_953_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
lean_inc(v_currNamespace_917_);
v___x_930_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_919_, v_ext_909_, v_b_910_, v_kind_911_, v_currNamespace_917_);
v___x_931_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 5, v___x_931_);
lean_ctor_set(v___x_928_, 0, v___x_930_);
v___x_933_ = v___x_928_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v_nextMacroScope_920_);
lean_ctor_set(v_reuseFailAlloc_952_, 2, v_ngen_921_);
lean_ctor_set(v_reuseFailAlloc_952_, 3, v_auxDeclNGen_922_);
lean_ctor_set(v_reuseFailAlloc_952_, 4, v_traceState_923_);
lean_ctor_set(v_reuseFailAlloc_952_, 5, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_952_, 6, v_messages_924_);
lean_ctor_set(v_reuseFailAlloc_952_, 7, v_infoState_925_);
lean_ctor_set(v_reuseFailAlloc_952_, 8, v_snapshotTasks_926_);
v___x_933_ = v_reuseFailAlloc_952_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v_mctx_936_; lean_object* v_zetaDeltaFVarIds_937_; lean_object* v_postponed_938_; lean_object* v_diag_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_950_; 
v___x_934_ = lean_st_ref_put(v___y_914_, v___x_933_);
v___x_935_ = lean_st_ref_take(v___y_912_);
v_mctx_936_ = lean_ctor_get(v___x_935_, 0);
v_zetaDeltaFVarIds_937_ = lean_ctor_get(v___x_935_, 2);
v_postponed_938_ = lean_ctor_get(v___x_935_, 3);
v_diag_939_ = lean_ctor_get(v___x_935_, 4);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_950_ == 0)
{
lean_object* v_unused_951_; 
v_unused_951_ = lean_ctor_get(v___x_935_, 1);
lean_dec(v_unused_951_);
v___x_941_ = v___x_935_;
v_isShared_942_ = v_isSharedCheck_950_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_diag_939_);
lean_inc(v_postponed_938_);
lean_inc(v_zetaDeltaFVarIds_937_);
lean_inc(v_mctx_936_);
lean_dec(v___x_935_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_950_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_943_ = lean_box(0);
v___x_944_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 1, v___x_944_);
v___x_946_ = v___x_941_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_mctx_936_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_949_, 2, v_zetaDeltaFVarIds_937_);
lean_ctor_set(v_reuseFailAlloc_949_, 3, v_postponed_938_);
lean_ctor_set(v_reuseFailAlloc_949_, 4, v_diag_939_);
v___x_946_ = v_reuseFailAlloc_949_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_st_ref_put(v___y_912_, v___x_946_);
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v___x_943_);
return v___x_948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___boxed(lean_object* v_ext_955_, lean_object* v_b_956_, lean_object* v_kind_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
uint8_t v_kind_boxed_962_; lean_object* v_res_963_; 
v_kind_boxed_962_ = lean_unbox(v_kind_957_);
v_res_963_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v_ext_955_, v_b_956_, v_kind_boxed_962_, v___y_958_, v___y_959_, v___y_960_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(lean_object* v_00_u03b1_964_, lean_object* v_00_u03b2_965_, lean_object* v_00_u03c3_966_, lean_object* v_ext_967_, lean_object* v_b_968_, uint8_t v_kind_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v_ext_967_, v_b_968_, v_kind_969_, v___y_971_, v___y_972_, v___y_973_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___boxed(lean_object* v_00_u03b1_976_, lean_object* v_00_u03b2_977_, lean_object* v_00_u03c3_978_, lean_object* v_ext_979_, lean_object* v_b_980_, lean_object* v_kind_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
uint8_t v_kind_boxed_987_; lean_object* v_res_988_; 
v_kind_boxed_987_ = lean_unbox(v_kind_981_);
v_res_988_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(v_00_u03b1_976_, v_00_u03b2_977_, v_00_u03c3_978_, v_ext_979_, v_b_980_, v_kind_boxed_987_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(lean_object* v_msgData_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___x_995_; lean_object* v_env_996_; lean_object* v___x_997_; lean_object* v_toCold_998_; lean_object* v_mctx_999_; lean_object* v_lctx_1000_; lean_object* v_options_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_995_ = lean_st_ref_get(v___y_993_);
v_env_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc_ref(v_env_996_);
lean_dec(v___x_995_);
v___x_997_ = lean_st_ref_get(v___y_991_);
v_toCold_998_ = lean_ctor_get(v___y_992_, 0);
v_mctx_999_ = lean_ctor_get(v___x_997_, 0);
lean_inc_ref(v_mctx_999_);
lean_dec(v___x_997_);
v_lctx_1000_ = lean_ctor_get(v___y_990_, 2);
v_options_1001_ = lean_ctor_get(v_toCold_998_, 2);
lean_inc_ref(v_options_1001_);
lean_inc_ref(v_lctx_1000_);
v___x_1002_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1002_, 0, v_env_996_);
lean_ctor_set(v___x_1002_, 1, v_mctx_999_);
lean_ctor_set(v___x_1002_, 2, v_lctx_1000_);
lean_ctor_set(v___x_1002_, 3, v_options_1001_);
v___x_1003_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
lean_ctor_set(v___x_1003_, 1, v_msgData_989_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1___boxed(lean_object* v_msgData_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msgData_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(lean_object* v_msg_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_ref_1018_; lean_object* v___x_1019_; lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1028_; 
v_ref_1018_ = lean_ctor_get(v___y_1015_, 2);
v___x_1019_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1028_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1028_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1026_; 
lean_inc(v_ref_1018_);
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v_ref_1018_);
lean_ctor_set(v___x_1024_, 1, v_a_1020_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 1);
lean_ctor_set(v___x_1022_, 0, v___x_1024_);
v___x_1026_ = v___x_1022_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg___boxed(lean_object* v_msg_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(lean_object* v_ref_1036_, lean_object* v_msg_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_toCold_1043_; lean_object* v_currRecDepth_1044_; lean_object* v_ref_1045_; uint8_t v_diag_1046_; uint8_t v_suppressElabErrors_1047_; lean_object* v_ref_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v_toCold_1043_ = lean_ctor_get(v___y_1040_, 0);
v_currRecDepth_1044_ = lean_ctor_get(v___y_1040_, 1);
v_ref_1045_ = lean_ctor_get(v___y_1040_, 2);
v_diag_1046_ = lean_ctor_get_uint8(v___y_1040_, sizeof(void*)*3);
v_suppressElabErrors_1047_ = lean_ctor_get_uint8(v___y_1040_, sizeof(void*)*3 + 1);
v_ref_1048_ = l_Lean_replaceRef(v_ref_1036_, v_ref_1045_);
lean_inc(v_currRecDepth_1044_);
lean_inc_ref(v_toCold_1043_);
v___x_1049_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1049_, 0, v_toCold_1043_);
lean_ctor_set(v___x_1049_, 1, v_currRecDepth_1044_);
lean_ctor_set(v___x_1049_, 2, v_ref_1048_);
lean_ctor_set_uint8(v___x_1049_, sizeof(void*)*3, v_diag_1046_);
lean_ctor_set_uint8(v___x_1049_, sizeof(void*)*3 + 1, v_suppressElabErrors_1047_);
v___x_1050_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1037_, v___y_1038_, v___y_1039_, v___x_1049_, v___y_1041_);
lean_dec_ref_known(v___x_1049_, 3);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object* v_ref_1051_, lean_object* v_msg_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_1051_, v_msg_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v_ref_1051_);
return v_res_1058_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_1062_ = lean_unsigned_to_nat(0u);
v___x_1063_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
lean_ctor_set(v___x_1063_, 2, v___x_1062_);
lean_ctor_set(v___x_1063_, 3, v___x_1062_);
lean_ctor_set(v___x_1063_, 4, v___x_1061_);
lean_ctor_set(v___x_1063_, 5, v___x_1061_);
lean_ctor_set(v___x_1063_, 6, v___x_1061_);
lean_ctor_set(v___x_1063_, 7, v___x_1061_);
lean_ctor_set(v___x_1063_, 8, v___x_1061_);
lean_ctor_set(v___x_1063_, 9, v___x_1061_);
lean_ctor_set(v___x_1063_, 10, v___x_1061_);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_unsigned_to_nat(32u);
v___x_1065_ = lean_mk_empty_array_with_capacity(v___x_1064_);
v___x_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
size_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1067_ = ((size_t)5ULL);
v___x_1068_ = lean_unsigned_to_nat(0u);
v___x_1069_ = lean_unsigned_to_nat(32u);
v___x_1070_ = lean_mk_empty_array_with_capacity(v___x_1069_);
v___x_1071_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_1072_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v___x_1070_);
lean_ctor_set(v___x_1072_, 2, v___x_1068_);
lean_ctor_set(v___x_1072_, 3, v___x_1068_);
lean_ctor_set_usize(v___x_1072_, 4, v___x_1067_);
return v___x_1072_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1073_ = lean_box(1);
v___x_1074_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_1075_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_1076_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set(v___x_1076_, 1, v___x_1074_);
lean_ctor_set(v___x_1076_, 2, v___x_1073_);
return v___x_1076_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__5));
v___x_1079_ = l_Lean_stringToMessageData(v___x_1078_);
return v___x_1079_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__7));
v___x_1082_ = l_Lean_stringToMessageData(v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__9));
v___x_1085_ = l_Lean_stringToMessageData(v___x_1084_);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__11));
v___x_1088_ = l_Lean_stringToMessageData(v___x_1087_);
return v___x_1088_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__13));
v___x_1091_ = l_Lean_stringToMessageData(v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__15));
v___x_1094_ = l_Lean_stringToMessageData(v___x_1093_);
return v___x_1094_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__17));
v___x_1097_ = l_Lean_stringToMessageData(v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_1098_, lean_object* v_declHint_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v_env_1104_; uint8_t v___x_1105_; 
v___x_1102_ = lean_box(0);
v___x_1103_ = lean_st_ref_get(v___y_1100_);
v_env_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc_ref(v_env_1104_);
lean_dec(v___x_1103_);
v___x_1105_ = l_Lean_Name_isAnonymous(v_declHint_1099_);
if (v___x_1105_ == 0)
{
uint8_t v_isExporting_1106_; 
v_isExporting_1106_ = lean_ctor_get_uint8(v_env_1104_, sizeof(void*)*8);
if (v_isExporting_1106_ == 0)
{
lean_object* v___x_1107_; 
lean_dec_ref(v_env_1104_);
lean_dec(v_declHint_1099_);
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v_msg_1098_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; uint8_t v___x_1109_; 
lean_inc_ref(v_env_1104_);
v___x_1108_ = l_Lean_Environment_setExporting(v_env_1104_, v___x_1105_);
lean_inc(v_declHint_1099_);
lean_inc_ref(v___x_1108_);
v___x_1109_ = l_Lean_Environment_contains(v___x_1108_, v_declHint_1099_, v_isExporting_1106_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; 
lean_dec_ref(v___x_1108_);
lean_dec_ref(v_env_1104_);
lean_dec(v_declHint_1099_);
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v_msg_1098_);
return v___x_1110_;
}
else
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v_c_1116_; lean_object* v___x_1117_; 
v___x_1111_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_1112_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4);
v___x_1113_ = l_Lean_Options_empty;
v___x_1114_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1108_);
lean_ctor_set(v___x_1114_, 1, v___x_1111_);
lean_ctor_set(v___x_1114_, 2, v___x_1112_);
lean_ctor_set(v___x_1114_, 3, v___x_1113_);
lean_inc(v_declHint_1099_);
v___x_1115_ = l_Lean_MessageData_ofConstName(v_declHint_1099_, v___x_1105_);
v_c_1116_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1116_, 0, v___x_1114_);
lean_ctor_set(v_c_1116_, 1, v___x_1115_);
v___x_1117_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1104_, v_declHint_1099_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_dec_ref(v_env_1104_);
lean_dec(v_declHint_1099_);
v___x_1118_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
lean_ctor_set(v___x_1119_, 1, v_c_1116_);
v___x_1120_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__8);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = l_Lean_MessageData_note(v___x_1121_);
v___x_1123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1123_, 0, v_msg_1098_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
return v___x_1124_;
}
else
{
lean_object* v_val_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1159_; 
v_val_1125_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1127_ = v___x_1117_;
v_isShared_1128_ = v_isSharedCheck_1159_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_val_1125_);
lean_dec(v___x_1117_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1159_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v_mod_1131_; uint8_t v___x_1132_; 
v___x_1129_ = l_Lean_Environment_header(v_env_1104_);
lean_dec_ref(v_env_1104_);
v___x_1130_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1129_);
v_mod_1131_ = lean_array_get(v___x_1102_, v___x_1130_, v_val_1125_);
lean_dec(v_val_1125_);
lean_dec_ref(v___x_1130_);
v___x_1132_ = l_Lean_isPrivateName(v_declHint_1099_);
lean_dec(v_declHint_1099_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1144_; 
v___x_1133_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__10);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
lean_ctor_set(v___x_1134_, 1, v_c_1116_);
v___x_1135_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__12);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = l_Lean_MessageData_ofName(v_mod_1131_);
v___x_1138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__14);
v___x_1140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = l_Lean_MessageData_note(v___x_1140_);
v___x_1142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1142_, 0, v_msg_1098_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1142_);
v___x_1144_ = v___x_1127_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1146_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__6);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v_c_1116_);
v___x_1148_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__16);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = l_Lean_MessageData_ofName(v_mod_1131_);
v___x_1151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__18);
v___x_1153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = l_Lean_MessageData_note(v___x_1153_);
v___x_1155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1155_, 0, v_msg_1098_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1155_);
v___x_1157_ = v___x_1127_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1160_; 
lean_dec_ref(v_env_1104_);
lean_dec(v_declHint_1099_);
v___x_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1160_, 0, v_msg_1098_);
return v___x_1160_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_1161_, lean_object* v_declHint_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_1161_, v_declHint_1162_, v___y_1163_);
lean_dec(v___y_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9(lean_object* v_msg_1166_, lean_object* v_declHint_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1173_; lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1183_; 
v___x_1173_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_1166_, v_declHint_1167_, v___y_1171_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1178_ = l_Lean_unknownIdentifierMessageTag;
v___x_1179_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v_a_1174_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1179_);
v___x_1181_ = v___x_1176_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_1184_, lean_object* v_declHint_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9(v_msg_1184_, v_declHint_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg(lean_object* v_ref_1192_, lean_object* v_msg_1193_, lean_object* v_declHint_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v___x_1200_; lean_object* v_a_1201_; lean_object* v___x_1202_; 
v___x_1200_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9(v_msg_1193_, v_declHint_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1201_);
lean_dec_ref(v___x_1200_);
v___x_1202_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_1192_, v_a_1201_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_ref_1203_, lean_object* v_msg_1204_, lean_object* v_declHint_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg(v_ref_1203_, v_msg_1204_, v_declHint_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v_ref_1203_);
return v_res_1211_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__0));
v___x_1214_ = l_Lean_stringToMessageData(v___x_1213_);
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__2));
v___x_1217_ = l_Lean_stringToMessageData(v___x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg(lean_object* v_ref_1218_, lean_object* v_constName_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v___x_1225_; uint8_t v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1225_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__1);
v___x_1226_ = 0;
lean_inc(v_constName_1219_);
v___x_1227_ = l_Lean_MessageData_ofConstName(v_constName_1219_, v___x_1226_);
v___x_1228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1225_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_1230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set(v___x_1230_, 1, v___x_1229_);
v___x_1231_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg(v_ref_1218_, v___x_1230_, v_constName_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_ref_1232_, lean_object* v_constName_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg(v_ref_1232_, v_constName_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v_ref_1232_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg(lean_object* v_constName_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v_ref_1246_; lean_object* v___x_1247_; 
v_ref_1246_ = lean_ctor_get(v___y_1243_, 2);
v___x_1247_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg(v_ref_1246_, v_constName_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg___boxed(lean_object* v_constName_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg(v_constName_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5(lean_object* v_constName_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v___x_1261_; lean_object* v_env_1262_; uint8_t v___x_1263_; lean_object* v___x_1264_; 
v___x_1261_ = lean_st_ref_get(v___y_1259_);
v_env_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc_ref(v_env_1262_);
lean_dec(v___x_1261_);
v___x_1263_ = 0;
lean_inc(v_constName_1255_);
v___x_1264_ = l_Lean_Environment_find_x3f(v_env_1262_, v_constName_1255_, v___x_1263_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg(v_constName_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
return v___x_1265_;
}
else
{
lean_object* v_val_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec(v_constName_1255_);
v_val_1266_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1264_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_val_1266_);
lean_dec(v___x_1264_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 0);
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_val_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5___boxed(lean_object* v_constName_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5(v_constName_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
return v_res_1280_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___lam__0(lean_object* v_a_1281_, lean_object* v_x_1282_){
_start:
{
uint8_t v___x_1283_; 
v___x_1283_ = lean_expr_eqv(v_x_1282_, v_a_1281_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___lam__0___boxed(lean_object* v_a_1284_, lean_object* v_x_1285_){
_start:
{
uint8_t v_res_1286_; lean_object* v_r_1287_; 
v_res_1286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___lam__0(v_a_1284_, v_x_1285_);
lean_dec_ref(v_x_1285_);
lean_dec_ref(v_a_1284_);
v_r_1287_ = lean_box(v_res_1286_);
return v_r_1287_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__0));
v___x_1290_ = l_Lean_stringToMessageData(v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__2));
v___x_1293_ = l_Lean_stringToMessageData(v___x_1292_);
return v___x_1293_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__5(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__4));
v___x_1296_ = l_Lean_stringToMessageData(v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4(lean_object* v_a_1297_, lean_object* v_declName_1298_, lean_object* v_as_1299_, size_t v_sz_1300_, size_t v_i_1301_, lean_object* v_b_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_a_1309_; uint8_t v___x_1313_; 
v___x_1313_ = lean_usize_dec_lt(v_i_1301_, v_sz_1300_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; 
lean_dec(v_declName_1298_);
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_b_1302_);
return v___x_1314_;
}
else
{
lean_object* v___x_1315_; lean_object* v_a_1316_; lean_object* v___f_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1315_ = lean_box(0);
v_a_1316_ = lean_array_uget_borrowed(v_as_1299_, v_i_1301_);
lean_inc(v_a_1316_);
v___f_1317_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1317_, 0, v_a_1316_);
v___x_1318_ = l_Lean_Expr_mvarId_x21(v_a_1316_);
v___x_1319_ = l_Lean_MVarId_getDecl(v___x_1318_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v_userName_1321_; lean_object* v_type_1322_; lean_object* v___x_1323_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1319_, 1);
v_userName_1321_ = lean_ctor_get(v_a_1320_, 0);
lean_inc(v_userName_1321_);
v_type_1322_ = lean_ctor_get(v_a_1320_, 2);
lean_inc_ref(v_type_1322_);
lean_dec(v_a_1320_);
v___x_1323_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_1322_, v___y_1304_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1325_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1325_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_1324_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; uint8_t v___x_1327_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = lean_unbox(v_a_1326_);
lean_dec(v_a_1326_);
if (v___x_1327_ == 0)
{
lean_dec(v_userName_1321_);
lean_dec_ref(v___f_1317_);
v_a_1309_ = v___x_1315_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1328_; 
v___x_1328_ = lean_find_expr(v___f_1317_, v_a_1297_);
lean_dec_ref(v___f_1317_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_dec(v_userName_1321_);
v_a_1309_ = v___x_1315_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
lean_dec_ref_known(v___x_1328_, 1);
v___x_1329_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1);
v___x_1330_ = 0;
lean_inc(v_declName_1298_);
v___x_1331_ = l_Lean_MessageData_ofConstName(v_declName_1298_, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1329_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__3);
v___x_1334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = l_Lean_MessageData_ofName(v_userName_1321_);
v___x_1336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__5);
v___x_1338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1336_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
v___x_1339_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1338_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_dec_ref_known(v___x_1339_, 1);
v_a_1309_ = v___x_1315_;
goto v___jp_1308_;
}
else
{
lean_dec(v_declName_1298_);
return v___x_1339_;
}
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_userName_1321_);
lean_dec_ref(v___f_1317_);
lean_dec(v_declName_1298_);
v_a_1340_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1325_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1325_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_userName_1321_);
lean_dec_ref(v___f_1317_);
lean_dec(v_declName_1298_);
v_a_1348_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1323_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1323_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v___f_1317_);
lean_dec(v_declName_1298_);
v_a_1356_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1319_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1319_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
v___jp_1308_:
{
size_t v___x_1310_; size_t v___x_1311_; 
v___x_1310_ = ((size_t)1ULL);
v___x_1311_ = lean_usize_add(v_i_1301_, v___x_1310_);
v_i_1301_ = v___x_1311_;
v_b_1302_ = v_a_1309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___boxed(lean_object* v_a_1364_, lean_object* v_declName_1365_, lean_object* v_as_1366_, lean_object* v_sz_1367_, lean_object* v_i_1368_, lean_object* v_b_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
size_t v_sz_boxed_1375_; size_t v_i_boxed_1376_; lean_object* v_res_1377_; 
v_sz_boxed_1375_ = lean_unbox_usize(v_sz_1367_);
lean_dec(v_sz_1367_);
v_i_boxed_1376_ = lean_unbox_usize(v_i_1368_);
lean_dec(v_i_1368_);
v_res_1377_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_a_1364_, v_declName_1365_, v_as_1366_, v_sz_boxed_1375_, v_i_boxed_1376_, v_b_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec_ref(v_as_1366_);
lean_dec_ref(v_a_1364_);
return v_res_1377_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0));
v___x_1380_ = l_Lean_stringToMessageData(v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2));
v___x_1383_ = l_Lean_stringToMessageData(v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(lean_object* v_declName_1384_, lean_object* v_as_1385_, size_t v_sz_1386_, size_t v_i_1387_, lean_object* v_b_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_a_1395_; uint8_t v___x_1399_; 
v___x_1399_ = lean_usize_dec_lt(v_i_1387_, v_sz_1386_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
lean_dec(v_declName_1384_);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v_b_1388_);
return v___x_1400_;
}
else
{
lean_object* v_array_1401_; lean_object* v_start_1402_; lean_object* v_stop_1403_; uint8_t v___x_1404_; 
v_array_1401_ = lean_ctor_get(v_b_1388_, 0);
v_start_1402_ = lean_ctor_get(v_b_1388_, 1);
v_stop_1403_ = lean_ctor_get(v_b_1388_, 2);
v___x_1404_ = lean_nat_dec_lt(v_start_1402_, v_stop_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; 
lean_dec(v_declName_1384_);
v___x_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1405_, 0, v_b_1388_);
return v___x_1405_;
}
else
{
lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1474_; 
lean_inc(v_stop_1403_);
lean_inc(v_start_1402_);
lean_inc_ref(v_array_1401_);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_b_1388_);
if (v_isSharedCheck_1474_ == 0)
{
lean_object* v_unused_1475_; lean_object* v_unused_1476_; lean_object* v_unused_1477_; 
v_unused_1475_ = lean_ctor_get(v_b_1388_, 2);
lean_dec(v_unused_1475_);
v_unused_1476_ = lean_ctor_get(v_b_1388_, 1);
lean_dec(v_unused_1476_);
v_unused_1477_ = lean_ctor_get(v_b_1388_, 0);
lean_dec(v_unused_1477_);
v___x_1407_ = v_b_1388_;
v_isShared_1408_ = v_isSharedCheck_1474_;
goto v_resetjp_1406_;
}
else
{
lean_dec(v_b_1388_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1474_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1409_ = lean_array_fget(v_array_1401_, v_start_1402_);
v___x_1410_ = lean_unsigned_to_nat(1u);
v___x_1411_ = lean_nat_add(v_start_1402_, v___x_1410_);
lean_dec(v_start_1402_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 1, v___x_1411_);
v___x_1413_ = v___x_1407_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_array_1401_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_stop_1403_);
v___x_1413_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
uint8_t v___x_1414_; uint8_t v___x_1415_; 
v___x_1414_ = lean_unbox(v___x_1409_);
lean_dec(v___x_1409_);
v___x_1415_ = l_Lean_BinderInfo_isExplicit(v___x_1414_);
if (v___x_1415_ == 0)
{
v_a_1395_ = v___x_1413_;
goto v___jp_1394_;
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_a_1416_ = lean_array_uget_borrowed(v_as_1385_, v_i_1387_);
v___x_1417_ = l_Lean_Expr_mvarId_x21(v_a_1416_);
v___x_1418_ = l_Lean_MVarId_getDecl(v___x_1417_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v_userName_1420_; lean_object* v_type_1421_; lean_object* v___x_1422_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v_userName_1420_ = lean_ctor_get(v_a_1419_, 0);
lean_inc(v_userName_1420_);
v_type_1421_ = lean_ctor_get(v_a_1419_, 2);
lean_inc_ref(v_type_1421_);
lean_dec(v_a_1419_);
v___x_1422_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_1421_, v___y_1390_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc_n(v_a_1423_, 2);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_1423_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; uint8_t v___x_1426_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
v___x_1426_ = l_Lean_Expr_isEq(v_a_1423_);
if (v___x_1426_ == 0)
{
uint8_t v___x_1427_; 
v___x_1427_ = lean_unbox(v_a_1425_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; uint8_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1428_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1);
v___x_1429_ = lean_unbox(v_a_1425_);
lean_dec(v_a_1425_);
lean_inc(v_declName_1384_);
v___x_1430_ = l_Lean_MessageData_ofConstName(v_declName_1384_, v___x_1429_);
v___x_1431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1428_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = l_Lean_MessageData_ofName(v_userName_1420_);
v___x_1435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
v___x_1436_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3);
v___x_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = l_Lean_indentExpr(v_a_1423_);
v___x_1439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
v___x_1440_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1439_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_dec_ref_known(v___x_1440_, 1);
v_a_1395_ = v___x_1413_;
goto v___jp_1394_;
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec_ref(v___x_1413_);
lean_dec(v_declName_1384_);
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1440_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1440_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
else
{
lean_dec(v_a_1425_);
lean_dec(v_a_1423_);
lean_dec(v_userName_1420_);
v_a_1395_ = v___x_1413_;
goto v___jp_1394_;
}
}
else
{
lean_dec(v_a_1425_);
lean_dec(v_a_1423_);
lean_dec(v_userName_1420_);
v_a_1395_ = v___x_1413_;
goto v___jp_1394_;
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
lean_dec(v_a_1423_);
lean_dec(v_userName_1420_);
lean_dec_ref(v___x_1413_);
lean_dec(v_declName_1384_);
v_a_1449_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1424_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1424_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec(v_userName_1420_);
lean_dec_ref(v___x_1413_);
lean_dec(v_declName_1384_);
v_a_1457_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1422_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1422_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec_ref(v___x_1413_);
lean_dec(v_declName_1384_);
v_a_1465_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1418_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1418_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
}
}
}
v___jp_1394_:
{
size_t v___x_1396_; size_t v___x_1397_; 
v___x_1396_ = ((size_t)1ULL);
v___x_1397_ = lean_usize_add(v_i_1387_, v___x_1396_);
v_i_1387_ = v___x_1397_;
v_b_1388_ = v_a_1395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___boxed(lean_object* v_declName_1478_, lean_object* v_as_1479_, lean_object* v_sz_1480_, lean_object* v_i_1481_, lean_object* v_b_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
size_t v_sz_boxed_1488_; size_t v_i_boxed_1489_; lean_object* v_res_1490_; 
v_sz_boxed_1488_ = lean_unbox_usize(v_sz_1480_);
lean_dec(v_sz_1480_);
v_i_boxed_1489_ = lean_unbox_usize(v_i_1481_);
lean_dec(v_i_1481_);
v_res_1490_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1478_, v_as_1479_, v_sz_boxed_1488_, v_i_boxed_1489_, v_b_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec_ref(v_as_1479_);
return v_res_1490_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_addTransportDecl___closed__1(void){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = ((lean_object*)(l_Lean_Meta_Transport_addTransportDecl___closed__0));
v___x_1493_ = l_Lean_stringToMessageData(v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object* v_declName_1494_, uint8_t v_kind_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___y_1504_; lean_object* v___y_1505_; lean_object* v___y_1506_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1566_; lean_object* v___x_1603_; 
lean_inc(v_declName_1494_);
v___x_1603_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5(v_declName_1494_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1605_; uint8_t v_transparency_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; uint8_t v___x_1609_; uint8_t v___x_1610_; uint8_t v___x_1611_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1603_, 1);
v___x_1605_ = l_Lean_Meta_Context_config(v_a_1496_);
v_transparency_1606_ = lean_ctor_get_uint8(v___x_1605_, 9);
lean_dec_ref(v___x_1605_);
v___x_1607_ = l_Lean_ConstantInfo_type(v_a_1604_);
lean_dec(v_a_1604_);
v___x_1608_ = lean_box(0);
v___x_1609_ = 0;
v___x_1610_ = 2;
v___x_1611_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1606_, v___x_1610_);
if (v___x_1611_ == 0)
{
lean_object* v_keyedConfig_1612_; uint8_t v_trackZetaDelta_1613_; lean_object* v_zetaDeltaSet_1614_; lean_object* v_lctx_1615_; lean_object* v_localInstances_1616_; lean_object* v_defEqCtx_x3f_1617_; lean_object* v_synthPendingDepth_1618_; lean_object* v_customCanUnfoldPredicate_x3f_1619_; uint8_t v_univApprox_1620_; uint8_t v_inTypeClassResolution_1621_; uint8_t v_cacheInferType_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v_keyedConfig_1612_ = lean_ctor_get(v_a_1496_, 0);
v_trackZetaDelta_1613_ = lean_ctor_get_uint8(v_a_1496_, sizeof(void*)*7);
v_zetaDeltaSet_1614_ = lean_ctor_get(v_a_1496_, 1);
v_lctx_1615_ = lean_ctor_get(v_a_1496_, 2);
v_localInstances_1616_ = lean_ctor_get(v_a_1496_, 3);
v_defEqCtx_x3f_1617_ = lean_ctor_get(v_a_1496_, 4);
v_synthPendingDepth_1618_ = lean_ctor_get(v_a_1496_, 5);
v_customCanUnfoldPredicate_x3f_1619_ = lean_ctor_get(v_a_1496_, 6);
v_univApprox_1620_ = lean_ctor_get_uint8(v_a_1496_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1621_ = lean_ctor_get_uint8(v_a_1496_, sizeof(void*)*7 + 2);
v_cacheInferType_1622_ = lean_ctor_get_uint8(v_a_1496_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1612_);
v___x_1623_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1610_, v_keyedConfig_1612_);
lean_inc(v_customCanUnfoldPredicate_x3f_1619_);
lean_inc(v_synthPendingDepth_1618_);
lean_inc(v_defEqCtx_x3f_1617_);
lean_inc_ref(v_localInstances_1616_);
lean_inc_ref(v_lctx_1615_);
lean_inc(v_zetaDeltaSet_1614_);
v___x_1624_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
lean_ctor_set(v___x_1624_, 1, v_zetaDeltaSet_1614_);
lean_ctor_set(v___x_1624_, 2, v_lctx_1615_);
lean_ctor_set(v___x_1624_, 3, v_localInstances_1616_);
lean_ctor_set(v___x_1624_, 4, v_defEqCtx_x3f_1617_);
lean_ctor_set(v___x_1624_, 5, v_synthPendingDepth_1618_);
lean_ctor_set(v___x_1624_, 6, v_customCanUnfoldPredicate_x3f_1619_);
lean_ctor_set_uint8(v___x_1624_, sizeof(void*)*7, v_trackZetaDelta_1613_);
lean_ctor_set_uint8(v___x_1624_, sizeof(void*)*7 + 1, v_univApprox_1620_);
lean_ctor_set_uint8(v___x_1624_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1621_);
lean_ctor_set_uint8(v___x_1624_, sizeof(void*)*7 + 3, v_cacheInferType_1622_);
v___x_1625_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1607_, v___x_1608_, v___x_1609_, v___x_1624_, v_a_1497_, v_a_1498_, v_a_1499_);
lean_dec_ref_known(v___x_1624_, 7);
v___y_1566_ = v___x_1625_;
goto v___jp_1565_;
}
else
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1607_, v___x_1608_, v___x_1609_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
v___y_1566_ = v___x_1626_;
goto v___jp_1565_;
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec(v_declName_1494_);
v_a_1627_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1603_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1603_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
v___jp_1501_:
{
if (lean_obj_tag(v___y_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v_a_1507_ = lean_ctor_get(v___y_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v___y_1506_, 1);
v___x_1508_ = l_Lean_Meta_Transport_transportExt;
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v_declName_1494_);
lean_ctor_set(v___x_1509_, 1, v_a_1507_);
v___x_1510_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v___x_1508_, v___x_1509_, v_kind_1495_, v___y_1503_, v___y_1505_, v___y_1504_);
return v___x_1510_;
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
lean_dec(v_declName_1494_);
v_a_1511_ = lean_ctor_get(v___y_1506_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___y_1506_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1513_ = v___y_1506_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___y_1506_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1511_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
v___jp_1519_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; size_t v_sz_1530_; size_t v___x_1531_; lean_object* v___x_1532_; 
v___x_1527_ = lean_unsigned_to_nat(0u);
v___x_1528_ = lean_array_get_size(v___y_1522_);
v___x_1529_ = l_Array_toSubarray___redArg(v___y_1522_, v___x_1527_, v___x_1528_);
v_sz_1530_ = lean_array_size(v___y_1520_);
v___x_1531_ = ((size_t)0ULL);
lean_inc(v_declName_1494_);
v___x_1532_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1494_, v___y_1520_, v_sz_1530_, v___x_1531_, v___x_1529_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v___x_1533_; lean_object* v_a_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
lean_dec_ref_known(v___x_1532_, 1);
v___x_1533_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v___y_1521_, v___y_1524_);
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref(v___x_1533_);
v___x_1535_ = lean_box(0);
lean_inc(v_declName_1494_);
v___x_1536_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_a_1534_, v_declName_1494_, v___y_1520_, v_sz_1530_, v___x_1531_, v___x_1535_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec_ref(v___y_1520_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v___x_1537_; uint8_t v_transparency_1538_; uint8_t v___x_1539_; uint8_t v___x_1540_; uint8_t v___x_1541_; 
lean_dec_ref_known(v___x_1536_, 1);
v___x_1537_ = l_Lean_Meta_Context_config(v___y_1523_);
v_transparency_1538_ = lean_ctor_get_uint8(v___x_1537_, 9);
lean_dec_ref(v___x_1537_);
v___x_1539_ = 0;
v___x_1540_ = 2;
v___x_1541_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1538_, v___x_1540_);
if (v___x_1541_ == 0)
{
lean_object* v_keyedConfig_1542_; uint8_t v_trackZetaDelta_1543_; lean_object* v_zetaDeltaSet_1544_; lean_object* v_lctx_1545_; lean_object* v_localInstances_1546_; lean_object* v_defEqCtx_x3f_1547_; lean_object* v_synthPendingDepth_1548_; lean_object* v_customCanUnfoldPredicate_x3f_1549_; uint8_t v_univApprox_1550_; uint8_t v_inTypeClassResolution_1551_; uint8_t v_cacheInferType_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v_keyedConfig_1542_ = lean_ctor_get(v___y_1523_, 0);
v_trackZetaDelta_1543_ = lean_ctor_get_uint8(v___y_1523_, sizeof(void*)*7);
v_zetaDeltaSet_1544_ = lean_ctor_get(v___y_1523_, 1);
v_lctx_1545_ = lean_ctor_get(v___y_1523_, 2);
v_localInstances_1546_ = lean_ctor_get(v___y_1523_, 3);
v_defEqCtx_x3f_1547_ = lean_ctor_get(v___y_1523_, 4);
v_synthPendingDepth_1548_ = lean_ctor_get(v___y_1523_, 5);
v_customCanUnfoldPredicate_x3f_1549_ = lean_ctor_get(v___y_1523_, 6);
v_univApprox_1550_ = lean_ctor_get_uint8(v___y_1523_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1551_ = lean_ctor_get_uint8(v___y_1523_, sizeof(void*)*7 + 2);
v_cacheInferType_1552_ = lean_ctor_get_uint8(v___y_1523_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1542_);
v___x_1553_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1540_, v_keyedConfig_1542_);
lean_inc(v_customCanUnfoldPredicate_x3f_1549_);
lean_inc(v_synthPendingDepth_1548_);
lean_inc(v_defEqCtx_x3f_1547_);
lean_inc_ref(v_localInstances_1546_);
lean_inc_ref(v_lctx_1545_);
lean_inc(v_zetaDeltaSet_1544_);
v___x_1554_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
lean_ctor_set(v___x_1554_, 1, v_zetaDeltaSet_1544_);
lean_ctor_set(v___x_1554_, 2, v_lctx_1545_);
lean_ctor_set(v___x_1554_, 3, v_localInstances_1546_);
lean_ctor_set(v___x_1554_, 4, v_defEqCtx_x3f_1547_);
lean_ctor_set(v___x_1554_, 5, v_synthPendingDepth_1548_);
lean_ctor_set(v___x_1554_, 6, v_customCanUnfoldPredicate_x3f_1549_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*7, v_trackZetaDelta_1543_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*7 + 1, v_univApprox_1550_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1551_);
lean_ctor_set_uint8(v___x_1554_, sizeof(void*)*7 + 3, v_cacheInferType_1552_);
v___x_1555_ = l_Lean_Meta_DiscrTree_mkPath(v_a_1534_, v___x_1539_, v___x_1554_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec_ref_known(v___x_1554_, 7);
v___y_1502_ = v___y_1523_;
v___y_1503_ = v___y_1524_;
v___y_1504_ = v___y_1526_;
v___y_1505_ = v___y_1525_;
v___y_1506_ = v___x_1555_;
goto v___jp_1501_;
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_Meta_DiscrTree_mkPath(v_a_1534_, v___x_1539_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
v___y_1502_ = v___y_1523_;
v___y_1503_ = v___y_1524_;
v___y_1504_ = v___y_1526_;
v___y_1505_ = v___y_1525_;
v___y_1506_ = v___x_1556_;
goto v___jp_1501_;
}
}
else
{
lean_dec(v_a_1534_);
lean_dec(v_declName_1494_);
return v___x_1536_;
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v_declName_1494_);
v_a_1557_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1532_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1532_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
v___jp_1565_:
{
if (lean_obj_tag(v___y_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v_snd_1568_; lean_object* v_fst_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1594_; 
v_a_1567_ = lean_ctor_get(v___y_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___y_1566_, 1);
v_snd_1568_ = lean_ctor_get(v_a_1567_, 1);
v_fst_1569_ = lean_ctor_get(v_a_1567_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v_a_1567_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1571_ = v_a_1567_;
v_isShared_1572_ = v_isSharedCheck_1594_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_snd_1568_);
lean_inc(v_fst_1569_);
lean_dec(v_a_1567_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1594_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v_fst_1573_; lean_object* v_snd_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1593_; 
v_fst_1573_ = lean_ctor_get(v_snd_1568_, 0);
v_snd_1574_ = lean_ctor_get(v_snd_1568_, 1);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_snd_1568_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1576_ = v_snd_1568_;
v_isShared_1577_ = v_isSharedCheck_1593_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_snd_1574_);
lean_inc(v_fst_1573_);
lean_dec(v_snd_1568_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1593_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1578_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_1579_ = lean_unsigned_to_nat(2u);
v___x_1580_ = l_Lean_Expr_isAppOfArity(v_snd_1574_, v___x_1578_, v___x_1579_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; 
lean_dec(v_fst_1573_);
lean_dec(v_fst_1569_);
v___x_1581_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__4___closed__1);
v___x_1582_ = l_Lean_MessageData_ofConstName(v_declName_1494_, v___x_1580_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 7);
lean_ctor_set(v___x_1576_, 1, v___x_1582_);
lean_ctor_set(v___x_1576_, 0, v___x_1581_);
v___x_1584_ = v___x_1576_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v___x_1582_);
v___x_1584_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1585_ = lean_obj_once(&l_Lean_Meta_Transport_addTransportDecl___closed__1, &l_Lean_Meta_Transport_addTransportDecl___closed__1_once, _init_l_Lean_Meta_Transport_addTransportDecl___closed__1);
if (v_isShared_1572_ == 0)
{
lean_ctor_set_tag(v___x_1571_, 7);
lean_ctor_set(v___x_1571_, 1, v___x_1585_);
lean_ctor_set(v___x_1571_, 0, v___x_1584_);
v___x_1587_ = v___x_1571_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = l_Lean_indentExpr(v_snd_1574_);
v___x_1589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1589_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
return v___x_1590_;
}
}
}
else
{
lean_del_object(v___x_1576_);
lean_del_object(v___x_1571_);
v___y_1520_ = v_fst_1569_;
v___y_1521_ = v_snd_1574_;
v___y_1522_ = v_fst_1573_;
v___y_1523_ = v_a_1496_;
v___y_1524_ = v_a_1497_;
v___y_1525_ = v_a_1498_;
v___y_1526_ = v_a_1499_;
goto v___jp_1519_;
}
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
lean_dec(v_declName_1494_);
v_a_1595_ = lean_ctor_get(v___y_1566_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___y_1566_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___y_1566_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___y_1566_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl___boxed(lean_object* v_declName_1635_, lean_object* v_kind_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_){
_start:
{
uint8_t v_kind_boxed_1642_; lean_object* v_res_1643_; 
v_kind_boxed_1642_ = lean_unbox(v_kind_1636_);
v_res_1643_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1635_, v_kind_boxed_1642_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_);
lean_dec(v_a_1640_);
lean_dec_ref(v_a_1639_);
lean_dec(v_a_1638_);
lean_dec_ref(v_a_1637_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(lean_object* v_00_u03b1_1644_, lean_object* v_msg_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___boxed(lean_object* v_00_u03b1_1652_, lean_object* v_msg_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(v_00_u03b1_1652_, v_msg_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6(lean_object* v_00_u03b1_1660_, lean_object* v_constName_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___redArg(v_constName_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1668_, lean_object* v_constName_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6(v_00_u03b1_1668_, v_constName_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7(lean_object* v_00_u03b1_1676_, lean_object* v_ref_1677_, lean_object* v_constName_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg(v_ref_1677_, v_constName_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b1_1685_, lean_object* v_ref_1686_, lean_object* v_constName_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7(v_00_u03b1_1685_, v_ref_1686_, v_constName_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_ref_1686_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8(lean_object* v_00_u03b1_1694_, lean_object* v_ref_1695_, lean_object* v_msg_1696_, lean_object* v_declHint_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___redArg(v_ref_1695_, v_msg_1696_, v_declHint_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_00_u03b1_1704_, lean_object* v_ref_1705_, lean_object* v_msg_1706_, lean_object* v_declHint_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8(v_00_u03b1_1704_, v_ref_1705_, v_msg_1706_, v_declHint_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v_ref_1705_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10(lean_object* v_msg_1714_, lean_object* v_declHint_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v___x_1721_; 
v___x_1721_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg(v_msg_1714_, v_declHint_1715_, v___y_1719_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_1722_, lean_object* v_declHint_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10(v_msg_1722_, v_declHint_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10(lean_object* v_00_u03b1_1730_, lean_object* v_ref_1731_, lean_object* v_msg_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(v_ref_1731_, v_msg_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1739_, lean_object* v_ref_1740_, lean_object* v_msg_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__10(v_00_u03b1_1739_, v_ref_1740_, v_msg_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v_ref_1740_);
return v_res_1747_;
}
}
static uint64_t _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1754_; uint64_t v___x_1755_; 
v___x_1754_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1755_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1754_);
return v___x_1755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1756_ = lean_uint64_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1757_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1758_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
lean_ctor_set_uint64(v___x_1758_, sizeof(void*)*1, v___x_1756_);
return v___x_1758_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1759_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
return v___x_1760_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1762_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1761_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
lean_ctor_set(v___x_1762_, 2, v___x_1761_);
lean_ctor_set(v___x_1762_, 3, v___x_1761_);
lean_ctor_set(v___x_1762_, 4, v___x_1761_);
lean_ctor_set(v___x_1762_, 5, v___x_1761_);
return v___x_1762_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1763_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
lean_ctor_set(v___x_1764_, 2, v___x_1763_);
lean_ctor_set(v___x_1764_, 3, v___x_1763_);
lean_ctor_set(v___x_1764_, 4, v___x_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1765_, lean_object* v___x_1766_, lean_object* v_declName_1767_, lean_object* v_x_1768_, uint8_t v_kind_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
uint8_t v___x_1773_; uint8_t v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; size_t v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1773_ = 0;
v___x_1774_ = 1;
v___x_1775_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1776_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1777_ = lean_unsigned_to_nat(32u);
v___x_1778_ = lean_mk_empty_array_with_capacity(v___x_1777_);
v___x_1779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_1780_ = ((size_t)5ULL);
lean_inc_n(v___x_1765_, 6);
v___x_1781_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1781_, 0, v___x_1779_);
lean_ctor_set(v___x_1781_, 1, v___x_1778_);
lean_ctor_set(v___x_1781_, 2, v___x_1765_);
lean_ctor_set(v___x_1781_, 3, v___x_1765_);
lean_ctor_set_usize(v___x_1781_, 4, v___x_1780_);
v___x_1782_ = lean_box(1);
lean_inc_ref(v___x_1781_);
v___x_1783_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1776_);
lean_ctor_set(v___x_1783_, 1, v___x_1781_);
lean_ctor_set(v___x_1783_, 2, v___x_1782_);
v___x_1784_ = lean_mk_empty_array_with_capacity(v___x_1765_);
v___x_1785_ = lean_box(0);
lean_inc(v___x_1766_);
v___x_1786_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1786_, 0, v___x_1775_);
lean_ctor_set(v___x_1786_, 1, v___x_1766_);
lean_ctor_set(v___x_1786_, 2, v___x_1783_);
lean_ctor_set(v___x_1786_, 3, v___x_1784_);
lean_ctor_set(v___x_1786_, 4, v___x_1785_);
lean_ctor_set(v___x_1786_, 5, v___x_1765_);
lean_ctor_set(v___x_1786_, 6, v___x_1785_);
lean_ctor_set_uint8(v___x_1786_, sizeof(void*)*7, v___x_1773_);
lean_ctor_set_uint8(v___x_1786_, sizeof(void*)*7 + 1, v___x_1773_);
lean_ctor_set_uint8(v___x_1786_, sizeof(void*)*7 + 2, v___x_1773_);
lean_ctor_set_uint8(v___x_1786_, sizeof(void*)*7 + 3, v___x_1774_);
v___x_1787_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1765_);
lean_ctor_set(v___x_1787_, 1, v___x_1765_);
lean_ctor_set(v___x_1787_, 2, v___x_1765_);
lean_ctor_set(v___x_1787_, 3, v___x_1765_);
lean_ctor_set(v___x_1787_, 4, v___x_1776_);
lean_ctor_set(v___x_1787_, 5, v___x_1776_);
lean_ctor_set(v___x_1787_, 6, v___x_1776_);
lean_ctor_set(v___x_1787_, 7, v___x_1776_);
lean_ctor_set(v___x_1787_, 8, v___x_1776_);
lean_ctor_set(v___x_1787_, 9, v___x_1776_);
lean_ctor_set(v___x_1787_, 10, v___x_1776_);
v___x_1788_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1789_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1790_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1787_);
lean_ctor_set(v___x_1790_, 1, v___x_1788_);
lean_ctor_set(v___x_1790_, 2, v___x_1766_);
lean_ctor_set(v___x_1790_, 3, v___x_1781_);
lean_ctor_set(v___x_1790_, 4, v___x_1789_);
v___x_1791_ = lean_st_mk_ref(v___x_1790_);
v___x_1792_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1767_, v_kind_1769_, v___x_1786_, v___x_1791_, v___y_1770_, v___y_1771_);
lean_dec_ref_known(v___x_1786_, 7);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1801_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1797_ = lean_st_ref_get(v___x_1791_);
lean_dec(v___x_1791_);
lean_dec(v___x_1797_);
if (v_isShared_1796_ == 0)
{
v___x_1799_ = v___x_1795_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1793_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
else
{
lean_dec(v___x_1791_);
return v___x_1792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1802_, lean_object* v___x_1803_, lean_object* v_declName_1804_, lean_object* v_x_1805_, lean_object* v_kind_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
uint8_t v_kind_boxed_1810_; lean_object* v_res_1811_; 
v_kind_boxed_1810_ = lean_unbox(v_kind_1806_);
v_res_1811_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1802_, v___x_1803_, v_declName_1804_, v_x_1805_, v_kind_boxed_1810_, v___y_1807_, v___y_1808_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v_x_1805_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v_toCold_1817_; lean_object* v_env_1818_; lean_object* v_options_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1816_ = lean_st_ref_get(v___y_1814_);
v_toCold_1817_ = lean_ctor_get(v___y_1813_, 0);
v_env_1818_ = lean_ctor_get(v___x_1816_, 0);
lean_inc_ref(v_env_1818_);
lean_dec(v___x_1816_);
v_options_1819_ = lean_ctor_get(v_toCold_1817_, 2);
v___x_1820_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_1821_ = lean_unsigned_to_nat(32u);
v___x_1822_ = lean_mk_empty_array_with_capacity(v___x_1821_);
lean_dec_ref(v___x_1822_);
v___x_1823_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7_spec__8_spec__9_spec__10___redArg___closed__4);
lean_inc_ref(v_options_1819_);
v___x_1824_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1824_, 0, v_env_1818_);
lean_ctor_set(v___x_1824_, 1, v___x_1820_);
lean_ctor_set(v___x_1824_, 2, v___x_1823_);
lean_ctor_set(v___x_1824_, 3, v_options_1819_);
v___x_1825_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
lean_ctor_set(v___x_1825_, 1, v_msgData_1812_);
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v_ref_1836_; lean_object* v___x_1837_; lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1846_; 
v_ref_1836_ = lean_ctor_get(v___y_1833_, 2);
v___x_1837_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msg_1832_, v___y_1833_, v___y_1834_);
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1846_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1846_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1842_; lean_object* v___x_1844_; 
lean_inc(v_ref_1836_);
v___x_1842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1842_, 0, v_ref_1836_);
lean_ctor_set(v___x_1842_, 1, v_a_1838_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set_tag(v___x_1840_, 1);
lean_ctor_set(v___x_1840_, 0, v___x_1842_);
v___x_1844_ = v___x_1840_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1847_, v___y_1848_, v___y_1849_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
return v_res_1851_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1854_ = l_Lean_stringToMessageData(v___x_1853_);
return v___x_1854_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1857_ = l_Lean_stringToMessageData(v___x_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1858_, lean_object* v_decl_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1863_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1864_ = l_Lean_MessageData_ofName(v___x_1858_);
v___x_1865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1863_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1865_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v___x_1867_, v___y_1860_, v___y_1861_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1869_, lean_object* v_decl_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1869_, v_decl_1870_, v___y_1871_, v___y_1872_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v_decl_1870_);
return v_res_1874_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = lean_unsigned_to_nat(3239442948u);
v___x_1897_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1898_ = l_Lean_Name_num___override(v___x_1897_, v___x_1896_);
return v___x_1898_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1899_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1900_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1901_ = l_Lean_Name_str___override(v___x_1900_, v___x_1899_);
return v___x_1901_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1902_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1903_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1904_ = l_Lean_Name_str___override(v___x_1903_, v___x_1902_);
return v___x_1904_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1905_ = lean_unsigned_to_nat(2u);
v___x_1906_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1907_ = l_Lean_Name_num___override(v___x_1906_, v___x_1905_);
return v___x_1907_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1913_ = 0;
v___x_1914_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1915_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1916_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1917_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
lean_ctor_set(v___x_1917_, 1, v___x_1915_);
lean_ctor_set(v___x_1917_, 2, v___x_1914_);
lean_ctor_set_uint8(v___x_1917_, sizeof(void*)*3, v___x_1913_);
return v___x_1917_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1918_; lean_object* v___f_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___f_1918_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___f_1919_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1920_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1921_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1920_);
lean_ctor_set(v___x_1921_, 1, v___f_1919_);
lean_ctor_set(v___x_1921_, 2, v___f_1918_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1924_ = l_Lean_registerBuiltinAttribute(v___x_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_();
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1927_, lean_object* v_msg_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1928_, v___y_1929_, v___y_1930_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1933_, lean_object* v_msg_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(v_00_u03b1_1933_, v_msg_1934_, v___y_1935_, v___y_1936_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1943_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_));
v___x_1944_ = l_Lean_registerInternalExceptionId(v___x_1943_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2____boxed(lean_object* v_a_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_();
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_____r_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1947_, v___y_1951_, v___y_1953_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1967_; 
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1967_ == 0)
{
lean_object* v_unused_1968_; 
v_unused_1968_ = lean_ctor_get(v___x_1955_, 0);
lean_dec(v_unused_1968_);
v___x_1957_ = v___x_1955_;
v_isShared_1958_ = v_isSharedCheck_1967_;
goto v_resetjp_1956_;
}
else
{
lean_dec(v___x_1955_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1967_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1959_ = l_Lean_Exception_toMessageData(v_a_1948_);
v___x_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1959_);
v___x_1961_ = lean_box(0);
v___x_1962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
lean_ctor_set(v___x_1962_, 1, v___x_1960_);
v___x_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 0, v___x_1963_);
v___x_1965_ = v___x_1957_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v_a_1948_);
v_a_1969_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1955_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1955_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0___boxed(lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_____r_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(v_a_1977_, v_a_1978_, v_____r_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec_ref(v_a_1977_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(lean_object* v_k_1986_, lean_object* v_as_1987_, size_t v_sz_1988_, size_t v_i_1989_, lean_object* v_b_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
uint8_t v___x_1996_; 
v___x_1996_ = lean_usize_dec_lt(v_i_1989_, v_sz_1988_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; 
lean_dec_ref(v_k_1986_);
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v_b_1990_);
return v___x_1997_;
}
else
{
lean_object* v_snd_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2071_; 
v_snd_1998_ = lean_ctor_get(v_b_1990_, 1);
v_isSharedCheck_2071_ = !lean_is_exclusive(v_b_1990_);
if (v_isSharedCheck_2071_ == 0)
{
lean_object* v_unused_2072_; 
v_unused_2072_ = lean_ctor_get(v_b_1990_, 0);
lean_dec(v_unused_2072_);
v___x_2000_ = v_b_1990_;
v_isShared_2001_ = v_isSharedCheck_2071_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_snd_1998_);
lean_dec(v_b_1990_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2071_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v_a_2003_; lean_object* v___x_2009_; lean_object* v___y_2011_; lean_object* v_a_2035_; lean_object* v___x_2036_; 
v___x_2009_ = lean_box(0);
v_a_2035_ = lean_array_uget_borrowed(v_as_1987_, v_i_1989_);
v___x_2036_ = l_Lean_Meta_saveState___redArg(v___y_1992_, v___y_1994_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
lean_inc_ref(v_k_1986_);
lean_inc(v___y_1994_);
lean_inc_ref(v___y_1993_);
lean_inc(v___y_1992_);
lean_inc_ref(v___y_1991_);
lean_inc(v_a_2035_);
v___x_2038_ = lean_apply_6(v_k_1986_, v_a_2035_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, lean_box(0));
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; 
lean_dec(v_a_2037_);
lean_dec_ref(v_k_1986_);
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
v___x_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2040_, 0, v_a_2039_);
v_a_2003_ = v___x_2040_;
goto v___jp_2002_;
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2062_; 
v_a_2041_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2043_ = v___x_2038_;
v_isShared_2044_ = v_isSharedCheck_2062_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2038_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2062_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
uint8_t v___y_2046_; uint8_t v___x_2060_; 
v___x_2060_ = l_Lean_Exception_isInterrupt(v_a_2041_);
if (v___x_2060_ == 0)
{
uint8_t v___x_2061_; 
lean_inc(v_a_2041_);
v___x_2061_ = l_Lean_Exception_isRuntime(v_a_2041_);
v___y_2046_ = v___x_2061_;
goto v___jp_2045_;
}
else
{
v___y_2046_ = v___x_2060_;
goto v___jp_2045_;
}
v___jp_2045_:
{
if (v___y_2046_ == 0)
{
if (lean_obj_tag(v_a_2041_) == 1)
{
lean_object* v_id_2047_; lean_object* v___x_2048_; uint8_t v___x_2049_; 
v_id_2047_ = lean_ctor_get(v_a_2041_, 0);
v___x_2048_ = l_Lean_Meta_Transport_depthExceptionId;
v___x_2049_ = l_Lean_instBEqInternalExceptionId_beq(v_id_2047_, v___x_2048_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_del_object(v___x_2043_);
v___x_2050_ = lean_box(0);
v___x_2051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(v_a_2037_, v_a_2041_, v___x_2050_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
lean_dec(v_a_2037_);
v___y_2011_ = v___x_2051_;
goto v___jp_2010_;
}
else
{
lean_object* v___x_2053_; 
lean_dec(v_a_2037_);
lean_del_object(v___x_2000_);
lean_dec(v_snd_1998_);
lean_dec_ref(v_k_1986_);
if (v_isShared_2044_ == 0)
{
v___x_2053_ = v___x_2043_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2041_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
else
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_del_object(v___x_2043_);
v___x_2055_ = lean_box(0);
v___x_2056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(v_a_2037_, v_a_2041_, v___x_2055_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
lean_dec(v_a_2037_);
v___y_2011_ = v___x_2056_;
goto v___jp_2010_;
}
}
else
{
lean_object* v___x_2058_; 
lean_dec(v_a_2037_);
lean_del_object(v___x_2000_);
lean_dec(v_snd_1998_);
lean_dec_ref(v_k_1986_);
if (v_isShared_2044_ == 0)
{
v___x_2058_ = v___x_2043_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2041_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_del_object(v___x_2000_);
lean_dec(v_snd_1998_);
lean_dec_ref(v_k_1986_);
v_a_2063_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2036_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2036_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
v___jp_2002_:
{
lean_object* v___x_2004_; lean_object* v___x_2006_; 
v___x_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2004_, 0, v_a_2003_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2004_);
v___x_2006_ = v___x_2000_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_snd_1998_);
v___x_2006_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2007_; 
v___x_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2006_);
return v___x_2007_;
}
}
v___jp_2010_:
{
if (lean_obj_tag(v___y_2011_) == 0)
{
lean_object* v_a_2012_; 
v_a_2012_ = lean_ctor_get(v___y_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref_known(v___y_2011_, 1);
if (lean_obj_tag(v_a_2012_) == 0)
{
lean_object* v_a_2013_; 
lean_dec_ref(v_k_1986_);
v_a_2013_ = lean_ctor_get(v_a_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v_a_2012_, 1);
v_a_2003_ = v_a_2013_;
goto v___jp_2002_;
}
else
{
lean_object* v_a_2014_; lean_object* v_snd_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2025_; 
lean_del_object(v___x_2000_);
lean_dec(v_snd_1998_);
v_a_2014_ = lean_ctor_get(v_a_2012_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v_a_2012_, 1);
v_snd_2015_ = lean_ctor_get(v_a_2014_, 1);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_a_2014_);
if (v_isSharedCheck_2025_ == 0)
{
lean_object* v_unused_2026_; 
v_unused_2026_ = lean_ctor_get(v_a_2014_, 0);
lean_dec(v_unused_2026_);
v___x_2017_ = v_a_2014_;
v_isShared_2018_ = v_isSharedCheck_2025_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_snd_2015_);
lean_dec(v_a_2014_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2025_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v___x_2009_);
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v_snd_2015_);
v___x_2020_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
size_t v___x_2021_; size_t v___x_2022_; 
v___x_2021_ = ((size_t)1ULL);
v___x_2022_ = lean_usize_add(v_i_1989_, v___x_2021_);
v_i_1989_ = v___x_2022_;
v_b_1990_ = v___x_2020_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_del_object(v___x_2000_);
lean_dec(v_snd_1998_);
lean_dec_ref(v_k_1986_);
v_a_2027_ = lean_ctor_get(v___y_2011_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___y_2011_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___y_2011_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___y_2011_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___boxed(lean_object* v_k_2073_, lean_object* v_as_2074_, lean_object* v_sz_2075_, lean_object* v_i_2076_, lean_object* v_b_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
size_t v_sz_boxed_2083_; size_t v_i_boxed_2084_; lean_object* v_res_2085_; 
v_sz_boxed_2083_ = lean_unbox_usize(v_sz_2075_);
lean_dec(v_sz_2075_);
v_i_boxed_2084_ = lean_unbox_usize(v_i_2076_);
lean_dec(v_i_2076_);
v_res_2085_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_2073_, v_as_2074_, v_sz_boxed_2083_, v_i_boxed_2084_, v_b_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec_ref(v_as_2074_);
return v_res_2085_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1));
v___x_2090_ = l_Lean_stringToMessageData(v___x_2089_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(lean_object* v_candidates_2091_, lean_object* v_k_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_){
_start:
{
lean_object* v___x_2098_; size_t v_sz_2099_; size_t v___x_2100_; lean_object* v___x_2101_; 
v___x_2098_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0));
v_sz_2099_ = lean_array_size(v_candidates_2091_);
v___x_2100_ = ((size_t)0ULL);
v___x_2101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_2092_, v_candidates_2091_, v_sz_2099_, v___x_2100_, v___x_2098_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2124_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2124_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2124_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___y_2107_; lean_object* v_fst_2112_; 
v_fst_2112_ = lean_ctor_get(v_a_2102_, 0);
lean_inc(v_fst_2112_);
if (lean_obj_tag(v_fst_2112_) == 0)
{
lean_object* v_snd_2113_; 
v_snd_2113_ = lean_ctor_get(v_a_2102_, 1);
lean_inc(v_snd_2113_);
lean_dec(v_a_2102_);
if (lean_obj_tag(v_snd_2113_) == 0)
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2);
v___y_2107_ = v___x_2114_;
goto v___jp_2106_;
}
else
{
lean_object* v_val_2115_; 
v_val_2115_ = lean_ctor_get(v_snd_2113_, 0);
lean_inc(v_val_2115_);
lean_dec_ref_known(v_snd_2113_, 1);
v___y_2107_ = v_val_2115_;
goto v___jp_2106_;
}
}
else
{
lean_object* v_val_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
lean_del_object(v___x_2104_);
lean_dec(v_a_2102_);
v_val_2116_ = lean_ctor_get(v_fst_2112_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_fst_2112_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v_fst_2112_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_val_2116_);
lean_dec(v_fst_2112_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
lean_ctor_set_tag(v___x_2118_, 0);
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_val_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
v___jp_2106_:
{
lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___y_2107_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2108_);
v___x_2110_ = v___x_2104_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v___x_2108_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
v_a_2125_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2101_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2101_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2125_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___boxed(lean_object* v_candidates_2133_, lean_object* v_k_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_candidates_2133_, v_k_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_);
lean_dec(v_a_2138_);
lean_dec_ref(v_a_2137_);
lean_dec(v_a_2136_);
lean_dec_ref(v_a_2135_);
lean_dec_ref(v_candidates_2133_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(lean_object* v_x_2141_, lean_object* v_x_2142_, lean_object* v_x_2143_, lean_object* v_x_2144_){
_start:
{
lean_object* v_ks_2145_; lean_object* v_vs_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2170_; 
v_ks_2145_ = lean_ctor_get(v_x_2141_, 0);
v_vs_2146_ = lean_ctor_get(v_x_2141_, 1);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_x_2141_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2148_ = v_x_2141_;
v_isShared_2149_ = v_isSharedCheck_2170_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_vs_2146_);
lean_inc(v_ks_2145_);
lean_dec(v_x_2141_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2170_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2150_; uint8_t v___x_2151_; 
v___x_2150_ = lean_array_get_size(v_ks_2145_);
v___x_2151_ = lean_nat_dec_lt(v_x_2142_, v___x_2150_);
if (v___x_2151_ == 0)
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2155_; 
lean_dec(v_x_2142_);
v___x_2152_ = lean_array_push(v_ks_2145_, v_x_2143_);
v___x_2153_ = lean_array_push(v_vs_2146_, v_x_2144_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 1, v___x_2153_);
lean_ctor_set(v___x_2148_, 0, v___x_2152_);
v___x_2155_ = v___x_2148_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v___x_2153_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
else
{
lean_object* v_k_x27_2157_; uint8_t v___x_2158_; 
v_k_x27_2157_ = lean_array_fget_borrowed(v_ks_2145_, v_x_2142_);
v___x_2158_ = l_Lean_instBEqMVarId_beq(v_x_2143_, v_k_x27_2157_);
if (v___x_2158_ == 0)
{
lean_object* v___x_2160_; 
if (v_isShared_2149_ == 0)
{
v___x_2160_ = v___x_2148_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_ks_2145_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_vs_2146_);
v___x_2160_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = lean_unsigned_to_nat(1u);
v___x_2162_ = lean_nat_add(v_x_2142_, v___x_2161_);
lean_dec(v_x_2142_);
v_x_2141_ = v___x_2160_;
v_x_2142_ = v___x_2162_;
goto _start;
}
}
else
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2168_; 
v___x_2165_ = lean_array_fset(v_ks_2145_, v_x_2142_, v_x_2143_);
v___x_2166_ = lean_array_fset(v_vs_2146_, v_x_2142_, v_x_2144_);
lean_dec(v_x_2142_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 1, v___x_2166_);
lean_ctor_set(v___x_2148_, 0, v___x_2165_);
v___x_2168_ = v___x_2148_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2165_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(lean_object* v_n_2171_, lean_object* v_k_2172_, lean_object* v_v_2173_){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = lean_unsigned_to_nat(0u);
v___x_2175_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_n_2171_, v___x_2174_, v_k_2172_, v_v_2173_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(lean_object* v_x_2176_, size_t v_x_2177_, size_t v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
if (lean_obj_tag(v_x_2176_) == 0)
{
lean_object* v_es_2181_; size_t v___x_2182_; size_t v___x_2183_; lean_object* v_j_2184_; lean_object* v___x_2185_; uint8_t v___x_2186_; 
v_es_2181_ = lean_ctor_get(v_x_2176_, 0);
v___x_2182_ = ((size_t)31ULL);
v___x_2183_ = lean_usize_land(v_x_2177_, v___x_2182_);
v_j_2184_ = lean_usize_to_nat(v___x_2183_);
v___x_2185_ = lean_array_get_size(v_es_2181_);
v___x_2186_ = lean_nat_dec_lt(v_j_2184_, v___x_2185_);
if (v___x_2186_ == 0)
{
lean_dec(v_j_2184_);
lean_dec(v_x_2180_);
lean_dec(v_x_2179_);
return v_x_2176_;
}
else
{
lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2225_; 
lean_inc_ref(v_es_2181_);
v_isSharedCheck_2225_ = !lean_is_exclusive(v_x_2176_);
if (v_isSharedCheck_2225_ == 0)
{
lean_object* v_unused_2226_; 
v_unused_2226_ = lean_ctor_get(v_x_2176_, 0);
lean_dec(v_unused_2226_);
v___x_2188_ = v_x_2176_;
v_isShared_2189_ = v_isSharedCheck_2225_;
goto v_resetjp_2187_;
}
else
{
lean_dec(v_x_2176_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2225_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v_v_2190_; lean_object* v___x_2191_; lean_object* v_xs_x27_2192_; lean_object* v___y_2194_; 
v_v_2190_ = lean_array_fget(v_es_2181_, v_j_2184_);
v___x_2191_ = lean_box(0);
v_xs_x27_2192_ = lean_array_fset(v_es_2181_, v_j_2184_, v___x_2191_);
switch(lean_obj_tag(v_v_2190_))
{
case 0:
{
lean_object* v_key_2199_; lean_object* v_val_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2210_; 
v_key_2199_ = lean_ctor_get(v_v_2190_, 0);
v_val_2200_ = lean_ctor_get(v_v_2190_, 1);
v_isSharedCheck_2210_ = !lean_is_exclusive(v_v_2190_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2202_ = v_v_2190_;
v_isShared_2203_ = v_isSharedCheck_2210_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_val_2200_);
lean_inc(v_key_2199_);
lean_dec(v_v_2190_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2210_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
uint8_t v___x_2204_; 
v___x_2204_ = l_Lean_instBEqMVarId_beq(v_x_2179_, v_key_2199_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; lean_object* v___x_2206_; 
lean_del_object(v___x_2202_);
v___x_2205_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2199_, v_val_2200_, v_x_2179_, v_x_2180_);
v___x_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
v___y_2194_ = v___x_2206_;
goto v___jp_2193_;
}
else
{
lean_object* v___x_2208_; 
lean_dec(v_val_2200_);
lean_dec(v_key_2199_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 1, v_x_2180_);
lean_ctor_set(v___x_2202_, 0, v_x_2179_);
v___x_2208_ = v___x_2202_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_x_2179_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_x_2180_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
v___y_2194_ = v___x_2208_;
goto v___jp_2193_;
}
}
}
}
case 1:
{
lean_object* v_node_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2223_; 
v_node_2211_ = lean_ctor_get(v_v_2190_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_v_2190_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2213_ = v_v_2190_;
v_isShared_2214_ = v_isSharedCheck_2223_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_node_2211_);
lean_dec(v_v_2190_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2223_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
size_t v___x_2215_; size_t v___x_2216_; size_t v___x_2217_; size_t v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2215_ = ((size_t)5ULL);
v___x_2216_ = lean_usize_shift_right(v_x_2177_, v___x_2215_);
v___x_2217_ = ((size_t)1ULL);
v___x_2218_ = lean_usize_add(v_x_2178_, v___x_2217_);
v___x_2219_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_node_2211_, v___x_2216_, v___x_2218_, v_x_2179_, v_x_2180_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2219_);
v___x_2221_ = v___x_2213_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
v___y_2194_ = v___x_2221_;
goto v___jp_2193_;
}
}
}
default: 
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v_x_2179_);
lean_ctor_set(v___x_2224_, 1, v_x_2180_);
v___y_2194_ = v___x_2224_;
goto v___jp_2193_;
}
}
v___jp_2193_:
{
lean_object* v___x_2195_; lean_object* v___x_2197_; 
v___x_2195_ = lean_array_fset(v_xs_x27_2192_, v_j_2184_, v___y_2194_);
lean_dec(v_j_2184_);
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 0, v___x_2195_);
v___x_2197_ = v___x_2188_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___x_2195_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
}
else
{
lean_object* v_ks_2227_; lean_object* v_vs_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2246_; 
v_ks_2227_ = lean_ctor_get(v_x_2176_, 0);
v_vs_2228_ = lean_ctor_get(v_x_2176_, 1);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_x_2176_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2230_ = v_x_2176_;
v_isShared_2231_ = v_isSharedCheck_2246_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_vs_2228_);
lean_inc(v_ks_2227_);
lean_dec(v_x_2176_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2246_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2233_; 
if (v_isShared_2231_ == 0)
{
v___x_2233_ = v___x_2230_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_ks_2227_);
lean_ctor_set(v_reuseFailAlloc_2245_, 1, v_vs_2228_);
v___x_2233_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
lean_object* v_newNode_2234_; size_t v___x_2235_; uint8_t v___x_2236_; 
v_newNode_2234_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v___x_2233_, v_x_2179_, v_x_2180_);
v___x_2235_ = ((size_t)7ULL);
v___x_2236_ = lean_usize_dec_le(v___x_2235_, v_x_2178_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; lean_object* v___x_2238_; uint8_t v___x_2239_; 
v___x_2237_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2234_);
v___x_2238_ = lean_unsigned_to_nat(4u);
v___x_2239_ = lean_nat_dec_lt(v___x_2237_, v___x_2238_);
lean_dec(v___x_2237_);
if (v___x_2239_ == 0)
{
lean_object* v_ks_2240_; lean_object* v_vs_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v_ks_2240_ = lean_ctor_get(v_newNode_2234_, 0);
lean_inc_ref(v_ks_2240_);
v_vs_2241_ = lean_ctor_get(v_newNode_2234_, 1);
lean_inc_ref(v_vs_2241_);
lean_dec_ref(v_newNode_2234_);
v___x_2242_ = lean_unsigned_to_nat(0u);
v___x_2243_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0);
v___x_2244_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_x_2178_, v_ks_2240_, v_vs_2241_, v___x_2242_, v___x_2243_);
lean_dec_ref(v_vs_2241_);
lean_dec_ref(v_ks_2240_);
return v___x_2244_;
}
else
{
return v_newNode_2234_;
}
}
else
{
return v_newNode_2234_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(size_t v_depth_2247_, lean_object* v_keys_2248_, lean_object* v_vals_2249_, lean_object* v_i_2250_, lean_object* v_entries_2251_){
_start:
{
lean_object* v___x_2252_; uint8_t v___x_2253_; 
v___x_2252_ = lean_array_get_size(v_keys_2248_);
v___x_2253_ = lean_nat_dec_lt(v_i_2250_, v___x_2252_);
if (v___x_2253_ == 0)
{
lean_dec(v_i_2250_);
return v_entries_2251_;
}
else
{
lean_object* v_k_2254_; lean_object* v_v_2255_; uint64_t v___x_2256_; size_t v_h_2257_; size_t v___x_2258_; lean_object* v___x_2259_; size_t v___x_2260_; size_t v___x_2261_; size_t v___x_2262_; size_t v_h_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v_k_2254_ = lean_array_fget_borrowed(v_keys_2248_, v_i_2250_);
v_v_2255_ = lean_array_fget_borrowed(v_vals_2249_, v_i_2250_);
v___x_2256_ = l_Lean_instHashableMVarId_hash(v_k_2254_);
v_h_2257_ = lean_uint64_to_usize(v___x_2256_);
v___x_2258_ = ((size_t)5ULL);
v___x_2259_ = lean_unsigned_to_nat(1u);
v___x_2260_ = ((size_t)1ULL);
v___x_2261_ = lean_usize_sub(v_depth_2247_, v___x_2260_);
v___x_2262_ = lean_usize_mul(v___x_2258_, v___x_2261_);
v_h_2263_ = lean_usize_shift_right(v_h_2257_, v___x_2262_);
v___x_2264_ = lean_nat_add(v_i_2250_, v___x_2259_);
lean_dec(v_i_2250_);
lean_inc(v_v_2255_);
lean_inc(v_k_2254_);
v___x_2265_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_entries_2251_, v_h_2263_, v_depth_2247_, v_k_2254_, v_v_2255_);
v_i_2250_ = v___x_2264_;
v_entries_2251_ = v___x_2265_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg___boxed(lean_object* v_depth_2267_, lean_object* v_keys_2268_, lean_object* v_vals_2269_, lean_object* v_i_2270_, lean_object* v_entries_2271_){
_start:
{
size_t v_depth_boxed_2272_; lean_object* v_res_2273_; 
v_depth_boxed_2272_ = lean_unbox_usize(v_depth_2267_);
lean_dec(v_depth_2267_);
v_res_2273_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_boxed_2272_, v_keys_2268_, v_vals_2269_, v_i_2270_, v_entries_2271_);
lean_dec_ref(v_vals_2269_);
lean_dec_ref(v_keys_2268_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg___boxed(lean_object* v_x_2274_, lean_object* v_x_2275_, lean_object* v_x_2276_, lean_object* v_x_2277_, lean_object* v_x_2278_){
_start:
{
size_t v_x_31234__boxed_2279_; size_t v_x_31235__boxed_2280_; lean_object* v_res_2281_; 
v_x_31234__boxed_2279_ = lean_unbox_usize(v_x_2275_);
lean_dec(v_x_2275_);
v_x_31235__boxed_2280_ = lean_unbox_usize(v_x_2276_);
lean_dec(v_x_2276_);
v_res_2281_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2274_, v_x_31234__boxed_2279_, v_x_31235__boxed_2280_, v_x_2277_, v_x_2278_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(lean_object* v_x_2282_, lean_object* v_x_2283_, lean_object* v_x_2284_){
_start:
{
uint64_t v___x_2285_; size_t v___x_2286_; size_t v___x_2287_; lean_object* v___x_2288_; 
v___x_2285_ = l_Lean_instHashableMVarId_hash(v_x_2283_);
v___x_2286_ = lean_uint64_to_usize(v___x_2285_);
v___x_2287_ = ((size_t)1ULL);
v___x_2288_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2282_, v___x_2286_, v___x_2287_, v_x_2283_, v_x_2284_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(lean_object* v_mvarId_2289_, lean_object* v_val_2290_, lean_object* v___y_2291_){
_start:
{
lean_object* v___x_2293_; lean_object* v_mctx_2294_; lean_object* v_cache_2295_; lean_object* v_zetaDeltaFVarIds_2296_; lean_object* v_postponed_2297_; lean_object* v_diag_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2327_; 
v___x_2293_ = lean_st_ref_take(v___y_2291_);
v_mctx_2294_ = lean_ctor_get(v___x_2293_, 0);
v_cache_2295_ = lean_ctor_get(v___x_2293_, 1);
v_zetaDeltaFVarIds_2296_ = lean_ctor_get(v___x_2293_, 2);
v_postponed_2297_ = lean_ctor_get(v___x_2293_, 3);
v_diag_2298_ = lean_ctor_get(v___x_2293_, 4);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2300_ = v___x_2293_;
v_isShared_2301_ = v_isSharedCheck_2327_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_diag_2298_);
lean_inc(v_postponed_2297_);
lean_inc(v_zetaDeltaFVarIds_2296_);
lean_inc(v_cache_2295_);
lean_inc(v_mctx_2294_);
lean_dec(v___x_2293_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2327_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v_depth_2302_; lean_object* v_levelAssignDepth_2303_; lean_object* v_lmvarCounter_2304_; lean_object* v_mvarCounter_2305_; lean_object* v_lDecls_2306_; lean_object* v_decls_2307_; lean_object* v_userNames_2308_; lean_object* v_lAssignment_2309_; lean_object* v_eAssignment_2310_; lean_object* v_dAssignment_2311_; lean_object* v_instanceTypedMVars_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2326_; 
v_depth_2302_ = lean_ctor_get(v_mctx_2294_, 0);
v_levelAssignDepth_2303_ = lean_ctor_get(v_mctx_2294_, 1);
v_lmvarCounter_2304_ = lean_ctor_get(v_mctx_2294_, 2);
v_mvarCounter_2305_ = lean_ctor_get(v_mctx_2294_, 3);
v_lDecls_2306_ = lean_ctor_get(v_mctx_2294_, 4);
v_decls_2307_ = lean_ctor_get(v_mctx_2294_, 5);
v_userNames_2308_ = lean_ctor_get(v_mctx_2294_, 6);
v_lAssignment_2309_ = lean_ctor_get(v_mctx_2294_, 7);
v_eAssignment_2310_ = lean_ctor_get(v_mctx_2294_, 8);
v_dAssignment_2311_ = lean_ctor_get(v_mctx_2294_, 9);
v_instanceTypedMVars_2312_ = lean_ctor_get(v_mctx_2294_, 10);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_mctx_2294_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2314_ = v_mctx_2294_;
v_isShared_2315_ = v_isSharedCheck_2326_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_instanceTypedMVars_2312_);
lean_inc(v_dAssignment_2311_);
lean_inc(v_eAssignment_2310_);
lean_inc(v_lAssignment_2309_);
lean_inc(v_userNames_2308_);
lean_inc(v_decls_2307_);
lean_inc(v_lDecls_2306_);
lean_inc(v_mvarCounter_2305_);
lean_inc(v_lmvarCounter_2304_);
lean_inc(v_levelAssignDepth_2303_);
lean_inc(v_depth_2302_);
lean_dec(v_mctx_2294_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2326_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2319_; 
v___x_2316_ = lean_box(0);
v___x_2317_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_eAssignment_2310_, v_mvarId_2289_, v_val_2290_);
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 8, v___x_2317_);
v___x_2319_ = v___x_2314_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_depth_2302_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v_levelAssignDepth_2303_);
lean_ctor_set(v_reuseFailAlloc_2325_, 2, v_lmvarCounter_2304_);
lean_ctor_set(v_reuseFailAlloc_2325_, 3, v_mvarCounter_2305_);
lean_ctor_set(v_reuseFailAlloc_2325_, 4, v_lDecls_2306_);
lean_ctor_set(v_reuseFailAlloc_2325_, 5, v_decls_2307_);
lean_ctor_set(v_reuseFailAlloc_2325_, 6, v_userNames_2308_);
lean_ctor_set(v_reuseFailAlloc_2325_, 7, v_lAssignment_2309_);
lean_ctor_set(v_reuseFailAlloc_2325_, 8, v___x_2317_);
lean_ctor_set(v_reuseFailAlloc_2325_, 9, v_dAssignment_2311_);
lean_ctor_set(v_reuseFailAlloc_2325_, 10, v_instanceTypedMVars_2312_);
v___x_2319_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2321_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v___x_2319_);
v___x_2321_ = v___x_2300_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2319_);
lean_ctor_set(v_reuseFailAlloc_2324_, 1, v_cache_2295_);
lean_ctor_set(v_reuseFailAlloc_2324_, 2, v_zetaDeltaFVarIds_2296_);
lean_ctor_set(v_reuseFailAlloc_2324_, 3, v_postponed_2297_);
lean_ctor_set(v_reuseFailAlloc_2324_, 4, v_diag_2298_);
v___x_2321_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = lean_st_ref_put(v___y_2291_, v___x_2321_);
v___x_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2316_);
return v___x_2323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg___boxed(lean_object* v_mvarId_2328_, lean_object* v_val_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_2328_, v_val_2329_, v___y_2330_);
lean_dec(v___y_2330_);
return v_res_2332_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2333_ = lean_unsigned_to_nat(32u);
v___x_2334_ = lean_mk_empty_array_with_capacity(v___x_2333_);
v___x_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
return v___x_2335_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2336_ = ((size_t)5ULL);
v___x_2337_ = lean_unsigned_to_nat(0u);
v___x_2338_ = lean_unsigned_to_nat(32u);
v___x_2339_ = lean_mk_empty_array_with_capacity(v___x_2338_);
v___x_2340_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0);
v___x_2341_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2341_, 0, v___x_2340_);
lean_ctor_set(v___x_2341_, 1, v___x_2339_);
lean_ctor_set(v___x_2341_, 2, v___x_2337_);
lean_ctor_set(v___x_2341_, 3, v___x_2337_);
lean_ctor_set_usize(v___x_2341_, 4, v___x_2336_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(lean_object* v___y_2342_){
_start:
{
lean_object* v___x_2344_; lean_object* v_traceState_2345_; lean_object* v_traces_2346_; lean_object* v___x_2347_; lean_object* v_traceState_2348_; lean_object* v_env_2349_; lean_object* v_nextMacroScope_2350_; lean_object* v_ngen_2351_; lean_object* v_auxDeclNGen_2352_; lean_object* v_cache_2353_; lean_object* v_messages_2354_; lean_object* v_infoState_2355_; lean_object* v_snapshotTasks_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2375_; 
v___x_2344_ = lean_st_ref_get(v___y_2342_);
v_traceState_2345_ = lean_ctor_get(v___x_2344_, 4);
lean_inc_ref(v_traceState_2345_);
lean_dec(v___x_2344_);
v_traces_2346_ = lean_ctor_get(v_traceState_2345_, 0);
lean_inc_ref(v_traces_2346_);
lean_dec_ref(v_traceState_2345_);
v___x_2347_ = lean_st_ref_take(v___y_2342_);
v_traceState_2348_ = lean_ctor_get(v___x_2347_, 4);
v_env_2349_ = lean_ctor_get(v___x_2347_, 0);
v_nextMacroScope_2350_ = lean_ctor_get(v___x_2347_, 1);
v_ngen_2351_ = lean_ctor_get(v___x_2347_, 2);
v_auxDeclNGen_2352_ = lean_ctor_get(v___x_2347_, 3);
v_cache_2353_ = lean_ctor_get(v___x_2347_, 5);
v_messages_2354_ = lean_ctor_get(v___x_2347_, 6);
v_infoState_2355_ = lean_ctor_get(v___x_2347_, 7);
v_snapshotTasks_2356_ = lean_ctor_get(v___x_2347_, 8);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2358_ = v___x_2347_;
v_isShared_2359_ = v_isSharedCheck_2375_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_snapshotTasks_2356_);
lean_inc(v_infoState_2355_);
lean_inc(v_messages_2354_);
lean_inc(v_cache_2353_);
lean_inc(v_traceState_2348_);
lean_inc(v_auxDeclNGen_2352_);
lean_inc(v_ngen_2351_);
lean_inc(v_nextMacroScope_2350_);
lean_inc(v_env_2349_);
lean_dec(v___x_2347_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2375_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
uint64_t v_tid_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2373_; 
v_tid_2360_ = lean_ctor_get_uint64(v_traceState_2348_, sizeof(void*)*1);
v_isSharedCheck_2373_ = !lean_is_exclusive(v_traceState_2348_);
if (v_isSharedCheck_2373_ == 0)
{
lean_object* v_unused_2374_; 
v_unused_2374_ = lean_ctor_get(v_traceState_2348_, 0);
lean_dec(v_unused_2374_);
v___x_2362_ = v_traceState_2348_;
v_isShared_2363_ = v_isSharedCheck_2373_;
goto v_resetjp_2361_;
}
else
{
lean_dec(v_traceState_2348_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2373_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2364_; lean_object* v___x_2366_; 
v___x_2364_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v___x_2364_);
v___x_2366_ = v___x_2362_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2364_);
lean_ctor_set_uint64(v_reuseFailAlloc_2372_, sizeof(void*)*1, v_tid_2360_);
v___x_2366_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2368_; 
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 4, v___x_2366_);
v___x_2368_ = v___x_2358_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_env_2349_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v_nextMacroScope_2350_);
lean_ctor_set(v_reuseFailAlloc_2371_, 2, v_ngen_2351_);
lean_ctor_set(v_reuseFailAlloc_2371_, 3, v_auxDeclNGen_2352_);
lean_ctor_set(v_reuseFailAlloc_2371_, 4, v___x_2366_);
lean_ctor_set(v_reuseFailAlloc_2371_, 5, v_cache_2353_);
lean_ctor_set(v_reuseFailAlloc_2371_, 6, v_messages_2354_);
lean_ctor_set(v_reuseFailAlloc_2371_, 7, v_infoState_2355_);
lean_ctor_set(v_reuseFailAlloc_2371_, 8, v_snapshotTasks_2356_);
v___x_2368_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = lean_st_ref_put(v___y_2342_, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v_traces_2346_);
return v___x_2370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___boxed(lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_2376_);
lean_dec(v___y_2376_);
return v_res_2378_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(lean_object* v_opts_2379_, lean_object* v_opt_2380_){
_start:
{
lean_object* v_name_2381_; lean_object* v_defValue_2382_; lean_object* v_map_2383_; lean_object* v___x_2384_; 
v_name_2381_ = lean_ctor_get(v_opt_2380_, 0);
v_defValue_2382_ = lean_ctor_get(v_opt_2380_, 1);
v_map_2383_ = lean_ctor_get(v_opts_2379_, 0);
v___x_2384_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2383_, v_name_2381_);
if (lean_obj_tag(v___x_2384_) == 0)
{
uint8_t v___x_2385_; 
v___x_2385_ = lean_unbox(v_defValue_2382_);
return v___x_2385_;
}
else
{
lean_object* v_val_2386_; 
v_val_2386_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_val_2386_);
lean_dec_ref_known(v___x_2384_, 1);
if (lean_obj_tag(v_val_2386_) == 1)
{
uint8_t v_v_2387_; 
v_v_2387_ = lean_ctor_get_uint8(v_val_2386_, 0);
lean_dec_ref_known(v_val_2386_, 0);
return v_v_2387_;
}
else
{
uint8_t v___x_2388_; 
lean_dec(v_val_2386_);
v___x_2388_ = lean_unbox(v_defValue_2382_);
return v___x_2388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5___boxed(lean_object* v_opts_2389_, lean_object* v_opt_2390_){
_start:
{
uint8_t v_res_2391_; lean_object* v_r_2392_; 
v_res_2391_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2389_, v_opt_2390_);
lean_dec_ref(v_opt_2390_);
lean_dec_ref(v_opts_2389_);
v_r_2392_ = lean_box(v_res_2391_);
return v_r_2392_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0));
v___x_2395_ = l_Lean_stringToMessageData(v___x_2394_);
return v___x_2395_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__2___closed__2));
v___x_2398_ = l_Lean_stringToMessageData(v___x_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2(lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_x_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2407_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1);
v___x_2408_ = l_Lean_MessageData_ofExpr(v_a_2399_);
v___x_2409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2407_);
lean_ctor_set(v___x_2409_, 1, v___x_2408_);
v___x_2410_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3);
v___x_2411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2409_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
v___x_2412_ = l_Lean_MessageData_ofExpr(v_a_2400_);
v___x_2413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2411_);
lean_ctor_set(v___x_2413_, 1, v___x_2412_);
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___boxed(lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_x_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Lean_Meta_Transport_mkEquiv___lam__2(v_a_2415_, v_a_2416_, v_x_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec_ref(v_x_2417_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(lean_object* v_opts_2424_, lean_object* v_opt_2425_){
_start:
{
lean_object* v_name_2426_; lean_object* v_defValue_2427_; lean_object* v_map_2428_; lean_object* v___x_2429_; 
v_name_2426_ = lean_ctor_get(v_opt_2425_, 0);
v_defValue_2427_ = lean_ctor_get(v_opt_2425_, 1);
v_map_2428_ = lean_ctor_get(v_opts_2424_, 0);
v___x_2429_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2428_, v_name_2426_);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_inc(v_defValue_2427_);
return v_defValue_2427_;
}
else
{
lean_object* v_val_2430_; 
v_val_2430_ = lean_ctor_get(v___x_2429_, 0);
lean_inc(v_val_2430_);
lean_dec_ref_known(v___x_2429_, 1);
if (lean_obj_tag(v_val_2430_) == 3)
{
lean_object* v_v_2431_; 
v_v_2431_ = lean_ctor_get(v_val_2430_, 0);
lean_inc(v_v_2431_);
lean_dec_ref_known(v_val_2430_, 1);
return v_v_2431_;
}
else
{
lean_dec(v_val_2430_);
lean_inc(v_defValue_2427_);
return v_defValue_2427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11___boxed(lean_object* v_opts_2432_, lean_object* v_opt_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2432_, v_opt_2433_);
lean_dec_ref(v_opt_2433_);
lean_dec_ref(v_opts_2432_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(lean_object* v_x_2435_){
_start:
{
if (lean_obj_tag(v_x_2435_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
v_a_2437_ = lean_ctor_get(v_x_2435_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_x_2435_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v_x_2435_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v_x_2435_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
lean_ctor_set_tag(v___x_2439_, 1);
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
else
{
lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2452_; 
v_a_2445_ = lean_ctor_get(v_x_2435_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v_x_2435_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2447_ = v_x_2435_;
v_isShared_2448_ = v_isSharedCheck_2452_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v_x_2435_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2452_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2450_; 
if (v_isShared_2448_ == 0)
{
lean_ctor_set_tag(v___x_2447_, 0);
v___x_2450_ = v___x_2447_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_a_2445_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
return v___x_2450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg___boxed(lean_object* v_x_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_2453_);
return v_res_2455_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(lean_object* v_e_2456_){
_start:
{
if (lean_obj_tag(v_e_2456_) == 0)
{
uint8_t v___x_2457_; 
v___x_2457_ = 2;
return v___x_2457_;
}
else
{
lean_object* v_a_2458_; uint8_t v___x_2459_; 
v_a_2458_ = lean_ctor_get(v_e_2456_, 0);
v___x_2459_ = l_Lean_Expr_hasSyntheticSorry(v_a_2458_);
if (v___x_2459_ == 0)
{
uint8_t v___x_2460_; 
v___x_2460_ = 0;
return v___x_2460_;
}
else
{
uint8_t v___x_2461_; 
v___x_2461_ = 1;
return v___x_2461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10___boxed(lean_object* v_e_2462_){
_start:
{
uint8_t v_res_2463_; lean_object* v_r_2464_; 
v_res_2463_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_e_2462_);
lean_dec_ref(v_e_2462_);
v_r_2464_ = lean_box(v_res_2463_);
return v_r_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(size_t v_sz_2465_, size_t v_i_2466_, lean_object* v_bs_2467_){
_start:
{
uint8_t v___x_2468_; 
v___x_2468_ = lean_usize_dec_lt(v_i_2466_, v_sz_2465_);
if (v___x_2468_ == 0)
{
return v_bs_2467_;
}
else
{
lean_object* v_v_2469_; lean_object* v_msg_2470_; lean_object* v___x_2471_; lean_object* v_bs_x27_2472_; size_t v___x_2473_; size_t v___x_2474_; lean_object* v___x_2475_; 
v_v_2469_ = lean_array_uget_borrowed(v_bs_2467_, v_i_2466_);
v_msg_2470_ = lean_ctor_get(v_v_2469_, 1);
lean_inc_ref(v_msg_2470_);
v___x_2471_ = lean_unsigned_to_nat(0u);
v_bs_x27_2472_ = lean_array_uset(v_bs_2467_, v_i_2466_, v___x_2471_);
v___x_2473_ = ((size_t)1ULL);
v___x_2474_ = lean_usize_add(v_i_2466_, v___x_2473_);
v___x_2475_ = lean_array_uset(v_bs_x27_2472_, v_i_2466_, v_msg_2470_);
v_i_2466_ = v___x_2474_;
v_bs_2467_ = v___x_2475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11___boxed(lean_object* v_sz_2477_, lean_object* v_i_2478_, lean_object* v_bs_2479_){
_start:
{
size_t v_sz_boxed_2480_; size_t v_i_boxed_2481_; lean_object* v_res_2482_; 
v_sz_boxed_2480_ = lean_unbox_usize(v_sz_2477_);
lean_dec(v_sz_2477_);
v_i_boxed_2481_ = lean_unbox_usize(v_i_2478_);
lean_dec(v_i_2478_);
v_res_2482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_boxed_2480_, v_i_boxed_2481_, v_bs_2479_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(lean_object* v_oldTraces_2483_, lean_object* v_data_2484_, lean_object* v_ref_2485_, lean_object* v_msg_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v_toCold_2492_; lean_object* v_currRecDepth_2493_; lean_object* v_ref_2494_; uint8_t v_diag_2495_; uint8_t v_suppressElabErrors_2496_; lean_object* v_ref_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v_traceState_2500_; lean_object* v_traces_2501_; lean_object* v___x_2502_; size_t v_sz_2503_; size_t v___x_2504_; lean_object* v___x_2505_; lean_object* v_msg_2506_; lean_object* v___x_2507_; lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2545_; 
v_toCold_2492_ = lean_ctor_get(v___y_2489_, 0);
v_currRecDepth_2493_ = lean_ctor_get(v___y_2489_, 1);
v_ref_2494_ = lean_ctor_get(v___y_2489_, 2);
v_diag_2495_ = lean_ctor_get_uint8(v___y_2489_, sizeof(void*)*3);
v_suppressElabErrors_2496_ = lean_ctor_get_uint8(v___y_2489_, sizeof(void*)*3 + 1);
v_ref_2497_ = l_Lean_replaceRef(v_ref_2485_, v_ref_2494_);
lean_inc(v_currRecDepth_2493_);
lean_inc_ref(v_toCold_2492_);
v___x_2498_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2498_, 0, v_toCold_2492_);
lean_ctor_set(v___x_2498_, 1, v_currRecDepth_2493_);
lean_ctor_set(v___x_2498_, 2, v_ref_2497_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*3, v_diag_2495_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*3 + 1, v_suppressElabErrors_2496_);
v___x_2499_ = lean_st_ref_get(v___y_2490_);
v_traceState_2500_ = lean_ctor_get(v___x_2499_, 4);
lean_inc_ref(v_traceState_2500_);
lean_dec(v___x_2499_);
v_traces_2501_ = lean_ctor_get(v_traceState_2500_, 0);
lean_inc_ref(v_traces_2501_);
lean_dec_ref(v_traceState_2500_);
v___x_2502_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2501_);
lean_dec_ref(v_traces_2501_);
v_sz_2503_ = lean_array_size(v___x_2502_);
v___x_2504_ = ((size_t)0ULL);
v___x_2505_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_2503_, v___x_2504_, v___x_2502_);
v_msg_2506_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2506_, 0, v_data_2484_);
lean_ctor_set(v_msg_2506_, 1, v_msg_2486_);
lean_ctor_set(v_msg_2506_, 2, v___x_2505_);
v___x_2507_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_2506_, v___y_2487_, v___y_2488_, v___x_2498_, v___y_2490_);
lean_dec_ref_known(v___x_2498_, 3);
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2510_ = v___x_2507_;
v_isShared_2511_ = v_isSharedCheck_2545_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v___x_2507_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2545_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2512_; lean_object* v_traceState_2513_; lean_object* v_env_2514_; lean_object* v_nextMacroScope_2515_; lean_object* v_ngen_2516_; lean_object* v_auxDeclNGen_2517_; lean_object* v_cache_2518_; lean_object* v_messages_2519_; lean_object* v_infoState_2520_; lean_object* v_snapshotTasks_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2544_; 
v___x_2512_ = lean_st_ref_take(v___y_2490_);
v_traceState_2513_ = lean_ctor_get(v___x_2512_, 4);
v_env_2514_ = lean_ctor_get(v___x_2512_, 0);
v_nextMacroScope_2515_ = lean_ctor_get(v___x_2512_, 1);
v_ngen_2516_ = lean_ctor_get(v___x_2512_, 2);
v_auxDeclNGen_2517_ = lean_ctor_get(v___x_2512_, 3);
v_cache_2518_ = lean_ctor_get(v___x_2512_, 5);
v_messages_2519_ = lean_ctor_get(v___x_2512_, 6);
v_infoState_2520_ = lean_ctor_get(v___x_2512_, 7);
v_snapshotTasks_2521_ = lean_ctor_get(v___x_2512_, 8);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2523_ = v___x_2512_;
v_isShared_2524_ = v_isSharedCheck_2544_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_snapshotTasks_2521_);
lean_inc(v_infoState_2520_);
lean_inc(v_messages_2519_);
lean_inc(v_cache_2518_);
lean_inc(v_traceState_2513_);
lean_inc(v_auxDeclNGen_2517_);
lean_inc(v_ngen_2516_);
lean_inc(v_nextMacroScope_2515_);
lean_inc(v_env_2514_);
lean_dec(v___x_2512_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2544_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
uint64_t v_tid_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2542_; 
v_tid_2525_ = lean_ctor_get_uint64(v_traceState_2513_, sizeof(void*)*1);
v_isSharedCheck_2542_ = !lean_is_exclusive(v_traceState_2513_);
if (v_isSharedCheck_2542_ == 0)
{
lean_object* v_unused_2543_; 
v_unused_2543_ = lean_ctor_get(v_traceState_2513_, 0);
lean_dec(v_unused_2543_);
v___x_2527_ = v_traceState_2513_;
v_isShared_2528_ = v_isSharedCheck_2542_;
goto v_resetjp_2526_;
}
else
{
lean_dec(v_traceState_2513_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2542_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2533_; 
v___x_2529_ = lean_box(0);
v___x_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2530_, 0, v_ref_2485_);
lean_ctor_set(v___x_2530_, 1, v_a_2508_);
v___x_2531_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2483_, v___x_2530_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v___x_2531_);
v___x_2533_ = v___x_2527_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2531_);
lean_ctor_set_uint64(v_reuseFailAlloc_2541_, sizeof(void*)*1, v_tid_2525_);
v___x_2533_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2535_; 
if (v_isShared_2524_ == 0)
{
lean_ctor_set(v___x_2523_, 4, v___x_2533_);
v___x_2535_ = v___x_2523_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_env_2514_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v_nextMacroScope_2515_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v_ngen_2516_);
lean_ctor_set(v_reuseFailAlloc_2540_, 3, v_auxDeclNGen_2517_);
lean_ctor_set(v_reuseFailAlloc_2540_, 4, v___x_2533_);
lean_ctor_set(v_reuseFailAlloc_2540_, 5, v_cache_2518_);
lean_ctor_set(v_reuseFailAlloc_2540_, 6, v_messages_2519_);
lean_ctor_set(v_reuseFailAlloc_2540_, 7, v_infoState_2520_);
lean_ctor_set(v_reuseFailAlloc_2540_, 8, v_snapshotTasks_2521_);
v___x_2535_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
lean_object* v___x_2536_; lean_object* v___x_2538_; 
v___x_2536_ = lean_st_ref_put(v___y_2490_, v___x_2535_);
if (v_isShared_2511_ == 0)
{
lean_ctor_set(v___x_2510_, 0, v___x_2529_);
v___x_2538_ = v___x_2510_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2529_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8___boxed(lean_object* v_oldTraces_2546_, lean_object* v_data_2547_, lean_object* v_ref_2548_, lean_object* v_msg_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2546_, v_data_2547_, v_ref_2548_, v_msg_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
return v_res_2555_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2556_; double v___x_2557_; 
v___x_2556_ = lean_unsigned_to_nat(0u);
v___x_2557_ = lean_float_of_nat(v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1));
v___x_2560_ = l_Lean_stringToMessageData(v___x_2559_);
return v___x_2560_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2561_; double v___x_2562_; 
v___x_2561_ = lean_unsigned_to_nat(1000u);
v___x_2562_ = lean_float_of_nat(v___x_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(lean_object* v_cls_2563_, uint8_t v_collapsed_2564_, lean_object* v_tag_2565_, lean_object* v_opts_2566_, uint8_t v_clsEnabled_2567_, lean_object* v_oldTraces_2568_, lean_object* v_msg_2569_, lean_object* v_resStartStop_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_fst_2576_; lean_object* v_snd_2577_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v_data_2581_; lean_object* v_fst_2592_; lean_object* v_snd_2593_; lean_object* v___x_2594_; uint8_t v___x_2595_; lean_object* v___y_2597_; lean_object* v_a_2598_; uint8_t v___y_2613_; double v___y_2644_; 
v_fst_2576_ = lean_ctor_get(v_resStartStop_2570_, 0);
lean_inc(v_fst_2576_);
v_snd_2577_ = lean_ctor_get(v_resStartStop_2570_, 1);
lean_inc(v_snd_2577_);
lean_dec_ref(v_resStartStop_2570_);
v_fst_2592_ = lean_ctor_get(v_snd_2577_, 0);
lean_inc(v_fst_2592_);
v_snd_2593_ = lean_ctor_get(v_snd_2577_, 1);
lean_inc(v_snd_2593_);
lean_dec(v_snd_2577_);
v___x_2594_ = l_Lean_trace_profiler;
v___x_2595_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2566_, v___x_2594_);
if (v___x_2595_ == 0)
{
v___y_2613_ = v___x_2595_;
goto v___jp_2612_;
}
else
{
lean_object* v___x_2649_; uint8_t v___x_2650_; 
v___x_2649_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2650_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2566_, v___x_2649_);
if (v___x_2650_ == 0)
{
lean_object* v___x_2651_; lean_object* v___x_2652_; double v___x_2653_; double v___x_2654_; double v___x_2655_; 
v___x_2651_ = l_Lean_trace_profiler_threshold;
v___x_2652_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2566_, v___x_2651_);
v___x_2653_ = lean_float_of_nat(v___x_2652_);
v___x_2654_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3);
v___x_2655_ = lean_float_div(v___x_2653_, v___x_2654_);
v___y_2644_ = v___x_2655_;
goto v___jp_2643_;
}
else
{
lean_object* v___x_2656_; lean_object* v___x_2657_; double v___x_2658_; 
v___x_2656_ = l_Lean_trace_profiler_threshold;
v___x_2657_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2566_, v___x_2656_);
v___x_2658_ = lean_float_of_nat(v___x_2657_);
v___y_2644_ = v___x_2658_;
goto v___jp_2643_;
}
}
v___jp_2578_:
{
lean_object* v___x_2582_; 
lean_inc(v___y_2579_);
v___x_2582_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2568_, v_data_2581_, v___y_2579_, v___y_2580_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v___x_2583_; 
lean_dec_ref_known(v___x_2582_, 1);
v___x_2583_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2576_);
return v___x_2583_;
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
lean_dec(v_fst_2576_);
v_a_2584_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v___x_2582_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2582_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
v___jp_2596_:
{
uint8_t v_result_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; double v___x_2602_; lean_object* v_data_2603_; 
v_result_2599_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_fst_2576_);
v___x_2600_ = lean_box(v_result_2599_);
v___x_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
v___x_2602_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0);
lean_inc_ref(v_tag_2565_);
lean_inc_ref(v___x_2601_);
lean_inc(v_cls_2563_);
v_data_2603_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2603_, 0, v_cls_2563_);
lean_ctor_set(v_data_2603_, 1, v___x_2601_);
lean_ctor_set(v_data_2603_, 2, v_tag_2565_);
lean_ctor_set_float(v_data_2603_, sizeof(void*)*3, v___x_2602_);
lean_ctor_set_float(v_data_2603_, sizeof(void*)*3 + 8, v___x_2602_);
lean_ctor_set_uint8(v_data_2603_, sizeof(void*)*3 + 16, v_collapsed_2564_);
if (v___x_2595_ == 0)
{
lean_dec_ref_known(v___x_2601_, 1);
lean_dec(v_snd_2593_);
lean_dec(v_fst_2592_);
lean_dec_ref(v_tag_2565_);
lean_dec(v_cls_2563_);
v___y_2579_ = v___y_2597_;
v___y_2580_ = v_a_2598_;
v_data_2581_ = v_data_2603_;
goto v___jp_2578_;
}
else
{
lean_object* v_data_2604_; double v___x_2605_; double v___x_2606_; 
lean_dec_ref_known(v_data_2603_, 3);
v_data_2604_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2604_, 0, v_cls_2563_);
lean_ctor_set(v_data_2604_, 1, v___x_2601_);
lean_ctor_set(v_data_2604_, 2, v_tag_2565_);
v___x_2605_ = lean_unbox_float(v_fst_2592_);
lean_dec(v_fst_2592_);
lean_ctor_set_float(v_data_2604_, sizeof(void*)*3, v___x_2605_);
v___x_2606_ = lean_unbox_float(v_snd_2593_);
lean_dec(v_snd_2593_);
lean_ctor_set_float(v_data_2604_, sizeof(void*)*3 + 8, v___x_2606_);
lean_ctor_set_uint8(v_data_2604_, sizeof(void*)*3 + 16, v_collapsed_2564_);
v___y_2579_ = v___y_2597_;
v___y_2580_ = v_a_2598_;
v_data_2581_ = v_data_2604_;
goto v___jp_2578_;
}
}
v___jp_2607_:
{
lean_object* v_ref_2608_; lean_object* v___x_2609_; 
v_ref_2608_ = lean_ctor_get(v___y_2573_, 2);
lean_inc(v___y_2574_);
lean_inc_ref(v___y_2573_);
lean_inc(v___y_2572_);
lean_inc_ref(v___y_2571_);
lean_inc(v_fst_2576_);
v___x_2609_ = lean_apply_6(v_msg_2569_, v_fst_2576_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, lean_box(0));
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2610_);
lean_dec_ref_known(v___x_2609_, 1);
v___y_2597_ = v_ref_2608_;
v_a_2598_ = v_a_2610_;
goto v___jp_2596_;
}
else
{
lean_object* v___x_2611_; 
lean_dec_ref_known(v___x_2609_, 1);
v___x_2611_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2);
v___y_2597_ = v_ref_2608_;
v_a_2598_ = v___x_2611_;
goto v___jp_2596_;
}
}
v___jp_2612_:
{
if (v_clsEnabled_2567_ == 0)
{
if (v___y_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v_traceState_2615_; lean_object* v_env_2616_; lean_object* v_nextMacroScope_2617_; lean_object* v_ngen_2618_; lean_object* v_auxDeclNGen_2619_; lean_object* v_cache_2620_; lean_object* v_messages_2621_; lean_object* v_infoState_2622_; lean_object* v_snapshotTasks_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2642_; 
lean_dec(v_snd_2593_);
lean_dec(v_fst_2592_);
lean_dec_ref(v_msg_2569_);
lean_dec_ref(v_tag_2565_);
lean_dec(v_cls_2563_);
v___x_2614_ = lean_st_ref_take(v___y_2574_);
v_traceState_2615_ = lean_ctor_get(v___x_2614_, 4);
v_env_2616_ = lean_ctor_get(v___x_2614_, 0);
v_nextMacroScope_2617_ = lean_ctor_get(v___x_2614_, 1);
v_ngen_2618_ = lean_ctor_get(v___x_2614_, 2);
v_auxDeclNGen_2619_ = lean_ctor_get(v___x_2614_, 3);
v_cache_2620_ = lean_ctor_get(v___x_2614_, 5);
v_messages_2621_ = lean_ctor_get(v___x_2614_, 6);
v_infoState_2622_ = lean_ctor_get(v___x_2614_, 7);
v_snapshotTasks_2623_ = lean_ctor_get(v___x_2614_, 8);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2625_ = v___x_2614_;
v_isShared_2626_ = v_isSharedCheck_2642_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_snapshotTasks_2623_);
lean_inc(v_infoState_2622_);
lean_inc(v_messages_2621_);
lean_inc(v_cache_2620_);
lean_inc(v_traceState_2615_);
lean_inc(v_auxDeclNGen_2619_);
lean_inc(v_ngen_2618_);
lean_inc(v_nextMacroScope_2617_);
lean_inc(v_env_2616_);
lean_dec(v___x_2614_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2642_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
uint64_t v_tid_2627_; lean_object* v_traces_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2641_; 
v_tid_2627_ = lean_ctor_get_uint64(v_traceState_2615_, sizeof(void*)*1);
v_traces_2628_ = lean_ctor_get(v_traceState_2615_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v_traceState_2615_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2630_ = v_traceState_2615_;
v_isShared_2631_ = v_isSharedCheck_2641_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_traces_2628_);
lean_dec(v_traceState_2615_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2641_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2632_; lean_object* v___x_2634_; 
v___x_2632_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2568_, v_traces_2628_);
lean_dec_ref(v_traces_2628_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 0, v___x_2632_);
v___x_2634_ = v___x_2630_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v___x_2632_);
lean_ctor_set_uint64(v_reuseFailAlloc_2640_, sizeof(void*)*1, v_tid_2627_);
v___x_2634_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2636_; 
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 4, v___x_2634_);
v___x_2636_ = v___x_2625_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_env_2616_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v_nextMacroScope_2617_);
lean_ctor_set(v_reuseFailAlloc_2639_, 2, v_ngen_2618_);
lean_ctor_set(v_reuseFailAlloc_2639_, 3, v_auxDeclNGen_2619_);
lean_ctor_set(v_reuseFailAlloc_2639_, 4, v___x_2634_);
lean_ctor_set(v_reuseFailAlloc_2639_, 5, v_cache_2620_);
lean_ctor_set(v_reuseFailAlloc_2639_, 6, v_messages_2621_);
lean_ctor_set(v_reuseFailAlloc_2639_, 7, v_infoState_2622_);
lean_ctor_set(v_reuseFailAlloc_2639_, 8, v_snapshotTasks_2623_);
v___x_2636_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = lean_st_ref_put(v___y_2574_, v___x_2636_);
v___x_2638_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2576_);
return v___x_2638_;
}
}
}
}
}
else
{
goto v___jp_2607_;
}
}
else
{
goto v___jp_2607_;
}
}
v___jp_2643_:
{
double v___x_2645_; double v___x_2646_; double v___x_2647_; uint8_t v___x_2648_; 
v___x_2645_ = lean_unbox_float(v_snd_2593_);
v___x_2646_ = lean_unbox_float(v_fst_2592_);
v___x_2647_ = lean_float_sub(v___x_2645_, v___x_2646_);
v___x_2648_ = lean_float_decLt(v___y_2644_, v___x_2647_);
v___y_2613_ = v___x_2648_;
goto v___jp_2612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___boxed(lean_object* v_cls_2659_, lean_object* v_collapsed_2660_, lean_object* v_tag_2661_, lean_object* v_opts_2662_, lean_object* v_clsEnabled_2663_, lean_object* v_oldTraces_2664_, lean_object* v_msg_2665_, lean_object* v_resStartStop_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
uint8_t v_collapsed_boxed_2672_; uint8_t v_clsEnabled_boxed_2673_; lean_object* v_res_2674_; 
v_collapsed_boxed_2672_ = lean_unbox(v_collapsed_2660_);
v_clsEnabled_boxed_2673_ = lean_unbox(v_clsEnabled_2663_);
v_res_2674_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v_cls_2659_, v_collapsed_boxed_2672_, v_tag_2661_, v_opts_2662_, v_clsEnabled_boxed_2673_, v_oldTraces_2664_, v_msg_2665_, v_resStartStop_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec_ref(v_opts_2662_);
return v_res_2674_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_keys_2675_, lean_object* v_i_2676_, lean_object* v_k_2677_){
_start:
{
lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2678_ = lean_array_get_size(v_keys_2675_);
v___x_2679_ = lean_nat_dec_lt(v_i_2676_, v___x_2678_);
if (v___x_2679_ == 0)
{
lean_dec(v_i_2676_);
return v___x_2679_;
}
else
{
lean_object* v_k_x27_2680_; uint8_t v___x_2681_; 
v_k_x27_2680_ = lean_array_fget_borrowed(v_keys_2675_, v_i_2676_);
v___x_2681_ = l_Lean_instBEqMVarId_beq(v_k_2677_, v_k_x27_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2682_ = lean_unsigned_to_nat(1u);
v___x_2683_ = lean_nat_add(v_i_2676_, v___x_2682_);
lean_dec(v_i_2676_);
v_i_2676_ = v___x_2683_;
goto _start;
}
else
{
lean_dec(v_i_2676_);
return v___x_2679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object* v_keys_2685_, lean_object* v_i_2686_, lean_object* v_k_2687_){
_start:
{
uint8_t v_res_2688_; lean_object* v_r_2689_; 
v_res_2688_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_2685_, v_i_2686_, v_k_2687_);
lean_dec(v_k_2687_);
lean_dec_ref(v_keys_2685_);
v_r_2689_ = lean_box(v_res_2688_);
return v_r_2689_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object* v_x_2690_, size_t v_x_2691_, lean_object* v_x_2692_){
_start:
{
if (lean_obj_tag(v_x_2690_) == 0)
{
lean_object* v_es_2693_; lean_object* v___x_2694_; size_t v___x_2695_; size_t v___x_2696_; lean_object* v_j_2697_; lean_object* v___x_2698_; 
v_es_2693_ = lean_ctor_get(v_x_2690_, 0);
v___x_2694_ = lean_box(2);
v___x_2695_ = ((size_t)31ULL);
v___x_2696_ = lean_usize_land(v_x_2691_, v___x_2695_);
v_j_2697_ = lean_usize_to_nat(v___x_2696_);
v___x_2698_ = lean_array_get_borrowed(v___x_2694_, v_es_2693_, v_j_2697_);
lean_dec(v_j_2697_);
switch(lean_obj_tag(v___x_2698_))
{
case 0:
{
lean_object* v_key_2699_; uint8_t v___x_2700_; 
v_key_2699_ = lean_ctor_get(v___x_2698_, 0);
v___x_2700_ = l_Lean_instBEqMVarId_beq(v_x_2692_, v_key_2699_);
return v___x_2700_;
}
case 1:
{
lean_object* v_node_2701_; size_t v___x_2702_; size_t v___x_2703_; 
v_node_2701_ = lean_ctor_get(v___x_2698_, 0);
v___x_2702_ = ((size_t)5ULL);
v___x_2703_ = lean_usize_shift_right(v_x_2691_, v___x_2702_);
v_x_2690_ = v_node_2701_;
v_x_2691_ = v___x_2703_;
goto _start;
}
default: 
{
uint8_t v___x_2705_; 
v___x_2705_ = 0;
return v___x_2705_;
}
}
}
else
{
lean_object* v_ks_2706_; lean_object* v___x_2707_; uint8_t v___x_2708_; 
v_ks_2706_ = lean_ctor_get(v_x_2690_, 0);
v___x_2707_ = lean_unsigned_to_nat(0u);
v___x_2708_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_ks_2706_, v___x_2707_, v_x_2692_);
return v___x_2708_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_2709_, lean_object* v_x_2710_, lean_object* v_x_2711_){
_start:
{
size_t v_x_31921__boxed_2712_; uint8_t v_res_2713_; lean_object* v_r_2714_; 
v_x_31921__boxed_2712_ = lean_unbox_usize(v_x_2710_);
lean_dec(v_x_2710_);
v_res_2713_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2709_, v_x_31921__boxed_2712_, v_x_2711_);
lean_dec(v_x_2711_);
lean_dec_ref(v_x_2709_);
v_r_2714_ = lean_box(v_res_2713_);
return v_r_2714_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object* v_x_2715_, lean_object* v_x_2716_){
_start:
{
uint64_t v___x_2717_; size_t v___x_2718_; uint8_t v___x_2719_; 
v___x_2717_ = l_Lean_instHashableMVarId_hash(v_x_2716_);
v___x_2718_ = lean_uint64_to_usize(v___x_2717_);
v___x_2719_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2715_, v___x_2718_, v_x_2716_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_2720_, lean_object* v_x_2721_){
_start:
{
uint8_t v_res_2722_; lean_object* v_r_2723_; 
v_res_2722_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_2720_, v_x_2721_);
lean_dec(v_x_2721_);
lean_dec_ref(v_x_2720_);
v_r_2723_ = lean_box(v_res_2722_);
return v_r_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object* v_mvarId_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v___x_2727_; lean_object* v_mctx_2728_; lean_object* v_eAssignment_2729_; uint8_t v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2727_ = lean_st_ref_get(v___y_2725_);
v_mctx_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc_ref(v_mctx_2728_);
lean_dec(v___x_2727_);
v_eAssignment_2729_ = lean_ctor_get(v_mctx_2728_, 8);
lean_inc_ref(v_eAssignment_2729_);
lean_dec_ref(v_mctx_2728_);
v___x_2730_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_eAssignment_2729_, v_mvarId_2724_);
lean_dec_ref(v_eAssignment_2729_);
v___x_2731_ = lean_box(v___x_2730_);
v___x_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object* v_mvarId_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_2733_, v___y_2734_);
lean_dec(v___y_2734_);
lean_dec(v_mvarId_2733_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0___boxed(lean_object* v_fuel_2737_, lean_object* v_a_2738_, lean_object* v_x_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lean_Meta_Transport_mkEquiv___lam__0(v_fuel_2737_, v_a_2738_, v_x_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v_fuel_2737_);
return v_res_2745_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2748_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__1___closed__1));
v___x_2749_ = l_Lean_stringToMessageData(v___x_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1(lean_object* v_fuel_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v___x_2754_, lean_object* v___x_2755_, lean_object* v___x_2756_, lean_object* v_a_2757_, uint8_t v_a_2758_, lean_object* v_declName_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2765_ = lean_unsigned_to_nat(1u);
v___x_2766_ = lean_nat_sub(v_fuel_2750_, v___x_2765_);
lean_inc(v___x_2766_);
lean_inc(v_declName_2759_);
v___x_2767_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_2759_, v_a_2751_, v___x_2766_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2769_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
v___x_2769_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_2752_, v___y_2761_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___x_2801_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc_n(v_a_2770_, 2);
lean_dec_ref_known(v___x_2769_, 1);
v___x_2801_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2757_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; uint8_t v___x_2803_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v___x_2801_, 1);
v___x_2803_ = lean_unbox(v_a_2802_);
lean_dec(v_a_2802_);
if (v___x_2803_ == 0)
{
lean_dec(v_declName_2759_);
v___y_2772_ = v___y_2760_;
v___y_2773_ = v___y_2761_;
v___y_2774_ = v___y_2762_;
v___y_2775_ = v___y_2763_;
goto v___jp_2771_;
}
else
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2804_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_2805_ = l_Lean_MessageData_ofConstName(v_declName_2759_, v_a_2758_);
v___x_2806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2804_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2, &l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2);
v___x_2808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2806_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
v___x_2809_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2808_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_dec_ref_known(v___x_2809_, 1);
v___y_2772_ = v___y_2760_;
v___y_2773_ = v___y_2761_;
v___y_2774_ = v___y_2762_;
v___y_2775_ = v___y_2763_;
goto v___jp_2771_;
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
lean_dec(v_a_2770_);
lean_dec(v_a_2768_);
lean_dec(v___x_2766_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
lean_dec_ref(v_a_2753_);
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2809_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2809_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2825_; 
lean_dec(v_a_2770_);
lean_dec(v_a_2768_);
lean_dec(v___x_2766_);
lean_dec(v_declName_2759_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
lean_dec_ref(v_a_2753_);
v_a_2818_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2820_ = v___x_2801_;
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2801_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
v___jp_2771_:
{
lean_object* v___x_2776_; 
lean_inc_ref(v_a_2753_);
lean_inc(v_a_2770_);
v___x_2776_ = l_Lean_Meta_isExprDefEq(v_a_2770_, v_a_2753_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2792_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2779_ = v___x_2776_;
v_isShared_2780_ = v_isSharedCheck_2792_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v___x_2776_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2792_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
uint8_t v___x_2781_; 
v___x_2781_ = lean_unbox(v_a_2777_);
lean_dec(v_a_2777_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; 
lean_del_object(v___x_2779_);
v___x_2782_ = l_Lean_Meta_Transport_mkEquiv(v_a_2770_, v_a_2753_, v___x_2766_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v___x_2782_, 1);
v___x_2784_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__1___closed__0));
v___x_2785_ = l_Lean_Name_mkStr3(v___x_2754_, v___x_2755_, v___x_2784_);
v___x_2786_ = lean_array_push(v___x_2756_, v_a_2768_);
v___x_2787_ = lean_array_push(v___x_2786_, v_a_2783_);
v___x_2788_ = l_Lean_Meta_mkAppM(v___x_2785_, v___x_2787_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
return v___x_2788_;
}
else
{
lean_dec(v_a_2768_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
return v___x_2782_;
}
}
else
{
lean_object* v___x_2790_; 
lean_dec(v_a_2770_);
lean_dec(v___x_2766_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
lean_dec_ref(v_a_2753_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 0, v_a_2768_);
v___x_2790_ = v___x_2779_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2768_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
lean_dec(v_a_2770_);
lean_dec(v_a_2768_);
lean_dec(v___x_2766_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
lean_dec_ref(v_a_2753_);
v_a_2793_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2776_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2776_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
}
else
{
lean_dec(v_a_2768_);
lean_dec(v___x_2766_);
lean_dec(v_declName_2759_);
lean_dec_ref(v_a_2757_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
lean_dec_ref(v_a_2753_);
return v___x_2769_;
}
}
else
{
lean_dec(v___x_2766_);
lean_dec(v_declName_2759_);
lean_dec_ref(v_a_2757_);
lean_dec_ref(v___x_2756_);
lean_dec_ref(v___x_2755_);
lean_dec_ref(v___x_2754_);
lean_dec_ref(v_a_2753_);
lean_dec_ref(v_a_2752_);
return v___x_2767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___boxed(lean_object* v_fuel_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v___x_2830_, lean_object* v___x_2831_, lean_object* v___x_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_declName_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
uint8_t v_a_32156__boxed_2841_; lean_object* v_res_2842_; 
v_a_32156__boxed_2841_ = lean_unbox(v_a_2834_);
v_res_2842_ = l_Lean_Meta_Transport_mkEquiv___lam__1(v_fuel_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v___x_2830_, v___x_2831_, v___x_2832_, v_a_2833_, v_a_32156__boxed_2841_, v_declName_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v_fuel_2826_);
return v_res_2842_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__1(void){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__0));
v___x_2845_ = l_Lean_stringToMessageData(v___x_2844_);
return v___x_2845_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__3(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__2));
v___x_2848_ = l_Lean_stringToMessageData(v___x_2847_);
return v___x_2848_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__4(void){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2849_ = lean_box(0);
v___x_2850_ = l_Lean_Meta_Transport_depthExceptionId;
v___x_2851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
lean_ctor_set(v___x_2851_, 1, v___x_2849_);
return v___x_2851_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__10(void){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2861_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2862_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__9));
v___x_2863_ = l_Lean_Name_append(v___x_2862_, v___x_2861_);
return v___x_2863_;
}
}
static double _init_l_Lean_Meta_Transport_mkEquiv___closed__11(void){
_start:
{
lean_object* v___x_2864_; double v___x_2865_; 
v___x_2864_ = lean_unsigned_to_nat(1000000000u);
v___x_2865_ = lean_float_of_nat(v___x_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv(lean_object* v_lhs_2866_, lean_object* v_rhs_2867_, lean_object* v_fuel_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0);
v___x_2875_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_lhs_2866_, v_a_2870_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_3394_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_2878_ = v___x_2875_;
v_isShared_2879_ = v_isSharedCheck_3394_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v___x_2875_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_3394_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2880_; 
v___x_2880_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_rhs_2867_, v_a_2870_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_toCold_2881_; lean_object* v_options_2882_; uint8_t v_hasTrace_2883_; 
v_toCold_2881_ = lean_ctor_get(v_a_2871_, 0);
v_options_2882_ = lean_ctor_get(v_toCold_2881_, 2);
v_hasTrace_2883_ = lean_ctor_get_uint8(v_options_2882_, sizeof(void*)*1);
if (v_hasTrace_2883_ == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2885_; 
lean_del_object(v___x_2878_);
v_a_2884_ = lean_ctor_get(v___x_2880_, 0);
lean_inc_n(v_a_2884_, 2);
lean_dec_ref_known(v___x_2880_, 1);
lean_inc(v_a_2876_);
v___x_2885_ = l_Lean_Meta_isExprDefEq(v_a_2876_, v_a_2884_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_3012_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_2888_ = v___x_2885_;
v_isShared_2889_ = v_isSharedCheck_3012_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2885_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_3012_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
uint8_t v___x_2890_; 
v___x_2890_ = lean_unbox(v_a_2886_);
if (v___x_2890_ == 0)
{
lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2891_ = lean_unsigned_to_nat(0u);
v___x_2892_ = lean_nat_dec_eq(v_fuel_2868_, v___x_2891_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_del_object(v___x_2888_);
v___x_2893_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2894_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_2895_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_2896_ = lean_unsigned_to_nat(2u);
v___x_2897_ = lean_mk_empty_array_with_capacity(v___x_2896_);
lean_inc(v_a_2876_);
lean_inc_ref(v___x_2897_);
v___x_2898_ = lean_array_push(v___x_2897_, v_a_2876_);
lean_inc(v_a_2884_);
lean_inc_ref(v___x_2898_);
v___x_2899_ = lean_array_push(v___x_2898_, v_a_2884_);
v___x_2900_ = l_Lean_Meta_mkAppM(v___x_2895_, v___x_2899_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v___f_2902_; lean_object* v___x_2903_; lean_object* v_env_2904_; lean_object* v___x_2905_; lean_object* v_ext_2906_; lean_object* v_toEnvExtension_2907_; lean_object* v_asyncMode_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc_n(v_a_2901_, 2);
lean_dec_ref_known(v___x_2900_, 1);
lean_inc(v_fuel_2868_);
v___f_2902_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2902_, 0, v_fuel_2868_);
lean_closure_set(v___f_2902_, 1, v_a_2901_);
v___x_2903_ = lean_st_ref_get(v_a_2872_);
v_env_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc_ref(v_env_2904_);
lean_dec(v___x_2903_);
v___x_2905_ = l_Lean_Meta_Transport_transportExt;
v_ext_2906_ = lean_ctor_get(v___x_2905_, 1);
v_toEnvExtension_2907_ = lean_ctor_get(v_ext_2906_, 0);
v_asyncMode_2908_ = lean_ctor_get(v_toEnvExtension_2907_, 2);
v___x_2909_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2874_, v___x_2905_, v_env_2904_, v_asyncMode_2908_);
lean_inc(v___x_2909_);
v___x_2910_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2909_, v_a_2901_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_object* v_a_2911_; lean_object* v___x_2912_; 
v_a_2911_ = lean_ctor_get(v___x_2910_, 0);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2910_, 1);
v___x_2912_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2911_, v___f_2902_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_2911_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2986_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2915_ = v___x_2912_;
v_isShared_2916_ = v_isSharedCheck_2986_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2912_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2986_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
if (lean_obj_tag(v_a_2913_) == 0)
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2981_; 
lean_del_object(v___x_2915_);
v_a_2917_ = lean_ctor_get(v_a_2913_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_a_2913_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2919_ = v_a_2913_;
v_isShared_2920_ = v_isSharedCheck_2981_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v_a_2913_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2981_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2921_; 
v___x_2921_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2923_; lean_object* v___x_2925_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2921_, 1);
v___x_2923_ = l_Lean_mkSort(v_a_2922_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 1);
lean_ctor_set(v___x_2919_, 0, v___x_2923_);
v___x_2925_ = v___x_2919_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2923_);
v___x_2925_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
uint8_t v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2926_ = 0;
v___x_2927_ = lean_box(0);
v___x_2928_ = l_Lean_Meta_mkFreshExprMVar(v___x_2925_, v___x_2926_, v___x_2927_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v_a_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_a_2929_ = lean_ctor_get(v___x_2928_, 0);
lean_inc_n(v_a_2929_, 2);
lean_dec_ref_known(v___x_2928_, 1);
v___x_2930_ = lean_array_push(v___x_2898_, v_a_2929_);
v___x_2931_ = l_Lean_Meta_mkAppM(v___x_2895_, v___x_2930_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___f_2933_; lean_object* v___x_2934_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc_n(v_a_2932_, 2);
lean_dec_ref_known(v___x_2931_, 1);
lean_inc(v_a_2876_);
lean_inc(v_a_2884_);
v___f_2933_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_2933_, 0, v_fuel_2868_);
lean_closure_set(v___f_2933_, 1, v_a_2932_);
lean_closure_set(v___f_2933_, 2, v_a_2929_);
lean_closure_set(v___f_2933_, 3, v_a_2884_);
lean_closure_set(v___f_2933_, 4, v___x_2893_);
lean_closure_set(v___f_2933_, 5, v___x_2894_);
lean_closure_set(v___f_2933_, 6, v___x_2897_);
lean_closure_set(v___f_2933_, 7, v_a_2876_);
lean_closure_set(v___f_2933_, 8, v_a_2886_);
v___x_2934_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2909_, v_a_2932_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_a_2935_; lean_object* v___x_2936_; 
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_a_2935_);
lean_dec_ref_known(v___x_2934_, 1);
v___x_2936_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2935_, v___f_2933_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_2935_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2955_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2939_ = v___x_2936_;
v_isShared_2940_ = v_isSharedCheck_2955_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2936_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2955_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
if (lean_obj_tag(v_a_2937_) == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
lean_dec_ref_known(v_a_2937_, 1);
lean_del_object(v___x_2939_);
v___x_2941_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_2942_ = l_Lean_indentExpr(v_a_2884_);
v___x_2943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2941_);
lean_ctor_set(v___x_2943_, 1, v___x_2942_);
v___x_2944_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_2945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2943_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
v___x_2946_ = l_Lean_indentExpr(v_a_2876_);
v___x_2947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2945_);
lean_ctor_set(v___x_2947_, 1, v___x_2946_);
v___x_2948_ = l_Lean_MessageData_note(v_a_2917_);
v___x_2949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2947_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2949_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
return v___x_2950_;
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; 
lean_dec(v_a_2917_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
v_a_2951_ = lean_ctor_get(v_a_2937_, 0);
lean_inc(v_a_2951_);
lean_dec_ref_known(v_a_2937_, 1);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 0, v_a_2951_);
v___x_2953_ = v___x_2939_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
else
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
lean_dec(v_a_2917_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
v_a_2956_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2936_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2936_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
lean_dec_ref(v___f_2933_);
lean_dec(v_a_2917_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
v_a_2964_ = lean_ctor_get(v___x_2934_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2934_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2934_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2934_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
else
{
lean_dec(v_a_2929_);
lean_dec(v_a_2917_);
lean_dec(v___x_2909_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_2931_;
}
}
else
{
lean_dec(v_a_2917_);
lean_dec(v___x_2909_);
lean_dec_ref(v___x_2898_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_2928_;
}
}
}
else
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
lean_del_object(v___x_2919_);
lean_dec(v_a_2917_);
lean_dec(v___x_2909_);
lean_dec_ref(v___x_2898_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_2973_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2975_ = v___x_2921_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2921_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; 
lean_dec(v___x_2909_);
lean_dec_ref(v___x_2898_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_2982_ = lean_ctor_get(v_a_2913_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v_a_2913_, 1);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v_a_2982_);
v___x_2984_ = v___x_2915_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2982_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
lean_dec(v___x_2909_);
lean_dec_ref(v___x_2898_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_2987_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___x_2912_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___x_2912_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
else
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3002_; 
lean_dec(v___x_2909_);
lean_dec_ref(v___f_2902_);
lean_dec_ref(v___x_2898_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_2995_ = lean_ctor_get(v___x_2910_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2997_ = v___x_2910_;
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2910_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2998_ == 0)
{
v___x_3000_ = v___x_2997_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
}
else
{
lean_dec_ref(v___x_2898_);
lean_dec_ref(v___x_2897_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_2900_;
}
}
else
{
lean_object* v___x_3003_; lean_object* v___x_3005_; 
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___x_3003_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
if (v_isShared_2889_ == 0)
{
lean_ctor_set_tag(v___x_2888_, 1);
lean_ctor_set(v___x_2888_, 0, v___x_3003_);
v___x_3005_ = v___x_2888_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
else
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
lean_del_object(v___x_2888_);
lean_dec(v_a_2886_);
lean_dec(v_a_2884_);
lean_dec(v_fuel_2868_);
v___x_3007_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3008_ = lean_unsigned_to_nat(1u);
v___x_3009_ = lean_mk_empty_array_with_capacity(v___x_3008_);
v___x_3010_ = lean_array_push(v___x_3009_, v_a_2876_);
v___x_3011_ = l_Lean_Meta_mkAppM(v___x_3007_, v___x_3010_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
return v___x_3011_;
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
lean_dec(v_a_2884_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3013_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v___x_2885_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_2885_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3018_; 
if (v_isShared_3016_ == 0)
{
v___x_3018_ = v___x_3015_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3013_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3393_; 
v_a_3021_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3023_ = v___x_2880_;
v_isShared_3024_ = v_isSharedCheck_3393_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_2880_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3393_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v_inheritedTraceOptions_3025_; lean_object* v___f_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; uint8_t v___x_3030_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v_a_3034_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v_a_3049_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v_a_3056_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v_a_3069_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v_a_3081_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v_a_3086_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; 
v_inheritedTraceOptions_3025_ = lean_ctor_get(v_toCold_2881_, 11);
lean_inc(v_a_3021_);
lean_inc(v_a_2876_);
v___f_3026_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3026_, 0, v_a_2876_);
lean_closure_set(v___f_3026_, 1, v_a_3021_);
v___x_3027_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3028_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__7));
v___x_3029_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__10, &l_Lean_Meta_Transport_mkEquiv___closed__10_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__10);
v___x_3030_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3025_, v_options_2882_, v___x_3029_);
if (v___x_3030_ == 0)
{
lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___x_3255_ = l_Lean_trace_profiler;
v___x_3256_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_2882_, v___x_3255_);
if (v___x_3256_ == 0)
{
lean_object* v___x_3257_; 
lean_dec_ref(v___f_3026_);
lean_del_object(v___x_3023_);
lean_del_object(v___x_2878_);
lean_inc(v_a_3021_);
lean_inc(v_a_2876_);
v___x_3257_ = l_Lean_Meta_isExprDefEq(v_a_2876_, v_a_3021_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3384_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3260_ = v___x_3257_;
v_isShared_3261_ = v_isSharedCheck_3384_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3257_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3384_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
uint8_t v___x_3262_; 
v___x_3262_ = lean_unbox(v_a_3258_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3263_; uint8_t v___x_3264_; 
v___x_3263_ = lean_unsigned_to_nat(0u);
v___x_3264_ = lean_nat_dec_eq(v_fuel_2868_, v___x_3263_);
if (v___x_3264_ == 0)
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
lean_del_object(v___x_3260_);
v___x_3265_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3266_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3267_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3268_ = lean_unsigned_to_nat(2u);
v___x_3269_ = lean_mk_empty_array_with_capacity(v___x_3268_);
lean_inc(v_a_2876_);
lean_inc_ref(v___x_3269_);
v___x_3270_ = lean_array_push(v___x_3269_, v_a_2876_);
lean_inc(v_a_3021_);
lean_inc_ref(v___x_3270_);
v___x_3271_ = lean_array_push(v___x_3270_, v_a_3021_);
v___x_3272_ = l_Lean_Meta_mkAppM(v___x_3267_, v___x_3271_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v_a_3273_; lean_object* v___f_3274_; lean_object* v___x_3275_; lean_object* v_env_3276_; lean_object* v___x_3277_; lean_object* v_ext_3278_; lean_object* v_toEnvExtension_3279_; lean_object* v_asyncMode_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
lean_inc_n(v_a_3273_, 2);
lean_dec_ref_known(v___x_3272_, 1);
lean_inc(v_fuel_2868_);
v___f_3274_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3274_, 0, v_fuel_2868_);
lean_closure_set(v___f_3274_, 1, v_a_3273_);
v___x_3275_ = lean_st_ref_get(v_a_2872_);
v_env_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc_ref(v_env_3276_);
lean_dec(v___x_3275_);
v___x_3277_ = l_Lean_Meta_Transport_transportExt;
v_ext_3278_ = lean_ctor_get(v___x_3277_, 1);
v_toEnvExtension_3279_ = lean_ctor_get(v_ext_3278_, 0);
v_asyncMode_3280_ = lean_ctor_get(v_toEnvExtension_3279_, 2);
v___x_3281_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2874_, v___x_3277_, v_env_3276_, v_asyncMode_3280_);
lean_inc(v___x_3281_);
v___x_3282_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3281_, v_a_3273_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; lean_object* v___x_3284_; 
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3283_, v___f_3274_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_3283_);
if (lean_obj_tag(v___x_3284_) == 0)
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3358_; 
v_a_3285_ = lean_ctor_get(v___x_3284_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3287_ = v___x_3284_;
v_isShared_3288_ = v_isSharedCheck_3358_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3284_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3358_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
if (lean_obj_tag(v_a_3285_) == 0)
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3353_; 
lean_del_object(v___x_3287_);
v_a_3289_ = lean_ctor_get(v_a_3285_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_a_3285_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3291_ = v_a_3285_;
v_isShared_3292_ = v_isSharedCheck_3353_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v_a_3285_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3353_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; lean_object* v___x_3295_; lean_object* v___x_3297_; 
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3293_, 1);
v___x_3295_ = l_Lean_mkSort(v_a_3294_);
if (v_isShared_3292_ == 0)
{
lean_ctor_set_tag(v___x_3291_, 1);
lean_ctor_set(v___x_3291_, 0, v___x_3295_);
v___x_3297_ = v___x_3291_;
goto v_reusejp_3296_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3295_);
v___x_3297_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3296_;
}
v_reusejp_3296_:
{
uint8_t v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3298_ = 0;
v___x_3299_ = lean_box(0);
v___x_3300_ = l_Lean_Meta_mkFreshExprMVar(v___x_3297_, v___x_3298_, v___x_3299_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc_n(v_a_3301_, 2);
lean_dec_ref_known(v___x_3300_, 1);
v___x_3302_ = lean_array_push(v___x_3270_, v_a_3301_);
v___x_3303_ = l_Lean_Meta_mkAppM(v___x_3267_, v___x_3302_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v_a_3304_; lean_object* v___f_3305_; lean_object* v___x_3306_; 
v_a_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc_n(v_a_3304_, 2);
lean_dec_ref_known(v___x_3303_, 1);
lean_inc(v_a_2876_);
lean_inc(v_a_3021_);
v___f_3305_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_3305_, 0, v_fuel_2868_);
lean_closure_set(v___f_3305_, 1, v_a_3304_);
lean_closure_set(v___f_3305_, 2, v_a_3301_);
lean_closure_set(v___f_3305_, 3, v_a_3021_);
lean_closure_set(v___f_3305_, 4, v___x_3265_);
lean_closure_set(v___f_3305_, 5, v___x_3266_);
lean_closure_set(v___f_3305_, 6, v___x_3269_);
lean_closure_set(v___f_3305_, 7, v_a_2876_);
lean_closure_set(v___f_3305_, 8, v_a_3258_);
v___x_3306_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3281_, v_a_3304_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3308_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3307_, v___f_3305_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_3307_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3327_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3327_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3327_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
if (lean_obj_tag(v_a_3309_) == 0)
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
lean_dec_ref_known(v_a_3309_, 1);
lean_del_object(v___x_3311_);
v___x_3313_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3314_ = l_Lean_indentExpr(v_a_3021_);
v___x_3315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3313_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3315_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = l_Lean_indentExpr(v_a_2876_);
v___x_3319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3317_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
v___x_3320_ = l_Lean_MessageData_note(v_a_3289_);
v___x_3321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3319_);
lean_ctor_set(v___x_3321_, 1, v___x_3320_);
v___x_3322_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3321_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
return v___x_3322_;
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3325_; 
lean_dec(v_a_3289_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3323_ = lean_ctor_get(v_a_3309_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v_a_3309_, 1);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v_a_3323_);
v___x_3325_ = v___x_3311_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3323_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
else
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3335_; 
lean_dec(v_a_3289_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3328_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3330_ = v___x_3308_;
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3308_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___x_3333_; 
if (v_isShared_3331_ == 0)
{
v___x_3333_ = v___x_3330_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3328_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
else
{
lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3343_; 
lean_dec_ref(v___f_3305_);
lean_dec(v_a_3289_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3336_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3338_ = v___x_3306_;
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v___x_3306_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3341_; 
if (v_isShared_3339_ == 0)
{
v___x_3341_ = v___x_3338_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3336_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
else
{
lean_dec(v_a_3301_);
lean_dec(v_a_3289_);
lean_dec(v___x_3281_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_3303_;
}
}
else
{
lean_dec(v_a_3289_);
lean_dec(v___x_3281_);
lean_dec_ref(v___x_3270_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_3300_;
}
}
}
else
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3352_; 
lean_del_object(v___x_3291_);
lean_dec(v_a_3289_);
lean_dec(v___x_3281_);
lean_dec_ref(v___x_3270_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3345_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3347_ = v___x_3293_;
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v___x_3293_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
}
}
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3356_; 
lean_dec(v___x_3281_);
lean_dec_ref(v___x_3270_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3354_ = lean_ctor_get(v_a_3285_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v_a_3285_, 1);
if (v_isShared_3288_ == 0)
{
lean_ctor_set(v___x_3287_, 0, v_a_3354_);
v___x_3356_ = v___x_3287_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3354_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec(v___x_3281_);
lean_dec_ref(v___x_3270_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3359_ = lean_ctor_get(v___x_3284_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3284_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3284_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
else
{
lean_object* v_a_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3374_; 
lean_dec(v___x_3281_);
lean_dec_ref(v___f_3274_);
lean_dec_ref(v___x_3270_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3367_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3369_ = v___x_3282_;
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_a_3367_);
lean_dec(v___x_3282_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
lean_object* v___x_3372_; 
if (v_isShared_3370_ == 0)
{
v___x_3372_ = v___x_3369_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_a_3367_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
else
{
lean_dec_ref(v___x_3270_);
lean_dec_ref(v___x_3269_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_3272_;
}
}
else
{
lean_object* v___x_3375_; lean_object* v___x_3377_; 
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___x_3375_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
if (v_isShared_3261_ == 0)
{
lean_ctor_set_tag(v___x_3260_, 1);
lean_ctor_set(v___x_3260_, 0, v___x_3375_);
v___x_3377_ = v___x_3260_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v___x_3375_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
else
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
lean_del_object(v___x_3260_);
lean_dec(v_a_3258_);
lean_dec(v_a_3021_);
lean_dec(v_fuel_2868_);
v___x_3379_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3380_ = lean_unsigned_to_nat(1u);
v___x_3381_ = lean_mk_empty_array_with_capacity(v___x_3380_);
v___x_3382_ = lean_array_push(v___x_3381_, v_a_2876_);
v___x_3383_ = l_Lean_Meta_mkAppM(v___x_3379_, v___x_3382_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
return v___x_3383_;
}
}
}
else
{
lean_object* v_a_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3392_; 
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3385_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3392_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3392_ == 0)
{
v___x_3387_ = v___x_3257_;
v_isShared_3388_ = v_isSharedCheck_3392_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_a_3385_);
lean_dec(v___x_3257_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3392_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3390_; 
if (v_isShared_3388_ == 0)
{
v___x_3390_ = v___x_3387_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v_a_3385_);
v___x_3390_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
return v___x_3390_;
}
}
}
}
else
{
goto v___jp_3094_;
}
}
else
{
goto v___jp_3094_;
}
v___jp_3031_:
{
lean_object* v___x_3035_; double v___x_3036_; double v___x_3037_; double v___x_3038_; double v___x_3039_; double v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3035_ = lean_io_mono_nanos_now();
v___x_3036_ = lean_float_of_nat(v___y_3033_);
v___x_3037_ = lean_float_once(&l_Lean_Meta_Transport_mkEquiv___closed__11, &l_Lean_Meta_Transport_mkEquiv___closed__11_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__11);
v___x_3038_ = lean_float_div(v___x_3036_, v___x_3037_);
v___x_3039_ = lean_float_of_nat(v___x_3035_);
v___x_3040_ = lean_float_div(v___x_3039_, v___x_3037_);
v___x_3041_ = lean_box_float(v___x_3038_);
v___x_3042_ = lean_box_float(v___x_3040_);
v___x_3043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3041_);
lean_ctor_set(v___x_3043_, 1, v___x_3042_);
v___x_3044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3044_, 0, v_a_3034_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_3027_, v_hasTrace_2883_, v___x_3028_, v_options_2882_, v___x_3030_, v___y_3032_, v___f_3026_, v___x_3044_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
return v___x_3045_;
}
v___jp_3046_:
{
lean_object* v___x_3051_; 
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 0, v_a_3049_);
v___x_3051_ = v___x_3023_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3049_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
v___y_3032_ = v___y_3047_;
v___y_3033_ = v___y_3048_;
v_a_3034_ = v___x_3051_;
goto v___jp_3031_;
}
}
v___jp_3053_:
{
lean_object* v___x_3058_; 
if (v_isShared_2879_ == 0)
{
lean_ctor_set_tag(v___x_2878_, 1);
lean_ctor_set(v___x_2878_, 0, v_a_3056_);
v___x_3058_ = v___x_2878_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3056_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
v___y_3032_ = v___y_3054_;
v___y_3033_ = v___y_3055_;
v_a_3034_ = v___x_3058_;
goto v___jp_3031_;
}
}
v___jp_3060_:
{
if (lean_obj_tag(v___y_3063_) == 0)
{
lean_object* v_a_3064_; 
lean_del_object(v___x_3023_);
v_a_3064_ = lean_ctor_get(v___y_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___y_3063_, 1);
v___y_3054_ = v___y_3061_;
v___y_3055_ = v___y_3062_;
v_a_3056_ = v_a_3064_;
goto v___jp_3053_;
}
else
{
lean_object* v_a_3065_; 
lean_del_object(v___x_2878_);
v_a_3065_ = lean_ctor_get(v___y_3063_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___y_3063_, 1);
v___y_3047_ = v___y_3061_;
v___y_3048_ = v___y_3062_;
v_a_3049_ = v_a_3065_;
goto v___jp_3046_;
}
}
v___jp_3066_:
{
lean_object* v___x_3070_; double v___x_3071_; double v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3070_ = lean_io_get_num_heartbeats();
v___x_3071_ = lean_float_of_nat(v___y_3068_);
v___x_3072_ = lean_float_of_nat(v___x_3070_);
v___x_3073_ = lean_box_float(v___x_3071_);
v___x_3074_ = lean_box_float(v___x_3072_);
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3073_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v_a_3069_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_3027_, v_hasTrace_2883_, v___x_3028_, v_options_2882_, v___x_3030_, v___y_3067_, v___f_3026_, v___x_3076_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
return v___x_3077_;
}
v___jp_3078_:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_a_3081_);
v___y_3067_ = v___y_3079_;
v___y_3068_ = v___y_3080_;
v_a_3069_ = v___x_3082_;
goto v___jp_3066_;
}
v___jp_3083_:
{
lean_object* v___x_3087_; 
v___x_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3087_, 0, v_a_3086_);
v___y_3067_ = v___y_3084_;
v___y_3068_ = v___y_3085_;
v_a_3069_ = v___x_3087_;
goto v___jp_3066_;
}
v___jp_3088_:
{
if (lean_obj_tag(v___y_3091_) == 0)
{
lean_object* v_a_3092_; 
v_a_3092_ = lean_ctor_get(v___y_3091_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___y_3091_, 1);
v___y_3084_ = v___y_3089_;
v___y_3085_ = v___y_3090_;
v_a_3086_ = v_a_3092_;
goto v___jp_3083_;
}
else
{
lean_object* v_a_3093_; 
v_a_3093_ = lean_ctor_get(v___y_3091_, 0);
lean_inc(v_a_3093_);
lean_dec_ref_known(v___y_3091_, 1);
v___y_3079_ = v___y_3089_;
v___y_3080_ = v___y_3090_;
v_a_3081_ = v_a_3093_;
goto v___jp_3078_;
}
}
v___jp_3094_:
{
lean_object* v___x_3095_; 
v___x_3095_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v_a_2872_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_a_3096_);
lean_dec_ref_known(v___x_3095_, 1);
v___x_3097_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3098_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_2882_, v___x_3097_);
if (v___x_3098_ == 0)
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3099_ = lean_io_mono_nanos_now();
lean_inc(v_a_3021_);
lean_inc(v_a_2876_);
v___x_3100_ = l_Lean_Meta_isExprDefEq(v_a_2876_, v_a_3021_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; uint8_t v___x_3102_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3101_);
lean_dec_ref_known(v___x_3100_, 1);
v___x_3102_ = lean_unbox(v_a_3101_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3103_; uint8_t v___x_3104_; 
v___x_3103_ = lean_unsigned_to_nat(0u);
v___x_3104_ = lean_nat_dec_eq(v_fuel_2868_, v___x_3103_);
if (v___x_3104_ == 0)
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3105_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3106_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3107_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3108_ = lean_unsigned_to_nat(2u);
v___x_3109_ = lean_mk_empty_array_with_capacity(v___x_3108_);
lean_inc(v_a_2876_);
lean_inc_ref(v___x_3109_);
v___x_3110_ = lean_array_push(v___x_3109_, v_a_2876_);
lean_inc(v_a_3021_);
lean_inc_ref(v___x_3110_);
v___x_3111_ = lean_array_push(v___x_3110_, v_a_3021_);
v___x_3112_ = l_Lean_Meta_mkAppM(v___x_3107_, v___x_3111_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; lean_object* v___f_3114_; lean_object* v___x_3115_; lean_object* v_env_3116_; lean_object* v___x_3117_; lean_object* v_ext_3118_; lean_object* v_toEnvExtension_3119_; lean_object* v_asyncMode_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc_n(v_a_3113_, 2);
lean_dec_ref_known(v___x_3112_, 1);
lean_inc(v_fuel_2868_);
v___f_3114_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3114_, 0, v_fuel_2868_);
lean_closure_set(v___f_3114_, 1, v_a_3113_);
v___x_3115_ = lean_st_ref_get(v_a_2872_);
v_env_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc_ref(v_env_3116_);
lean_dec(v___x_3115_);
v___x_3117_ = l_Lean_Meta_Transport_transportExt;
v_ext_3118_ = lean_ctor_get(v___x_3117_, 1);
v_toEnvExtension_3119_ = lean_ctor_get(v_ext_3118_, 0);
v_asyncMode_3120_ = lean_ctor_get(v_toEnvExtension_3119_, 2);
v___x_3121_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2874_, v___x_3117_, v_env_3116_, v_asyncMode_3120_);
lean_inc(v___x_3121_);
v___x_3122_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3121_, v_a_3113_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3122_) == 0)
{
lean_object* v_a_3123_; lean_object* v___x_3124_; 
v_a_3123_ = lean_ctor_get(v___x_3122_, 0);
lean_inc(v_a_3123_);
lean_dec_ref_known(v___x_3122_, 1);
v___x_3124_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3123_, v___f_3114_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_3123_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3125_);
lean_dec_ref_known(v___x_3124_, 1);
if (lean_obj_tag(v_a_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3127_; 
v_a_3126_ = lean_ctor_get(v_a_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v_a_3125_, 1);
v___x_3127_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3161_; 
v_a_3128_ = lean_ctor_get(v___x_3127_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3130_ = v___x_3127_;
v_isShared_3131_ = v_isSharedCheck_3161_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3127_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3161_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; lean_object* v___x_3134_; 
v___x_3132_ = l_Lean_mkSort(v_a_3128_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 1);
lean_ctor_set(v___x_3130_, 0, v___x_3132_);
v___x_3134_ = v___x_3130_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
uint8_t v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3135_ = 0;
v___x_3136_ = lean_box(0);
v___x_3137_ = l_Lean_Meta_mkFreshExprMVar(v___x_3134_, v___x_3135_, v___x_3136_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc_n(v_a_3138_, 2);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3139_ = lean_array_push(v___x_3110_, v_a_3138_);
v___x_3140_ = l_Lean_Meta_mkAppM(v___x_3107_, v___x_3139_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___f_3142_; lean_object* v___x_3143_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc_n(v_a_3141_, 2);
lean_dec_ref_known(v___x_3140_, 1);
lean_inc(v_a_2876_);
lean_inc(v_a_3021_);
v___f_3142_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_3142_, 0, v_fuel_2868_);
lean_closure_set(v___f_3142_, 1, v_a_3141_);
lean_closure_set(v___f_3142_, 2, v_a_3138_);
lean_closure_set(v___f_3142_, 3, v_a_3021_);
lean_closure_set(v___f_3142_, 4, v___x_3105_);
lean_closure_set(v___f_3142_, 5, v___x_3106_);
lean_closure_set(v___f_3142_, 6, v___x_3109_);
lean_closure_set(v___f_3142_, 7, v_a_2876_);
lean_closure_set(v___f_3142_, 8, v_a_3101_);
v___x_3143_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3121_, v_a_3141_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; lean_object* v___x_3145_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v___x_3145_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3144_, v___f_3142_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_3144_);
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_a_3146_; 
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3145_, 1);
if (lean_obj_tag(v_a_3146_) == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
lean_dec_ref_known(v_a_3146_, 1);
v___x_3147_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3148_ = l_Lean_indentExpr(v_a_3021_);
v___x_3149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
v___x_3150_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3149_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = l_Lean_indentExpr(v_a_2876_);
v___x_3153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3151_);
lean_ctor_set(v___x_3153_, 1, v___x_3152_);
v___x_3154_ = l_Lean_MessageData_note(v_a_3126_);
v___x_3155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3153_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3155_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
v___y_3061_ = v_a_3096_;
v___y_3062_ = v___x_3099_;
v___y_3063_ = v___x_3156_;
goto v___jp_3060_;
}
else
{
lean_object* v_a_3157_; 
lean_dec(v_a_3126_);
lean_del_object(v___x_3023_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3157_ = lean_ctor_get(v_a_3146_, 0);
lean_inc(v_a_3157_);
lean_dec_ref_known(v_a_3146_, 1);
v___y_3054_ = v_a_3096_;
v___y_3055_ = v___x_3099_;
v_a_3056_ = v_a_3157_;
goto v___jp_3053_;
}
}
else
{
lean_object* v_a_3158_; 
lean_dec(v_a_3126_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
v_a_3158_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3158_);
lean_dec_ref_known(v___x_3145_, 1);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v_a_3158_;
goto v___jp_3046_;
}
}
else
{
lean_object* v_a_3159_; 
lean_dec_ref(v___f_3142_);
lean_dec(v_a_3126_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
v_a_3159_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3159_);
lean_dec_ref_known(v___x_3143_, 1);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v_a_3159_;
goto v___jp_3046_;
}
}
else
{
lean_dec(v_a_3138_);
lean_dec(v_a_3126_);
lean_dec(v___x_3121_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___y_3061_ = v_a_3096_;
v___y_3062_ = v___x_3099_;
v___y_3063_ = v___x_3140_;
goto v___jp_3060_;
}
}
else
{
lean_dec(v_a_3126_);
lean_dec(v___x_3121_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___y_3061_ = v_a_3096_;
v___y_3062_ = v___x_3099_;
v___y_3063_ = v___x_3137_;
goto v___jp_3060_;
}
}
}
}
else
{
lean_object* v_a_3162_; 
lean_dec(v_a_3126_);
lean_dec(v___x_3121_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3162_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3127_, 1);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v_a_3162_;
goto v___jp_3046_;
}
}
else
{
lean_object* v_a_3163_; 
lean_dec(v___x_3121_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_del_object(v___x_3023_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3163_ = lean_ctor_get(v_a_3125_, 0);
lean_inc(v_a_3163_);
lean_dec_ref_known(v_a_3125_, 1);
v___y_3054_ = v_a_3096_;
v___y_3055_ = v___x_3099_;
v_a_3056_ = v_a_3163_;
goto v___jp_3053_;
}
}
else
{
lean_object* v_a_3164_; 
lean_dec(v___x_3121_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3164_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3124_, 1);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v_a_3164_;
goto v___jp_3046_;
}
}
else
{
lean_object* v_a_3165_; 
lean_dec(v___x_3121_);
lean_dec_ref(v___f_3114_);
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3165_ = lean_ctor_get(v___x_3122_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3122_, 1);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v_a_3165_;
goto v___jp_3046_;
}
}
else
{
lean_dec_ref(v___x_3110_);
lean_dec_ref(v___x_3109_);
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___y_3061_ = v_a_3096_;
v___y_3062_ = v___x_3099_;
v___y_3063_ = v___x_3112_;
goto v___jp_3060_;
}
}
else
{
lean_object* v___x_3166_; 
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___x_3166_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v___x_3166_;
goto v___jp_3046_;
}
}
else
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
lean_dec(v_a_3101_);
lean_dec(v_a_3021_);
lean_dec(v_fuel_2868_);
v___x_3167_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3168_ = lean_unsigned_to_nat(1u);
v___x_3169_ = lean_mk_empty_array_with_capacity(v___x_3168_);
v___x_3170_ = lean_array_push(v___x_3169_, v_a_2876_);
v___x_3171_ = l_Lean_Meta_mkAppM(v___x_3167_, v___x_3170_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
v___y_3061_ = v_a_3096_;
v___y_3062_ = v___x_3099_;
v___y_3063_ = v___x_3171_;
goto v___jp_3060_;
}
}
else
{
lean_object* v_a_3172_; 
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3172_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3172_);
lean_dec_ref_known(v___x_3100_, 1);
v___y_3047_ = v_a_3096_;
v___y_3048_ = v___x_3099_;
v_a_3049_ = v_a_3172_;
goto v___jp_3046_;
}
}
else
{
lean_object* v___x_3173_; lean_object* v___x_3174_; 
lean_del_object(v___x_3023_);
lean_del_object(v___x_2878_);
v___x_3173_ = lean_io_get_num_heartbeats();
lean_inc(v_a_3021_);
lean_inc(v_a_2876_);
v___x_3174_ = l_Lean_Meta_isExprDefEq(v_a_2876_, v_a_3021_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; uint8_t v___x_3176_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
lean_inc(v_a_3175_);
lean_dec_ref_known(v___x_3174_, 1);
v___x_3176_ = lean_unbox(v_a_3175_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; uint8_t v___x_3178_; 
v___x_3177_ = lean_unsigned_to_nat(0u);
v___x_3178_ = lean_nat_dec_eq(v_fuel_2868_, v___x_3177_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3179_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3180_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3181_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3182_ = lean_unsigned_to_nat(2u);
v___x_3183_ = lean_mk_empty_array_with_capacity(v___x_3182_);
lean_inc(v_a_2876_);
lean_inc_ref(v___x_3183_);
v___x_3184_ = lean_array_push(v___x_3183_, v_a_2876_);
lean_inc(v_a_3021_);
lean_inc_ref(v___x_3184_);
v___x_3185_ = lean_array_push(v___x_3184_, v_a_3021_);
v___x_3186_ = l_Lean_Meta_mkAppM(v___x_3181_, v___x_3185_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___f_3188_; lean_object* v___x_3189_; lean_object* v_env_3190_; lean_object* v___x_3191_; lean_object* v_ext_3192_; lean_object* v_toEnvExtension_3193_; lean_object* v_asyncMode_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc_n(v_a_3187_, 2);
lean_dec_ref_known(v___x_3186_, 1);
lean_inc(v_fuel_2868_);
v___f_3188_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3188_, 0, v_fuel_2868_);
lean_closure_set(v___f_3188_, 1, v_a_3187_);
v___x_3189_ = lean_st_ref_get(v_a_2872_);
v_env_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc_ref(v_env_3190_);
lean_dec(v___x_3189_);
v___x_3191_ = l_Lean_Meta_Transport_transportExt;
v_ext_3192_ = lean_ctor_get(v___x_3191_, 1);
v_toEnvExtension_3193_ = lean_ctor_get(v_ext_3192_, 0);
v_asyncMode_3194_ = lean_ctor_get(v_toEnvExtension_3193_, 2);
v___x_3195_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2874_, v___x_3191_, v_env_3190_, v_asyncMode_3194_);
lean_inc(v___x_3195_);
v___x_3196_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3195_, v_a_3187_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_a_3197_; lean_object* v___x_3198_; 
v_a_3197_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3197_);
lean_dec_ref_known(v___x_3196_, 1);
v___x_3198_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3197_, v___f_3188_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_3197_);
if (lean_obj_tag(v___x_3198_) == 0)
{
lean_object* v_a_3199_; 
v_a_3199_ = lean_ctor_get(v___x_3198_, 0);
lean_inc(v_a_3199_);
lean_dec_ref_known(v___x_3198_, 1);
if (lean_obj_tag(v_a_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3201_; 
v_a_3200_ = lean_ctor_get(v_a_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v_a_3199_, 1);
v___x_3201_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3235_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3204_ = v___x_3201_;
v_isShared_3205_ = v_isSharedCheck_3235_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3201_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3235_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3206_; lean_object* v___x_3208_; 
v___x_3206_ = l_Lean_mkSort(v_a_3202_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set_tag(v___x_3204_, 1);
lean_ctor_set(v___x_3204_, 0, v___x_3206_);
v___x_3208_ = v___x_3204_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
uint8_t v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3209_ = 0;
v___x_3210_ = lean_box(0);
v___x_3211_ = l_Lean_Meta_mkFreshExprMVar(v___x_3208_, v___x_3209_, v___x_3210_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
lean_inc_n(v_a_3212_, 2);
lean_dec_ref_known(v___x_3211_, 1);
v___x_3213_ = lean_array_push(v___x_3184_, v_a_3212_);
v___x_3214_ = l_Lean_Meta_mkAppM(v___x_3181_, v___x_3213_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; lean_object* v___f_3216_; lean_object* v___x_3217_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc_n(v_a_3215_, 2);
lean_dec_ref_known(v___x_3214_, 1);
lean_inc(v_a_2876_);
lean_inc(v_a_3021_);
v___f_3216_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_3216_, 0, v_fuel_2868_);
lean_closure_set(v___f_3216_, 1, v_a_3215_);
lean_closure_set(v___f_3216_, 2, v_a_3212_);
lean_closure_set(v___f_3216_, 3, v_a_3021_);
lean_closure_set(v___f_3216_, 4, v___x_3179_);
lean_closure_set(v___f_3216_, 5, v___x_3180_);
lean_closure_set(v___f_3216_, 6, v___x_3183_);
lean_closure_set(v___f_3216_, 7, v_a_2876_);
lean_closure_set(v___f_3216_, 8, v_a_3175_);
v___x_3217_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3195_, v_a_3215_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3219_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v___x_3219_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3218_, v___f_3216_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_3218_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
if (lean_obj_tag(v_a_3220_) == 0)
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
lean_dec_ref_known(v_a_3220_, 1);
v___x_3221_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3222_ = l_Lean_indentExpr(v_a_3021_);
v___x_3223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3221_);
lean_ctor_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3223_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = l_Lean_indentExpr(v_a_2876_);
v___x_3227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3225_);
lean_ctor_set(v___x_3227_, 1, v___x_3226_);
v___x_3228_ = l_Lean_MessageData_note(v_a_3200_);
v___x_3229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3227_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3229_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
v___y_3089_ = v_a_3096_;
v___y_3090_ = v___x_3173_;
v___y_3091_ = v___x_3230_;
goto v___jp_3088_;
}
else
{
lean_object* v_a_3231_; 
lean_dec(v_a_3200_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3231_ = lean_ctor_get(v_a_3220_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v_a_3220_, 1);
v___y_3084_ = v_a_3096_;
v___y_3085_ = v___x_3173_;
v_a_3086_ = v_a_3231_;
goto v___jp_3083_;
}
}
else
{
lean_object* v_a_3232_; 
lean_dec(v_a_3200_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3232_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3219_, 1);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v_a_3232_;
goto v___jp_3078_;
}
}
else
{
lean_object* v_a_3233_; 
lean_dec_ref(v___f_3216_);
lean_dec(v_a_3200_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
v_a_3233_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3217_, 1);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v_a_3233_;
goto v___jp_3078_;
}
}
else
{
lean_dec(v_a_3212_);
lean_dec(v_a_3200_);
lean_dec(v___x_3195_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___y_3089_ = v_a_3096_;
v___y_3090_ = v___x_3173_;
v___y_3091_ = v___x_3214_;
goto v___jp_3088_;
}
}
else
{
lean_dec(v_a_3200_);
lean_dec(v___x_3195_);
lean_dec_ref(v___x_3184_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___y_3089_ = v_a_3096_;
v___y_3090_ = v___x_3173_;
v___y_3091_ = v___x_3211_;
goto v___jp_3088_;
}
}
}
}
else
{
lean_object* v_a_3236_; 
lean_dec(v_a_3200_);
lean_dec(v___x_3195_);
lean_dec_ref(v___x_3184_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3236_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3201_, 1);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v_a_3236_;
goto v___jp_3078_;
}
}
else
{
lean_object* v_a_3237_; 
lean_dec(v___x_3195_);
lean_dec_ref(v___x_3184_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3237_ = lean_ctor_get(v_a_3199_, 0);
lean_inc(v_a_3237_);
lean_dec_ref_known(v_a_3199_, 1);
v___y_3084_ = v_a_3096_;
v___y_3085_ = v___x_3173_;
v_a_3086_ = v_a_3237_;
goto v___jp_3083_;
}
}
else
{
lean_object* v_a_3238_; 
lean_dec(v___x_3195_);
lean_dec_ref(v___x_3184_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3238_ = lean_ctor_get(v___x_3198_, 0);
lean_inc(v_a_3238_);
lean_dec_ref_known(v___x_3198_, 1);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v_a_3238_;
goto v___jp_3078_;
}
}
else
{
lean_object* v_a_3239_; 
lean_dec(v___x_3195_);
lean_dec_ref(v___f_3188_);
lean_dec_ref(v___x_3184_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3239_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3196_, 1);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v_a_3239_;
goto v___jp_3078_;
}
}
else
{
lean_dec_ref(v___x_3184_);
lean_dec_ref(v___x_3183_);
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___y_3089_ = v_a_3096_;
v___y_3090_ = v___x_3173_;
v___y_3091_ = v___x_3186_;
goto v___jp_3088_;
}
}
else
{
lean_object* v___x_3240_; 
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v___x_3240_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v___x_3240_;
goto v___jp_3078_;
}
}
else
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
lean_dec(v_a_3175_);
lean_dec(v_a_3021_);
lean_dec(v_fuel_2868_);
v___x_3241_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3242_ = lean_unsigned_to_nat(1u);
v___x_3243_ = lean_mk_empty_array_with_capacity(v___x_3242_);
v___x_3244_ = lean_array_push(v___x_3243_, v_a_2876_);
v___x_3245_ = l_Lean_Meta_mkAppM(v___x_3241_, v___x_3244_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
v___y_3089_ = v_a_3096_;
v___y_3090_ = v___x_3173_;
v___y_3091_ = v___x_3245_;
goto v___jp_3088_;
}
}
else
{
lean_object* v_a_3246_; 
lean_dec(v_a_3021_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3246_ = lean_ctor_get(v___x_3174_, 0);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___x_3174_, 1);
v___y_3079_ = v_a_3096_;
v___y_3080_ = v___x_3173_;
v_a_3081_ = v_a_3246_;
goto v___jp_3078_;
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec_ref(v___f_3026_);
lean_del_object(v___x_3023_);
lean_dec(v_a_3021_);
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
v_a_3247_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3095_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3095_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2878_);
lean_dec(v_a_2876_);
lean_dec(v_fuel_2868_);
return v___x_2880_;
}
}
}
else
{
lean_dec(v_fuel_2868_);
lean_dec_ref(v_rhs_2867_);
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(lean_object* v_fuel_3395_, uint8_t v___x_3396_, uint8_t v___x_3397_, lean_object* v_xs_3398_, lean_object* v_body_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3405_ = l_Lean_Expr_appFn_x21(v_body_3399_);
v___x_3406_ = l_Lean_Expr_appArg_x21(v___x_3405_);
lean_dec_ref(v___x_3405_);
v___x_3407_ = l_Lean_Expr_appArg_x21(v_body_3399_);
v___x_3408_ = l_Lean_Meta_Transport_mkEquiv(v___x_3406_, v___x_3407_, v_fuel_3395_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; uint8_t v___x_3410_; lean_object* v___x_3411_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
lean_inc(v_a_3409_);
lean_dec_ref_known(v___x_3408_, 1);
v___x_3410_ = 1;
v___x_3411_ = l_Lean_Meta_mkLambdaFVars(v_xs_3398_, v_a_3409_, v___x_3396_, v___x_3397_, v___x_3396_, v___x_3397_, v___x_3410_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
return v___x_3411_;
}
else
{
return v___x_3408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed(lean_object* v_fuel_3412_, lean_object* v___x_3413_, lean_object* v___x_3414_, lean_object* v_xs_3415_, lean_object* v_body_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_){
_start:
{
uint8_t v___x_32130__boxed_3422_; uint8_t v___x_32131__boxed_3423_; lean_object* v_res_3424_; 
v___x_32130__boxed_3422_ = lean_unbox(v___x_3413_);
v___x_32131__boxed_3423_ = lean_unbox(v___x_3414_);
v_res_3424_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(v_fuel_3412_, v___x_32130__boxed_3422_, v___x_32131__boxed_3423_, v_xs_3415_, v_body_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec(v___y_3418_);
lean_dec_ref(v___y_3417_);
lean_dec_ref(v_body_3416_);
lean_dec_ref(v_xs_3415_);
return v_res_3424_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3429_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2));
v___x_3430_ = l_Lean_stringToMessageData(v___x_3429_);
return v___x_3430_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5(void){
_start:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3432_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__4));
v___x_3433_ = l_Lean_stringToMessageData(v___x_3432_);
return v___x_3433_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7(void){
_start:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; 
v___x_3435_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__6));
v___x_3436_ = l_Lean_stringToMessageData(v___x_3435_);
return v___x_3436_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9(void){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__8));
v___x_3439_ = l_Lean_stringToMessageData(v___x_3438_);
return v___x_3439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(lean_object* v_fuel_3440_, lean_object* v_declName_3441_, lean_object* v_as_3442_, size_t v_sz_3443_, size_t v_i_3444_, lean_object* v_b_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_){
_start:
{
lean_object* v_a_3452_; uint8_t v___x_3456_; 
v___x_3456_ = lean_usize_dec_lt(v_i_3444_, v_sz_3443_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; 
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v___x_3457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3457_, 0, v_b_3445_);
return v___x_3457_;
}
else
{
lean_object* v_array_3458_; lean_object* v_start_3459_; lean_object* v_stop_3460_; uint8_t v___x_3461_; 
v_array_3458_ = lean_ctor_get(v_b_3445_, 0);
v_start_3459_ = lean_ctor_get(v_b_3445_, 1);
v_stop_3460_ = lean_ctor_get(v_b_3445_, 2);
v___x_3461_ = lean_nat_dec_lt(v_start_3459_, v_stop_3460_);
if (v___x_3461_ == 0)
{
lean_object* v___x_3462_; 
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v___x_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_b_3445_);
return v___x_3462_;
}
else
{
lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3643_; 
lean_inc(v_stop_3460_);
lean_inc(v_start_3459_);
lean_inc_ref(v_array_3458_);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_b_3445_);
if (v_isSharedCheck_3643_ == 0)
{
lean_object* v_unused_3644_; lean_object* v_unused_3645_; lean_object* v_unused_3646_; 
v_unused_3644_ = lean_ctor_get(v_b_3445_, 2);
lean_dec(v_unused_3644_);
v_unused_3645_ = lean_ctor_get(v_b_3445_, 1);
lean_dec(v_unused_3645_);
v_unused_3646_ = lean_ctor_get(v_b_3445_, 0);
lean_dec(v_unused_3646_);
v___x_3464_ = v_b_3445_;
v_isShared_3465_ = v_isSharedCheck_3643_;
goto v_resetjp_3463_;
}
else
{
lean_dec(v_b_3445_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3643_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3466_; lean_object* v_a_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3472_; 
v___x_3466_ = lean_box(0);
v_a_3467_ = lean_array_uget_borrowed(v_as_3442_, v_i_3444_);
v___x_3468_ = lean_array_fget(v_array_3458_, v_start_3459_);
v___x_3469_ = lean_unsigned_to_nat(1u);
v___x_3470_ = lean_nat_add(v_start_3459_, v___x_3469_);
lean_dec(v_start_3459_);
if (v_isShared_3465_ == 0)
{
lean_ctor_set(v___x_3464_, 1, v___x_3470_);
v___x_3472_ = v___x_3464_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_array_3458_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v___x_3470_);
lean_ctor_set(v_reuseFailAlloc_3642_, 2, v_stop_3460_);
v___x_3472_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3473_ = l_Lean_Expr_mvarId_x21(v_a_3467_);
v___x_3474_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v___x_3473_, v___y_3447_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; uint8_t v___x_3476_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3474_, 1);
v___x_3476_ = lean_unbox(v_a_3475_);
lean_dec(v_a_3475_);
if (v___x_3476_ == 0)
{
lean_object* v___x_3477_; 
lean_inc(v___x_3473_);
v___x_3477_ = l_Lean_MVarId_getDecl(v___x_3473_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; lean_object* v_userName_3479_; lean_object* v_type_3480_; lean_object* v___x_3481_; 
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3477_, 1);
v_userName_3479_ = lean_ctor_get(v_a_3478_, 0);
lean_inc(v_userName_3479_);
v_type_3480_ = lean_ctor_get(v_a_3478_, 2);
lean_inc_ref(v_type_3480_);
lean_dec(v_a_3478_);
v___x_3481_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_3480_, v___y_3447_);
if (lean_obj_tag(v___x_3481_) == 0)
{
lean_object* v_a_3482_; uint8_t v___x_3483_; uint8_t v___x_3484_; 
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
lean_inc(v_a_3482_);
lean_dec_ref_known(v___x_3481_, 1);
v___x_3483_ = lean_unbox(v___x_3468_);
lean_dec(v___x_3468_);
v___x_3484_ = l_Lean_BinderInfo_isInstImplicit(v___x_3483_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___f_3487_; lean_object* v___x_3488_; 
v___x_3485_ = lean_box(v___x_3484_);
v___x_3486_ = lean_box(v___x_3461_);
lean_inc(v_fuel_3440_);
v___f_3487_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3487_, 0, v_fuel_3440_);
lean_closure_set(v___f_3487_, 1, v___x_3485_);
lean_closure_set(v___f_3487_, 2, v___x_3486_);
lean_inc(v_a_3482_);
v___x_3488_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_3482_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_object* v_a_3489_; uint8_t v___x_3490_; 
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_a_3489_);
lean_dec_ref_known(v___x_3488_, 1);
v___x_3490_ = lean_unbox(v_a_3489_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3492_; uint8_t v___x_3493_; 
lean_dec_ref(v___f_3487_);
v___x_3491_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1));
v___x_3492_ = lean_unsigned_to_nat(3u);
v___x_3493_ = l_Lean_Expr_isAppOfArity(v_a_3482_, v___x_3491_, v___x_3492_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_dec(v_a_3482_);
lean_dec(v___x_3473_);
v___x_3494_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3);
v___x_3495_ = l_Lean_MessageData_ofName(v_userName_3479_);
v___x_3496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3494_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5);
v___x_3498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3496_);
lean_ctor_set(v___x_3498_, 1, v___x_3497_);
v___x_3499_ = lean_unbox(v_a_3489_);
lean_dec(v_a_3489_);
lean_inc(v_declName_3441_);
v___x_3500_ = l_Lean_MessageData_ofConstName(v_declName_3441_, v___x_3499_);
v___x_3501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3498_);
lean_ctor_set(v___x_3501_, 1, v___x_3500_);
v___x_3502_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_3503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3501_);
lean_ctor_set(v___x_3503_, 1, v___x_3502_);
v___x_3504_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3503_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_dec_ref_known(v___x_3504_, 1);
v_a_3452_ = v___x_3472_;
goto v___jp_3451_;
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3504_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
lean_dec(v_a_3489_);
v___x_3513_ = l_Lean_Expr_appFn_x21(v_a_3482_);
v___x_3514_ = l_Lean_Expr_appArg_x21(v___x_3513_);
lean_dec_ref(v___x_3513_);
v___x_3539_ = l_Lean_Expr_appArg_x21(v_a_3482_);
lean_inc_ref(v___x_3514_);
v___x_3540_ = l_Lean_Meta_isExprDefEq(v___x_3514_, v___x_3539_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v_a_3541_; uint8_t v___x_3542_; 
v_a_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3541_);
lean_dec_ref_known(v___x_3540_, 1);
v___x_3542_ = lean_unbox(v_a_3541_);
if (v___x_3542_ == 0)
{
lean_object* v___x_3543_; uint8_t v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3543_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_3544_ = lean_unbox(v_a_3541_);
lean_dec(v_a_3541_);
lean_inc(v_declName_3441_);
v___x_3545_ = l_Lean_MessageData_ofConstName(v_declName_3441_, v___x_3544_);
v___x_3546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3543_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v___x_3547_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7);
v___x_3548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3546_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = l_Lean_MessageData_ofName(v_userName_3479_);
v___x_3550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3548_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
v___x_3551_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9);
v___x_3552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3550_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
v___x_3553_ = l_Lean_indentExpr(v_a_3482_);
v___x_3554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3552_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v___x_3555_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3554_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_dec_ref_known(v___x_3555_, 1);
v___y_3516_ = v___y_3446_;
v___y_3517_ = v___y_3447_;
v___y_3518_ = v___y_3448_;
v___y_3519_ = v___y_3449_;
goto v___jp_3515_;
}
else
{
lean_object* v_a_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3563_; 
lean_dec_ref(v___x_3514_);
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3558_ = v___x_3555_;
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_a_3556_);
lean_dec(v___x_3555_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3561_; 
if (v_isShared_3559_ == 0)
{
v___x_3561_ = v___x_3558_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_a_3556_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
}
else
{
lean_dec(v_a_3541_);
lean_dec(v_a_3482_);
lean_dec(v_userName_3479_);
v___y_3516_ = v___y_3446_;
v___y_3517_ = v___y_3447_;
v___y_3518_ = v___y_3448_;
v___y_3519_ = v___y_3449_;
goto v___jp_3515_;
}
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
lean_dec_ref(v___x_3514_);
lean_dec(v_a_3482_);
lean_dec(v_userName_3479_);
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3564_ = lean_ctor_get(v___x_3540_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3540_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3540_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3540_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
v___jp_3515_:
{
lean_object* v___x_3520_; 
v___x_3520_ = l_Lean_Meta_mkEqRefl(v___x_3514_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; lean_object* v___x_3522_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3521_);
lean_dec_ref_known(v___x_3520_, 1);
v___x_3522_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3473_, v_a_3521_, v___y_3517_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_dec_ref_known(v___x_3522_, 1);
v_a_3452_ = v___x_3472_;
goto v___jp_3451_;
}
else
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3530_; 
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3525_ = v___x_3522_;
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3522_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3523_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
}
else
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3538_; 
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3531_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3533_ = v___x_3520_;
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3520_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3536_; 
if (v_isShared_3534_ == 0)
{
v___x_3536_ = v___x_3533_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_a_3531_);
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
}
}
else
{
lean_object* v___x_3572_; 
lean_dec(v_a_3489_);
lean_dec(v_userName_3479_);
v___x_3572_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_a_3482_, v___f_3487_, v___x_3484_, v___x_3484_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3574_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3572_, 1);
v___x_3574_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3473_, v_a_3573_, v___y_3447_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_dec_ref_known(v___x_3574_, 1);
v_a_3452_ = v___x_3472_;
goto v___jp_3451_;
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3574_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3574_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3583_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3572_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3572_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
lean_dec_ref(v___f_3487_);
lean_dec(v_a_3482_);
lean_dec(v_userName_3479_);
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3591_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3488_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3488_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
else
{
lean_object* v___x_3599_; 
lean_dec(v_userName_3479_);
v___x_3599_ = l_Lean_Meta_synthInstance(v_a_3482_, v___x_3466_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v_a_3600_; lean_object* v___x_3601_; 
v_a_3600_ = lean_ctor_get(v___x_3599_, 0);
lean_inc(v_a_3600_);
lean_dec_ref_known(v___x_3599_, 1);
v___x_3601_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3473_, v_a_3600_, v___y_3447_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_dec_ref_known(v___x_3601_, 1);
v_a_3452_ = v___x_3472_;
goto v___jp_3451_;
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3609_; 
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3601_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3604_ = v___x_3601_;
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_a_3602_);
lean_dec(v___x_3601_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3607_; 
if (v_isShared_3605_ == 0)
{
v___x_3607_ = v___x_3604_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3602_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
else
{
lean_object* v_a_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3617_; 
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3610_ = lean_ctor_get(v___x_3599_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3612_ = v___x_3599_;
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_a_3610_);
lean_dec(v___x_3599_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3615_; 
if (v_isShared_3613_ == 0)
{
v___x_3615_ = v___x_3612_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v_a_3610_);
v___x_3615_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
return v___x_3615_;
}
}
}
}
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
lean_dec(v_userName_3479_);
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v___x_3468_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3618_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3481_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3481_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v___x_3468_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3626_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3477_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3477_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
else
{
lean_dec(v___x_3473_);
lean_dec(v___x_3468_);
v_a_3452_ = v___x_3472_;
goto v___jp_3451_;
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec(v___x_3473_);
lean_dec_ref(v___x_3472_);
lean_dec(v___x_3468_);
lean_dec(v_declName_3441_);
lean_dec(v_fuel_3440_);
v_a_3634_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3474_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3474_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
}
}
}
}
v___jp_3451_:
{
size_t v___x_3453_; size_t v___x_3454_; 
v___x_3453_ = ((size_t)1ULL);
v___x_3454_ = lean_usize_add(v_i_3444_, v___x_3453_);
v_i_3444_ = v___x_3454_;
v_b_3445_ = v_a_3452_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1(void){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0));
v___x_3649_ = l_Lean_stringToMessageData(v___x_3648_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(lean_object* v_declName_3650_, lean_object* v_goal_3651_, lean_object* v_fuel_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_){
_start:
{
lean_object* v___x_3658_; 
lean_inc(v_declName_3650_);
v___x_3658_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_3650_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3666_; lean_object* v___y_3684_; lean_object* v___x_3736_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
lean_inc_n(v_a_3659_, 2);
lean_dec_ref_known(v___x_3658_, 1);
lean_inc(v_a_3656_);
lean_inc_ref(v_a_3655_);
lean_inc(v_a_3654_);
lean_inc_ref(v_a_3653_);
v___x_3736_ = lean_infer_type(v_a_3659_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3738_; uint8_t v_transparency_3739_; lean_object* v___x_3740_; uint8_t v___x_3741_; uint8_t v___x_3742_; uint8_t v___x_3743_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
v___x_3738_ = l_Lean_Meta_Context_config(v_a_3653_);
v_transparency_3739_ = lean_ctor_get_uint8(v___x_3738_, 9);
lean_dec_ref(v___x_3738_);
v___x_3740_ = lean_box(0);
v___x_3741_ = 0;
v___x_3742_ = 2;
v___x_3743_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3739_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_object* v_keyedConfig_3744_; uint8_t v_trackZetaDelta_3745_; lean_object* v_zetaDeltaSet_3746_; lean_object* v_lctx_3747_; lean_object* v_localInstances_3748_; lean_object* v_defEqCtx_x3f_3749_; lean_object* v_synthPendingDepth_3750_; lean_object* v_customCanUnfoldPredicate_x3f_3751_; uint8_t v_univApprox_3752_; uint8_t v_inTypeClassResolution_3753_; uint8_t v_cacheInferType_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v_keyedConfig_3744_ = lean_ctor_get(v_a_3653_, 0);
v_trackZetaDelta_3745_ = lean_ctor_get_uint8(v_a_3653_, sizeof(void*)*7);
v_zetaDeltaSet_3746_ = lean_ctor_get(v_a_3653_, 1);
v_lctx_3747_ = lean_ctor_get(v_a_3653_, 2);
v_localInstances_3748_ = lean_ctor_get(v_a_3653_, 3);
v_defEqCtx_x3f_3749_ = lean_ctor_get(v_a_3653_, 4);
v_synthPendingDepth_3750_ = lean_ctor_get(v_a_3653_, 5);
v_customCanUnfoldPredicate_x3f_3751_ = lean_ctor_get(v_a_3653_, 6);
v_univApprox_3752_ = lean_ctor_get_uint8(v_a_3653_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3753_ = lean_ctor_get_uint8(v_a_3653_, sizeof(void*)*7 + 2);
v_cacheInferType_3754_ = lean_ctor_get_uint8(v_a_3653_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3744_);
v___x_3755_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3742_, v_keyedConfig_3744_);
lean_inc(v_customCanUnfoldPredicate_x3f_3751_);
lean_inc(v_synthPendingDepth_3750_);
lean_inc(v_defEqCtx_x3f_3749_);
lean_inc_ref(v_localInstances_3748_);
lean_inc_ref(v_lctx_3747_);
lean_inc(v_zetaDeltaSet_3746_);
v___x_3756_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3756_, 0, v___x_3755_);
lean_ctor_set(v___x_3756_, 1, v_zetaDeltaSet_3746_);
lean_ctor_set(v___x_3756_, 2, v_lctx_3747_);
lean_ctor_set(v___x_3756_, 3, v_localInstances_3748_);
lean_ctor_set(v___x_3756_, 4, v_defEqCtx_x3f_3749_);
lean_ctor_set(v___x_3756_, 5, v_synthPendingDepth_3750_);
lean_ctor_set(v___x_3756_, 6, v_customCanUnfoldPredicate_x3f_3751_);
lean_ctor_set_uint8(v___x_3756_, sizeof(void*)*7, v_trackZetaDelta_3745_);
lean_ctor_set_uint8(v___x_3756_, sizeof(void*)*7 + 1, v_univApprox_3752_);
lean_ctor_set_uint8(v___x_3756_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3753_);
lean_ctor_set_uint8(v___x_3756_, sizeof(void*)*7 + 3, v_cacheInferType_3754_);
v___x_3757_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3737_, v___x_3740_, v___x_3741_, v___x_3756_, v_a_3654_, v_a_3655_, v_a_3656_);
lean_dec_ref_known(v___x_3756_, 7);
v___y_3684_ = v___x_3757_;
goto v___jp_3683_;
}
else
{
lean_object* v___x_3758_; 
v___x_3758_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3737_, v___x_3740_, v___x_3741_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_);
v___y_3684_ = v___x_3758_;
goto v___jp_3683_;
}
}
else
{
lean_dec(v_a_3659_);
lean_dec(v_fuel_3652_);
lean_dec_ref(v_goal_3651_);
lean_dec(v_declName_3650_);
return v___x_3736_;
}
v___jp_3660_:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; size_t v_sz_3670_; size_t v___x_3671_; lean_object* v___x_3672_; 
v___x_3667_ = lean_unsigned_to_nat(0u);
v___x_3668_ = lean_array_get_size(v___y_3662_);
v___x_3669_ = l_Array_toSubarray___redArg(v___y_3662_, v___x_3667_, v___x_3668_);
v_sz_3670_ = lean_array_size(v___y_3661_);
v___x_3671_ = ((size_t)0ULL);
v___x_3672_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_fuel_3652_, v_declName_3650_, v___y_3661_, v_sz_3670_, v___x_3671_, v___x_3669_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v___x_3673_; lean_object* v___x_3674_; 
lean_dec_ref_known(v___x_3672_, 1);
v___x_3673_ = l_Lean_mkAppN(v_a_3659_, v___y_3661_);
lean_dec_ref(v___y_3661_);
v___x_3674_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v___x_3673_, v___y_3664_);
return v___x_3674_;
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_dec_ref(v___y_3661_);
lean_dec(v_a_3659_);
v_a_3675_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3672_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3672_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
v___jp_3683_:
{
if (lean_obj_tag(v___y_3684_) == 0)
{
lean_object* v_a_3685_; lean_object* v_snd_3686_; lean_object* v_fst_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3727_; 
v_a_3685_ = lean_ctor_get(v___y_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___y_3684_, 1);
v_snd_3686_ = lean_ctor_get(v_a_3685_, 1);
v_fst_3687_ = lean_ctor_get(v_a_3685_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v_a_3685_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3689_ = v_a_3685_;
v_isShared_3690_ = v_isSharedCheck_3727_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_snd_3686_);
lean_inc(v_fst_3687_);
lean_dec(v_a_3685_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3727_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v_fst_3691_; lean_object* v_snd_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3726_; 
v_fst_3691_ = lean_ctor_get(v_snd_3686_, 0);
v_snd_3692_ = lean_ctor_get(v_snd_3686_, 1);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_snd_3686_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3694_ = v_snd_3686_;
v_isShared_3695_ = v_isSharedCheck_3726_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_snd_3692_);
lean_inc(v_fst_3691_);
lean_dec(v_snd_3686_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3726_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3696_; 
v___x_3696_ = l_Lean_Meta_isExprDefEq(v_snd_3692_, v_goal_3651_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v_a_3697_; uint8_t v___x_3698_; 
v_a_3697_ = lean_ctor_get(v___x_3696_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v___x_3696_, 1);
v___x_3698_ = lean_unbox(v_a_3697_);
if (v___x_3698_ == 0)
{
lean_object* v___x_3699_; uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3703_; 
v___x_3699_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_3700_ = lean_unbox(v_a_3697_);
lean_dec(v_a_3697_);
lean_inc(v_declName_3650_);
v___x_3701_ = l_Lean_MessageData_ofConstName(v_declName_3650_, v___x_3700_);
if (v_isShared_3695_ == 0)
{
lean_ctor_set_tag(v___x_3694_, 7);
lean_ctor_set(v___x_3694_, 1, v___x_3701_);
lean_ctor_set(v___x_3694_, 0, v___x_3699_);
v___x_3703_ = v___x_3694_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3699_);
lean_ctor_set(v_reuseFailAlloc_3717_, 1, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3704_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1);
if (v_isShared_3690_ == 0)
{
lean_ctor_set_tag(v___x_3689_, 7);
lean_ctor_set(v___x_3689_, 1, v___x_3704_);
lean_ctor_set(v___x_3689_, 0, v___x_3703_);
v___x_3706_ = v___x_3689_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3703_);
lean_ctor_set(v_reuseFailAlloc_3716_, 1, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3707_; 
v___x_3707_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3706_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_dec_ref_known(v___x_3707_, 1);
v___y_3661_ = v_fst_3687_;
v___y_3662_ = v_fst_3691_;
v___y_3663_ = v_a_3653_;
v___y_3664_ = v_a_3654_;
v___y_3665_ = v_a_3655_;
v___y_3666_ = v_a_3656_;
goto v___jp_3660_;
}
else
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_dec(v_fst_3691_);
lean_dec(v_fst_3687_);
lean_dec(v_a_3659_);
lean_dec(v_fuel_3652_);
lean_dec(v_declName_3650_);
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3707_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3697_);
lean_del_object(v___x_3694_);
lean_del_object(v___x_3689_);
v___y_3661_ = v_fst_3687_;
v___y_3662_ = v_fst_3691_;
v___y_3663_ = v_a_3653_;
v___y_3664_ = v_a_3654_;
v___y_3665_ = v_a_3655_;
v___y_3666_ = v_a_3656_;
goto v___jp_3660_;
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_del_object(v___x_3694_);
lean_dec(v_fst_3691_);
lean_del_object(v___x_3689_);
lean_dec(v_fst_3687_);
lean_dec(v_a_3659_);
lean_dec(v_fuel_3652_);
lean_dec(v_declName_3650_);
v_a_3718_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3696_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3696_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
}
else
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
lean_dec(v_a_3659_);
lean_dec(v_fuel_3652_);
lean_dec_ref(v_goal_3651_);
lean_dec(v_declName_3650_);
v_a_3728_ = lean_ctor_get(v___y_3684_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___y_3684_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3730_ = v___y_3684_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___y_3684_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
}
}
else
{
lean_dec(v_fuel_3652_);
lean_dec_ref(v_goal_3651_);
lean_dec(v_declName_3650_);
return v___x_3658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0(lean_object* v_fuel_3759_, lean_object* v_a_3760_, lean_object* v_x_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3767_ = lean_unsigned_to_nat(1u);
v___x_3768_ = lean_nat_sub(v_fuel_3759_, v___x_3767_);
v___x_3769_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_x_3761_, v_a_3760_, v___x_3768_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___boxed(lean_object* v_declName_3770_, lean_object* v_goal_3771_, lean_object* v_fuel_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_3770_, v_goal_3771_, v_fuel_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_);
lean_dec(v_a_3776_);
lean_dec_ref(v_a_3775_);
lean_dec(v_a_3774_);
lean_dec_ref(v_a_3773_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___boxed(lean_object* v_fuel_3779_, lean_object* v_declName_3780_, lean_object* v_as_3781_, lean_object* v_sz_3782_, lean_object* v_i_3783_, lean_object* v_b_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
size_t v_sz_boxed_3790_; size_t v_i_boxed_3791_; lean_object* v_res_3792_; 
v_sz_boxed_3790_ = lean_unbox_usize(v_sz_3782_);
lean_dec(v_sz_3782_);
v_i_boxed_3791_ = lean_unbox_usize(v_i_3783_);
lean_dec(v_i_3783_);
v_res_3792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_fuel_3779_, v_declName_3780_, v_as_3781_, v_sz_boxed_3790_, v_i_boxed_3791_, v_b_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
lean_dec(v___y_3786_);
lean_dec_ref(v___y_3785_);
lean_dec_ref(v_as_3781_);
return v_res_3792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___boxed(lean_object* v_lhs_3793_, lean_object* v_rhs_3794_, lean_object* v_fuel_3795_, lean_object* v_a_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_){
_start:
{
lean_object* v_res_3801_; 
v_res_3801_ = l_Lean_Meta_Transport_mkEquiv(v_lhs_3793_, v_rhs_3794_, v_fuel_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_);
lean_dec(v_a_3799_);
lean_dec_ref(v_a_3798_);
lean_dec(v_a_3797_);
lean_dec_ref(v_a_3796_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v___x_3807_; 
v___x_3807_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_3805_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___boxed(lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3810_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(lean_object* v_mvarId_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_3814_, v___y_3816_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___boxed(lean_object* v_mvarId_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(v_mvarId_3821_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_);
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
lean_dec(v___y_3823_);
lean_dec_ref(v___y_3822_);
lean_dec(v_mvarId_3821_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(lean_object* v_mvarId_3828_, lean_object* v_val_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v___x_3835_; 
v___x_3835_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_3828_, v_val_3829_, v___y_3831_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___boxed(lean_object* v_mvarId_3836_, lean_object* v_val_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_){
_start:
{
lean_object* v_res_3843_; 
v_res_3843_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(v_mvarId_3836_, v_val_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(lean_object* v_00_u03b1_3844_, lean_object* v_x_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_){
_start:
{
lean_object* v___x_3851_; 
v___x_3851_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_3845_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___boxed(lean_object* v_00_u03b1_3852_, lean_object* v_x_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(v_00_u03b1_3852_, v_x_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
return v_res_3859_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(lean_object* v_00_u03b2_3860_, lean_object* v_x_3861_, lean_object* v_x_3862_){
_start:
{
uint8_t v___x_3863_; 
v___x_3863_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_3861_, v_x_3862_);
return v___x_3863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3864_, lean_object* v_x_3865_, lean_object* v_x_3866_){
_start:
{
uint8_t v_res_3867_; lean_object* v_r_3868_; 
v_res_3867_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(v_00_u03b2_3864_, v_x_3865_, v_x_3866_);
lean_dec(v_x_3866_);
lean_dec_ref(v_x_3865_);
v_r_3868_ = lean_box(v_res_3867_);
return v_r_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2(lean_object* v_00_u03b2_3869_, lean_object* v_x_3870_, lean_object* v_x_3871_, lean_object* v_x_3872_){
_start:
{
lean_object* v___x_3873_; 
v___x_3873_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_x_3870_, v_x_3871_, v_x_3872_);
return v___x_3873_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_3874_, lean_object* v_x_3875_, size_t v_x_3876_, lean_object* v_x_3877_){
_start:
{
uint8_t v___x_3878_; 
v___x_3878_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_3875_, v_x_3876_, v_x_3877_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_3879_, lean_object* v_x_3880_, lean_object* v_x_3881_, lean_object* v_x_3882_){
_start:
{
size_t v_x_34132__boxed_3883_; uint8_t v_res_3884_; lean_object* v_r_3885_; 
v_x_34132__boxed_3883_ = lean_unbox_usize(v_x_3881_);
lean_dec(v_x_3881_);
v_res_3884_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(v_00_u03b2_3879_, v_x_3880_, v_x_34132__boxed_3883_, v_x_3882_);
lean_dec(v_x_3882_);
lean_dec_ref(v_x_3880_);
v_r_3885_ = lean_box(v_res_3884_);
return v_r_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_3886_, lean_object* v_x_3887_, size_t v_x_3888_, size_t v_x_3889_, lean_object* v_x_3890_, lean_object* v_x_3891_){
_start:
{
lean_object* v___x_3892_; 
v___x_3892_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_3887_, v_x_3888_, v_x_3889_, v_x_3890_, v_x_3891_);
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___boxed(lean_object* v_00_u03b2_3893_, lean_object* v_x_3894_, lean_object* v_x_3895_, lean_object* v_x_3896_, lean_object* v_x_3897_, lean_object* v_x_3898_){
_start:
{
size_t v_x_34143__boxed_3899_; size_t v_x_34144__boxed_3900_; lean_object* v_res_3901_; 
v_x_34143__boxed_3899_ = lean_unbox_usize(v_x_3895_);
lean_dec(v_x_3895_);
v_x_34144__boxed_3900_ = lean_unbox_usize(v_x_3896_);
lean_dec(v_x_3896_);
v_res_3901_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(v_00_u03b2_3893_, v_x_3894_, v_x_34143__boxed_3899_, v_x_34144__boxed_3900_, v_x_3897_, v_x_3898_);
return v_res_3901_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b2_3902_, lean_object* v_keys_3903_, lean_object* v_vals_3904_, lean_object* v_heq_3905_, lean_object* v_i_3906_, lean_object* v_k_3907_){
_start:
{
uint8_t v___x_3908_; 
v___x_3908_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_3903_, v_i_3906_, v_k_3907_);
return v___x_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___boxed(lean_object* v_00_u03b2_3909_, lean_object* v_keys_3910_, lean_object* v_vals_3911_, lean_object* v_heq_3912_, lean_object* v_i_3913_, lean_object* v_k_3914_){
_start:
{
uint8_t v_res_3915_; lean_object* v_r_3916_; 
v_res_3915_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(v_00_u03b2_3909_, v_keys_3910_, v_vals_3911_, v_heq_3912_, v_i_3913_, v_k_3914_);
lean_dec(v_k_3914_);
lean_dec_ref(v_vals_3911_);
lean_dec_ref(v_keys_3910_);
v_r_3916_ = lean_box(v_res_3915_);
return v_r_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14(lean_object* v_00_u03b2_3917_, lean_object* v_n_3918_, lean_object* v_k_3919_, lean_object* v_v_3920_){
_start:
{
lean_object* v___x_3921_; 
v___x_3921_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v_n_3918_, v_k_3919_, v_v_3920_);
return v___x_3921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(lean_object* v_00_u03b2_3922_, size_t v_depth_3923_, lean_object* v_keys_3924_, lean_object* v_vals_3925_, lean_object* v_heq_3926_, lean_object* v_i_3927_, lean_object* v_entries_3928_){
_start:
{
lean_object* v___x_3929_; 
v___x_3929_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_3923_, v_keys_3924_, v_vals_3925_, v_i_3927_, v_entries_3928_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___boxed(lean_object* v_00_u03b2_3930_, lean_object* v_depth_3931_, lean_object* v_keys_3932_, lean_object* v_vals_3933_, lean_object* v_heq_3934_, lean_object* v_i_3935_, lean_object* v_entries_3936_){
_start:
{
size_t v_depth_boxed_3937_; lean_object* v_res_3938_; 
v_depth_boxed_3937_ = lean_unbox_usize(v_depth_3931_);
lean_dec(v_depth_3931_);
v_res_3938_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(v_00_u03b2_3930_, v_depth_boxed_3937_, v_keys_3932_, v_vals_3933_, v_heq_3934_, v_i_3935_, v_entries_3936_);
lean_dec_ref(v_vals_3933_);
lean_dec_ref(v_keys_3932_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16(lean_object* v_00_u03b2_3939_, lean_object* v_x_3940_, lean_object* v_x_3941_, lean_object* v_x_3942_, lean_object* v_x_3943_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_x_3940_, v_x_3941_, v_x_3942_, v_x_3943_);
return v___x_3944_;
}
}
static lean_object* _init_l_Lean_Meta_mkTransportEquiv___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3946_ = ((lean_object*)(l_Lean_Meta_mkTransportEquiv___lam__0___closed__0));
v___x_3947_ = l_Lean_stringToMessageData(v___x_3946_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___lam__0(lean_object* v_lhs_3948_, lean_object* v_rhs_3949_, lean_object* v___x_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v___x_3956_; 
lean_inc_ref(v_rhs_3949_);
lean_inc_ref(v_lhs_3948_);
v___x_3956_ = l_Lean_Meta_Transport_mkEquiv(v_lhs_3948_, v_rhs_3949_, v___x_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_dec_ref(v_rhs_3949_);
lean_dec_ref(v_lhs_3948_);
return v___x_3956_;
}
else
{
lean_object* v_a_3957_; uint8_t v___y_3959_; uint8_t v___x_3988_; 
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_a_3957_);
v___x_3988_ = l_Lean_Exception_isInterrupt(v_a_3957_);
if (v___x_3988_ == 0)
{
uint8_t v___x_3989_; 
lean_inc(v_a_3957_);
v___x_3989_ = l_Lean_Exception_isRuntime(v_a_3957_);
v___y_3959_ = v___x_3989_;
goto v___jp_3958_;
}
else
{
v___y_3959_ = v___x_3988_;
goto v___jp_3958_;
}
v___jp_3958_:
{
if (v___y_3959_ == 0)
{
if (lean_obj_tag(v_a_3957_) == 1)
{
lean_object* v_id_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3986_; 
v_id_3960_ = lean_ctor_get(v_a_3957_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v_a_3957_);
if (v_isSharedCheck_3986_ == 0)
{
lean_object* v_unused_3987_; 
v_unused_3987_ = lean_ctor_get(v_a_3957_, 1);
lean_dec(v_unused_3987_);
v___x_3962_ = v_a_3957_;
v_isShared_3963_ = v_isSharedCheck_3986_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_id_3960_);
lean_dec(v_a_3957_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3986_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3964_; uint8_t v___x_3965_; 
v___x_3964_ = l_Lean_Meta_Transport_depthExceptionId;
v___x_3965_ = l_Lean_instBEqInternalExceptionId_beq(v_id_3960_, v___x_3964_);
lean_dec(v_id_3960_);
if (v___x_3965_ == 0)
{
lean_del_object(v___x_3962_);
lean_dec_ref(v_rhs_3949_);
lean_dec_ref(v_lhs_3948_);
return v___x_3956_;
}
else
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3969_; 
lean_dec_ref_known(v___x_3956_, 1);
v___x_3966_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3967_ = l_Lean_indentExpr(v_rhs_3949_);
if (v_isShared_3963_ == 0)
{
lean_ctor_set_tag(v___x_3962_, 7);
lean_ctor_set(v___x_3962_, 1, v___x_3967_);
lean_ctor_set(v___x_3962_, 0, v___x_3966_);
v___x_3969_ = v___x_3962_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v___x_3966_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v___x_3967_);
v___x_3969_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
v___x_3970_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3969_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
v___x_3972_ = l_Lean_indentExpr(v_lhs_3948_);
v___x_3973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3971_);
lean_ctor_set(v___x_3973_, 1, v___x_3972_);
v___x_3974_ = lean_obj_once(&l_Lean_Meta_mkTransportEquiv___lam__0___closed__1, &l_Lean_Meta_mkTransportEquiv___lam__0___closed__1_once, _init_l_Lean_Meta_mkTransportEquiv___lam__0___closed__1);
v___x_3975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3973_);
lean_ctor_set(v___x_3975_, 1, v___x_3974_);
v___x_3976_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3975_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3976_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3976_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3957_);
lean_dec_ref(v_rhs_3949_);
lean_dec_ref(v_lhs_3948_);
return v___x_3956_;
}
}
else
{
lean_dec(v_a_3957_);
lean_dec_ref(v_rhs_3949_);
lean_dec_ref(v_lhs_3948_);
return v___x_3956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___lam__0___boxed(lean_object* v_lhs_3990_, lean_object* v_rhs_3991_, lean_object* v___x_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_Lean_Meta_mkTransportEquiv___lam__0(v_lhs_3990_, v_rhs_3991_, v___x_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
return v_res_3998_;
}
}
static lean_object* _init_l_Lean_Meta_mkTransportEquiv___closed__1(void){
_start:
{
lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_4000_ = ((lean_object*)(l_Lean_Meta_mkTransportEquiv___closed__0));
v___x_4001_ = l_Lean_stringToMessageData(v___x_4000_);
return v___x_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv(lean_object* v_lhs_4002_, lean_object* v_rhs_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_){
_start:
{
lean_object* v___y_4010_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___x_4052_; lean_object* v_env_4053_; lean_object* v___x_4054_; uint8_t v___x_4055_; uint8_t v___x_4056_; 
v___x_4052_ = lean_st_ref_get(v_a_4007_);
v_env_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc_ref(v_env_4053_);
lean_dec(v___x_4052_);
v___x_4054_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_4055_ = 1;
v___x_4056_ = l_Lean_Environment_contains(v_env_4053_, v___x_4054_, v___x_4055_);
if (v___x_4056_ == 0)
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
lean_dec_ref(v_rhs_4003_);
lean_dec_ref(v_lhs_4002_);
v___x_4057_ = lean_obj_once(&l_Lean_Meta_mkTransportEquiv___closed__1, &l_Lean_Meta_mkTransportEquiv___closed__1_once, _init_l_Lean_Meta_mkTransportEquiv___closed__1);
v___x_4058_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_4057_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_);
v_a_4059_ = lean_ctor_get(v___x_4058_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4058_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4058_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4058_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4064_; 
if (v_isShared_4062_ == 0)
{
v___x_4064_ = v___x_4061_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_a_4059_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
}
}
}
else
{
v___y_4028_ = v_a_4004_;
v___y_4029_ = v_a_4005_;
v___y_4030_ = v_a_4006_;
v___y_4031_ = v_a_4007_;
goto v___jp_4027_;
}
v___jp_4009_:
{
if (lean_obj_tag(v___y_4010_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4018_; 
v_a_4011_ = lean_ctor_get(v___y_4010_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___y_4010_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4013_ = v___y_4010_;
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___y_4010_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
else
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4026_; 
v_a_4019_ = lean_ctor_get(v___y_4010_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___y_4010_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4021_ = v___y_4010_;
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v___y_4010_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4024_; 
if (v_isShared_4022_ == 0)
{
v___x_4024_ = v___x_4021_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_a_4019_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
return v___x_4024_;
}
}
}
}
v___jp_4027_:
{
lean_object* v___x_4032_; uint8_t v_transparency_4033_; lean_object* v___x_4034_; uint8_t v___x_4035_; uint8_t v___x_4036_; 
v___x_4032_ = l_Lean_Meta_Context_config(v___y_4028_);
v_transparency_4033_ = lean_ctor_get_uint8(v___x_4032_, 9);
lean_dec_ref(v___x_4032_);
v___x_4034_ = lean_unsigned_to_nat(8u);
v___x_4035_ = 5;
v___x_4036_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4033_, v___x_4035_);
if (v___x_4036_ == 0)
{
lean_object* v_keyedConfig_4037_; uint8_t v_trackZetaDelta_4038_; lean_object* v_zetaDeltaSet_4039_; lean_object* v_lctx_4040_; lean_object* v_localInstances_4041_; lean_object* v_defEqCtx_x3f_4042_; lean_object* v_synthPendingDepth_4043_; lean_object* v_customCanUnfoldPredicate_x3f_4044_; uint8_t v_univApprox_4045_; uint8_t v_inTypeClassResolution_4046_; uint8_t v_cacheInferType_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; 
v_keyedConfig_4037_ = lean_ctor_get(v___y_4028_, 0);
v_trackZetaDelta_4038_ = lean_ctor_get_uint8(v___y_4028_, sizeof(void*)*7);
v_zetaDeltaSet_4039_ = lean_ctor_get(v___y_4028_, 1);
v_lctx_4040_ = lean_ctor_get(v___y_4028_, 2);
v_localInstances_4041_ = lean_ctor_get(v___y_4028_, 3);
v_defEqCtx_x3f_4042_ = lean_ctor_get(v___y_4028_, 4);
v_synthPendingDepth_4043_ = lean_ctor_get(v___y_4028_, 5);
v_customCanUnfoldPredicate_x3f_4044_ = lean_ctor_get(v___y_4028_, 6);
v_univApprox_4045_ = lean_ctor_get_uint8(v___y_4028_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4046_ = lean_ctor_get_uint8(v___y_4028_, sizeof(void*)*7 + 2);
v_cacheInferType_4047_ = lean_ctor_get_uint8(v___y_4028_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4037_);
v___x_4048_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4035_, v_keyedConfig_4037_);
lean_inc(v_customCanUnfoldPredicate_x3f_4044_);
lean_inc(v_synthPendingDepth_4043_);
lean_inc(v_defEqCtx_x3f_4042_);
lean_inc_ref(v_localInstances_4041_);
lean_inc_ref(v_lctx_4040_);
lean_inc(v_zetaDeltaSet_4039_);
v___x_4049_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4049_, 0, v___x_4048_);
lean_ctor_set(v___x_4049_, 1, v_zetaDeltaSet_4039_);
lean_ctor_set(v___x_4049_, 2, v_lctx_4040_);
lean_ctor_set(v___x_4049_, 3, v_localInstances_4041_);
lean_ctor_set(v___x_4049_, 4, v_defEqCtx_x3f_4042_);
lean_ctor_set(v___x_4049_, 5, v_synthPendingDepth_4043_);
lean_ctor_set(v___x_4049_, 6, v_customCanUnfoldPredicate_x3f_4044_);
lean_ctor_set_uint8(v___x_4049_, sizeof(void*)*7, v_trackZetaDelta_4038_);
lean_ctor_set_uint8(v___x_4049_, sizeof(void*)*7 + 1, v_univApprox_4045_);
lean_ctor_set_uint8(v___x_4049_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4046_);
lean_ctor_set_uint8(v___x_4049_, sizeof(void*)*7 + 3, v_cacheInferType_4047_);
v___x_4050_ = l_Lean_Meta_mkTransportEquiv___lam__0(v_lhs_4002_, v_rhs_4003_, v___x_4034_, v___x_4049_, v___y_4029_, v___y_4030_, v___y_4031_);
lean_dec_ref_known(v___x_4049_, 7);
v___y_4010_ = v___x_4050_;
goto v___jp_4009_;
}
else
{
lean_object* v___x_4051_; 
v___x_4051_ = l_Lean_Meta_mkTransportEquiv___lam__0(v_lhs_4002_, v_rhs_4003_, v___x_4034_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_);
v___y_4010_ = v___x_4051_;
goto v___jp_4009_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___boxed(lean_object* v_lhs_4067_, lean_object* v_rhs_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Lean_Meta_mkTransportEquiv(v_lhs_4067_, v_rhs_4068_, v_a_4069_, v_a_4070_, v_a_4071_, v_a_4072_);
lean_dec(v_a_4072_);
lean_dec_ref(v_a_4071_);
lean_dec(v_a_4070_);
lean_dec_ref(v_a_4069_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue_spec__0___redArg(lean_object* v_a_4075_){
_start:
{
uint8_t v___x_4076_; 
v___x_4076_ = l_Lean_Expr_isForall(v_a_4075_);
if (v___x_4076_ == 0)
{
return v_a_4075_;
}
else
{
lean_object* v___x_4077_; 
v___x_4077_ = l_Lean_Expr_bindingBody_x21(v_a_4075_);
lean_dec_ref(v_a_4075_);
v_a_4075_ = v___x_4077_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue(lean_object* v_env_4087_, lean_object* v_c_4088_){
_start:
{
uint8_t v___y_4090_; lean_object* v___x_4101_; uint8_t v___x_4102_; 
v___x_4101_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__1));
v___x_4102_ = lean_name_eq(v_c_4088_, v___x_4101_);
if (v___x_4102_ == 0)
{
lean_object* v___x_4103_; uint8_t v___x_4104_; 
v___x_4103_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___closed__4));
v___x_4104_ = lean_name_eq(v_c_4088_, v___x_4103_);
v___y_4090_ = v___x_4104_;
goto v___jp_4089_;
}
else
{
v___y_4090_ = v___x_4102_;
goto v___jp_4089_;
}
v___jp_4089_:
{
if (v___y_4090_ == 0)
{
uint8_t v___x_4091_; 
lean_inc(v_c_4088_);
lean_inc_ref(v_env_4087_);
v___x_4091_ = l_Lean_getReducibilityStatusCore(v_env_4087_, v_c_4088_);
if (v___x_4091_ == 0)
{
uint8_t v___x_4092_; 
lean_inc(v_c_4088_);
lean_inc_ref(v_env_4087_);
v___x_4092_ = l_Lean_Environment_isProjectionFn(v_env_4087_, v_c_4088_);
if (v___x_4092_ == 0)
{
lean_object* v___x_4093_; 
v___x_4093_ = l_Lean_Environment_find_x3f(v_env_4087_, v_c_4088_, v___x_4092_);
if (lean_obj_tag(v___x_4093_) == 1)
{
lean_object* v_val_4094_; 
v_val_4094_ = lean_ctor_get(v___x_4093_, 0);
lean_inc(v_val_4094_);
lean_dec_ref_known(v___x_4093_, 1);
if (lean_obj_tag(v_val_4094_) == 1)
{
lean_object* v_val_4095_; lean_object* v_toConstantVal_4096_; lean_object* v_type_4097_; lean_object* v___x_4098_; uint8_t v___x_4099_; 
v_val_4095_ = lean_ctor_get(v_val_4094_, 0);
lean_inc_ref(v_val_4095_);
lean_dec_ref_known(v_val_4094_, 1);
v_toConstantVal_4096_ = lean_ctor_get(v_val_4095_, 0);
lean_inc_ref(v_toConstantVal_4096_);
lean_dec_ref(v_val_4095_);
v_type_4097_ = lean_ctor_get(v_toConstantVal_4096_, 2);
lean_inc_ref(v_type_4097_);
lean_dec_ref(v_toConstantVal_4096_);
v___x_4098_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue_spec__0___redArg(v_type_4097_);
v___x_4099_ = l_Lean_Expr_isSort(v___x_4098_);
lean_dec_ref(v___x_4098_);
if (v___x_4099_ == 0)
{
uint8_t v___x_4100_; 
v___x_4100_ = 1;
return v___x_4100_;
}
else
{
return v___x_4092_;
}
}
else
{
lean_dec(v_val_4094_);
return v___x_4092_;
}
}
else
{
lean_dec(v___x_4093_);
return v___x_4092_;
}
}
else
{
lean_dec(v_c_4088_);
lean_dec_ref(v_env_4087_);
return v___y_4090_;
}
}
else
{
lean_dec(v_c_4088_);
lean_dec_ref(v_env_4087_);
return v___y_4090_;
}
}
else
{
lean_dec(v_c_4088_);
lean_dec_ref(v_env_4087_);
return v___y_4090_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue___boxed(lean_object* v_env_4105_, lean_object* v_c_4106_){
_start:
{
uint8_t v_res_4107_; lean_object* v_r_4108_; 
v_res_4107_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue(v_env_4105_, v_c_4106_);
v_r_4108_ = lean_box(v_res_4107_);
return v_r_4108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue_spec__0(lean_object* v_inst_4109_, lean_object* v_a_4110_){
_start:
{
lean_object* v___x_4111_; 
v___x_4111_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue_spec__0___redArg(v_a_4110_);
return v___x_4111_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0(void){
_start:
{
lean_object* v___x_4112_; lean_object* v_dummy_4113_; 
v___x_4112_ = lean_box(0);
v_dummy_4113_ = l_Lean_Expr_sort___override(v___x_4112_);
return v_dummy_4113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f(lean_object* v_env_4114_, lean_object* v_s_4115_, lean_object* v_i_4116_){
_start:
{
lean_object* v___x_4117_; 
v___x_4117_ = l_Lean_Expr_getAppFn(v_s_4115_);
if (lean_obj_tag(v___x_4117_) == 4)
{
lean_object* v_declName_4118_; uint8_t v___x_4119_; lean_object* v___x_4120_; 
v_declName_4118_ = lean_ctor_get(v___x_4117_, 0);
lean_inc(v_declName_4118_);
lean_dec_ref_known(v___x_4117_, 2);
v___x_4119_ = 0;
v___x_4120_ = l_Lean_Environment_find_x3f(v_env_4114_, v_declName_4118_, v___x_4119_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v___x_4121_; 
lean_dec_ref(v_s_4115_);
v___x_4121_ = lean_box(0);
return v___x_4121_;
}
else
{
lean_object* v_val_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4147_; 
v_val_4122_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4124_ = v___x_4120_;
v_isShared_4125_ = v_isSharedCheck_4147_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_val_4122_);
lean_dec(v___x_4120_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4147_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
if (lean_obj_tag(v_val_4122_) == 6)
{
lean_object* v_val_4126_; lean_object* v_numParams_4127_; lean_object* v_numFields_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; uint8_t v___x_4131_; 
v_val_4126_ = lean_ctor_get(v_val_4122_, 0);
lean_inc_ref(v_val_4126_);
lean_dec_ref_known(v_val_4122_, 1);
v_numParams_4127_ = lean_ctor_get(v_val_4126_, 3);
lean_inc(v_numParams_4127_);
v_numFields_4128_ = lean_ctor_get(v_val_4126_, 4);
lean_inc(v_numFields_4128_);
lean_dec_ref(v_val_4126_);
v___x_4129_ = l_Lean_Expr_getAppNumArgs(v_s_4115_);
v___x_4130_ = lean_nat_add(v_numParams_4127_, v_numFields_4128_);
lean_dec(v_numFields_4128_);
v___x_4131_ = lean_nat_dec_eq(v___x_4129_, v___x_4130_);
lean_dec(v___x_4130_);
if (v___x_4131_ == 0)
{
lean_object* v___x_4132_; 
lean_dec(v___x_4129_);
lean_dec(v_numParams_4127_);
lean_del_object(v___x_4124_);
lean_dec_ref(v_s_4115_);
v___x_4132_ = lean_box(0);
return v___x_4132_;
}
else
{
lean_object* v_dummy_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; uint8_t v___x_4140_; 
v_dummy_4133_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0);
lean_inc(v___x_4129_);
v___x_4134_ = lean_mk_array(v___x_4129_, v_dummy_4133_);
v___x_4135_ = lean_unsigned_to_nat(1u);
v___x_4136_ = lean_nat_sub(v___x_4129_, v___x_4135_);
lean_dec(v___x_4129_);
v___x_4137_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_s_4115_, v___x_4134_, v___x_4136_);
v___x_4138_ = lean_nat_add(v_numParams_4127_, v_i_4116_);
lean_dec(v_numParams_4127_);
v___x_4139_ = lean_array_get_size(v___x_4137_);
v___x_4140_ = lean_nat_dec_lt(v___x_4138_, v___x_4139_);
if (v___x_4140_ == 0)
{
lean_object* v___x_4141_; 
lean_dec(v___x_4138_);
lean_dec_ref(v___x_4137_);
lean_del_object(v___x_4124_);
v___x_4141_ = lean_box(0);
return v___x_4141_;
}
else
{
lean_object* v___x_4142_; lean_object* v___x_4144_; 
v___x_4142_ = lean_array_fget(v___x_4137_, v___x_4138_);
lean_dec(v___x_4138_);
lean_dec_ref(v___x_4137_);
if (v_isShared_4125_ == 0)
{
lean_ctor_set(v___x_4124_, 0, v___x_4142_);
v___x_4144_ = v___x_4124_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v___x_4142_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
lean_object* v___x_4146_; 
lean_del_object(v___x_4124_);
lean_dec(v_val_4122_);
lean_dec_ref(v_s_4115_);
v___x_4146_ = lean_box(0);
return v___x_4146_;
}
}
}
}
else
{
lean_object* v___x_4148_; 
lean_dec_ref(v___x_4117_);
lean_dec_ref(v_s_4115_);
lean_dec_ref(v_env_4114_);
v___x_4148_ = lean_box(0);
return v___x_4148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___boxed(lean_object* v_env_4149_, lean_object* v_s_4150_, lean_object* v_i_4151_){
_start:
{
lean_object* v_res_4152_; 
v_res_4152_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f(v_env_4149_, v_s_4150_, v_i_4151_);
lean_dec(v_i_4151_);
return v_res_4152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(lean_object* v_e_4153_, lean_object* v_a_4154_){
_start:
{
lean_object* v___x_4156_; lean_object* v_env_4157_; lean_object* v_dummy_4158_; lean_object* v_nargs_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; 
v___x_4156_ = lean_st_ref_get(v_a_4154_);
v_env_4157_ = lean_ctor_get(v___x_4156_, 0);
lean_inc_ref(v_env_4157_);
lean_dec(v___x_4156_);
v_dummy_4158_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0);
v_nargs_4159_ = l_Lean_Expr_getAppNumArgs(v_e_4153_);
lean_inc(v_nargs_4159_);
v___x_4160_ = lean_mk_array(v_nargs_4159_, v_dummy_4158_);
v___x_4161_ = lean_unsigned_to_nat(1u);
v___x_4162_ = lean_nat_sub(v_nargs_4159_, v___x_4161_);
lean_dec(v_nargs_4159_);
lean_inc_ref(v_e_4153_);
v___x_4163_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_4153_, v___x_4160_, v___x_4162_);
v___x_4164_ = l_Lean_Expr_getAppFn(v_e_4153_);
switch(lean_obj_tag(v___x_4164_))
{
case 6:
{
lean_object* v___x_4165_; lean_object* v___x_4166_; uint8_t v___x_4167_; 
lean_dec_ref_known(v___x_4164_, 3);
lean_dec_ref(v_env_4157_);
v___x_4165_ = lean_array_get_size(v___x_4163_);
lean_dec_ref(v___x_4163_);
v___x_4166_ = lean_unsigned_to_nat(0u);
v___x_4167_ = lean_nat_dec_eq(v___x_4165_, v___x_4166_);
if (v___x_4167_ == 0)
{
lean_object* v___x_4168_; 
v___x_4168_ = l_Lean_Expr_headBeta(v_e_4153_);
v_e_4153_ = v___x_4168_;
goto _start;
}
else
{
lean_object* v___x_4170_; 
v___x_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4170_, 0, v_e_4153_);
return v___x_4170_;
}
}
case 11:
{
lean_object* v_typeName_4171_; lean_object* v_idx_4172_; lean_object* v_struct_4173_; lean_object* v___x_4174_; 
lean_dec_ref(v_e_4153_);
v_typeName_4171_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_typeName_4171_);
v_idx_4172_ = lean_ctor_get(v___x_4164_, 1);
lean_inc(v_idx_4172_);
v_struct_4173_ = lean_ctor_get(v___x_4164_, 2);
lean_inc_ref(v_struct_4173_);
lean_dec_ref_known(v___x_4164_, 3);
v___x_4174_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(v_struct_4173_, v_a_4154_);
if (lean_obj_tag(v___x_4174_) == 0)
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4188_; 
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v___x_4174_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4177_ = v___x_4174_;
v_isShared_4178_ = v_isSharedCheck_4188_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4174_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4188_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4179_; 
lean_inc(v_a_4175_);
v___x_4179_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f(v_env_4157_, v_a_4175_, v_idx_4172_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4183_; 
v___x_4180_ = l_Lean_Expr_proj___override(v_typeName_4171_, v_idx_4172_, v_a_4175_);
v___x_4181_ = l_Lean_mkAppN(v___x_4180_, v___x_4163_);
lean_dec_ref(v___x_4163_);
if (v_isShared_4178_ == 0)
{
lean_ctor_set(v___x_4177_, 0, v___x_4181_);
v___x_4183_ = v___x_4177_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v___x_4181_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
else
{
lean_object* v_val_4185_; lean_object* v___x_4186_; 
lean_del_object(v___x_4177_);
lean_dec(v_a_4175_);
lean_dec(v_idx_4172_);
lean_dec(v_typeName_4171_);
v_val_4185_ = lean_ctor_get(v___x_4179_, 0);
lean_inc(v_val_4185_);
lean_dec_ref_known(v___x_4179_, 1);
v___x_4186_ = l_Lean_mkAppN(v_val_4185_, v___x_4163_);
lean_dec_ref(v___x_4163_);
v_e_4153_ = v___x_4186_;
goto _start;
}
}
}
else
{
lean_dec(v_idx_4172_);
lean_dec(v_typeName_4171_);
lean_dec_ref(v___x_4163_);
lean_dec_ref(v_env_4157_);
return v___x_4174_;
}
}
case 4:
{
lean_object* v_declName_4189_; lean_object* v_us_4190_; lean_object* v___x_4191_; 
v_declName_4189_ = lean_ctor_get(v___x_4164_, 0);
lean_inc_n(v_declName_4189_, 2);
v_us_4190_ = lean_ctor_get(v___x_4164_, 1);
lean_inc(v_us_4190_);
lean_inc_ref(v_env_4157_);
v___x_4191_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_4157_, v_declName_4189_);
if (lean_obj_tag(v___x_4191_) == 1)
{
lean_object* v_val_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4222_; 
lean_dec(v_us_4190_);
lean_dec(v_declName_4189_);
v_val_4192_ = lean_ctor_get(v___x_4191_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4191_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4194_ = v___x_4191_;
v_isShared_4195_ = v_isSharedCheck_4222_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_val_4192_);
lean_dec(v___x_4191_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4222_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v_numParams_4196_; lean_object* v_i_4197_; lean_object* v___x_4198_; uint8_t v___x_4199_; 
v_numParams_4196_ = lean_ctor_get(v_val_4192_, 1);
lean_inc(v_numParams_4196_);
v_i_4197_ = lean_ctor_get(v_val_4192_, 2);
lean_inc(v_i_4197_);
lean_dec(v_val_4192_);
v___x_4198_ = lean_array_get_size(v___x_4163_);
v___x_4199_ = lean_nat_dec_lt(v_numParams_4196_, v___x_4198_);
if (v___x_4199_ == 0)
{
lean_object* v___x_4201_; 
lean_dec(v_i_4197_);
lean_dec(v_numParams_4196_);
lean_dec_ref_known(v___x_4164_, 2);
lean_dec_ref(v___x_4163_);
lean_dec_ref(v_env_4157_);
if (v_isShared_4195_ == 0)
{
lean_ctor_set_tag(v___x_4194_, 0);
lean_ctor_set(v___x_4194_, 0, v_e_4153_);
v___x_4201_ = v___x_4194_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_e_4153_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
else
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
lean_del_object(v___x_4194_);
lean_dec_ref(v_e_4153_);
v___x_4203_ = lean_array_fget(v___x_4163_, v_numParams_4196_);
v___x_4204_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(v___x_4203_, v_a_4154_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4221_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4207_ = v___x_4204_;
v_isShared_4208_ = v_isSharedCheck_4221_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4204_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4221_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4209_; 
lean_inc(v_a_4205_);
v___x_4209_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f(v_env_4157_, v_a_4205_, v_i_4197_);
lean_dec(v_i_4197_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4213_; 
v___x_4210_ = lean_array_set(v___x_4163_, v_numParams_4196_, v_a_4205_);
lean_dec(v_numParams_4196_);
v___x_4211_ = l_Lean_mkAppN(v___x_4164_, v___x_4210_);
lean_dec_ref(v___x_4210_);
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 0, v___x_4211_);
v___x_4213_ = v___x_4207_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v___x_4211_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
else
{
lean_object* v_val_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
lean_del_object(v___x_4207_);
lean_dec(v_a_4205_);
lean_dec_ref_known(v___x_4164_, 2);
v_val_4215_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_val_4215_);
lean_dec_ref_known(v___x_4209_, 1);
v___x_4216_ = lean_nat_add(v_numParams_4196_, v___x_4161_);
lean_dec(v_numParams_4196_);
v___x_4217_ = l_Array_toSubarray___redArg(v___x_4163_, v___x_4216_, v___x_4198_);
v___x_4218_ = l_Subarray_copy___redArg(v___x_4217_);
v___x_4219_ = l_Lean_mkAppN(v_val_4215_, v___x_4218_);
lean_dec_ref(v___x_4218_);
v_e_4153_ = v___x_4219_;
goto _start;
}
}
}
else
{
lean_dec(v_i_4197_);
lean_dec(v_numParams_4196_);
lean_dec_ref_known(v___x_4164_, 2);
lean_dec_ref(v___x_4163_);
lean_dec_ref(v_env_4157_);
return v___x_4204_;
}
}
}
}
else
{
uint8_t v___x_4223_; 
lean_dec(v___x_4191_);
lean_dec_ref_known(v___x_4164_, 2);
lean_inc(v_declName_4189_);
lean_inc_ref(v_env_4157_);
v___x_4223_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isGlue(v_env_4157_, v_declName_4189_);
if (v___x_4223_ == 0)
{
lean_object* v___x_4224_; 
lean_dec(v_us_4190_);
lean_dec(v_declName_4189_);
lean_dec_ref(v___x_4163_);
lean_dec_ref(v_env_4157_);
v___x_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4224_, 0, v_e_4153_);
return v___x_4224_;
}
else
{
uint8_t v___x_4225_; lean_object* v___x_4226_; 
v___x_4225_ = 0;
v___x_4226_ = l_Lean_Environment_find_x3f(v_env_4157_, v_declName_4189_, v___x_4225_);
if (lean_obj_tag(v___x_4226_) == 1)
{
lean_object* v_val_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4241_; 
v_val_4227_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4241_ == 0)
{
v___x_4229_ = v___x_4226_;
v_isShared_4230_ = v_isSharedCheck_4241_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_val_4227_);
lean_dec(v___x_4226_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4241_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
if (lean_obj_tag(v_val_4227_) == 1)
{
lean_object* v_val_4231_; lean_object* v_toConstantVal_4232_; lean_object* v_value_4233_; lean_object* v_levelParams_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
lean_del_object(v___x_4229_);
lean_dec_ref(v_e_4153_);
v_val_4231_ = lean_ctor_get(v_val_4227_, 0);
lean_inc_ref(v_val_4231_);
lean_dec_ref_known(v_val_4227_, 1);
v_toConstantVal_4232_ = lean_ctor_get(v_val_4231_, 0);
lean_inc_ref(v_toConstantVal_4232_);
v_value_4233_ = lean_ctor_get(v_val_4231_, 1);
lean_inc_ref(v_value_4233_);
lean_dec_ref(v_val_4231_);
v_levelParams_4234_ = lean_ctor_get(v_toConstantVal_4232_, 1);
lean_inc(v_levelParams_4234_);
lean_dec_ref(v_toConstantVal_4232_);
v___x_4235_ = l_Lean_Expr_instantiateLevelParams(v_value_4233_, v_levelParams_4234_, v_us_4190_);
lean_dec_ref(v_value_4233_);
v___x_4236_ = l_Lean_Expr_beta(v___x_4235_, v___x_4163_);
v_e_4153_ = v___x_4236_;
goto _start;
}
else
{
lean_object* v___x_4239_; 
lean_dec(v_val_4227_);
lean_dec(v_us_4190_);
lean_dec_ref(v___x_4163_);
if (v_isShared_4230_ == 0)
{
lean_ctor_set_tag(v___x_4229_, 0);
lean_ctor_set(v___x_4229_, 0, v_e_4153_);
v___x_4239_ = v___x_4229_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v_e_4153_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
}
else
{
lean_object* v___x_4242_; 
lean_dec(v___x_4226_);
lean_dec(v_us_4190_);
lean_dec_ref(v___x_4163_);
v___x_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4242_, 0, v_e_4153_);
return v___x_4242_;
}
}
}
}
default: 
{
lean_object* v___x_4243_; 
lean_dec_ref(v___x_4164_);
lean_dec_ref(v___x_4163_);
lean_dec_ref(v_env_4157_);
v___x_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4243_, 0, v_e_4153_);
return v___x_4243_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg___boxed(lean_object* v_e_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_){
_start:
{
lean_object* v_res_4247_; 
v_res_4247_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(v_e_4244_, v_a_4245_);
lean_dec(v_a_4245_);
return v_res_4247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue(lean_object* v_e_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_){
_start:
{
lean_object* v___x_4252_; 
v___x_4252_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(v_e_4248_, v_a_4250_);
return v___x_4252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___boxed(lean_object* v_e_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_){
_start:
{
lean_object* v_res_4257_; 
v_res_4257_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue(v_e_4253_, v_a_4254_, v_a_4255_);
lean_dec(v_a_4255_);
lean_dec_ref(v_a_4254_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(lean_object* v_e_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_){
_start:
{
lean_object* v___x_4262_; 
v___x_4262_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_whnfGlue___redArg(v_e_4258_, v_a_4260_);
if (lean_obj_tag(v___x_4262_) == 0)
{
lean_object* v_a_4263_; 
v_a_4263_ = lean_ctor_get(v___x_4262_, 0);
lean_inc(v_a_4263_);
switch(lean_obj_tag(v_a_4263_))
{
case 5:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; 
lean_dec_ref_known(v___x_4262_, 1);
v___x_4264_ = l_Lean_Expr_getAppFn(v_a_4263_);
v___x_4265_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v___x_4264_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4265_) == 0)
{
lean_object* v_a_4266_; lean_object* v_dummy_4267_; lean_object* v_nargs_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; size_t v_sz_4273_; size_t v___x_4274_; lean_object* v___x_4275_; 
v_a_4266_ = lean_ctor_get(v___x_4265_, 0);
lean_inc(v_a_4266_);
lean_dec_ref_known(v___x_4265_, 1);
v_dummy_4267_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_ctorField_x3f___closed__0);
v_nargs_4268_ = l_Lean_Expr_getAppNumArgs(v_a_4263_);
lean_inc(v_nargs_4268_);
v___x_4269_ = lean_mk_array(v_nargs_4268_, v_dummy_4267_);
v___x_4270_ = lean_unsigned_to_nat(1u);
v___x_4271_ = lean_nat_sub(v_nargs_4268_, v___x_4270_);
lean_dec(v_nargs_4268_);
v___x_4272_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_4263_, v___x_4269_, v___x_4271_);
v_sz_4273_ = lean_array_size(v___x_4272_);
v___x_4274_ = ((size_t)0ULL);
v___x_4275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue_spec__0(v_sz_4273_, v___x_4274_, v___x_4272_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4275_) == 0)
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4284_; 
v_a_4276_ = lean_ctor_get(v___x_4275_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4275_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4278_ = v___x_4275_;
v_isShared_4279_ = v_isSharedCheck_4284_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___x_4275_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4284_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4280_; lean_object* v___x_4282_; 
v___x_4280_ = l_Lean_mkAppN(v_a_4266_, v_a_4276_);
lean_dec(v_a_4276_);
if (v_isShared_4279_ == 0)
{
lean_ctor_set(v___x_4278_, 0, v___x_4280_);
v___x_4282_ = v___x_4278_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v___x_4280_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
else
{
lean_object* v_a_4285_; lean_object* v___x_4287_; uint8_t v_isShared_4288_; uint8_t v_isSharedCheck_4292_; 
lean_dec(v_a_4266_);
v_a_4285_ = lean_ctor_get(v___x_4275_, 0);
v_isSharedCheck_4292_ = !lean_is_exclusive(v___x_4275_);
if (v_isSharedCheck_4292_ == 0)
{
v___x_4287_ = v___x_4275_;
v_isShared_4288_ = v_isSharedCheck_4292_;
goto v_resetjp_4286_;
}
else
{
lean_inc(v_a_4285_);
lean_dec(v___x_4275_);
v___x_4287_ = lean_box(0);
v_isShared_4288_ = v_isSharedCheck_4292_;
goto v_resetjp_4286_;
}
v_resetjp_4286_:
{
lean_object* v___x_4290_; 
if (v_isShared_4288_ == 0)
{
v___x_4290_ = v___x_4287_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v_a_4285_);
v___x_4290_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
return v___x_4290_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_4263_, 2);
return v___x_4265_;
}
}
case 6:
{
lean_object* v_binderName_4293_; lean_object* v_binderType_4294_; lean_object* v_body_4295_; uint8_t v_binderInfo_4296_; lean_object* v___x_4297_; 
lean_dec_ref_known(v___x_4262_, 1);
v_binderName_4293_ = lean_ctor_get(v_a_4263_, 0);
lean_inc(v_binderName_4293_);
v_binderType_4294_ = lean_ctor_get(v_a_4263_, 1);
lean_inc_ref(v_binderType_4294_);
v_body_4295_ = lean_ctor_get(v_a_4263_, 2);
lean_inc_ref(v_body_4295_);
v_binderInfo_4296_ = lean_ctor_get_uint8(v_a_4263_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4263_, 3);
v___x_4297_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_binderType_4294_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4299_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
v___x_4299_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_body_4295_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4308_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4308_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4308_ == 0)
{
v___x_4302_ = v___x_4299_;
v_isShared_4303_ = v_isSharedCheck_4308_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_dec(v___x_4299_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4308_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4304_; lean_object* v___x_4306_; 
v___x_4304_ = l_Lean_Expr_lam___override(v_binderName_4293_, v_a_4298_, v_a_4300_, v_binderInfo_4296_);
if (v_isShared_4303_ == 0)
{
lean_ctor_set(v___x_4302_, 0, v___x_4304_);
v___x_4306_ = v___x_4302_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4307_; 
v_reuseFailAlloc_4307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4307_, 0, v___x_4304_);
v___x_4306_ = v_reuseFailAlloc_4307_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
return v___x_4306_;
}
}
}
else
{
lean_dec(v_a_4298_);
lean_dec(v_binderName_4293_);
return v___x_4299_;
}
}
else
{
lean_dec_ref(v_body_4295_);
lean_dec(v_binderName_4293_);
return v___x_4297_;
}
}
case 7:
{
lean_object* v_binderName_4309_; lean_object* v_binderType_4310_; lean_object* v_body_4311_; uint8_t v_binderInfo_4312_; lean_object* v___x_4313_; 
lean_dec_ref_known(v___x_4262_, 1);
v_binderName_4309_ = lean_ctor_get(v_a_4263_, 0);
lean_inc(v_binderName_4309_);
v_binderType_4310_ = lean_ctor_get(v_a_4263_, 1);
lean_inc_ref(v_binderType_4310_);
v_body_4311_ = lean_ctor_get(v_a_4263_, 2);
lean_inc_ref(v_body_4311_);
v_binderInfo_4312_ = lean_ctor_get_uint8(v_a_4263_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4263_, 3);
v___x_4313_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_binderType_4310_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4313_) == 0)
{
lean_object* v_a_4314_; lean_object* v___x_4315_; 
v_a_4314_ = lean_ctor_get(v___x_4313_, 0);
lean_inc(v_a_4314_);
lean_dec_ref_known(v___x_4313_, 1);
v___x_4315_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_body_4311_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4315_) == 0)
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4324_; 
v_a_4316_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4318_ = v___x_4315_;
v_isShared_4319_ = v_isSharedCheck_4324_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v___x_4315_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4324_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
lean_object* v___x_4320_; lean_object* v___x_4322_; 
v___x_4320_ = l_Lean_Expr_forallE___override(v_binderName_4309_, v_a_4314_, v_a_4316_, v_binderInfo_4312_);
if (v_isShared_4319_ == 0)
{
lean_ctor_set(v___x_4318_, 0, v___x_4320_);
v___x_4322_ = v___x_4318_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v___x_4320_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
return v___x_4322_;
}
}
}
else
{
lean_dec(v_a_4314_);
lean_dec(v_binderName_4309_);
return v___x_4315_;
}
}
else
{
lean_dec_ref(v_body_4311_);
lean_dec(v_binderName_4309_);
return v___x_4313_;
}
}
case 8:
{
lean_object* v_declName_4325_; lean_object* v_type_4326_; lean_object* v_value_4327_; lean_object* v_body_4328_; uint8_t v_nondep_4329_; lean_object* v___x_4330_; 
lean_dec_ref_known(v___x_4262_, 1);
v_declName_4325_ = lean_ctor_get(v_a_4263_, 0);
lean_inc(v_declName_4325_);
v_type_4326_ = lean_ctor_get(v_a_4263_, 1);
lean_inc_ref(v_type_4326_);
v_value_4327_ = lean_ctor_get(v_a_4263_, 2);
lean_inc_ref(v_value_4327_);
v_body_4328_ = lean_ctor_get(v_a_4263_, 3);
lean_inc_ref(v_body_4328_);
v_nondep_4329_ = lean_ctor_get_uint8(v_a_4263_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4263_, 4);
v___x_4330_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_type_4326_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; lean_object* v___x_4332_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v___x_4330_, 1);
v___x_4332_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_value_4327_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v___x_4334_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
lean_inc(v_a_4333_);
lean_dec_ref_known(v___x_4332_, 1);
v___x_4334_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_body_4328_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4334_) == 0)
{
lean_object* v_a_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4343_; 
v_a_4335_ = lean_ctor_get(v___x_4334_, 0);
v_isSharedCheck_4343_ = !lean_is_exclusive(v___x_4334_);
if (v_isSharedCheck_4343_ == 0)
{
v___x_4337_ = v___x_4334_;
v_isShared_4338_ = v_isSharedCheck_4343_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_a_4335_);
lean_dec(v___x_4334_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4343_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4339_; lean_object* v___x_4341_; 
v___x_4339_ = l_Lean_Expr_letE___override(v_declName_4325_, v_a_4331_, v_a_4333_, v_a_4335_, v_nondep_4329_);
if (v_isShared_4338_ == 0)
{
lean_ctor_set(v___x_4337_, 0, v___x_4339_);
v___x_4341_ = v___x_4337_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4342_; 
v_reuseFailAlloc_4342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4342_, 0, v___x_4339_);
v___x_4341_ = v_reuseFailAlloc_4342_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
return v___x_4341_;
}
}
}
else
{
lean_dec(v_a_4333_);
lean_dec(v_a_4331_);
lean_dec(v_declName_4325_);
return v___x_4334_;
}
}
else
{
lean_dec(v_a_4331_);
lean_dec_ref(v_body_4328_);
lean_dec(v_declName_4325_);
return v___x_4332_;
}
}
else
{
lean_dec_ref(v_body_4328_);
lean_dec_ref(v_value_4327_);
lean_dec(v_declName_4325_);
return v___x_4330_;
}
}
case 10:
{
lean_object* v_data_4344_; lean_object* v_expr_4345_; lean_object* v___x_4346_; 
lean_dec_ref_known(v___x_4262_, 1);
v_data_4344_ = lean_ctor_get(v_a_4263_, 0);
lean_inc(v_data_4344_);
v_expr_4345_ = lean_ctor_get(v_a_4263_, 1);
lean_inc_ref(v_expr_4345_);
lean_dec_ref_known(v_a_4263_, 2);
v___x_4346_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_expr_4345_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4346_) == 0)
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4355_; 
v_a_4347_ = lean_ctor_get(v___x_4346_, 0);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4346_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4349_ = v___x_4346_;
v_isShared_4350_ = v_isSharedCheck_4355_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4346_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4355_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4351_; lean_object* v___x_4353_; 
v___x_4351_ = l_Lean_Expr_mdata___override(v_data_4344_, v_a_4347_);
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 0, v___x_4351_);
v___x_4353_ = v___x_4349_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v___x_4351_);
v___x_4353_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
return v___x_4353_;
}
}
}
else
{
lean_dec(v_data_4344_);
return v___x_4346_;
}
}
case 11:
{
lean_object* v_typeName_4356_; lean_object* v_idx_4357_; lean_object* v_struct_4358_; lean_object* v___x_4359_; 
lean_dec_ref_known(v___x_4262_, 1);
v_typeName_4356_ = lean_ctor_get(v_a_4263_, 0);
lean_inc(v_typeName_4356_);
v_idx_4357_ = lean_ctor_get(v_a_4263_, 1);
lean_inc(v_idx_4357_);
v_struct_4358_ = lean_ctor_get(v_a_4263_, 2);
lean_inc_ref(v_struct_4358_);
lean_dec_ref_known(v_a_4263_, 3);
v___x_4359_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_struct_4358_, v_a_4259_, v_a_4260_);
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4368_; 
v_a_4360_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4362_ = v___x_4359_;
v_isShared_4363_ = v_isSharedCheck_4368_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4359_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4368_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4364_; lean_object* v___x_4366_; 
v___x_4364_ = l_Lean_Expr_proj___override(v_typeName_4356_, v_idx_4357_, v_a_4360_);
if (v_isShared_4363_ == 0)
{
lean_ctor_set(v___x_4362_, 0, v___x_4364_);
v___x_4366_ = v___x_4362_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v___x_4364_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
else
{
lean_dec(v_idx_4357_);
lean_dec(v_typeName_4356_);
return v___x_4359_;
}
}
default: 
{
lean_dec(v_a_4263_);
return v___x_4262_;
}
}
}
else
{
return v___x_4262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue_spec__0(size_t v_sz_4369_, size_t v_i_4370_, lean_object* v_bs_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
uint8_t v___x_4375_; 
v___x_4375_ = lean_usize_dec_lt(v_i_4370_, v_sz_4369_);
if (v___x_4375_ == 0)
{
lean_object* v___x_4376_; 
v___x_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4376_, 0, v_bs_4371_);
return v___x_4376_;
}
else
{
lean_object* v_v_4377_; lean_object* v___x_4378_; lean_object* v_bs_x27_4379_; lean_object* v___x_4380_; 
v_v_4377_ = lean_array_uget(v_bs_4371_, v_i_4370_);
v___x_4378_ = lean_unsigned_to_nat(0u);
v_bs_x27_4379_ = lean_array_uset(v_bs_4371_, v_i_4370_, v___x_4378_);
v___x_4380_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_v_4377_, v___y_4372_, v___y_4373_);
if (lean_obj_tag(v___x_4380_) == 0)
{
lean_object* v_a_4381_; size_t v___x_4382_; size_t v___x_4383_; lean_object* v___x_4384_; 
v_a_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc(v_a_4381_);
lean_dec_ref_known(v___x_4380_, 1);
v___x_4382_ = ((size_t)1ULL);
v___x_4383_ = lean_usize_add(v_i_4370_, v___x_4382_);
v___x_4384_ = lean_array_uset(v_bs_x27_4379_, v_i_4370_, v_a_4381_);
v_i_4370_ = v___x_4383_;
v_bs_4371_ = v___x_4384_;
goto _start;
}
else
{
lean_object* v_a_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4393_; 
lean_dec_ref(v_bs_x27_4379_);
v_a_4386_ = lean_ctor_get(v___x_4380_, 0);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4380_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4388_ = v___x_4380_;
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_a_4386_);
lean_dec(v___x_4380_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4391_; 
if (v_isShared_4389_ == 0)
{
v___x_4391_ = v___x_4388_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_a_4386_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue_spec__0___boxed(lean_object* v_sz_4394_, lean_object* v_i_4395_, lean_object* v_bs_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_){
_start:
{
size_t v_sz_boxed_4400_; size_t v_i_boxed_4401_; lean_object* v_res_4402_; 
v_sz_boxed_4400_ = lean_unbox_usize(v_sz_4394_);
lean_dec(v_sz_4394_);
v_i_boxed_4401_ = lean_unbox_usize(v_i_4395_);
lean_dec(v_i_4395_);
v_res_4402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue_spec__0(v_sz_boxed_4400_, v_i_boxed_4401_, v_bs_4396_, v___y_4397_, v___y_4398_);
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4397_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue___boxed(lean_object* v_e_4403_, lean_object* v_a_4404_, lean_object* v_a_4405_, lean_object* v_a_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_e_4403_, v_a_4404_, v_a_4405_);
lean_dec(v_a_4405_);
lean_dec_ref(v_a_4404_);
return v_res_4407_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0(lean_object* v___x_4409_, lean_object* v___x_4410_, lean_object* v___x_4411_, uint8_t v___x_4412_, lean_object* v_e_4413_){
_start:
{
uint8_t v___x_4414_; 
v___x_4414_ = l_Lean_Expr_isConstOf(v_e_4413_, v___x_4409_);
if (v___x_4414_ == 0)
{
lean_object* v___x_4415_; lean_object* v___x_4416_; uint8_t v___x_4417_; 
v___x_4415_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___closed__0));
v___x_4416_ = l_Lean_Name_mkStr3(v___x_4410_, v___x_4411_, v___x_4415_);
v___x_4417_ = l_Lean_Expr_isConstOf(v_e_4413_, v___x_4416_);
lean_dec(v___x_4416_);
return v___x_4417_;
}
else
{
lean_dec_ref(v___x_4411_);
lean_dec_ref(v___x_4410_);
return v___x_4412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0___boxed(lean_object* v___x_4418_, lean_object* v___x_4419_, lean_object* v___x_4420_, lean_object* v___x_4421_, lean_object* v_e_4422_){
_start:
{
uint8_t v___x_1593__boxed_4423_; uint8_t v_res_4424_; lean_object* v_r_4425_; 
v___x_1593__boxed_4423_ = lean_unbox(v___x_4421_);
v_res_4424_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__0(v___x_4418_, v___x_4419_, v___x_4420_, v___x_1593__boxed_4423_, v_e_4422_);
lean_dec_ref(v_e_4422_);
lean_dec(v___x_4418_);
v_r_4425_ = lean_box(v_res_4424_);
return v_r_4425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__1(lean_object* v___x_4426_, lean_object* v___x_4427_, lean_object* v___f_4428_, lean_object* v_e_4429_, lean_object* v_a_4430_, lean_object* v_x_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; lean_object* v___x_4438_; 
lean_inc_ref(v_x_4431_);
v___x_4437_ = lean_array_push(v___x_4426_, v_x_4431_);
v___x_4438_ = l_Lean_Meta_mkAppM(v___x_4427_, v___x_4437_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4438_) == 0)
{
lean_object* v_a_4439_; lean_object* v___x_4440_; lean_object* v_a_4441_; lean_object* v___x_4442_; 
v_a_4439_ = lean_ctor_get(v___x_4438_, 0);
lean_inc(v_a_4439_);
lean_dec_ref_known(v___x_4438_, 1);
v___x_4440_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_4439_, v___y_4433_);
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4441_);
lean_dec_ref(v___x_4440_);
v___x_4442_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_unfoldGlue(v_a_4441_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4455_; 
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4445_ = v___x_4442_;
v_isShared_4446_ = v_isSharedCheck_4455_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4442_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4455_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4447_; 
v___x_4447_ = lean_find_expr(v___f_4428_, v_a_4443_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v___x_4448_; lean_object* v___x_4450_; 
lean_dec_ref(v_a_4430_);
v___x_4448_ = l_Lean_Expr_replaceFVar(v_a_4443_, v_x_4431_, v_e_4429_);
lean_dec(v_a_4443_);
if (v_isShared_4446_ == 0)
{
lean_ctor_set(v___x_4445_, 0, v___x_4448_);
v___x_4450_ = v___x_4445_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4448_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
else
{
lean_object* v___x_4453_; 
lean_dec_ref_known(v___x_4447_, 1);
lean_dec(v_a_4443_);
lean_dec_ref(v_x_4431_);
if (v_isShared_4446_ == 0)
{
lean_ctor_set(v___x_4445_, 0, v_a_4430_);
v___x_4453_ = v___x_4445_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4430_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
else
{
lean_dec_ref(v_x_4431_);
lean_dec_ref(v_a_4430_);
return v___x_4442_;
}
}
else
{
lean_dec_ref(v_x_4431_);
lean_dec_ref(v_a_4430_);
return v___x_4438_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__1___boxed(lean_object* v___x_4456_, lean_object* v___x_4457_, lean_object* v___f_4458_, lean_object* v_e_4459_, lean_object* v_a_4460_, lean_object* v_x_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_){
_start:
{
lean_object* v_res_4467_; 
v_res_4467_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__1(v___x_4456_, v___x_4457_, v___f_4458_, v_e_4459_, v_a_4460_, v_x_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_);
lean_dec(v___y_4465_);
lean_dec_ref(v___y_4464_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec_ref(v_e_4459_);
lean_dec_ref(v___f_4458_);
return v_res_4467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___lam__0(lean_object* v_k_4468_, lean_object* v_b_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_){
_start:
{
lean_object* v___x_4475_; 
lean_inc(v___y_4473_);
lean_inc_ref(v___y_4472_);
lean_inc(v___y_4471_);
lean_inc_ref(v___y_4470_);
v___x_4475_ = lean_apply_6(v_k_4468_, v_b_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_, lean_box(0));
return v___x_4475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_4476_, lean_object* v_b_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_){
_start:
{
lean_object* v_res_4483_; 
v_res_4483_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___lam__0(v_k_4476_, v_b_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
lean_dec(v___y_4481_);
lean_dec_ref(v___y_4480_);
lean_dec(v___y_4479_);
lean_dec_ref(v___y_4478_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg(lean_object* v_name_4484_, uint8_t v_bi_4485_, lean_object* v_type_4486_, lean_object* v_k_4487_, uint8_t v_kind_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_){
_start:
{
lean_object* v___f_4494_; lean_object* v___x_4495_; 
v___f_4494_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4494_, 0, v_k_4487_);
v___x_4495_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4484_, v_bi_4485_, v_type_4486_, v___f_4494_, v_kind_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_);
if (lean_obj_tag(v___x_4495_) == 0)
{
lean_object* v_a_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4503_; 
v_a_4496_ = lean_ctor_get(v___x_4495_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4495_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4498_ = v___x_4495_;
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_a_4496_);
lean_dec(v___x_4495_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4496_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
return v___x_4501_;
}
}
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
v_a_4504_ = lean_ctor_get(v___x_4495_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4495_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4495_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4495_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg___boxed(lean_object* v_name_4512_, lean_object* v_bi_4513_, lean_object* v_type_4514_, lean_object* v_k_4515_, lean_object* v_kind_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
uint8_t v_bi_boxed_4522_; uint8_t v_kind_boxed_4523_; lean_object* v_res_4524_; 
v_bi_boxed_4522_ = lean_unbox(v_bi_4513_);
v_kind_boxed_4523_ = lean_unbox(v_kind_4516_);
v_res_4524_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg(v_name_4512_, v_bi_boxed_4522_, v_type_4514_, v_k_4515_, v_kind_boxed_4523_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
lean_dec(v___y_4518_);
lean_dec_ref(v___y_4517_);
return v_res_4524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg(lean_object* v_name_4525_, lean_object* v_type_4526_, lean_object* v_k_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
uint8_t v___x_4533_; uint8_t v___x_4534_; lean_object* v___x_4535_; 
v___x_4533_ = 0;
v___x_4534_ = 0;
v___x_4535_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg(v_name_4525_, v___x_4533_, v_type_4526_, v_k_4527_, v___x_4534_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_);
return v___x_4535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg___boxed(lean_object* v_name_4536_, lean_object* v_type_4537_, lean_object* v_k_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
lean_object* v_res_4544_; 
v_res_4544_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg(v_name_4536_, v_type_4537_, v_k_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong(lean_object* v_equiv_4559_, lean_object* v_e_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_, lean_object* v_a_4564_){
_start:
{
lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4566_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__1));
v___x_4567_ = lean_unsigned_to_nat(2u);
v___x_4568_ = lean_mk_empty_array_with_capacity(v___x_4567_);
v___x_4569_ = lean_array_push(v___x_4568_, v_equiv_4559_);
lean_inc_ref(v_e_4560_);
lean_inc_ref(v___x_4569_);
v___x_4570_ = lean_array_push(v___x_4569_, v_e_4560_);
v___x_4571_ = l_Lean_Meta_mkAppM(v___x_4566_, v___x_4570_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_);
if (lean_obj_tag(v___x_4571_) == 0)
{
lean_object* v_a_4572_; lean_object* v___x_4573_; 
v_a_4572_ = lean_ctor_get(v___x_4571_, 0);
lean_inc_n(v_a_4572_, 2);
lean_dec_ref_known(v___x_4571_, 1);
lean_inc(v_a_4564_);
lean_inc_ref(v_a_4563_);
lean_inc(v_a_4562_);
lean_inc_ref(v_a_4561_);
v___x_4573_ = lean_infer_type(v_a_4572_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_);
if (lean_obj_tag(v___x_4573_) == 0)
{
lean_object* v_a_4574_; lean_object* v___x_4575_; 
v_a_4574_ = lean_ctor_get(v___x_4573_, 0);
lean_inc(v_a_4574_);
lean_dec_ref_known(v___x_4573_, 1);
v___x_4575_ = l_Lean_Meta_isProp(v_a_4574_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_);
if (lean_obj_tag(v___x_4575_) == 0)
{
lean_object* v_a_4576_; lean_object* v___x_4578_; uint8_t v_isShared_4579_; uint8_t v_isSharedCheck_4590_; 
v_a_4576_ = lean_ctor_get(v___x_4575_, 0);
v_isSharedCheck_4590_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4590_ == 0)
{
v___x_4578_ = v___x_4575_;
v_isShared_4579_ = v_isSharedCheck_4590_;
goto v_resetjp_4577_;
}
else
{
lean_inc(v_a_4576_);
lean_dec(v___x_4575_);
v___x_4578_ = lean_box(0);
v_isShared_4579_ = v_isSharedCheck_4590_;
goto v_resetjp_4577_;
}
v_resetjp_4577_:
{
uint8_t v___x_4580_; 
v___x_4580_ = lean_unbox(v_a_4576_);
lean_dec(v_a_4576_);
if (v___x_4580_ == 0)
{
lean_object* v___f_4581_; lean_object* v___f_4582_; lean_object* v___x_4583_; 
lean_del_object(v___x_4578_);
v___f_4581_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__2));
lean_inc_ref(v_e_4560_);
v___f_4582_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___lam__1___boxed), 11, 5);
lean_closure_set(v___f_4582_, 0, v___x_4569_);
lean_closure_set(v___f_4582_, 1, v___x_4566_);
lean_closure_set(v___f_4582_, 2, v___f_4581_);
lean_closure_set(v___f_4582_, 3, v_e_4560_);
lean_closure_set(v___f_4582_, 4, v_a_4572_);
lean_inc(v_a_4564_);
lean_inc_ref(v_a_4563_);
lean_inc(v_a_4562_);
lean_inc_ref(v_a_4561_);
v___x_4583_ = lean_infer_type(v_e_4560_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_);
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 0);
lean_inc(v_a_4584_);
lean_dec_ref_known(v___x_4583_, 1);
v___x_4585_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___closed__4));
v___x_4586_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg(v___x_4585_, v_a_4584_, v___f_4582_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_);
return v___x_4586_;
}
else
{
lean_dec_ref(v___f_4582_);
return v___x_4583_;
}
}
else
{
lean_object* v___x_4588_; 
lean_dec_ref(v___x_4569_);
lean_dec_ref(v_e_4560_);
if (v_isShared_4579_ == 0)
{
lean_ctor_set(v___x_4578_, 0, v_a_4572_);
v___x_4588_ = v___x_4578_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v_a_4572_);
v___x_4588_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
return v___x_4588_;
}
}
}
}
else
{
lean_object* v_a_4591_; lean_object* v___x_4593_; uint8_t v_isShared_4594_; uint8_t v_isSharedCheck_4598_; 
lean_dec(v_a_4572_);
lean_dec_ref(v___x_4569_);
lean_dec_ref(v_e_4560_);
v_a_4591_ = lean_ctor_get(v___x_4575_, 0);
v_isSharedCheck_4598_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4598_ == 0)
{
v___x_4593_ = v___x_4575_;
v_isShared_4594_ = v_isSharedCheck_4598_;
goto v_resetjp_4592_;
}
else
{
lean_inc(v_a_4591_);
lean_dec(v___x_4575_);
v___x_4593_ = lean_box(0);
v_isShared_4594_ = v_isSharedCheck_4598_;
goto v_resetjp_4592_;
}
v_resetjp_4592_:
{
lean_object* v___x_4596_; 
if (v_isShared_4594_ == 0)
{
v___x_4596_ = v___x_4593_;
goto v_reusejp_4595_;
}
else
{
lean_object* v_reuseFailAlloc_4597_; 
v_reuseFailAlloc_4597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4597_, 0, v_a_4591_);
v___x_4596_ = v_reuseFailAlloc_4597_;
goto v_reusejp_4595_;
}
v_reusejp_4595_:
{
return v___x_4596_;
}
}
}
}
else
{
lean_dec(v_a_4572_);
lean_dec_ref(v___x_4569_);
lean_dec_ref(v_e_4560_);
return v___x_4573_;
}
}
else
{
lean_dec_ref(v___x_4569_);
lean_dec_ref(v_e_4560_);
return v___x_4571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong___boxed(lean_object* v_equiv_4599_, lean_object* v_e_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_){
_start:
{
lean_object* v_res_4606_; 
v_res_4606_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong(v_equiv_4599_, v_e_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_);
lean_dec(v_a_4604_);
lean_dec_ref(v_a_4603_);
lean_dec(v_a_4602_);
lean_dec_ref(v_a_4601_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0(lean_object* v_00_u03b1_4607_, lean_object* v_name_4608_, uint8_t v_bi_4609_, lean_object* v_type_4610_, lean_object* v_k_4611_, uint8_t v_kind_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_){
_start:
{
lean_object* v___x_4618_; 
v___x_4618_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___redArg(v_name_4608_, v_bi_4609_, v_type_4610_, v_k_4611_, v_kind_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
return v___x_4618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4619_, lean_object* v_name_4620_, lean_object* v_bi_4621_, lean_object* v_type_4622_, lean_object* v_k_4623_, lean_object* v_kind_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_){
_start:
{
uint8_t v_bi_boxed_4630_; uint8_t v_kind_boxed_4631_; lean_object* v_res_4632_; 
v_bi_boxed_4630_ = lean_unbox(v_bi_4621_);
v_kind_boxed_4631_ = lean_unbox(v_kind_4624_);
v_res_4632_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0_spec__0(v_00_u03b1_4619_, v_name_4620_, v_bi_boxed_4630_, v_type_4622_, v_k_4623_, v_kind_boxed_4631_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_);
lean_dec(v___y_4628_);
lean_dec_ref(v___y_4627_);
lean_dec(v___y_4626_);
lean_dec_ref(v___y_4625_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0(lean_object* v_00_u03b1_4633_, lean_object* v_name_4634_, lean_object* v_type_4635_, lean_object* v_k_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_){
_start:
{
lean_object* v___x_4642_; 
v___x_4642_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___redArg(v_name_4634_, v_type_4635_, v_k_4636_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_);
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0___boxed(lean_object* v_00_u03b1_4643_, lean_object* v_name_4644_, lean_object* v_type_4645_, lean_object* v_k_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
lean_object* v_res_4652_; 
v_res_4652_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong_spec__0(v_00_u03b1_4643_, v_name_4644_, v_type_4645_, v_k_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
return v_res_4652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport(lean_object* v_e_4653_, lean_object* v_tgt_4654_, lean_object* v_a_4655_, lean_object* v_a_4656_, lean_object* v_a_4657_, lean_object* v_a_4658_){
_start:
{
lean_object* v___x_4660_; 
lean_inc(v_a_4658_);
lean_inc_ref(v_a_4657_);
lean_inc(v_a_4656_);
lean_inc_ref(v_a_4655_);
lean_inc_ref(v_e_4653_);
v___x_4660_ = lean_infer_type(v_e_4653_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; lean_object* v___x_4662_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_a_4661_);
lean_dec_ref_known(v___x_4660_, 1);
v___x_4662_ = l_Lean_Meta_mkTransportEquiv(v_tgt_4654_, v_a_4661_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4664_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref_known(v___x_4662_, 1);
v___x_4664_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong(v_a_4663_, v_e_4653_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_);
return v___x_4664_;
}
else
{
lean_dec_ref(v_e_4653_);
return v___x_4662_;
}
}
else
{
lean_dec_ref(v_tgt_4654_);
lean_dec_ref(v_e_4653_);
return v___x_4660_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport___boxed(lean_object* v_e_4665_, lean_object* v_tgt_4666_, lean_object* v_a_4667_, lean_object* v_a_4668_, lean_object* v_a_4669_, lean_object* v_a_4670_, lean_object* v_a_4671_){
_start:
{
lean_object* v_res_4672_; 
v_res_4672_ = l_Lean_Meta_transport(v_e_4665_, v_tgt_4666_, v_a_4667_, v_a_4668_, v_a_4669_, v_a_4670_);
lean_dec(v_a_4670_);
lean_dec_ref(v_a_4669_);
lean_dec(v_a_4668_);
lean_dec_ref(v_a_4667_);
return v_res_4672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance(lean_object* v_src_4673_, lean_object* v_tgt_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_){
_start:
{
lean_object* v___x_4680_; 
lean_inc_ref(v_src_4673_);
v___x_4680_ = l_Lean_Meta_mkTransportEquiv(v_tgt_4674_, v_src_4673_, v_a_4675_, v_a_4676_, v_a_4677_, v_a_4678_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v_a_4681_; lean_object* v___x_4682_; lean_object* v_a_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; 
v_a_4681_ = lean_ctor_get(v___x_4680_, 0);
lean_inc(v_a_4681_);
lean_dec_ref_known(v___x_4680_, 1);
v___x_4682_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_src_4673_, v_a_4676_);
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
lean_inc(v_a_4683_);
lean_dec_ref(v___x_4682_);
v___x_4684_ = lean_box(0);
v___x_4685_ = l_Lean_Meta_synthInstance(v_a_4683_, v___x_4684_, v_a_4675_, v_a_4676_, v_a_4677_, v_a_4678_);
if (lean_obj_tag(v___x_4685_) == 0)
{
lean_object* v_a_4686_; lean_object* v___x_4687_; 
v_a_4686_ = lean_ctor_get(v___x_4685_, 0);
lean_inc(v_a_4686_);
lean_dec_ref_known(v___x_4685_, 1);
v___x_4687_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_moveAlong(v_a_4681_, v_a_4686_, v_a_4675_, v_a_4676_, v_a_4677_, v_a_4678_);
return v___x_4687_;
}
else
{
lean_dec(v_a_4681_);
return v___x_4685_;
}
}
else
{
lean_dec_ref(v_src_4673_);
return v___x_4680_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance___boxed(lean_object* v_src_4688_, lean_object* v_tgt_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_){
_start:
{
lean_object* v_res_4695_; 
v_res_4695_ = l_Lean_Meta_transportInstance(v_src_4688_, v_tgt_4689_, v_a_4690_, v_a_4691_, v_a_4692_, v_a_4693_);
lean_dec(v_a_4693_);
lean_dec_ref(v_a_4692_);
lean_dec(v_a_4691_);
lean_dec_ref(v_a_4690_);
return v_res_4695_;
}
}
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
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
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
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
res = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Transport_depthExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Transport_depthExceptionId);
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
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
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
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
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
