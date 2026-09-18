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
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
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
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Equiv"};
static const lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
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
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "`, its explicit arguments must be equivalences or families of equivalences, but `"};
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
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lean_Meta_Transport_mkEquiv___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "cannot infer argument `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3;
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
static const lean_ctor_object l_Lean_Meta_transport___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0(lean_object* v_x_786_, lean_object* v_body_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_793_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_794_ = lean_unsigned_to_nat(2u);
v___x_795_ = l_Lean_Expr_isAppOfArity(v_body_787_, v___x_793_, v___x_794_);
v___x_796_ = lean_box(v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___boxed(lean_object* v_x_798_, lean_object* v_body_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0(v_x_798_, v_body_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec_ref(v_body_799_);
lean_dec_ref(v_x_798_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(lean_object* v_type_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_){
_start:
{
lean_object* v___y_814_; lean_object* v___x_831_; uint8_t v_transparency_832_; lean_object* v___f_833_; uint8_t v___x_834_; uint8_t v___x_835_; uint8_t v___x_836_; 
v___x_831_ = l_Lean_Meta_Context_config(v_a_808_);
v_transparency_832_ = lean_ctor_get_uint8(v___x_831_, 9);
lean_dec_ref(v___x_831_);
v___f_833_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___closed__0));
v___x_834_ = 0;
v___x_835_ = 2;
v___x_836_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_832_, v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v_keyedConfig_837_; uint8_t v_trackZetaDelta_838_; lean_object* v_zetaDeltaSet_839_; lean_object* v_lctx_840_; lean_object* v_localInstances_841_; lean_object* v_defEqCtx_x3f_842_; lean_object* v_synthPendingDepth_843_; lean_object* v_customCanUnfoldPredicate_x3f_844_; uint8_t v_univApprox_845_; uint8_t v_inTypeClassResolution_846_; uint8_t v_cacheInferType_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_keyedConfig_837_ = lean_ctor_get(v_a_808_, 0);
v_trackZetaDelta_838_ = lean_ctor_get_uint8(v_a_808_, sizeof(void*)*7);
v_zetaDeltaSet_839_ = lean_ctor_get(v_a_808_, 1);
v_lctx_840_ = lean_ctor_get(v_a_808_, 2);
v_localInstances_841_ = lean_ctor_get(v_a_808_, 3);
v_defEqCtx_x3f_842_ = lean_ctor_get(v_a_808_, 4);
v_synthPendingDepth_843_ = lean_ctor_get(v_a_808_, 5);
v_customCanUnfoldPredicate_x3f_844_ = lean_ctor_get(v_a_808_, 6);
v_univApprox_845_ = lean_ctor_get_uint8(v_a_808_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_846_ = lean_ctor_get_uint8(v_a_808_, sizeof(void*)*7 + 2);
v_cacheInferType_847_ = lean_ctor_get_uint8(v_a_808_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_837_);
v___x_848_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_835_, v_keyedConfig_837_);
lean_inc(v_customCanUnfoldPredicate_x3f_844_);
lean_inc(v_synthPendingDepth_843_);
lean_inc(v_defEqCtx_x3f_842_);
lean_inc_ref(v_localInstances_841_);
lean_inc_ref(v_lctx_840_);
lean_inc(v_zetaDeltaSet_839_);
v___x_849_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v_zetaDeltaSet_839_);
lean_ctor_set(v___x_849_, 2, v_lctx_840_);
lean_ctor_set(v___x_849_, 3, v_localInstances_841_);
lean_ctor_set(v___x_849_, 4, v_defEqCtx_x3f_842_);
lean_ctor_set(v___x_849_, 5, v_synthPendingDepth_843_);
lean_ctor_set(v___x_849_, 6, v_customCanUnfoldPredicate_x3f_844_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7, v_trackZetaDelta_838_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7 + 1, v_univApprox_845_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7 + 2, v_inTypeClassResolution_846_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7 + 3, v_cacheInferType_847_);
v___x_850_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_type_807_, v___f_833_, v___x_834_, v___x_834_, v___x_849_, v_a_809_, v_a_810_, v_a_811_);
lean_dec_ref_known(v___x_849_, 7);
v___y_814_ = v___x_850_;
goto v___jp_813_;
}
else
{
lean_object* v___x_851_; 
v___x_851_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_type_807_, v___f_833_, v___x_834_, v___x_834_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
v___y_814_ = v___x_851_;
goto v___jp_813_;
}
v___jp_813_:
{
if (lean_obj_tag(v___y_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_a_815_ = lean_ctor_get(v___y_814_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___y_814_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___y_814_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___y_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_823_ = lean_ctor_get(v___y_814_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___y_814_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___y_814_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___y_814_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___boxed(lean_object* v_type_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_type_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
lean_dec_ref(v_a_853_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(lean_object* v_e_859_, lean_object* v___y_860_){
_start:
{
uint8_t v___x_862_; 
v___x_862_ = l_Lean_Expr_hasMVar(v_e_859_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; 
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v_e_859_);
return v___x_863_;
}
else
{
lean_object* v___x_864_; lean_object* v_mctx_865_; lean_object* v___x_866_; lean_object* v_fst_867_; lean_object* v_snd_868_; lean_object* v___x_869_; lean_object* v_cache_870_; lean_object* v_zetaDeltaFVarIds_871_; lean_object* v_postponed_872_; lean_object* v_diag_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_882_; 
v___x_864_ = lean_st_ref_get(v___y_860_);
v_mctx_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc_ref(v_mctx_865_);
lean_dec(v___x_864_);
v___x_866_ = l_Lean_instantiateMVarsCore(v_mctx_865_, v_e_859_);
v_fst_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_fst_867_);
v_snd_868_ = lean_ctor_get(v___x_866_, 1);
lean_inc(v_snd_868_);
lean_dec_ref(v___x_866_);
v___x_869_ = lean_st_ref_take(v___y_860_);
v_cache_870_ = lean_ctor_get(v___x_869_, 1);
v_zetaDeltaFVarIds_871_ = lean_ctor_get(v___x_869_, 2);
v_postponed_872_ = lean_ctor_get(v___x_869_, 3);
v_diag_873_ = lean_ctor_get(v___x_869_, 4);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_882_ == 0)
{
lean_object* v_unused_883_; 
v_unused_883_ = lean_ctor_get(v___x_869_, 0);
lean_dec(v_unused_883_);
v___x_875_ = v___x_869_;
v_isShared_876_ = v_isSharedCheck_882_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_diag_873_);
lean_inc(v_postponed_872_);
lean_inc(v_zetaDeltaFVarIds_871_);
lean_inc(v_cache_870_);
lean_dec(v___x_869_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_882_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_snd_868_);
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_snd_868_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_cache_870_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_zetaDeltaFVarIds_871_);
lean_ctor_set(v_reuseFailAlloc_881_, 3, v_postponed_872_);
lean_ctor_set(v_reuseFailAlloc_881_, 4, v_diag_873_);
v___x_878_ = v_reuseFailAlloc_881_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = lean_st_ref_put(v___y_860_, v___x_878_);
v___x_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_880_, 0, v_fst_867_);
return v___x_880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg___boxed(lean_object* v_e_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_e_884_, v___y_885_);
lean_dec(v___y_885_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(lean_object* v_e_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_e_888_, v___y_890_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___boxed(lean_object* v_e_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0(v_e_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
return v_res_901_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
return v___x_905_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__0);
v___x_907_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_907_, 0, v___x_906_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
lean_ctor_set(v___x_907_, 2, v___x_906_);
lean_ctor_set(v___x_907_, 3, v___x_906_);
lean_ctor_set(v___x_907_, 4, v___x_906_);
lean_ctor_set(v___x_907_, 5, v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(lean_object* v_ext_908_, lean_object* v_b_909_, uint8_t v_kind_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_toCold_915_; lean_object* v_currNamespace_916_; lean_object* v___x_917_; lean_object* v_env_918_; lean_object* v_nextMacroScope_919_; lean_object* v_ngen_920_; lean_object* v_auxDeclNGen_921_; lean_object* v_traceState_922_; lean_object* v_messages_923_; lean_object* v_infoState_924_; lean_object* v_snapshotTasks_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_952_; 
v_toCold_915_ = lean_ctor_get(v___y_912_, 0);
v_currNamespace_916_ = lean_ctor_get(v_toCold_915_, 4);
v___x_917_ = lean_st_ref_take(v___y_913_);
v_env_918_ = lean_ctor_get(v___x_917_, 0);
v_nextMacroScope_919_ = lean_ctor_get(v___x_917_, 1);
v_ngen_920_ = lean_ctor_get(v___x_917_, 2);
v_auxDeclNGen_921_ = lean_ctor_get(v___x_917_, 3);
v_traceState_922_ = lean_ctor_get(v___x_917_, 4);
v_messages_923_ = lean_ctor_get(v___x_917_, 6);
v_infoState_924_ = lean_ctor_get(v___x_917_, 7);
v_snapshotTasks_925_ = lean_ctor_get(v___x_917_, 8);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; 
v_unused_953_ = lean_ctor_get(v___x_917_, 5);
lean_dec(v_unused_953_);
v___x_927_ = v___x_917_;
v_isShared_928_ = v_isSharedCheck_952_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_snapshotTasks_925_);
lean_inc(v_infoState_924_);
lean_inc(v_messages_923_);
lean_inc(v_traceState_922_);
lean_inc(v_auxDeclNGen_921_);
lean_inc(v_ngen_920_);
lean_inc(v_nextMacroScope_919_);
lean_inc(v_env_918_);
lean_dec(v___x_917_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_952_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
lean_inc(v_currNamespace_916_);
v___x_929_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_918_, v_ext_908_, v_b_909_, v_kind_910_, v_currNamespace_916_);
v___x_930_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__1);
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 5, v___x_930_);
lean_ctor_set(v___x_927_, 0, v___x_929_);
v___x_932_ = v___x_927_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_nextMacroScope_919_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_ngen_920_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_auxDeclNGen_921_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v_traceState_922_);
lean_ctor_set(v_reuseFailAlloc_951_, 5, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_951_, 6, v_messages_923_);
lean_ctor_set(v_reuseFailAlloc_951_, 7, v_infoState_924_);
lean_ctor_set(v_reuseFailAlloc_951_, 8, v_snapshotTasks_925_);
v___x_932_ = v_reuseFailAlloc_951_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v_mctx_935_; lean_object* v_zetaDeltaFVarIds_936_; lean_object* v_postponed_937_; lean_object* v_diag_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_949_; 
v___x_933_ = lean_st_ref_put(v___y_913_, v___x_932_);
v___x_934_ = lean_st_ref_take(v___y_911_);
v_mctx_935_ = lean_ctor_get(v___x_934_, 0);
v_zetaDeltaFVarIds_936_ = lean_ctor_get(v___x_934_, 2);
v_postponed_937_ = lean_ctor_get(v___x_934_, 3);
v_diag_938_ = lean_ctor_get(v___x_934_, 4);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_949_ == 0)
{
lean_object* v_unused_950_; 
v_unused_950_ = lean_ctor_get(v___x_934_, 1);
lean_dec(v_unused_950_);
v___x_940_ = v___x_934_;
v_isShared_941_ = v_isSharedCheck_949_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_diag_938_);
lean_inc(v_postponed_937_);
lean_inc(v_zetaDeltaFVarIds_936_);
lean_inc(v_mctx_935_);
lean_dec(v___x_934_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_949_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_942_ = lean_box(0);
v___x_943_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___closed__2);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 1, v___x_943_);
v___x_945_ = v___x_940_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_mctx_935_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_948_, 2, v_zetaDeltaFVarIds_936_);
lean_ctor_set(v_reuseFailAlloc_948_, 3, v_postponed_937_);
lean_ctor_set(v_reuseFailAlloc_948_, 4, v_diag_938_);
v___x_945_ = v_reuseFailAlloc_948_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_st_ref_put(v___y_911_, v___x_945_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_942_);
return v___x_947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg___boxed(lean_object* v_ext_954_, lean_object* v_b_955_, lean_object* v_kind_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
uint8_t v_kind_boxed_961_; lean_object* v_res_962_; 
v_kind_boxed_961_ = lean_unbox(v_kind_956_);
v_res_962_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v_ext_954_, v_b_955_, v_kind_boxed_961_, v___y_957_, v___y_958_, v___y_959_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(lean_object* v_00_u03b1_963_, lean_object* v_00_u03b2_964_, lean_object* v_00_u03c3_965_, lean_object* v_ext_966_, lean_object* v_b_967_, uint8_t v_kind_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v_ext_966_, v_b_967_, v_kind_968_, v___y_970_, v___y_971_, v___y_972_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___boxed(lean_object* v_00_u03b1_975_, lean_object* v_00_u03b2_976_, lean_object* v_00_u03c3_977_, lean_object* v_ext_978_, lean_object* v_b_979_, lean_object* v_kind_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
uint8_t v_kind_boxed_986_; lean_object* v_res_987_; 
v_kind_boxed_986_ = lean_unbox(v_kind_980_);
v_res_987_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2(v_00_u03b1_975_, v_00_u03b2_976_, v_00_u03c3_977_, v_ext_978_, v_b_979_, v_kind_boxed_986_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(lean_object* v_msgData_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; lean_object* v_env_995_; lean_object* v___x_996_; lean_object* v_toCold_997_; lean_object* v_mctx_998_; lean_object* v_lctx_999_; lean_object* v_options_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_994_ = lean_st_ref_get(v___y_992_);
v_env_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc_ref(v_env_995_);
lean_dec(v___x_994_);
v___x_996_ = lean_st_ref_get(v___y_990_);
v_toCold_997_ = lean_ctor_get(v___y_991_, 0);
v_mctx_998_ = lean_ctor_get(v___x_996_, 0);
lean_inc_ref(v_mctx_998_);
lean_dec(v___x_996_);
v_lctx_999_ = lean_ctor_get(v___y_989_, 2);
v_options_1000_ = lean_ctor_get(v_toCold_997_, 2);
lean_inc_ref(v_options_1000_);
lean_inc_ref(v_lctx_999_);
v___x_1001_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1001_, 0, v_env_995_);
lean_ctor_set(v___x_1001_, 1, v_mctx_998_);
lean_ctor_set(v___x_1001_, 2, v_lctx_999_);
lean_ctor_set(v___x_1001_, 3, v_options_1000_);
v___x_1002_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v_msgData_988_);
v___x_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1___boxed(lean_object* v_msgData_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msgData_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(lean_object* v_msg_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_ref_1017_; lean_object* v___x_1018_; lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1027_; 
v_ref_1017_ = lean_ctor_get(v___y_1014_, 2);
v___x_1018_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1027_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1027_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1023_; lean_object* v___x_1025_; 
lean_inc(v_ref_1017_);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v_ref_1017_);
lean_ctor_set(v___x_1023_, 1, v_a_1019_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set_tag(v___x_1021_, 1);
lean_ctor_set(v___x_1021_, 0, v___x_1023_);
v___x_1025_ = v___x_1021_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg___boxed(lean_object* v_msg_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
return v_res_1034_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__0));
v___x_1037_ = l_Lean_stringToMessageData(v___x_1036_);
return v___x_1037_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__2));
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__4));
v___x_1043_ = l_Lean_stringToMessageData(v___x_1042_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(lean_object* v_declName_1044_, lean_object* v_as_1045_, size_t v_sz_1046_, size_t v_i_1047_, lean_object* v_b_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_a_1055_; uint8_t v___x_1059_; 
v___x_1059_ = lean_usize_dec_lt(v_i_1047_, v_sz_1046_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
lean_dec(v_declName_1044_);
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v_b_1048_);
return v___x_1060_;
}
else
{
lean_object* v_array_1061_; lean_object* v_start_1062_; lean_object* v_stop_1063_; uint8_t v___x_1064_; 
v_array_1061_ = lean_ctor_get(v_b_1048_, 0);
v_start_1062_ = lean_ctor_get(v_b_1048_, 1);
v_stop_1063_ = lean_ctor_get(v_b_1048_, 2);
v___x_1064_ = lean_nat_dec_lt(v_start_1062_, v_stop_1063_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; 
lean_dec(v_declName_1044_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v_b_1048_);
return v___x_1065_;
}
else
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1133_; 
lean_inc(v_stop_1063_);
lean_inc(v_start_1062_);
lean_inc_ref(v_array_1061_);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_b_1048_);
if (v_isSharedCheck_1133_ == 0)
{
lean_object* v_unused_1134_; lean_object* v_unused_1135_; lean_object* v_unused_1136_; 
v_unused_1134_ = lean_ctor_get(v_b_1048_, 2);
lean_dec(v_unused_1134_);
v_unused_1135_ = lean_ctor_get(v_b_1048_, 1);
lean_dec(v_unused_1135_);
v_unused_1136_ = lean_ctor_get(v_b_1048_, 0);
lean_dec(v_unused_1136_);
v___x_1067_ = v_b_1048_;
v_isShared_1068_ = v_isSharedCheck_1133_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v_b_1048_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1133_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1073_; 
v___x_1069_ = lean_array_fget(v_array_1061_, v_start_1062_);
v___x_1070_ = lean_unsigned_to_nat(1u);
v___x_1071_ = lean_nat_add(v_start_1062_, v___x_1070_);
lean_dec(v_start_1062_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 1, v___x_1071_);
v___x_1073_ = v___x_1067_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_array_1061_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v___x_1071_);
lean_ctor_set(v_reuseFailAlloc_1132_, 2, v_stop_1063_);
v___x_1073_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
uint8_t v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = lean_unbox(v___x_1069_);
lean_dec(v___x_1069_);
v___x_1075_ = l_Lean_BinderInfo_isExplicit(v___x_1074_);
if (v___x_1075_ == 0)
{
v_a_1055_ = v___x_1073_;
goto v___jp_1054_;
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_a_1076_ = lean_array_uget_borrowed(v_as_1045_, v_i_1047_);
v___x_1077_ = l_Lean_Expr_mvarId_x21(v_a_1076_);
v___x_1078_ = l_Lean_MVarId_getDecl(v___x_1077_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v_userName_1080_; lean_object* v_type_1081_; lean_object* v___x_1082_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v___x_1078_, 1);
v_userName_1080_ = lean_ctor_get(v_a_1079_, 0);
lean_inc(v_userName_1080_);
v_type_1081_ = lean_ctor_get(v_a_1079_, 2);
lean_inc_ref(v_type_1081_);
lean_dec(v_a_1079_);
v___x_1082_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_1081_, v___y_1050_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v___x_1084_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc_n(v_a_1083_, 2);
lean_dec_ref_known(v___x_1082_, 1);
v___x_1084_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_1083_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; uint8_t v___x_1086_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1086_ = lean_unbox(v_a_1085_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1087_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1);
v___x_1088_ = lean_unbox(v_a_1085_);
lean_dec(v_a_1085_);
lean_inc(v_declName_1044_);
v___x_1089_ = l_Lean_MessageData_ofConstName(v_declName_1044_, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__3);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Lean_MessageData_ofName(v_userName_1080_);
v___x_1094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__5);
v___x_1096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = l_Lean_indentExpr(v_a_1083_);
v___x_1098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1098_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_dec_ref_known(v___x_1099_, 1);
v_a_1055_ = v___x_1073_;
goto v___jp_1054_;
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec_ref(v___x_1073_);
lean_dec(v_declName_1044_);
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
lean_dec(v_a_1085_);
lean_dec(v_a_1083_);
lean_dec(v_userName_1080_);
v_a_1055_ = v___x_1073_;
goto v___jp_1054_;
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v_a_1083_);
lean_dec(v_userName_1080_);
lean_dec_ref(v___x_1073_);
lean_dec(v_declName_1044_);
v_a_1108_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1084_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1084_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v_userName_1080_);
lean_dec_ref(v___x_1073_);
lean_dec(v_declName_1044_);
v_a_1116_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1082_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1082_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec_ref(v___x_1073_);
lean_dec(v_declName_1044_);
v_a_1124_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1078_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1078_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
}
}
}
v___jp_1054_:
{
size_t v___x_1056_; size_t v___x_1057_; 
v___x_1056_ = ((size_t)1ULL);
v___x_1057_ = lean_usize_add(v_i_1047_, v___x_1056_);
v_i_1047_ = v___x_1057_;
v_b_1048_ = v_a_1055_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___boxed(lean_object* v_declName_1137_, lean_object* v_as_1138_, lean_object* v_sz_1139_, lean_object* v_i_1140_, lean_object* v_b_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
size_t v_sz_boxed_1147_; size_t v_i_boxed_1148_; lean_object* v_res_1149_; 
v_sz_boxed_1147_ = lean_unbox_usize(v_sz_1139_);
lean_dec(v_sz_1139_);
v_i_boxed_1148_ = lean_unbox_usize(v_i_1140_);
lean_dec(v_i_1140_);
v_res_1149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1137_, v_as_1138_, v_sz_boxed_1147_, v_i_boxed_1148_, v_b_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec_ref(v_as_1138_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(lean_object* v_ref_1150_, lean_object* v_msg_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v_toCold_1157_; lean_object* v_currRecDepth_1158_; lean_object* v_ref_1159_; uint8_t v_diag_1160_; uint8_t v_suppressElabErrors_1161_; lean_object* v_ref_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v_toCold_1157_ = lean_ctor_get(v___y_1154_, 0);
v_currRecDepth_1158_ = lean_ctor_get(v___y_1154_, 1);
v_ref_1159_ = lean_ctor_get(v___y_1154_, 2);
v_diag_1160_ = lean_ctor_get_uint8(v___y_1154_, sizeof(void*)*3);
v_suppressElabErrors_1161_ = lean_ctor_get_uint8(v___y_1154_, sizeof(void*)*3 + 1);
v_ref_1162_ = l_Lean_replaceRef(v_ref_1150_, v_ref_1159_);
lean_inc(v_currRecDepth_1158_);
lean_inc_ref(v_toCold_1157_);
v___x_1163_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1163_, 0, v_toCold_1157_);
lean_ctor_set(v___x_1163_, 1, v_currRecDepth_1158_);
lean_ctor_set(v___x_1163_, 2, v_ref_1162_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*3, v_diag_1160_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*3 + 1, v_suppressElabErrors_1161_);
v___x_1164_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1151_, v___y_1152_, v___y_1153_, v___x_1163_, v___y_1155_);
lean_dec_ref_known(v___x_1163_, 3);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_ref_1165_, lean_object* v_msg_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1165_, v_msg_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v_ref_1165_);
return v_res_1172_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1175_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_1176_ = lean_unsigned_to_nat(0u);
v___x_1177_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
lean_ctor_set(v___x_1177_, 2, v___x_1176_);
lean_ctor_set(v___x_1177_, 3, v___x_1176_);
lean_ctor_set(v___x_1177_, 4, v___x_1175_);
lean_ctor_set(v___x_1177_, 5, v___x_1175_);
lean_ctor_set(v___x_1177_, 6, v___x_1175_);
lean_ctor_set(v___x_1177_, 7, v___x_1175_);
lean_ctor_set(v___x_1177_, 8, v___x_1175_);
lean_ctor_set(v___x_1177_, 9, v___x_1175_);
lean_ctor_set(v___x_1177_, 10, v___x_1175_);
return v___x_1177_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_unsigned_to_nat(32u);
v___x_1179_ = lean_mk_empty_array_with_capacity(v___x_1178_);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
size_t v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1181_ = ((size_t)5ULL);
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = lean_unsigned_to_nat(32u);
v___x_1184_ = lean_mk_empty_array_with_capacity(v___x_1183_);
v___x_1185_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_1186_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v___x_1184_);
lean_ctor_set(v___x_1186_, 2, v___x_1182_);
lean_ctor_set(v___x_1186_, 3, v___x_1182_);
lean_ctor_set_usize(v___x_1186_, 4, v___x_1181_);
return v___x_1186_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1187_ = lean_box(1);
v___x_1188_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_1189_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__0);
v___x_1190_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_ctor_set(v___x_1190_, 1, v___x_1188_);
lean_ctor_set(v___x_1190_, 2, v___x_1187_);
return v___x_1190_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__5));
v___x_1193_ = l_Lean_stringToMessageData(v___x_1192_);
return v___x_1193_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__7));
v___x_1196_ = l_Lean_stringToMessageData(v___x_1195_);
return v___x_1196_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10(void){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__9));
v___x_1199_ = l_Lean_stringToMessageData(v___x_1198_);
return v___x_1199_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__11));
v___x_1202_ = l_Lean_stringToMessageData(v___x_1201_);
return v___x_1202_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14(void){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__13));
v___x_1205_ = l_Lean_stringToMessageData(v___x_1204_);
return v___x_1205_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__15));
v___x_1208_ = l_Lean_stringToMessageData(v___x_1207_);
return v___x_1208_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__17));
v___x_1211_ = l_Lean_stringToMessageData(v___x_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_1212_, lean_object* v_declHint_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_env_1218_; uint8_t v___x_1219_; 
v___x_1216_ = lean_box(0);
v___x_1217_ = lean_st_ref_get(v___y_1214_);
v_env_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc_ref(v_env_1218_);
lean_dec(v___x_1217_);
v___x_1219_ = l_Lean_Name_isAnonymous(v_declHint_1213_);
if (v___x_1219_ == 0)
{
uint8_t v_isExporting_1220_; 
v_isExporting_1220_ = lean_ctor_get_uint8(v_env_1218_, sizeof(void*)*8);
if (v_isExporting_1220_ == 0)
{
lean_object* v___x_1221_; 
lean_dec_ref(v_env_1218_);
lean_dec(v_declHint_1213_);
v___x_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1221_, 0, v_msg_1212_);
return v___x_1221_;
}
else
{
lean_object* v___x_1222_; uint8_t v___x_1223_; 
lean_inc_ref(v_env_1218_);
v___x_1222_ = l_Lean_Environment_setExporting(v_env_1218_, v___x_1219_);
lean_inc(v_declHint_1213_);
lean_inc_ref(v___x_1222_);
v___x_1223_ = l_Lean_Environment_contains(v___x_1222_, v_declHint_1213_, v_isExporting_1220_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; 
lean_dec_ref(v___x_1222_);
lean_dec_ref(v_env_1218_);
lean_dec(v_declHint_1213_);
v___x_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1224_, 0, v_msg_1212_);
return v___x_1224_;
}
else
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v_c_1230_; lean_object* v___x_1231_; 
v___x_1225_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4);
v___x_1227_ = l_Lean_Options_empty;
v___x_1228_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1222_);
lean_ctor_set(v___x_1228_, 1, v___x_1225_);
lean_ctor_set(v___x_1228_, 2, v___x_1226_);
lean_ctor_set(v___x_1228_, 3, v___x_1227_);
lean_inc(v_declHint_1213_);
v___x_1229_ = l_Lean_MessageData_ofConstName(v_declHint_1213_, v___x_1219_);
v_c_1230_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1230_, 0, v___x_1228_);
lean_ctor_set(v_c_1230_, 1, v___x_1229_);
v___x_1231_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1218_, v_declHint_1213_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_dec_ref(v_env_1218_);
lean_dec(v_declHint_1213_);
v___x_1232_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_1233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
lean_ctor_set(v___x_1233_, 1, v_c_1230_);
v___x_1234_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__8);
v___x_1235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = l_Lean_MessageData_note(v___x_1235_);
v___x_1237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1237_, 0, v_msg_1212_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
else
{
lean_object* v_val_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1273_; 
v_val_1239_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1241_ = v___x_1231_;
v_isShared_1242_ = v_isSharedCheck_1273_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_val_1239_);
lean_dec(v___x_1231_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1273_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v_mod_1245_; uint8_t v___x_1246_; 
v___x_1243_ = l_Lean_Environment_header(v_env_1218_);
lean_dec_ref(v_env_1218_);
v___x_1244_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1243_);
v_mod_1245_ = lean_array_get(v___x_1216_, v___x_1244_, v_val_1239_);
lean_dec(v_val_1239_);
lean_dec_ref(v___x_1244_);
v___x_1246_ = l_Lean_isPrivateName(v_declHint_1213_);
lean_dec(v_declHint_1213_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1247_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__10);
v___x_1248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
lean_ctor_set(v___x_1248_, 1, v_c_1230_);
v___x_1249_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__12);
v___x_1250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = l_Lean_MessageData_ofName(v_mod_1245_);
v___x_1252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__14);
v___x_1254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = l_Lean_MessageData_note(v___x_1254_);
v___x_1256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1256_, 0, v_msg_1212_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1256_);
v___x_1258_ = v___x_1241_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1271_; 
v___x_1260_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__6);
v___x_1261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
lean_ctor_set(v___x_1261_, 1, v_c_1230_);
v___x_1262_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__16);
v___x_1263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = l_Lean_MessageData_ofName(v_mod_1245_);
v___x_1265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__18);
v___x_1267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1265_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___x_1268_ = l_Lean_MessageData_note(v___x_1267_);
v___x_1269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1269_, 0, v_msg_1212_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1269_);
v___x_1271_ = v___x_1241_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
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
}
}
else
{
lean_object* v___x_1274_; 
lean_dec_ref(v_env_1218_);
lean_dec(v_declHint_1213_);
v___x_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1274_, 0, v_msg_1212_);
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_1275_, lean_object* v_declHint_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1275_, v_declHint_1276_, v___y_1277_);
lean_dec(v___y_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object* v_msg_1280_, lean_object* v_declHint_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1297_; 
v___x_1287_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1280_, v_declHint_1281_, v___y_1285_);
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1290_ = v___x_1287_;
v_isShared_1291_ = v_isSharedCheck_1297_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1287_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1297_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1295_; 
v___x_1292_ = l_Lean_unknownIdentifierMessageTag;
v___x_1293_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v_a_1288_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___x_1293_);
v___x_1295_ = v___x_1290_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1293_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_1298_, lean_object* v_declHint_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(v_msg_1298_, v_declHint_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_ref_1306_, lean_object* v_msg_1307_, lean_object* v_declHint_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; lean_object* v_a_1315_; lean_object* v___x_1316_; 
v___x_1314_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8(v_msg_1307_, v_declHint_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1315_);
lean_dec_ref(v___x_1314_);
v___x_1316_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1306_, v_a_1315_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_ref_1317_, lean_object* v_msg_1318_, lean_object* v_declHint_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1317_, v_msg_1318_, v_declHint_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v_ref_1317_);
return v_res_1325_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__0));
v___x_1328_ = l_Lean_stringToMessageData(v___x_1327_);
return v___x_1328_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__2));
v___x_1331_ = l_Lean_stringToMessageData(v___x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(lean_object* v_ref_1332_, lean_object* v_constName_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v___x_1339_; uint8_t v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1339_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1340_ = 0;
lean_inc(v_constName_1333_);
v___x_1341_ = l_Lean_MessageData_ofConstName(v_constName_1333_, v___x_1340_);
v___x_1342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1339_);
lean_ctor_set(v___x_1342_, 1, v___x_1341_);
v___x_1343_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1342_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1332_, v___x_1344_, v_constName_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_ref_1346_, lean_object* v_constName_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1346_, v_constName_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v_ref_1346_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(lean_object* v_constName_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_ref_1360_; lean_object* v___x_1361_; 
v_ref_1360_ = lean_ctor_get(v___y_1357_, 2);
v___x_1361_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1360_, v_constName_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg___boxed(lean_object* v_constName_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(lean_object* v_constName_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v___x_1375_; lean_object* v_env_1376_; uint8_t v___x_1377_; lean_object* v___x_1378_; 
v___x_1375_ = lean_st_ref_get(v___y_1373_);
v_env_1376_ = lean_ctor_get(v___x_1375_, 0);
lean_inc_ref(v_env_1376_);
lean_dec(v___x_1375_);
v___x_1377_ = 0;
lean_inc(v_constName_1369_);
v___x_1378_ = l_Lean_Environment_find_x3f(v_env_1376_, v_constName_1369_, v___x_1377_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
return v___x_1379_;
}
else
{
lean_object* v_val_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
lean_dec(v_constName_1369_);
v_val_1380_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1378_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_val_1380_);
lean_dec(v___x_1378_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 0);
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_val_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4___boxed(lean_object* v_constName_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_constName_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
return v_res_1394_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_addTransportDecl___closed__1(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = ((lean_object*)(l_Lean_Meta_Transport_addTransportDecl___closed__0));
v___x_1397_ = l_Lean_stringToMessageData(v___x_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object* v_declName_1398_, uint8_t v_kind_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1466_; lean_object* v___x_1503_; 
lean_inc(v_declName_1398_);
v___x_1503_ = l_Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4(v_declName_1398_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; uint8_t v_transparency_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; uint8_t v___x_1509_; uint8_t v___x_1510_; uint8_t v___x_1511_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = l_Lean_Meta_Context_config(v_a_1400_);
v_transparency_1506_ = lean_ctor_get_uint8(v___x_1505_, 9);
lean_dec_ref(v___x_1505_);
v___x_1507_ = l_Lean_ConstantInfo_type(v_a_1504_);
lean_dec(v_a_1504_);
v___x_1508_ = lean_box(0);
v___x_1509_ = 0;
v___x_1510_ = 2;
v___x_1511_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1506_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v_keyedConfig_1512_; uint8_t v_trackZetaDelta_1513_; lean_object* v_zetaDeltaSet_1514_; lean_object* v_lctx_1515_; lean_object* v_localInstances_1516_; lean_object* v_defEqCtx_x3f_1517_; lean_object* v_synthPendingDepth_1518_; lean_object* v_customCanUnfoldPredicate_x3f_1519_; uint8_t v_univApprox_1520_; uint8_t v_inTypeClassResolution_1521_; uint8_t v_cacheInferType_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v_keyedConfig_1512_ = lean_ctor_get(v_a_1400_, 0);
v_trackZetaDelta_1513_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*7);
v_zetaDeltaSet_1514_ = lean_ctor_get(v_a_1400_, 1);
v_lctx_1515_ = lean_ctor_get(v_a_1400_, 2);
v_localInstances_1516_ = lean_ctor_get(v_a_1400_, 3);
v_defEqCtx_x3f_1517_ = lean_ctor_get(v_a_1400_, 4);
v_synthPendingDepth_1518_ = lean_ctor_get(v_a_1400_, 5);
v_customCanUnfoldPredicate_x3f_1519_ = lean_ctor_get(v_a_1400_, 6);
v_univApprox_1520_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1521_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*7 + 2);
v_cacheInferType_1522_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1512_);
v___x_1523_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1510_, v_keyedConfig_1512_);
lean_inc(v_customCanUnfoldPredicate_x3f_1519_);
lean_inc(v_synthPendingDepth_1518_);
lean_inc(v_defEqCtx_x3f_1517_);
lean_inc_ref(v_localInstances_1516_);
lean_inc_ref(v_lctx_1515_);
lean_inc(v_zetaDeltaSet_1514_);
v___x_1524_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
lean_ctor_set(v___x_1524_, 1, v_zetaDeltaSet_1514_);
lean_ctor_set(v___x_1524_, 2, v_lctx_1515_);
lean_ctor_set(v___x_1524_, 3, v_localInstances_1516_);
lean_ctor_set(v___x_1524_, 4, v_defEqCtx_x3f_1517_);
lean_ctor_set(v___x_1524_, 5, v_synthPendingDepth_1518_);
lean_ctor_set(v___x_1524_, 6, v_customCanUnfoldPredicate_x3f_1519_);
lean_ctor_set_uint8(v___x_1524_, sizeof(void*)*7, v_trackZetaDelta_1513_);
lean_ctor_set_uint8(v___x_1524_, sizeof(void*)*7 + 1, v_univApprox_1520_);
lean_ctor_set_uint8(v___x_1524_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1521_);
lean_ctor_set_uint8(v___x_1524_, sizeof(void*)*7 + 3, v_cacheInferType_1522_);
v___x_1525_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1507_, v___x_1508_, v___x_1509_, v___x_1524_, v_a_1401_, v_a_1402_, v_a_1403_);
lean_dec_ref_known(v___x_1524_, 7);
v___y_1466_ = v___x_1525_;
goto v___jp_1465_;
}
else
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1507_, v___x_1508_, v___x_1509_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
v___y_1466_ = v___x_1526_;
goto v___jp_1465_;
}
}
else
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1534_; 
lean_dec(v_declName_1398_);
v_a_1527_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1529_ = v___x_1503_;
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1503_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1532_; 
if (v_isShared_1530_ == 0)
{
v___x_1532_ = v___x_1529_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1527_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
v___jp_1405_:
{
if (lean_obj_tag(v___y_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v_a_1411_ = lean_ctor_get(v___y_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___y_1410_, 1);
v___x_1412_ = l_Lean_Meta_Transport_transportExt;
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v_declName_1398_);
lean_ctor_set(v___x_1413_, 1, v_a_1411_);
v___x_1414_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Transport_addTransportDecl_spec__2___redArg(v___x_1412_, v___x_1413_, v_kind_1399_, v___y_1409_, v___y_1407_, v___y_1408_);
return v___x_1414_;
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v_declName_1398_);
v_a_1415_ = lean_ctor_get(v___y_1410_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___y_1410_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___y_1410_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___y_1410_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
v___jp_1423_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; size_t v_sz_1434_; size_t v___x_1435_; lean_object* v___x_1436_; 
v___x_1431_ = lean_unsigned_to_nat(0u);
v___x_1432_ = lean_array_get_size(v___y_1425_);
v___x_1433_ = l_Array_toSubarray___redArg(v___y_1425_, v___x_1431_, v___x_1432_);
v_sz_1434_ = lean_array_size(v___y_1426_);
v___x_1435_ = ((size_t)0ULL);
lean_inc(v_declName_1398_);
v___x_1436_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3(v_declName_1398_, v___y_1426_, v_sz_1434_, v___x_1435_, v___x_1433_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec_ref(v___y_1426_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v___x_1437_; uint8_t v_transparency_1438_; uint8_t v___x_1439_; uint8_t v___x_1440_; uint8_t v___x_1441_; 
lean_dec_ref_known(v___x_1436_, 1);
v___x_1437_ = l_Lean_Meta_Context_config(v___y_1427_);
v_transparency_1438_ = lean_ctor_get_uint8(v___x_1437_, 9);
lean_dec_ref(v___x_1437_);
v___x_1439_ = 0;
v___x_1440_ = 2;
v___x_1441_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1438_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v_keyedConfig_1442_; uint8_t v_trackZetaDelta_1443_; lean_object* v_zetaDeltaSet_1444_; lean_object* v_lctx_1445_; lean_object* v_localInstances_1446_; lean_object* v_defEqCtx_x3f_1447_; lean_object* v_synthPendingDepth_1448_; lean_object* v_customCanUnfoldPredicate_x3f_1449_; uint8_t v_univApprox_1450_; uint8_t v_inTypeClassResolution_1451_; uint8_t v_cacheInferType_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_keyedConfig_1442_ = lean_ctor_get(v___y_1427_, 0);
v_trackZetaDelta_1443_ = lean_ctor_get_uint8(v___y_1427_, sizeof(void*)*7);
v_zetaDeltaSet_1444_ = lean_ctor_get(v___y_1427_, 1);
v_lctx_1445_ = lean_ctor_get(v___y_1427_, 2);
v_localInstances_1446_ = lean_ctor_get(v___y_1427_, 3);
v_defEqCtx_x3f_1447_ = lean_ctor_get(v___y_1427_, 4);
v_synthPendingDepth_1448_ = lean_ctor_get(v___y_1427_, 5);
v_customCanUnfoldPredicate_x3f_1449_ = lean_ctor_get(v___y_1427_, 6);
v_univApprox_1450_ = lean_ctor_get_uint8(v___y_1427_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1451_ = lean_ctor_get_uint8(v___y_1427_, sizeof(void*)*7 + 2);
v_cacheInferType_1452_ = lean_ctor_get_uint8(v___y_1427_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1442_);
v___x_1453_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1440_, v_keyedConfig_1442_);
lean_inc(v_customCanUnfoldPredicate_x3f_1449_);
lean_inc(v_synthPendingDepth_1448_);
lean_inc(v_defEqCtx_x3f_1447_);
lean_inc_ref(v_localInstances_1446_);
lean_inc_ref(v_lctx_1445_);
lean_inc(v_zetaDeltaSet_1444_);
v___x_1454_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
lean_ctor_set(v___x_1454_, 1, v_zetaDeltaSet_1444_);
lean_ctor_set(v___x_1454_, 2, v_lctx_1445_);
lean_ctor_set(v___x_1454_, 3, v_localInstances_1446_);
lean_ctor_set(v___x_1454_, 4, v_defEqCtx_x3f_1447_);
lean_ctor_set(v___x_1454_, 5, v_synthPendingDepth_1448_);
lean_ctor_set(v___x_1454_, 6, v_customCanUnfoldPredicate_x3f_1449_);
lean_ctor_set_uint8(v___x_1454_, sizeof(void*)*7, v_trackZetaDelta_1443_);
lean_ctor_set_uint8(v___x_1454_, sizeof(void*)*7 + 1, v_univApprox_1450_);
lean_ctor_set_uint8(v___x_1454_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1451_);
lean_ctor_set_uint8(v___x_1454_, sizeof(void*)*7 + 3, v_cacheInferType_1452_);
v___x_1455_ = l_Lean_Meta_DiscrTree_mkPath(v___y_1424_, v___x_1439_, v___x_1454_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec_ref_known(v___x_1454_, 7);
v___y_1406_ = v___y_1427_;
v___y_1407_ = v___y_1429_;
v___y_1408_ = v___y_1430_;
v___y_1409_ = v___y_1428_;
v___y_1410_ = v___x_1455_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lean_Meta_DiscrTree_mkPath(v___y_1424_, v___x_1439_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
v___y_1406_ = v___y_1427_;
v___y_1407_ = v___y_1429_;
v___y_1408_ = v___y_1430_;
v___y_1409_ = v___y_1428_;
v___y_1410_ = v___x_1456_;
goto v___jp_1405_;
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec_ref(v___y_1424_);
lean_dec(v_declName_1398_);
v_a_1457_ = lean_ctor_get(v___x_1436_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1436_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1436_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1436_);
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
v___jp_1465_:
{
if (lean_obj_tag(v___y_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v_snd_1468_; lean_object* v_fst_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1494_; 
v_a_1467_ = lean_ctor_get(v___y_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___y_1466_, 1);
v_snd_1468_ = lean_ctor_get(v_a_1467_, 1);
v_fst_1469_ = lean_ctor_get(v_a_1467_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_a_1467_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1471_ = v_a_1467_;
v_isShared_1472_ = v_isSharedCheck_1494_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_snd_1468_);
lean_inc(v_fst_1469_);
lean_dec(v_a_1467_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1494_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_fst_1473_; lean_object* v_snd_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1493_; 
v_fst_1473_ = lean_ctor_get(v_snd_1468_, 0);
v_snd_1474_ = lean_ctor_get(v_snd_1468_, 1);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_snd_1468_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1476_ = v_snd_1468_;
v_isShared_1477_ = v_isSharedCheck_1493_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_snd_1474_);
lean_inc(v_fst_1473_);
lean_dec(v_snd_1468_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1493_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v___x_1478_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_1479_ = lean_unsigned_to_nat(2u);
v___x_1480_ = l_Lean_Expr_isAppOfArity(v_snd_1474_, v___x_1478_, v___x_1479_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1484_; 
lean_dec(v_fst_1473_);
lean_dec(v_fst_1469_);
v___x_1481_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Transport_addTransportDecl_spec__3___closed__1);
v___x_1482_ = l_Lean_MessageData_ofConstName(v_declName_1398_, v___x_1480_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set_tag(v___x_1476_, 7);
lean_ctor_set(v___x_1476_, 1, v___x_1482_);
lean_ctor_set(v___x_1476_, 0, v___x_1481_);
v___x_1484_ = v___x_1476_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v___x_1482_);
v___x_1484_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1485_ = lean_obj_once(&l_Lean_Meta_Transport_addTransportDecl___closed__1, &l_Lean_Meta_Transport_addTransportDecl___closed__1_once, _init_l_Lean_Meta_Transport_addTransportDecl___closed__1);
if (v_isShared_1472_ == 0)
{
lean_ctor_set_tag(v___x_1471_, 7);
lean_ctor_set(v___x_1471_, 1, v___x_1485_);
lean_ctor_set(v___x_1471_, 0, v___x_1484_);
v___x_1487_ = v___x_1471_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1488_ = l_Lean_indentExpr(v_snd_1474_);
v___x_1489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1487_);
lean_ctor_set(v___x_1489_, 1, v___x_1488_);
v___x_1490_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_1489_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
return v___x_1490_;
}
}
}
else
{
lean_del_object(v___x_1476_);
lean_del_object(v___x_1471_);
v___y_1424_ = v_snd_1474_;
v___y_1425_ = v_fst_1473_;
v___y_1426_ = v_fst_1469_;
v___y_1427_ = v_a_1400_;
v___y_1428_ = v_a_1401_;
v___y_1429_ = v_a_1402_;
v___y_1430_ = v_a_1403_;
goto v___jp_1423_;
}
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec(v_declName_1398_);
v_a_1495_ = lean_ctor_get(v___y_1466_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___y_1466_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___y_1466_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___y_1466_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_addTransportDecl___boxed(lean_object* v_declName_1535_, lean_object* v_kind_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_){
_start:
{
uint8_t v_kind_boxed_1542_; lean_object* v_res_1543_; 
v_kind_boxed_1542_ = lean_unbox(v_kind_1536_);
v_res_1543_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1535_, v_kind_boxed_1542_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_);
lean_dec(v_a_1540_);
lean_dec_ref(v_a_1539_);
lean_dec(v_a_1538_);
lean_dec_ref(v_a_1537_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(lean_object* v_00_u03b1_1544_, lean_object* v_msg_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v_msg_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___boxed(lean_object* v_00_u03b1_1552_, lean_object* v_msg_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1(v_00_u03b1_1552_, v_msg_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(lean_object* v_00_u03b1_1560_, lean_object* v_constName_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___redArg(v_constName_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5___boxed(lean_object* v_00_u03b1_1568_, lean_object* v_constName_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5(v_00_u03b1_1568_, v_constName_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(lean_object* v_00_u03b1_1576_, lean_object* v_ref_1577_, lean_object* v_constName_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v___x_1584_; 
v___x_1584_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg(v_ref_1577_, v_constName_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1585_, lean_object* v_ref_1586_, lean_object* v_constName_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6(v_00_u03b1_1585_, v_ref_1586_, v_constName_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v_ref_1586_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b1_1594_, lean_object* v_ref_1595_, lean_object* v_msg_1596_, lean_object* v_declHint_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___redArg(v_ref_1595_, v_msg_1596_, v_declHint_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b1_1604_, lean_object* v_ref_1605_, lean_object* v_msg_1606_, lean_object* v_declHint_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7(v_00_u03b1_1604_, v_ref_1605_, v_msg_1606_, v_declHint_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v_ref_1605_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(lean_object* v_msg_1614_, lean_object* v_declHint_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg(v_msg_1614_, v_declHint_1615_, v___y_1619_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_1622_, lean_object* v_declHint_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9(v_msg_1622_, v_declHint_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_1630_, lean_object* v_ref_1631_, lean_object* v_msg_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___redArg(v_ref_1631_, v_msg_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1639_, lean_object* v_ref_1640_, lean_object* v_msg_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__9(v_00_u03b1_1639_, v_ref_1640_, v_msg_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v_ref_1640_);
return v_res_1647_;
}
}
static uint64_t _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1654_; uint64_t v___x_1655_; 
v___x_1654_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1655_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1654_);
return v___x_1655_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1656_ = lean_uint64_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1657_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1658_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
lean_ctor_set_uint64(v___x_1658_, sizeof(void*)*1, v___x_1656_);
return v___x_1658_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__5_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2_);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1662_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
lean_ctor_set(v___x_1662_, 2, v___x_1661_);
lean_ctor_set(v___x_1662_, 3, v___x_1661_);
lean_ctor_set(v___x_1662_, 4, v___x_1661_);
lean_ctor_set(v___x_1662_, 5, v___x_1661_);
return v___x_1662_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
lean_ctor_set(v___x_1664_, 2, v___x_1663_);
lean_ctor_set(v___x_1664_, 3, v___x_1663_);
lean_ctor_set(v___x_1664_, 4, v___x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1665_, lean_object* v___x_1666_, lean_object* v_declName_1667_, lean_object* v_x_1668_, uint8_t v_kind_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
uint8_t v___x_1673_; uint8_t v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; size_t v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1673_ = 0;
v___x_1674_ = 1;
v___x_1675_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1676_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1677_ = lean_unsigned_to_nat(32u);
v___x_1678_ = lean_mk_empty_array_with_capacity(v___x_1677_);
v___x_1679_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__2);
v___x_1680_ = ((size_t)5ULL);
lean_inc_n(v___x_1665_, 6);
v___x_1681_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1678_);
lean_ctor_set(v___x_1681_, 2, v___x_1665_);
lean_ctor_set(v___x_1681_, 3, v___x_1665_);
lean_ctor_set_usize(v___x_1681_, 4, v___x_1680_);
v___x_1682_ = lean_box(1);
lean_inc_ref(v___x_1681_);
v___x_1683_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1676_);
lean_ctor_set(v___x_1683_, 1, v___x_1681_);
lean_ctor_set(v___x_1683_, 2, v___x_1682_);
v___x_1684_ = lean_mk_empty_array_with_capacity(v___x_1665_);
v___x_1685_ = lean_box(0);
lean_inc(v___x_1666_);
v___x_1686_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1686_, 0, v___x_1675_);
lean_ctor_set(v___x_1686_, 1, v___x_1666_);
lean_ctor_set(v___x_1686_, 2, v___x_1683_);
lean_ctor_set(v___x_1686_, 3, v___x_1684_);
lean_ctor_set(v___x_1686_, 4, v___x_1685_);
lean_ctor_set(v___x_1686_, 5, v___x_1665_);
lean_ctor_set(v___x_1686_, 6, v___x_1685_);
lean_ctor_set_uint8(v___x_1686_, sizeof(void*)*7, v___x_1673_);
lean_ctor_set_uint8(v___x_1686_, sizeof(void*)*7 + 1, v___x_1673_);
lean_ctor_set_uint8(v___x_1686_, sizeof(void*)*7 + 2, v___x_1673_);
lean_ctor_set_uint8(v___x_1686_, sizeof(void*)*7 + 3, v___x_1674_);
v___x_1687_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1665_);
lean_ctor_set(v___x_1687_, 1, v___x_1665_);
lean_ctor_set(v___x_1687_, 2, v___x_1665_);
lean_ctor_set(v___x_1687_, 3, v___x_1665_);
lean_ctor_set(v___x_1687_, 4, v___x_1676_);
lean_ctor_set(v___x_1687_, 5, v___x_1676_);
lean_ctor_set(v___x_1687_, 6, v___x_1676_);
lean_ctor_set(v___x_1687_, 7, v___x_1676_);
lean_ctor_set(v___x_1687_, 8, v___x_1676_);
lean_ctor_set(v___x_1687_, 9, v___x_1676_);
lean_ctor_set(v___x_1687_, 10, v___x_1676_);
v___x_1688_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__4_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1689_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0___closed__5_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1687_);
lean_ctor_set(v___x_1690_, 1, v___x_1688_);
lean_ctor_set(v___x_1690_, 2, v___x_1666_);
lean_ctor_set(v___x_1690_, 3, v___x_1681_);
lean_ctor_set(v___x_1690_, 4, v___x_1689_);
v___x_1691_ = lean_st_mk_ref(v___x_1690_);
v___x_1692_ = l_Lean_Meta_Transport_addTransportDecl(v_declName_1667_, v_kind_1669_, v___x_1686_, v___x_1691_, v___y_1670_, v___y_1671_);
lean_dec_ref_known(v___x_1686_, 7);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1701_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1701_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1701_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1697_; lean_object* v___x_1699_; 
v___x_1697_ = lean_st_ref_get(v___x_1691_);
lean_dec(v___x_1691_);
lean_dec(v___x_1697_);
if (v_isShared_1696_ == 0)
{
v___x_1699_ = v___x_1695_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1693_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
else
{
lean_dec(v___x_1691_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1702_, lean_object* v___x_1703_, lean_object* v_declName_1704_, lean_object* v_x_1705_, lean_object* v_kind_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
uint8_t v_kind_boxed_1710_; lean_object* v_res_1711_; 
v_kind_boxed_1710_ = lean_unbox(v_kind_1706_);
v_res_1711_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1702_, v___x_1703_, v_declName_1704_, v_x_1705_, v_kind_boxed_1710_, v___y_1707_, v___y_1708_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v_x_1705_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; lean_object* v_toCold_1717_; lean_object* v_env_1718_; lean_object* v_options_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1716_ = lean_st_ref_get(v___y_1714_);
v_toCold_1717_ = lean_ctor_get(v___y_1713_, 0);
v_env_1718_ = lean_ctor_get(v___x_1716_, 0);
lean_inc_ref(v_env_1718_);
lean_dec(v___x_1716_);
v_options_1719_ = lean_ctor_get(v_toCold_1717_, 2);
v___x_1720_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_1721_ = lean_unsigned_to_nat(32u);
v___x_1722_ = lean_mk_empty_array_with_capacity(v___x_1721_);
lean_dec_ref(v___x_1722_);
v___x_1723_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6_spec__7_spec__8_spec__9___redArg___closed__4);
lean_inc_ref(v_options_1719_);
v___x_1724_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1724_, 0, v_env_1718_);
lean_ctor_set(v___x_1724_, 1, v___x_1720_);
lean_ctor_set(v___x_1724_, 2, v___x_1723_);
lean_ctor_set(v___x_1724_, 3, v_options_1719_);
v___x_1725_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
lean_ctor_set(v___x_1725_, 1, v_msgData_1712_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_ref_1736_; lean_object* v___x_1737_; lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1746_; 
v_ref_1736_ = lean_ctor_get(v___y_1733_, 2);
v___x_1737_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0_spec__0(v_msg_1732_, v___y_1733_, v___y_1734_);
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1737_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1744_; 
lean_inc(v_ref_1736_);
v___x_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1742_, 0, v_ref_1736_);
lean_ctor_set(v___x_1742_, 1, v_a_1738_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set_tag(v___x_1740_, 1);
lean_ctor_set(v___x_1740_, 0, v___x_1742_);
v___x_1744_ = v___x_1740_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1747_, v___y_1748_, v___y_1749_);
lean_dec(v___y_1749_);
lean_dec_ref(v___y_1748_);
return v_res_1751_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1754_ = l_Lean_stringToMessageData(v___x_1753_);
return v___x_1754_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__2_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1757_ = l_Lean_stringToMessageData(v___x_1756_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(lean_object* v___x_1758_, lean_object* v_decl_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1763_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1764_ = l_Lean_MessageData_ofName(v___x_1758_);
v___x_1765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1763_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1___closed__3_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1765_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v___x_1767_, v___y_1760_, v___y_1761_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v___x_1769_, lean_object* v_decl_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___lam__1_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(v___x_1769_, v_decl_1770_, v___y_1771_, v___y_1772_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v_decl_1770_);
return v_res_1774_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_unsigned_to_nat(3239442948u);
v___x_1797_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__6_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1798_ = l_Lean_Name_num___override(v___x_1797_, v___x_1796_);
return v___x_1798_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1800_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__7_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1801_ = l_Lean_Name_str___override(v___x_1800_, v___x_1799_);
return v___x_1801_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_1803_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__8_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1804_ = l_Lean_Name_str___override(v___x_1803_, v___x_1802_);
return v___x_1804_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = lean_unsigned_to_nat(2u);
v___x_1806_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__9_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1807_ = l_Lean_Name_num___override(v___x_1806_, v___x_1805_);
return v___x_1807_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1813_ = 0;
v___x_1814_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__13_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1815_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__11_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1816_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__10_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1817_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
lean_ctor_set(v___x_1817_, 1, v___x_1815_);
lean_ctor_set(v___x_1817_, 2, v___x_1814_);
lean_ctor_set_uint8(v___x_1817_, sizeof(void*)*3, v___x_1813_);
return v___x_1817_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1818_; lean_object* v___f_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___f_1818_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__12_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___f_1819_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__0_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_));
v___x_1820_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__14_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1820_);
lean_ctor_set(v___x_1821_, 1, v___f_1819_);
lean_ctor_set(v___x_1821_, 2, v___f_1818_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1823_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn___closed__15_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_);
v___x_1824_ = l_Lean_registerBuiltinAttribute(v___x_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2____boxed(lean_object* v_a_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2_();
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1827_, lean_object* v_msg_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___redArg(v_msg_1828_, v___y_1829_, v___y_1830_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1833_, lean_object* v_msg_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lean_throwError___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3239442948____hygCtx___hyg_2__spec__0(v_00_u03b1_1833_, v_msg_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(lean_object* v_k_1839_, lean_object* v_as_1840_, size_t v_sz_1841_, size_t v_i_1842_, lean_object* v_b_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
uint8_t v___x_1849_; 
v___x_1849_ = lean_usize_dec_lt(v_i_1842_, v_sz_1841_);
if (v___x_1849_ == 0)
{
lean_object* v___x_1850_; 
lean_dec_ref(v_k_1839_);
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v_b_1843_);
return v___x_1850_;
}
else
{
lean_object* v_snd_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1910_; 
v_snd_1851_ = lean_ctor_get(v_b_1843_, 1);
v_isSharedCheck_1910_ = !lean_is_exclusive(v_b_1843_);
if (v_isSharedCheck_1910_ == 0)
{
lean_object* v_unused_1911_; 
v_unused_1911_ = lean_ctor_get(v_b_1843_, 0);
lean_dec(v_unused_1911_);
v___x_1853_ = v_b_1843_;
v_isShared_1854_ = v_isSharedCheck_1910_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_snd_1851_);
lean_dec(v_b_1843_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1910_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v_a_1856_; lean_object* v___x_1857_; 
v___x_1855_ = lean_box(0);
v_a_1856_ = lean_array_uget_borrowed(v_as_1840_, v_i_1842_);
v___x_1857_ = l_Lean_Meta_saveState___redArg(v___y_1845_, v___y_1847_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1859_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref_known(v___x_1857_, 1);
lean_inc_ref(v_k_1839_);
lean_inc(v___y_1847_);
lean_inc_ref(v___y_1846_);
lean_inc(v___y_1845_);
lean_inc_ref(v___y_1844_);
lean_inc(v_a_1856_);
v___x_1859_ = lean_apply_6(v_k_1839_, v_a_1856_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, lean_box(0));
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1872_; 
lean_dec(v_a_1858_);
lean_dec_ref(v_k_1839_);
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1872_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1872_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v___x_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1864_, 0, v_a_1860_);
v___x_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1865_);
v___x_1867_ = v___x_1853_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_snd_1851_);
v___x_1867_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1867_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_snd_1851_);
v_a_1873_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1875_ = v___x_1859_;
v_isShared_1876_ = v_isSharedCheck_1901_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1859_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1901_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
uint8_t v___y_1878_; uint8_t v___x_1899_; 
v___x_1899_ = l_Lean_Exception_isInterrupt(v_a_1873_);
if (v___x_1899_ == 0)
{
uint8_t v___x_1900_; 
lean_inc(v_a_1873_);
v___x_1900_ = l_Lean_Exception_isRuntime(v_a_1873_);
v___y_1878_ = v___x_1900_;
goto v___jp_1877_;
}
else
{
v___y_1878_ = v___x_1899_;
goto v___jp_1877_;
}
v___jp_1877_:
{
if (v___y_1878_ == 0)
{
lean_object* v___x_1879_; 
lean_del_object(v___x_1875_);
v___x_1879_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1858_, v___y_1845_, v___y_1847_);
lean_dec(v_a_1858_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1883_; 
lean_dec_ref_known(v___x_1879_, 1);
v___x_1880_ = l_Lean_Exception_toMessageData(v_a_1873_);
v___x_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 1, v___x_1881_);
lean_ctor_set(v___x_1853_, 0, v___x_1855_);
v___x_1883_ = v___x_1853_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1855_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
size_t v___x_1884_; size_t v___x_1885_; 
v___x_1884_ = ((size_t)1ULL);
v___x_1885_ = lean_usize_add(v_i_1842_, v___x_1884_);
v_i_1842_ = v___x_1885_;
v_b_1843_ = v___x_1883_;
goto _start;
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
lean_dec(v_a_1873_);
lean_del_object(v___x_1853_);
lean_dec_ref(v_k_1839_);
v_a_1888_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1879_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1879_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
else
{
lean_object* v___x_1897_; 
lean_dec(v_a_1858_);
lean_del_object(v___x_1853_);
lean_dec_ref(v_k_1839_);
if (v_isShared_1876_ == 0)
{
v___x_1897_ = v___x_1875_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1873_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_del_object(v___x_1853_);
lean_dec(v_snd_1851_);
lean_dec_ref(v_k_1839_);
v_a_1902_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1857_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1857_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0___boxed(lean_object* v_k_1912_, lean_object* v_as_1913_, lean_object* v_sz_1914_, lean_object* v_i_1915_, lean_object* v_b_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
size_t v_sz_boxed_1922_; size_t v_i_boxed_1923_; lean_object* v_res_1924_; 
v_sz_boxed_1922_ = lean_unbox_usize(v_sz_1914_);
lean_dec(v_sz_1914_);
v_i_boxed_1923_ = lean_unbox_usize(v_i_1915_);
lean_dec(v_i_1915_);
v_res_1924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_1912_, v_as_1913_, v_sz_boxed_1922_, v_i_boxed_1923_, v_b_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec_ref(v_as_1913_);
return v_res_1924_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__1));
v___x_1929_ = l_Lean_stringToMessageData(v___x_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(lean_object* v_candidates_1930_, lean_object* v_k_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v___x_1937_; size_t v_sz_1938_; size_t v___x_1939_; lean_object* v___x_1940_; 
v___x_1937_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__0));
v_sz_1938_ = lean_array_size(v_candidates_1930_);
v___x_1939_ = ((size_t)0ULL);
v___x_1940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess_spec__0(v_k_1931_, v_candidates_1930_, v_sz_1938_, v___x_1939_, v___x_1937_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1963_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_1963_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1963_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___y_1946_; lean_object* v_fst_1951_; 
v_fst_1951_ = lean_ctor_get(v_a_1941_, 0);
lean_inc(v_fst_1951_);
if (lean_obj_tag(v_fst_1951_) == 0)
{
lean_object* v_snd_1952_; 
v_snd_1952_ = lean_ctor_get(v_a_1941_, 1);
lean_inc(v_snd_1952_);
lean_dec(v_a_1941_);
if (lean_obj_tag(v_snd_1952_) == 0)
{
lean_object* v___x_1953_; 
v___x_1953_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___closed__2);
v___y_1946_ = v___x_1953_;
goto v___jp_1945_;
}
else
{
lean_object* v_val_1954_; 
v_val_1954_ = lean_ctor_get(v_snd_1952_, 0);
lean_inc(v_val_1954_);
lean_dec_ref_known(v_snd_1952_, 1);
v___y_1946_ = v_val_1954_;
goto v___jp_1945_;
}
}
else
{
lean_object* v_val_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
lean_del_object(v___x_1943_);
lean_dec(v_a_1941_);
v_val_1955_ = lean_ctor_get(v_fst_1951_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v_fst_1951_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v_fst_1951_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_val_1955_);
lean_dec(v_fst_1951_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 0);
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_val_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
v___jp_1945_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1947_, 0, v___y_1946_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1947_);
v___x_1949_ = v___x_1943_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
v_a_1964_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1940_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1940_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess___boxed(lean_object* v_candidates_1972_, lean_object* v_k_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_candidates_1972_, v_k_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
lean_dec(v_a_1977_);
lean_dec_ref(v_a_1976_);
lean_dec(v_a_1975_);
lean_dec_ref(v_a_1974_);
lean_dec_ref(v_candidates_1972_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(lean_object* v_x_1980_, lean_object* v_x_1981_, lean_object* v_x_1982_, lean_object* v_x_1983_){
_start:
{
lean_object* v_ks_1984_; lean_object* v_vs_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2009_; 
v_ks_1984_ = lean_ctor_get(v_x_1980_, 0);
v_vs_1985_ = lean_ctor_get(v_x_1980_, 1);
v_isSharedCheck_2009_ = !lean_is_exclusive(v_x_1980_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_1987_ = v_x_1980_;
v_isShared_1988_ = v_isSharedCheck_2009_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_vs_1985_);
lean_inc(v_ks_1984_);
lean_dec(v_x_1980_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2009_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1989_ = lean_array_get_size(v_ks_1984_);
v___x_1990_ = lean_nat_dec_lt(v_x_1981_, v___x_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
lean_dec(v_x_1981_);
v___x_1991_ = lean_array_push(v_ks_1984_, v_x_1982_);
v___x_1992_ = lean_array_push(v_vs_1985_, v_x_1983_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v___x_1992_);
lean_ctor_set(v___x_1987_, 0, v___x_1991_);
v___x_1994_ = v___x_1987_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
else
{
lean_object* v_k_x27_1996_; uint8_t v___x_1997_; 
v_k_x27_1996_ = lean_array_fget_borrowed(v_ks_1984_, v_x_1981_);
v___x_1997_ = l_Lean_instBEqMVarId_beq(v_x_1982_, v_k_x27_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1999_; 
if (v_isShared_1988_ == 0)
{
v___x_1999_ = v___x_1987_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_ks_1984_);
lean_ctor_set(v_reuseFailAlloc_2003_, 1, v_vs_1985_);
v___x_1999_ = v_reuseFailAlloc_2003_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_2000_ = lean_unsigned_to_nat(1u);
v___x_2001_ = lean_nat_add(v_x_1981_, v___x_2000_);
lean_dec(v_x_1981_);
v_x_1980_ = v___x_1999_;
v_x_1981_ = v___x_2001_;
goto _start;
}
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2004_ = lean_array_fset(v_ks_1984_, v_x_1981_, v_x_1982_);
v___x_2005_ = lean_array_fset(v_vs_1985_, v_x_1981_, v_x_1983_);
lean_dec(v_x_1981_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v___x_2005_);
lean_ctor_set(v___x_1987_, 0, v___x_2004_);
v___x_2007_ = v___x_1987_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v___x_2005_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(lean_object* v_n_2010_, lean_object* v_k_2011_, lean_object* v_v_2012_){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = lean_unsigned_to_nat(0u);
v___x_2014_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_n_2010_, v___x_2013_, v_k_2011_, v_v_2012_);
return v___x_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(lean_object* v_x_2015_, size_t v_x_2016_, size_t v_x_2017_, lean_object* v_x_2018_, lean_object* v_x_2019_){
_start:
{
if (lean_obj_tag(v_x_2015_) == 0)
{
lean_object* v_es_2020_; size_t v___x_2021_; size_t v___x_2022_; lean_object* v_j_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v_es_2020_ = lean_ctor_get(v_x_2015_, 0);
v___x_2021_ = ((size_t)31ULL);
v___x_2022_ = lean_usize_land(v_x_2016_, v___x_2021_);
v_j_2023_ = lean_usize_to_nat(v___x_2022_);
v___x_2024_ = lean_array_get_size(v_es_2020_);
v___x_2025_ = lean_nat_dec_lt(v_j_2023_, v___x_2024_);
if (v___x_2025_ == 0)
{
lean_dec(v_j_2023_);
lean_dec(v_x_2019_);
lean_dec(v_x_2018_);
return v_x_2015_;
}
else
{
lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2064_; 
lean_inc_ref(v_es_2020_);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_x_2015_);
if (v_isSharedCheck_2064_ == 0)
{
lean_object* v_unused_2065_; 
v_unused_2065_ = lean_ctor_get(v_x_2015_, 0);
lean_dec(v_unused_2065_);
v___x_2027_ = v_x_2015_;
v_isShared_2028_ = v_isSharedCheck_2064_;
goto v_resetjp_2026_;
}
else
{
lean_dec(v_x_2015_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2064_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_v_2029_; lean_object* v___x_2030_; lean_object* v_xs_x27_2031_; lean_object* v___y_2033_; 
v_v_2029_ = lean_array_fget(v_es_2020_, v_j_2023_);
v___x_2030_ = lean_box(0);
v_xs_x27_2031_ = lean_array_fset(v_es_2020_, v_j_2023_, v___x_2030_);
switch(lean_obj_tag(v_v_2029_))
{
case 0:
{
lean_object* v_key_2038_; lean_object* v_val_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2049_; 
v_key_2038_ = lean_ctor_get(v_v_2029_, 0);
v_val_2039_ = lean_ctor_get(v_v_2029_, 1);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_v_2029_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2041_ = v_v_2029_;
v_isShared_2042_ = v_isSharedCheck_2049_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_val_2039_);
lean_inc(v_key_2038_);
lean_dec(v_v_2029_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2049_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
uint8_t v___x_2043_; 
v___x_2043_ = l_Lean_instBEqMVarId_beq(v_x_2018_, v_key_2038_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_del_object(v___x_2041_);
v___x_2044_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2038_, v_val_2039_, v_x_2018_, v_x_2019_);
v___x_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
v___y_2033_ = v___x_2045_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2047_; 
lean_dec(v_val_2039_);
lean_dec(v_key_2038_);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 1, v_x_2019_);
lean_ctor_set(v___x_2041_, 0, v_x_2018_);
v___x_2047_ = v___x_2041_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_x_2018_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_x_2019_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
v___y_2033_ = v___x_2047_;
goto v___jp_2032_;
}
}
}
}
case 1:
{
lean_object* v_node_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2062_; 
v_node_2050_ = lean_ctor_get(v_v_2029_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v_v_2029_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2052_ = v_v_2029_;
v_isShared_2053_ = v_isSharedCheck_2062_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_node_2050_);
lean_dec(v_v_2029_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2062_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
size_t v___x_2054_; size_t v___x_2055_; size_t v___x_2056_; size_t v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2054_ = ((size_t)5ULL);
v___x_2055_ = lean_usize_shift_right(v_x_2016_, v___x_2054_);
v___x_2056_ = ((size_t)1ULL);
v___x_2057_ = lean_usize_add(v_x_2017_, v___x_2056_);
v___x_2058_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_node_2050_, v___x_2055_, v___x_2057_, v_x_2018_, v_x_2019_);
if (v_isShared_2053_ == 0)
{
lean_ctor_set(v___x_2052_, 0, v___x_2058_);
v___x_2060_ = v___x_2052_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
v___y_2033_ = v___x_2060_;
goto v___jp_2032_;
}
}
}
default: 
{
lean_object* v___x_2063_; 
v___x_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2063_, 0, v_x_2018_);
lean_ctor_set(v___x_2063_, 1, v_x_2019_);
v___y_2033_ = v___x_2063_;
goto v___jp_2032_;
}
}
v___jp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2034_ = lean_array_fset(v_xs_x27_2031_, v_j_2023_, v___y_2033_);
lean_dec(v_j_2023_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2034_);
v___x_2036_ = v___x_2027_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
else
{
lean_object* v_ks_2066_; lean_object* v_vs_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2085_; 
v_ks_2066_ = lean_ctor_get(v_x_2015_, 0);
v_vs_2067_ = lean_ctor_get(v_x_2015_, 1);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_x_2015_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2069_ = v_x_2015_;
v_isShared_2070_ = v_isSharedCheck_2085_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_vs_2067_);
lean_inc(v_ks_2066_);
lean_dec(v_x_2015_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2085_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_ks_2066_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v_vs_2067_);
v___x_2072_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v_newNode_2073_; size_t v___x_2074_; uint8_t v___x_2075_; 
v_newNode_2073_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v___x_2072_, v_x_2018_, v_x_2019_);
v___x_2074_ = ((size_t)7ULL);
v___x_2075_ = lean_usize_dec_le(v___x_2074_, v_x_2017_);
if (v___x_2075_ == 0)
{
lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; 
v___x_2076_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2073_);
v___x_2077_ = lean_unsigned_to_nat(4u);
v___x_2078_ = lean_nat_dec_lt(v___x_2076_, v___x_2077_);
lean_dec(v___x_2076_);
if (v___x_2078_ == 0)
{
lean_object* v_ks_2079_; lean_object* v_vs_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v_ks_2079_ = lean_ctor_get(v_newNode_2073_, 0);
lean_inc_ref(v_ks_2079_);
v_vs_2080_ = lean_ctor_get(v_newNode_2073_, 1);
lean_inc_ref(v_vs_2080_);
lean_dec_ref(v_newNode_2073_);
v___x_2081_ = lean_unsigned_to_nat(0u);
v___x_2082_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__1_spec__5___redArg___closed__0);
v___x_2083_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_x_2017_, v_ks_2079_, v_vs_2080_, v___x_2081_, v___x_2082_);
lean_dec_ref(v_vs_2080_);
lean_dec_ref(v_ks_2079_);
return v___x_2083_;
}
else
{
return v_newNode_2073_;
}
}
else
{
return v_newNode_2073_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(size_t v_depth_2086_, lean_object* v_keys_2087_, lean_object* v_vals_2088_, lean_object* v_i_2089_, lean_object* v_entries_2090_){
_start:
{
lean_object* v___x_2091_; uint8_t v___x_2092_; 
v___x_2091_ = lean_array_get_size(v_keys_2087_);
v___x_2092_ = lean_nat_dec_lt(v_i_2089_, v___x_2091_);
if (v___x_2092_ == 0)
{
lean_dec(v_i_2089_);
return v_entries_2090_;
}
else
{
lean_object* v_k_2093_; lean_object* v_v_2094_; uint64_t v___x_2095_; size_t v_h_2096_; size_t v___x_2097_; lean_object* v___x_2098_; size_t v___x_2099_; size_t v___x_2100_; size_t v___x_2101_; size_t v_h_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v_k_2093_ = lean_array_fget_borrowed(v_keys_2087_, v_i_2089_);
v_v_2094_ = lean_array_fget_borrowed(v_vals_2088_, v_i_2089_);
v___x_2095_ = l_Lean_instHashableMVarId_hash(v_k_2093_);
v_h_2096_ = lean_uint64_to_usize(v___x_2095_);
v___x_2097_ = ((size_t)5ULL);
v___x_2098_ = lean_unsigned_to_nat(1u);
v___x_2099_ = ((size_t)1ULL);
v___x_2100_ = lean_usize_sub(v_depth_2086_, v___x_2099_);
v___x_2101_ = lean_usize_mul(v___x_2097_, v___x_2100_);
v_h_2102_ = lean_usize_shift_right(v_h_2096_, v___x_2101_);
v___x_2103_ = lean_nat_add(v_i_2089_, v___x_2098_);
lean_dec(v_i_2089_);
lean_inc(v_v_2094_);
lean_inc(v_k_2093_);
v___x_2104_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_entries_2090_, v_h_2102_, v_depth_2086_, v_k_2093_, v_v_2094_);
v_i_2089_ = v___x_2103_;
v_entries_2090_ = v___x_2104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg___boxed(lean_object* v_depth_2106_, lean_object* v_keys_2107_, lean_object* v_vals_2108_, lean_object* v_i_2109_, lean_object* v_entries_2110_){
_start:
{
size_t v_depth_boxed_2111_; lean_object* v_res_2112_; 
v_depth_boxed_2111_ = lean_unbox_usize(v_depth_2106_);
lean_dec(v_depth_2106_);
v_res_2112_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_boxed_2111_, v_keys_2107_, v_vals_2108_, v_i_2109_, v_entries_2110_);
lean_dec_ref(v_vals_2108_);
lean_dec_ref(v_keys_2107_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg___boxed(lean_object* v_x_2113_, lean_object* v_x_2114_, lean_object* v_x_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_){
_start:
{
size_t v_x_36076__boxed_2118_; size_t v_x_36077__boxed_2119_; lean_object* v_res_2120_; 
v_x_36076__boxed_2118_ = lean_unbox_usize(v_x_2114_);
lean_dec(v_x_2114_);
v_x_36077__boxed_2119_ = lean_unbox_usize(v_x_2115_);
lean_dec(v_x_2115_);
v_res_2120_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2113_, v_x_36076__boxed_2118_, v_x_36077__boxed_2119_, v_x_2116_, v_x_2117_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(lean_object* v_x_2121_, lean_object* v_x_2122_, lean_object* v_x_2123_){
_start:
{
uint64_t v___x_2124_; size_t v___x_2125_; size_t v___x_2126_; lean_object* v___x_2127_; 
v___x_2124_ = l_Lean_instHashableMVarId_hash(v_x_2122_);
v___x_2125_ = lean_uint64_to_usize(v___x_2124_);
v___x_2126_ = ((size_t)1ULL);
v___x_2127_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_2121_, v___x_2125_, v___x_2126_, v_x_2122_, v_x_2123_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(lean_object* v_mvarId_2128_, lean_object* v_val_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v___x_2132_; lean_object* v_mctx_2133_; lean_object* v_cache_2134_; lean_object* v_zetaDeltaFVarIds_2135_; lean_object* v_postponed_2136_; lean_object* v_diag_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2166_; 
v___x_2132_ = lean_st_ref_take(v___y_2130_);
v_mctx_2133_ = lean_ctor_get(v___x_2132_, 0);
v_cache_2134_ = lean_ctor_get(v___x_2132_, 1);
v_zetaDeltaFVarIds_2135_ = lean_ctor_get(v___x_2132_, 2);
v_postponed_2136_ = lean_ctor_get(v___x_2132_, 3);
v_diag_2137_ = lean_ctor_get(v___x_2132_, 4);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2139_ = v___x_2132_;
v_isShared_2140_ = v_isSharedCheck_2166_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_diag_2137_);
lean_inc(v_postponed_2136_);
lean_inc(v_zetaDeltaFVarIds_2135_);
lean_inc(v_cache_2134_);
lean_inc(v_mctx_2133_);
lean_dec(v___x_2132_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2166_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v_depth_2141_; lean_object* v_levelAssignDepth_2142_; lean_object* v_lmvarCounter_2143_; lean_object* v_mvarCounter_2144_; lean_object* v_lDecls_2145_; lean_object* v_decls_2146_; lean_object* v_userNames_2147_; lean_object* v_lAssignment_2148_; lean_object* v_eAssignment_2149_; lean_object* v_dAssignment_2150_; lean_object* v_instanceTypedMVars_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2165_; 
v_depth_2141_ = lean_ctor_get(v_mctx_2133_, 0);
v_levelAssignDepth_2142_ = lean_ctor_get(v_mctx_2133_, 1);
v_lmvarCounter_2143_ = lean_ctor_get(v_mctx_2133_, 2);
v_mvarCounter_2144_ = lean_ctor_get(v_mctx_2133_, 3);
v_lDecls_2145_ = lean_ctor_get(v_mctx_2133_, 4);
v_decls_2146_ = lean_ctor_get(v_mctx_2133_, 5);
v_userNames_2147_ = lean_ctor_get(v_mctx_2133_, 6);
v_lAssignment_2148_ = lean_ctor_get(v_mctx_2133_, 7);
v_eAssignment_2149_ = lean_ctor_get(v_mctx_2133_, 8);
v_dAssignment_2150_ = lean_ctor_get(v_mctx_2133_, 9);
v_instanceTypedMVars_2151_ = lean_ctor_get(v_mctx_2133_, 10);
v_isSharedCheck_2165_ = !lean_is_exclusive(v_mctx_2133_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2153_ = v_mctx_2133_;
v_isShared_2154_ = v_isSharedCheck_2165_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_instanceTypedMVars_2151_);
lean_inc(v_dAssignment_2150_);
lean_inc(v_eAssignment_2149_);
lean_inc(v_lAssignment_2148_);
lean_inc(v_userNames_2147_);
lean_inc(v_decls_2146_);
lean_inc(v_lDecls_2145_);
lean_inc(v_mvarCounter_2144_);
lean_inc(v_lmvarCounter_2143_);
lean_inc(v_levelAssignDepth_2142_);
lean_inc(v_depth_2141_);
lean_dec(v_mctx_2133_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2165_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2158_; 
v___x_2155_ = lean_box(0);
v___x_2156_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_eAssignment_2149_, v_mvarId_2128_, v_val_2129_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 8, v___x_2156_);
v___x_2158_ = v___x_2153_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_depth_2141_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_levelAssignDepth_2142_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v_lmvarCounter_2143_);
lean_ctor_set(v_reuseFailAlloc_2164_, 3, v_mvarCounter_2144_);
lean_ctor_set(v_reuseFailAlloc_2164_, 4, v_lDecls_2145_);
lean_ctor_set(v_reuseFailAlloc_2164_, 5, v_decls_2146_);
lean_ctor_set(v_reuseFailAlloc_2164_, 6, v_userNames_2147_);
lean_ctor_set(v_reuseFailAlloc_2164_, 7, v_lAssignment_2148_);
lean_ctor_set(v_reuseFailAlloc_2164_, 8, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2164_, 9, v_dAssignment_2150_);
lean_ctor_set(v_reuseFailAlloc_2164_, 10, v_instanceTypedMVars_2151_);
v___x_2158_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2160_; 
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2158_);
v___x_2160_ = v___x_2139_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2163_, 1, v_cache_2134_);
lean_ctor_set(v_reuseFailAlloc_2163_, 2, v_zetaDeltaFVarIds_2135_);
lean_ctor_set(v_reuseFailAlloc_2163_, 3, v_postponed_2136_);
lean_ctor_set(v_reuseFailAlloc_2163_, 4, v_diag_2137_);
v___x_2160_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = lean_st_ref_put(v___y_2130_, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2155_);
return v___x_2162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg___boxed(lean_object* v_mvarId_2167_, lean_object* v_val_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_2167_, v_val_2168_, v___y_2169_);
lean_dec(v___y_2169_);
return v_res_2171_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2172_ = lean_unsigned_to_nat(32u);
v___x_2173_ = lean_mk_empty_array_with_capacity(v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
return v___x_2174_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2175_ = ((size_t)5ULL);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_unsigned_to_nat(32u);
v___x_2178_ = lean_mk_empty_array_with_capacity(v___x_2177_);
v___x_2179_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__0);
v___x_2180_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v___x_2178_);
lean_ctor_set(v___x_2180_, 2, v___x_2176_);
lean_ctor_set(v___x_2180_, 3, v___x_2176_);
lean_ctor_set_usize(v___x_2180_, 4, v___x_2175_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(lean_object* v___y_2181_){
_start:
{
lean_object* v___x_2183_; lean_object* v_traceState_2184_; lean_object* v_traces_2185_; lean_object* v___x_2186_; lean_object* v_traceState_2187_; lean_object* v_env_2188_; lean_object* v_nextMacroScope_2189_; lean_object* v_ngen_2190_; lean_object* v_auxDeclNGen_2191_; lean_object* v_cache_2192_; lean_object* v_messages_2193_; lean_object* v_infoState_2194_; lean_object* v_snapshotTasks_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2214_; 
v___x_2183_ = lean_st_ref_get(v___y_2181_);
v_traceState_2184_ = lean_ctor_get(v___x_2183_, 4);
lean_inc_ref(v_traceState_2184_);
lean_dec(v___x_2183_);
v_traces_2185_ = lean_ctor_get(v_traceState_2184_, 0);
lean_inc_ref(v_traces_2185_);
lean_dec_ref(v_traceState_2184_);
v___x_2186_ = lean_st_ref_take(v___y_2181_);
v_traceState_2187_ = lean_ctor_get(v___x_2186_, 4);
v_env_2188_ = lean_ctor_get(v___x_2186_, 0);
v_nextMacroScope_2189_ = lean_ctor_get(v___x_2186_, 1);
v_ngen_2190_ = lean_ctor_get(v___x_2186_, 2);
v_auxDeclNGen_2191_ = lean_ctor_get(v___x_2186_, 3);
v_cache_2192_ = lean_ctor_get(v___x_2186_, 5);
v_messages_2193_ = lean_ctor_get(v___x_2186_, 6);
v_infoState_2194_ = lean_ctor_get(v___x_2186_, 7);
v_snapshotTasks_2195_ = lean_ctor_get(v___x_2186_, 8);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2197_ = v___x_2186_;
v_isShared_2198_ = v_isSharedCheck_2214_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_snapshotTasks_2195_);
lean_inc(v_infoState_2194_);
lean_inc(v_messages_2193_);
lean_inc(v_cache_2192_);
lean_inc(v_traceState_2187_);
lean_inc(v_auxDeclNGen_2191_);
lean_inc(v_ngen_2190_);
lean_inc(v_nextMacroScope_2189_);
lean_inc(v_env_2188_);
lean_dec(v___x_2186_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2214_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
uint64_t v_tid_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2212_; 
v_tid_2199_ = lean_ctor_get_uint64(v_traceState_2187_, sizeof(void*)*1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_traceState_2187_);
if (v_isSharedCheck_2212_ == 0)
{
lean_object* v_unused_2213_; 
v_unused_2213_ = lean_ctor_get(v_traceState_2187_, 0);
lean_dec(v_unused_2213_);
v___x_2201_ = v_traceState_2187_;
v_isShared_2202_ = v_isSharedCheck_2212_;
goto v_resetjp_2200_;
}
else
{
lean_dec(v_traceState_2187_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2212_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2203_; lean_object* v___x_2205_; 
v___x_2203_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___closed__1);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v___x_2203_);
v___x_2205_ = v___x_2201_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2203_);
lean_ctor_set_uint64(v_reuseFailAlloc_2211_, sizeof(void*)*1, v_tid_2199_);
v___x_2205_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
lean_object* v___x_2207_; 
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 4, v___x_2205_);
v___x_2207_ = v___x_2197_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_env_2188_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v_nextMacroScope_2189_);
lean_ctor_set(v_reuseFailAlloc_2210_, 2, v_ngen_2190_);
lean_ctor_set(v_reuseFailAlloc_2210_, 3, v_auxDeclNGen_2191_);
lean_ctor_set(v_reuseFailAlloc_2210_, 4, v___x_2205_);
lean_ctor_set(v_reuseFailAlloc_2210_, 5, v_cache_2192_);
lean_ctor_set(v_reuseFailAlloc_2210_, 6, v_messages_2193_);
lean_ctor_set(v_reuseFailAlloc_2210_, 7, v_infoState_2194_);
lean_ctor_set(v_reuseFailAlloc_2210_, 8, v_snapshotTasks_2195_);
v___x_2207_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2208_ = lean_st_ref_put(v___y_2181_, v___x_2207_);
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v_traces_2185_);
return v___x_2209_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg___boxed(lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_2215_);
lean_dec(v___y_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(lean_object* v_opts_2218_, lean_object* v_opt_2219_){
_start:
{
lean_object* v_name_2220_; lean_object* v_defValue_2221_; lean_object* v_map_2222_; lean_object* v___x_2223_; 
v_name_2220_ = lean_ctor_get(v_opt_2219_, 0);
v_defValue_2221_ = lean_ctor_get(v_opt_2219_, 1);
v_map_2222_ = lean_ctor_get(v_opts_2218_, 0);
v___x_2223_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2222_, v_name_2220_);
if (lean_obj_tag(v___x_2223_) == 0)
{
uint8_t v___x_2224_; 
v___x_2224_ = lean_unbox(v_defValue_2221_);
return v___x_2224_;
}
else
{
lean_object* v_val_2225_; 
v_val_2225_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_val_2225_);
lean_dec_ref_known(v___x_2223_, 1);
if (lean_obj_tag(v_val_2225_) == 1)
{
uint8_t v_v_2226_; 
v_v_2226_ = lean_ctor_get_uint8(v_val_2225_, 0);
lean_dec_ref_known(v_val_2225_, 0);
return v_v_2226_;
}
else
{
uint8_t v___x_2227_; 
lean_dec(v_val_2225_);
v___x_2227_ = lean_unbox(v_defValue_2221_);
return v___x_2227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5___boxed(lean_object* v_opts_2228_, lean_object* v_opt_2229_){
_start:
{
uint8_t v_res_2230_; lean_object* v_r_2231_; 
v_res_2230_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2228_, v_opt_2229_);
lean_dec_ref(v_opt_2229_);
lean_dec_ref(v_opts_2228_);
v_r_2231_ = lean_box(v_res_2230_);
return v_r_2231_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__2___closed__0));
v___x_2234_ = l_Lean_stringToMessageData(v___x_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2(lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_x_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2243_ = l_Lean_MessageData_ofExpr(v_a_2235_);
v___x_2244_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__2___closed__1);
v___x_2245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2243_);
lean_ctor_set(v___x_2245_, 1, v___x_2244_);
v___x_2246_ = l_Lean_MessageData_ofExpr(v_a_2236_);
v___x_2247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2245_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__2___boxed(lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_x_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = l_Lean_Meta_Transport_mkEquiv___lam__2(v_a_2249_, v_a_2250_, v_x_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec_ref(v_x_2251_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(lean_object* v_opts_2258_, lean_object* v_opt_2259_){
_start:
{
lean_object* v_name_2260_; lean_object* v_defValue_2261_; lean_object* v_map_2262_; lean_object* v___x_2263_; 
v_name_2260_ = lean_ctor_get(v_opt_2259_, 0);
v_defValue_2261_ = lean_ctor_get(v_opt_2259_, 1);
v_map_2262_ = lean_ctor_get(v_opts_2258_, 0);
v___x_2263_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2262_, v_name_2260_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_inc(v_defValue_2261_);
return v_defValue_2261_;
}
else
{
lean_object* v_val_2264_; 
v_val_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_val_2264_);
lean_dec_ref_known(v___x_2263_, 1);
if (lean_obj_tag(v_val_2264_) == 3)
{
lean_object* v_v_2265_; 
v_v_2265_ = lean_ctor_get(v_val_2264_, 0);
lean_inc(v_v_2265_);
lean_dec_ref_known(v_val_2264_, 1);
return v_v_2265_;
}
else
{
lean_dec(v_val_2264_);
lean_inc(v_defValue_2261_);
return v_defValue_2261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11___boxed(lean_object* v_opts_2266_, lean_object* v_opt_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2266_, v_opt_2267_);
lean_dec_ref(v_opt_2267_);
lean_dec_ref(v_opts_2266_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(lean_object* v_x_2269_){
_start:
{
if (lean_obj_tag(v_x_2269_) == 0)
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
v_a_2271_ = lean_ctor_get(v_x_2269_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v_x_2269_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v_x_2269_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v_x_2269_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
lean_ctor_set_tag(v___x_2273_, 1);
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
v_a_2279_ = lean_ctor_get(v_x_2269_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_x_2269_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v_x_2269_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v_x_2269_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
lean_ctor_set_tag(v___x_2281_, 0);
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg___boxed(lean_object* v_x_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_2287_);
return v_res_2289_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(lean_object* v_e_2290_){
_start:
{
if (lean_obj_tag(v_e_2290_) == 0)
{
uint8_t v___x_2291_; 
v___x_2291_ = 2;
return v___x_2291_;
}
else
{
lean_object* v_a_2292_; uint8_t v___x_2293_; 
v_a_2292_ = lean_ctor_get(v_e_2290_, 0);
v___x_2293_ = l_Lean_Expr_hasSyntheticSorry(v_a_2292_);
if (v___x_2293_ == 0)
{
uint8_t v___x_2294_; 
v___x_2294_ = 0;
return v___x_2294_;
}
else
{
uint8_t v___x_2295_; 
v___x_2295_ = 1;
return v___x_2295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10___boxed(lean_object* v_e_2296_){
_start:
{
uint8_t v_res_2297_; lean_object* v_r_2298_; 
v_res_2297_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_e_2296_);
lean_dec_ref(v_e_2296_);
v_r_2298_ = lean_box(v_res_2297_);
return v_r_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(size_t v_sz_2299_, size_t v_i_2300_, lean_object* v_bs_2301_){
_start:
{
uint8_t v___x_2302_; 
v___x_2302_ = lean_usize_dec_lt(v_i_2300_, v_sz_2299_);
if (v___x_2302_ == 0)
{
return v_bs_2301_;
}
else
{
lean_object* v_v_2303_; lean_object* v_msg_2304_; lean_object* v___x_2305_; lean_object* v_bs_x27_2306_; size_t v___x_2307_; size_t v___x_2308_; lean_object* v___x_2309_; 
v_v_2303_ = lean_array_uget_borrowed(v_bs_2301_, v_i_2300_);
v_msg_2304_ = lean_ctor_get(v_v_2303_, 1);
lean_inc_ref(v_msg_2304_);
v___x_2305_ = lean_unsigned_to_nat(0u);
v_bs_x27_2306_ = lean_array_uset(v_bs_2301_, v_i_2300_, v___x_2305_);
v___x_2307_ = ((size_t)1ULL);
v___x_2308_ = lean_usize_add(v_i_2300_, v___x_2307_);
v___x_2309_ = lean_array_uset(v_bs_x27_2306_, v_i_2300_, v_msg_2304_);
v_i_2300_ = v___x_2308_;
v_bs_2301_ = v___x_2309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11___boxed(lean_object* v_sz_2311_, lean_object* v_i_2312_, lean_object* v_bs_2313_){
_start:
{
size_t v_sz_boxed_2314_; size_t v_i_boxed_2315_; lean_object* v_res_2316_; 
v_sz_boxed_2314_ = lean_unbox_usize(v_sz_2311_);
lean_dec(v_sz_2311_);
v_i_boxed_2315_ = lean_unbox_usize(v_i_2312_);
lean_dec(v_i_2312_);
v_res_2316_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_boxed_2314_, v_i_boxed_2315_, v_bs_2313_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(lean_object* v_oldTraces_2317_, lean_object* v_data_2318_, lean_object* v_ref_2319_, lean_object* v_msg_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v_toCold_2326_; lean_object* v_currRecDepth_2327_; lean_object* v_ref_2328_; uint8_t v_diag_2329_; uint8_t v_suppressElabErrors_2330_; lean_object* v_ref_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v_traceState_2334_; lean_object* v_traces_2335_; lean_object* v___x_2336_; size_t v_sz_2337_; size_t v___x_2338_; lean_object* v___x_2339_; lean_object* v_msg_2340_; lean_object* v___x_2341_; lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2379_; 
v_toCold_2326_ = lean_ctor_get(v___y_2323_, 0);
v_currRecDepth_2327_ = lean_ctor_get(v___y_2323_, 1);
v_ref_2328_ = lean_ctor_get(v___y_2323_, 2);
v_diag_2329_ = lean_ctor_get_uint8(v___y_2323_, sizeof(void*)*3);
v_suppressElabErrors_2330_ = lean_ctor_get_uint8(v___y_2323_, sizeof(void*)*3 + 1);
v_ref_2331_ = l_Lean_replaceRef(v_ref_2319_, v_ref_2328_);
lean_inc(v_currRecDepth_2327_);
lean_inc_ref(v_toCold_2326_);
v___x_2332_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2332_, 0, v_toCold_2326_);
lean_ctor_set(v___x_2332_, 1, v_currRecDepth_2327_);
lean_ctor_set(v___x_2332_, 2, v_ref_2331_);
lean_ctor_set_uint8(v___x_2332_, sizeof(void*)*3, v_diag_2329_);
lean_ctor_set_uint8(v___x_2332_, sizeof(void*)*3 + 1, v_suppressElabErrors_2330_);
v___x_2333_ = lean_st_ref_get(v___y_2324_);
v_traceState_2334_ = lean_ctor_get(v___x_2333_, 4);
lean_inc_ref(v_traceState_2334_);
lean_dec(v___x_2333_);
v_traces_2335_ = lean_ctor_get(v_traceState_2334_, 0);
lean_inc_ref(v_traces_2335_);
lean_dec_ref(v_traceState_2334_);
v___x_2336_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2335_);
lean_dec_ref(v_traces_2335_);
v_sz_2337_ = lean_array_size(v___x_2336_);
v___x_2338_ = ((size_t)0ULL);
v___x_2339_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8_spec__11(v_sz_2337_, v___x_2338_, v___x_2336_);
v_msg_2340_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2340_, 0, v_data_2318_);
lean_ctor_set(v_msg_2340_, 1, v_msg_2320_);
lean_ctor_set(v_msg_2340_, 2, v___x_2339_);
v___x_2341_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1_spec__1(v_msg_2340_, v___y_2321_, v___y_2322_, v___x_2332_, v___y_2324_);
lean_dec_ref_known(v___x_2332_, 3);
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2344_ = v___x_2341_;
v_isShared_2345_ = v_isSharedCheck_2379_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2341_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2379_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2346_; lean_object* v_traceState_2347_; lean_object* v_env_2348_; lean_object* v_nextMacroScope_2349_; lean_object* v_ngen_2350_; lean_object* v_auxDeclNGen_2351_; lean_object* v_cache_2352_; lean_object* v_messages_2353_; lean_object* v_infoState_2354_; lean_object* v_snapshotTasks_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2378_; 
v___x_2346_ = lean_st_ref_take(v___y_2324_);
v_traceState_2347_ = lean_ctor_get(v___x_2346_, 4);
v_env_2348_ = lean_ctor_get(v___x_2346_, 0);
v_nextMacroScope_2349_ = lean_ctor_get(v___x_2346_, 1);
v_ngen_2350_ = lean_ctor_get(v___x_2346_, 2);
v_auxDeclNGen_2351_ = lean_ctor_get(v___x_2346_, 3);
v_cache_2352_ = lean_ctor_get(v___x_2346_, 5);
v_messages_2353_ = lean_ctor_get(v___x_2346_, 6);
v_infoState_2354_ = lean_ctor_get(v___x_2346_, 7);
v_snapshotTasks_2355_ = lean_ctor_get(v___x_2346_, 8);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2357_ = v___x_2346_;
v_isShared_2358_ = v_isSharedCheck_2378_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_snapshotTasks_2355_);
lean_inc(v_infoState_2354_);
lean_inc(v_messages_2353_);
lean_inc(v_cache_2352_);
lean_inc(v_traceState_2347_);
lean_inc(v_auxDeclNGen_2351_);
lean_inc(v_ngen_2350_);
lean_inc(v_nextMacroScope_2349_);
lean_inc(v_env_2348_);
lean_dec(v___x_2346_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2378_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
uint64_t v_tid_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2376_; 
v_tid_2359_ = lean_ctor_get_uint64(v_traceState_2347_, sizeof(void*)*1);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_traceState_2347_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; 
v_unused_2377_ = lean_ctor_get(v_traceState_2347_, 0);
lean_dec(v_unused_2377_);
v___x_2361_ = v_traceState_2347_;
v_isShared_2362_ = v_isSharedCheck_2376_;
goto v_resetjp_2360_;
}
else
{
lean_dec(v_traceState_2347_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2376_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2367_; 
v___x_2363_ = lean_box(0);
v___x_2364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2364_, 0, v_ref_2319_);
lean_ctor_set(v___x_2364_, 1, v_a_2342_);
v___x_2365_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2317_, v___x_2364_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2365_);
v___x_2367_ = v___x_2361_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2365_);
lean_ctor_set_uint64(v_reuseFailAlloc_2375_, sizeof(void*)*1, v_tid_2359_);
v___x_2367_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
lean_object* v___x_2369_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 4, v___x_2367_);
v___x_2369_ = v___x_2357_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_env_2348_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v_nextMacroScope_2349_);
lean_ctor_set(v_reuseFailAlloc_2374_, 2, v_ngen_2350_);
lean_ctor_set(v_reuseFailAlloc_2374_, 3, v_auxDeclNGen_2351_);
lean_ctor_set(v_reuseFailAlloc_2374_, 4, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2374_, 5, v_cache_2352_);
lean_ctor_set(v_reuseFailAlloc_2374_, 6, v_messages_2353_);
lean_ctor_set(v_reuseFailAlloc_2374_, 7, v_infoState_2354_);
lean_ctor_set(v_reuseFailAlloc_2374_, 8, v_snapshotTasks_2355_);
v___x_2369_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2372_; 
v___x_2370_ = lean_st_ref_put(v___y_2324_, v___x_2369_);
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 0, v___x_2363_);
v___x_2372_ = v___x_2344_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2363_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8___boxed(lean_object* v_oldTraces_2380_, lean_object* v_data_2381_, lean_object* v_ref_2382_, lean_object* v_msg_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2380_, v_data_2381_, v_ref_2382_, v_msg_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
return v_res_2389_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2390_; double v___x_2391_; 
v___x_2390_ = lean_unsigned_to_nat(0u);
v___x_2391_ = lean_float_of_nat(v___x_2390_);
return v___x_2391_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__1));
v___x_2394_ = l_Lean_stringToMessageData(v___x_2393_);
return v___x_2394_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2395_; double v___x_2396_; 
v___x_2395_ = lean_unsigned_to_nat(1000u);
v___x_2396_ = lean_float_of_nat(v___x_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(lean_object* v_cls_2397_, uint8_t v_collapsed_2398_, lean_object* v_tag_2399_, lean_object* v_opts_2400_, uint8_t v_clsEnabled_2401_, lean_object* v_oldTraces_2402_, lean_object* v_msg_2403_, lean_object* v_resStartStop_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_fst_2410_; lean_object* v_snd_2411_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v_data_2415_; lean_object* v_fst_2426_; lean_object* v_snd_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; lean_object* v___y_2431_; lean_object* v_a_2432_; uint8_t v___y_2447_; double v___y_2478_; 
v_fst_2410_ = lean_ctor_get(v_resStartStop_2404_, 0);
lean_inc(v_fst_2410_);
v_snd_2411_ = lean_ctor_get(v_resStartStop_2404_, 1);
lean_inc(v_snd_2411_);
lean_dec_ref(v_resStartStop_2404_);
v_fst_2426_ = lean_ctor_get(v_snd_2411_, 0);
lean_inc(v_fst_2426_);
v_snd_2427_ = lean_ctor_get(v_snd_2411_, 1);
lean_inc(v_snd_2427_);
lean_dec(v_snd_2411_);
v___x_2428_ = l_Lean_trace_profiler;
v___x_2429_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2400_, v___x_2428_);
if (v___x_2429_ == 0)
{
v___y_2447_ = v___x_2429_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2483_; uint8_t v___x_2484_; 
v___x_2483_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2484_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_opts_2400_, v___x_2483_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2485_; lean_object* v___x_2486_; double v___x_2487_; double v___x_2488_; double v___x_2489_; 
v___x_2485_ = l_Lean_trace_profiler_threshold;
v___x_2486_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2400_, v___x_2485_);
v___x_2487_ = lean_float_of_nat(v___x_2486_);
v___x_2488_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__3);
v___x_2489_ = lean_float_div(v___x_2487_, v___x_2488_);
v___y_2478_ = v___x_2489_;
goto v___jp_2477_;
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2491_; double v___x_2492_; 
v___x_2490_ = l_Lean_trace_profiler_threshold;
v___x_2491_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__11(v_opts_2400_, v___x_2490_);
v___x_2492_ = lean_float_of_nat(v___x_2491_);
v___y_2478_ = v___x_2492_;
goto v___jp_2477_;
}
}
v___jp_2412_:
{
lean_object* v___x_2416_; 
lean_inc(v___y_2414_);
v___x_2416_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__8(v_oldTraces_2402_, v_data_2415_, v___y_2414_, v___y_2413_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v___x_2417_; 
lean_dec_ref_known(v___x_2416_, 1);
v___x_2417_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2410_);
return v___x_2417_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v_fst_2410_);
v_a_2418_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2416_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2416_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
v___jp_2430_:
{
uint8_t v_result_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; double v___x_2436_; lean_object* v_data_2437_; 
v_result_2433_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__10(v_fst_2410_);
v___x_2434_ = lean_box(v_result_2433_);
v___x_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
v___x_2436_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__0);
lean_inc_ref(v_tag_2399_);
lean_inc_ref(v___x_2435_);
lean_inc(v_cls_2397_);
v_data_2437_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2437_, 0, v_cls_2397_);
lean_ctor_set(v_data_2437_, 1, v___x_2435_);
lean_ctor_set(v_data_2437_, 2, v_tag_2399_);
lean_ctor_set_float(v_data_2437_, sizeof(void*)*3, v___x_2436_);
lean_ctor_set_float(v_data_2437_, sizeof(void*)*3 + 8, v___x_2436_);
lean_ctor_set_uint8(v_data_2437_, sizeof(void*)*3 + 16, v_collapsed_2398_);
if (v___x_2429_ == 0)
{
lean_dec_ref_known(v___x_2435_, 1);
lean_dec(v_snd_2427_);
lean_dec(v_fst_2426_);
lean_dec_ref(v_tag_2399_);
lean_dec(v_cls_2397_);
v___y_2413_ = v_a_2432_;
v___y_2414_ = v___y_2431_;
v_data_2415_ = v_data_2437_;
goto v___jp_2412_;
}
else
{
lean_object* v_data_2438_; double v___x_2439_; double v___x_2440_; 
lean_dec_ref_known(v_data_2437_, 3);
v_data_2438_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2438_, 0, v_cls_2397_);
lean_ctor_set(v_data_2438_, 1, v___x_2435_);
lean_ctor_set(v_data_2438_, 2, v_tag_2399_);
v___x_2439_ = lean_unbox_float(v_fst_2426_);
lean_dec(v_fst_2426_);
lean_ctor_set_float(v_data_2438_, sizeof(void*)*3, v___x_2439_);
v___x_2440_ = lean_unbox_float(v_snd_2427_);
lean_dec(v_snd_2427_);
lean_ctor_set_float(v_data_2438_, sizeof(void*)*3 + 8, v___x_2440_);
lean_ctor_set_uint8(v_data_2438_, sizeof(void*)*3 + 16, v_collapsed_2398_);
v___y_2413_ = v_a_2432_;
v___y_2414_ = v___y_2431_;
v_data_2415_ = v_data_2438_;
goto v___jp_2412_;
}
}
v___jp_2441_:
{
lean_object* v_ref_2442_; lean_object* v___x_2443_; 
v_ref_2442_ = lean_ctor_get(v___y_2407_, 2);
lean_inc(v___y_2408_);
lean_inc_ref(v___y_2407_);
lean_inc(v___y_2406_);
lean_inc_ref(v___y_2405_);
lean_inc(v_fst_2410_);
v___x_2443_ = lean_apply_6(v_msg_2403_, v_fst_2410_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, lean_box(0));
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2443_, 1);
v___y_2431_ = v_ref_2442_;
v_a_2432_ = v_a_2444_;
goto v___jp_2430_;
}
else
{
lean_object* v___x_2445_; 
lean_dec_ref_known(v___x_2443_, 1);
v___x_2445_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___closed__2);
v___y_2431_ = v_ref_2442_;
v_a_2432_ = v___x_2445_;
goto v___jp_2430_;
}
}
v___jp_2446_:
{
if (v_clsEnabled_2401_ == 0)
{
if (v___y_2447_ == 0)
{
lean_object* v___x_2448_; lean_object* v_traceState_2449_; lean_object* v_env_2450_; lean_object* v_nextMacroScope_2451_; lean_object* v_ngen_2452_; lean_object* v_auxDeclNGen_2453_; lean_object* v_cache_2454_; lean_object* v_messages_2455_; lean_object* v_infoState_2456_; lean_object* v_snapshotTasks_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_snd_2427_);
lean_dec(v_fst_2426_);
lean_dec_ref(v_msg_2403_);
lean_dec_ref(v_tag_2399_);
lean_dec(v_cls_2397_);
v___x_2448_ = lean_st_ref_take(v___y_2408_);
v_traceState_2449_ = lean_ctor_get(v___x_2448_, 4);
v_env_2450_ = lean_ctor_get(v___x_2448_, 0);
v_nextMacroScope_2451_ = lean_ctor_get(v___x_2448_, 1);
v_ngen_2452_ = lean_ctor_get(v___x_2448_, 2);
v_auxDeclNGen_2453_ = lean_ctor_get(v___x_2448_, 3);
v_cache_2454_ = lean_ctor_get(v___x_2448_, 5);
v_messages_2455_ = lean_ctor_get(v___x_2448_, 6);
v_infoState_2456_ = lean_ctor_get(v___x_2448_, 7);
v_snapshotTasks_2457_ = lean_ctor_get(v___x_2448_, 8);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2459_ = v___x_2448_;
v_isShared_2460_ = v_isSharedCheck_2476_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_snapshotTasks_2457_);
lean_inc(v_infoState_2456_);
lean_inc(v_messages_2455_);
lean_inc(v_cache_2454_);
lean_inc(v_traceState_2449_);
lean_inc(v_auxDeclNGen_2453_);
lean_inc(v_ngen_2452_);
lean_inc(v_nextMacroScope_2451_);
lean_inc(v_env_2450_);
lean_dec(v___x_2448_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2476_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
uint64_t v_tid_2461_; lean_object* v_traces_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2475_; 
v_tid_2461_ = lean_ctor_get_uint64(v_traceState_2449_, sizeof(void*)*1);
v_traces_2462_ = lean_ctor_get(v_traceState_2449_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v_traceState_2449_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2464_ = v_traceState_2449_;
v_isShared_2465_ = v_isSharedCheck_2475_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_traces_2462_);
lean_dec(v_traceState_2449_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2475_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2466_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2402_, v_traces_2462_);
lean_dec_ref(v_traces_2462_);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2466_);
v___x_2468_ = v___x_2464_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v___x_2466_);
lean_ctor_set_uint64(v_reuseFailAlloc_2474_, sizeof(void*)*1, v_tid_2461_);
v___x_2468_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
lean_object* v___x_2470_; 
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 4, v___x_2468_);
v___x_2470_ = v___x_2459_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_env_2450_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_nextMacroScope_2451_);
lean_ctor_set(v_reuseFailAlloc_2473_, 2, v_ngen_2452_);
lean_ctor_set(v_reuseFailAlloc_2473_, 3, v_auxDeclNGen_2453_);
lean_ctor_set(v_reuseFailAlloc_2473_, 4, v___x_2468_);
lean_ctor_set(v_reuseFailAlloc_2473_, 5, v_cache_2454_);
lean_ctor_set(v_reuseFailAlloc_2473_, 6, v_messages_2455_);
lean_ctor_set(v_reuseFailAlloc_2473_, 7, v_infoState_2456_);
lean_ctor_set(v_reuseFailAlloc_2473_, 8, v_snapshotTasks_2457_);
v___x_2470_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_st_ref_put(v___y_2408_, v___x_2470_);
v___x_2472_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_fst_2410_);
return v___x_2472_;
}
}
}
}
}
else
{
goto v___jp_2441_;
}
}
else
{
goto v___jp_2441_;
}
}
v___jp_2477_:
{
double v___x_2479_; double v___x_2480_; double v___x_2481_; uint8_t v___x_2482_; 
v___x_2479_ = lean_unbox_float(v_snd_2427_);
v___x_2480_ = lean_unbox_float(v_fst_2426_);
v___x_2481_ = lean_float_sub(v___x_2479_, v___x_2480_);
v___x_2482_ = lean_float_decLt(v___y_2478_, v___x_2481_);
v___y_2447_ = v___x_2482_;
goto v___jp_2446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6___boxed(lean_object* v_cls_2493_, lean_object* v_collapsed_2494_, lean_object* v_tag_2495_, lean_object* v_opts_2496_, lean_object* v_clsEnabled_2497_, lean_object* v_oldTraces_2498_, lean_object* v_msg_2499_, lean_object* v_resStartStop_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
uint8_t v_collapsed_boxed_2506_; uint8_t v_clsEnabled_boxed_2507_; lean_object* v_res_2508_; 
v_collapsed_boxed_2506_ = lean_unbox(v_collapsed_2494_);
v_clsEnabled_boxed_2507_ = lean_unbox(v_clsEnabled_2497_);
v_res_2508_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v_cls_2493_, v_collapsed_boxed_2506_, v_tag_2495_, v_opts_2496_, v_clsEnabled_boxed_2507_, v_oldTraces_2498_, v_msg_2499_, v_resStartStop_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec_ref(v_opts_2496_);
return v_res_2508_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_keys_2509_, lean_object* v_i_2510_, lean_object* v_k_2511_){
_start:
{
lean_object* v___x_2512_; uint8_t v___x_2513_; 
v___x_2512_ = lean_array_get_size(v_keys_2509_);
v___x_2513_ = lean_nat_dec_lt(v_i_2510_, v___x_2512_);
if (v___x_2513_ == 0)
{
lean_dec(v_i_2510_);
return v___x_2513_;
}
else
{
lean_object* v_k_x27_2514_; uint8_t v___x_2515_; 
v_k_x27_2514_ = lean_array_fget_borrowed(v_keys_2509_, v_i_2510_);
v___x_2515_ = l_Lean_instBEqMVarId_beq(v_k_2511_, v_k_x27_2514_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_unsigned_to_nat(1u);
v___x_2517_ = lean_nat_add(v_i_2510_, v___x_2516_);
lean_dec(v_i_2510_);
v_i_2510_ = v___x_2517_;
goto _start;
}
else
{
lean_dec(v_i_2510_);
return v___x_2513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object* v_keys_2519_, lean_object* v_i_2520_, lean_object* v_k_2521_){
_start:
{
uint8_t v_res_2522_; lean_object* v_r_2523_; 
v_res_2522_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_2519_, v_i_2520_, v_k_2521_);
lean_dec(v_k_2521_);
lean_dec_ref(v_keys_2519_);
v_r_2523_ = lean_box(v_res_2522_);
return v_r_2523_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(lean_object* v_x_2524_, size_t v_x_2525_, lean_object* v_x_2526_){
_start:
{
if (lean_obj_tag(v_x_2524_) == 0)
{
lean_object* v_es_2527_; lean_object* v___x_2528_; size_t v___x_2529_; size_t v___x_2530_; lean_object* v_j_2531_; lean_object* v___x_2532_; 
v_es_2527_ = lean_ctor_get(v_x_2524_, 0);
v___x_2528_ = lean_box(2);
v___x_2529_ = ((size_t)31ULL);
v___x_2530_ = lean_usize_land(v_x_2525_, v___x_2529_);
v_j_2531_ = lean_usize_to_nat(v___x_2530_);
v___x_2532_ = lean_array_get_borrowed(v___x_2528_, v_es_2527_, v_j_2531_);
lean_dec(v_j_2531_);
switch(lean_obj_tag(v___x_2532_))
{
case 0:
{
lean_object* v_key_2533_; uint8_t v___x_2534_; 
v_key_2533_ = lean_ctor_get(v___x_2532_, 0);
v___x_2534_ = l_Lean_instBEqMVarId_beq(v_x_2526_, v_key_2533_);
return v___x_2534_;
}
case 1:
{
lean_object* v_node_2535_; size_t v___x_2536_; size_t v___x_2537_; 
v_node_2535_ = lean_ctor_get(v___x_2532_, 0);
v___x_2536_ = ((size_t)5ULL);
v___x_2537_ = lean_usize_shift_right(v_x_2525_, v___x_2536_);
v_x_2524_ = v_node_2535_;
v_x_2525_ = v___x_2537_;
goto _start;
}
default: 
{
uint8_t v___x_2539_; 
v___x_2539_ = 0;
return v___x_2539_;
}
}
}
else
{
lean_object* v_ks_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v_ks_2540_ = lean_ctor_get(v_x_2524_, 0);
v___x_2541_ = lean_unsigned_to_nat(0u);
v___x_2542_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_ks_2540_, v___x_2541_, v_x_2526_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_2543_, lean_object* v_x_2544_, lean_object* v_x_2545_){
_start:
{
size_t v_x_36750__boxed_2546_; uint8_t v_res_2547_; lean_object* v_r_2548_; 
v_x_36750__boxed_2546_ = lean_unbox_usize(v_x_2544_);
lean_dec(v_x_2544_);
v_res_2547_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2543_, v_x_36750__boxed_2546_, v_x_2545_);
lean_dec(v_x_2545_);
lean_dec_ref(v_x_2543_);
v_r_2548_ = lean_box(v_res_2547_);
return v_r_2548_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(lean_object* v_x_2549_, lean_object* v_x_2550_){
_start:
{
uint64_t v___x_2551_; size_t v___x_2552_; uint8_t v___x_2553_; 
v___x_2551_ = l_Lean_instHashableMVarId_hash(v_x_2550_);
v___x_2552_ = lean_uint64_to_usize(v___x_2551_);
v___x_2553_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_2549_, v___x_2552_, v_x_2550_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_2554_, lean_object* v_x_2555_){
_start:
{
uint8_t v_res_2556_; lean_object* v_r_2557_; 
v_res_2556_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_2554_, v_x_2555_);
lean_dec(v_x_2555_);
lean_dec_ref(v_x_2554_);
v_r_2557_ = lean_box(v_res_2556_);
return v_r_2557_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(lean_object* v_mvarId_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v___x_2561_; lean_object* v_mctx_2562_; lean_object* v_eAssignment_2563_; uint8_t v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2561_ = lean_st_ref_get(v___y_2559_);
v_mctx_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc_ref(v_mctx_2562_);
lean_dec(v___x_2561_);
v_eAssignment_2563_ = lean_ctor_get(v_mctx_2562_, 8);
lean_inc_ref(v_eAssignment_2563_);
lean_dec_ref(v_mctx_2562_);
v___x_2564_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_eAssignment_2563_, v_mvarId_2558_);
lean_dec_ref(v_eAssignment_2563_);
v___x_2565_ = lean_box(v___x_2564_);
v___x_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg___boxed(lean_object* v_mvarId_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_2567_, v___y_2568_);
lean_dec(v___y_2568_);
lean_dec(v_mvarId_2567_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0___boxed(lean_object* v_fuel_2571_, lean_object* v_a_2572_, lean_object* v_x_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l_Lean_Meta_Transport_mkEquiv___lam__0(v_fuel_2571_, v_a_2572_, v_x_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v_fuel_2571_);
return v_res_2579_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2(void){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__4___closed__1));
v___x_2583_ = l_Lean_stringToMessageData(v___x_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1(lean_object* v_fuel_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v___x_2588_, lean_object* v___x_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_declName_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_unsigned_to_nat(1u);
v___x_2599_ = lean_nat_sub(v_fuel_2584_, v___x_2598_);
lean_inc(v___x_2599_);
lean_inc(v_declName_2592_);
v___x_2600_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_2592_, v_a_2585_, v___x_2599_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2602_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v___x_2602_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_2586_, v___y_2594_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2617_; lean_object* v___x_2643_; uint8_t v_transparency_2644_; uint8_t v___x_2645_; uint8_t v___x_2646_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_a_2603_);
lean_dec_ref_known(v___x_2602_, 1);
v___x_2643_ = l_Lean_Meta_Context_config(v___y_2593_);
v_transparency_2644_ = lean_ctor_get_uint8(v___x_2643_, 9);
lean_dec_ref(v___x_2643_);
v___x_2645_ = 1;
v___x_2646_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2644_, v___x_2645_);
if (v___x_2646_ == 0)
{
lean_object* v_keyedConfig_2647_; uint8_t v_trackZetaDelta_2648_; lean_object* v_zetaDeltaSet_2649_; lean_object* v_lctx_2650_; lean_object* v_localInstances_2651_; lean_object* v_defEqCtx_x3f_2652_; lean_object* v_synthPendingDepth_2653_; lean_object* v_customCanUnfoldPredicate_x3f_2654_; uint8_t v_univApprox_2655_; uint8_t v_inTypeClassResolution_2656_; uint8_t v_cacheInferType_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v_keyedConfig_2647_ = lean_ctor_get(v___y_2593_, 0);
v_trackZetaDelta_2648_ = lean_ctor_get_uint8(v___y_2593_, sizeof(void*)*7);
v_zetaDeltaSet_2649_ = lean_ctor_get(v___y_2593_, 1);
v_lctx_2650_ = lean_ctor_get(v___y_2593_, 2);
v_localInstances_2651_ = lean_ctor_get(v___y_2593_, 3);
v_defEqCtx_x3f_2652_ = lean_ctor_get(v___y_2593_, 4);
v_synthPendingDepth_2653_ = lean_ctor_get(v___y_2593_, 5);
v_customCanUnfoldPredicate_x3f_2654_ = lean_ctor_get(v___y_2593_, 6);
v_univApprox_2655_ = lean_ctor_get_uint8(v___y_2593_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2656_ = lean_ctor_get_uint8(v___y_2593_, sizeof(void*)*7 + 2);
v_cacheInferType_2657_ = lean_ctor_get_uint8(v___y_2593_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2647_);
v___x_2658_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2645_, v_keyedConfig_2647_);
lean_inc(v_customCanUnfoldPredicate_x3f_2654_);
lean_inc(v_synthPendingDepth_2653_);
lean_inc(v_defEqCtx_x3f_2652_);
lean_inc_ref(v_localInstances_2651_);
lean_inc_ref(v_lctx_2650_);
lean_inc(v_zetaDeltaSet_2649_);
v___x_2659_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2659_, 0, v___x_2658_);
lean_ctor_set(v___x_2659_, 1, v_zetaDeltaSet_2649_);
lean_ctor_set(v___x_2659_, 2, v_lctx_2650_);
lean_ctor_set(v___x_2659_, 3, v_localInstances_2651_);
lean_ctor_set(v___x_2659_, 4, v_defEqCtx_x3f_2652_);
lean_ctor_set(v___x_2659_, 5, v_synthPendingDepth_2653_);
lean_ctor_set(v___x_2659_, 6, v_customCanUnfoldPredicate_x3f_2654_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*7, v_trackZetaDelta_2648_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*7 + 1, v_univApprox_2655_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2656_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*7 + 3, v_cacheInferType_2657_);
lean_inc(v_a_2603_);
v___x_2660_ = l_Lean_Meta_isExprDefEq(v_a_2603_, v_a_2591_, v___x_2659_, v___y_2594_, v___y_2595_, v___y_2596_);
lean_dec_ref_known(v___x_2659_, 7);
v___y_2617_ = v___x_2660_;
goto v___jp_2616_;
}
else
{
lean_object* v___x_2661_; 
lean_inc(v_a_2603_);
v___x_2661_ = l_Lean_Meta_isExprDefEq(v_a_2603_, v_a_2591_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_);
v___y_2617_ = v___x_2661_;
goto v___jp_2616_;
}
v___jp_2604_:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_Meta_Transport_mkEquiv(v_a_2587_, v_a_2603_, v___x_2599_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2610_);
lean_dec_ref_known(v___x_2609_, 1);
v___x_2611_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0));
v___x_2612_ = l_Lean_Name_mkStr2(v___x_2588_, v___x_2611_);
v___x_2613_ = lean_array_push(v___x_2589_, v_a_2610_);
v___x_2614_ = lean_array_push(v___x_2613_, v_a_2601_);
v___x_2615_ = l_Lean_Meta_mkAppM(v___x_2612_, v___x_2614_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
return v___x_2615_;
}
else
{
lean_dec(v_a_2601_);
lean_dec_ref(v___x_2589_);
lean_dec_ref(v___x_2588_);
return v___x_2609_;
}
}
v___jp_2616_:
{
if (lean_obj_tag(v___y_2617_) == 0)
{
lean_object* v_a_2618_; uint8_t v___x_2619_; 
v_a_2618_ = lean_ctor_get(v___y_2617_, 0);
lean_inc(v_a_2618_);
lean_dec_ref_known(v___y_2617_, 1);
v___x_2619_ = lean_unbox(v_a_2618_);
lean_dec(v_a_2618_);
if (v___x_2619_ == 0)
{
lean_dec(v_declName_2592_);
v___y_2605_ = v___y_2593_;
v___y_2606_ = v___y_2594_;
v___y_2607_ = v___y_2595_;
v___y_2608_ = v___y_2596_;
goto v___jp_2604_;
}
else
{
lean_object* v___x_2620_; uint8_t v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2620_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_2621_ = lean_unbox(v_a_2590_);
v___x_2622_ = l_Lean_MessageData_ofConstName(v_declName_2592_, v___x_2621_);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2620_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2, &l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2);
v___x_2625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2623_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2625_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_dec_ref_known(v___x_2626_, 1);
v___y_2605_ = v___y_2593_;
v___y_2606_ = v___y_2594_;
v___y_2607_ = v___y_2595_;
v___y_2608_ = v___y_2596_;
goto v___jp_2604_;
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_dec(v_a_2603_);
lean_dec(v_a_2601_);
lean_dec(v___x_2599_);
lean_dec_ref(v___x_2589_);
lean_dec_ref(v___x_2588_);
lean_dec_ref(v_a_2587_);
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2626_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2626_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
}
else
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
lean_dec(v_a_2603_);
lean_dec(v_a_2601_);
lean_dec(v___x_2599_);
lean_dec(v_declName_2592_);
lean_dec_ref(v___x_2589_);
lean_dec_ref(v___x_2588_);
lean_dec_ref(v_a_2587_);
v_a_2635_ = lean_ctor_get(v___y_2617_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___y_2617_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2637_ = v___y_2617_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___y_2617_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
}
}
else
{
lean_dec(v_a_2601_);
lean_dec(v___x_2599_);
lean_dec(v_declName_2592_);
lean_dec_ref(v_a_2591_);
lean_dec_ref(v___x_2589_);
lean_dec_ref(v___x_2588_);
lean_dec_ref(v_a_2587_);
return v___x_2602_;
}
}
else
{
lean_dec(v___x_2599_);
lean_dec(v_declName_2592_);
lean_dec_ref(v_a_2591_);
lean_dec_ref(v___x_2589_);
lean_dec_ref(v___x_2588_);
lean_dec_ref(v_a_2587_);
lean_dec_ref(v_a_2586_);
return v___x_2600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__1___boxed(lean_object* v_fuel_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v___x_2666_, lean_object* v___x_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_declName_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_Lean_Meta_Transport_mkEquiv___lam__1(v_fuel_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v___x_2666_, v___x_2667_, v_a_2668_, v_a_2669_, v_declName_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec(v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec(v_a_2668_);
lean_dec(v_fuel_2662_);
return v_res_2676_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2678_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__3___closed__0));
v___x_2679_ = l_Lean_stringToMessageData(v___x_2678_);
return v___x_2679_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3(void){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__3___closed__2));
v___x_2682_ = l_Lean_stringToMessageData(v___x_2681_);
return v___x_2682_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__1(void){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__0));
v___x_2685_ = l_Lean_stringToMessageData(v___x_2684_);
return v___x_2685_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__3(void){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__2));
v___x_2688_ = l_Lean_stringToMessageData(v___x_2687_);
return v___x_2688_;
}
}
static lean_object* _init_l_Lean_Meta_Transport_mkEquiv___closed__9(void){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2697_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_2698_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__8));
v___x_2699_ = l_Lean_Name_append(v___x_2698_, v___x_2697_);
return v___x_2699_;
}
}
static double _init_l_Lean_Meta_Transport_mkEquiv___closed__10(void){
_start:
{
lean_object* v___x_2700_; double v___x_2701_; 
v___x_2700_ = lean_unsigned_to_nat(1000000000u);
v___x_2701_ = lean_float_of_nat(v___x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4(lean_object* v_fuel_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v___x_2706_, lean_object* v___x_2707_, lean_object* v_a_2708_, uint8_t v___x_2709_, lean_object* v_a_2710_, lean_object* v_declName_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2717_ = lean_unsigned_to_nat(1u);
v___x_2718_ = lean_nat_sub(v_fuel_2702_, v___x_2717_);
lean_inc(v___x_2718_);
lean_inc(v_declName_2711_);
v___x_2719_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_2711_, v_a_2703_, v___x_2718_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2721_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_a_2720_);
lean_dec_ref_known(v___x_2719_, 1);
v___x_2721_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_a_2704_, v___y_2713_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_object* v_a_2722_; lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2736_; lean_object* v___x_2762_; uint8_t v_transparency_2763_; uint8_t v___x_2764_; 
v_a_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v___x_2721_, 1);
v___x_2762_ = l_Lean_Meta_Context_config(v___y_2712_);
v_transparency_2763_ = lean_ctor_get_uint8(v___x_2762_, 9);
lean_dec_ref(v___x_2762_);
v___x_2764_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2763_, v___x_2709_);
if (v___x_2764_ == 0)
{
lean_object* v_keyedConfig_2765_; uint8_t v_trackZetaDelta_2766_; lean_object* v_zetaDeltaSet_2767_; lean_object* v_lctx_2768_; lean_object* v_localInstances_2769_; lean_object* v_defEqCtx_x3f_2770_; lean_object* v_synthPendingDepth_2771_; lean_object* v_customCanUnfoldPredicate_x3f_2772_; uint8_t v_univApprox_2773_; uint8_t v_inTypeClassResolution_2774_; uint8_t v_cacheInferType_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v_keyedConfig_2765_ = lean_ctor_get(v___y_2712_, 0);
v_trackZetaDelta_2766_ = lean_ctor_get_uint8(v___y_2712_, sizeof(void*)*7);
v_zetaDeltaSet_2767_ = lean_ctor_get(v___y_2712_, 1);
v_lctx_2768_ = lean_ctor_get(v___y_2712_, 2);
v_localInstances_2769_ = lean_ctor_get(v___y_2712_, 3);
v_defEqCtx_x3f_2770_ = lean_ctor_get(v___y_2712_, 4);
v_synthPendingDepth_2771_ = lean_ctor_get(v___y_2712_, 5);
v_customCanUnfoldPredicate_x3f_2772_ = lean_ctor_get(v___y_2712_, 6);
v_univApprox_2773_ = lean_ctor_get_uint8(v___y_2712_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2774_ = lean_ctor_get_uint8(v___y_2712_, sizeof(void*)*7 + 2);
v_cacheInferType_2775_ = lean_ctor_get_uint8(v___y_2712_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2765_);
v___x_2776_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2709_, v_keyedConfig_2765_);
lean_inc(v_customCanUnfoldPredicate_x3f_2772_);
lean_inc(v_synthPendingDepth_2771_);
lean_inc(v_defEqCtx_x3f_2770_);
lean_inc_ref(v_localInstances_2769_);
lean_inc_ref(v_lctx_2768_);
lean_inc(v_zetaDeltaSet_2767_);
v___x_2777_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
lean_ctor_set(v___x_2777_, 1, v_zetaDeltaSet_2767_);
lean_ctor_set(v___x_2777_, 2, v_lctx_2768_);
lean_ctor_set(v___x_2777_, 3, v_localInstances_2769_);
lean_ctor_set(v___x_2777_, 4, v_defEqCtx_x3f_2770_);
lean_ctor_set(v___x_2777_, 5, v_synthPendingDepth_2771_);
lean_ctor_set(v___x_2777_, 6, v_customCanUnfoldPredicate_x3f_2772_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*7, v_trackZetaDelta_2766_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*7 + 1, v_univApprox_2773_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2774_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*7 + 3, v_cacheInferType_2775_);
lean_inc(v_a_2722_);
v___x_2778_ = l_Lean_Meta_isExprDefEq(v_a_2722_, v_a_2710_, v___x_2777_, v___y_2713_, v___y_2714_, v___y_2715_);
lean_dec_ref_known(v___x_2777_, 7);
v___y_2736_ = v___x_2778_;
goto v___jp_2735_;
}
else
{
lean_object* v___x_2779_; 
lean_inc(v_a_2722_);
v___x_2779_ = l_Lean_Meta_isExprDefEq(v_a_2722_, v_a_2710_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
v___y_2736_ = v___x_2779_;
goto v___jp_2735_;
}
v___jp_2723_:
{
lean_object* v___x_2728_; 
v___x_2728_ = l_Lean_Meta_Transport_mkEquiv(v_a_2705_, v_a_2722_, v___x_2718_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v_a_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
lean_inc(v_a_2729_);
lean_dec_ref_known(v___x_2728_, 1);
v___x_2730_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___lam__4___closed__0));
v___x_2731_ = l_Lean_Name_mkStr2(v___x_2706_, v___x_2730_);
v___x_2732_ = lean_array_push(v___x_2707_, v_a_2729_);
v___x_2733_ = lean_array_push(v___x_2732_, v_a_2720_);
v___x_2734_ = l_Lean_Meta_mkAppM(v___x_2731_, v___x_2733_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
return v___x_2734_;
}
else
{
lean_dec(v_a_2720_);
lean_dec_ref(v___x_2707_);
lean_dec_ref(v___x_2706_);
return v___x_2728_;
}
}
v___jp_2735_:
{
if (lean_obj_tag(v___y_2736_) == 0)
{
lean_object* v_a_2737_; uint8_t v___x_2738_; 
v_a_2737_ = lean_ctor_get(v___y_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___y_2736_, 1);
v___x_2738_ = lean_unbox(v_a_2737_);
lean_dec(v_a_2737_);
if (v___x_2738_ == 0)
{
lean_dec(v_declName_2711_);
v___y_2724_ = v___y_2712_;
v___y_2725_ = v___y_2713_;
v___y_2726_ = v___y_2714_;
v___y_2727_ = v___y_2715_;
goto v___jp_2723_;
}
else
{
lean_object* v___x_2739_; uint8_t v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2739_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_2740_ = lean_unbox(v_a_2708_);
v___x_2741_ = l_Lean_MessageData_ofConstName(v_declName_2711_, v___x_2740_);
v___x_2742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2739_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v___x_2743_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2, &l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__4___closed__2);
v___x_2744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2744_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_dec_ref_known(v___x_2745_, 1);
v___y_2724_ = v___y_2712_;
v___y_2725_ = v___y_2713_;
v___y_2726_ = v___y_2714_;
v___y_2727_ = v___y_2715_;
goto v___jp_2723_;
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_dec(v_a_2722_);
lean_dec(v_a_2720_);
lean_dec(v___x_2718_);
lean_dec_ref(v___x_2707_);
lean_dec_ref(v___x_2706_);
lean_dec_ref(v_a_2705_);
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2745_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2745_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
lean_dec(v_a_2722_);
lean_dec(v_a_2720_);
lean_dec(v___x_2718_);
lean_dec(v_declName_2711_);
lean_dec_ref(v___x_2707_);
lean_dec_ref(v___x_2706_);
lean_dec_ref(v_a_2705_);
v_a_2754_ = lean_ctor_get(v___y_2736_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___y_2736_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___y_2736_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___y_2736_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_a_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
}
else
{
lean_dec(v_a_2720_);
lean_dec(v___x_2718_);
lean_dec(v_declName_2711_);
lean_dec_ref(v_a_2710_);
lean_dec_ref(v___x_2707_);
lean_dec_ref(v___x_2706_);
lean_dec_ref(v_a_2705_);
return v___x_2721_;
}
}
else
{
lean_dec(v___x_2718_);
lean_dec(v_declName_2711_);
lean_dec_ref(v_a_2710_);
lean_dec_ref(v___x_2707_);
lean_dec_ref(v___x_2706_);
lean_dec_ref(v_a_2705_);
lean_dec_ref(v_a_2704_);
return v___x_2719_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__4___boxed(lean_object* v_fuel_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_, lean_object* v___x_2784_, lean_object* v___x_2785_, lean_object* v_a_2786_, lean_object* v___x_2787_, lean_object* v_a_2788_, lean_object* v_declName_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
uint8_t v___x_36968__boxed_2795_; lean_object* v_res_2796_; 
v___x_36968__boxed_2795_ = lean_unbox(v___x_2787_);
v_res_2796_ = l_Lean_Meta_Transport_mkEquiv___lam__4(v_fuel_2780_, v_a_2781_, v_a_2782_, v_a_2783_, v___x_2784_, v___x_2785_, v_a_2786_, v___x_36968__boxed_2795_, v_a_2788_, v_declName_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v_a_2786_);
lean_dec(v_fuel_2780_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3(lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_fuel_2799_, lean_object* v___x_2800_, lean_object* v_a_2801_, uint8_t v___x_2802_, lean_object* v_____r_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2809_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_2810_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_2811_ = lean_unsigned_to_nat(2u);
v___x_2812_ = lean_mk_empty_array_with_capacity(v___x_2811_);
lean_inc_ref(v_a_2797_);
lean_inc_ref(v___x_2812_);
v___x_2813_ = lean_array_push(v___x_2812_, v_a_2797_);
lean_inc_ref(v_a_2798_);
v___x_2814_ = lean_array_push(v___x_2813_, v_a_2798_);
v___x_2815_ = l_Lean_Meta_mkAppM(v___x_2810_, v___x_2814_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___f_2817_; lean_object* v___x_2818_; lean_object* v_env_2819_; lean_object* v___x_2820_; lean_object* v_ext_2821_; lean_object* v_toEnvExtension_2822_; lean_object* v_asyncMode_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc_n(v_a_2816_, 2);
lean_dec_ref_known(v___x_2815_, 1);
lean_inc(v_fuel_2799_);
v___f_2817_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2817_, 0, v_fuel_2799_);
lean_closure_set(v___f_2817_, 1, v_a_2816_);
v___x_2818_ = lean_st_ref_get(v___y_2807_);
v_env_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc_ref(v_env_2819_);
lean_dec(v___x_2818_);
v___x_2820_ = l_Lean_Meta_Transport_transportExt;
v_ext_2821_ = lean_ctor_get(v___x_2820_, 1);
v_toEnvExtension_2822_ = lean_ctor_get(v_ext_2821_, 0);
v_asyncMode_2823_ = lean_ctor_get(v_toEnvExtension_2822_, 2);
v___x_2824_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2800_, v___x_2820_, v_env_2819_, v_asyncMode_2823_);
lean_inc(v___x_2824_);
v___x_2825_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2824_, v_a_2816_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2827_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2826_);
lean_dec_ref_known(v___x_2825_, 1);
v___x_2827_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2826_, v___f_2817_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
lean_dec(v_a_2826_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2903_; 
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2830_ = v___x_2827_;
v_isShared_2831_ = v_isSharedCheck_2903_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2903_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
if (lean_obj_tag(v_a_2828_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2898_; 
lean_del_object(v___x_2830_);
v_a_2832_ = lean_ctor_get(v_a_2828_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_a_2828_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2834_ = v_a_2828_;
v_isShared_2835_ = v_isSharedCheck_2898_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v_a_2828_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2898_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v___x_2838_; lean_object* v___x_2840_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
v___x_2838_ = l_Lean_mkSort(v_a_2837_);
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 1);
lean_ctor_set(v___x_2834_, 0, v___x_2838_);
v___x_2840_ = v___x_2834_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v___x_2838_);
v___x_2840_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
uint8_t v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2841_ = 0;
v___x_2842_ = lean_box(0);
v___x_2843_ = l_Lean_Meta_mkFreshExprMVar(v___x_2840_, v___x_2841_, v___x_2842_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
lean_inc_n(v_a_2844_, 2);
lean_dec_ref_known(v___x_2843_, 1);
lean_inc_ref(v___x_2812_);
v___x_2845_ = lean_array_push(v___x_2812_, v_a_2844_);
lean_inc_ref(v_a_2798_);
v___x_2846_ = lean_array_push(v___x_2845_, v_a_2798_);
v___x_2847_ = l_Lean_Meta_mkAppM(v___x_2810_, v___x_2846_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2849_; lean_object* v___f_2850_; lean_object* v___x_2851_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc_n(v_a_2848_, 2);
lean_dec_ref_known(v___x_2847_, 1);
v___x_2849_ = lean_box(v___x_2802_);
lean_inc_ref(v_a_2798_);
lean_inc_ref(v_a_2797_);
v___f_2850_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__4___boxed), 15, 9);
lean_closure_set(v___f_2850_, 0, v_fuel_2799_);
lean_closure_set(v___f_2850_, 1, v_a_2848_);
lean_closure_set(v___f_2850_, 2, v_a_2844_);
lean_closure_set(v___f_2850_, 3, v_a_2797_);
lean_closure_set(v___f_2850_, 4, v___x_2809_);
lean_closure_set(v___f_2850_, 5, v___x_2812_);
lean_closure_set(v___f_2850_, 6, v_a_2801_);
lean_closure_set(v___f_2850_, 7, v___x_2849_);
lean_closure_set(v___f_2850_, 8, v_a_2798_);
v___x_2851_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2824_, v_a_2848_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v_a_2852_; lean_object* v___x_2853_; 
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_a_2852_);
lean_dec_ref_known(v___x_2851_, 1);
v___x_2853_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2852_, v___f_2850_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
lean_dec(v_a_2852_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2872_; 
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2856_ = v___x_2853_;
v_isShared_2857_ = v_isSharedCheck_2872_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2853_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2872_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
if (lean_obj_tag(v_a_2854_) == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
lean_dec_ref_known(v_a_2854_, 1);
lean_del_object(v___x_2856_);
v___x_2858_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1);
v___x_2859_ = l_Lean_indentExpr(v_a_2797_);
v___x_2860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2858_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3);
v___x_2862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2860_);
lean_ctor_set(v___x_2862_, 1, v___x_2861_);
v___x_2863_ = l_Lean_indentExpr(v_a_2798_);
v___x_2864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2862_);
lean_ctor_set(v___x_2864_, 1, v___x_2863_);
v___x_2865_ = l_Lean_MessageData_note(v_a_2832_);
v___x_2866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2864_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_2866_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
return v___x_2867_;
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; 
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2868_ = lean_ctor_get(v_a_2854_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v_a_2854_, 1);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v_a_2868_);
v___x_2870_ = v___x_2856_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2868_);
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
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2873_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2853_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2853_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec_ref(v___f_2850_);
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2881_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___x_2851_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2851_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2881_);
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
lean_dec(v_a_2844_);
lean_dec(v_a_2832_);
lean_dec(v___x_2824_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
return v___x_2847_;
}
}
else
{
lean_dec(v_a_2832_);
lean_dec(v___x_2824_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
return v___x_2843_;
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_del_object(v___x_2834_);
lean_dec(v_a_2832_);
lean_dec(v___x_2824_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2890_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2836_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2836_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
}
else
{
lean_object* v_a_2899_; lean_object* v___x_2901_; 
lean_dec(v___x_2824_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2899_ = lean_ctor_get(v_a_2828_, 0);
lean_inc(v_a_2899_);
lean_dec_ref_known(v_a_2828_, 1);
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 0, v_a_2899_);
v___x_2901_ = v___x_2830_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2899_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec(v___x_2824_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2904_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2827_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2827_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec(v___x_2824_);
lean_dec_ref(v___f_2817_);
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
v_a_2912_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2825_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2825_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2801_);
lean_dec(v_fuel_2799_);
lean_dec_ref(v_a_2798_);
lean_dec_ref(v_a_2797_);
return v___x_2815_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv(lean_object* v_src_2920_, lean_object* v_tgt_2921_, lean_object* v_fuel_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_initFn_00___x40_Lean_Meta_Transport_3772527571____hygCtx___hyg_2__spec__0_spec__2___closed__0);
v___x_2929_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_src_2920_, v_a_2924_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_3462_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_2932_ = v___x_2929_;
v_isShared_2933_ = v_isSharedCheck_3462_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_3462_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2934_; 
v___x_2934_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_tgt_2921_, v_a_2924_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_3461_; 
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_2934_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_2937_ = v___x_2934_;
v_isShared_2938_ = v_isSharedCheck_3461_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v___x_2934_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_3461_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_3056_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3207_; lean_object* v_toCold_3241_; lean_object* v_options_3242_; lean_object* v_inheritedTraceOptions_3243_; uint8_t v_hasTrace_3244_; uint8_t v___x_3245_; 
v_toCold_3241_ = lean_ctor_get(v_a_2925_, 0);
v_options_3242_ = lean_ctor_get(v_toCold_3241_, 2);
v_inheritedTraceOptions_3243_ = lean_ctor_get(v_toCold_3241_, 11);
v_hasTrace_3244_ = lean_ctor_get_uint8(v_options_3242_, sizeof(void*)*1);
v___x_3245_ = 1;
if (v_hasTrace_3244_ == 0)
{
lean_object* v___x_3246_; uint8_t v_transparency_3247_; uint8_t v___x_3248_; 
lean_del_object(v___x_2937_);
lean_del_object(v___x_2932_);
v___x_3246_ = l_Lean_Meta_Context_config(v_a_2923_);
v_transparency_3247_ = lean_ctor_get_uint8(v___x_3246_, 9);
lean_dec_ref(v___x_3246_);
v___x_3248_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3247_, v___x_3245_);
if (v___x_3248_ == 0)
{
lean_object* v_keyedConfig_3249_; uint8_t v_trackZetaDelta_3250_; lean_object* v_zetaDeltaSet_3251_; lean_object* v_lctx_3252_; lean_object* v_localInstances_3253_; lean_object* v_defEqCtx_x3f_3254_; lean_object* v_synthPendingDepth_3255_; lean_object* v_customCanUnfoldPredicate_x3f_3256_; uint8_t v_univApprox_3257_; uint8_t v_inTypeClassResolution_3258_; uint8_t v_cacheInferType_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v_keyedConfig_3249_ = lean_ctor_get(v_a_2923_, 0);
v_trackZetaDelta_3250_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7);
v_zetaDeltaSet_3251_ = lean_ctor_get(v_a_2923_, 1);
v_lctx_3252_ = lean_ctor_get(v_a_2923_, 2);
v_localInstances_3253_ = lean_ctor_get(v_a_2923_, 3);
v_defEqCtx_x3f_3254_ = lean_ctor_get(v_a_2923_, 4);
v_synthPendingDepth_3255_ = lean_ctor_get(v_a_2923_, 5);
v_customCanUnfoldPredicate_x3f_3256_ = lean_ctor_get(v_a_2923_, 6);
v_univApprox_3257_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3258_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 2);
v_cacheInferType_3259_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3249_);
v___x_3260_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3245_, v_keyedConfig_3249_);
lean_inc(v_customCanUnfoldPredicate_x3f_3256_);
lean_inc(v_synthPendingDepth_3255_);
lean_inc(v_defEqCtx_x3f_3254_);
lean_inc_ref(v_localInstances_3253_);
lean_inc_ref(v_lctx_3252_);
lean_inc(v_zetaDeltaSet_3251_);
v___x_3261_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3261_, 0, v___x_3260_);
lean_ctor_set(v___x_3261_, 1, v_zetaDeltaSet_3251_);
lean_ctor_set(v___x_3261_, 2, v_lctx_3252_);
lean_ctor_set(v___x_3261_, 3, v_localInstances_3253_);
lean_ctor_set(v___x_3261_, 4, v_defEqCtx_x3f_3254_);
lean_ctor_set(v___x_3261_, 5, v_synthPendingDepth_3255_);
lean_ctor_set(v___x_3261_, 6, v_customCanUnfoldPredicate_x3f_3256_);
lean_ctor_set_uint8(v___x_3261_, sizeof(void*)*7, v_trackZetaDelta_3250_);
lean_ctor_set_uint8(v___x_3261_, sizeof(void*)*7 + 1, v_univApprox_3257_);
lean_ctor_set_uint8(v___x_3261_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3258_);
lean_ctor_set_uint8(v___x_3261_, sizeof(void*)*7 + 3, v_cacheInferType_3259_);
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3262_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v___x_3261_, v_a_2924_, v_a_2925_, v_a_2926_);
lean_dec_ref_known(v___x_3261_, 7);
v___y_3207_ = v___x_3262_;
goto v___jp_3206_;
}
else
{
lean_object* v___x_3263_; 
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3263_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3207_ = v___x_3263_;
goto v___jp_3206_;
}
}
else
{
lean_object* v___f_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; uint8_t v___x_3268_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v_a_3272_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v_a_3287_; lean_object* v___y_3292_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v_a_3334_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v_a_3346_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; 
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___f_3264_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3264_, 0, v_a_2930_);
lean_closure_set(v___f_3264_, 1, v_a_2935_);
v___x_3265_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Transport_1380866075____hygCtx___hyg_2_));
v___x_3266_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__6));
v___x_3267_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__9, &l_Lean_Meta_Transport_mkEquiv___closed__9_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__9);
v___x_3268_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3243_, v_options_3242_, v___x_3267_);
if (v___x_3268_ == 0)
{
lean_object* v___x_3441_; uint8_t v___x_3442_; 
v___x_3441_ = l_Lean_trace_profiler;
v___x_3442_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_3242_, v___x_3441_);
if (v___x_3442_ == 0)
{
lean_object* v___x_3443_; uint8_t v_transparency_3444_; uint8_t v___x_3445_; 
lean_dec_ref(v___f_3264_);
lean_del_object(v___x_2937_);
lean_del_object(v___x_2932_);
v___x_3443_ = l_Lean_Meta_Context_config(v_a_2923_);
v_transparency_3444_ = lean_ctor_get_uint8(v___x_3443_, 9);
lean_dec_ref(v___x_3443_);
v___x_3445_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3444_, v___x_3245_);
if (v___x_3445_ == 0)
{
lean_object* v_keyedConfig_3446_; uint8_t v_trackZetaDelta_3447_; lean_object* v_zetaDeltaSet_3448_; lean_object* v_lctx_3449_; lean_object* v_localInstances_3450_; lean_object* v_defEqCtx_x3f_3451_; lean_object* v_synthPendingDepth_3452_; lean_object* v_customCanUnfoldPredicate_x3f_3453_; uint8_t v_univApprox_3454_; uint8_t v_inTypeClassResolution_3455_; uint8_t v_cacheInferType_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
v_keyedConfig_3446_ = lean_ctor_get(v_a_2923_, 0);
v_trackZetaDelta_3447_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7);
v_zetaDeltaSet_3448_ = lean_ctor_get(v_a_2923_, 1);
v_lctx_3449_ = lean_ctor_get(v_a_2923_, 2);
v_localInstances_3450_ = lean_ctor_get(v_a_2923_, 3);
v_defEqCtx_x3f_3451_ = lean_ctor_get(v_a_2923_, 4);
v_synthPendingDepth_3452_ = lean_ctor_get(v_a_2923_, 5);
v_customCanUnfoldPredicate_x3f_3453_ = lean_ctor_get(v_a_2923_, 6);
v_univApprox_3454_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3455_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 2);
v_cacheInferType_3456_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3446_);
v___x_3457_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3245_, v_keyedConfig_3446_);
lean_inc(v_customCanUnfoldPredicate_x3f_3453_);
lean_inc(v_synthPendingDepth_3452_);
lean_inc(v_defEqCtx_x3f_3451_);
lean_inc_ref(v_localInstances_3450_);
lean_inc_ref(v_lctx_3449_);
lean_inc(v_zetaDeltaSet_3448_);
v___x_3458_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
lean_ctor_set(v___x_3458_, 1, v_zetaDeltaSet_3448_);
lean_ctor_set(v___x_3458_, 2, v_lctx_3449_);
lean_ctor_set(v___x_3458_, 3, v_localInstances_3450_);
lean_ctor_set(v___x_3458_, 4, v_defEqCtx_x3f_3451_);
lean_ctor_set(v___x_3458_, 5, v_synthPendingDepth_3452_);
lean_ctor_set(v___x_3458_, 6, v_customCanUnfoldPredicate_x3f_3453_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*7, v_trackZetaDelta_3447_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*7 + 1, v_univApprox_3454_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3455_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*7 + 3, v_cacheInferType_3456_);
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3459_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v___x_3458_, v_a_2924_, v_a_2925_, v_a_2926_);
lean_dec_ref_known(v___x_3458_, 7);
v___y_3056_ = v___x_3459_;
goto v___jp_3055_;
}
else
{
lean_object* v___x_3460_; 
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3460_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3056_ = v___x_3460_;
goto v___jp_3055_;
}
}
else
{
goto v___jp_3390_;
}
}
else
{
goto v___jp_3390_;
}
v___jp_3269_:
{
lean_object* v___x_3273_; double v___x_3274_; double v___x_3275_; double v___x_3276_; double v___x_3277_; double v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3273_ = lean_io_mono_nanos_now();
v___x_3274_ = lean_float_of_nat(v___y_3270_);
v___x_3275_ = lean_float_once(&l_Lean_Meta_Transport_mkEquiv___closed__10, &l_Lean_Meta_Transport_mkEquiv___closed__10_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__10);
v___x_3276_ = lean_float_div(v___x_3274_, v___x_3275_);
v___x_3277_ = lean_float_of_nat(v___x_3273_);
v___x_3278_ = lean_float_div(v___x_3277_, v___x_3275_);
v___x_3279_ = lean_box_float(v___x_3276_);
v___x_3280_ = lean_box_float(v___x_3278_);
v___x_3281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3279_);
lean_ctor_set(v___x_3281_, 1, v___x_3280_);
v___x_3282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3282_, 0, v_a_3272_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_3265_, v_hasTrace_3244_, v___x_3266_, v_options_3242_, v___x_3268_, v___y_3271_, v___f_3264_, v___x_3282_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
return v___x_3283_;
}
v___jp_3284_:
{
lean_object* v___x_3289_; 
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v_a_3287_);
v___x_3289_ = v___x_2937_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3287_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
v___y_3270_ = v___y_3285_;
v___y_3271_ = v___y_3286_;
v_a_3272_ = v___x_3289_;
goto v___jp_3269_;
}
}
v___jp_3291_:
{
if (lean_obj_tag(v___y_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
lean_del_object(v___x_2937_);
v_a_3295_ = lean_ctor_get(v___y_3294_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___y_3294_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___y_3294_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___y_3294_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
lean_ctor_set_tag(v___x_3297_, 1);
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_a_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
v___y_3270_ = v___y_3292_;
v___y_3271_ = v___y_3293_;
v_a_3272_ = v___x_3300_;
goto v___jp_3269_;
}
}
}
else
{
lean_object* v_a_3303_; 
v_a_3303_ = lean_ctor_get(v___y_3294_, 0);
lean_inc(v_a_3303_);
lean_dec_ref_known(v___y_3294_, 1);
v___y_3285_ = v___y_3292_;
v___y_3286_ = v___y_3293_;
v_a_3287_ = v_a_3303_;
goto v___jp_3284_;
}
}
v___jp_3304_:
{
if (lean_obj_tag(v___y_3307_) == 0)
{
lean_object* v_a_3308_; uint8_t v___x_3309_; 
v_a_3308_ = lean_ctor_get(v___y_3307_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___y_3307_, 1);
v___x_3309_ = lean_unbox(v_a_3308_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3310_; uint8_t v___x_3311_; 
v___x_3310_ = lean_unsigned_to_nat(0u);
v___x_3311_ = lean_nat_dec_eq(v_fuel_2922_, v___x_3310_);
if (v___x_3311_ == 0)
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = lean_box(0);
v___x_3313_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2930_, v_a_2935_, v_fuel_2922_, v___x_2928_, v_a_3308_, v___x_3245_, v___x_3312_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3292_ = v___y_3305_;
v___y_3293_ = v___y_3306_;
v___y_3294_ = v___x_3313_;
goto v___jp_3291_;
}
else
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3314_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2930_);
v___x_3315_ = l_Lean_indentExpr(v_a_2930_);
v___x_3316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3314_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3316_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
lean_inc(v_a_2935_);
v___x_3319_ = l_Lean_indentExpr(v_a_2935_);
v___x_3320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3318_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3320_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
if (lean_obj_tag(v___x_3321_) == 0)
{
lean_object* v_a_3322_; lean_object* v___x_3323_; 
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_a_3322_);
lean_dec_ref_known(v___x_3321_, 1);
v___x_3323_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2930_, v_a_2935_, v_fuel_2922_, v___x_2928_, v_a_3308_, v___x_3245_, v_a_3322_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3292_ = v___y_3305_;
v___y_3293_ = v___y_3306_;
v___y_3294_ = v___x_3323_;
goto v___jp_3291_;
}
else
{
lean_object* v_a_3324_; 
lean_dec(v_a_3308_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3324_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_a_3324_);
lean_dec_ref_known(v___x_3321_, 1);
v___y_3285_ = v___y_3305_;
v___y_3286_ = v___y_3306_;
v_a_3287_ = v_a_3324_;
goto v___jp_3284_;
}
}
}
else
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
lean_dec(v_a_3308_);
lean_dec(v_a_2935_);
lean_dec(v_fuel_2922_);
v___x_3325_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3326_ = lean_unsigned_to_nat(1u);
v___x_3327_ = lean_mk_empty_array_with_capacity(v___x_3326_);
v___x_3328_ = lean_array_push(v___x_3327_, v_a_2930_);
v___x_3329_ = l_Lean_Meta_mkAppM(v___x_3325_, v___x_3328_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3292_ = v___y_3305_;
v___y_3293_ = v___y_3306_;
v___y_3294_ = v___x_3329_;
goto v___jp_3291_;
}
}
else
{
lean_object* v_a_3330_; 
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3330_ = lean_ctor_get(v___y_3307_, 0);
lean_inc(v_a_3330_);
lean_dec_ref_known(v___y_3307_, 1);
v___y_3285_ = v___y_3305_;
v___y_3286_ = v___y_3306_;
v_a_3287_ = v_a_3330_;
goto v___jp_3284_;
}
}
v___jp_3331_:
{
lean_object* v___x_3335_; double v___x_3336_; double v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3335_ = lean_io_get_num_heartbeats();
v___x_3336_ = lean_float_of_nat(v___y_3333_);
v___x_3337_ = lean_float_of_nat(v___x_3335_);
v___x_3338_ = lean_box_float(v___x_3336_);
v___x_3339_ = lean_box_float(v___x_3337_);
v___x_3340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3338_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
v___x_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3341_, 0, v_a_3334_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6(v___x_3265_, v_hasTrace_3244_, v___x_3266_, v_options_3242_, v___x_3268_, v___y_3332_, v___f_3264_, v___x_3341_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
return v___x_3342_;
}
v___jp_3343_:
{
lean_object* v___x_3348_; 
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 0, v_a_3346_);
v___x_3348_ = v___x_2932_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3346_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
v___y_3332_ = v___y_3344_;
v___y_3333_ = v___y_3345_;
v_a_3334_ = v___x_3348_;
goto v___jp_3331_;
}
}
v___jp_3350_:
{
if (lean_obj_tag(v___y_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
lean_del_object(v___x_2932_);
v_a_3354_ = lean_ctor_get(v___y_3353_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___y_3353_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___y_3353_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___y_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
lean_ctor_set_tag(v___x_3356_, 1);
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
v___y_3332_ = v___y_3351_;
v___y_3333_ = v___y_3352_;
v_a_3334_ = v___x_3359_;
goto v___jp_3331_;
}
}
}
else
{
lean_object* v_a_3362_; 
v_a_3362_ = lean_ctor_get(v___y_3353_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___y_3353_, 1);
v___y_3344_ = v___y_3351_;
v___y_3345_ = v___y_3352_;
v_a_3346_ = v_a_3362_;
goto v___jp_3343_;
}
}
v___jp_3363_:
{
if (lean_obj_tag(v___y_3366_) == 0)
{
lean_object* v_a_3367_; uint8_t v___x_3368_; 
v_a_3367_ = lean_ctor_get(v___y_3366_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___y_3366_, 1);
v___x_3368_ = lean_unbox(v_a_3367_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; uint8_t v___x_3370_; 
v___x_3369_ = lean_unsigned_to_nat(0u);
v___x_3370_ = lean_nat_dec_eq(v_fuel_2922_, v___x_3369_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = lean_box(0);
v___x_3372_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2930_, v_a_2935_, v_fuel_2922_, v___x_2928_, v_a_3367_, v___x_3245_, v___x_3371_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3351_ = v___y_3364_;
v___y_3352_ = v___y_3365_;
v___y_3353_ = v___x_3372_;
goto v___jp_3350_;
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3373_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2930_);
v___x_3374_ = l_Lean_indentExpr(v_a_2930_);
v___x_3375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3373_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3375_);
lean_ctor_set(v___x_3377_, 1, v___x_3376_);
lean_inc(v_a_2935_);
v___x_3378_ = l_Lean_indentExpr(v_a_2935_);
v___x_3379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3377_);
lean_ctor_set(v___x_3379_, 1, v___x_3378_);
v___x_3380_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3379_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v___x_3382_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref_known(v___x_3380_, 1);
v___x_3382_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_2930_, v_a_2935_, v_fuel_2922_, v___x_2928_, v_a_3367_, v___x_3245_, v_a_3381_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3351_ = v___y_3364_;
v___y_3352_ = v___y_3365_;
v___y_3353_ = v___x_3382_;
goto v___jp_3350_;
}
else
{
lean_object* v_a_3383_; 
lean_dec(v_a_3367_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3383_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___x_3380_, 1);
v___y_3344_ = v___y_3364_;
v___y_3345_ = v___y_3365_;
v_a_3346_ = v_a_3383_;
goto v___jp_3343_;
}
}
}
else
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
lean_dec(v_a_3367_);
lean_dec(v_a_2935_);
lean_dec(v_fuel_2922_);
v___x_3384_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3385_ = lean_unsigned_to_nat(1u);
v___x_3386_ = lean_mk_empty_array_with_capacity(v___x_3385_);
v___x_3387_ = lean_array_push(v___x_3386_, v_a_2930_);
v___x_3388_ = l_Lean_Meta_mkAppM(v___x_3384_, v___x_3387_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3351_ = v___y_3364_;
v___y_3352_ = v___y_3365_;
v___y_3353_ = v___x_3388_;
goto v___jp_3350_;
}
}
else
{
lean_object* v_a_3389_; 
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3389_ = lean_ctor_get(v___y_3366_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v___y_3366_, 1);
v___y_3344_ = v___y_3364_;
v___y_3345_ = v___y_3365_;
v_a_3346_ = v_a_3389_;
goto v___jp_3343_;
}
}
v___jp_3390_:
{
lean_object* v___x_3391_; 
v___x_3391_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v_a_2926_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3393_; uint8_t v___x_3394_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
lean_inc(v_a_3392_);
lean_dec_ref_known(v___x_3391_, 1);
v___x_3393_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3394_ = l_Lean_Option_get___at___00Lean_Meta_Transport_mkEquiv_spec__5(v_options_3242_, v___x_3393_);
if (v___x_3394_ == 0)
{
lean_object* v___x_3395_; lean_object* v___x_3396_; uint8_t v_transparency_3397_; uint8_t v___x_3398_; 
lean_del_object(v___x_2932_);
v___x_3395_ = lean_io_mono_nanos_now();
v___x_3396_ = l_Lean_Meta_Context_config(v_a_2923_);
v_transparency_3397_ = lean_ctor_get_uint8(v___x_3396_, 9);
lean_dec_ref(v___x_3396_);
v___x_3398_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3397_, v___x_3245_);
if (v___x_3398_ == 0)
{
lean_object* v_keyedConfig_3399_; uint8_t v_trackZetaDelta_3400_; lean_object* v_zetaDeltaSet_3401_; lean_object* v_lctx_3402_; lean_object* v_localInstances_3403_; lean_object* v_defEqCtx_x3f_3404_; lean_object* v_synthPendingDepth_3405_; lean_object* v_customCanUnfoldPredicate_x3f_3406_; uint8_t v_univApprox_3407_; uint8_t v_inTypeClassResolution_3408_; uint8_t v_cacheInferType_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v_keyedConfig_3399_ = lean_ctor_get(v_a_2923_, 0);
v_trackZetaDelta_3400_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7);
v_zetaDeltaSet_3401_ = lean_ctor_get(v_a_2923_, 1);
v_lctx_3402_ = lean_ctor_get(v_a_2923_, 2);
v_localInstances_3403_ = lean_ctor_get(v_a_2923_, 3);
v_defEqCtx_x3f_3404_ = lean_ctor_get(v_a_2923_, 4);
v_synthPendingDepth_3405_ = lean_ctor_get(v_a_2923_, 5);
v_customCanUnfoldPredicate_x3f_3406_ = lean_ctor_get(v_a_2923_, 6);
v_univApprox_3407_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3408_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 2);
v_cacheInferType_3409_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3399_);
v___x_3410_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3245_, v_keyedConfig_3399_);
lean_inc(v_customCanUnfoldPredicate_x3f_3406_);
lean_inc(v_synthPendingDepth_3405_);
lean_inc(v_defEqCtx_x3f_3404_);
lean_inc_ref(v_localInstances_3403_);
lean_inc_ref(v_lctx_3402_);
lean_inc(v_zetaDeltaSet_3401_);
v___x_3411_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
lean_ctor_set(v___x_3411_, 1, v_zetaDeltaSet_3401_);
lean_ctor_set(v___x_3411_, 2, v_lctx_3402_);
lean_ctor_set(v___x_3411_, 3, v_localInstances_3403_);
lean_ctor_set(v___x_3411_, 4, v_defEqCtx_x3f_3404_);
lean_ctor_set(v___x_3411_, 5, v_synthPendingDepth_3405_);
lean_ctor_set(v___x_3411_, 6, v_customCanUnfoldPredicate_x3f_3406_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7, v_trackZetaDelta_3400_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7 + 1, v_univApprox_3407_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3408_);
lean_ctor_set_uint8(v___x_3411_, sizeof(void*)*7 + 3, v_cacheInferType_3409_);
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3412_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v___x_3411_, v_a_2924_, v_a_2925_, v_a_2926_);
lean_dec_ref_known(v___x_3411_, 7);
v___y_3305_ = v___x_3395_;
v___y_3306_ = v_a_3392_;
v___y_3307_ = v___x_3412_;
goto v___jp_3304_;
}
else
{
lean_object* v___x_3413_; 
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3413_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3305_ = v___x_3395_;
v___y_3306_ = v_a_3392_;
v___y_3307_ = v___x_3413_;
goto v___jp_3304_;
}
}
else
{
lean_object* v___x_3414_; lean_object* v___x_3415_; uint8_t v_transparency_3416_; uint8_t v___x_3417_; 
lean_del_object(v___x_2937_);
v___x_3414_ = lean_io_get_num_heartbeats();
v___x_3415_ = l_Lean_Meta_Context_config(v_a_2923_);
v_transparency_3416_ = lean_ctor_get_uint8(v___x_3415_, 9);
lean_dec_ref(v___x_3415_);
v___x_3417_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3416_, v___x_3245_);
if (v___x_3417_ == 0)
{
lean_object* v_keyedConfig_3418_; uint8_t v_trackZetaDelta_3419_; lean_object* v_zetaDeltaSet_3420_; lean_object* v_lctx_3421_; lean_object* v_localInstances_3422_; lean_object* v_defEqCtx_x3f_3423_; lean_object* v_synthPendingDepth_3424_; lean_object* v_customCanUnfoldPredicate_x3f_3425_; uint8_t v_univApprox_3426_; uint8_t v_inTypeClassResolution_3427_; uint8_t v_cacheInferType_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_keyedConfig_3418_ = lean_ctor_get(v_a_2923_, 0);
v_trackZetaDelta_3419_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7);
v_zetaDeltaSet_3420_ = lean_ctor_get(v_a_2923_, 1);
v_lctx_3421_ = lean_ctor_get(v_a_2923_, 2);
v_localInstances_3422_ = lean_ctor_get(v_a_2923_, 3);
v_defEqCtx_x3f_3423_ = lean_ctor_get(v_a_2923_, 4);
v_synthPendingDepth_3424_ = lean_ctor_get(v_a_2923_, 5);
v_customCanUnfoldPredicate_x3f_3425_ = lean_ctor_get(v_a_2923_, 6);
v_univApprox_3426_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3427_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 2);
v_cacheInferType_3428_ = lean_ctor_get_uint8(v_a_2923_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3418_);
v___x_3429_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3245_, v_keyedConfig_3418_);
lean_inc(v_customCanUnfoldPredicate_x3f_3425_);
lean_inc(v_synthPendingDepth_3424_);
lean_inc(v_defEqCtx_x3f_3423_);
lean_inc_ref(v_localInstances_3422_);
lean_inc_ref(v_lctx_3421_);
lean_inc(v_zetaDeltaSet_3420_);
v___x_3430_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3430_, 0, v___x_3429_);
lean_ctor_set(v___x_3430_, 1, v_zetaDeltaSet_3420_);
lean_ctor_set(v___x_3430_, 2, v_lctx_3421_);
lean_ctor_set(v___x_3430_, 3, v_localInstances_3422_);
lean_ctor_set(v___x_3430_, 4, v_defEqCtx_x3f_3423_);
lean_ctor_set(v___x_3430_, 5, v_synthPendingDepth_3424_);
lean_ctor_set(v___x_3430_, 6, v_customCanUnfoldPredicate_x3f_3425_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*7, v_trackZetaDelta_3419_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*7 + 1, v_univApprox_3426_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3427_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*7 + 3, v_cacheInferType_3428_);
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3431_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v___x_3430_, v_a_2924_, v_a_2925_, v_a_2926_);
lean_dec_ref_known(v___x_3430_, 7);
v___y_3364_ = v_a_3392_;
v___y_3365_ = v___x_3414_;
v___y_3366_ = v___x_3431_;
goto v___jp_3363_;
}
else
{
lean_object* v___x_3432_; 
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___x_3432_ = l_Lean_Meta_isExprDefEq(v_a_2930_, v_a_2935_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
v___y_3364_ = v_a_3392_;
v___y_3365_ = v___x_3414_;
v___y_3366_ = v___x_3432_;
goto v___jp_3363_;
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec_ref(v___f_3264_);
lean_del_object(v___x_2937_);
lean_dec(v_a_2935_);
lean_del_object(v___x_2932_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3433_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3391_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3391_);
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
v___jp_2939_:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2945_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_2946_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_2947_ = lean_unsigned_to_nat(2u);
v___x_2948_ = lean_mk_empty_array_with_capacity(v___x_2947_);
lean_inc(v_a_2930_);
lean_inc_ref(v___x_2948_);
v___x_2949_ = lean_array_push(v___x_2948_, v_a_2930_);
lean_inc(v_a_2935_);
v___x_2950_ = lean_array_push(v___x_2949_, v_a_2935_);
v___x_2951_ = l_Lean_Meta_mkAppM(v___x_2946_, v___x_2950_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___f_2953_; lean_object* v___x_2954_; lean_object* v_env_2955_; lean_object* v___x_2956_; lean_object* v_ext_2957_; lean_object* v_toEnvExtension_2958_; lean_object* v_asyncMode_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc_n(v_a_2952_, 2);
lean_dec_ref_known(v___x_2951_, 1);
lean_inc(v_fuel_2922_);
v___f_2953_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2953_, 0, v_fuel_2922_);
lean_closure_set(v___f_2953_, 1, v_a_2952_);
v___x_2954_ = lean_st_ref_get(v___y_2944_);
v_env_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc_ref(v_env_2955_);
lean_dec(v___x_2954_);
v___x_2956_ = l_Lean_Meta_Transport_transportExt;
v_ext_2957_ = lean_ctor_get(v___x_2956_, 1);
v_toEnvExtension_2958_ = lean_ctor_get(v_ext_2957_, 0);
v_asyncMode_2959_ = lean_ctor_get(v_toEnvExtension_2958_, 2);
v___x_2960_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2928_, v___x_2956_, v_env_2955_, v_asyncMode_2959_);
lean_inc(v___x_2960_);
v___x_2961_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2960_, v_a_2952_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2963_; 
v_a_2962_ = lean_ctor_get(v___x_2961_, 0);
lean_inc(v_a_2962_);
lean_dec_ref_known(v___x_2961_, 1);
v___x_2963_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2962_, v___f_2953_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
lean_dec(v_a_2962_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_3038_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_2966_ = v___x_2963_;
v_isShared_2967_ = v_isSharedCheck_3038_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2963_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_3038_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
if (lean_obj_tag(v_a_2964_) == 0)
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_3033_; 
lean_del_object(v___x_2966_);
v_a_2968_ = lean_ctor_get(v_a_2964_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v_a_2964_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_2970_ = v_a_2964_;
v_isShared_2971_ = v_isSharedCheck_3033_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v_a_2964_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_3033_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lean_Meta_mkFreshLevelMVar(v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2974_; lean_object* v___x_2976_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
v___x_2974_ = l_Lean_mkSort(v_a_2973_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set_tag(v___x_2970_, 1);
lean_ctor_set(v___x_2970_, 0, v___x_2974_);
v___x_2976_ = v___x_2970_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_3024_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
uint8_t v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2977_ = 0;
v___x_2978_ = lean_box(0);
v___x_2979_ = l_Lean_Meta_mkFreshExprMVar(v___x_2976_, v___x_2977_, v___x_2978_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v_a_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
lean_inc_n(v_a_2980_, 2);
lean_dec_ref_known(v___x_2979_, 1);
lean_inc_ref(v___x_2948_);
v___x_2981_ = lean_array_push(v___x_2948_, v_a_2980_);
lean_inc(v_a_2935_);
v___x_2982_ = lean_array_push(v___x_2981_, v_a_2935_);
v___x_2983_ = l_Lean_Meta_mkAppM(v___x_2946_, v___x_2982_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2983_) == 0)
{
lean_object* v_a_2984_; lean_object* v___f_2985_; lean_object* v___x_2986_; 
v_a_2984_ = lean_ctor_get(v___x_2983_, 0);
lean_inc_n(v_a_2984_, 2);
lean_dec_ref_known(v___x_2983_, 1);
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___f_2985_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 14, 8);
lean_closure_set(v___f_2985_, 0, v_fuel_2922_);
lean_closure_set(v___f_2985_, 1, v_a_2984_);
lean_closure_set(v___f_2985_, 2, v_a_2980_);
lean_closure_set(v___f_2985_, 3, v_a_2930_);
lean_closure_set(v___f_2985_, 4, v___x_2945_);
lean_closure_set(v___f_2985_, 5, v___x_2948_);
lean_closure_set(v___f_2985_, 6, v___y_2940_);
lean_closure_set(v___f_2985_, 7, v_a_2935_);
v___x_2986_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_2960_, v_a_2984_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_2987_, v___f_2985_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
lean_dec(v_a_2987_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3007_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_3007_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3007_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
if (lean_obj_tag(v_a_2989_) == 0)
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
lean_dec_ref_known(v_a_2989_, 1);
lean_del_object(v___x_2991_);
v___x_2993_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1);
v___x_2994_ = l_Lean_indentExpr(v_a_2930_);
v___x_2995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2993_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
v___x_2996_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3);
v___x_2997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2995_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = l_Lean_indentExpr(v_a_2935_);
v___x_2999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2997_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = l_Lean_MessageData_note(v_a_2968_);
v___x_3001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2999_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
v___x_3002_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3001_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
return v___x_3002_;
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; 
lean_dec(v_a_2968_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
v_a_3003_ = lean_ctor_get(v_a_2989_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v_a_2989_, 1);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v_a_3003_);
v___x_3005_ = v___x_2991_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec(v_a_2968_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
v_a_3008_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2988_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2988_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec_ref(v___f_2985_);
lean_dec(v_a_2968_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
v_a_3016_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_2986_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_2986_);
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
else
{
lean_dec(v_a_2980_);
lean_dec(v_a_2968_);
lean_dec(v___x_2960_);
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_2983_;
}
}
else
{
lean_dec(v_a_2968_);
lean_dec(v___x_2960_);
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_2979_;
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_del_object(v___x_2970_);
lean_dec(v_a_2968_);
lean_dec(v___x_2960_);
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3025_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_2972_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_2972_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; 
lean_dec(v___x_2960_);
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3034_ = lean_ctor_get(v_a_2964_, 0);
lean_inc(v_a_3034_);
lean_dec_ref_known(v_a_2964_, 1);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 0, v_a_3034_);
v___x_3036_ = v___x_2966_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3034_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec(v___x_2960_);
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3039_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_2963_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_2963_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
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
else
{
lean_object* v_a_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3054_; 
lean_dec(v___x_2960_);
lean_dec_ref(v___f_2953_);
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3047_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_3054_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3049_ = v___x_2961_;
v_isShared_3050_ = v_isSharedCheck_3054_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_a_3047_);
lean_dec(v___x_2961_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3054_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v___x_3052_; 
if (v_isShared_3050_ == 0)
{
v___x_3052_ = v___x_3049_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v_a_3047_);
v___x_3052_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
return v___x_3052_;
}
}
}
}
else
{
lean_dec_ref(v___x_2948_);
lean_dec(v___y_2940_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_2951_;
}
}
v___jp_3055_:
{
if (lean_obj_tag(v___y_3056_) == 0)
{
lean_object* v_a_3057_; uint8_t v___x_3058_; 
v_a_3057_ = lean_ctor_get(v___y_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___y_3056_, 1);
v___x_3058_ = lean_unbox(v_a_3057_);
if (v___x_3058_ == 0)
{
lean_object* v___x_3059_; uint8_t v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(0u);
v___x_3060_ = lean_nat_dec_eq(v_fuel_2922_, v___x_3059_);
if (v___x_3060_ == 0)
{
v___y_2940_ = v_a_3057_;
v___y_2941_ = v_a_2923_;
v___y_2942_ = v_a_2924_;
v___y_2943_ = v_a_2925_;
v___y_2944_ = v_a_2926_;
goto v___jp_2939_;
}
else
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3061_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2930_);
v___x_3062_ = l_Lean_indentExpr(v_a_2930_);
v___x_3063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3061_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3063_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
lean_inc(v_a_2935_);
v___x_3066_ = l_Lean_indentExpr(v_a_2935_);
v___x_3067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3065_);
lean_ctor_set(v___x_3067_, 1, v___x_3066_);
v___x_3068_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3067_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_dec_ref_known(v___x_3068_, 1);
v___y_2940_ = v_a_3057_;
v___y_2941_ = v_a_2923_;
v___y_2942_ = v_a_2924_;
v___y_2943_ = v_a_2925_;
v___y_2944_ = v_a_2926_;
goto v___jp_2939_;
}
else
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
lean_dec(v_a_3057_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_3068_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3068_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
else
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; 
lean_dec(v_a_3057_);
lean_dec(v_a_2935_);
lean_dec(v_fuel_2922_);
v___x_3077_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3078_ = lean_unsigned_to_nat(1u);
v___x_3079_ = lean_mk_empty_array_with_capacity(v___x_3078_);
v___x_3080_ = lean_array_push(v___x_3079_, v_a_2930_);
v___x_3081_ = l_Lean_Meta_mkAppM(v___x_3077_, v___x_3080_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
return v___x_3081_;
}
}
else
{
lean_object* v_a_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3082_ = lean_ctor_get(v___y_3056_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___y_3056_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3084_ = v___y_3056_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_a_3082_);
lean_dec(v___y_3056_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_a_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
v___jp_3090_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3096_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__0));
v___x_3097_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3098_ = lean_unsigned_to_nat(2u);
v___x_3099_ = lean_mk_empty_array_with_capacity(v___x_3098_);
lean_inc(v_a_2930_);
lean_inc_ref(v___x_3099_);
v___x_3100_ = lean_array_push(v___x_3099_, v_a_2930_);
lean_inc(v_a_2935_);
v___x_3101_ = lean_array_push(v___x_3100_, v_a_2935_);
v___x_3102_ = l_Lean_Meta_mkAppM(v___x_3097_, v___x_3101_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v___f_3104_; lean_object* v___x_3105_; lean_object* v_env_3106_; lean_object* v___x_3107_; lean_object* v_ext_3108_; lean_object* v_toEnvExtension_3109_; lean_object* v_asyncMode_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc_n(v_a_3103_, 2);
lean_dec_ref_known(v___x_3102_, 1);
lean_inc(v_fuel_2922_);
v___f_3104_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3104_, 0, v_fuel_2922_);
lean_closure_set(v___f_3104_, 1, v_a_3103_);
v___x_3105_ = lean_st_ref_get(v___y_3095_);
v_env_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc_ref(v_env_3106_);
lean_dec(v___x_3105_);
v___x_3107_ = l_Lean_Meta_Transport_transportExt;
v_ext_3108_ = lean_ctor_get(v___x_3107_, 1);
v_toEnvExtension_3109_ = lean_ctor_get(v_ext_3108_, 0);
v_asyncMode_3110_ = lean_ctor_get(v_toEnvExtension_3109_, 2);
v___x_3111_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2928_, v___x_3107_, v_env_3106_, v_asyncMode_3110_);
lean_inc(v___x_3111_);
v___x_3112_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3111_, v_a_3103_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; lean_object* v___x_3114_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3112_, 1);
v___x_3114_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3113_, v___f_3104_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
lean_dec(v_a_3113_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3189_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3117_ = v___x_3114_;
v_isShared_3118_ = v_isSharedCheck_3189_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3189_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
if (lean_obj_tag(v_a_3115_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3184_; 
lean_del_object(v___x_3117_);
v_a_3119_ = lean_ctor_get(v_a_3115_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_a_3115_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3121_ = v_a_3115_;
v_isShared_3122_ = v_isSharedCheck_3184_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v_a_3115_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3184_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; 
v___x_3123_ = l_Lean_Meta_mkFreshLevelMVar(v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3125_; lean_object* v___x_3127_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
v___x_3125_ = l_Lean_mkSort(v_a_3124_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set_tag(v___x_3121_, 1);
lean_ctor_set(v___x_3121_, 0, v___x_3125_);
v___x_3127_ = v___x_3121_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v___x_3125_);
v___x_3127_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
uint8_t v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3128_ = 0;
v___x_3129_ = lean_box(0);
v___x_3130_ = l_Lean_Meta_mkFreshExprMVar(v___x_3127_, v___x_3128_, v___x_3129_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc_n(v_a_3131_, 2);
lean_dec_ref_known(v___x_3130_, 1);
lean_inc_ref(v___x_3099_);
v___x_3132_ = lean_array_push(v___x_3099_, v_a_3131_);
lean_inc(v_a_2935_);
v___x_3133_ = lean_array_push(v___x_3132_, v_a_2935_);
v___x_3134_ = l_Lean_Meta_mkAppM(v___x_3097_, v___x_3133_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___f_3136_; lean_object* v___x_3137_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc_n(v_a_3135_, 2);
lean_dec_ref_known(v___x_3134_, 1);
lean_inc(v_a_2935_);
lean_inc(v_a_2930_);
v___f_3136_ = lean_alloc_closure((void*)(l_Lean_Meta_Transport_mkEquiv___lam__1___boxed), 14, 8);
lean_closure_set(v___f_3136_, 0, v_fuel_2922_);
lean_closure_set(v___f_3136_, 1, v_a_3135_);
lean_closure_set(v___f_3136_, 2, v_a_3131_);
lean_closure_set(v___f_3136_, 3, v_a_2930_);
lean_closure_set(v___f_3136_, 4, v___x_3096_);
lean_closure_set(v___f_3136_, 5, v___x_3099_);
lean_closure_set(v___f_3136_, 6, v___y_3091_);
lean_closure_set(v___f_3136_, 7, v_a_2935_);
v___x_3137_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v___x_3111_, v_a_3135_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3139_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3139_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_firstSuccess(v_a_3138_, v___f_3136_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
lean_dec(v_a_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3158_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3142_ = v___x_3139_;
v_isShared_3143_ = v_isSharedCheck_3158_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3139_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3158_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
if (lean_obj_tag(v_a_3140_) == 0)
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
lean_dec_ref_known(v_a_3140_, 1);
lean_del_object(v___x_3142_);
v___x_3144_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__1);
v___x_3145_ = l_Lean_indentExpr(v_a_2930_);
v___x_3146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3, &l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___lam__3___closed__3);
v___x_3148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3146_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
v___x_3149_ = l_Lean_indentExpr(v_a_2935_);
v___x_3150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3148_);
lean_ctor_set(v___x_3150_, 1, v___x_3149_);
v___x_3151_ = l_Lean_MessageData_note(v_a_3119_);
v___x_3152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3150_);
lean_ctor_set(v___x_3152_, 1, v___x_3151_);
v___x_3153_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3152_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
return v___x_3153_;
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; 
lean_dec(v_a_3119_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
v_a_3154_ = lean_ctor_get(v_a_3140_, 0);
lean_inc(v_a_3154_);
lean_dec_ref_known(v_a_3140_, 1);
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 0, v_a_3154_);
v___x_3156_ = v___x_3142_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3154_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3166_; 
lean_dec(v_a_3119_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
v_a_3159_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3161_ = v___x_3139_;
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3139_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3164_; 
if (v_isShared_3162_ == 0)
{
v___x_3164_ = v___x_3161_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_a_3159_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
return v___x_3164_;
}
}
}
}
else
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
lean_dec_ref(v___f_3136_);
lean_dec(v_a_3119_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
v_a_3167_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3137_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3137_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
else
{
lean_dec(v_a_3131_);
lean_dec(v_a_3119_);
lean_dec(v___x_3111_);
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_3134_;
}
}
else
{
lean_dec(v_a_3119_);
lean_dec(v___x_3111_);
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_3130_;
}
}
}
else
{
lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
lean_del_object(v___x_3121_);
lean_dec(v_a_3119_);
lean_dec(v___x_3111_);
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3176_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___x_3123_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_dec(v___x_3123_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
}
else
{
lean_object* v_a_3185_; lean_object* v___x_3187_; 
lean_dec(v___x_3111_);
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3185_ = lean_ctor_get(v_a_3115_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v_a_3115_, 1);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v_a_3185_);
v___x_3187_ = v___x_3117_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3185_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
else
{
lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3197_; 
lean_dec(v___x_3111_);
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3190_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3192_ = v___x_3114_;
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3114_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3195_; 
if (v_isShared_3193_ == 0)
{
v___x_3195_ = v___x_3192_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_a_3190_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
}
}
else
{
lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3205_; 
lean_dec(v___x_3111_);
lean_dec_ref(v___f_3104_);
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3198_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3200_ = v___x_3112_;
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v___x_3112_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3203_; 
if (v_isShared_3201_ == 0)
{
v___x_3203_ = v___x_3200_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_a_3198_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
}
else
{
lean_dec_ref(v___x_3099_);
lean_dec(v___y_3091_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_3102_;
}
}
v___jp_3206_:
{
if (lean_obj_tag(v___y_3207_) == 0)
{
lean_object* v_a_3208_; uint8_t v___x_3209_; 
v_a_3208_ = lean_ctor_get(v___y_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref_known(v___y_3207_, 1);
v___x_3209_ = lean_unbox(v_a_3208_);
if (v___x_3209_ == 0)
{
lean_object* v___x_3210_; uint8_t v___x_3211_; 
v___x_3210_ = lean_unsigned_to_nat(0u);
v___x_3211_ = lean_nat_dec_eq(v_fuel_2922_, v___x_3210_);
if (v___x_3211_ == 0)
{
v___y_3091_ = v_a_3208_;
v___y_3092_ = v_a_2923_;
v___y_3093_ = v_a_2924_;
v___y_3094_ = v_a_2925_;
v___y_3095_ = v_a_2926_;
goto v___jp_3090_;
}
else
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3212_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__1, &l_Lean_Meta_Transport_mkEquiv___closed__1_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__1);
lean_inc(v_a_2930_);
v___x_3213_ = l_Lean_indentExpr(v_a_2930_);
v___x_3214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3212_);
lean_ctor_set(v___x_3214_, 1, v___x_3213_);
v___x_3215_ = lean_obj_once(&l_Lean_Meta_Transport_mkEquiv___closed__3, &l_Lean_Meta_Transport_mkEquiv___closed__3_once, _init_l_Lean_Meta_Transport_mkEquiv___closed__3);
v___x_3216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3214_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
lean_inc(v_a_2935_);
v___x_3217_ = l_Lean_indentExpr(v_a_2935_);
v___x_3218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3216_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
v___x_3219_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3218_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_dec_ref_known(v___x_3219_, 1);
v___y_3091_ = v_a_3208_;
v___y_3092_ = v_a_2923_;
v___y_3093_ = v_a_2924_;
v___y_3094_ = v_a_2925_;
v___y_3095_ = v_a_2926_;
goto v___jp_3090_;
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_dec(v_a_3208_);
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
}
else
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
lean_dec(v_a_3208_);
lean_dec(v_a_2935_);
lean_dec(v_fuel_2922_);
v___x_3228_ = ((lean_object*)(l_Lean_Meta_Transport_mkEquiv___closed__5));
v___x_3229_ = lean_unsigned_to_nat(1u);
v___x_3230_ = lean_mk_empty_array_with_capacity(v___x_3229_);
v___x_3231_ = lean_array_push(v___x_3230_, v_a_2930_);
v___x_3232_ = l_Lean_Meta_mkAppM(v___x_3228_, v___x_3231_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_);
return v___x_3232_;
}
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec(v_a_2935_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
v_a_3233_ = lean_ctor_get(v___y_3207_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___y_3207_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___y_3207_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___y_3207_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_2932_);
lean_dec(v_a_2930_);
lean_dec(v_fuel_2922_);
return v___x_2934_;
}
}
}
else
{
lean_dec(v_fuel_2922_);
lean_dec_ref(v_tgt_2921_);
return v___x_2929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(lean_object* v_fuel_3463_, uint8_t v___x_3464_, uint8_t v___x_3465_, lean_object* v_xs_3466_, lean_object* v_body_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3473_ = l_Lean_Expr_appFn_x21(v_body_3467_);
v___x_3474_ = l_Lean_Expr_appArg_x21(v___x_3473_);
lean_dec_ref(v___x_3473_);
v___x_3475_ = l_Lean_Expr_appArg_x21(v_body_3467_);
v___x_3476_ = l_Lean_Meta_Transport_mkEquiv(v___x_3474_, v___x_3475_, v_fuel_3463_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; uint8_t v___x_3478_; lean_object* v___x_3479_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref_known(v___x_3476_, 1);
v___x_3478_ = 1;
v___x_3479_ = l_Lean_Meta_mkLambdaFVars(v_xs_3466_, v_a_3477_, v___x_3464_, v___x_3465_, v___x_3464_, v___x_3465_, v___x_3478_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
return v___x_3479_;
}
else
{
return v___x_3476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed(lean_object* v_fuel_3480_, lean_object* v___x_3481_, lean_object* v___x_3482_, lean_object* v_xs_3483_, lean_object* v_body_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_){
_start:
{
uint8_t v___x_36943__boxed_3490_; uint8_t v___x_36944__boxed_3491_; lean_object* v_res_3492_; 
v___x_36943__boxed_3490_ = lean_unbox(v___x_3481_);
v___x_36944__boxed_3491_ = lean_unbox(v___x_3482_);
v_res_3492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0(v_fuel_3480_, v___x_36943__boxed_3490_, v___x_36944__boxed_3491_, v_xs_3483_, v_body_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
lean_dec(v___y_3488_);
lean_dec_ref(v___y_3487_);
lean_dec(v___y_3486_);
lean_dec_ref(v___y_3485_);
lean_dec_ref(v_body_3484_);
lean_dec_ref(v_xs_3483_);
return v_res_3492_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__0));
v___x_3495_ = l_Lean_stringToMessageData(v___x_3494_);
return v___x_3495_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__2));
v___x_3498_ = l_Lean_stringToMessageData(v___x_3497_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(lean_object* v_fuel_3499_, lean_object* v_declName_3500_, lean_object* v_as_3501_, size_t v_sz_3502_, size_t v_i_3503_, lean_object* v_b_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_a_3511_; uint8_t v___x_3515_; 
v___x_3515_ = lean_usize_dec_lt(v_i_3503_, v_sz_3502_);
if (v___x_3515_ == 0)
{
lean_object* v___x_3516_; 
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v___x_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3516_, 0, v_b_3504_);
return v___x_3516_;
}
else
{
lean_object* v_array_3517_; lean_object* v_start_3518_; lean_object* v_stop_3519_; uint8_t v___x_3520_; 
v_array_3517_ = lean_ctor_get(v_b_3504_, 0);
v_start_3518_ = lean_ctor_get(v_b_3504_, 1);
v_stop_3519_ = lean_ctor_get(v_b_3504_, 2);
v___x_3520_ = lean_nat_dec_lt(v_start_3518_, v_stop_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; 
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v___x_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3521_, 0, v_b_3504_);
return v___x_3521_;
}
else
{
lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3640_; 
lean_inc(v_stop_3519_);
lean_inc(v_start_3518_);
lean_inc_ref(v_array_3517_);
v_isSharedCheck_3640_ = !lean_is_exclusive(v_b_3504_);
if (v_isSharedCheck_3640_ == 0)
{
lean_object* v_unused_3641_; lean_object* v_unused_3642_; lean_object* v_unused_3643_; 
v_unused_3641_ = lean_ctor_get(v_b_3504_, 2);
lean_dec(v_unused_3641_);
v_unused_3642_ = lean_ctor_get(v_b_3504_, 1);
lean_dec(v_unused_3642_);
v_unused_3643_ = lean_ctor_get(v_b_3504_, 0);
lean_dec(v_unused_3643_);
v___x_3523_ = v_b_3504_;
v_isShared_3524_ = v_isSharedCheck_3640_;
goto v_resetjp_3522_;
}
else
{
lean_dec(v_b_3504_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3640_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3525_; lean_object* v_a_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
v___x_3525_ = lean_box(0);
v_a_3526_ = lean_array_uget_borrowed(v_as_3501_, v_i_3503_);
v___x_3527_ = lean_array_fget(v_array_3517_, v_start_3518_);
v___x_3528_ = lean_unsigned_to_nat(1u);
v___x_3529_ = lean_nat_add(v_start_3518_, v___x_3528_);
lean_dec(v_start_3518_);
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 1, v___x_3529_);
v___x_3531_ = v___x_3523_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_array_3517_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v___x_3529_);
lean_ctor_set(v_reuseFailAlloc_3639_, 2, v_stop_3519_);
v___x_3531_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3532_ = l_Lean_Expr_mvarId_x21(v_a_3526_);
v___x_3533_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v___x_3532_, v___y_3506_);
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_object* v_a_3534_; uint8_t v___x_3535_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3533_, 1);
v___x_3535_ = lean_unbox(v_a_3534_);
lean_dec(v_a_3534_);
if (v___x_3535_ == 0)
{
lean_object* v___x_3536_; 
lean_inc(v___x_3532_);
v___x_3536_ = l_Lean_MVarId_getDecl(v___x_3532_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v_a_3537_; lean_object* v_userName_3538_; lean_object* v_type_3539_; lean_object* v___x_3540_; 
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3536_, 1);
v_userName_3538_ = lean_ctor_get(v_a_3537_, 0);
lean_inc(v_userName_3538_);
v_type_3539_ = lean_ctor_get(v_a_3537_, 2);
lean_inc_ref(v_type_3539_);
lean_dec(v_a_3537_);
v___x_3540_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_type_3539_, v___y_3506_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v_a_3541_; uint8_t v___x_3542_; uint8_t v___x_3543_; 
v_a_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3541_);
lean_dec_ref_known(v___x_3540_, 1);
v___x_3542_ = lean_unbox(v___x_3527_);
lean_dec(v___x_3527_);
v___x_3543_ = l_Lean_BinderInfo_isInstImplicit(v___x_3542_);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___f_3546_; lean_object* v___x_3547_; 
v___x_3544_ = lean_box(v___x_3543_);
v___x_3545_ = lean_box(v___x_3520_);
lean_inc(v_fuel_3499_);
v___f_3546_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3546_, 0, v_fuel_3499_);
lean_closure_set(v___f_3546_, 1, v___x_3544_);
lean_closure_set(v___f_3546_, 2, v___x_3545_);
lean_inc(v_a_3541_);
v___x_3547_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily(v_a_3541_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; uint8_t v___x_3549_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v___x_3547_, 1);
v___x_3549_ = lean_unbox(v_a_3548_);
if (v___x_3549_ == 0)
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; uint8_t v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
lean_dec_ref(v___f_3546_);
lean_dec(v_a_3541_);
lean_dec(v___x_3532_);
v___x_3550_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__1);
v___x_3551_ = l_Lean_MessageData_ofName(v_userName_3538_);
v___x_3552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3550_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
v___x_3553_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___closed__3);
v___x_3554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3552_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v___x_3555_ = lean_unbox(v_a_3548_);
lean_dec(v_a_3548_);
lean_inc(v_declName_3500_);
v___x_3556_ = l_Lean_MessageData_ofConstName(v_declName_3500_, v___x_3555_);
v___x_3557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3554_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
v___x_3558_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3557_);
lean_ctor_set(v___x_3559_, 1, v___x_3558_);
v___x_3560_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3559_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_dec_ref_known(v___x_3560_, 1);
v_a_3511_ = v___x_3531_;
goto v___jp_3510_;
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
lean_dec_ref(v___x_3531_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3561_ = lean_ctor_get(v___x_3560_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3563_ = v___x_3560_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3560_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3561_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
}
else
{
lean_object* v___x_3569_; 
lean_dec(v_a_3548_);
lean_dec(v_userName_3538_);
v___x_3569_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily_spec__0___redArg(v_a_3541_, v___f_3546_, v___x_3543_, v___x_3543_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3571_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_a_3570_);
lean_dec_ref_known(v___x_3569_, 1);
v___x_3571_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3532_, v_a_3570_, v___y_3506_);
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_dec_ref_known(v___x_3571_, 1);
v_a_3511_ = v___x_3531_;
goto v___jp_3510_;
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
lean_dec_ref(v___x_3531_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3571_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3574_ = v___x_3571_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3571_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_a_3572_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
else
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
lean_dec(v___x_3532_);
lean_dec_ref(v___x_3531_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3580_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3569_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3569_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec_ref(v___f_3546_);
lean_dec(v_a_3541_);
lean_dec(v_userName_3538_);
lean_dec(v___x_3532_);
lean_dec_ref(v___x_3531_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3588_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3547_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3547_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
else
{
lean_object* v___x_3596_; 
lean_dec(v_userName_3538_);
v___x_3596_ = l_Lean_Meta_synthInstance(v_a_3541_, v___x_3525_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v___x_3598_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref_known(v___x_3596_, 1);
v___x_3598_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v___x_3532_, v_a_3597_, v___y_3506_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_dec_ref_known(v___x_3598_, 1);
v_a_3511_ = v___x_3531_;
goto v___jp_3510_;
}
else
{
lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3606_; 
lean_dec_ref(v___x_3531_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3601_ = v___x_3598_;
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_dec(v___x_3598_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3604_; 
if (v_isShared_3602_ == 0)
{
v___x_3604_ = v___x_3601_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3599_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3614_; 
lean_dec(v___x_3532_);
lean_dec_ref(v___x_3531_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3607_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___x_3596_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3596_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
}
else
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3622_; 
lean_dec(v_userName_3538_);
lean_dec(v___x_3532_);
lean_dec_ref(v___x_3531_);
lean_dec(v___x_3527_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3615_ = lean_ctor_get(v___x_3540_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3540_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3617_ = v___x_3540_;
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3540_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3620_; 
if (v_isShared_3618_ == 0)
{
v___x_3620_ = v___x_3617_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_a_3615_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_dec(v___x_3532_);
lean_dec_ref(v___x_3531_);
lean_dec(v___x_3527_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3623_ = lean_ctor_get(v___x_3536_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3536_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3536_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3536_);
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
else
{
lean_dec(v___x_3532_);
lean_dec(v___x_3527_);
v_a_3511_ = v___x_3531_;
goto v___jp_3510_;
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec(v___x_3532_);
lean_dec_ref(v___x_3531_);
lean_dec(v___x_3527_);
lean_dec(v_declName_3500_);
lean_dec(v_fuel_3499_);
v_a_3631_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3533_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3533_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
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
}
}
}
v___jp_3510_:
{
size_t v___x_3512_; size_t v___x_3513_; 
v___x_3512_ = ((size_t)1ULL);
v___x_3513_ = lean_usize_add(v_i_3503_, v___x_3512_);
v_i_3503_ = v___x_3513_;
v_b_3504_ = v_a_3511_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1(void){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3645_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__0));
v___x_3646_ = l_Lean_stringToMessageData(v___x_3645_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(lean_object* v_declName_3647_, lean_object* v_goal_3648_, lean_object* v_fuel_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_){
_start:
{
lean_object* v___x_3655_; 
lean_inc(v_declName_3647_);
v___x_3655_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_3647_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3710_; lean_object* v___x_3743_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
lean_inc_n(v_a_3656_, 2);
lean_dec_ref_known(v___x_3655_, 1);
lean_inc(v_a_3653_);
lean_inc_ref(v_a_3652_);
lean_inc(v_a_3651_);
lean_inc_ref(v_a_3650_);
v___x_3743_ = lean_infer_type(v_a_3656_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; lean_object* v___x_3745_; uint8_t v_transparency_3746_; lean_object* v___x_3747_; uint8_t v___x_3748_; uint8_t v___x_3749_; uint8_t v___x_3750_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3744_);
lean_dec_ref_known(v___x_3743_, 1);
v___x_3745_ = l_Lean_Meta_Context_config(v_a_3650_);
v_transparency_3746_ = lean_ctor_get_uint8(v___x_3745_, 9);
lean_dec_ref(v___x_3745_);
v___x_3747_ = lean_box(0);
v___x_3748_ = 0;
v___x_3749_ = 2;
v___x_3750_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3746_, v___x_3749_);
if (v___x_3750_ == 0)
{
lean_object* v_keyedConfig_3751_; uint8_t v_trackZetaDelta_3752_; lean_object* v_zetaDeltaSet_3753_; lean_object* v_lctx_3754_; lean_object* v_localInstances_3755_; lean_object* v_defEqCtx_x3f_3756_; lean_object* v_synthPendingDepth_3757_; lean_object* v_customCanUnfoldPredicate_x3f_3758_; uint8_t v_univApprox_3759_; uint8_t v_inTypeClassResolution_3760_; uint8_t v_cacheInferType_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v_keyedConfig_3751_ = lean_ctor_get(v_a_3650_, 0);
v_trackZetaDelta_3752_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7);
v_zetaDeltaSet_3753_ = lean_ctor_get(v_a_3650_, 1);
v_lctx_3754_ = lean_ctor_get(v_a_3650_, 2);
v_localInstances_3755_ = lean_ctor_get(v_a_3650_, 3);
v_defEqCtx_x3f_3756_ = lean_ctor_get(v_a_3650_, 4);
v_synthPendingDepth_3757_ = lean_ctor_get(v_a_3650_, 5);
v_customCanUnfoldPredicate_x3f_3758_ = lean_ctor_get(v_a_3650_, 6);
v_univApprox_3759_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3760_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7 + 2);
v_cacheInferType_3761_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3751_);
v___x_3762_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3749_, v_keyedConfig_3751_);
lean_inc(v_customCanUnfoldPredicate_x3f_3758_);
lean_inc(v_synthPendingDepth_3757_);
lean_inc(v_defEqCtx_x3f_3756_);
lean_inc_ref(v_localInstances_3755_);
lean_inc_ref(v_lctx_3754_);
lean_inc(v_zetaDeltaSet_3753_);
v___x_3763_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
lean_ctor_set(v___x_3763_, 1, v_zetaDeltaSet_3753_);
lean_ctor_set(v___x_3763_, 2, v_lctx_3754_);
lean_ctor_set(v___x_3763_, 3, v_localInstances_3755_);
lean_ctor_set(v___x_3763_, 4, v_defEqCtx_x3f_3756_);
lean_ctor_set(v___x_3763_, 5, v_synthPendingDepth_3757_);
lean_ctor_set(v___x_3763_, 6, v_customCanUnfoldPredicate_x3f_3758_);
lean_ctor_set_uint8(v___x_3763_, sizeof(void*)*7, v_trackZetaDelta_3752_);
lean_ctor_set_uint8(v___x_3763_, sizeof(void*)*7 + 1, v_univApprox_3759_);
lean_ctor_set_uint8(v___x_3763_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3760_);
lean_ctor_set_uint8(v___x_3763_, sizeof(void*)*7 + 3, v_cacheInferType_3761_);
v___x_3764_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3744_, v___x_3747_, v___x_3748_, v___x_3763_, v_a_3651_, v_a_3652_, v_a_3653_);
lean_dec_ref_known(v___x_3763_, 7);
v___y_3710_ = v___x_3764_;
goto v___jp_3709_;
}
else
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_3744_, v___x_3747_, v___x_3748_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
v___y_3710_ = v___x_3765_;
goto v___jp_3709_;
}
}
else
{
lean_dec(v_a_3656_);
lean_dec(v_fuel_3649_);
lean_dec_ref(v_goal_3648_);
lean_dec(v_declName_3647_);
return v___x_3743_;
}
v___jp_3657_:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; size_t v_sz_3667_; size_t v___x_3668_; lean_object* v___x_3669_; 
v___x_3664_ = lean_unsigned_to_nat(0u);
v___x_3665_ = lean_array_get_size(v___y_3658_);
v___x_3666_ = l_Array_toSubarray___redArg(v___y_3658_, v___x_3664_, v___x_3665_);
v_sz_3667_ = lean_array_size(v___y_3659_);
v___x_3668_ = ((size_t)0ULL);
v___x_3669_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_fuel_3649_, v_declName_3647_, v___y_3659_, v_sz_3667_, v___x_3668_, v___x_3666_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v___x_3670_; lean_object* v___x_3671_; 
lean_dec_ref_known(v___x_3669_, 1);
v___x_3670_ = l_Lean_mkAppN(v_a_3656_, v___y_3659_);
lean_dec_ref(v___y_3659_);
v___x_3671_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v___x_3670_, v___y_3661_);
return v___x_3671_;
}
else
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
lean_dec_ref(v___y_3659_);
lean_dec(v_a_3656_);
v_a_3672_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3669_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3669_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
v___jp_3680_:
{
if (lean_obj_tag(v___y_3683_) == 0)
{
lean_object* v_a_3684_; uint8_t v___x_3685_; 
v_a_3684_ = lean_ctor_get(v___y_3683_, 0);
lean_inc(v_a_3684_);
lean_dec_ref_known(v___y_3683_, 1);
v___x_3685_ = lean_unbox(v_a_3684_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; uint8_t v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3686_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_Transport_addTransportDecl_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_3687_ = lean_unbox(v_a_3684_);
lean_dec(v_a_3684_);
lean_inc(v_declName_3647_);
v___x_3688_ = l_Lean_MessageData_ofConstName(v_declName_3647_, v___x_3687_);
v___x_3689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3686_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = lean_obj_once(&l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1, &l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1_once, _init_l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___closed__1);
v___x_3691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3689_);
lean_ctor_set(v___x_3691_, 1, v___x_3690_);
v___x_3692_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3691_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_dec_ref_known(v___x_3692_, 1);
v___y_3658_ = v___y_3681_;
v___y_3659_ = v___y_3682_;
v___y_3660_ = v_a_3650_;
v___y_3661_ = v_a_3651_;
v___y_3662_ = v_a_3652_;
v___y_3663_ = v_a_3653_;
goto v___jp_3657_;
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_dec_ref(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec(v_a_3656_);
lean_dec(v_fuel_3649_);
lean_dec(v_declName_3647_);
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3692_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3692_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
else
{
lean_dec(v_a_3684_);
v___y_3658_ = v___y_3681_;
v___y_3659_ = v___y_3682_;
v___y_3660_ = v_a_3650_;
v___y_3661_ = v_a_3651_;
v___y_3662_ = v_a_3652_;
v___y_3663_ = v_a_3653_;
goto v___jp_3657_;
}
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec_ref(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec(v_a_3656_);
lean_dec(v_fuel_3649_);
lean_dec(v_declName_3647_);
v_a_3701_ = lean_ctor_get(v___y_3683_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___y_3683_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___y_3683_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___y_3683_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
v___jp_3709_:
{
if (lean_obj_tag(v___y_3710_) == 0)
{
lean_object* v_a_3711_; lean_object* v_snd_3712_; lean_object* v_fst_3713_; lean_object* v_fst_3714_; lean_object* v_snd_3715_; lean_object* v___x_3716_; uint8_t v_transparency_3717_; uint8_t v___x_3718_; uint8_t v___x_3719_; 
v_a_3711_ = lean_ctor_get(v___y_3710_, 0);
lean_inc(v_a_3711_);
lean_dec_ref_known(v___y_3710_, 1);
v_snd_3712_ = lean_ctor_get(v_a_3711_, 1);
lean_inc(v_snd_3712_);
v_fst_3713_ = lean_ctor_get(v_a_3711_, 0);
lean_inc(v_fst_3713_);
lean_dec(v_a_3711_);
v_fst_3714_ = lean_ctor_get(v_snd_3712_, 0);
lean_inc(v_fst_3714_);
v_snd_3715_ = lean_ctor_get(v_snd_3712_, 1);
lean_inc(v_snd_3715_);
lean_dec(v_snd_3712_);
v___x_3716_ = l_Lean_Meta_Context_config(v_a_3650_);
v_transparency_3717_ = lean_ctor_get_uint8(v___x_3716_, 9);
lean_dec_ref(v___x_3716_);
v___x_3718_ = 1;
v___x_3719_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3717_, v___x_3718_);
if (v___x_3719_ == 0)
{
lean_object* v_keyedConfig_3720_; uint8_t v_trackZetaDelta_3721_; lean_object* v_zetaDeltaSet_3722_; lean_object* v_lctx_3723_; lean_object* v_localInstances_3724_; lean_object* v_defEqCtx_x3f_3725_; lean_object* v_synthPendingDepth_3726_; lean_object* v_customCanUnfoldPredicate_x3f_3727_; uint8_t v_univApprox_3728_; uint8_t v_inTypeClassResolution_3729_; uint8_t v_cacheInferType_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v_keyedConfig_3720_ = lean_ctor_get(v_a_3650_, 0);
v_trackZetaDelta_3721_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7);
v_zetaDeltaSet_3722_ = lean_ctor_get(v_a_3650_, 1);
v_lctx_3723_ = lean_ctor_get(v_a_3650_, 2);
v_localInstances_3724_ = lean_ctor_get(v_a_3650_, 3);
v_defEqCtx_x3f_3725_ = lean_ctor_get(v_a_3650_, 4);
v_synthPendingDepth_3726_ = lean_ctor_get(v_a_3650_, 5);
v_customCanUnfoldPredicate_x3f_3727_ = lean_ctor_get(v_a_3650_, 6);
v_univApprox_3728_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3729_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7 + 2);
v_cacheInferType_3730_ = lean_ctor_get_uint8(v_a_3650_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3720_);
v___x_3731_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3718_, v_keyedConfig_3720_);
lean_inc(v_customCanUnfoldPredicate_x3f_3727_);
lean_inc(v_synthPendingDepth_3726_);
lean_inc(v_defEqCtx_x3f_3725_);
lean_inc_ref(v_localInstances_3724_);
lean_inc_ref(v_lctx_3723_);
lean_inc(v_zetaDeltaSet_3722_);
v___x_3732_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v_zetaDeltaSet_3722_);
lean_ctor_set(v___x_3732_, 2, v_lctx_3723_);
lean_ctor_set(v___x_3732_, 3, v_localInstances_3724_);
lean_ctor_set(v___x_3732_, 4, v_defEqCtx_x3f_3725_);
lean_ctor_set(v___x_3732_, 5, v_synthPendingDepth_3726_);
lean_ctor_set(v___x_3732_, 6, v_customCanUnfoldPredicate_x3f_3727_);
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*7, v_trackZetaDelta_3721_);
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*7 + 1, v_univApprox_3728_);
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3729_);
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*7 + 3, v_cacheInferType_3730_);
v___x_3733_ = l_Lean_Meta_isExprDefEq(v_snd_3715_, v_goal_3648_, v___x_3732_, v_a_3651_, v_a_3652_, v_a_3653_);
lean_dec_ref_known(v___x_3732_, 7);
v___y_3681_ = v_fst_3714_;
v___y_3682_ = v_fst_3713_;
v___y_3683_ = v___x_3733_;
goto v___jp_3680_;
}
else
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lean_Meta_isExprDefEq(v_snd_3715_, v_goal_3648_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
v___y_3681_ = v_fst_3714_;
v___y_3682_ = v_fst_3713_;
v___y_3683_ = v___x_3734_;
goto v___jp_3680_;
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v_a_3656_);
lean_dec(v_fuel_3649_);
lean_dec_ref(v_goal_3648_);
lean_dec(v_declName_3647_);
v_a_3735_ = lean_ctor_get(v___y_3710_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___y_3710_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___y_3710_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___y_3710_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
}
else
{
lean_dec(v_fuel_3649_);
lean_dec_ref(v_goal_3648_);
lean_dec(v_declName_3647_);
return v___x_3655_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__0(lean_object* v_fuel_3766_, lean_object* v_a_3767_, lean_object* v_x_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3774_ = lean_unsigned_to_nat(1u);
v___x_3775_ = lean_nat_sub(v_fuel_3766_, v___x_3774_);
v___x_3776_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_x_3768_, v_a_3767_, v___x_3775_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl___boxed(lean_object* v_declName_3777_, lean_object* v_goal_3778_, lean_object* v_fuel_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_){
_start:
{
lean_object* v_res_3785_; 
v_res_3785_ = l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl(v_declName_3777_, v_goal_3778_, v_fuel_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_);
lean_dec(v_a_3783_);
lean_dec_ref(v_a_3782_);
lean_dec(v_a_3781_);
lean_dec_ref(v_a_3780_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___lam__3___boxed(lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_fuel_3788_, lean_object* v___x_3789_, lean_object* v_a_3790_, lean_object* v___x_3791_, lean_object* v_____r_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_){
_start:
{
uint8_t v___x_37150__boxed_3798_; lean_object* v_res_3799_; 
v___x_37150__boxed_3798_ = lean_unbox(v___x_3791_);
v_res_3799_ = l_Lean_Meta_Transport_mkEquiv___lam__3(v_a_3786_, v_a_3787_, v_fuel_3788_, v___x_3789_, v_a_3790_, v___x_37150__boxed_3798_, v_____r_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
lean_dec(v___y_3796_);
lean_dec_ref(v___y_3795_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec_ref(v___x_3789_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2___boxed(lean_object* v_fuel_3800_, lean_object* v_declName_3801_, lean_object* v_as_3802_, lean_object* v_sz_3803_, lean_object* v_i_3804_, lean_object* v_b_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
size_t v_sz_boxed_3811_; size_t v_i_boxed_3812_; lean_object* v_res_3813_; 
v_sz_boxed_3811_ = lean_unbox_usize(v_sz_3803_);
lean_dec(v_sz_3803_);
v_i_boxed_3812_ = lean_unbox_usize(v_i_3804_);
lean_dec(v_i_3804_);
v_res_3813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__2(v_fuel_3800_, v_declName_3801_, v_as_3802_, v_sz_boxed_3811_, v_i_boxed_3812_, v_b_3805_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec_ref(v_as_3802_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Transport_mkEquiv___boxed(lean_object* v_src_3814_, lean_object* v_tgt_3815_, lean_object* v_fuel_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lean_Meta_Transport_mkEquiv(v_src_3814_, v_tgt_3815_, v_fuel_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_);
lean_dec(v_a_3820_);
lean_dec_ref(v_a_3819_);
lean_dec(v_a_3818_);
lean_dec_ref(v_a_3817_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_){
_start:
{
lean_object* v___x_3828_; 
v___x_3828_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___redArg(v___y_3826_);
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4___boxed(lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Transport_mkEquiv_spec__4(v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(lean_object* v_mvarId_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v___x_3841_; 
v___x_3841_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___redArg(v_mvarId_3835_, v___y_3837_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0___boxed(lean_object* v_mvarId_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0(v_mvarId_3842_, v___y_3843_, v___y_3844_, v___y_3845_, v___y_3846_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
lean_dec(v___y_3844_);
lean_dec_ref(v___y_3843_);
lean_dec(v_mvarId_3842_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(lean_object* v_mvarId_3849_, lean_object* v_val_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v___x_3856_; 
v___x_3856_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___redArg(v_mvarId_3849_, v_val_3850_, v___y_3852_);
return v___x_3856_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1___boxed(lean_object* v_mvarId_3857_, lean_object* v_val_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v_res_3864_; 
v_res_3864_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1(v_mvarId_3857_, v_val_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_);
lean_dec(v___y_3862_);
lean_dec_ref(v___y_3861_);
lean_dec(v___y_3860_);
lean_dec_ref(v___y_3859_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(lean_object* v_00_u03b1_3865_, lean_object* v_x_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___redArg(v_x_3866_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9___boxed(lean_object* v_00_u03b1_3873_, lean_object* v_x_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Transport_mkEquiv_spec__6_spec__9(v_00_u03b1_3873_, v_x_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_);
lean_dec(v___y_3878_);
lean_dec_ref(v___y_3877_);
lean_dec(v___y_3876_);
lean_dec_ref(v___y_3875_);
return v_res_3880_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(lean_object* v_00_u03b2_3881_, lean_object* v_x_3882_, lean_object* v_x_3883_){
_start:
{
uint8_t v___x_3884_; 
v___x_3884_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___redArg(v_x_3882_, v_x_3883_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3885_, lean_object* v_x_3886_, lean_object* v_x_3887_){
_start:
{
uint8_t v_res_3888_; lean_object* v_r_3889_; 
v_res_3888_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0(v_00_u03b2_3885_, v_x_3886_, v_x_3887_);
lean_dec(v_x_3887_);
lean_dec_ref(v_x_3886_);
v_r_3889_ = lean_box(v_res_3888_);
return v_r_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2(lean_object* v_00_u03b2_3890_, lean_object* v_x_3891_, lean_object* v_x_3892_, lean_object* v_x_3893_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2___redArg(v_x_3891_, v_x_3892_, v_x_3893_);
return v___x_3894_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_3895_, lean_object* v_x_3896_, size_t v_x_3897_, lean_object* v_x_3898_){
_start:
{
uint8_t v___x_3899_; 
v___x_3899_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___redArg(v_x_3896_, v_x_3897_, v_x_3898_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_3900_, lean_object* v_x_3901_, lean_object* v_x_3902_, lean_object* v_x_3903_){
_start:
{
size_t v_x_39120__boxed_3904_; uint8_t v_res_3905_; lean_object* v_r_3906_; 
v_x_39120__boxed_3904_ = lean_unbox_usize(v_x_3902_);
lean_dec(v_x_3902_);
v_res_3905_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4(v_00_u03b2_3900_, v_x_3901_, v_x_39120__boxed_3904_, v_x_3903_);
lean_dec(v_x_3903_);
lean_dec_ref(v_x_3901_);
v_r_3906_ = lean_box(v_res_3905_);
return v_r_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_3907_, lean_object* v_x_3908_, size_t v_x_3909_, size_t v_x_3910_, lean_object* v_x_3911_, lean_object* v_x_3912_){
_start:
{
lean_object* v___x_3913_; 
v___x_3913_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___redArg(v_x_3908_, v_x_3909_, v_x_3910_, v_x_3911_, v_x_3912_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7___boxed(lean_object* v_00_u03b2_3914_, lean_object* v_x_3915_, lean_object* v_x_3916_, lean_object* v_x_3917_, lean_object* v_x_3918_, lean_object* v_x_3919_){
_start:
{
size_t v_x_39131__boxed_3920_; size_t v_x_39132__boxed_3921_; lean_object* v_res_3922_; 
v_x_39131__boxed_3920_ = lean_unbox_usize(v_x_3916_);
lean_dec(v_x_3916_);
v_x_39132__boxed_3921_ = lean_unbox_usize(v_x_3917_);
lean_dec(v_x_3917_);
v_res_3922_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7(v_00_u03b2_3914_, v_x_3915_, v_x_39131__boxed_3920_, v_x_39132__boxed_3921_, v_x_3918_, v_x_3919_);
return v_res_3922_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b2_3923_, lean_object* v_keys_3924_, lean_object* v_vals_3925_, lean_object* v_heq_3926_, lean_object* v_i_3927_, lean_object* v_k_3928_){
_start:
{
uint8_t v___x_3929_; 
v___x_3929_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___redArg(v_keys_3924_, v_i_3927_, v_k_3928_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11___boxed(lean_object* v_00_u03b2_3930_, lean_object* v_keys_3931_, lean_object* v_vals_3932_, lean_object* v_heq_3933_, lean_object* v_i_3934_, lean_object* v_k_3935_){
_start:
{
uint8_t v_res_3936_; lean_object* v_r_3937_; 
v_res_3936_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__0_spec__0_spec__4_spec__11(v_00_u03b2_3930_, v_keys_3931_, v_vals_3932_, v_heq_3933_, v_i_3934_, v_k_3935_);
lean_dec(v_k_3935_);
lean_dec_ref(v_vals_3932_);
lean_dec_ref(v_keys_3931_);
v_r_3937_ = lean_box(v_res_3936_);
return v_r_3937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14(lean_object* v_00_u03b2_3938_, lean_object* v_n_3939_, lean_object* v_k_3940_, lean_object* v_v_3941_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14___redArg(v_n_3939_, v_k_3940_, v_v_3941_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(lean_object* v_00_u03b2_3943_, size_t v_depth_3944_, lean_object* v_keys_3945_, lean_object* v_vals_3946_, lean_object* v_heq_3947_, lean_object* v_i_3948_, lean_object* v_entries_3949_){
_start:
{
lean_object* v___x_3950_; 
v___x_3950_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___redArg(v_depth_3944_, v_keys_3945_, v_vals_3946_, v_i_3948_, v_entries_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15___boxed(lean_object* v_00_u03b2_3951_, lean_object* v_depth_3952_, lean_object* v_keys_3953_, lean_object* v_vals_3954_, lean_object* v_heq_3955_, lean_object* v_i_3956_, lean_object* v_entries_3957_){
_start:
{
size_t v_depth_boxed_3958_; lean_object* v_res_3959_; 
v_depth_boxed_3958_ = lean_unbox_usize(v_depth_3952_);
lean_dec(v_depth_3952_);
v_res_3959_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__15(v_00_u03b2_3951_, v_depth_boxed_3958_, v_keys_3953_, v_vals_3954_, v_heq_3955_, v_i_3956_, v_entries_3957_);
lean_dec_ref(v_vals_3954_);
lean_dec_ref(v_keys_3953_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16(lean_object* v_00_u03b2_3960_, lean_object* v_x_3961_, lean_object* v_x_3962_, lean_object* v_x_3963_, lean_object* v_x_3964_){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Transport_0__Lean_Meta_Transport_applyDecl_spec__1_spec__2_spec__7_spec__14_spec__16___redArg(v_x_3961_, v_x_3962_, v_x_3963_, v_x_3964_);
return v___x_3965_;
}
}
static lean_object* _init_l_Lean_Meta_mkTransportEquiv___closed__1(void){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3967_ = ((lean_object*)(l_Lean_Meta_mkTransportEquiv___closed__0));
v___x_3968_ = l_Lean_stringToMessageData(v___x_3967_);
return v___x_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv(lean_object* v_src_3969_, lean_object* v_tgt_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_){
_start:
{
lean_object* v___y_3977_; lean_object* v___y_3978_; lean_object* v___y_3979_; lean_object* v___y_3980_; lean_object* v___x_3983_; lean_object* v_env_3984_; lean_object* v___x_3985_; uint8_t v___x_3986_; uint8_t v___x_3987_; 
v___x_3983_ = lean_st_ref_get(v_a_3974_);
v_env_3984_ = lean_ctor_get(v___x_3983_, 0);
lean_inc_ref(v_env_3984_);
lean_dec(v___x_3983_);
v___x_3985_ = ((lean_object*)(l___private_Lean_Meta_Transport_0__Lean_Meta_Transport_isEquivFamily___lam__0___closed__1));
v___x_3986_ = 1;
v___x_3987_ = l_Lean_Environment_contains(v_env_3984_, v___x_3985_, v___x_3986_);
if (v___x_3987_ == 0)
{
lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v_a_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_3997_; 
lean_dec_ref(v_tgt_3970_);
lean_dec_ref(v_src_3969_);
v___x_3988_ = lean_obj_once(&l_Lean_Meta_mkTransportEquiv___closed__1, &l_Lean_Meta_mkTransportEquiv___closed__1_once, _init_l_Lean_Meta_mkTransportEquiv___closed__1);
v___x_3989_ = l_Lean_throwError___at___00Lean_Meta_Transport_addTransportDecl_spec__1___redArg(v___x_3988_, v_a_3971_, v_a_3972_, v_a_3973_, v_a_3974_);
v_a_3990_ = lean_ctor_get(v___x_3989_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v___x_3989_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3992_ = v___x_3989_;
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_a_3990_);
lean_dec(v___x_3989_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3995_; 
if (v_isShared_3993_ == 0)
{
v___x_3995_ = v___x_3992_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_a_3990_);
v___x_3995_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
return v___x_3995_;
}
}
}
else
{
v___y_3977_ = v_a_3971_;
v___y_3978_ = v_a_3972_;
v___y_3979_ = v_a_3973_;
v___y_3980_ = v_a_3974_;
goto v___jp_3976_;
}
v___jp_3976_:
{
lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3981_ = lean_unsigned_to_nat(8u);
v___x_3982_ = l_Lean_Meta_Transport_mkEquiv(v_src_3969_, v_tgt_3970_, v___x_3981_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_);
return v___x_3982_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTransportEquiv___boxed(lean_object* v_src_3998_, lean_object* v_tgt_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Lean_Meta_mkTransportEquiv(v_src_3998_, v_tgt_3999_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
lean_dec(v_a_4003_);
lean_dec_ref(v_a_4002_);
lean_dec(v_a_4001_);
lean_dec_ref(v_a_4000_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport(lean_object* v_e_4010_, lean_object* v_tgt_4011_, lean_object* v_a_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_){
_start:
{
lean_object* v___x_4017_; 
lean_inc(v_a_4015_);
lean_inc_ref(v_a_4014_);
lean_inc(v_a_4013_);
lean_inc_ref(v_a_4012_);
lean_inc_ref(v_e_4010_);
v___x_4017_ = lean_infer_type(v_e_4010_, v_a_4012_, v_a_4013_, v_a_4014_, v_a_4015_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4019_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
lean_inc(v_a_4018_);
lean_dec_ref_known(v___x_4017_, 1);
v___x_4019_ = l_Lean_Meta_mkTransportEquiv(v_a_4018_, v_tgt_4011_, v_a_4012_, v_a_4013_, v_a_4014_, v_a_4015_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v___x_4019_, 1);
v___x_4021_ = ((lean_object*)(l_Lean_Meta_transport___closed__1));
v___x_4022_ = lean_unsigned_to_nat(2u);
v___x_4023_ = lean_mk_empty_array_with_capacity(v___x_4022_);
v___x_4024_ = lean_array_push(v___x_4023_, v_a_4020_);
v___x_4025_ = lean_array_push(v___x_4024_, v_e_4010_);
v___x_4026_ = l_Lean_Meta_mkAppM(v___x_4021_, v___x_4025_, v_a_4012_, v_a_4013_, v_a_4014_, v_a_4015_);
return v___x_4026_;
}
else
{
lean_dec_ref(v_e_4010_);
return v___x_4019_;
}
}
else
{
lean_dec_ref(v_tgt_4011_);
lean_dec_ref(v_e_4010_);
return v___x_4017_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transport___boxed(lean_object* v_e_4027_, lean_object* v_tgt_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lean_Meta_transport(v_e_4027_, v_tgt_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
lean_dec(v_a_4032_);
lean_dec_ref(v_a_4031_);
lean_dec(v_a_4030_);
lean_dec_ref(v_a_4029_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance(lean_object* v_src_4035_, lean_object* v_tgt_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v___x_4042_; 
lean_inc_ref(v_src_4035_);
v___x_4042_ = l_Lean_Meta_mkTransportEquiv(v_src_4035_, v_tgt_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
if (lean_obj_tag(v___x_4042_) == 0)
{
lean_object* v_a_4043_; lean_object* v___x_4044_; lean_object* v_a_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; 
v_a_4043_ = lean_ctor_get(v___x_4042_, 0);
lean_inc(v_a_4043_);
lean_dec_ref_known(v___x_4042_, 1);
v___x_4044_ = l_Lean_instantiateMVars___at___00Lean_Meta_Transport_addTransportDecl_spec__0___redArg(v_src_4035_, v_a_4038_);
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_a_4045_);
lean_dec_ref(v___x_4044_);
v___x_4046_ = lean_box(0);
v___x_4047_ = l_Lean_Meta_synthInstance(v_a_4045_, v___x_4046_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
if (lean_obj_tag(v___x_4047_) == 0)
{
lean_object* v_a_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v_a_4048_ = lean_ctor_get(v___x_4047_, 0);
lean_inc(v_a_4048_);
lean_dec_ref_known(v___x_4047_, 1);
v___x_4049_ = ((lean_object*)(l_Lean_Meta_transport___closed__1));
v___x_4050_ = lean_unsigned_to_nat(2u);
v___x_4051_ = lean_mk_empty_array_with_capacity(v___x_4050_);
v___x_4052_ = lean_array_push(v___x_4051_, v_a_4043_);
v___x_4053_ = lean_array_push(v___x_4052_, v_a_4048_);
v___x_4054_ = l_Lean_Meta_mkAppM(v___x_4049_, v___x_4053_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
return v___x_4054_;
}
else
{
lean_dec(v_a_4043_);
return v___x_4047_;
}
}
else
{
lean_dec_ref(v_src_4035_);
return v___x_4042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transportInstance___boxed(lean_object* v_src_4055_, lean_object* v_tgt_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Lean_Meta_transportInstance(v_src_4055_, v_tgt_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_);
lean_dec(v_a_4060_);
lean_dec_ref(v_a_4059_);
lean_dec(v_a_4058_);
lean_dec_ref(v_a_4057_);
return v_res_4062_;
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
