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
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
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
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "invalid `@[transport]` declaration `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "`, its explicit arguments must be equivalences, families of equivalences or equations, but `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5;
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
static const lean_string_object l_Lean_Meta_Transport_addTransportDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 80, .m_data = "`, its conclusion must be an equivalence `Lean.CanonicalEquivalence α β`, but is"};
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
static const lean_string_object l_Lean_Meta_transport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "invFun"};
static const lean_object* l_Lean_Meta_transport___closed__0 = (const lean_object*)&l_Lean_Meta_transport___closed__0_value;
static const lean_ctor_object l_Lean_Meta_transport___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_transport___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_transport___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 213, 153, 238, 45, 67, 100, 241)}};
static const lean_ctor_object l_Lean_Meta_transport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_transport___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_transport___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 19, 87, 156, 144, 227, 118, 98)}};
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
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0));
v___x_1038_ = l_Lean_stringToMessageData(v___x_1037_);
return v___x_1038_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2));
v___x_1041_ = l_Lean_stringToMessageData(v___x_1040_);
return v___x_1041_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4));
v___x_1044_ = l_Lean_stringToMessageData(v___x_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(lean_object* v_declName_1045_, lean_object* v_as_1046_, size_t v_sz_1047_, size_t v_i_1048_, lean_object* v_b_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_a_1056_; uint8_t v___x_1060_; 
v___x_1060_ = lean_usize_dec_lt(v_i_1048_, v_sz_1047_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_dec(v_declName_1045_);
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v_b_1049_);
return v___x_1061_;
}
else
{
lean_object* v_array_1062_; lean_object* v_start_1063_; lean_object* v_stop_1064_; uint8_t v___x_1065_; 
v_array_1062_ = lean_ctor_get(v_b_1049_, 0);
v_start_1063_ = lean_ctor_get(v_b_1049_, 1);
v_stop_1064_ = lean_ctor_get(v_b_1049_, 2);
v___x_1065_ = lean_nat_dec_lt(v_start_1063_, v_stop_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; 
lean_dec(v_declName_1045_);
v___x_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1066_, 0, v_b_1049_);
return v___x_1066_;
}
else
{
lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1135_; 
lean_inc(v_stop_1064_);
lean_inc(v_start_1063_);
lean_inc_ref(v_array_1062_);
v_isSharedCheck_1135_ = !lean_is_exclusive(v_b_1049_);
if (v_isSharedCheck_1135_ == 0)
{
lean_object* v_unused_1136_; lean_object* v_unused_1137_; lean_object* v_unused_1138_; 
v_unused_1136_ = lean_ctor_get(v_b_1049_, 2);
lean_dec(v_unused_1136_);
v_unused_1137_ = lean_ctor_get(v_b_1049_, 1);
lean_dec(v_unused_1137_);
v_unused_1138_ = lean_ctor_get(v_b_1049_, 0);
lean_dec(v_unused_1138_);
v___x_1068_ = v_b_1049_;
v_isShared_1069_ = v_isSharedCheck_1135_;
goto v_resetjp_1067_;
}
else
{
lean_dec(v_b_1049_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1135_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1074_; 
v___x_1070_ = lean_array_fget(v_array_1062_, v_start_1063_);
v___x_1071_ = lean_unsigned_to_nat(1u);
v___x_1072_ = lean_nat_add(v_start_1063_, v___x_1071_);
lean_dec(v_start_1063_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 1, v___x_1072_);
v___x_1074_ = v___x_1068_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_array_1062_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1134_, 2, v_stop_1064_);
v___x_1074_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
uint8_t v___x_1075_; uint8_t v___x_1076_; 
v___x_1075_ = lean_unbox(v___x_1070_);
lean_dec(v___x_1070_);
v___x_1076_ = l_Lean_BinderInfo_isExplicit(v___x_1075_);
if (v___x_1076_ == 0)
{
v_a_1056_ = v___x_1074_;
goto v___jp_1055_;
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v_a_1077_ = lean_array_uget_borrowed(v_as_1046_, v_i_1048_);
v___x_1078_ = l_Lean_Expr_mvarId_x21(v_a_1077_);
v___x_1079_ = l_Lean_MVarId_getDecl(v___x_1078_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v_userName_1081_; lean_object* v_type_1082_; lean_object* v___x_1083_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1079_, 1);
v_userName_1081_ = lean_ctor_get(v_a_1080_, 0);
lean_inc(v_userName_1081_);
v_type_1082_ = lean_ctor_get(v_a_1080_, 2);
lean_inc_ref(v_type_1082_);
lean_dec(v_a_1080_);
v___x_1083_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_1082_, v___y_1051_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc_n(v_a_1084_, 2);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_1084_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; uint8_t v___x_1087_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = l_Lean_Expr_isEq(v_a_1084_);
if (v___x_1087_ == 0)
{
uint8_t v___x_1088_; 
v___x_1088_ = lean_unbox(v_a_1086_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; uint8_t v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1089_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1);
v___x_1090_ = lean_unbox(v_a_1086_);
lean_dec(v_a_1086_);
lean_inc(v_declName_1045_);
v___x_1091_ = l_Lean_MessageData_ofConstName(v_declName_1045_, v___x_1090_);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1089_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3);
v___x_1094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = l_Lean_MessageData_ofName(v_userName_1081_);
v___x_1096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5);
v___x_1098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = l_Lean_indentExpr(v_a_1084_);
v___x_1100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1100_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_dec_ref_known(v___x_1101_, 1);
v_a_1056_ = v___x_1074_;
goto v___jp_1055_;
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
lean_dec_ref(v___x_1074_);
lean_dec(v_declName_1045_);
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
else
{
lean_dec(v_a_1086_);
lean_dec(v_a_1084_);
lean_dec(v_userName_1081_);
v_a_1056_ = v___x_1074_;
goto v___jp_1055_;
}
}
else
{
lean_dec(v_a_1086_);
lean_dec(v_a_1084_);
lean_dec(v_userName_1081_);
v_a_1056_ = v___x_1074_;
goto v___jp_1055_;
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_a_1084_);
lean_dec(v_userName_1081_);
lean_dec_ref(v___x_1074_);
lean_dec(v_declName_1045_);
v_a_1110_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1085_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1085_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec(v_userName_1081_);
lean_dec_ref(v___x_1074_);
lean_dec(v_declName_1045_);
v_a_1118_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1083_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1083_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v___x_1074_);
lean_dec(v_declName_1045_);
v_a_1126_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1079_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1079_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
}
}
}
v___jp_1055_:
{
size_t v___x_1057_; size_t v___x_1058_; 
v___x_1057_ = ((size_t)1ULL);
v___x_1058_ = lean_usize_add(v_i_1048_, v___x_1057_);
v_i_1048_ = v___x_1058_;
v_b_1049_ = v_a_1056_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___boxed(lean_object* v_declName_1139_, lean_object* v_as_1140_, lean_object* v_sz_1141_, lean_object* v_i_1142_, lean_object* v_b_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
size_t v_sz_boxed_1149_; size_t v_i_boxed_1150_; lean_object* v_res_1151_; 
v_sz_boxed_1149_ = lean_unbox_usize(v_sz_1141_);
lean_dec(v_sz_1141_);
v_i_boxed_1150_ = lean_unbox_usize(v_i_1142_);
lean_dec(v_i_1142_);
v_res_1151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1139_, v_as_1140_, v_sz_boxed_1149_, v_i_boxed_1150_, v_b_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec_ref(v_as_1140_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(lean_object* v_ref_1152_, lean_object* v_msg_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_toCold_1159_; lean_object* v_currRecDepth_1160_; lean_object* v_ref_1161_; uint8_t v_diag_1162_; uint8_t v_suppressElabErrors_1163_; lean_object* v_ref_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_toCold_1159_ = lean_ctor_get(v___y_1156_, 0);
v_currRecDepth_1160_ = lean_ctor_get(v___y_1156_, 1);
v_ref_1161_ = lean_ctor_get(v___y_1156_, 2);
v_diag_1162_ = lean_ctor_get_uint8(v___y_1156_, sizeof(void*)*3);
v_suppressElabErrors_1163_ = lean_ctor_get_uint8(v___y_1156_, sizeof(void*)*3 + 1);
v_ref_1164_ = l_Lean_replaceRef(v_ref_1152_, v_ref_1161_);
lean_inc(v_currRecDepth_1160_);
lean_inc_ref(v_toCold_1159_);
v___x_1165_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1165_, 0, v_toCold_1159_);
lean_ctor_set(v___x_1165_, 1, v_currRecDepth_1160_);
lean_ctor_set(v___x_1165_, 2, v_ref_1164_);
lean_ctor_set_uint8(v___x_1165_, sizeof(void*)*3, v_diag_1162_);
lean_ctor_set_uint8(v___x_1165_, sizeof(void*)*3 + 1, v_suppressElabErrors_1163_);
v___x_1166_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1153_, v___y_1154_, v___y_1155_, v___x_1165_, v___y_1157_);
lean_dec_ref_known(v___x_1165_, 3);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_ref_1167_, lean_object* v_msg_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1167_, v_msg_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v_ref_1167_);
return v_res_1174_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
lean_ctor_set(v___x_1179_, 2, v___x_1178_);
lean_ctor_set(v___x_1179_, 3, v___x_1178_);
lean_ctor_set(v___x_1179_, 4, v___x_1177_);
lean_ctor_set(v___x_1179_, 5, v___x_1177_);
lean_ctor_set(v___x_1179_, 6, v___x_1177_);
lean_ctor_set(v___x_1179_, 7, v___x_1177_);
lean_ctor_set(v___x_1179_, 8, v___x_1177_);
lean_ctor_set(v___x_1179_, 9, v___x_1177_);
lean_ctor_set(v___x_1179_, 10, v___x_1177_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = lean_unsigned_to_nat(32u);
v___x_1181_ = lean_mk_empty_array_with_capacity(v___x_1180_);
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
size_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1183_ = ((size_t)5ULL);
v___x_1184_ = lean_unsigned_to_nat(0u);
v___x_1185_ = lean_unsigned_to_nat(32u);
v___x_1186_ = lean_mk_empty_array_with_capacity(v___x_1185_);
v___x_1187_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_1188_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
lean_ctor_set(v___x_1188_, 1, v___x_1186_);
lean_ctor_set(v___x_1188_, 2, v___x_1184_);
lean_ctor_set(v___x_1188_, 3, v___x_1184_);
lean_ctor_set_usize(v___x_1188_, 4, v___x_1183_);
return v___x_1188_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1189_ = lean_box(1);
v___x_1190_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_1191_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_1192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v___x_1190_);
lean_ctor_set(v___x_1192_, 2, v___x_1189_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__5));
v___x_1195_ = l_Lean_stringToMessageData(v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__7));
v___x_1198_ = l_Lean_stringToMessageData(v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__9));
v___x_1201_ = l_Lean_stringToMessageData(v___x_1200_);
return v___x_1201_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__11));
v___x_1204_ = l_Lean_stringToMessageData(v___x_1203_);
return v___x_1204_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__13));
v___x_1207_ = l_Lean_stringToMessageData(v___x_1206_);
return v___x_1207_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16(void){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__15));
v___x_1210_ = l_Lean_stringToMessageData(v___x_1209_);
return v___x_1210_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18(void){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__17));
v___x_1213_ = l_Lean_stringToMessageData(v___x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_1214_, lean_object* v_declHint_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v_env_1220_; uint8_t v___x_1221_; 
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_st_ref_get(v___y_1216_);
v_env_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc_ref(v_env_1220_);
lean_dec(v___x_1219_);
v___x_1221_ = l_Lean_Name_isAnonymous(v_declHint_1215_);
if (v___x_1221_ == 0)
{
uint8_t v_isExporting_1222_; 
v_isExporting_1222_ = lean_ctor_get_uint8(v_env_1220_, sizeof(void*)*8);
if (v_isExporting_1222_ == 0)
{
lean_object* v___x_1223_; 
lean_dec_ref(v_env_1220_);
lean_dec(v_declHint_1215_);
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v_msg_1214_);
return v___x_1223_;
}
else
{
lean_object* v___x_1224_; uint8_t v___x_1225_; 
lean_inc_ref(v_env_1220_);
v___x_1224_ = l_Lean_Environment_setExporting(v_env_1220_, v___x_1221_);
lean_inc(v_declHint_1215_);
lean_inc_ref(v___x_1224_);
v___x_1225_ = l_Lean_Environment_contains(v___x_1224_, v_declHint_1215_, v_isExporting_1222_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; 
lean_dec_ref(v___x_1224_);
lean_dec_ref(v_env_1220_);
lean_dec(v_declHint_1215_);
v___x_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_msg_1214_);
return v___x_1226_;
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v_c_1232_; lean_object* v___x_1233_; 
v___x_1227_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1228_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_1229_ = l_Lean_Options_empty;
v___x_1230_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1224_);
lean_ctor_set(v___x_1230_, 1, v___x_1227_);
lean_ctor_set(v___x_1230_, 2, v___x_1228_);
lean_ctor_set(v___x_1230_, 3, v___x_1229_);
lean_inc(v_declHint_1215_);
v___x_1231_ = l_Lean_MessageData_ofConstName(v_declHint_1215_, v___x_1221_);
v_c_1232_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1232_, 0, v___x_1230_);
lean_ctor_set(v_c_1232_, 1, v___x_1231_);
v___x_1233_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1220_, v_declHint_1215_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_dec_ref(v_env_1220_);
lean_dec(v_declHint_1215_);
v___x_1234_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_1235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
lean_ctor_set(v___x_1235_, 1, v_c_1232_);
v___x_1236_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8);
v___x_1237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = l_Lean_MessageData_note(v___x_1237_);
v___x_1239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1239_, 0, v_msg_1214_);
lean_ctor_set(v___x_1239_, 1, v___x_1238_);
v___x_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
return v___x_1240_;
}
else
{
lean_object* v_val_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1275_; 
v_val_1241_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1243_ = v___x_1233_;
v_isShared_1244_ = v_isSharedCheck_1275_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_val_1241_);
lean_dec(v___x_1233_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1275_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v_mod_1247_; uint8_t v___x_1248_; 
v___x_1245_ = l_Lean_Environment_header(v_env_1220_);
lean_dec_ref(v_env_1220_);
v___x_1246_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1245_);
v_mod_1247_ = lean_array_get(v___x_1218_, v___x_1246_, v_val_1241_);
lean_dec(v_val_1241_);
lean_dec_ref(v___x_1246_);
v___x_1248_ = l_Lean_isPrivateName(v_declHint_1215_);
lean_dec(v_declHint_1215_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1249_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10);
v___x_1250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
lean_ctor_set(v___x_1250_, 1, v_c_1232_);
v___x_1251_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12);
v___x_1252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = l_Lean_MessageData_ofName(v_mod_1247_);
v___x_1254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14);
v___x_1256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1254_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = l_Lean_MessageData_note(v___x_1256_);
v___x_1258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1258_, 0, v_msg_1214_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
if (v_isShared_1244_ == 0)
{
lean_ctor_set_tag(v___x_1243_, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1258_);
v___x_1260_ = v___x_1243_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1273_; 
v___x_1262_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_1263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
lean_ctor_set(v___x_1263_, 1, v_c_1232_);
v___x_1264_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16);
v___x_1265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = l_Lean_MessageData_ofName(v_mod_1247_);
v___x_1267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1265_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___x_1268_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18);
v___x_1269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1267_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = l_Lean_MessageData_note(v___x_1269_);
v___x_1271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1271_, 0, v_msg_1214_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
if (v_isShared_1244_ == 0)
{
lean_ctor_set_tag(v___x_1243_, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1271_);
v___x_1273_ = v___x_1243_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1276_; 
lean_dec_ref(v_env_1220_);
lean_dec(v_declHint_1215_);
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_msg_1214_);
return v___x_1276_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_1277_, lean_object* v_declHint_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1277_, v_declHint_1278_, v___y_1279_);
lean_dec(v___y_1279_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object* v_msg_1282_, lean_object* v_declHint_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v___x_1289_; lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1299_; 
v___x_1289_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1282_, v_declHint_1283_, v___y_1287_);
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1299_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1299_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1294_ = l_Lean_unknownIdentifierMessageTag;
v___x_1295_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v_a_1290_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1295_);
v___x_1297_ = v___x_1292_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_1300_, lean_object* v_declHint_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(v_msg_1300_, v_declHint_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_ref_1308_, lean_object* v_msg_1309_, lean_object* v_declHint_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v___x_1316_; lean_object* v_a_1317_; lean_object* v___x_1318_; 
v___x_1316_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(v_msg_1309_, v_declHint_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref(v___x_1316_);
v___x_1318_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1308_, v_a_1317_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_ref_1319_, lean_object* v_msg_1320_, lean_object* v_declHint_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1319_, v_msg_1320_, v_declHint_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec(v_ref_1319_);
return v_res_1327_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__0));
v___x_1330_ = l_Lean_stringToMessageData(v___x_1329_);
return v___x_1330_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__2));
v___x_1333_ = l_Lean_stringToMessageData(v___x_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(lean_object* v_ref_1334_, lean_object* v_constName_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v___x_1341_; uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1341_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1342_ = 0;
lean_inc(v_constName_1335_);
v___x_1343_ = l_Lean_MessageData_ofConstName(v_constName_1335_, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1341_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1334_, v___x_1346_, v_constName_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_ref_1348_, lean_object* v_constName_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1348_, v_constName_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v_ref_1348_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(lean_object* v_constName_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_ref_1362_; lean_object* v___x_1363_; 
v_ref_1362_ = lean_ctor_get(v___y_1359_, 2);
v___x_1363_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1362_, v_constName_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg___boxed(lean_object* v_constName_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(lean_object* v_constName_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___x_1377_; lean_object* v_env_1378_; uint8_t v___x_1379_; lean_object* v___x_1380_; 
v___x_1377_ = lean_st_ref_get(v___y_1375_);
v_env_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc_ref(v_env_1378_);
lean_dec(v___x_1377_);
v___x_1379_ = 0;
lean_inc(v_constName_1371_);
v___x_1380_ = l_Lean_Environment_find_x3f(v_env_1378_, v_constName_1371_, v___x_1379_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
return v___x_1381_;
}
else
{
lean_object* v_val_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
lean_dec(v_constName_1371_);
v_val_1382_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1380_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_val_1382_);
lean_dec(v___x_1380_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 0);
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_val_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4___boxed(lean_object* v_constName_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_constName_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
return v_res_1396_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_addTransportDecl___closed__1(void){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = ((lean_object*)(l_Lean_Meta_Transport_addTransportDecl___closed__0));
v___x_1399_ = l_Lean_stringToMessageData(v___x_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object* v_declName_1400_, uint8_t v_kind_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_){
_start:
{
lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1468_; lean_object* v___x_1505_; 
lean_inc(v_declName_1400_);
v___x_1505_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_declName_1400_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1507_; uint8_t v_transparency_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; uint8_t v___x_1512_; uint8_t v___x_1513_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
v___x_1507_ = l_Lean_Meta_Context_config(v_a_1402_);
v_transparency_1508_ = lean_ctor_get_uint8(v___x_1507_, 9);
lean_dec_ref(v___x_1507_);
v___x_1509_ = l_Lean_ConstantInfo_type(v_a_1506_);
lean_dec(v_a_1506_);
v___x_1510_ = lean_box(0);
v___x_1511_ = 0;
v___x_1512_ = 2;
v___x_1513_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1508_, v___x_1512_);
if (v___x_1513_ == 0)
{
lean_object* v_keyedConfig_1514_; uint8_t v_trackZetaDelta_1515_; lean_object* v_zetaDeltaSet_1516_; lean_object* v_lctx_1517_; lean_object* v_localInstances_1518_; lean_object* v_defEqCtx_x3f_1519_; lean_object* v_synthPendingDepth_1520_; lean_object* v_customCanUnfoldPredicate_x3f_1521_; uint8_t v_univApprox_1522_; uint8_t v_inTypeClassResolution_1523_; uint8_t v_cacheInferType_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_keyedConfig_1514_ = lean_ctor_get(v_a_1402_, 0);
v_trackZetaDelta_1515_ = lean_ctor_get_uint8(v_a_1402_, sizeof(void*)*7);
v_zetaDeltaSet_1516_ = lean_ctor_get(v_a_1402_, 1);
v_lctx_1517_ = lean_ctor_get(v_a_1402_, 2);
v_localInstances_1518_ = lean_ctor_get(v_a_1402_, 3);
v_defEqCtx_x3f_1519_ = lean_ctor_get(v_a_1402_, 4);
v_synthPendingDepth_1520_ = lean_ctor_get(v_a_1402_, 5);
v_customCanUnfoldPredicate_x3f_1521_ = lean_ctor_get(v_a_1402_, 6);
v_univApprox_1522_ = lean_ctor_get_uint8(v_a_1402_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1523_ = lean_ctor_get_uint8(v_a_1402_, sizeof(void*)*7 + 2);
v_cacheInferType_1524_ = lean_ctor_get_uint8(v_a_1402_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1514_);
v___x_1525_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1512_, v_keyedConfig_1514_);
lean_inc(v_customCanUnfoldPredicate_x3f_1521_);
lean_inc(v_synthPendingDepth_1520_);
lean_inc(v_defEqCtx_x3f_1519_);
lean_inc_ref(v_localInstances_1518_);
lean_inc_ref(v_lctx_1517_);
lean_inc(v_zetaDeltaSet_1516_);
v___x_1526_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
lean_ctor_set(v___x_1526_, 1, v_zetaDeltaSet_1516_);
lean_ctor_set(v___x_1526_, 2, v_lctx_1517_);
lean_ctor_set(v___x_1526_, 3, v_localInstances_1518_);
lean_ctor_set(v___x_1526_, 4, v_defEqCtx_x3f_1519_);
lean_ctor_set(v___x_1526_, 5, v_synthPendingDepth_1520_);
lean_ctor_set(v___x_1526_, 6, v_customCanUnfoldPredicate_x3f_1521_);
lean_ctor_set_uint8(v___x_1526_, sizeof(void*)*7, v_trackZetaDelta_1515_);
lean_ctor_set_uint8(v___x_1526_, sizeof(void*)*7 + 1, v_univApprox_1522_);
lean_ctor_set_uint8(v___x_1526_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1523_);
lean_ctor_set_uint8(v___x_1526_, sizeof(void*)*7 + 3, v_cacheInferType_1524_);
v___x_1527_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1509_, v___x_1510_, v___x_1511_, v___x_1526_, v_a_1403_, v_a_1404_, v_a_1405_);
lean_dec_ref_known(v___x_1526_, 7);
v___y_1468_ = v___x_1527_;
goto v___jp_1467_;
}
else
{
lean_object* v___x_1528_; 
v___x_1528_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1509_, v___x_1510_, v___x_1511_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_);
v___y_1468_ = v___x_1528_;
goto v___jp_1467_;
}
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
lean_dec(v_declName_1400_);
v_a_1529_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1505_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1505_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
v___jp_1407_:
{
if (lean_obj_tag(v___y_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v_a_1413_ = lean_ctor_get(v___y_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___y_1412_, 1);
v___x_1414_ = l_Lean_Meta_Transport_transportExt;
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v_declName_1400_);
lean_ctor_set(v___x_1415_, 1, v_a_1413_);
v___x_1416_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v___x_1414_, v___x_1415_, v_kind_1401_, v___y_1410_, v___y_1408_, v___y_1409_);
return v___x_1416_;
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec(v_declName_1400_);
v_a_1417_ = lean_ctor_get(v___y_1412_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___y_1412_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___y_1412_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___y_1412_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
v___jp_1425_:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; size_t v_sz_1436_; size_t v___x_1437_; lean_object* v___x_1438_; 
v___x_1433_ = lean_unsigned_to_nat(0u);
v___x_1434_ = lean_array_get_size(v___y_1426_);
v___x_1435_ = l_Array_toSubarray___redArg(v___y_1426_, v___x_1433_, v___x_1434_);
v_sz_1436_ = lean_array_size(v___y_1428_);
v___x_1437_ = ((size_t)0ULL);
lean_inc(v_declName_1400_);
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1400_, v___y_1428_, v_sz_1436_, v___x_1437_, v___x_1435_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec_ref(v___y_1428_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v___x_1439_; uint8_t v_transparency_1440_; uint8_t v___x_1441_; uint8_t v___x_1442_; uint8_t v___x_1443_; 
lean_dec_ref_known(v___x_1438_, 1);
v___x_1439_ = l_Lean_Meta_Context_config(v___y_1429_);
v_transparency_1440_ = lean_ctor_get_uint8(v___x_1439_, 9);
lean_dec_ref(v___x_1439_);
v___x_1441_ = 0;
v___x_1442_ = 2;
v___x_1443_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1440_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v_keyedConfig_1444_; uint8_t v_trackZetaDelta_1445_; lean_object* v_zetaDeltaSet_1446_; lean_object* v_lctx_1447_; lean_object* v_localInstances_1448_; lean_object* v_defEqCtx_x3f_1449_; lean_object* v_synthPendingDepth_1450_; lean_object* v_customCanUnfoldPredicate_x3f_1451_; uint8_t v_univApprox_1452_; uint8_t v_inTypeClassResolution_1453_; uint8_t v_cacheInferType_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_keyedConfig_1444_ = lean_ctor_get(v___y_1429_, 0);
v_trackZetaDelta_1445_ = lean_ctor_get_uint8(v___y_1429_, sizeof(void*)*7);
v_zetaDeltaSet_1446_ = lean_ctor_get(v___y_1429_, 1);
v_lctx_1447_ = lean_ctor_get(v___y_1429_, 2);
v_localInstances_1448_ = lean_ctor_get(v___y_1429_, 3);
v_defEqCtx_x3f_1449_ = lean_ctor_get(v___y_1429_, 4);
v_synthPendingDepth_1450_ = lean_ctor_get(v___y_1429_, 5);
v_customCanUnfoldPredicate_x3f_1451_ = lean_ctor_get(v___y_1429_, 6);
v_univApprox_1452_ = lean_ctor_get_uint8(v___y_1429_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1453_ = lean_ctor_get_uint8(v___y_1429_, sizeof(void*)*7 + 2);
v_cacheInferType_1454_ = lean_ctor_get_uint8(v___y_1429_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1444_);
v___x_1455_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1442_, v_keyedConfig_1444_);
lean_inc(v_customCanUnfoldPredicate_x3f_1451_);
lean_inc(v_synthPendingDepth_1450_);
lean_inc(v_defEqCtx_x3f_1449_);
lean_inc_ref(v_localInstances_1448_);
lean_inc_ref(v_lctx_1447_);
lean_inc(v_zetaDeltaSet_1446_);
v___x_1456_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
lean_ctor_set(v___x_1456_, 1, v_zetaDeltaSet_1446_);
lean_ctor_set(v___x_1456_, 2, v_lctx_1447_);
lean_ctor_set(v___x_1456_, 3, v_localInstances_1448_);
lean_ctor_set(v___x_1456_, 4, v_defEqCtx_x3f_1449_);
lean_ctor_set(v___x_1456_, 5, v_synthPendingDepth_1450_);
lean_ctor_set(v___x_1456_, 6, v_customCanUnfoldPredicate_x3f_1451_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*7, v_trackZetaDelta_1445_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*7 + 1, v_univApprox_1452_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1453_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*7 + 3, v_cacheInferType_1454_);
v___x_1457_ = l_Lean_Meta_DiscrTree_mkPath(v___y_1427_, v___x_1441_, v___x_1456_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec_ref_known(v___x_1456_, 7);
v___y_1408_ = v___y_1431_;
v___y_1409_ = v___y_1432_;
v___y_1410_ = v___y_1430_;
v___y_1411_ = v___y_1429_;
v___y_1412_ = v___x_1457_;
goto v___jp_1407_;
}
else
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_Meta_DiscrTree_mkPath(v___y_1427_, v___x_1441_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
v___y_1408_ = v___y_1431_;
v___y_1409_ = v___y_1432_;
v___y_1410_ = v___y_1430_;
v___y_1411_ = v___y_1429_;
v___y_1412_ = v___x_1458_;
goto v___jp_1407_;
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
lean_dec_ref(v___y_1427_);
lean_dec(v_declName_1400_);
v_a_1459_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1438_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1438_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
v___jp_1467_:
{
if (lean_obj_tag(v___y_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v_snd_1470_; lean_object* v_fst_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1496_; 
v_a_1469_ = lean_ctor_get(v___y_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___y_1468_, 1);
v_snd_1470_ = lean_ctor_get(v_a_1469_, 1);
v_fst_1471_ = lean_ctor_get(v_a_1469_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_a_1469_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1473_ = v_a_1469_;
v_isShared_1474_ = v_isSharedCheck_1496_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_snd_1470_);
lean_inc(v_fst_1471_);
lean_dec(v_a_1469_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1496_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v_fst_1475_; lean_object* v_snd_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1495_; 
v_fst_1475_ = lean_ctor_get(v_snd_1470_, 0);
v_snd_1476_ = lean_ctor_get(v_snd_1470_, 1);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_snd_1470_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1478_ = v_snd_1470_;
v_isShared_1479_ = v_isSharedCheck_1495_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_snd_1476_);
lean_inc(v_fst_1475_);
lean_dec(v_snd_1470_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1495_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
v___x_1480_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_1481_ = lean_unsigned_to_nat(2u);
v___x_1482_ = l_Lean_Expr_isAppOfArity(v_snd_1476_, v___x_1480_, v___x_1481_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1486_; 
lean_dec(v_fst_1475_);
lean_dec(v_fst_1471_);
v___x_1483_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1);
v___x_1484_ = l_Lean_MessageData_ofConstName(v_declName_1400_, v___x_1482_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set_tag(v___x_1478_, 7);
lean_ctor_set(v___x_1478_, 1, v___x_1484_);
lean_ctor_set(v___x_1478_, 0, v___x_1483_);
v___x_1486_ = v___x_1478_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1489_; 
v___x_1487_ = lean_obj_once(&l_Lean_Meta_Transport_addTransportDecl___closed__1, &l_Lean_Meta_Transport_addTransportDecl___closed__1_once, _init_l_Lean_Meta_Transport_addTransportDecl___closed__1);
if (v_isShared_1474_ == 0)
{
lean_ctor_set_tag(v___x_1473_, 7);
lean_ctor_set(v___x_1473_, 1, v___x_1487_);
lean_ctor_set(v___x_1473_, 0, v___x_1486_);
v___x_1489_ = v___x_1473_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1490_ = l_Lean_indentExpr(v_snd_1476_);
v___x_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1489_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1491_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_);
return v___x_1492_;
}
}
}
else
{
lean_del_object(v___x_1478_);
lean_del_object(v___x_1473_);
v___y_1426_ = v_fst_1475_;
v___y_1427_ = v_snd_1476_;
v___y_1428_ = v_fst_1471_;
v___y_1429_ = v_a_1402_;
v___y_1430_ = v_a_1403_;
v___y_1431_ = v_a_1404_;
v___y_1432_ = v_a_1405_;
goto v___jp_1425_;
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_dec(v_declName_1400_);
v_a_1497_ = lean_ctor_get(v___y_1468_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___y_1468_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___y_1468_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___y_1468_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl___boxed(lean_object* v_declName_1537_, lean_object* v_kind_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_){
_start:
{
uint8_t v_kind_boxed_1544_; lean_object* v_res_1545_; 
v_kind_boxed_1544_ = lean_unbox(v_kind_1538_);
v_res_1545_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1537_, v_kind_boxed_1544_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_);
lean_dec(v_a_1542_);
lean_dec_ref(v_a_1541_);
lean_dec(v_a_1540_);
lean_dec_ref(v_a_1539_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(lean_object* v_00_u03b1_1546_, lean_object* v_msg_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___boxed(lean_object* v_00_u03b1_1554_, lean_object* v_msg_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(v_00_u03b1_1554_, v_msg_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(lean_object* v_00_u03b1_1562_, lean_object* v_constName_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___boxed(lean_object* v_00_u03b1_1570_, lean_object* v_constName_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(v_00_u03b1_1570_, v_constName_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(lean_object* v_00_u03b1_1578_, lean_object* v_ref_1579_, lean_object* v_constName_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1579_, v_constName_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1587_, lean_object* v_ref_1588_, lean_object* v_constName_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(v_00_u03b1_1587_, v_ref_1588_, v_constName_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v_ref_1588_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b1_1596_, lean_object* v_ref_1597_, lean_object* v_msg_1598_, lean_object* v_declHint_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1597_, v_msg_1598_, v_declHint_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b1_1606_, lean_object* v_ref_1607_, lean_object* v_msg_1608_, lean_object* v_declHint_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(v_00_u03b1_1606_, v_ref_1607_, v_msg_1608_, v_declHint_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v_ref_1607_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(lean_object* v_msg_1616_, lean_object* v_declHint_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1616_, v_declHint_1617_, v___y_1621_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_1624_, lean_object* v_declHint_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(v_msg_1624_, v_declHint_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_1632_, lean_object* v_ref_1633_, lean_object* v_msg_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1633_, v_msg_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1641_, lean_object* v_ref_1642_, lean_object* v_msg_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(v_00_u03b1_1641_, v_ref_1642_, v_msg_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v_ref_1642_);
return v_res_1649_;
}
}
static uint64_t _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1656_; uint64_t v___x_1657_; 
v___x_1656_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1657_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1656_);
return v___x_1657_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1658_ = lean_uint64_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1659_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1660_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
lean_ctor_set_uint64(v___x_1660_, sizeof(void*)*1, v___x_1658_);
return v___x_1660_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
return v___x_1662_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1664_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
lean_ctor_set(v___x_1664_, 2, v___x_1663_);
lean_ctor_set(v___x_1664_, 3, v___x_1663_);
lean_ctor_set(v___x_1664_, 4, v___x_1663_);
lean_ctor_set(v___x_1664_, 5, v___x_1663_);
return v___x_1664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1666_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
lean_ctor_set(v___x_1666_, 2, v___x_1665_);
lean_ctor_set(v___x_1666_, 3, v___x_1665_);
lean_ctor_set(v___x_1666_, 4, v___x_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1667_, lean_object* v___x_1668_, lean_object* v_declName_1669_, lean_object* v_x_1670_, uint8_t v_kind_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
uint8_t v___x_1675_; uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; size_t v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1675_ = 0;
v___x_1676_ = 1;
v___x_1677_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1678_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1679_ = lean_unsigned_to_nat(32u);
v___x_1680_ = lean_mk_empty_array_with_capacity(v___x_1679_);
v___x_1681_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_1682_ = ((size_t)5ULL);
lean_inc_n(v___x_1667_, 6);
v___x_1683_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1680_);
lean_ctor_set(v___x_1683_, 2, v___x_1667_);
lean_ctor_set(v___x_1683_, 3, v___x_1667_);
lean_ctor_set_usize(v___x_1683_, 4, v___x_1682_);
v___x_1684_ = lean_box(1);
lean_inc_ref(v___x_1683_);
v___x_1685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1678_);
lean_ctor_set(v___x_1685_, 1, v___x_1683_);
lean_ctor_set(v___x_1685_, 2, v___x_1684_);
v___x_1686_ = lean_mk_empty_array_with_capacity(v___x_1667_);
v___x_1687_ = lean_box(0);
lean_inc(v___x_1668_);
v___x_1688_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1688_, 0, v___x_1677_);
lean_ctor_set(v___x_1688_, 1, v___x_1668_);
lean_ctor_set(v___x_1688_, 2, v___x_1685_);
lean_ctor_set(v___x_1688_, 3, v___x_1686_);
lean_ctor_set(v___x_1688_, 4, v___x_1687_);
lean_ctor_set(v___x_1688_, 5, v___x_1667_);
lean_ctor_set(v___x_1688_, 6, v___x_1687_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*7, v___x_1675_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*7 + 1, v___x_1675_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*7 + 2, v___x_1675_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*7 + 3, v___x_1676_);
v___x_1689_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1667_);
lean_ctor_set(v___x_1689_, 1, v___x_1667_);
lean_ctor_set(v___x_1689_, 2, v___x_1667_);
lean_ctor_set(v___x_1689_, 3, v___x_1667_);
lean_ctor_set(v___x_1689_, 4, v___x_1678_);
lean_ctor_set(v___x_1689_, 5, v___x_1678_);
lean_ctor_set(v___x_1689_, 6, v___x_1678_);
lean_ctor_set(v___x_1689_, 7, v___x_1678_);
lean_ctor_set(v___x_1689_, 8, v___x_1678_);
lean_ctor_set(v___x_1689_, 9, v___x_1678_);
lean_ctor_set(v___x_1689_, 10, v___x_1678_);
v___x_1690_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1691_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1689_);
lean_ctor_set(v___x_1692_, 1, v___x_1690_);
lean_ctor_set(v___x_1692_, 2, v___x_1668_);
lean_ctor_set(v___x_1692_, 3, v___x_1683_);
lean_ctor_set(v___x_1692_, 4, v___x_1691_);
v___x_1693_ = lean_st_mk_ref(v___x_1692_);
v___x_1694_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1669_, v_kind_1671_, v___x_1688_, v___x_1693_, v___y_1672_, v___y_1673_);
lean_dec_ref_known(v___x_1688_, 7);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1703_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1699_ = lean_st_ref_get(v___x_1693_);
lean_dec(v___x_1693_);
lean_dec(v___x_1699_);
if (v_isShared_1698_ == 0)
{
v___x_1701_ = v___x_1697_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1695_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
else
{
lean_dec(v___x_1693_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1704_, lean_object* v___x_1705_, lean_object* v_declName_1706_, lean_object* v_x_1707_, lean_object* v_kind_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_){
_start:
{
uint8_t v_kind_boxed_1712_; lean_object* v_res_1713_; 
v_kind_boxed_1712_ = lean_unbox(v_kind_1708_);
v_res_1713_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1704_, v___x_1705_, v_declName_1706_, v_x_1707_, v_kind_boxed_1712_, v___y_1709_, v___y_1710_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v_x_1707_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v___x_1718_; lean_object* v_toCold_1719_; lean_object* v_env_1720_; lean_object* v_options_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1718_ = lean_st_ref_get(v___y_1716_);
v_toCold_1719_ = lean_ctor_get(v___y_1715_, 0);
v_env_1720_ = lean_ctor_get(v___x_1718_, 0);
lean_inc_ref(v_env_1720_);
lean_dec(v___x_1718_);
v_options_1721_ = lean_ctor_get(v_toCold_1719_, 2);
v___x_1722_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1723_ = lean_unsigned_to_nat(32u);
v___x_1724_ = lean_mk_empty_array_with_capacity(v___x_1723_);
lean_dec_ref(v___x_1724_);
v___x_1725_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4);
lean_inc_ref(v_options_1721_);
v___x_1726_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1726_, 0, v_env_1720_);
lean_ctor_set(v___x_1726_, 1, v___x_1722_);
lean_ctor_set(v___x_1726_, 2, v___x_1725_);
lean_ctor_set(v___x_1726_, 3, v_options_1721_);
v___x_1727_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
lean_ctor_set(v___x_1727_, 1, v_msgData_1714_);
v___x_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1729_, v___y_1730_, v___y_1731_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v_ref_1738_; lean_object* v___x_1739_; lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1748_; 
v_ref_1738_ = lean_ctor_get(v___y_1735_, 2);
v___x_1739_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msg_1734_, v___y_1735_, v___y_1736_);
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1742_ = v___x_1739_;
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1739_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
lean_inc(v_ref_1738_);
v___x_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1744_, 0, v_ref_1738_);
lean_ctor_set(v___x_1744_, 1, v_a_1740_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set_tag(v___x_1742_, 1);
lean_ctor_set(v___x_1742_, 0, v___x_1744_);
v___x_1746_ = v___x_1742_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1749_, v___y_1750_, v___y_1751_);
lean_dec(v___y_1751_);
lean_dec_ref(v___y_1750_);
return v_res_1753_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1756_ = l_Lean_stringToMessageData(v___x_1755_);
return v___x_1756_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1759_ = l_Lean_stringToMessageData(v___x_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1760_, lean_object* v_decl_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1765_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1766_ = l_Lean_MessageData_ofName(v___x_1760_);
v___x_1767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1765_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1767_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v___x_1769_, v___y_1762_, v___y_1763_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1771_, lean_object* v_decl_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1771_, v_decl_1772_, v___y_1773_, v___y_1774_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v_decl_1772_);
return v_res_1776_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = lean_unsigned_to_nat(3239442948u);
v___x_1799_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1800_ = l_Lean_Name_num___override(v___x_1799_, v___x_1798_);
return v___x_1800_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1801_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1802_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1803_ = l_Lean_Name_str___override(v___x_1802_, v___x_1801_);
return v___x_1803_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1804_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1805_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1806_ = l_Lean_Name_str___override(v___x_1805_, v___x_1804_);
return v___x_1806_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1807_ = lean_unsigned_to_nat(2u);
v___x_1808_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1809_ = l_Lean_Name_num___override(v___x_1808_, v___x_1807_);
return v___x_1809_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1815_ = 0;
v___x_1816_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1817_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1818_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1819_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
lean_ctor_set(v___x_1819_, 1, v___x_1817_);
lean_ctor_set(v___x_1819_, 2, v___x_1816_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*3, v___x_1815_);
return v___x_1819_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1820_; lean_object* v___f_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___f_1820_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___f_1821_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1822_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1823_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
lean_ctor_set(v___x_1823_, 1, v___f_1821_);
lean_ctor_set(v___x_1823_, 2, v___f_1820_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1826_ = l_Lean_registerBuiltinAttribute(v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_();
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1829_, lean_object* v_msg_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1830_, v___y_1831_, v___y_1832_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1835_, lean_object* v_msg_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(v_00_u03b1_1835_, v_msg_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__1_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_));
v___x_1846_ = l_Lean_registerInternalExceptionId(v___x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2____boxed(lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3847834526____hygCtx___hyg_2_();
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_____r_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1849_, v___y_1853_, v___y_1855_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1869_; 
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1869_ == 0)
{
lean_object* v_unused_1870_; 
v_unused_1870_ = lean_ctor_get(v___x_1857_, 0);
lean_dec(v_unused_1870_);
v___x_1859_ = v___x_1857_;
v_isShared_1860_ = v_isSharedCheck_1869_;
goto v_resetjp_1858_;
}
else
{
lean_dec(v___x_1857_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1869_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v___x_1861_ = l_Lean_Exception_toMessageData(v_a_1850_);
v___x_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
v___x_1863_ = lean_box(0);
v___x_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
lean_ctor_set(v___x_1864_, 1, v___x_1862_);
v___x_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v___x_1865_);
v___x_1867_ = v___x_1859_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1865_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec_ref(v_a_1850_);
v_a_1871_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1857_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1857_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0___boxed(lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_____r_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(v_a_1879_, v_a_1880_, v_____r_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec_ref(v_a_1879_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(lean_object* v_k_1888_, lean_object* v_as_1889_, size_t v_sz_1890_, size_t v_i_1891_, lean_object* v_b_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
uint8_t v___x_1898_; 
v___x_1898_ = lean_usize_dec_lt(v_i_1891_, v_sz_1890_);
if (v___x_1898_ == 0)
{
lean_object* v___x_1899_; 
lean_dec_ref(v_k_1888_);
v___x_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1899_, 0, v_b_1892_);
return v___x_1899_;
}
else
{
lean_object* v_snd_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1973_; 
v_snd_1900_ = lean_ctor_get(v_b_1892_, 1);
v_isSharedCheck_1973_ = !lean_is_exclusive(v_b_1892_);
if (v_isSharedCheck_1973_ == 0)
{
lean_object* v_unused_1974_; 
v_unused_1974_ = lean_ctor_get(v_b_1892_, 0);
lean_dec(v_unused_1974_);
v___x_1902_ = v_b_1892_;
v_isShared_1903_ = v_isSharedCheck_1973_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_snd_1900_);
lean_dec(v_b_1892_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1973_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v_a_1905_; lean_object* v___x_1911_; lean_object* v___y_1913_; lean_object* v_a_1937_; lean_object* v___x_1938_; 
v___x_1911_ = lean_box(0);
v_a_1937_ = lean_array_uget_borrowed(v_as_1889_, v_i_1891_);
v___x_1938_ = l_Lean_Meta_saveState___redArg(v___y_1894_, v___y_1896_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1940_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
lean_inc_ref(v_k_1888_);
lean_inc(v___y_1896_);
lean_inc_ref(v___y_1895_);
lean_inc(v___y_1894_);
lean_inc_ref(v___y_1893_);
lean_inc(v_a_1937_);
v___x_1940_ = lean_apply_6(v_k_1888_, v_a_1937_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, lean_box(0));
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1942_; 
lean_dec(v_a_1939_);
lean_dec_ref(v_k_1888_);
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1942_, 0, v_a_1941_);
v_a_1905_ = v___x_1942_;
goto v___jp_1904_;
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1964_; 
v_a_1943_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1945_ = v___x_1940_;
v_isShared_1946_ = v_isSharedCheck_1964_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1940_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1964_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
uint8_t v___y_1948_; uint8_t v___x_1962_; 
v___x_1962_ = l_Lean_Exception_isInterrupt(v_a_1943_);
if (v___x_1962_ == 0)
{
uint8_t v___x_1963_; 
lean_inc(v_a_1943_);
v___x_1963_ = l_Lean_Exception_isRuntime(v_a_1943_);
v___y_1948_ = v___x_1963_;
goto v___jp_1947_;
}
else
{
v___y_1948_ = v___x_1962_;
goto v___jp_1947_;
}
v___jp_1947_:
{
if (v___y_1948_ == 0)
{
if (lean_obj_tag(v_a_1943_) == 1)
{
lean_object* v_id_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; 
v_id_1949_ = lean_ctor_get(v_a_1943_, 0);
v___x_1950_ = l_Lean_Meta_Transport_depthExceptionId;
v___x_1951_ = l_Lean_instBEqInternalExceptionId_beq(v_id_1949_, v___x_1950_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_del_object(v___x_1945_);
v___x_1952_ = lean_box(0);
v___x_1953_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(v_a_1939_, v_a_1943_, v___x_1952_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v_a_1939_);
v___y_1913_ = v___x_1953_;
goto v___jp_1912_;
}
else
{
lean_object* v___x_1955_; 
lean_dec(v_a_1939_);
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec_ref(v_k_1888_);
if (v_isShared_1946_ == 0)
{
v___x_1955_ = v___x_1945_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1943_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
else
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
lean_del_object(v___x_1945_);
v___x_1957_ = lean_box(0);
v___x_1958_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___lam__0(v_a_1939_, v_a_1943_, v___x_1957_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v_a_1939_);
v___y_1913_ = v___x_1958_;
goto v___jp_1912_;
}
}
else
{
lean_object* v___x_1960_; 
lean_dec(v_a_1939_);
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec_ref(v_k_1888_);
if (v_isShared_1946_ == 0)
{
v___x_1960_ = v___x_1945_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1943_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
}
}
else
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec_ref(v_k_1888_);
v_a_1965_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1967_ = v___x_1938_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1938_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1965_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
v___jp_1904_:
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_a_1905_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1906_);
v___x_1908_ = v___x_1902_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1906_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_snd_1900_);
v___x_1908_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___x_1909_; 
v___x_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
return v___x_1909_;
}
}
v___jp_1912_:
{
if (lean_obj_tag(v___y_1913_) == 0)
{
lean_object* v_a_1914_; 
v_a_1914_ = lean_ctor_get(v___y_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___y_1913_, 1);
if (lean_obj_tag(v_a_1914_) == 0)
{
lean_object* v_a_1915_; 
lean_dec_ref(v_k_1888_);
v_a_1915_ = lean_ctor_get(v_a_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v_a_1914_, 1);
v_a_1905_ = v_a_1915_;
goto v___jp_1904_;
}
else
{
lean_object* v_a_1916_; lean_object* v_snd_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1927_; 
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
v_a_1916_ = lean_ctor_get(v_a_1914_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v_a_1914_, 1);
v_snd_1917_ = lean_ctor_get(v_a_1916_, 1);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_a_1916_);
if (v_isSharedCheck_1927_ == 0)
{
lean_object* v_unused_1928_; 
v_unused_1928_ = lean_ctor_get(v_a_1916_, 0);
lean_dec(v_unused_1928_);
v___x_1919_ = v_a_1916_;
v_isShared_1920_ = v_isSharedCheck_1927_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_snd_1917_);
lean_dec(v_a_1916_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1927_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1911_);
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1911_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v_snd_1917_);
v___x_1922_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
size_t v___x_1923_; size_t v___x_1924_; 
v___x_1923_ = ((size_t)1ULL);
v___x_1924_ = lean_usize_add(v_i_1891_, v___x_1923_);
v_i_1891_ = v___x_1924_;
v_b_1892_ = v___x_1922_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_del_object(v___x_1902_);
lean_dec(v_snd_1900_);
lean_dec_ref(v_k_1888_);
v_a_1929_ = lean_ctor_get(v___y_1913_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___y_1913_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___y_1913_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___y_1913_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___boxed(lean_object* v_k_1975_, lean_object* v_as_1976_, lean_object* v_sz_1977_, lean_object* v_i_1978_, lean_object* v_b_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
size_t v_sz_boxed_1985_; size_t v_i_boxed_1986_; lean_object* v_res_1987_; 
v_sz_boxed_1985_ = lean_unbox_usize(v_sz_1977_);
lean_dec(v_sz_1977_);
v_i_boxed_1986_ = lean_unbox_usize(v_i_1978_);
lean_dec(v_i_1978_);
v_res_1987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_1975_, v_as_1976_, v_sz_boxed_1985_, v_i_boxed_1986_, v_b_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec_ref(v_as_1976_);
return v_res_1987_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1));
v___x_1992_ = l_Lean_stringToMessageData(v___x_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(lean_object* v_candidates_1993_, lean_object* v_k_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_){
_start:
{
lean_object* v___x_2000_; size_t v_sz_2001_; size_t v___x_2002_; lean_object* v___x_2003_; 
v___x_2000_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0));
v_sz_2001_ = lean_array_size(v_candidates_1993_);
v___x_2002_ = ((size_t)0ULL);
v___x_2003_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_1994_, v_candidates_1993_, v_sz_2001_, v___x_2002_, v___x_2000_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2026_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2026_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2026_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___y_2009_; lean_object* v_fst_2014_; 
v_fst_2014_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_fst_2014_);
if (lean_obj_tag(v_fst_2014_) == 0)
{
lean_object* v_snd_2015_; 
v_snd_2015_ = lean_ctor_get(v_a_2004_, 1);
lean_inc(v_snd_2015_);
lean_dec(v_a_2004_);
if (lean_obj_tag(v_snd_2015_) == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2);
v___y_2009_ = v___x_2016_;
goto v___jp_2008_;
}
else
{
lean_object* v_val_2017_; 
v_val_2017_ = lean_ctor_get(v_snd_2015_, 0);
lean_inc(v_val_2017_);
lean_dec_ref_known(v_snd_2015_, 1);
v___y_2009_ = v_val_2017_;
goto v___jp_2008_;
}
}
else
{
lean_object* v_val_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
lean_del_object(v___x_2006_);
lean_dec(v_a_2004_);
v_val_2018_ = lean_ctor_get(v_fst_2014_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_fst_2014_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v_fst_2014_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_val_2018_);
lean_dec(v_fst_2014_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
lean_ctor_set_tag(v___x_2020_, 0);
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_val_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
v___jp_2008_:
{
lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2010_, 0, v___y_2009_);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v___x_2010_);
v___x_2012_ = v___x_2006_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
v_a_2027_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_2003_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_2003_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___boxed(lean_object* v_candidates_2035_, lean_object* v_k_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_candidates_2035_, v_k_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_);
lean_dec(v_a_2040_);
lean_dec_ref(v_a_2039_);
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec_ref(v_candidates_2035_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(lean_object* v_x_2043_, lean_object* v_x_2044_, lean_object* v_x_2045_, lean_object* v_x_2046_){
_start:
{
lean_object* v_ks_2047_; lean_object* v_vs_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2072_; 
v_ks_2047_ = lean_ctor_get(v_x_2043_, 0);
v_vs_2048_ = lean_ctor_get(v_x_2043_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_x_2043_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2050_ = v_x_2043_;
v_isShared_2051_ = v_isSharedCheck_2072_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_vs_2048_);
lean_inc(v_ks_2047_);
lean_dec(v_x_2043_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2072_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; uint8_t v___x_2053_; 
v___x_2052_ = lean_array_get_size(v_ks_2047_);
v___x_2053_ = lean_nat_dec_lt(v_x_2044_, v___x_2052_);
if (v___x_2053_ == 0)
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2057_; 
lean_dec(v_x_2044_);
v___x_2054_ = lean_array_push(v_ks_2047_, v_x_2045_);
v___x_2055_ = lean_array_push(v_vs_2048_, v_x_2046_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 1, v___x_2055_);
lean_ctor_set(v___x_2050_, 0, v___x_2054_);
v___x_2057_ = v___x_2050_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2054_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
else
{
lean_object* v_k_x27_2059_; uint8_t v___x_2060_; 
v_k_x27_2059_ = lean_array_fget_borrowed(v_ks_2047_, v_x_2044_);
v___x_2060_ = l_Lean_instBEqMVarId_beq(v_x_2045_, v_k_x27_2059_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2062_; 
if (v_isShared_2051_ == 0)
{
v___x_2062_ = v___x_2050_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_ks_2047_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v_vs_2048_);
v___x_2062_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2063_ = lean_unsigned_to_nat(1u);
v___x_2064_ = lean_nat_add(v_x_2044_, v___x_2063_);
lean_dec(v_x_2044_);
v_x_2043_ = v___x_2062_;
v_x_2044_ = v___x_2064_;
goto _start;
}
}
else
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2067_ = lean_array_fset(v_ks_2047_, v_x_2044_, v_x_2045_);
v___x_2068_ = lean_array_fset(v_vs_2048_, v_x_2044_, v_x_2046_);
lean_dec(v_x_2044_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 1, v___x_2068_);
lean_ctor_set(v___x_2050_, 0, v___x_2067_);
v___x_2070_ = v___x_2050_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v___x_2068_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(lean_object* v_n_2073_, lean_object* v_k_2074_, lean_object* v_v_2075_){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2076_ = lean_unsigned_to_nat(0u);
v___x_2077_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_n_2073_, v___x_2076_, v_k_2074_, v_v_2075_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(lean_object* v_x_2078_, size_t v_x_2079_, size_t v_x_2080_, lean_object* v_x_2081_, lean_object* v_x_2082_){
_start:
{
if (lean_obj_tag(v_x_2078_) == 0)
{
lean_object* v_es_2083_; size_t v___x_2084_; size_t v___x_2085_; lean_object* v_j_2086_; lean_object* v___x_2087_; uint8_t v___x_2088_; 
v_es_2083_ = lean_ctor_get(v_x_2078_, 0);
v___x_2084_ = ((size_t)31ULL);
v___x_2085_ = lean_usize_land(v_x_2079_, v___x_2084_);
v_j_2086_ = lean_usize_to_nat(v___x_2085_);
v___x_2087_ = lean_array_get_size(v_es_2083_);
v___x_2088_ = lean_nat_dec_lt(v_j_2086_, v___x_2087_);
if (v___x_2088_ == 0)
{
lean_dec(v_j_2086_);
lean_dec(v_x_2082_);
lean_dec(v_x_2081_);
return v_x_2078_;
}
else
{
lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2127_; 
lean_inc_ref(v_es_2083_);
v_isSharedCheck_2127_ = !lean_is_exclusive(v_x_2078_);
if (v_isSharedCheck_2127_ == 0)
{
lean_object* v_unused_2128_; 
v_unused_2128_ = lean_ctor_get(v_x_2078_, 0);
lean_dec(v_unused_2128_);
v___x_2090_ = v_x_2078_;
v_isShared_2091_ = v_isSharedCheck_2127_;
goto v_resetjp_2089_;
}
else
{
lean_dec(v_x_2078_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2127_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v_v_2092_; lean_object* v___x_2093_; lean_object* v_xs_x27_2094_; lean_object* v___y_2096_; 
v_v_2092_ = lean_array_fget(v_es_2083_, v_j_2086_);
v___x_2093_ = lean_box(0);
v_xs_x27_2094_ = lean_array_fset(v_es_2083_, v_j_2086_, v___x_2093_);
switch(lean_obj_tag(v_v_2092_))
{
case 0:
{
lean_object* v_key_2101_; lean_object* v_val_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2112_; 
v_key_2101_ = lean_ctor_get(v_v_2092_, 0);
v_val_2102_ = lean_ctor_get(v_v_2092_, 1);
v_isSharedCheck_2112_ = !lean_is_exclusive(v_v_2092_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2104_ = v_v_2092_;
v_isShared_2105_ = v_isSharedCheck_2112_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_val_2102_);
lean_inc(v_key_2101_);
lean_dec(v_v_2092_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2112_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
uint8_t v___x_2106_; 
v___x_2106_ = l_Lean_instBEqMVarId_beq(v_x_2081_, v_key_2101_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
lean_del_object(v___x_2104_);
v___x_2107_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2101_, v_val_2102_, v_x_2081_, v_x_2082_);
v___x_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
v___y_2096_ = v___x_2108_;
goto v___jp_2095_;
}
else
{
lean_object* v___x_2110_; 
lean_dec(v_val_2102_);
lean_dec(v_key_2101_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 1, v_x_2082_);
lean_ctor_set(v___x_2104_, 0, v_x_2081_);
v___x_2110_ = v___x_2104_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_x_2081_);
lean_ctor_set(v_reuseFailAlloc_2111_, 1, v_x_2082_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
v___y_2096_ = v___x_2110_;
goto v___jp_2095_;
}
}
}
}
case 1:
{
lean_object* v_node_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2125_; 
v_node_2113_ = lean_ctor_get(v_v_2092_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v_v_2092_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2115_ = v_v_2092_;
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_node_2113_);
lean_dec(v_v_2092_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
size_t v___x_2117_; size_t v___x_2118_; size_t v___x_2119_; size_t v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v___x_2117_ = ((size_t)5ULL);
v___x_2118_ = lean_usize_shift_right(v_x_2079_, v___x_2117_);
v___x_2119_ = ((size_t)1ULL);
v___x_2120_ = lean_usize_add(v_x_2080_, v___x_2119_);
v___x_2121_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_node_2113_, v___x_2118_, v___x_2120_, v_x_2081_, v_x_2082_);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v___x_2121_);
v___x_2123_ = v___x_2115_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
v___y_2096_ = v___x_2123_;
goto v___jp_2095_;
}
}
}
default: 
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v_x_2081_);
lean_ctor_set(v___x_2126_, 1, v_x_2082_);
v___y_2096_ = v___x_2126_;
goto v___jp_2095_;
}
}
v___jp_2095_:
{
lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2097_ = lean_array_fset(v_xs_x27_2094_, v_j_2086_, v___y_2096_);
lean_dec(v_j_2086_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 0, v___x_2097_);
v___x_2099_ = v___x_2090_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v___x_2097_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
}
else
{
lean_object* v_ks_2129_; lean_object* v_vs_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2148_; 
v_ks_2129_ = lean_ctor_get(v_x_2078_, 0);
v_vs_2130_ = lean_ctor_get(v_x_2078_, 1);
v_isSharedCheck_2148_ = !lean_is_exclusive(v_x_2078_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2132_ = v_x_2078_;
v_isShared_2133_ = v_isSharedCheck_2148_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_vs_2130_);
lean_inc(v_ks_2129_);
lean_dec(v_x_2078_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2148_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_ks_2129_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v_vs_2130_);
v___x_2135_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
lean_object* v_newNode_2136_; size_t v___x_2137_; uint8_t v___x_2138_; 
v_newNode_2136_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v___x_2135_, v_x_2081_, v_x_2082_);
v___x_2137_ = ((size_t)7ULL);
v___x_2138_ = lean_usize_dec_le(v___x_2137_, v_x_2080_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2139_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2136_);
v___x_2140_ = lean_unsigned_to_nat(4u);
v___x_2141_ = lean_nat_dec_lt(v___x_2139_, v___x_2140_);
lean_dec(v___x_2139_);
if (v___x_2141_ == 0)
{
lean_object* v_ks_2142_; lean_object* v_vs_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v_ks_2142_ = lean_ctor_get(v_newNode_2136_, 0);
lean_inc_ref(v_ks_2142_);
v_vs_2143_ = lean_ctor_get(v_newNode_2136_, 1);
lean_inc_ref(v_vs_2143_);
lean_dec_ref(v_newNode_2136_);
v___x_2144_ = lean_unsigned_to_nat(0u);
v___x_2145_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0);
v___x_2146_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_x_2080_, v_ks_2142_, v_vs_2143_, v___x_2144_, v___x_2145_);
lean_dec_ref(v_vs_2143_);
lean_dec_ref(v_ks_2142_);
return v___x_2146_;
}
else
{
return v_newNode_2136_;
}
}
else
{
return v_newNode_2136_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(size_t v_depth_2149_, lean_object* v_keys_2150_, lean_object* v_vals_2151_, lean_object* v_i_2152_, lean_object* v_entries_2153_){
_start:
{
lean_object* v___x_2154_; uint8_t v___x_2155_; 
v___x_2154_ = lean_array_get_size(v_keys_2150_);
v___x_2155_ = lean_nat_dec_lt(v_i_2152_, v___x_2154_);
if (v___x_2155_ == 0)
{
lean_dec(v_i_2152_);
return v_entries_2153_;
}
else
{
lean_object* v_k_2156_; lean_object* v_v_2157_; uint64_t v___x_2158_; size_t v_h_2159_; size_t v___x_2160_; lean_object* v___x_2161_; size_t v___x_2162_; size_t v___x_2163_; size_t v___x_2164_; size_t v_h_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v_k_2156_ = lean_array_fget_borrowed(v_keys_2150_, v_i_2152_);
v_v_2157_ = lean_array_fget_borrowed(v_vals_2151_, v_i_2152_);
v___x_2158_ = l_Lean_instHashableMVarId_hash(v_k_2156_);
v_h_2159_ = lean_uint64_to_usize(v___x_2158_);
v___x_2160_ = ((size_t)5ULL);
v___x_2161_ = lean_unsigned_to_nat(1u);
v___x_2162_ = ((size_t)1ULL);
v___x_2163_ = lean_usize_sub(v_depth_2149_, v___x_2162_);
v___x_2164_ = lean_usize_mul(v___x_2160_, v___x_2163_);
v_h_2165_ = lean_usize_shift_right(v_h_2159_, v___x_2164_);
v___x_2166_ = lean_nat_add(v_i_2152_, v___x_2161_);
lean_dec(v_i_2152_);
lean_inc(v_v_2157_);
lean_inc(v_k_2156_);
v___x_2167_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_entries_2153_, v_h_2165_, v_depth_2149_, v_k_2156_, v_v_2157_);
v_i_2152_ = v___x_2166_;
v_entries_2153_ = v___x_2167_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg___boxed(lean_object* v_depth_2169_, lean_object* v_keys_2170_, lean_object* v_vals_2171_, lean_object* v_i_2172_, lean_object* v_entries_2173_){
_start:
{
size_t v_depth_boxed_2174_; lean_object* v_res_2175_; 
v_depth_boxed_2174_ = lean_unbox_usize(v_depth_2169_);
lean_dec(v_depth_2169_);
v_res_2175_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_boxed_2174_, v_keys_2170_, v_vals_2171_, v_i_2172_, v_entries_2173_);
lean_dec_ref(v_vals_2171_);
lean_dec_ref(v_keys_2170_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg___boxed(lean_object* v_x_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
size_t v_x_31234__boxed_2181_; size_t v_x_31235__boxed_2182_; lean_object* v_res_2183_; 
v_x_31234__boxed_2181_ = lean_unbox_usize(v_x_2177_);
lean_dec(v_x_2177_);
v_x_31235__boxed_2182_ = lean_unbox_usize(v_x_2178_);
lean_dec(v_x_2178_);
v_res_2183_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2176_, v_x_31234__boxed_2181_, v_x_31235__boxed_2182_, v_x_2179_, v_x_2180_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(lean_object* v_x_2184_, lean_object* v_x_2185_, lean_object* v_x_2186_){
_start:
{
uint64_t v___x_2187_; size_t v___x_2188_; size_t v___x_2189_; lean_object* v___x_2190_; 
v___x_2187_ = l_Lean_instHashableMVarId_hash(v_x_2185_);
v___x_2188_ = lean_uint64_to_usize(v___x_2187_);
v___x_2189_ = ((size_t)1ULL);
v___x_2190_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2184_, v___x_2188_, v___x_2189_, v_x_2185_, v_x_2186_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(lean_object* v_mvarId_2191_, lean_object* v_val_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v___x_2195_; lean_object* v_mctx_2196_; lean_object* v_cache_2197_; lean_object* v_zetaDeltaFVarIds_2198_; lean_object* v_postponed_2199_; lean_object* v_diag_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2229_; 
v___x_2195_ = lean_st_ref_take(v___y_2193_);
v_mctx_2196_ = lean_ctor_get(v___x_2195_, 0);
v_cache_2197_ = lean_ctor_get(v___x_2195_, 1);
v_zetaDeltaFVarIds_2198_ = lean_ctor_get(v___x_2195_, 2);
v_postponed_2199_ = lean_ctor_get(v___x_2195_, 3);
v_diag_2200_ = lean_ctor_get(v___x_2195_, 4);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2202_ = v___x_2195_;
v_isShared_2203_ = v_isSharedCheck_2229_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_diag_2200_);
lean_inc(v_postponed_2199_);
lean_inc(v_zetaDeltaFVarIds_2198_);
lean_inc(v_cache_2197_);
lean_inc(v_mctx_2196_);
lean_dec(v___x_2195_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2229_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v_depth_2204_; lean_object* v_levelAssignDepth_2205_; lean_object* v_lmvarCounter_2206_; lean_object* v_mvarCounter_2207_; lean_object* v_lDecls_2208_; lean_object* v_decls_2209_; lean_object* v_userNames_2210_; lean_object* v_lAssignment_2211_; lean_object* v_eAssignment_2212_; lean_object* v_dAssignment_2213_; lean_object* v_instanceTypedMVars_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2228_; 
v_depth_2204_ = lean_ctor_get(v_mctx_2196_, 0);
v_levelAssignDepth_2205_ = lean_ctor_get(v_mctx_2196_, 1);
v_lmvarCounter_2206_ = lean_ctor_get(v_mctx_2196_, 2);
v_mvarCounter_2207_ = lean_ctor_get(v_mctx_2196_, 3);
v_lDecls_2208_ = lean_ctor_get(v_mctx_2196_, 4);
v_decls_2209_ = lean_ctor_get(v_mctx_2196_, 5);
v_userNames_2210_ = lean_ctor_get(v_mctx_2196_, 6);
v_lAssignment_2211_ = lean_ctor_get(v_mctx_2196_, 7);
v_eAssignment_2212_ = lean_ctor_get(v_mctx_2196_, 8);
v_dAssignment_2213_ = lean_ctor_get(v_mctx_2196_, 9);
v_instanceTypedMVars_2214_ = lean_ctor_get(v_mctx_2196_, 10);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_mctx_2196_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2216_ = v_mctx_2196_;
v_isShared_2217_ = v_isSharedCheck_2228_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_instanceTypedMVars_2214_);
lean_inc(v_dAssignment_2213_);
lean_inc(v_eAssignment_2212_);
lean_inc(v_lAssignment_2211_);
lean_inc(v_userNames_2210_);
lean_inc(v_decls_2209_);
lean_inc(v_lDecls_2208_);
lean_inc(v_mvarCounter_2207_);
lean_inc(v_lmvarCounter_2206_);
lean_inc(v_levelAssignDepth_2205_);
lean_inc(v_depth_2204_);
lean_dec(v_mctx_2196_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2228_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2218_ = lean_box(0);
v___x_2219_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_eAssignment_2212_, v_mvarId_2191_, v_val_2192_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 8, v___x_2219_);
v___x_2221_ = v___x_2216_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_depth_2204_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_levelAssignDepth_2205_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_lmvarCounter_2206_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v_mvarCounter_2207_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v_lDecls_2208_);
lean_ctor_set(v_reuseFailAlloc_2227_, 5, v_decls_2209_);
lean_ctor_set(v_reuseFailAlloc_2227_, 6, v_userNames_2210_);
lean_ctor_set(v_reuseFailAlloc_2227_, 7, v_lAssignment_2211_);
lean_ctor_set(v_reuseFailAlloc_2227_, 8, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2227_, 9, v_dAssignment_2213_);
lean_ctor_set(v_reuseFailAlloc_2227_, 10, v_instanceTypedMVars_2214_);
v___x_2221_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2223_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2221_);
v___x_2223_ = v___x_2202_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2221_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_cache_2197_);
lean_ctor_set(v_reuseFailAlloc_2226_, 2, v_zetaDeltaFVarIds_2198_);
lean_ctor_set(v_reuseFailAlloc_2226_, 3, v_postponed_2199_);
lean_ctor_set(v_reuseFailAlloc_2226_, 4, v_diag_2200_);
v___x_2223_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = lean_st_ref_put(v___y_2193_, v___x_2223_);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2218_);
return v___x_2225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg___boxed(lean_object* v_mvarId_2230_, lean_object* v_val_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_2230_, v_val_2231_, v___y_2232_);
lean_dec(v___y_2232_);
return v_res_2234_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = lean_unsigned_to_nat(32u);
v___x_2236_ = lean_mk_empty_array_with_capacity(v___x_2235_);
v___x_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
return v___x_2237_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2238_ = ((size_t)5ULL);
v___x_2239_ = lean_unsigned_to_nat(0u);
v___x_2240_ = lean_unsigned_to_nat(32u);
v___x_2241_ = lean_mk_empty_array_with_capacity(v___x_2240_);
v___x_2242_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0);
v___x_2243_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2243_, 0, v___x_2242_);
lean_ctor_set(v___x_2243_, 1, v___x_2241_);
lean_ctor_set(v___x_2243_, 2, v___x_2239_);
lean_ctor_set(v___x_2243_, 3, v___x_2239_);
lean_ctor_set_usize(v___x_2243_, 4, v___x_2238_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(lean_object* v___y_2244_){
_start:
{
lean_object* v___x_2246_; lean_object* v_traceState_2247_; lean_object* v_traces_2248_; lean_object* v___x_2249_; lean_object* v_traceState_2250_; lean_object* v_env_2251_; lean_object* v_nextMacroScope_2252_; lean_object* v_ngen_2253_; lean_object* v_auxDeclNGen_2254_; lean_object* v_cache_2255_; lean_object* v_messages_2256_; lean_object* v_infoState_2257_; lean_object* v_snapshotTasks_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2277_; 
v___x_2246_ = lean_st_ref_get(v___y_2244_);
v_traceState_2247_ = lean_ctor_get(v___x_2246_, 4);
lean_inc_ref(v_traceState_2247_);
lean_dec(v___x_2246_);
v_traces_2248_ = lean_ctor_get(v_traceState_2247_, 0);
lean_inc_ref(v_traces_2248_);
lean_dec_ref(v_traceState_2247_);
v___x_2249_ = lean_st_ref_take(v___y_2244_);
v_traceState_2250_ = lean_ctor_get(v___x_2249_, 4);
v_env_2251_ = lean_ctor_get(v___x_2249_, 0);
v_nextMacroScope_2252_ = lean_ctor_get(v___x_2249_, 1);
v_ngen_2253_ = lean_ctor_get(v___x_2249_, 2);
v_auxDeclNGen_2254_ = lean_ctor_get(v___x_2249_, 3);
v_cache_2255_ = lean_ctor_get(v___x_2249_, 5);
v_messages_2256_ = lean_ctor_get(v___x_2249_, 6);
v_infoState_2257_ = lean_ctor_get(v___x_2249_, 7);
v_snapshotTasks_2258_ = lean_ctor_get(v___x_2249_, 8);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2260_ = v___x_2249_;
v_isShared_2261_ = v_isSharedCheck_2277_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_snapshotTasks_2258_);
lean_inc(v_infoState_2257_);
lean_inc(v_messages_2256_);
lean_inc(v_cache_2255_);
lean_inc(v_traceState_2250_);
lean_inc(v_auxDeclNGen_2254_);
lean_inc(v_ngen_2253_);
lean_inc(v_nextMacroScope_2252_);
lean_inc(v_env_2251_);
lean_dec(v___x_2249_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2277_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
uint64_t v_tid_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2275_; 
v_tid_2262_ = lean_ctor_get_uint64(v_traceState_2250_, sizeof(void*)*1);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_traceState_2250_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; 
v_unused_2276_ = lean_ctor_get(v_traceState_2250_, 0);
lean_dec(v_unused_2276_);
v___x_2264_ = v_traceState_2250_;
v_isShared_2265_ = v_isSharedCheck_2275_;
goto v_resetjp_2263_;
}
else
{
lean_dec(v_traceState_2250_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2275_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2266_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 0, v___x_2266_);
v___x_2268_ = v___x_2264_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2266_);
lean_ctor_set_uint64(v_reuseFailAlloc_2274_, sizeof(void*)*1, v_tid_2262_);
v___x_2268_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2270_; 
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 4, v___x_2268_);
v___x_2270_ = v___x_2260_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_env_2251_);
lean_ctor_set(v_reuseFailAlloc_2273_, 1, v_nextMacroScope_2252_);
lean_ctor_set(v_reuseFailAlloc_2273_, 2, v_ngen_2253_);
lean_ctor_set(v_reuseFailAlloc_2273_, 3, v_auxDeclNGen_2254_);
lean_ctor_set(v_reuseFailAlloc_2273_, 4, v___x_2268_);
lean_ctor_set(v_reuseFailAlloc_2273_, 5, v_cache_2255_);
lean_ctor_set(v_reuseFailAlloc_2273_, 6, v_messages_2256_);
lean_ctor_set(v_reuseFailAlloc_2273_, 7, v_infoState_2257_);
lean_ctor_set(v_reuseFailAlloc_2273_, 8, v_snapshotTasks_2258_);
v___x_2270_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = lean_st_ref_put(v___y_2244_, v___x_2270_);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v_traces_2248_);
return v___x_2272_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___boxed(lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_2278_);
lean_dec(v___y_2278_);
return v_res_2280_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(lean_object* v_opts_2281_, lean_object* v_opt_2282_){
_start:
{
lean_object* v_name_2283_; lean_object* v_defValue_2284_; lean_object* v_map_2285_; lean_object* v___x_2286_; 
v_name_2283_ = lean_ctor_get(v_opt_2282_, 0);
v_defValue_2284_ = lean_ctor_get(v_opt_2282_, 1);
v_map_2285_ = lean_ctor_get(v_opts_2281_, 0);
v___x_2286_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2285_, v_name_2283_);
if (lean_obj_tag(v___x_2286_) == 0)
{
uint8_t v___x_2287_; 
v___x_2287_ = lean_unbox(v_defValue_2284_);
return v___x_2287_;
}
else
{
lean_object* v_val_2288_; 
v_val_2288_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_val_2288_);
lean_dec_ref_known(v___x_2286_, 1);
if (lean_obj_tag(v_val_2288_) == 1)
{
uint8_t v_v_2289_; 
v_v_2289_ = lean_ctor_get_uint8(v_val_2288_, 0);
lean_dec_ref_known(v_val_2288_, 0);
return v_v_2289_;
}
else
{
uint8_t v___x_2290_; 
lean_dec(v_val_2288_);
v___x_2290_ = lean_unbox(v_defValue_2284_);
return v___x_2290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5___boxed(lean_object* v_opts_2291_, lean_object* v_opt_2292_){
_start:
{
uint8_t v_res_2293_; lean_object* v_r_2294_; 
v_res_2293_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2291_, v_opt_2292_);
lean_dec_ref(v_opt_2292_);
lean_dec_ref(v_opts_2291_);
v_r_2294_ = lean_box(v_res_2293_);
return v_r_2294_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0));
v___x_2297_ = l_Lean_stringToMessageData(v___x_2296_);
return v___x_2297_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__2___closed__2));
v___x_2300_ = l_Lean_stringToMessageData(v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2(lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_x_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2309_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1);
v___x_2310_ = l_Lean_MessageData_ofExpr(v_a_2301_);
v___x_2311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__3);
v___x_2313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2311_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
v___x_2314_ = l_Lean_MessageData_ofExpr(v_a_2302_);
v___x_2315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2313_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___boxed(lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_x_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_Meta_Transport_mkEquiv___lam__2(v_a_2317_, v_a_2318_, v_x_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec_ref(v_x_2319_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(lean_object* v_opts_2326_, lean_object* v_opt_2327_){
_start:
{
lean_object* v_name_2328_; lean_object* v_defValue_2329_; lean_object* v_map_2330_; lean_object* v___x_2331_; 
v_name_2328_ = lean_ctor_get(v_opt_2327_, 0);
v_defValue_2329_ = lean_ctor_get(v_opt_2327_, 1);
v_map_2330_ = lean_ctor_get(v_opts_2326_, 0);
v___x_2331_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2330_, v_name_2328_);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_inc(v_defValue_2329_);
return v_defValue_2329_;
}
else
{
lean_object* v_val_2332_; 
v_val_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_val_2332_);
lean_dec_ref_known(v___x_2331_, 1);
if (lean_obj_tag(v_val_2332_) == 3)
{
lean_object* v_v_2333_; 
v_v_2333_ = lean_ctor_get(v_val_2332_, 0);
lean_inc(v_v_2333_);
lean_dec_ref_known(v_val_2332_, 1);
return v_v_2333_;
}
else
{
lean_dec(v_val_2332_);
lean_inc(v_defValue_2329_);
return v_defValue_2329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11___boxed(lean_object* v_opts_2334_, lean_object* v_opt_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2334_, v_opt_2335_);
lean_dec_ref(v_opt_2335_);
lean_dec_ref(v_opts_2334_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(lean_object* v_x_2337_){
_start:
{
if (lean_obj_tag(v_x_2337_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
v_a_2339_ = lean_ctor_get(v_x_2337_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2337_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v_x_2337_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v_x_2337_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
lean_ctor_set_tag(v___x_2341_, 1);
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
v_a_2347_ = lean_ctor_get(v_x_2337_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_x_2337_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v_x_2337_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2337_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 0);
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg___boxed(lean_object* v_x_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_2355_);
return v_res_2357_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(lean_object* v_e_2358_){
_start:
{
if (lean_obj_tag(v_e_2358_) == 0)
{
uint8_t v___x_2359_; 
v___x_2359_ = 2;
return v___x_2359_;
}
else
{
lean_object* v_a_2360_; uint8_t v___x_2361_; 
v_a_2360_ = lean_ctor_get(v_e_2358_, 0);
v___x_2361_ = l_Lean_Expr_hasSyntheticSorry(v_a_2360_);
if (v___x_2361_ == 0)
{
uint8_t v___x_2362_; 
v___x_2362_ = 0;
return v___x_2362_;
}
else
{
uint8_t v___x_2363_; 
v___x_2363_ = 1;
return v___x_2363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10___boxed(lean_object* v_e_2364_){
_start:
{
uint8_t v_res_2365_; lean_object* v_r_2366_; 
v_res_2365_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_e_2364_);
lean_dec_ref(v_e_2364_);
v_r_2366_ = lean_box(v_res_2365_);
return v_r_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(size_t v_sz_2367_, size_t v_i_2368_, lean_object* v_bs_2369_){
_start:
{
uint8_t v___x_2370_; 
v___x_2370_ = lean_usize_dec_lt(v_i_2368_, v_sz_2367_);
if (v___x_2370_ == 0)
{
return v_bs_2369_;
}
else
{
lean_object* v_v_2371_; lean_object* v_msg_2372_; lean_object* v___x_2373_; lean_object* v_bs_x27_2374_; size_t v___x_2375_; size_t v___x_2376_; lean_object* v___x_2377_; 
v_v_2371_ = lean_array_uget_borrowed(v_bs_2369_, v_i_2368_);
v_msg_2372_ = lean_ctor_get(v_v_2371_, 1);
lean_inc_ref(v_msg_2372_);
v___x_2373_ = lean_unsigned_to_nat(0u);
v_bs_x27_2374_ = lean_array_uset(v_bs_2369_, v_i_2368_, v___x_2373_);
v___x_2375_ = ((size_t)1ULL);
v___x_2376_ = lean_usize_add(v_i_2368_, v___x_2375_);
v___x_2377_ = lean_array_uset(v_bs_x27_2374_, v_i_2368_, v_msg_2372_);
v_i_2368_ = v___x_2376_;
v_bs_2369_ = v___x_2377_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11___boxed(lean_object* v_sz_2379_, lean_object* v_i_2380_, lean_object* v_bs_2381_){
_start:
{
size_t v_sz_boxed_2382_; size_t v_i_boxed_2383_; lean_object* v_res_2384_; 
v_sz_boxed_2382_ = lean_unbox_usize(v_sz_2379_);
lean_dec(v_sz_2379_);
v_i_boxed_2383_ = lean_unbox_usize(v_i_2380_);
lean_dec(v_i_2380_);
v_res_2384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_boxed_2382_, v_i_boxed_2383_, v_bs_2381_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(lean_object* v_oldTraces_2385_, lean_object* v_data_2386_, lean_object* v_ref_2387_, lean_object* v_msg_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_toCold_2394_; lean_object* v_currRecDepth_2395_; lean_object* v_ref_2396_; uint8_t v_diag_2397_; uint8_t v_suppressElabErrors_2398_; lean_object* v_ref_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v_traceState_2402_; lean_object* v_traces_2403_; lean_object* v___x_2404_; size_t v_sz_2405_; size_t v___x_2406_; lean_object* v___x_2407_; lean_object* v_msg_2408_; lean_object* v___x_2409_; lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2447_; 
v_toCold_2394_ = lean_ctor_get(v___y_2391_, 0);
v_currRecDepth_2395_ = lean_ctor_get(v___y_2391_, 1);
v_ref_2396_ = lean_ctor_get(v___y_2391_, 2);
v_diag_2397_ = lean_ctor_get_uint8(v___y_2391_, sizeof(void*)*3);
v_suppressElabErrors_2398_ = lean_ctor_get_uint8(v___y_2391_, sizeof(void*)*3 + 1);
v_ref_2399_ = l_Lean_replaceRef(v_ref_2387_, v_ref_2396_);
lean_inc(v_currRecDepth_2395_);
lean_inc_ref(v_toCold_2394_);
v___x_2400_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2400_, 0, v_toCold_2394_);
lean_ctor_set(v___x_2400_, 1, v_currRecDepth_2395_);
lean_ctor_set(v___x_2400_, 2, v_ref_2399_);
lean_ctor_set_uint8(v___x_2400_, sizeof(void*)*3, v_diag_2397_);
lean_ctor_set_uint8(v___x_2400_, sizeof(void*)*3 + 1, v_suppressElabErrors_2398_);
v___x_2401_ = lean_st_ref_get(v___y_2392_);
v_traceState_2402_ = lean_ctor_get(v___x_2401_, 4);
lean_inc_ref(v_traceState_2402_);
lean_dec(v___x_2401_);
v_traces_2403_ = lean_ctor_get(v_traceState_2402_, 0);
lean_inc_ref(v_traces_2403_);
lean_dec_ref(v_traceState_2402_);
v___x_2404_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2403_);
lean_dec_ref(v_traces_2403_);
v_sz_2405_ = lean_array_size(v___x_2404_);
v___x_2406_ = ((size_t)0ULL);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_2405_, v___x_2406_, v___x_2404_);
v_msg_2408_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2408_, 0, v_data_2386_);
lean_ctor_set(v_msg_2408_, 1, v_msg_2388_);
lean_ctor_set(v_msg_2408_, 2, v___x_2407_);
v___x_2409_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_2408_, v___y_2389_, v___y_2390_, v___x_2400_, v___y_2392_);
lean_dec_ref_known(v___x_2400_, 3);
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2412_ = v___x_2409_;
v_isShared_2413_ = v_isSharedCheck_2447_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2409_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2447_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; lean_object* v_traceState_2415_; lean_object* v_env_2416_; lean_object* v_nextMacroScope_2417_; lean_object* v_ngen_2418_; lean_object* v_auxDeclNGen_2419_; lean_object* v_cache_2420_; lean_object* v_messages_2421_; lean_object* v_infoState_2422_; lean_object* v_snapshotTasks_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2446_; 
v___x_2414_ = lean_st_ref_take(v___y_2392_);
v_traceState_2415_ = lean_ctor_get(v___x_2414_, 4);
v_env_2416_ = lean_ctor_get(v___x_2414_, 0);
v_nextMacroScope_2417_ = lean_ctor_get(v___x_2414_, 1);
v_ngen_2418_ = lean_ctor_get(v___x_2414_, 2);
v_auxDeclNGen_2419_ = lean_ctor_get(v___x_2414_, 3);
v_cache_2420_ = lean_ctor_get(v___x_2414_, 5);
v_messages_2421_ = lean_ctor_get(v___x_2414_, 6);
v_infoState_2422_ = lean_ctor_get(v___x_2414_, 7);
v_snapshotTasks_2423_ = lean_ctor_get(v___x_2414_, 8);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2425_ = v___x_2414_;
v_isShared_2426_ = v_isSharedCheck_2446_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_snapshotTasks_2423_);
lean_inc(v_infoState_2422_);
lean_inc(v_messages_2421_);
lean_inc(v_cache_2420_);
lean_inc(v_traceState_2415_);
lean_inc(v_auxDeclNGen_2419_);
lean_inc(v_ngen_2418_);
lean_inc(v_nextMacroScope_2417_);
lean_inc(v_env_2416_);
lean_dec(v___x_2414_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2446_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
uint64_t v_tid_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2444_; 
v_tid_2427_ = lean_ctor_get_uint64(v_traceState_2415_, sizeof(void*)*1);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_traceState_2415_);
if (v_isSharedCheck_2444_ == 0)
{
lean_object* v_unused_2445_; 
v_unused_2445_ = lean_ctor_get(v_traceState_2415_, 0);
lean_dec(v_unused_2445_);
v___x_2429_ = v_traceState_2415_;
v_isShared_2430_ = v_isSharedCheck_2444_;
goto v_resetjp_2428_;
}
else
{
lean_dec(v_traceState_2415_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2444_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2431_ = lean_box(0);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_ref_2387_);
lean_ctor_set(v___x_2432_, 1, v_a_2410_);
v___x_2433_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2385_, v___x_2432_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 0, v___x_2433_);
v___x_2435_ = v___x_2429_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2433_);
lean_ctor_set_uint64(v_reuseFailAlloc_2443_, sizeof(void*)*1, v_tid_2427_);
v___x_2435_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2437_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 4, v___x_2435_);
v___x_2437_ = v___x_2425_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_env_2416_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_nextMacroScope_2417_);
lean_ctor_set(v_reuseFailAlloc_2442_, 2, v_ngen_2418_);
lean_ctor_set(v_reuseFailAlloc_2442_, 3, v_auxDeclNGen_2419_);
lean_ctor_set(v_reuseFailAlloc_2442_, 4, v___x_2435_);
lean_ctor_set(v_reuseFailAlloc_2442_, 5, v_cache_2420_);
lean_ctor_set(v_reuseFailAlloc_2442_, 6, v_messages_2421_);
lean_ctor_set(v_reuseFailAlloc_2442_, 7, v_infoState_2422_);
lean_ctor_set(v_reuseFailAlloc_2442_, 8, v_snapshotTasks_2423_);
v___x_2437_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2438_ = lean_st_ref_put(v___y_2392_, v___x_2437_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 0, v___x_2431_);
v___x_2440_ = v___x_2412_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2431_);
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8___boxed(lean_object* v_oldTraces_2448_, lean_object* v_data_2449_, lean_object* v_ref_2450_, lean_object* v_msg_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2448_, v_data_2449_, v_ref_2450_, v_msg_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
return v_res_2457_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2458_; double v___x_2459_; 
v___x_2458_ = lean_unsigned_to_nat(0u);
v___x_2459_ = lean_float_of_nat(v___x_2458_);
return v___x_2459_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1));
v___x_2462_ = l_Lean_stringToMessageData(v___x_2461_);
return v___x_2462_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2463_; double v___x_2464_; 
v___x_2463_ = lean_unsigned_to_nat(1000u);
v___x_2464_ = lean_float_of_nat(v___x_2463_);
return v___x_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(lean_object* v_cls_2465_, uint8_t v_collapsed_2466_, lean_object* v_tag_2467_, lean_object* v_opts_2468_, uint8_t v_clsEnabled_2469_, lean_object* v_oldTraces_2470_, lean_object* v_msg_2471_, lean_object* v_resStartStop_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_fst_2478_; lean_object* v_snd_2479_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v_data_2483_; lean_object* v_fst_2494_; lean_object* v_snd_2495_; lean_object* v___x_2496_; uint8_t v___x_2497_; lean_object* v___y_2499_; lean_object* v_a_2500_; uint8_t v___y_2515_; double v___y_2546_; 
v_fst_2478_ = lean_ctor_get(v_resStartStop_2472_, 0);
lean_inc(v_fst_2478_);
v_snd_2479_ = lean_ctor_get(v_resStartStop_2472_, 1);
lean_inc(v_snd_2479_);
lean_dec_ref(v_resStartStop_2472_);
v_fst_2494_ = lean_ctor_get(v_snd_2479_, 0);
lean_inc(v_fst_2494_);
v_snd_2495_ = lean_ctor_get(v_snd_2479_, 1);
lean_inc(v_snd_2495_);
lean_dec(v_snd_2479_);
v___x_2496_ = l_Lean_trace_profiler;
v___x_2497_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2468_, v___x_2496_);
if (v___x_2497_ == 0)
{
v___y_2515_ = v___x_2497_;
goto v___jp_2514_;
}
else
{
lean_object* v___x_2551_; uint8_t v___x_2552_; 
v___x_2551_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2552_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2468_, v___x_2551_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; lean_object* v___x_2554_; double v___x_2555_; double v___x_2556_; double v___x_2557_; 
v___x_2553_ = l_Lean_trace_profiler_threshold;
v___x_2554_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2468_, v___x_2553_);
v___x_2555_ = lean_float_of_nat(v___x_2554_);
v___x_2556_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3);
v___x_2557_ = lean_float_div(v___x_2555_, v___x_2556_);
v___y_2546_ = v___x_2557_;
goto v___jp_2545_;
}
else
{
lean_object* v___x_2558_; lean_object* v___x_2559_; double v___x_2560_; 
v___x_2558_ = l_Lean_trace_profiler_threshold;
v___x_2559_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2468_, v___x_2558_);
v___x_2560_ = lean_float_of_nat(v___x_2559_);
v___y_2546_ = v___x_2560_;
goto v___jp_2545_;
}
}
v___jp_2480_:
{
lean_object* v___x_2484_; 
lean_inc(v___y_2481_);
v___x_2484_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2470_, v_data_2483_, v___y_2481_, v___y_2482_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v___x_2485_; 
lean_dec_ref_known(v___x_2484_, 1);
v___x_2485_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2478_);
return v___x_2485_;
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec(v_fst_2478_);
v_a_2486_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2484_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2484_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
v___jp_2498_:
{
uint8_t v_result_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; double v___x_2504_; lean_object* v_data_2505_; 
v_result_2501_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_fst_2478_);
v___x_2502_ = lean_box(v_result_2501_);
v___x_2503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
v___x_2504_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0);
lean_inc_ref(v_tag_2467_);
lean_inc_ref(v___x_2503_);
lean_inc(v_cls_2465_);
v_data_2505_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2505_, 0, v_cls_2465_);
lean_ctor_set(v_data_2505_, 1, v___x_2503_);
lean_ctor_set(v_data_2505_, 2, v_tag_2467_);
lean_ctor_set_float(v_data_2505_, sizeof(void*)*3, v___x_2504_);
lean_ctor_set_float(v_data_2505_, sizeof(void*)*3 + 8, v___x_2504_);
lean_ctor_set_uint8(v_data_2505_, sizeof(void*)*3 + 16, v_collapsed_2466_);
if (v___x_2497_ == 0)
{
lean_dec_ref_known(v___x_2503_, 1);
lean_dec(v_snd_2495_);
lean_dec(v_fst_2494_);
lean_dec_ref(v_tag_2467_);
lean_dec(v_cls_2465_);
v___y_2481_ = v___y_2499_;
v___y_2482_ = v_a_2500_;
v_data_2483_ = v_data_2505_;
goto v___jp_2480_;
}
else
{
lean_object* v_data_2506_; double v___x_2507_; double v___x_2508_; 
lean_dec_ref_known(v_data_2505_, 3);
v_data_2506_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2506_, 0, v_cls_2465_);
lean_ctor_set(v_data_2506_, 1, v___x_2503_);
lean_ctor_set(v_data_2506_, 2, v_tag_2467_);
v___x_2507_ = lean_unbox_float(v_fst_2494_);
lean_dec(v_fst_2494_);
lean_ctor_set_float(v_data_2506_, sizeof(void*)*3, v___x_2507_);
v___x_2508_ = lean_unbox_float(v_snd_2495_);
lean_dec(v_snd_2495_);
lean_ctor_set_float(v_data_2506_, sizeof(void*)*3 + 8, v___x_2508_);
lean_ctor_set_uint8(v_data_2506_, sizeof(void*)*3 + 16, v_collapsed_2466_);
v___y_2481_ = v___y_2499_;
v___y_2482_ = v_a_2500_;
v_data_2483_ = v_data_2506_;
goto v___jp_2480_;
}
}
v___jp_2509_:
{
lean_object* v_ref_2510_; lean_object* v___x_2511_; 
v_ref_2510_ = lean_ctor_get(v___y_2475_, 2);
lean_inc(v___y_2476_);
lean_inc_ref(v___y_2475_);
lean_inc(v___y_2474_);
lean_inc_ref(v___y_2473_);
lean_inc(v_fst_2478_);
v___x_2511_ = lean_apply_6(v_msg_2471_, v_fst_2478_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, lean_box(0));
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2512_);
lean_dec_ref_known(v___x_2511_, 1);
v___y_2499_ = v_ref_2510_;
v_a_2500_ = v_a_2512_;
goto v___jp_2498_;
}
else
{
lean_object* v___x_2513_; 
lean_dec_ref_known(v___x_2511_, 1);
v___x_2513_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2);
v___y_2499_ = v_ref_2510_;
v_a_2500_ = v___x_2513_;
goto v___jp_2498_;
}
}
v___jp_2514_:
{
if (v_clsEnabled_2469_ == 0)
{
if (v___y_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v_traceState_2517_; lean_object* v_env_2518_; lean_object* v_nextMacroScope_2519_; lean_object* v_ngen_2520_; lean_object* v_auxDeclNGen_2521_; lean_object* v_cache_2522_; lean_object* v_messages_2523_; lean_object* v_infoState_2524_; lean_object* v_snapshotTasks_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2544_; 
lean_dec(v_snd_2495_);
lean_dec(v_fst_2494_);
lean_dec_ref(v_msg_2471_);
lean_dec_ref(v_tag_2467_);
lean_dec(v_cls_2465_);
v___x_2516_ = lean_st_ref_take(v___y_2476_);
v_traceState_2517_ = lean_ctor_get(v___x_2516_, 4);
v_env_2518_ = lean_ctor_get(v___x_2516_, 0);
v_nextMacroScope_2519_ = lean_ctor_get(v___x_2516_, 1);
v_ngen_2520_ = lean_ctor_get(v___x_2516_, 2);
v_auxDeclNGen_2521_ = lean_ctor_get(v___x_2516_, 3);
v_cache_2522_ = lean_ctor_get(v___x_2516_, 5);
v_messages_2523_ = lean_ctor_get(v___x_2516_, 6);
v_infoState_2524_ = lean_ctor_get(v___x_2516_, 7);
v_snapshotTasks_2525_ = lean_ctor_get(v___x_2516_, 8);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2527_ = v___x_2516_;
v_isShared_2528_ = v_isSharedCheck_2544_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_snapshotTasks_2525_);
lean_inc(v_infoState_2524_);
lean_inc(v_messages_2523_);
lean_inc(v_cache_2522_);
lean_inc(v_traceState_2517_);
lean_inc(v_auxDeclNGen_2521_);
lean_inc(v_ngen_2520_);
lean_inc(v_nextMacroScope_2519_);
lean_inc(v_env_2518_);
lean_dec(v___x_2516_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2544_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
uint64_t v_tid_2529_; lean_object* v_traces_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2543_; 
v_tid_2529_ = lean_ctor_get_uint64(v_traceState_2517_, sizeof(void*)*1);
v_traces_2530_ = lean_ctor_get(v_traceState_2517_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v_traceState_2517_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2532_ = v_traceState_2517_;
v_isShared_2533_ = v_isSharedCheck_2543_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_traces_2530_);
lean_dec(v_traceState_2517_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2543_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2534_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2470_, v_traces_2530_);
lean_dec_ref(v_traces_2530_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v___x_2534_);
v___x_2536_ = v___x_2532_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2534_);
lean_ctor_set_uint64(v_reuseFailAlloc_2542_, sizeof(void*)*1, v_tid_2529_);
v___x_2536_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
lean_object* v___x_2538_; 
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 4, v___x_2536_);
v___x_2538_ = v___x_2527_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_env_2518_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v_nextMacroScope_2519_);
lean_ctor_set(v_reuseFailAlloc_2541_, 2, v_ngen_2520_);
lean_ctor_set(v_reuseFailAlloc_2541_, 3, v_auxDeclNGen_2521_);
lean_ctor_set(v_reuseFailAlloc_2541_, 4, v___x_2536_);
lean_ctor_set(v_reuseFailAlloc_2541_, 5, v_cache_2522_);
lean_ctor_set(v_reuseFailAlloc_2541_, 6, v_messages_2523_);
lean_ctor_set(v_reuseFailAlloc_2541_, 7, v_infoState_2524_);
lean_ctor_set(v_reuseFailAlloc_2541_, 8, v_snapshotTasks_2525_);
v___x_2538_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = lean_st_ref_put(v___y_2476_, v___x_2538_);
v___x_2540_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2478_);
return v___x_2540_;
}
}
}
}
}
else
{
goto v___jp_2509_;
}
}
else
{
goto v___jp_2509_;
}
}
v___jp_2545_:
{
double v___x_2547_; double v___x_2548_; double v___x_2549_; uint8_t v___x_2550_; 
v___x_2547_ = lean_unbox_float(v_snd_2495_);
v___x_2548_ = lean_unbox_float(v_fst_2494_);
v___x_2549_ = lean_float_sub(v___x_2547_, v___x_2548_);
v___x_2550_ = lean_float_decLt(v___y_2546_, v___x_2549_);
v___y_2515_ = v___x_2550_;
goto v___jp_2514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___boxed(lean_object* v_cls_2561_, lean_object* v_collapsed_2562_, lean_object* v_tag_2563_, lean_object* v_opts_2564_, lean_object* v_clsEnabled_2565_, lean_object* v_oldTraces_2566_, lean_object* v_msg_2567_, lean_object* v_resStartStop_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_){
_start:
{
uint8_t v_collapsed_boxed_2574_; uint8_t v_clsEnabled_boxed_2575_; lean_object* v_res_2576_; 
v_collapsed_boxed_2574_ = lean_unbox(v_collapsed_2562_);
v_clsEnabled_boxed_2575_ = lean_unbox(v_clsEnabled_2565_);
v_res_2576_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v_cls_2561_, v_collapsed_boxed_2574_, v_tag_2563_, v_opts_2564_, v_clsEnabled_boxed_2575_, v_oldTraces_2566_, v_msg_2567_, v_resStartStop_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec_ref(v_opts_2564_);
return v_res_2576_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_keys_2577_, lean_object* v_i_2578_, lean_object* v_k_2579_){
_start:
{
lean_object* v___x_2580_; uint8_t v___x_2581_; 
v___x_2580_ = lean_array_get_size(v_keys_2577_);
v___x_2581_ = lean_nat_dec_lt(v_i_2578_, v___x_2580_);
if (v___x_2581_ == 0)
{
lean_dec(v_i_2578_);
return v___x_2581_;
}
else
{
lean_object* v_k_x27_2582_; uint8_t v___x_2583_; 
v_k_x27_2582_ = lean_array_fget_borrowed(v_keys_2577_, v_i_2578_);
v___x_2583_ = l_Lean_instBEqMVarId_beq(v_k_2579_, v_k_x27_2582_);
if (v___x_2583_ == 0)
{
lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2584_ = lean_unsigned_to_nat(1u);
v___x_2585_ = lean_nat_add(v_i_2578_, v___x_2584_);
lean_dec(v_i_2578_);
v_i_2578_ = v___x_2585_;
goto _start;
}
else
{
lean_dec(v_i_2578_);
return v___x_2581_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object* v_keys_2587_, lean_object* v_i_2588_, lean_object* v_k_2589_){
_start:
{
uint8_t v_res_2590_; lean_object* v_r_2591_; 
v_res_2590_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_2587_, v_i_2588_, v_k_2589_);
lean_dec(v_k_2589_);
lean_dec_ref(v_keys_2587_);
v_r_2591_ = lean_box(v_res_2590_);
return v_r_2591_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object* v_x_2592_, size_t v_x_2593_, lean_object* v_x_2594_){
_start:
{
if (lean_obj_tag(v_x_2592_) == 0)
{
lean_object* v_es_2595_; lean_object* v___x_2596_; size_t v___x_2597_; size_t v___x_2598_; lean_object* v_j_2599_; lean_object* v___x_2600_; 
v_es_2595_ = lean_ctor_get(v_x_2592_, 0);
v___x_2596_ = lean_box(2);
v___x_2597_ = ((size_t)31ULL);
v___x_2598_ = lean_usize_land(v_x_2593_, v___x_2597_);
v_j_2599_ = lean_usize_to_nat(v___x_2598_);
v___x_2600_ = lean_array_get_borrowed(v___x_2596_, v_es_2595_, v_j_2599_);
lean_dec(v_j_2599_);
switch(lean_obj_tag(v___x_2600_))
{
case 0:
{
lean_object* v_key_2601_; uint8_t v___x_2602_; 
v_key_2601_ = lean_ctor_get(v___x_2600_, 0);
v___x_2602_ = l_Lean_instBEqMVarId_beq(v_x_2594_, v_key_2601_);
return v___x_2602_;
}
case 1:
{
lean_object* v_node_2603_; size_t v___x_2604_; size_t v___x_2605_; 
v_node_2603_ = lean_ctor_get(v___x_2600_, 0);
v___x_2604_ = ((size_t)5ULL);
v___x_2605_ = lean_usize_shift_right(v_x_2593_, v___x_2604_);
v_x_2592_ = v_node_2603_;
v_x_2593_ = v___x_2605_;
goto _start;
}
default: 
{
uint8_t v___x_2607_; 
v___x_2607_ = 0;
return v___x_2607_;
}
}
}
else
{
lean_object* v_ks_2608_; lean_object* v___x_2609_; uint8_t v___x_2610_; 
v_ks_2608_ = lean_ctor_get(v_x_2592_, 0);
v___x_2609_ = lean_unsigned_to_nat(0u);
v___x_2610_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_ks_2608_, v___x_2609_, v_x_2594_);
return v___x_2610_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_2611_, lean_object* v_x_2612_, lean_object* v_x_2613_){
_start:
{
size_t v_x_31921__boxed_2614_; uint8_t v_res_2615_; lean_object* v_r_2616_; 
v_x_31921__boxed_2614_ = lean_unbox_usize(v_x_2612_);
lean_dec(v_x_2612_);
v_res_2615_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2611_, v_x_31921__boxed_2614_, v_x_2613_);
lean_dec(v_x_2613_);
lean_dec_ref(v_x_2611_);
v_r_2616_ = lean_box(v_res_2615_);
return v_r_2616_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object* v_x_2617_, lean_object* v_x_2618_){
_start:
{
uint64_t v___x_2619_; size_t v___x_2620_; uint8_t v___x_2621_; 
v___x_2619_ = l_Lean_instHashableMVarId_hash(v_x_2618_);
v___x_2620_ = lean_uint64_to_usize(v___x_2619_);
v___x_2621_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2617_, v___x_2620_, v_x_2618_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_2622_, lean_object* v_x_2623_){
_start:
{
uint8_t v_res_2624_; lean_object* v_r_2625_; 
v_res_2624_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_2622_, v_x_2623_);
lean_dec(v_x_2623_);
lean_dec_ref(v_x_2622_);
v_r_2625_ = lean_box(v_res_2624_);
return v_r_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object* v_mvarId_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v___x_2629_; lean_object* v_mctx_2630_; lean_object* v_eAssignment_2631_; uint8_t v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2629_ = lean_st_ref_get(v___y_2627_);
v_mctx_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc_ref(v_mctx_2630_);
lean_dec(v___x_2629_);
v_eAssignment_2631_ = lean_ctor_get(v_mctx_2630_, 8);
lean_inc_ref(v_eAssignment_2631_);
lean_dec_ref(v_mctx_2630_);
v___x_2632_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_eAssignment_2631_, v_mvarId_2626_);
lean_dec_ref(v_eAssignment_2631_);
v___x_2633_ = lean_box(v___x_2632_);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object* v_mvarId_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_2635_, v___y_2636_);
lean_dec(v___y_2636_);
lean_dec(v_mvarId_2635_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0___boxed(lean_object* v_fuel_2639_, lean_object* v_a_2640_, lean_object* v_x_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_Meta_Transport_mkEquiv___lam__0(v_fuel_2639_, v_a_2640_, v_x_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v_fuel_2639_);
return v_res_2647_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2650_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__1___closed__1));
v___x_2651_ = l_Lean_stringToMessageData(v___x_2650_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1(lean_object* v_fuel_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v___x_2656_, lean_object* v___x_2657_, lean_object* v___x_2658_, lean_object* v_a_2659_, uint8_t v_a_2660_, lean_object* v_declName_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2667_ = lean_unsigned_to_nat(1u);
v___x_2668_ = lean_nat_sub(v_fuel_2652_, v___x_2667_);
lean_inc(v___x_2668_);
lean_inc(v_declName_2661_);
v___x_2669_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_2661_, v_a_2653_, v___x_2668_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2670_; lean_object* v___x_2671_; 
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2670_);
lean_dec_ref_known(v___x_2669_, 1);
v___x_2671_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_2654_, v___y_2663_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___x_2703_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
lean_inc_n(v_a_2672_, 2);
lean_dec_ref_known(v___x_2671_, 1);
v___x_2703_ = l_Lean_Meta_isExprDefEq(v_a_2672_, v_a_2659_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; uint8_t v___x_2705_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
v___x_2705_ = lean_unbox(v_a_2704_);
lean_dec(v_a_2704_);
if (v___x_2705_ == 0)
{
lean_dec(v_declName_2661_);
v___y_2674_ = v___y_2662_;
v___y_2675_ = v___y_2663_;
v___y_2676_ = v___y_2664_;
v___y_2677_ = v___y_2665_;
goto v___jp_2673_;
}
else
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2706_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_2707_ = l_Lean_MessageData_ofConstName(v_declName_2661_, v_a_2660_);
v___x_2708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2706_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
v___x_2709_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2, &l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__1___closed__2);
v___x_2710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2708_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2710_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_dec_ref_known(v___x_2711_, 1);
v___y_2674_ = v___y_2662_;
v___y_2675_ = v___y_2663_;
v___y_2676_ = v___y_2664_;
v___y_2677_ = v___y_2665_;
goto v___jp_2673_;
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec(v_a_2672_);
lean_dec(v_a_2670_);
lean_dec(v___x_2668_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
lean_dec_ref(v_a_2655_);
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2711_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2711_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec(v_a_2672_);
lean_dec(v_a_2670_);
lean_dec(v___x_2668_);
lean_dec(v_declName_2661_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
lean_dec_ref(v_a_2655_);
v_a_2720_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2703_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2703_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
v___jp_2673_:
{
lean_object* v___x_2678_; 
lean_inc_ref(v_a_2655_);
lean_inc(v_a_2672_);
v___x_2678_ = l_Lean_Meta_isExprDefEq(v_a_2672_, v_a_2655_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2694_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2694_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2694_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
uint8_t v___x_2683_; 
v___x_2683_ = lean_unbox(v_a_2679_);
lean_dec(v_a_2679_);
if (v___x_2683_ == 0)
{
lean_object* v___x_2684_; 
lean_del_object(v___x_2681_);
v___x_2684_ = l_Lean_Meta_Transport_mkEquiv(v_a_2672_, v_a_2655_, v___x_2668_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2684_, 1);
v___x_2686_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__1___closed__0));
v___x_2687_ = l_Lean_Name_mkStr3(v___x_2656_, v___x_2657_, v___x_2686_);
v___x_2688_ = lean_array_push(v___x_2658_, v_a_2670_);
v___x_2689_ = lean_array_push(v___x_2688_, v_a_2685_);
v___x_2690_ = l_Lean_Meta_mkAppM(v___x_2687_, v___x_2689_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
return v___x_2690_;
}
else
{
lean_dec(v_a_2670_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
return v___x_2684_;
}
}
else
{
lean_object* v___x_2692_; 
lean_dec(v_a_2672_);
lean_dec(v___x_2668_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
lean_dec_ref(v_a_2655_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v_a_2670_);
v___x_2692_ = v___x_2681_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2670_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v_a_2672_);
lean_dec(v_a_2670_);
lean_dec(v___x_2668_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
lean_dec_ref(v_a_2655_);
v_a_2695_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2678_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2678_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
else
{
lean_dec(v_a_2670_);
lean_dec(v___x_2668_);
lean_dec(v_declName_2661_);
lean_dec_ref(v_a_2659_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
lean_dec_ref(v_a_2655_);
return v___x_2671_;
}
}
else
{
lean_dec(v___x_2668_);
lean_dec(v_declName_2661_);
lean_dec_ref(v_a_2659_);
lean_dec_ref(v___x_2658_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___x_2656_);
lean_dec_ref(v_a_2655_);
lean_dec_ref(v_a_2654_);
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___boxed(lean_object* v_fuel_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v___x_2732_, lean_object* v___x_2733_, lean_object* v___x_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_declName_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
uint8_t v_a_32156__boxed_2743_; lean_object* v_res_2744_; 
v_a_32156__boxed_2743_ = lean_unbox(v_a_2736_);
v_res_2744_ = l_Lean_Meta_Transport_mkEquiv___lam__1(v_fuel_2728_, v_a_2729_, v_a_2730_, v_a_2731_, v___x_2732_, v___x_2733_, v___x_2734_, v_a_2735_, v_a_32156__boxed_2743_, v_declName_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v_fuel_2728_);
return v_res_2744_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__1(void){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__0));
v___x_2747_ = l_Lean_stringToMessageData(v___x_2746_);
return v___x_2747_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__3(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__2));
v___x_2750_ = l_Lean_stringToMessageData(v___x_2749_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__4(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = lean_box(0);
v___x_2752_ = l_Lean_Meta_Transport_depthExceptionId;
v___x_2753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
lean_ctor_set(v___x_2753_, 1, v___x_2751_);
return v___x_2753_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__10(void){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2764_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__9));
v___x_2765_ = l_Lean_Name_append(v___x_2764_, v___x_2763_);
return v___x_2765_;
}
}
static double _init_l_Lean_Meta_Transport_mkEquiv___closed__11(void){
_start:
{
lean_object* v___x_2766_; double v___x_2767_; 
v___x_2766_ = lean_unsigned_to_nat(1000000000u);
v___x_2767_ = lean_float_of_nat(v___x_2766_);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv(lean_object* v_lhs_2768_, lean_object* v_rhs_2769_, lean_object* v_fuel_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_){
_start:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0);
v___x_2777_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_lhs_2768_, v_a_2772_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_3296_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_2780_ = v___x_2777_;
v_isShared_2781_ = v_isSharedCheck_3296_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_3296_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; 
v___x_2782_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_rhs_2769_, v_a_2772_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_toCold_2783_; lean_object* v_options_2784_; uint8_t v_hasTrace_2785_; 
v_toCold_2783_ = lean_ctor_get(v_a_2773_, 0);
v_options_2784_ = lean_ctor_get(v_toCold_2783_, 2);
v_hasTrace_2785_ = lean_ctor_get_uint8(v_options_2784_, sizeof(void*)*1);
if (v_hasTrace_2785_ == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2787_; 
lean_del_object(v___x_2780_);
v_a_2786_ = lean_ctor_get(v___x_2782_, 0);
lean_inc_n(v_a_2786_, 2);
lean_dec_ref_known(v___x_2782_, 1);
lean_inc(v_a_2778_);
v___x_2787_ = l_Lean_Meta_isExprDefEq(v_a_2778_, v_a_2786_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2914_; 
v_a_2788_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2790_ = v___x_2787_;
v_isShared_2791_ = v_isSharedCheck_2914_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2787_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2914_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
uint8_t v___x_2792_; 
v___x_2792_ = lean_unbox(v_a_2788_);
if (v___x_2792_ == 0)
{
lean_object* v___x_2793_; uint8_t v___x_2794_; 
v___x_2793_ = lean_unsigned_to_nat(0u);
v___x_2794_ = lean_nat_dec_eq(v_fuel_2770_, v___x_2793_);
if (v___x_2794_ == 0)
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
lean_del_object(v___x_2790_);
v___x_2795_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2796_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_2797_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_2798_ = lean_unsigned_to_nat(2u);
v___x_2799_ = lean_mk_empty_array_with_capacity(v___x_2798_);
lean_inc(v_a_2778_);
lean_inc_ref(v___x_2799_);
v___x_2800_ = lean_array_push(v___x_2799_, v_a_2778_);
lean_inc(v_a_2786_);
lean_inc_ref(v___x_2800_);
v___x_2801_ = lean_array_push(v___x_2800_, v_a_2786_);
v___x_2802_ = l_Lean_Meta_mkAppM(v___x_2797_, v___x_2801_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___f_2804_; lean_object* v___x_2805_; lean_object* v_env_2806_; lean_object* v___x_2807_; lean_object* v_ext_2808_; lean_object* v_toEnvExtension_2809_; lean_object* v_asyncMode_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc_n(v_a_2803_, 2);
lean_dec_ref_known(v___x_2802_, 1);
lean_inc(v_fuel_2770_);
v___f_2804_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2804_, 0, v_fuel_2770_);
lean_closure_set(v___f_2804_, 1, v_a_2803_);
v___x_2805_ = lean_st_ref_get(v_a_2774_);
v_env_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc_ref(v_env_2806_);
lean_dec(v___x_2805_);
v___x_2807_ = l_Lean_Meta_Transport_transportExt;
v_ext_2808_ = lean_ctor_get(v___x_2807_, 1);
v_toEnvExtension_2809_ = lean_ctor_get(v_ext_2808_, 0);
v_asyncMode_2810_ = lean_ctor_get(v_toEnvExtension_2809_, 2);
v___x_2811_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2776_, v___x_2807_, v_env_2806_, v_asyncMode_2810_);
lean_inc(v___x_2811_);
v___x_2812_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2811_, v_a_2803_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v___x_2814_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v___x_2812_, 1);
v___x_2814_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2813_, v___f_2804_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_2813_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2888_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2817_ = v___x_2814_;
v_isShared_2818_ = v_isSharedCheck_2888_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2814_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2888_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
if (lean_obj_tag(v_a_2815_) == 0)
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2883_; 
lean_del_object(v___x_2817_);
v_a_2819_ = lean_ctor_get(v_a_2815_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v_a_2815_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2821_ = v_a_2815_;
v_isShared_2822_ = v_isSharedCheck_2883_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v_a_2815_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2883_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2823_; 
v___x_2823_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___x_2825_; lean_object* v___x_2827_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_a_2824_);
lean_dec_ref_known(v___x_2823_, 1);
v___x_2825_ = l_Lean_mkSort(v_a_2824_);
if (v_isShared_2822_ == 0)
{
lean_ctor_set_tag(v___x_2821_, 1);
lean_ctor_set(v___x_2821_, 0, v___x_2825_);
v___x_2827_ = v___x_2821_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
uint8_t v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2828_ = 0;
v___x_2829_ = lean_box(0);
v___x_2830_ = l_Lean_Meta_mkFreshExprMVar(v___x_2827_, v___x_2828_, v___x_2829_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc_n(v_a_2831_, 2);
lean_dec_ref_known(v___x_2830_, 1);
v___x_2832_ = lean_array_push(v___x_2800_, v_a_2831_);
v___x_2833_ = l_Lean_Meta_mkAppM(v___x_2797_, v___x_2832_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___f_2835_; lean_object* v___x_2836_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
lean_inc_n(v_a_2834_, 2);
lean_dec_ref_known(v___x_2833_, 1);
lean_inc(v_a_2778_);
lean_inc(v_a_2786_);
v___f_2835_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_2835_, 0, v_fuel_2770_);
lean_closure_set(v___f_2835_, 1, v_a_2834_);
lean_closure_set(v___f_2835_, 2, v_a_2831_);
lean_closure_set(v___f_2835_, 3, v_a_2786_);
lean_closure_set(v___f_2835_, 4, v___x_2795_);
lean_closure_set(v___f_2835_, 5, v___x_2796_);
lean_closure_set(v___f_2835_, 6, v___x_2799_);
lean_closure_set(v___f_2835_, 7, v_a_2778_);
lean_closure_set(v___f_2835_, 8, v_a_2788_);
v___x_2836_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2811_, v_a_2834_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v___x_2838_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
v___x_2838_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2837_, v___f_2835_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_2837_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2857_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2841_ = v___x_2838_;
v_isShared_2842_ = v_isSharedCheck_2857_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2838_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2857_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
if (lean_obj_tag(v_a_2839_) == 0)
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
lean_dec_ref_known(v_a_2839_, 1);
lean_del_object(v___x_2841_);
v___x_2843_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_2844_ = l_Lean_indentExpr(v_a_2786_);
v___x_2845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_2847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2845_);
lean_ctor_set(v___x_2847_, 1, v___x_2846_);
v___x_2848_ = l_Lean_indentExpr(v_a_2778_);
v___x_2849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2847_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___x_2850_ = l_Lean_MessageData_note(v_a_2819_);
v___x_2851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2849_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2851_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_2852_;
}
else
{
lean_object* v_a_2853_; lean_object* v___x_2855_; 
lean_dec(v_a_2819_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
v_a_2853_ = lean_ctor_get(v_a_2839_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v_a_2839_, 1);
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 0, v_a_2853_);
v___x_2855_ = v___x_2841_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2853_);
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
else
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2865_; 
lean_dec(v_a_2819_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
v_a_2858_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2860_ = v___x_2838_;
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v___x_2838_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
if (v_isShared_2861_ == 0)
{
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_a_2858_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
lean_dec_ref(v___f_2835_);
lean_dec(v_a_2819_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
v_a_2866_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2836_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2836_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
else
{
lean_dec(v_a_2831_);
lean_dec(v_a_2819_);
lean_dec(v___x_2811_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_2833_;
}
}
else
{
lean_dec(v_a_2819_);
lean_dec(v___x_2811_);
lean_dec_ref(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_2830_;
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_del_object(v___x_2821_);
lean_dec(v_a_2819_);
lean_dec(v___x_2811_);
lean_dec_ref(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_2875_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2823_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2823_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; 
lean_dec(v___x_2811_);
lean_dec_ref(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_2884_ = lean_ctor_get(v_a_2815_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v_a_2815_, 1);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v_a_2884_);
v___x_2886_ = v___x_2817_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2884_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
}
else
{
lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v___x_2811_);
lean_dec_ref(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_2889_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2891_ = v___x_2814_;
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2814_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2894_; 
if (v_isShared_2892_ == 0)
{
v___x_2894_ = v___x_2891_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_a_2889_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec(v___x_2811_);
lean_dec_ref(v___f_2804_);
lean_dec_ref(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_2897_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2812_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2812_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
else
{
lean_dec_ref(v___x_2800_);
lean_dec_ref(v___x_2799_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_2802_;
}
}
else
{
lean_object* v___x_2905_; lean_object* v___x_2907_; 
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___x_2905_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
if (v_isShared_2791_ == 0)
{
lean_ctor_set_tag(v___x_2790_, 1);
lean_ctor_set(v___x_2790_, 0, v___x_2905_);
v___x_2907_ = v___x_2790_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
else
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
lean_del_object(v___x_2790_);
lean_dec(v_a_2788_);
lean_dec(v_a_2786_);
lean_dec(v_fuel_2770_);
v___x_2909_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_2910_ = lean_unsigned_to_nat(1u);
v___x_2911_ = lean_mk_empty_array_with_capacity(v___x_2910_);
v___x_2912_ = lean_array_push(v___x_2911_, v_a_2778_);
v___x_2913_ = l_Lean_Meta_mkAppM(v___x_2909_, v___x_2912_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_2913_;
}
}
}
else
{
lean_object* v_a_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2922_; 
lean_dec(v_a_2786_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_2915_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2917_ = v___x_2787_;
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_a_2915_);
lean_dec(v___x_2787_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2920_; 
if (v_isShared_2918_ == 0)
{
v___x_2920_ = v___x_2917_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v_a_2915_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
}
else
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_3295_; 
v_a_2923_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_2925_ = v___x_2782_;
v_isShared_2926_ = v_isSharedCheck_3295_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v___x_2782_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_3295_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v_inheritedTraceOptions_2927_; lean_object* v___f_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; uint8_t v___x_2932_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v_a_2936_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v_a_2951_; lean_object* v___y_2956_; lean_object* v___y_2957_; lean_object* v_a_2958_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v_a_2971_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v_a_2983_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v_a_2988_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; 
v_inheritedTraceOptions_2927_ = lean_ctor_get(v_toCold_2783_, 11);
lean_inc(v_a_2923_);
lean_inc(v_a_2778_);
v___f_2928_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__2___boxed), 8, 2);
lean_closure_set(v___f_2928_, 0, v_a_2778_);
lean_closure_set(v___f_2928_, 1, v_a_2923_);
v___x_2929_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2930_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__7));
v___x_2931_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__10, &l_Lean_Meta_Transport_mkEquiv___closed__10_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__10);
v___x_2932_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2927_, v_options_2784_, v___x_2931_);
if (v___x_2932_ == 0)
{
lean_object* v___x_3157_; uint8_t v___x_3158_; 
v___x_3157_ = l_Lean_trace_profiler;
v___x_3158_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_2784_, v___x_3157_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3159_; 
lean_dec_ref(v___f_2928_);
lean_del_object(v___x_2925_);
lean_del_object(v___x_2780_);
lean_inc(v_a_2923_);
lean_inc(v_a_2778_);
v___x_3159_ = l_Lean_Meta_isExprDefEq(v_a_2778_, v_a_2923_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3286_; 
v_a_3160_ = lean_ctor_get(v___x_3159_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3162_ = v___x_3159_;
v_isShared_3163_ = v_isSharedCheck_3286_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3159_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3286_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
uint8_t v___x_3164_; 
v___x_3164_ = lean_unbox(v_a_3160_);
if (v___x_3164_ == 0)
{
lean_object* v___x_3165_; uint8_t v___x_3166_; 
v___x_3165_ = lean_unsigned_to_nat(0u);
v___x_3166_ = lean_nat_dec_eq(v_fuel_2770_, v___x_3165_);
if (v___x_3166_ == 0)
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
lean_del_object(v___x_3162_);
v___x_3167_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3168_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3169_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3170_ = lean_unsigned_to_nat(2u);
v___x_3171_ = lean_mk_empty_array_with_capacity(v___x_3170_);
lean_inc(v_a_2778_);
lean_inc_ref(v___x_3171_);
v___x_3172_ = lean_array_push(v___x_3171_, v_a_2778_);
lean_inc(v_a_2923_);
lean_inc_ref(v___x_3172_);
v___x_3173_ = lean_array_push(v___x_3172_, v_a_2923_);
v___x_3174_ = l_Lean_Meta_mkAppM(v___x_3169_, v___x_3173_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___f_3176_; lean_object* v___x_3177_; lean_object* v_env_3178_; lean_object* v___x_3179_; lean_object* v_ext_3180_; lean_object* v_toEnvExtension_3181_; lean_object* v_asyncMode_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
lean_inc_n(v_a_3175_, 2);
lean_dec_ref_known(v___x_3174_, 1);
lean_inc(v_fuel_2770_);
v___f_3176_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3176_, 0, v_fuel_2770_);
lean_closure_set(v___f_3176_, 1, v_a_3175_);
v___x_3177_ = lean_st_ref_get(v_a_2774_);
v_env_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc_ref(v_env_3178_);
lean_dec(v___x_3177_);
v___x_3179_ = l_Lean_Meta_Transport_transportExt;
v_ext_3180_ = lean_ctor_get(v___x_3179_, 1);
v_toEnvExtension_3181_ = lean_ctor_get(v_ext_3180_, 0);
v_asyncMode_3182_ = lean_ctor_get(v_toEnvExtension_3181_, 2);
v___x_3183_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2776_, v___x_3179_, v_env_3178_, v_asyncMode_3182_);
lean_inc(v___x_3183_);
v___x_3184_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3183_, v_a_3175_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3186_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v___x_3186_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3185_, v___f_3176_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_3185_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3260_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3189_ = v___x_3186_;
v_isShared_3190_ = v_isSharedCheck_3260_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_dec(v___x_3186_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3260_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
if (lean_obj_tag(v_a_3187_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3255_; 
lean_del_object(v___x_3189_);
v_a_3191_ = lean_ctor_get(v_a_3187_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v_a_3187_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3193_ = v_a_3187_;
v_isShared_3194_ = v_isSharedCheck_3255_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v_a_3187_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3255_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; 
v___x_3195_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3197_; lean_object* v___x_3199_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v___x_3195_, 1);
v___x_3197_ = l_Lean_mkSort(v_a_3196_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set_tag(v___x_3193_, 1);
lean_ctor_set(v___x_3193_, 0, v___x_3197_);
v___x_3199_ = v___x_3193_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
uint8_t v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3200_ = 0;
v___x_3201_ = lean_box(0);
v___x_3202_ = l_Lean_Meta_mkFreshExprMVar(v___x_3199_, v___x_3200_, v___x_3201_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
lean_inc_n(v_a_3203_, 2);
lean_dec_ref_known(v___x_3202_, 1);
v___x_3204_ = lean_array_push(v___x_3172_, v_a_3203_);
v___x_3205_ = l_Lean_Meta_mkAppM(v___x_3169_, v___x_3204_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v___f_3207_; lean_object* v___x_3208_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc_n(v_a_3206_, 2);
lean_dec_ref_known(v___x_3205_, 1);
lean_inc(v_a_2778_);
lean_inc(v_a_2923_);
v___f_3207_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_3207_, 0, v_fuel_2770_);
lean_closure_set(v___f_3207_, 1, v_a_3206_);
lean_closure_set(v___f_3207_, 2, v_a_3203_);
lean_closure_set(v___f_3207_, 3, v_a_2923_);
lean_closure_set(v___f_3207_, 4, v___x_3167_);
lean_closure_set(v___f_3207_, 5, v___x_3168_);
lean_closure_set(v___f_3207_, 6, v___x_3171_);
lean_closure_set(v___f_3207_, 7, v_a_2778_);
lean_closure_set(v___f_3207_, 8, v_a_3160_);
v___x_3208_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3183_, v_a_3206_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v_a_3209_; lean_object* v___x_3210_; 
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_a_3209_);
lean_dec_ref_known(v___x_3208_, 1);
v___x_3210_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3209_, v___f_3207_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_3209_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3229_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3213_ = v___x_3210_;
v_isShared_3214_ = v_isSharedCheck_3229_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3210_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3229_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
if (lean_obj_tag(v_a_3211_) == 0)
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
lean_dec_ref_known(v_a_3211_, 1);
lean_del_object(v___x_3213_);
v___x_3215_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3216_ = l_Lean_indentExpr(v_a_2923_);
v___x_3217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3215_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3217_);
lean_ctor_set(v___x_3219_, 1, v___x_3218_);
v___x_3220_ = l_Lean_indentExpr(v_a_2778_);
v___x_3221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3219_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___x_3222_ = l_Lean_MessageData_note(v_a_3191_);
v___x_3223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3221_);
lean_ctor_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3223_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_3224_;
}
else
{
lean_object* v_a_3225_; lean_object* v___x_3227_; 
lean_dec(v_a_3191_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3225_ = lean_ctor_get(v_a_3211_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v_a_3211_, 1);
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v_a_3225_);
v___x_3227_ = v___x_3213_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3237_; 
lean_dec(v_a_3191_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3230_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3232_ = v___x_3210_;
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3210_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3235_; 
if (v_isShared_3233_ == 0)
{
v___x_3235_ = v___x_3232_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_a_3230_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec_ref(v___f_3207_);
lean_dec(v_a_3191_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3238_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3208_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3208_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
}
}
}
}
else
{
lean_dec(v_a_3203_);
lean_dec(v_a_3191_);
lean_dec(v___x_3183_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_3205_;
}
}
else
{
lean_dec(v_a_3191_);
lean_dec(v___x_3183_);
lean_dec_ref(v___x_3172_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_3202_;
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_del_object(v___x_3193_);
lean_dec(v_a_3191_);
lean_dec(v___x_3183_);
lean_dec_ref(v___x_3172_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3247_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3195_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3195_);
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
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; 
lean_dec(v___x_3183_);
lean_dec_ref(v___x_3172_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3256_ = lean_ctor_get(v_a_3187_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v_a_3187_, 1);
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 0, v_a_3256_);
v___x_3258_ = v___x_3189_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3256_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v___x_3183_);
lean_dec_ref(v___x_3172_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3261_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3186_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3186_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v___x_3183_);
lean_dec_ref(v___f_3176_);
lean_dec_ref(v___x_3172_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3269_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3184_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3184_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
else
{
lean_dec_ref(v___x_3172_);
lean_dec_ref(v___x_3171_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_3174_;
}
}
else
{
lean_object* v___x_3277_; lean_object* v___x_3279_; 
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___x_3277_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
if (v_isShared_3163_ == 0)
{
lean_ctor_set_tag(v___x_3162_, 1);
lean_ctor_set(v___x_3162_, 0, v___x_3277_);
v___x_3279_ = v___x_3162_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3277_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
else
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_del_object(v___x_3162_);
lean_dec(v_a_3160_);
lean_dec(v_a_2923_);
lean_dec(v_fuel_2770_);
v___x_3281_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3282_ = lean_unsigned_to_nat(1u);
v___x_3283_ = lean_mk_empty_array_with_capacity(v___x_3282_);
v___x_3284_ = lean_array_push(v___x_3283_, v_a_2778_);
v___x_3285_ = l_Lean_Meta_mkAppM(v___x_3281_, v___x_3284_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_3285_;
}
}
}
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3287_ = lean_ctor_get(v___x_3159_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3159_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3159_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
else
{
goto v___jp_2996_;
}
}
else
{
goto v___jp_2996_;
}
v___jp_2933_:
{
lean_object* v___x_2937_; double v___x_2938_; double v___x_2939_; double v___x_2940_; double v___x_2941_; double v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2937_ = lean_io_mono_nanos_now();
v___x_2938_ = lean_float_of_nat(v___y_2934_);
v___x_2939_ = lean_float_once(&l_Lean_Meta_Transport_mkEquiv___closed__11, &l_Lean_Meta_Transport_mkEquiv___closed__11_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__11);
v___x_2940_ = lean_float_div(v___x_2938_, v___x_2939_);
v___x_2941_ = lean_float_of_nat(v___x_2937_);
v___x_2942_ = lean_float_div(v___x_2941_, v___x_2939_);
v___x_2943_ = lean_box_float(v___x_2940_);
v___x_2944_ = lean_box_float(v___x_2942_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2943_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
v___x_2946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2946_, 0, v_a_2936_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
v___x_2947_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_2929_, v_hasTrace_2785_, v___x_2930_, v_options_2784_, v___x_2932_, v___y_2935_, v___f_2928_, v___x_2946_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_2947_;
}
v___jp_2948_:
{
lean_object* v___x_2953_; 
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 0, v_a_2951_);
v___x_2953_ = v___x_2925_;
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
v___y_2934_ = v___y_2949_;
v___y_2935_ = v___y_2950_;
v_a_2936_ = v___x_2953_;
goto v___jp_2933_;
}
}
v___jp_2955_:
{
lean_object* v___x_2960_; 
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 1);
lean_ctor_set(v___x_2780_, 0, v_a_2958_);
v___x_2960_ = v___x_2780_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_a_2958_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
v___y_2934_ = v___y_2956_;
v___y_2935_ = v___y_2957_;
v_a_2936_ = v___x_2960_;
goto v___jp_2933_;
}
}
v___jp_2962_:
{
if (lean_obj_tag(v___y_2965_) == 0)
{
lean_object* v_a_2966_; 
lean_del_object(v___x_2925_);
v_a_2966_ = lean_ctor_get(v___y_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___y_2965_, 1);
v___y_2956_ = v___y_2963_;
v___y_2957_ = v___y_2964_;
v_a_2958_ = v_a_2966_;
goto v___jp_2955_;
}
else
{
lean_object* v_a_2967_; 
lean_del_object(v___x_2780_);
v_a_2967_ = lean_ctor_get(v___y_2965_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___y_2965_, 1);
v___y_2949_ = v___y_2963_;
v___y_2950_ = v___y_2964_;
v_a_2951_ = v_a_2967_;
goto v___jp_2948_;
}
}
v___jp_2968_:
{
lean_object* v___x_2972_; double v___x_2973_; double v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2972_ = lean_io_get_num_heartbeats();
v___x_2973_ = lean_float_of_nat(v___y_2969_);
v___x_2974_ = lean_float_of_nat(v___x_2972_);
v___x_2975_ = lean_box_float(v___x_2973_);
v___x_2976_ = lean_box_float(v___x_2974_);
v___x_2977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2975_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___x_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2978_, 0, v_a_2971_);
lean_ctor_set(v___x_2978_, 1, v___x_2977_);
v___x_2979_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_2929_, v_hasTrace_2785_, v___x_2930_, v_options_2784_, v___x_2932_, v___y_2970_, v___f_2928_, v___x_2978_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
return v___x_2979_;
}
v___jp_2980_:
{
lean_object* v___x_2984_; 
v___x_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2984_, 0, v_a_2983_);
v___y_2969_ = v___y_2981_;
v___y_2970_ = v___y_2982_;
v_a_2971_ = v___x_2984_;
goto v___jp_2968_;
}
v___jp_2985_:
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2989_, 0, v_a_2988_);
v___y_2969_ = v___y_2986_;
v___y_2970_ = v___y_2987_;
v_a_2971_ = v___x_2989_;
goto v___jp_2968_;
}
v___jp_2990_:
{
if (lean_obj_tag(v___y_2993_) == 0)
{
lean_object* v_a_2994_; 
v_a_2994_ = lean_ctor_get(v___y_2993_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v___y_2993_, 1);
v___y_2986_ = v___y_2991_;
v___y_2987_ = v___y_2992_;
v_a_2988_ = v_a_2994_;
goto v___jp_2985_;
}
else
{
lean_object* v_a_2995_; 
v_a_2995_ = lean_ctor_get(v___y_2993_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___y_2993_, 1);
v___y_2981_ = v___y_2991_;
v___y_2982_ = v___y_2992_;
v_a_2983_ = v_a_2995_;
goto v___jp_2980_;
}
}
v___jp_2996_:
{
lean_object* v___x_2997_; 
v___x_2997_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v_a_2774_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v_a_2998_; lean_object* v___x_2999_; uint8_t v___x_3000_; 
v_a_2998_ = lean_ctor_get(v___x_2997_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v___x_2997_, 1);
v___x_2999_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3000_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_2784_, v___x_2999_);
if (v___x_3000_ == 0)
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = lean_io_mono_nanos_now();
lean_inc(v_a_2923_);
lean_inc(v_a_2778_);
v___x_3002_ = l_Lean_Meta_isExprDefEq(v_a_2778_, v_a_2923_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; uint8_t v___x_3004_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
v___x_3004_ = lean_unbox(v_a_3003_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3005_ = lean_unsigned_to_nat(0u);
v___x_3006_ = lean_nat_dec_eq(v_fuel_2770_, v___x_3005_);
if (v___x_3006_ == 0)
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3007_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3008_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3009_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3010_ = lean_unsigned_to_nat(2u);
v___x_3011_ = lean_mk_empty_array_with_capacity(v___x_3010_);
lean_inc(v_a_2778_);
lean_inc_ref(v___x_3011_);
v___x_3012_ = lean_array_push(v___x_3011_, v_a_2778_);
lean_inc(v_a_2923_);
lean_inc_ref(v___x_3012_);
v___x_3013_ = lean_array_push(v___x_3012_, v_a_2923_);
v___x_3014_ = l_Lean_Meta_mkAppM(v___x_3009_, v___x_3013_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v_env_3018_; lean_object* v___x_3019_; lean_object* v_ext_3020_; lean_object* v_toEnvExtension_3021_; lean_object* v_asyncMode_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc_n(v_a_3015_, 2);
lean_dec_ref_known(v___x_3014_, 1);
lean_inc(v_fuel_2770_);
v___f_3016_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3016_, 0, v_fuel_2770_);
lean_closure_set(v___f_3016_, 1, v_a_3015_);
v___x_3017_ = lean_st_ref_get(v_a_2774_);
v_env_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc_ref(v_env_3018_);
lean_dec(v___x_3017_);
v___x_3019_ = l_Lean_Meta_Transport_transportExt;
v_ext_3020_ = lean_ctor_get(v___x_3019_, 1);
v_toEnvExtension_3021_ = lean_ctor_get(v_ext_3020_, 0);
v_asyncMode_3022_ = lean_ctor_get(v_toEnvExtension_3021_, 2);
v___x_3023_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2776_, v___x_3019_, v_env_3018_, v_asyncMode_3022_);
lean_inc(v___x_3023_);
v___x_3024_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3023_, v_a_3015_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
v___x_3026_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3025_, v___f_3016_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_3025_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3026_, 1);
if (lean_obj_tag(v_a_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3029_; 
v_a_3028_ = lean_ctor_get(v_a_3027_, 0);
lean_inc(v_a_3028_);
lean_dec_ref_known(v_a_3027_, 1);
v___x_3029_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3063_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3032_ = v___x_3029_;
v_isShared_3033_ = v_isSharedCheck_3063_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3029_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3063_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3034_; lean_object* v___x_3036_; 
v___x_3034_ = l_Lean_mkSort(v_a_3030_);
if (v_isShared_3033_ == 0)
{
lean_ctor_set_tag(v___x_3032_, 1);
lean_ctor_set(v___x_3032_, 0, v___x_3034_);
v___x_3036_ = v___x_3032_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3034_);
v___x_3036_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
uint8_t v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3037_ = 0;
v___x_3038_ = lean_box(0);
v___x_3039_ = l_Lean_Meta_mkFreshExprMVar(v___x_3036_, v___x_3037_, v___x_3038_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc_n(v_a_3040_, 2);
lean_dec_ref_known(v___x_3039_, 1);
v___x_3041_ = lean_array_push(v___x_3012_, v_a_3040_);
v___x_3042_ = l_Lean_Meta_mkAppM(v___x_3009_, v___x_3041_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___f_3044_; lean_object* v___x_3045_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc_n(v_a_3043_, 2);
lean_dec_ref_known(v___x_3042_, 1);
lean_inc(v_a_2778_);
lean_inc(v_a_2923_);
v___f_3044_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_3044_, 0, v_fuel_2770_);
lean_closure_set(v___f_3044_, 1, v_a_3043_);
lean_closure_set(v___f_3044_, 2, v_a_3040_);
lean_closure_set(v___f_3044_, 3, v_a_2923_);
lean_closure_set(v___f_3044_, 4, v___x_3007_);
lean_closure_set(v___f_3044_, 5, v___x_3008_);
lean_closure_set(v___f_3044_, 6, v___x_3011_);
lean_closure_set(v___f_3044_, 7, v_a_2778_);
lean_closure_set(v___f_3044_, 8, v_a_3003_);
v___x_3045_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3023_, v_a_3043_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_object* v_a_3046_; lean_object* v___x_3047_; 
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3045_, 1);
v___x_3047_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3046_, v___f_3044_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_3046_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref_known(v___x_3047_, 1);
if (lean_obj_tag(v_a_3048_) == 0)
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
lean_dec_ref_known(v_a_3048_, 1);
v___x_3049_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3050_ = l_Lean_indentExpr(v_a_2923_);
v___x_3051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3049_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
v___x_3052_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3051_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
v___x_3054_ = l_Lean_indentExpr(v_a_2778_);
v___x_3055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3053_);
lean_ctor_set(v___x_3055_, 1, v___x_3054_);
v___x_3056_ = l_Lean_MessageData_note(v_a_3028_);
v___x_3057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3055_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
v___x_3058_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3057_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
v___y_2963_ = v___x_3001_;
v___y_2964_ = v_a_2998_;
v___y_2965_ = v___x_3058_;
goto v___jp_2962_;
}
else
{
lean_object* v_a_3059_; 
lean_dec(v_a_3028_);
lean_del_object(v___x_2925_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3059_ = lean_ctor_get(v_a_3048_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v_a_3048_, 1);
v___y_2956_ = v___x_3001_;
v___y_2957_ = v_a_2998_;
v_a_2958_ = v_a_3059_;
goto v___jp_2955_;
}
}
else
{
lean_object* v_a_3060_; 
lean_dec(v_a_3028_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
v_a_3060_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___x_3047_, 1);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v_a_3060_;
goto v___jp_2948_;
}
}
else
{
lean_object* v_a_3061_; 
lean_dec_ref(v___f_3044_);
lean_dec(v_a_3028_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
v_a_3061_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_a_3061_);
lean_dec_ref_known(v___x_3045_, 1);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v_a_3061_;
goto v___jp_2948_;
}
}
else
{
lean_dec(v_a_3040_);
lean_dec(v_a_3028_);
lean_dec(v___x_3023_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___y_2963_ = v___x_3001_;
v___y_2964_ = v_a_2998_;
v___y_2965_ = v___x_3042_;
goto v___jp_2962_;
}
}
else
{
lean_dec(v_a_3028_);
lean_dec(v___x_3023_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___y_2963_ = v___x_3001_;
v___y_2964_ = v_a_2998_;
v___y_2965_ = v___x_3039_;
goto v___jp_2962_;
}
}
}
}
else
{
lean_object* v_a_3064_; 
lean_dec(v_a_3028_);
lean_dec(v___x_3023_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3064_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3029_, 1);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v_a_3064_;
goto v___jp_2948_;
}
}
else
{
lean_object* v_a_3065_; 
lean_dec(v___x_3023_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_del_object(v___x_2925_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3065_ = lean_ctor_get(v_a_3027_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v_a_3027_, 1);
v___y_2956_ = v___x_3001_;
v___y_2957_ = v_a_2998_;
v_a_2958_ = v_a_3065_;
goto v___jp_2955_;
}
}
else
{
lean_object* v_a_3066_; 
lean_dec(v___x_3023_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3066_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3066_);
lean_dec_ref_known(v___x_3026_, 1);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v_a_3066_;
goto v___jp_2948_;
}
}
else
{
lean_object* v_a_3067_; 
lean_dec(v___x_3023_);
lean_dec_ref(v___f_3016_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3067_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3024_, 1);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v_a_3067_;
goto v___jp_2948_;
}
}
else
{
lean_dec_ref(v___x_3012_);
lean_dec_ref(v___x_3011_);
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___y_2963_ = v___x_3001_;
v___y_2964_ = v_a_2998_;
v___y_2965_ = v___x_3014_;
goto v___jp_2962_;
}
}
else
{
lean_object* v___x_3068_; 
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___x_3068_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v___x_3068_;
goto v___jp_2948_;
}
}
else
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
lean_dec(v_a_3003_);
lean_dec(v_a_2923_);
lean_dec(v_fuel_2770_);
v___x_3069_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3070_ = lean_unsigned_to_nat(1u);
v___x_3071_ = lean_mk_empty_array_with_capacity(v___x_3070_);
v___x_3072_ = lean_array_push(v___x_3071_, v_a_2778_);
v___x_3073_ = l_Lean_Meta_mkAppM(v___x_3069_, v___x_3072_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
v___y_2963_ = v___x_3001_;
v___y_2964_ = v_a_2998_;
v___y_2965_ = v___x_3073_;
goto v___jp_2962_;
}
}
else
{
lean_object* v_a_3074_; 
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3074_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3002_, 1);
v___y_2949_ = v___x_3001_;
v___y_2950_ = v_a_2998_;
v_a_2951_ = v_a_3074_;
goto v___jp_2948_;
}
}
else
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
lean_del_object(v___x_2925_);
lean_del_object(v___x_2780_);
v___x_3075_ = lean_io_get_num_heartbeats();
lean_inc(v_a_2923_);
lean_inc(v_a_2778_);
v___x_3076_ = l_Lean_Meta_isExprDefEq(v_a_2778_, v_a_2923_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_a_3077_; uint8_t v___x_3078_; 
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_a_3077_);
lean_dec_ref_known(v___x_3076_, 1);
v___x_3078_ = lean_unbox(v_a_3077_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; uint8_t v___x_3080_; 
v___x_3079_ = lean_unsigned_to_nat(0u);
v___x_3080_ = lean_nat_dec_eq(v_fuel_2770_, v___x_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3081_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3082_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3083_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3084_ = lean_unsigned_to_nat(2u);
v___x_3085_ = lean_mk_empty_array_with_capacity(v___x_3084_);
lean_inc(v_a_2778_);
lean_inc_ref(v___x_3085_);
v___x_3086_ = lean_array_push(v___x_3085_, v_a_2778_);
lean_inc(v_a_2923_);
lean_inc_ref(v___x_3086_);
v___x_3087_ = lean_array_push(v___x_3086_, v_a_2923_);
v___x_3088_ = l_Lean_Meta_mkAppM(v___x_3083_, v___x_3087_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___f_3090_; lean_object* v___x_3091_; lean_object* v_env_3092_; lean_object* v___x_3093_; lean_object* v_ext_3094_; lean_object* v_toEnvExtension_3095_; lean_object* v_asyncMode_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc_n(v_a_3089_, 2);
lean_dec_ref_known(v___x_3088_, 1);
lean_inc(v_fuel_2770_);
v___f_3090_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3090_, 0, v_fuel_2770_);
lean_closure_set(v___f_3090_, 1, v_a_3089_);
v___x_3091_ = lean_st_ref_get(v_a_2774_);
v_env_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc_ref(v_env_3092_);
lean_dec(v___x_3091_);
v___x_3093_ = l_Lean_Meta_Transport_transportExt;
v_ext_3094_ = lean_ctor_get(v___x_3093_, 1);
v_toEnvExtension_3095_ = lean_ctor_get(v_ext_3094_, 0);
v_asyncMode_3096_ = lean_ctor_get(v_toEnvExtension_3095_, 2);
v___x_3097_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2776_, v___x_3093_, v_env_3092_, v_asyncMode_3096_);
lean_inc(v___x_3097_);
v___x_3098_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3097_, v_a_3089_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3100_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v___x_3100_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3099_, v___f_3090_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_3099_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3101_);
lean_dec_ref_known(v___x_3100_, 1);
if (lean_obj_tag(v_a_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; 
v_a_3102_ = lean_ctor_get(v_a_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v_a_3101_, 1);
v___x_3103_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3137_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3106_ = v___x_3103_;
v_isShared_3107_ = v_isSharedCheck_3137_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_3103_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3137_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3108_; lean_object* v___x_3110_; 
v___x_3108_ = l_Lean_mkSort(v_a_3104_);
if (v_isShared_3107_ == 0)
{
lean_ctor_set_tag(v___x_3106_, 1);
lean_ctor_set(v___x_3106_, 0, v___x_3108_);
v___x_3110_ = v___x_3106_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3108_);
v___x_3110_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
uint8_t v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3111_ = 0;
v___x_3112_ = lean_box(0);
v___x_3113_ = l_Lean_Meta_mkFreshExprMVar(v___x_3110_, v___x_3111_, v___x_3112_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc_n(v_a_3114_, 2);
lean_dec_ref_known(v___x_3113_, 1);
v___x_3115_ = lean_array_push(v___x_3086_, v_a_3114_);
v___x_3116_ = l_Lean_Meta_mkAppM(v___x_3083_, v___x_3115_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___f_3118_; lean_object* v___x_3119_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc_n(v_a_3117_, 2);
lean_dec_ref_known(v___x_3116_, 1);
lean_inc(v_a_2778_);
lean_inc(v_a_2923_);
v___f_3118_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 15, 9);
lean_closure_set(v___f_3118_, 0, v_fuel_2770_);
lean_closure_set(v___f_3118_, 1, v_a_3117_);
lean_closure_set(v___f_3118_, 2, v_a_3114_);
lean_closure_set(v___f_3118_, 3, v_a_2923_);
lean_closure_set(v___f_3118_, 4, v___x_3081_);
lean_closure_set(v___f_3118_, 5, v___x_3082_);
lean_closure_set(v___f_3118_, 6, v___x_3085_);
lean_closure_set(v___f_3118_, 7, v_a_2778_);
lean_closure_set(v___f_3118_, 8, v_a_3077_);
v___x_3119_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3097_, v_a_3117_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3121_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3119_, 1);
v___x_3121_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3120_, v___f_3118_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_3120_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v_a_3122_; 
v_a_3122_ = lean_ctor_get(v___x_3121_, 0);
lean_inc(v_a_3122_);
lean_dec_ref_known(v___x_3121_, 1);
if (lean_obj_tag(v_a_3122_) == 0)
{
lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
lean_dec_ref_known(v_a_3122_, 1);
v___x_3123_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3124_ = l_Lean_indentExpr(v_a_2923_);
v___x_3125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3125_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
v___x_3128_ = l_Lean_indentExpr(v_a_2778_);
v___x_3129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3127_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = l_Lean_MessageData_note(v_a_3102_);
v___x_3131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3129_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3131_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
v___y_2991_ = v___x_3075_;
v___y_2992_ = v_a_2998_;
v___y_2993_ = v___x_3132_;
goto v___jp_2990_;
}
else
{
lean_object* v_a_3133_; 
lean_dec(v_a_3102_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3133_ = lean_ctor_get(v_a_3122_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v_a_3122_, 1);
v___y_2986_ = v___x_3075_;
v___y_2987_ = v_a_2998_;
v_a_2988_ = v_a_3133_;
goto v___jp_2985_;
}
}
else
{
lean_object* v_a_3134_; 
lean_dec(v_a_3102_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3134_ = lean_ctor_get(v___x_3121_, 0);
lean_inc(v_a_3134_);
lean_dec_ref_known(v___x_3121_, 1);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v_a_3134_;
goto v___jp_2980_;
}
}
else
{
lean_object* v_a_3135_; 
lean_dec_ref(v___f_3118_);
lean_dec(v_a_3102_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
v_a_3135_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3119_, 1);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v_a_3135_;
goto v___jp_2980_;
}
}
else
{
lean_dec(v_a_3114_);
lean_dec(v_a_3102_);
lean_dec(v___x_3097_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___y_2991_ = v___x_3075_;
v___y_2992_ = v_a_2998_;
v___y_2993_ = v___x_3116_;
goto v___jp_2990_;
}
}
else
{
lean_dec(v_a_3102_);
lean_dec(v___x_3097_);
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___y_2991_ = v___x_3075_;
v___y_2992_ = v_a_2998_;
v___y_2993_ = v___x_3113_;
goto v___jp_2990_;
}
}
}
}
else
{
lean_object* v_a_3138_; 
lean_dec(v_a_3102_);
lean_dec(v___x_3097_);
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3138_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3103_, 1);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v_a_3138_;
goto v___jp_2980_;
}
}
else
{
lean_object* v_a_3139_; 
lean_dec(v___x_3097_);
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3139_ = lean_ctor_get(v_a_3101_, 0);
lean_inc(v_a_3139_);
lean_dec_ref_known(v_a_3101_, 1);
v___y_2986_ = v___x_3075_;
v___y_2987_ = v_a_2998_;
v_a_2988_ = v_a_3139_;
goto v___jp_2985_;
}
}
else
{
lean_object* v_a_3140_; 
lean_dec(v___x_3097_);
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3140_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3100_, 1);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v_a_3140_;
goto v___jp_2980_;
}
}
else
{
lean_object* v_a_3141_; 
lean_dec(v___x_3097_);
lean_dec_ref(v___f_3090_);
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3141_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3098_, 1);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v_a_3141_;
goto v___jp_2980_;
}
}
else
{
lean_dec_ref(v___x_3086_);
lean_dec_ref(v___x_3085_);
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___y_2991_ = v___x_3075_;
v___y_2992_ = v_a_2998_;
v___y_2993_ = v___x_3088_;
goto v___jp_2990_;
}
}
else
{
lean_object* v___x_3142_; 
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v___x_3142_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__4, &l_Lean_Meta_Transport_mkEquiv___closed__4_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__4);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v___x_3142_;
goto v___jp_2980_;
}
}
else
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
lean_dec(v_a_3077_);
lean_dec(v_a_2923_);
lean_dec(v_fuel_2770_);
v___x_3143_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3144_ = lean_unsigned_to_nat(1u);
v___x_3145_ = lean_mk_empty_array_with_capacity(v___x_3144_);
v___x_3146_ = lean_array_push(v___x_3145_, v_a_2778_);
v___x_3147_ = l_Lean_Meta_mkAppM(v___x_3143_, v___x_3146_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
v___y_2991_ = v___x_3075_;
v___y_2992_ = v_a_2998_;
v___y_2993_ = v___x_3147_;
goto v___jp_2990_;
}
}
else
{
lean_object* v_a_3148_; 
lean_dec(v_a_2923_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3148_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3076_, 1);
v___y_2981_ = v___x_3075_;
v___y_2982_ = v_a_2998_;
v_a_2983_ = v_a_3148_;
goto v___jp_2980_;
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec_ref(v___f_2928_);
lean_del_object(v___x_2925_);
lean_dec(v_a_2923_);
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
v_a_3149_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_2997_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_2997_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
lean_dec(v_fuel_2770_);
return v___x_2782_;
}
}
}
else
{
lean_dec(v_fuel_2770_);
lean_dec_ref(v_rhs_2769_);
return v___x_2777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(lean_object* v_fuel_3297_, uint8_t v___x_3298_, uint8_t v___x_3299_, lean_object* v_xs_3300_, lean_object* v_body_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3307_ = l_Lean_Expr_appFn_x21(v_body_3301_);
v___x_3308_ = l_Lean_Expr_appArg_x21(v___x_3307_);
lean_dec_ref(v___x_3307_);
v___x_3309_ = l_Lean_Expr_appArg_x21(v_body_3301_);
v___x_3310_ = l_Lean_Meta_Transport_mkEquiv(v___x_3308_, v___x_3309_, v_fuel_3297_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; uint8_t v___x_3312_; lean_object* v___x_3313_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v___x_3312_ = 1;
v___x_3313_ = l_Lean_Meta_mkLambdaFVars(v_xs_3300_, v_a_3311_, v___x_3298_, v___x_3299_, v___x_3298_, v___x_3299_, v___x_3312_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
return v___x_3313_;
}
else
{
return v___x_3310_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed(lean_object* v_fuel_3314_, lean_object* v___x_3315_, lean_object* v___x_3316_, lean_object* v_xs_3317_, lean_object* v_body_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_){
_start:
{
uint8_t v___x_32130__boxed_3324_; uint8_t v___x_32131__boxed_3325_; lean_object* v_res_3326_; 
v___x_32130__boxed_3324_ = lean_unbox(v___x_3315_);
v___x_32131__boxed_3325_ = lean_unbox(v___x_3316_);
v_res_3326_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(v_fuel_3314_, v___x_32130__boxed_3324_, v___x_32131__boxed_3325_, v_xs_3317_, v_body_3318_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_);
lean_dec(v___y_3322_);
lean_dec_ref(v___y_3321_);
lean_dec(v___y_3320_);
lean_dec_ref(v___y_3319_);
lean_dec_ref(v_body_3318_);
lean_dec_ref(v_xs_3317_);
return v_res_3326_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2));
v___x_3332_ = l_Lean_stringToMessageData(v___x_3331_);
return v___x_3332_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5(void){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__4));
v___x_3335_ = l_Lean_stringToMessageData(v___x_3334_);
return v___x_3335_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3337_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__6));
v___x_3338_ = l_Lean_stringToMessageData(v___x_3337_);
return v___x_3338_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9(void){
_start:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3340_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__8));
v___x_3341_ = l_Lean_stringToMessageData(v___x_3340_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(lean_object* v_fuel_3342_, lean_object* v_declName_3343_, lean_object* v_as_3344_, size_t v_sz_3345_, size_t v_i_3346_, lean_object* v_b_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
lean_object* v_a_3354_; uint8_t v___x_3358_; 
v___x_3358_ = lean_usize_dec_lt(v_i_3346_, v_sz_3345_);
if (v___x_3358_ == 0)
{
lean_object* v___x_3359_; 
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v___x_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3359_, 0, v_b_3347_);
return v___x_3359_;
}
else
{
lean_object* v_array_3360_; lean_object* v_start_3361_; lean_object* v_stop_3362_; uint8_t v___x_3363_; 
v_array_3360_ = lean_ctor_get(v_b_3347_, 0);
v_start_3361_ = lean_ctor_get(v_b_3347_, 1);
v_stop_3362_ = lean_ctor_get(v_b_3347_, 2);
v___x_3363_ = lean_nat_dec_lt(v_start_3361_, v_stop_3362_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v_b_3347_);
return v___x_3364_;
}
else
{
lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3545_; 
lean_inc(v_stop_3362_);
lean_inc(v_start_3361_);
lean_inc_ref(v_array_3360_);
v_isSharedCheck_3545_ = !lean_is_exclusive(v_b_3347_);
if (v_isSharedCheck_3545_ == 0)
{
lean_object* v_unused_3546_; lean_object* v_unused_3547_; lean_object* v_unused_3548_; 
v_unused_3546_ = lean_ctor_get(v_b_3347_, 2);
lean_dec(v_unused_3546_);
v_unused_3547_ = lean_ctor_get(v_b_3347_, 1);
lean_dec(v_unused_3547_);
v_unused_3548_ = lean_ctor_get(v_b_3347_, 0);
lean_dec(v_unused_3548_);
v___x_3366_ = v_b_3347_;
v_isShared_3367_ = v_isSharedCheck_3545_;
goto v_resetjp_3365_;
}
else
{
lean_dec(v_b_3347_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3545_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3368_; lean_object* v_a_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3374_; 
v___x_3368_ = lean_box(0);
v_a_3369_ = lean_array_uget_borrowed(v_as_3344_, v_i_3346_);
v___x_3370_ = lean_array_fget(v_array_3360_, v_start_3361_);
v___x_3371_ = lean_unsigned_to_nat(1u);
v___x_3372_ = lean_nat_add(v_start_3361_, v___x_3371_);
lean_dec(v_start_3361_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set(v___x_3366_, 1, v___x_3372_);
v___x_3374_ = v___x_3366_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_array_3360_);
lean_ctor_set(v_reuseFailAlloc_3544_, 1, v___x_3372_);
lean_ctor_set(v_reuseFailAlloc_3544_, 2, v_stop_3362_);
v___x_3374_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3375_ = l_Lean_Expr_mvarId_x21(v_a_3369_);
v___x_3376_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v___x_3375_, v___y_3349_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; uint8_t v___x_3378_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3378_ = lean_unbox(v_a_3377_);
lean_dec(v_a_3377_);
if (v___x_3378_ == 0)
{
lean_object* v___x_3379_; 
lean_inc(v___x_3375_);
v___x_3379_ = l_Lean_MVarId_getDecl(v___x_3375_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v_userName_3381_; lean_object* v_type_3382_; lean_object* v___x_3383_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v_userName_3381_ = lean_ctor_get(v_a_3380_, 0);
lean_inc(v_userName_3381_);
v_type_3382_ = lean_ctor_get(v_a_3380_, 2);
lean_inc_ref(v_type_3382_);
lean_dec(v_a_3380_);
v___x_3383_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_3382_, v___y_3349_);
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_object* v_a_3384_; uint8_t v___x_3385_; uint8_t v___x_3386_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___x_3383_, 1);
v___x_3385_ = lean_unbox(v___x_3370_);
lean_dec(v___x_3370_);
v___x_3386_ = l_Lean_BinderInfo_isInstImplicit(v___x_3385_);
if (v___x_3386_ == 0)
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___f_3389_; lean_object* v___x_3390_; 
v___x_3387_ = lean_box(v___x_3386_);
v___x_3388_ = lean_box(v___x_3363_);
lean_inc(v_fuel_3342_);
v___f_3389_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3389_, 0, v_fuel_3342_);
lean_closure_set(v___f_3389_, 1, v___x_3387_);
lean_closure_set(v___f_3389_, 2, v___x_3388_);
lean_inc(v_a_3384_);
v___x_3390_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_3384_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; uint8_t v___x_3392_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3390_, 1);
v___x_3392_ = lean_unbox(v_a_3391_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; 
lean_dec_ref(v___f_3389_);
v___x_3393_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1));
v___x_3394_ = lean_unsigned_to_nat(3u);
v___x_3395_ = l_Lean_Expr_isAppOfArity(v_a_3384_, v___x_3393_, v___x_3394_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
lean_dec(v_a_3384_);
lean_dec(v___x_3375_);
v___x_3396_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3);
v___x_3397_ = l_Lean_MessageData_ofName(v_userName_3381_);
v___x_3398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__5);
v___x_3400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3398_);
lean_ctor_set(v___x_3400_, 1, v___x_3399_);
v___x_3401_ = lean_unbox(v_a_3391_);
lean_dec(v_a_3391_);
lean_inc(v_declName_3343_);
v___x_3402_ = l_Lean_MessageData_ofConstName(v_declName_3343_, v___x_3401_);
v___x_3403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3400_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3404_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3403_);
lean_ctor_set(v___x_3405_, 1, v___x_3404_);
v___x_3406_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3405_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_dec_ref_known(v___x_3406_, 1);
v_a_3354_ = v___x_3374_;
goto v___jp_3353_;
}
else
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3414_; 
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3409_ = v___x_3406_;
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3406_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3412_; 
if (v_isShared_3410_ == 0)
{
v___x_3412_ = v___x_3409_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_a_3407_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
else
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
lean_dec(v_a_3391_);
v___x_3415_ = l_Lean_Expr_appFn_x21(v_a_3384_);
v___x_3416_ = l_Lean_Expr_appArg_x21(v___x_3415_);
lean_dec_ref(v___x_3415_);
v___x_3441_ = l_Lean_Expr_appArg_x21(v_a_3384_);
lean_inc_ref(v___x_3416_);
v___x_3442_ = l_Lean_Meta_isExprDefEq(v___x_3416_, v___x_3441_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3442_) == 0)
{
lean_object* v_a_3443_; uint8_t v___x_3444_; 
v_a_3443_ = lean_ctor_get(v___x_3442_, 0);
lean_inc(v_a_3443_);
lean_dec_ref_known(v___x_3442_, 1);
v___x_3444_ = lean_unbox(v_a_3443_);
if (v___x_3444_ == 0)
{
lean_object* v___x_3445_; uint8_t v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3445_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3446_ = lean_unbox(v_a_3443_);
lean_dec(v_a_3443_);
lean_inc(v_declName_3343_);
v___x_3447_ = l_Lean_MessageData_ofConstName(v_declName_3343_, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3445_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__7);
v___x_3450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3448_);
lean_ctor_set(v___x_3450_, 1, v___x_3449_);
v___x_3451_ = l_Lean_MessageData_ofName(v_userName_3381_);
v___x_3452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3450_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
v___x_3453_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__9);
v___x_3454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3452_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = l_Lean_indentExpr(v_a_3384_);
v___x_3456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3454_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
v___x_3457_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3456_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_dec_ref_known(v___x_3457_, 1);
v___y_3418_ = v___y_3348_;
v___y_3419_ = v___y_3349_;
v___y_3420_ = v___y_3350_;
v___y_3421_ = v___y_3351_;
goto v___jp_3417_;
}
else
{
lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3465_; 
lean_dec_ref(v___x_3416_);
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3457_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3460_ = v___x_3457_;
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_dec(v___x_3457_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3463_; 
if (v_isShared_3461_ == 0)
{
v___x_3463_ = v___x_3460_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_a_3458_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
}
else
{
lean_dec(v_a_3443_);
lean_dec(v_a_3384_);
lean_dec(v_userName_3381_);
v___y_3418_ = v___y_3348_;
v___y_3419_ = v___y_3349_;
v___y_3420_ = v___y_3350_;
v___y_3421_ = v___y_3351_;
goto v___jp_3417_;
}
}
else
{
lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3473_; 
lean_dec_ref(v___x_3416_);
lean_dec(v_a_3384_);
lean_dec(v_userName_3381_);
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3466_ = lean_ctor_get(v___x_3442_, 0);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___x_3442_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3468_ = v___x_3442_;
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_dec(v___x_3442_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3471_; 
if (v_isShared_3469_ == 0)
{
v___x_3471_ = v___x_3468_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_a_3466_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
}
v___jp_3417_:
{
lean_object* v___x_3422_; 
v___x_3422_ = l_Lean_Meta_mkEqRefl(v___x_3416_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3424_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3422_, 1);
v___x_3424_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3375_, v_a_3423_, v___y_3419_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_dec_ref_known(v___x_3424_, 1);
v_a_3354_ = v___x_3374_;
goto v___jp_3353_;
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3424_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3424_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3433_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3422_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3422_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
}
else
{
lean_object* v___x_3474_; 
lean_dec(v_a_3391_);
lean_dec(v_userName_3381_);
v___x_3474_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_a_3384_, v___f_3389_, v___x_3386_, v___x_3386_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v___x_3476_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3474_, 1);
v___x_3476_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3375_, v_a_3475_, v___y_3349_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_dec_ref_known(v___x_3476_, 1);
v_a_3354_ = v___x_3374_;
goto v___jp_3353_;
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3476_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3476_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3485_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3474_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3474_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_dec_ref(v___f_3389_);
lean_dec(v_a_3384_);
lean_dec(v_userName_3381_);
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3493_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3390_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3390_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
else
{
lean_object* v___x_3501_; 
lean_dec(v_userName_3381_);
v___x_3501_ = l_Lean_Meta_synthInstance(v_a_3384_, v___x_3368_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; lean_object* v___x_3503_; 
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
lean_inc(v_a_3502_);
lean_dec_ref_known(v___x_3501_, 1);
v___x_3503_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3375_, v_a_3502_, v___y_3349_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_dec_ref_known(v___x_3503_, 1);
v_a_3354_ = v___x_3374_;
goto v___jp_3353_;
}
else
{
lean_object* v_a_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3511_; 
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3506_ = v___x_3503_;
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_a_3504_);
lean_dec(v___x_3503_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3509_; 
if (v_isShared_3507_ == 0)
{
v___x_3509_ = v___x_3506_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_a_3504_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3519_; 
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3512_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3514_ = v___x_3501_;
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3501_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3517_; 
if (v_isShared_3515_ == 0)
{
v___x_3517_ = v___x_3514_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_a_3512_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
lean_dec(v_userName_3381_);
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v___x_3370_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3520_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v___x_3383_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3383_);
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
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v___x_3370_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3528_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3379_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3379_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_dec(v___x_3375_);
lean_dec(v___x_3370_);
v_a_3354_ = v___x_3374_;
goto v___jp_3353_;
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec(v___x_3375_);
lean_dec_ref(v___x_3374_);
lean_dec(v___x_3370_);
lean_dec(v_declName_3343_);
lean_dec(v_fuel_3342_);
v_a_3536_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3376_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3376_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
}
}
v___jp_3353_:
{
size_t v___x_3355_; size_t v___x_3356_; 
v___x_3355_ = ((size_t)1ULL);
v___x_3356_ = lean_usize_add(v_i_3346_, v___x_3355_);
v_i_3346_ = v___x_3356_;
v_b_3347_ = v_a_3354_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0));
v___x_3551_ = l_Lean_stringToMessageData(v___x_3550_);
return v___x_3551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(lean_object* v_declName_3552_, lean_object* v_goal_3553_, lean_object* v_fuel_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v___x_3560_; 
lean_inc(v_declName_3552_);
v___x_3560_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_3552_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v_a_3561_; lean_object* v___y_3563_; lean_object* v___y_3564_; lean_object* v___y_3565_; lean_object* v___y_3566_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3586_; lean_object* v___x_3638_; 
v_a_3561_ = lean_ctor_get(v___x_3560_, 0);
lean_inc_n(v_a_3561_, 2);
lean_dec_ref_known(v___x_3560_, 1);
lean_inc(v_a_3558_);
lean_inc_ref(v_a_3557_);
lean_inc(v_a_3556_);
lean_inc_ref(v_a_3555_);
v___x_3638_ = lean_infer_type(v_a_3561_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3640_; uint8_t v_transparency_3641_; lean_object* v___x_3642_; uint8_t v___x_3643_; uint8_t v___x_3644_; uint8_t v___x_3645_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref_known(v___x_3638_, 1);
v___x_3640_ = l_Lean_Meta_Context_config(v_a_3555_);
v_transparency_3641_ = lean_ctor_get_uint8(v___x_3640_, 9);
lean_dec_ref(v___x_3640_);
v___x_3642_ = lean_box(0);
v___x_3643_ = 0;
v___x_3644_ = 2;
v___x_3645_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3641_, v___x_3644_);
if (v___x_3645_ == 0)
{
lean_object* v_keyedConfig_3646_; uint8_t v_trackZetaDelta_3647_; lean_object* v_zetaDeltaSet_3648_; lean_object* v_lctx_3649_; lean_object* v_localInstances_3650_; lean_object* v_defEqCtx_x3f_3651_; lean_object* v_synthPendingDepth_3652_; lean_object* v_customCanUnfoldPredicate_x3f_3653_; uint8_t v_univApprox_3654_; uint8_t v_inTypeClassResolution_3655_; uint8_t v_cacheInferType_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v_keyedConfig_3646_ = lean_ctor_get(v_a_3555_, 0);
v_trackZetaDelta_3647_ = lean_ctor_get_uint8(v_a_3555_, sizeof(void*)*7);
v_zetaDeltaSet_3648_ = lean_ctor_get(v_a_3555_, 1);
v_lctx_3649_ = lean_ctor_get(v_a_3555_, 2);
v_localInstances_3650_ = lean_ctor_get(v_a_3555_, 3);
v_defEqCtx_x3f_3651_ = lean_ctor_get(v_a_3555_, 4);
v_synthPendingDepth_3652_ = lean_ctor_get(v_a_3555_, 5);
v_customCanUnfoldPredicate_x3f_3653_ = lean_ctor_get(v_a_3555_, 6);
v_univApprox_3654_ = lean_ctor_get_uint8(v_a_3555_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3655_ = lean_ctor_get_uint8(v_a_3555_, sizeof(void*)*7 + 2);
v_cacheInferType_3656_ = lean_ctor_get_uint8(v_a_3555_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3646_);
v___x_3657_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3644_, v_keyedConfig_3646_);
lean_inc(v_customCanUnfoldPredicate_x3f_3653_);
lean_inc(v_synthPendingDepth_3652_);
lean_inc(v_defEqCtx_x3f_3651_);
lean_inc_ref(v_localInstances_3650_);
lean_inc_ref(v_lctx_3649_);
lean_inc(v_zetaDeltaSet_3648_);
v___x_3658_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3658_, 0, v___x_3657_);
lean_ctor_set(v___x_3658_, 1, v_zetaDeltaSet_3648_);
lean_ctor_set(v___x_3658_, 2, v_lctx_3649_);
lean_ctor_set(v___x_3658_, 3, v_localInstances_3650_);
lean_ctor_set(v___x_3658_, 4, v_defEqCtx_x3f_3651_);
lean_ctor_set(v___x_3658_, 5, v_synthPendingDepth_3652_);
lean_ctor_set(v___x_3658_, 6, v_customCanUnfoldPredicate_x3f_3653_);
lean_ctor_set_uint8(v___x_3658_, sizeof(void*)*7, v_trackZetaDelta_3647_);
lean_ctor_set_uint8(v___x_3658_, sizeof(void*)*7 + 1, v_univApprox_3654_);
lean_ctor_set_uint8(v___x_3658_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3655_);
lean_ctor_set_uint8(v___x_3658_, sizeof(void*)*7 + 3, v_cacheInferType_3656_);
v___x_3659_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3639_, v___x_3642_, v___x_3643_, v___x_3658_, v_a_3556_, v_a_3557_, v_a_3558_);
lean_dec_ref_known(v___x_3658_, 7);
v___y_3586_ = v___x_3659_;
goto v___jp_3585_;
}
else
{
lean_object* v___x_3660_; 
v___x_3660_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3639_, v___x_3642_, v___x_3643_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
v___y_3586_ = v___x_3660_;
goto v___jp_3585_;
}
}
else
{
lean_dec(v_a_3561_);
lean_dec(v_fuel_3554_);
lean_dec_ref(v_goal_3553_);
lean_dec(v_declName_3552_);
return v___x_3638_;
}
v___jp_3562_:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; size_t v_sz_3572_; size_t v___x_3573_; lean_object* v___x_3574_; 
v___x_3569_ = lean_unsigned_to_nat(0u);
v___x_3570_ = lean_array_get_size(v___y_3564_);
v___x_3571_ = l_Array_toSubarray___redArg(v___y_3564_, v___x_3569_, v___x_3570_);
v_sz_3572_ = lean_array_size(v___y_3563_);
v___x_3573_ = ((size_t)0ULL);
v___x_3574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_fuel_3554_, v_declName_3552_, v___y_3563_, v_sz_3572_, v___x_3573_, v___x_3571_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
lean_dec_ref_known(v___x_3574_, 1);
v___x_3575_ = l_Lean_mkAppN(v_a_3561_, v___y_3563_);
lean_dec_ref(v___y_3563_);
v___x_3576_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v___x_3575_, v___y_3566_);
return v___x_3576_;
}
else
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
lean_dec_ref(v___y_3563_);
lean_dec(v_a_3561_);
v_a_3577_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3579_ = v___x_3574_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3574_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
}
v___jp_3585_:
{
if (lean_obj_tag(v___y_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v_snd_3588_; lean_object* v_fst_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3629_; 
v_a_3587_ = lean_ctor_get(v___y_3586_, 0);
lean_inc(v_a_3587_);
lean_dec_ref_known(v___y_3586_, 1);
v_snd_3588_ = lean_ctor_get(v_a_3587_, 1);
v_fst_3589_ = lean_ctor_get(v_a_3587_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_a_3587_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3591_ = v_a_3587_;
v_isShared_3592_ = v_isSharedCheck_3629_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_snd_3588_);
lean_inc(v_fst_3589_);
lean_dec(v_a_3587_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3629_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v_fst_3593_; lean_object* v_snd_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3628_; 
v_fst_3593_ = lean_ctor_get(v_snd_3588_, 0);
v_snd_3594_ = lean_ctor_get(v_snd_3588_, 1);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_snd_3588_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3596_ = v_snd_3588_;
v_isShared_3597_ = v_isSharedCheck_3628_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_snd_3594_);
lean_inc(v_fst_3593_);
lean_dec(v_snd_3588_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3628_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3598_; 
v___x_3598_ = l_Lean_Meta_isExprDefEq(v_snd_3594_, v_goal_3553_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; uint8_t v___x_3600_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3598_, 1);
v___x_3600_ = lean_unbox(v_a_3599_);
if (v___x_3600_ == 0)
{
lean_object* v___x_3601_; uint8_t v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3605_; 
v___x_3601_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3602_ = lean_unbox(v_a_3599_);
lean_dec(v_a_3599_);
lean_inc(v_declName_3552_);
v___x_3603_ = l_Lean_MessageData_ofConstName(v_declName_3552_, v___x_3602_);
if (v_isShared_3597_ == 0)
{
lean_ctor_set_tag(v___x_3596_, 7);
lean_ctor_set(v___x_3596_, 1, v___x_3603_);
lean_ctor_set(v___x_3596_, 0, v___x_3601_);
v___x_3605_ = v___x_3596_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3601_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v___x_3603_);
v___x_3605_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
lean_object* v___x_3606_; lean_object* v___x_3608_; 
v___x_3606_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1);
if (v_isShared_3592_ == 0)
{
lean_ctor_set_tag(v___x_3591_, 7);
lean_ctor_set(v___x_3591_, 1, v___x_3606_);
lean_ctor_set(v___x_3591_, 0, v___x_3605_);
v___x_3608_ = v___x_3591_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___x_3605_);
lean_ctor_set(v_reuseFailAlloc_3618_, 1, v___x_3606_);
v___x_3608_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
lean_object* v___x_3609_; 
v___x_3609_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3608_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_dec_ref_known(v___x_3609_, 1);
v___y_3563_ = v_fst_3589_;
v___y_3564_ = v_fst_3593_;
v___y_3565_ = v_a_3555_;
v___y_3566_ = v_a_3556_;
v___y_3567_ = v_a_3557_;
v___y_3568_ = v_a_3558_;
goto v___jp_3562_;
}
else
{
lean_object* v_a_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3617_; 
lean_dec(v_fst_3593_);
lean_dec(v_fst_3589_);
lean_dec(v_a_3561_);
lean_dec(v_fuel_3554_);
lean_dec(v_declName_3552_);
v_a_3610_ = lean_ctor_get(v___x_3609_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3612_ = v___x_3609_;
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_a_3610_);
lean_dec(v___x_3609_);
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
}
else
{
lean_dec(v_a_3599_);
lean_del_object(v___x_3596_);
lean_del_object(v___x_3591_);
v___y_3563_ = v_fst_3589_;
v___y_3564_ = v_fst_3593_;
v___y_3565_ = v_a_3555_;
v___y_3566_ = v_a_3556_;
v___y_3567_ = v_a_3557_;
v___y_3568_ = v_a_3558_;
goto v___jp_3562_;
}
}
else
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3627_; 
lean_del_object(v___x_3596_);
lean_dec(v_fst_3593_);
lean_del_object(v___x_3591_);
lean_dec(v_fst_3589_);
lean_dec(v_a_3561_);
lean_dec(v_fuel_3554_);
lean_dec(v_declName_3552_);
v_a_3620_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3627_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3622_ = v___x_3598_;
v_isShared_3623_ = v_isSharedCheck_3627_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v___x_3598_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3627_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___x_3625_; 
if (v_isShared_3623_ == 0)
{
v___x_3625_ = v___x_3622_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v_a_3620_);
v___x_3625_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
return v___x_3625_;
}
}
}
}
}
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
lean_dec(v_a_3561_);
lean_dec(v_fuel_3554_);
lean_dec_ref(v_goal_3553_);
lean_dec(v_declName_3552_);
v_a_3630_ = lean_ctor_get(v___y_3586_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___y_3586_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___y_3586_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___y_3586_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
}
else
{
lean_dec(v_fuel_3554_);
lean_dec_ref(v_goal_3553_);
lean_dec(v_declName_3552_);
return v___x_3560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0(lean_object* v_fuel_3661_, lean_object* v_a_3662_, lean_object* v_x_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_){
_start:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3669_ = lean_unsigned_to_nat(1u);
v___x_3670_ = lean_nat_sub(v_fuel_3661_, v___x_3669_);
v___x_3671_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_x_3663_, v_a_3662_, v___x_3670_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_);
return v___x_3671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___boxed(lean_object* v_declName_3672_, lean_object* v_goal_3673_, lean_object* v_fuel_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_3672_, v_goal_3673_, v_fuel_3674_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_);
lean_dec(v_a_3678_);
lean_dec_ref(v_a_3677_);
lean_dec(v_a_3676_);
lean_dec_ref(v_a_3675_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___boxed(lean_object* v_fuel_3681_, lean_object* v_declName_3682_, lean_object* v_as_3683_, lean_object* v_sz_3684_, lean_object* v_i_3685_, lean_object* v_b_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
size_t v_sz_boxed_3692_; size_t v_i_boxed_3693_; lean_object* v_res_3694_; 
v_sz_boxed_3692_ = lean_unbox_usize(v_sz_3684_);
lean_dec(v_sz_3684_);
v_i_boxed_3693_ = lean_unbox_usize(v_i_3685_);
lean_dec(v_i_3685_);
v_res_3694_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_fuel_3681_, v_declName_3682_, v_as_3683_, v_sz_boxed_3692_, v_i_boxed_3693_, v_b_3686_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_);
lean_dec(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec(v___y_3688_);
lean_dec_ref(v___y_3687_);
lean_dec_ref(v_as_3683_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___boxed(lean_object* v_lhs_3695_, lean_object* v_rhs_3696_, lean_object* v_fuel_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lean_Meta_Transport_mkEquiv(v_lhs_3695_, v_rhs_3696_, v_fuel_3697_, v_a_3698_, v_a_3699_, v_a_3700_, v_a_3701_);
lean_dec(v_a_3701_);
lean_dec_ref(v_a_3700_);
lean_dec(v_a_3699_);
lean_dec_ref(v_a_3698_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
lean_object* v___x_3709_; 
v___x_3709_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_3707_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___boxed(lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_){
_start:
{
lean_object* v_res_3715_; 
v_res_3715_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(lean_object* v_mvarId_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_){
_start:
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_3716_, v___y_3718_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___boxed(lean_object* v_mvarId_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_){
_start:
{
lean_object* v_res_3729_; 
v_res_3729_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(v_mvarId_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
lean_dec(v___y_3727_);
lean_dec_ref(v___y_3726_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
lean_dec(v_mvarId_3723_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(lean_object* v_mvarId_3730_, lean_object* v_val_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_3730_, v_val_3731_, v___y_3733_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___boxed(lean_object* v_mvarId_3738_, lean_object* v_val_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(v_mvarId_3738_, v_val_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_);
lean_dec(v___y_3743_);
lean_dec_ref(v___y_3742_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(lean_object* v_00_u03b1_3746_, lean_object* v_x_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_3747_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___boxed(lean_object* v_00_u03b1_3754_, lean_object* v_x_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_){
_start:
{
lean_object* v_res_3761_; 
v_res_3761_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(v_00_u03b1_3754_, v_x_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_);
lean_dec(v___y_3759_);
lean_dec_ref(v___y_3758_);
lean_dec(v___y_3757_);
lean_dec_ref(v___y_3756_);
return v_res_3761_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(lean_object* v_00_u03b2_3762_, lean_object* v_x_3763_, lean_object* v_x_3764_){
_start:
{
uint8_t v___x_3765_; 
v___x_3765_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_3763_, v_x_3764_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3766_, lean_object* v_x_3767_, lean_object* v_x_3768_){
_start:
{
uint8_t v_res_3769_; lean_object* v_r_3770_; 
v_res_3769_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(v_00_u03b2_3766_, v_x_3767_, v_x_3768_);
lean_dec(v_x_3768_);
lean_dec_ref(v_x_3767_);
v_r_3770_ = lean_box(v_res_3769_);
return v_r_3770_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2(lean_object* v_00_u03b2_3771_, lean_object* v_x_3772_, lean_object* v_x_3773_, lean_object* v_x_3774_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_x_3772_, v_x_3773_, v_x_3774_);
return v___x_3775_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_3776_, lean_object* v_x_3777_, size_t v_x_3778_, lean_object* v_x_3779_){
_start:
{
uint8_t v___x_3780_; 
v___x_3780_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_3777_, v_x_3778_, v_x_3779_);
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_3781_, lean_object* v_x_3782_, lean_object* v_x_3783_, lean_object* v_x_3784_){
_start:
{
size_t v_x_34132__boxed_3785_; uint8_t v_res_3786_; lean_object* v_r_3787_; 
v_x_34132__boxed_3785_ = lean_unbox_usize(v_x_3783_);
lean_dec(v_x_3783_);
v_res_3786_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(v_00_u03b2_3781_, v_x_3782_, v_x_34132__boxed_3785_, v_x_3784_);
lean_dec(v_x_3784_);
lean_dec_ref(v_x_3782_);
v_r_3787_ = lean_box(v_res_3786_);
return v_r_3787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_3788_, lean_object* v_x_3789_, size_t v_x_3790_, size_t v_x_3791_, lean_object* v_x_3792_, lean_object* v_x_3793_){
_start:
{
lean_object* v___x_3794_; 
v___x_3794_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_3789_, v_x_3790_, v_x_3791_, v_x_3792_, v_x_3793_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___boxed(lean_object* v_00_u03b2_3795_, lean_object* v_x_3796_, lean_object* v_x_3797_, lean_object* v_x_3798_, lean_object* v_x_3799_, lean_object* v_x_3800_){
_start:
{
size_t v_x_34143__boxed_3801_; size_t v_x_34144__boxed_3802_; lean_object* v_res_3803_; 
v_x_34143__boxed_3801_ = lean_unbox_usize(v_x_3797_);
lean_dec(v_x_3797_);
v_x_34144__boxed_3802_ = lean_unbox_usize(v_x_3798_);
lean_dec(v_x_3798_);
v_res_3803_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(v_00_u03b2_3795_, v_x_3796_, v_x_34143__boxed_3801_, v_x_34144__boxed_3802_, v_x_3799_, v_x_3800_);
return v_res_3803_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b2_3804_, lean_object* v_keys_3805_, lean_object* v_vals_3806_, lean_object* v_heq_3807_, lean_object* v_i_3808_, lean_object* v_k_3809_){
_start:
{
uint8_t v___x_3810_; 
v___x_3810_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_3805_, v_i_3808_, v_k_3809_);
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___boxed(lean_object* v_00_u03b2_3811_, lean_object* v_keys_3812_, lean_object* v_vals_3813_, lean_object* v_heq_3814_, lean_object* v_i_3815_, lean_object* v_k_3816_){
_start:
{
uint8_t v_res_3817_; lean_object* v_r_3818_; 
v_res_3817_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(v_00_u03b2_3811_, v_keys_3812_, v_vals_3813_, v_heq_3814_, v_i_3815_, v_k_3816_);
lean_dec(v_k_3816_);
lean_dec_ref(v_vals_3813_);
lean_dec_ref(v_keys_3812_);
v_r_3818_ = lean_box(v_res_3817_);
return v_r_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14(lean_object* v_00_u03b2_3819_, lean_object* v_n_3820_, lean_object* v_k_3821_, lean_object* v_v_3822_){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v_n_3820_, v_k_3821_, v_v_3822_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(lean_object* v_00_u03b2_3824_, size_t v_depth_3825_, lean_object* v_keys_3826_, lean_object* v_vals_3827_, lean_object* v_heq_3828_, lean_object* v_i_3829_, lean_object* v_entries_3830_){
_start:
{
lean_object* v___x_3831_; 
v___x_3831_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_3825_, v_keys_3826_, v_vals_3827_, v_i_3829_, v_entries_3830_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___boxed(lean_object* v_00_u03b2_3832_, lean_object* v_depth_3833_, lean_object* v_keys_3834_, lean_object* v_vals_3835_, lean_object* v_heq_3836_, lean_object* v_i_3837_, lean_object* v_entries_3838_){
_start:
{
size_t v_depth_boxed_3839_; lean_object* v_res_3840_; 
v_depth_boxed_3839_ = lean_unbox_usize(v_depth_3833_);
lean_dec(v_depth_3833_);
v_res_3840_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(v_00_u03b2_3832_, v_depth_boxed_3839_, v_keys_3834_, v_vals_3835_, v_heq_3836_, v_i_3837_, v_entries_3838_);
lean_dec_ref(v_vals_3835_);
lean_dec_ref(v_keys_3834_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16(lean_object* v_00_u03b2_3841_, lean_object* v_x_3842_, lean_object* v_x_3843_, lean_object* v_x_3844_, lean_object* v_x_3845_){
_start:
{
lean_object* v___x_3846_; 
v___x_3846_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_x_3842_, v_x_3843_, v_x_3844_, v_x_3845_);
return v___x_3846_;
}
}
static lean_object* _init_l_Lean_Meta_mkTransportEquiv___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3848_ = ((lean_object*)(l_Lean_Meta_mkTransportEquiv___lam__0___closed__0));
v___x_3849_ = l_Lean_stringToMessageData(v___x_3848_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___lam__0(lean_object* v_lhs_3850_, lean_object* v_rhs_3851_, lean_object* v___x_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v___x_3858_; 
lean_inc_ref(v_rhs_3851_);
lean_inc_ref(v_lhs_3850_);
v___x_3858_ = l_Lean_Meta_Transport_mkEquiv(v_lhs_3850_, v_rhs_3851_, v___x_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_dec_ref(v_rhs_3851_);
lean_dec_ref(v_lhs_3850_);
return v___x_3858_;
}
else
{
lean_object* v_a_3859_; uint8_t v___y_3861_; uint8_t v___x_3890_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3859_);
v___x_3890_ = l_Lean_Exception_isInterrupt(v_a_3859_);
if (v___x_3890_ == 0)
{
uint8_t v___x_3891_; 
lean_inc(v_a_3859_);
v___x_3891_ = l_Lean_Exception_isRuntime(v_a_3859_);
v___y_3861_ = v___x_3891_;
goto v___jp_3860_;
}
else
{
v___y_3861_ = v___x_3890_;
goto v___jp_3860_;
}
v___jp_3860_:
{
if (v___y_3861_ == 0)
{
if (lean_obj_tag(v_a_3859_) == 1)
{
lean_object* v_id_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3888_; 
v_id_3862_ = lean_ctor_get(v_a_3859_, 0);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_a_3859_);
if (v_isSharedCheck_3888_ == 0)
{
lean_object* v_unused_3889_; 
v_unused_3889_ = lean_ctor_get(v_a_3859_, 1);
lean_dec(v_unused_3889_);
v___x_3864_ = v_a_3859_;
v_isShared_3865_ = v_isSharedCheck_3888_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_id_3862_);
lean_dec(v_a_3859_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3888_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3866_; uint8_t v___x_3867_; 
v___x_3866_ = l_Lean_Meta_Transport_depthExceptionId;
v___x_3867_ = l_Lean_instBEqInternalExceptionId_beq(v_id_3862_, v___x_3866_);
lean_dec(v_id_3862_);
if (v___x_3867_ == 0)
{
lean_del_object(v___x_3864_);
lean_dec_ref(v_rhs_3851_);
lean_dec_ref(v_lhs_3850_);
return v___x_3858_;
}
else
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3871_; 
lean_dec_ref_known(v___x_3858_, 1);
v___x_3868_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
v___x_3869_ = l_Lean_indentExpr(v_rhs_3851_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set_tag(v___x_3864_, 7);
lean_ctor_set(v___x_3864_, 1, v___x_3869_);
lean_ctor_set(v___x_3864_, 0, v___x_3868_);
v___x_3871_ = v___x_3864_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v___x_3868_);
lean_ctor_set(v_reuseFailAlloc_3887_, 1, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v_a_3879_; lean_object* v___x_3881_; uint8_t v_isShared_3882_; uint8_t v_isSharedCheck_3886_; 
v___x_3872_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3871_);
lean_ctor_set(v___x_3873_, 1, v___x_3872_);
v___x_3874_ = l_Lean_indentExpr(v_lhs_3850_);
v___x_3875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3873_);
lean_ctor_set(v___x_3875_, 1, v___x_3874_);
v___x_3876_ = lean_obj_once(&l_Lean_Meta_mkTransportEquiv___lam__0___closed__1, &l_Lean_Meta_mkTransportEquiv___lam__0___closed__1_once, _init_l_Lean_Meta_mkTransportEquiv___lam__0___closed__1);
v___x_3877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3875_);
lean_ctor_set(v___x_3877_, 1, v___x_3876_);
v___x_3878_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3877_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
v_a_3879_ = lean_ctor_get(v___x_3878_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3878_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3881_ = v___x_3878_;
v_isShared_3882_ = v_isSharedCheck_3886_;
goto v_resetjp_3880_;
}
else
{
lean_inc(v_a_3879_);
lean_dec(v___x_3878_);
v___x_3881_ = lean_box(0);
v_isShared_3882_ = v_isSharedCheck_3886_;
goto v_resetjp_3880_;
}
v_resetjp_3880_:
{
lean_object* v___x_3884_; 
if (v_isShared_3882_ == 0)
{
v___x_3884_ = v___x_3881_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_a_3879_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3859_);
lean_dec_ref(v_rhs_3851_);
lean_dec_ref(v_lhs_3850_);
return v___x_3858_;
}
}
else
{
lean_dec(v_a_3859_);
lean_dec_ref(v_rhs_3851_);
lean_dec_ref(v_lhs_3850_);
return v___x_3858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___lam__0___boxed(lean_object* v_lhs_3892_, lean_object* v_rhs_3893_, lean_object* v___x_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Lean_Meta_mkTransportEquiv___lam__0(v_lhs_3892_, v_rhs_3893_, v___x_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
return v_res_3900_;
}
}
static lean_object* _init_l_Lean_Meta_mkTransportEquiv___closed__1(void){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = ((lean_object*)(l_Lean_Meta_mkTransportEquiv___closed__0));
v___x_3903_ = l_Lean_stringToMessageData(v___x_3902_);
return v___x_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv(lean_object* v_lhs_3904_, lean_object* v_rhs_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_){
_start:
{
lean_object* v___y_3912_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___y_3933_; lean_object* v___x_3954_; lean_object* v_env_3955_; lean_object* v___x_3956_; uint8_t v___x_3957_; uint8_t v___x_3958_; 
v___x_3954_ = lean_st_ref_get(v_a_3909_);
v_env_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc_ref(v_env_3955_);
lean_dec(v___x_3954_);
v___x_3956_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3957_ = 1;
v___x_3958_ = l_Lean_Environment_contains(v_env_3955_, v___x_3956_, v___x_3957_);
if (v___x_3958_ == 0)
{
lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v_a_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3968_; 
lean_dec_ref(v_rhs_3905_);
lean_dec_ref(v_lhs_3904_);
v___x_3959_ = lean_obj_once(&l_Lean_Meta_mkTransportEquiv___closed__1, &l_Lean_Meta_mkTransportEquiv___closed__1_once, _init_l_Lean_Meta_mkTransportEquiv___closed__1);
v___x_3960_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3959_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
v_a_3961_ = lean_ctor_get(v___x_3960_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3960_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3963_ = v___x_3960_;
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_a_3961_);
lean_dec(v___x_3960_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3966_; 
if (v_isShared_3964_ == 0)
{
v___x_3966_ = v___x_3963_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_a_3961_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
else
{
v___y_3930_ = v_a_3906_;
v___y_3931_ = v_a_3907_;
v___y_3932_ = v_a_3908_;
v___y_3933_ = v_a_3909_;
goto v___jp_3929_;
}
v___jp_3911_:
{
if (lean_obj_tag(v___y_3912_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3920_; 
v_a_3913_ = lean_ctor_get(v___y_3912_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___y_3912_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3915_ = v___y_3912_;
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___y_3912_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
}
else
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
v_a_3921_ = lean_ctor_get(v___y_3912_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___y_3912_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___y_3912_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___y_3912_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
}
v___jp_3929_:
{
lean_object* v___x_3934_; uint8_t v_transparency_3935_; lean_object* v___x_3936_; uint8_t v___x_3937_; uint8_t v___x_3938_; 
v___x_3934_ = l_Lean_Meta_Context_config(v___y_3930_);
v_transparency_3935_ = lean_ctor_get_uint8(v___x_3934_, 9);
lean_dec_ref(v___x_3934_);
v___x_3936_ = lean_unsigned_to_nat(8u);
v___x_3937_ = 5;
v___x_3938_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3935_, v___x_3937_);
if (v___x_3938_ == 0)
{
lean_object* v_keyedConfig_3939_; uint8_t v_trackZetaDelta_3940_; lean_object* v_zetaDeltaSet_3941_; lean_object* v_lctx_3942_; lean_object* v_localInstances_3943_; lean_object* v_defEqCtx_x3f_3944_; lean_object* v_synthPendingDepth_3945_; lean_object* v_customCanUnfoldPredicate_x3f_3946_; uint8_t v_univApprox_3947_; uint8_t v_inTypeClassResolution_3948_; uint8_t v_cacheInferType_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v_keyedConfig_3939_ = lean_ctor_get(v___y_3930_, 0);
v_trackZetaDelta_3940_ = lean_ctor_get_uint8(v___y_3930_, sizeof(void*)*7);
v_zetaDeltaSet_3941_ = lean_ctor_get(v___y_3930_, 1);
v_lctx_3942_ = lean_ctor_get(v___y_3930_, 2);
v_localInstances_3943_ = lean_ctor_get(v___y_3930_, 3);
v_defEqCtx_x3f_3944_ = lean_ctor_get(v___y_3930_, 4);
v_synthPendingDepth_3945_ = lean_ctor_get(v___y_3930_, 5);
v_customCanUnfoldPredicate_x3f_3946_ = lean_ctor_get(v___y_3930_, 6);
v_univApprox_3947_ = lean_ctor_get_uint8(v___y_3930_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3948_ = lean_ctor_get_uint8(v___y_3930_, sizeof(void*)*7 + 2);
v_cacheInferType_3949_ = lean_ctor_get_uint8(v___y_3930_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3939_);
v___x_3950_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3937_, v_keyedConfig_3939_);
lean_inc(v_customCanUnfoldPredicate_x3f_3946_);
lean_inc(v_synthPendingDepth_3945_);
lean_inc(v_defEqCtx_x3f_3944_);
lean_inc_ref(v_localInstances_3943_);
lean_inc_ref(v_lctx_3942_);
lean_inc(v_zetaDeltaSet_3941_);
v___x_3951_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3951_, 0, v___x_3950_);
lean_ctor_set(v___x_3951_, 1, v_zetaDeltaSet_3941_);
lean_ctor_set(v___x_3951_, 2, v_lctx_3942_);
lean_ctor_set(v___x_3951_, 3, v_localInstances_3943_);
lean_ctor_set(v___x_3951_, 4, v_defEqCtx_x3f_3944_);
lean_ctor_set(v___x_3951_, 5, v_synthPendingDepth_3945_);
lean_ctor_set(v___x_3951_, 6, v_customCanUnfoldPredicate_x3f_3946_);
lean_ctor_set_uint8(v___x_3951_, sizeof(void*)*7, v_trackZetaDelta_3940_);
lean_ctor_set_uint8(v___x_3951_, sizeof(void*)*7 + 1, v_univApprox_3947_);
lean_ctor_set_uint8(v___x_3951_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3948_);
lean_ctor_set_uint8(v___x_3951_, sizeof(void*)*7 + 3, v_cacheInferType_3949_);
v___x_3952_ = l_Lean_Meta_mkTransportEquiv___lam__0(v_lhs_3904_, v_rhs_3905_, v___x_3936_, v___x_3951_, v___y_3931_, v___y_3932_, v___y_3933_);
lean_dec_ref_known(v___x_3951_, 7);
v___y_3912_ = v___x_3952_;
goto v___jp_3911_;
}
else
{
lean_object* v___x_3953_; 
v___x_3953_ = l_Lean_Meta_mkTransportEquiv___lam__0(v_lhs_3904_, v_rhs_3905_, v___x_3936_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_);
v___y_3912_ = v___x_3953_;
goto v___jp_3911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___boxed(lean_object* v_lhs_3969_, lean_object* v_rhs_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lean_Meta_mkTransportEquiv(v_lhs_3969_, v_rhs_3970_, v_a_3971_, v_a_3972_, v_a_3973_, v_a_3974_);
lean_dec(v_a_3974_);
lean_dec_ref(v_a_3973_);
lean_dec(v_a_3972_);
lean_dec_ref(v_a_3971_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport(lean_object* v_e_3982_, lean_object* v_tgt_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v___x_3989_; 
lean_inc(v_a_3987_);
lean_inc_ref(v_a_3986_);
lean_inc(v_a_3985_);
lean_inc_ref(v_a_3984_);
lean_inc_ref(v_e_3982_);
v___x_3989_ = lean_infer_type(v_e_3982_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
if (lean_obj_tag(v___x_3989_) == 0)
{
lean_object* v_a_3990_; lean_object* v___x_3991_; 
v_a_3990_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_a_3990_);
lean_dec_ref_known(v___x_3989_, 1);
v___x_3991_ = l_Lean_Meta_mkTransportEquiv(v_tgt_3983_, v_a_3990_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3991_, 1);
v___x_3993_ = ((lean_object*)(l_Lean_Meta_transport___closed__1));
v___x_3994_ = lean_unsigned_to_nat(2u);
v___x_3995_ = lean_mk_empty_array_with_capacity(v___x_3994_);
v___x_3996_ = lean_array_push(v___x_3995_, v_a_3992_);
v___x_3997_ = lean_array_push(v___x_3996_, v_e_3982_);
v___x_3998_ = l_Lean_Meta_mkAppM(v___x_3993_, v___x_3997_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
return v___x_3998_;
}
else
{
lean_dec_ref(v_e_3982_);
return v___x_3991_;
}
}
else
{
lean_dec_ref(v_tgt_3983_);
lean_dec_ref(v_e_3982_);
return v___x_3989_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport___boxed(lean_object* v_e_3999_, lean_object* v_tgt_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_){
_start:
{
lean_object* v_res_4006_; 
v_res_4006_ = l_Lean_Meta_transport(v_e_3999_, v_tgt_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_);
lean_dec(v_a_4004_);
lean_dec_ref(v_a_4003_);
lean_dec(v_a_4002_);
lean_dec_ref(v_a_4001_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance(lean_object* v_src_4007_, lean_object* v_tgt_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_){
_start:
{
lean_object* v___x_4014_; 
lean_inc_ref(v_src_4007_);
v___x_4014_ = l_Lean_Meta_mkTransportEquiv(v_tgt_4008_, v_src_4007_, v_a_4009_, v_a_4010_, v_a_4011_, v_a_4012_);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_object* v_a_4015_; lean_object* v___x_4016_; lean_object* v_a_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
lean_inc(v_a_4015_);
lean_dec_ref_known(v___x_4014_, 1);
v___x_4016_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_src_4007_, v_a_4010_);
v_a_4017_ = lean_ctor_get(v___x_4016_, 0);
lean_inc(v_a_4017_);
lean_dec_ref(v___x_4016_);
v___x_4018_ = lean_box(0);
v___x_4019_ = l_Lean_Meta_synthInstance(v_a_4017_, v___x_4018_, v_a_4009_, v_a_4010_, v_a_4011_, v_a_4012_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v___x_4019_, 1);
v___x_4021_ = ((lean_object*)(l_Lean_Meta_transport___closed__1));
v___x_4022_ = lean_unsigned_to_nat(2u);
v___x_4023_ = lean_mk_empty_array_with_capacity(v___x_4022_);
v___x_4024_ = lean_array_push(v___x_4023_, v_a_4015_);
v___x_4025_ = lean_array_push(v___x_4024_, v_a_4020_);
v___x_4026_ = l_Lean_Meta_mkAppM(v___x_4021_, v___x_4025_, v_a_4009_, v_a_4010_, v_a_4011_, v_a_4012_);
return v___x_4026_;
}
else
{
lean_dec(v_a_4015_);
return v___x_4019_;
}
}
else
{
lean_dec_ref(v_src_4007_);
return v___x_4014_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance___boxed(lean_object* v_src_4027_, lean_object* v_tgt_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lean_Meta_transportInstance(v_src_4027_, v_tgt_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
lean_dec(v_a_4032_);
lean_dec_ref(v_a_4031_);
lean_dec(v_a_4030_);
lean_dec_ref(v_a_4029_);
return v_res_4034_;
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
